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
ATerm ConstType_1_0 (ATerm z_61 (ATerm), ATerm);
ATerm FunType_2_0 (ATerm a_62 (ATerm), ATerm b_62 (ATerm), ATerm);
ATerm Let_2_0 (ATerm w_65 (ATerm), ATerm x_65 (ATerm), ATerm);
ATerm Op_2_0 (ATerm s_62 (ATerm), ATerm t_62 (ATerm), ATerm);
ATerm Var_1_0 (ATerm m_62 (ATerm), ATerm);
ATerm As_2_0 (ATerm d_63 (ATerm), ATerm e_63 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm j_63 (ATerm), ATerm);
ATerm Str_1_0 (ATerm q_62 (ATerm), ATerm);
ATerm is_real_0_0 (ATerm);
ATerm Real_1_0 (ATerm p_62 (ATerm), ATerm);
ATerm Int_1_0 (ATerm o_62 (ATerm), ATerm);
ATerm Wld_0_0 (ATerm);
ATerm term_expression_0_0 (ATerm);
ATerm PrimT_3_0 (ATerm c_67 (ATerm), ATerm d_67 (ATerm), ATerm e_67 (ATerm), ATerm);
ATerm Where_1_0 (ATerm w_66 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm g_66 (ATerm), ATerm h_66 (ATerm), ATerm);
ATerm Build_1_0 (ATerm e_66 (ATerm), ATerm);
ATerm Match_1_0 (ATerm d_66 (ATerm), ATerm);
ATerm Thread_1_0 (ATerm k_67 (ATerm), ATerm);
ATerm All_1_0 (ATerm j_67 (ATerm), ATerm);
ATerm Some_1_0 (ATerm h_67 (ATerm), ATerm);
ATerm One_1_0 (ATerm i_67 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm k_61 (ATerm), ATerm l_61 (ATerm), ATerm);
ATerm is_int_0_0 (ATerm);
ATerm Path_2_0 (ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm v_65 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm a_66 (ATerm), ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm);
ATerm LGChoice_2_0 (ATerm o_66 (ATerm), ATerm p_66 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm o_65 (ATerm), ATerm p_65 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm q_66 (ATerm), ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm m_66 (ATerm), ATerm n_66 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm k_65 (ATerm), ATerm l_65 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm k_66 (ATerm), ATerm l_66 (ATerm), ATerm);
ATerm Test_1_0 (ATerm x_66 (ATerm), ATerm);
ATerm Not_1_0 (ATerm v_66 (ATerm), ATerm);
ATerm Fail_0_0 (ATerm);
ATerm Id_0_0 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm h_68 (ATerm), ATerm i_68 (ATerm), ATerm);
ATerm Mod_2_0 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm list_1_0 (ATerm z_81 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm o_61 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm t_61 (ATerm), ATerm);
ATerm stratego_specification_0_0 (ATerm);
ATerm _2_0 (ATerm z_59 (ATerm), ATerm a_60 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm m_82 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_95 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm l_94 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm n_97 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm x_93 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm);
ATerm crush_2_0 (ATerm q_91 (ATerm), ATerm r_91 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_95 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm l_98 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm m_100 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm l_100 (ATerm), ATerm);
ATerm Program_1_0 (ATerm c_74 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm d_74 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_82 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm l_99 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm k_74 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm q_100 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm i_61 (ATerm), ATerm j_61 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm o_100 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm n_100 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm r_97 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm ConstType_1_0 (ATerm z_61 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,m_3 = NULL,o_3 = NULL,p_3 = NULL,r_3 = NULL,q_3 = NULL,s_3 = NULL;
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
  if(((r_3 != NULL) && (r_3 != t)))
    _fail(t);
  else
    r_3 = t;
  t = SSLgetAnnotations(not_null(p_3));
  if(((n_3 != NULL) && (n_3 != t)))
    _fail(t);
  else
    n_3 = t;
  t = not_null(m_3);
  t = z_61(t);
  if(((o_3 != NULL) && (o_3 != t)))
    _fail(t);
  else
    o_3 = t;
  if(((s_3 != NULL) && (s_3 != t)))
    _fail(t);
  else
    s_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ConstType_1, not_null(o_3)), not_null(n_3));
  if(((q_3 != NULL) && (q_3 != t)))
    _fail(t);
  else
    q_3 = t;
  return(t);
}
ATerm FunType_2_0 (ATerm a_62 (ATerm), ATerm b_62 (ATerm), ATerm t)
{
  ATerm v_3 = NULL,t_3 = NULL,u_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,a_4 = NULL,z_3 = NULL,b_4 = NULL;
  if(((y_3 != NULL) && (y_3 != t)))
    _fail(t);
  else
    y_3 = t;
  if(match_cons(t, sym_FunType_2))
    {
      if(((t_3 != NULL) && (t_3 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_3 = ATgetArgument(t, 0);
      if(((u_3 != NULL) && (u_3 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((a_4 != NULL) && (a_4 != t)))
    _fail(t);
  else
    a_4 = t;
  t = SSLgetAnnotations(not_null(y_3));
  if(((v_3 != NULL) && (v_3 != t)))
    _fail(t);
  else
    v_3 = t;
  t = not_null(t_3);
  t = a_62(t);
  if(((w_3 != NULL) && (w_3 != t)))
    _fail(t);
  else
    w_3 = t;
  t = not_null(u_3);
  t = b_62(t);
  if(((x_3 != NULL) && (x_3 != t)))
    _fail(t);
  else
    x_3 = t;
  if(((b_4 != NULL) && (b_4 != t)))
    _fail(t);
  else
    b_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunType_2, not_null(w_3), not_null(x_3)), not_null(v_3));
  if(((z_3 != NULL) && (z_3 != t)))
    _fail(t);
  else
    z_3 = t;
  return(t);
}
ATerm Let_2_0 (ATerm w_65 (ATerm), ATerm x_65 (ATerm), ATerm t)
{
  ATerm e_4 = NULL,c_4 = NULL,d_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,j_4 = NULL,i_4 = NULL,k_4 = NULL;
  if(((h_4 != NULL) && (h_4 != t)))
    _fail(t);
  else
    h_4 = t;
  if(match_cons(t, sym_Let_2))
    {
      if(((c_4 != NULL) && (c_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_4 = ATgetArgument(t, 0);
      if(((d_4 != NULL) && (d_4 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((j_4 != NULL) && (j_4 != t)))
    _fail(t);
  else
    j_4 = t;
  t = SSLgetAnnotations(not_null(h_4));
  if(((e_4 != NULL) && (e_4 != t)))
    _fail(t);
  else
    e_4 = t;
  t = not_null(c_4);
  t = w_65(t);
  if(((f_4 != NULL) && (f_4 != t)))
    _fail(t);
  else
    f_4 = t;
  t = not_null(d_4);
  t = x_65(t);
  if(((g_4 != NULL) && (g_4 != t)))
    _fail(t);
  else
    g_4 = t;
  if(((k_4 != NULL) && (k_4 != t)))
    _fail(t);
  else
    k_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(f_4), not_null(g_4)), not_null(e_4));
  if(((i_4 != NULL) && (i_4 != t)))
    _fail(t);
  else
    i_4 = t;
  return(t);
}
ATerm Op_2_0 (ATerm s_62 (ATerm), ATerm t_62 (ATerm), ATerm t)
{
  ATerm n_4 = NULL,l_4 = NULL,m_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,s_4 = NULL,r_4 = NULL,t_4 = NULL;
  if(((q_4 != NULL) && (q_4 != t)))
    _fail(t);
  else
    q_4 = t;
  if(match_cons(t, sym_Op_2))
    {
      if(((l_4 != NULL) && (l_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_4 = ATgetArgument(t, 0);
      if(((m_4 != NULL) && (m_4 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((s_4 != NULL) && (s_4 != t)))
    _fail(t);
  else
    s_4 = t;
  t = SSLgetAnnotations(not_null(q_4));
  if(((n_4 != NULL) && (n_4 != t)))
    _fail(t);
  else
    n_4 = t;
  t = not_null(l_4);
  t = s_62(t);
  if(((o_4 != NULL) && (o_4 != t)))
    _fail(t);
  else
    o_4 = t;
  t = not_null(m_4);
  t = t_62(t);
  if(((p_4 != NULL) && (p_4 != t)))
    _fail(t);
  else
    p_4 = t;
  if(((t_4 != NULL) && (t_4 != t)))
    _fail(t);
  else
    t_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(o_4), not_null(p_4)), not_null(n_4));
  if(((r_4 != NULL) && (r_4 != t)))
    _fail(t);
  else
    r_4 = t;
  return(t);
}
ATerm Var_1_0 (ATerm m_62 (ATerm), ATerm t)
{
  ATerm v_4 = NULL,u_4 = NULL,w_4 = NULL,x_4 = NULL,z_4 = NULL,y_4 = NULL,a_5 = NULL;
  if(((x_4 != NULL) && (x_4 != t)))
    _fail(t);
  else
    x_4 = t;
  if(match_cons(t, sym_Var_1))
    {
      if(((u_4 != NULL) && (u_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((z_4 != NULL) && (z_4 != t)))
    _fail(t);
  else
    z_4 = t;
  t = SSLgetAnnotations(not_null(x_4));
  if(((v_4 != NULL) && (v_4 != t)))
    _fail(t);
  else
    v_4 = t;
  t = not_null(u_4);
  t = m_62(t);
  if(((w_4 != NULL) && (w_4 != t)))
    _fail(t);
  else
    w_4 = t;
  if(((a_5 != NULL) && (a_5 != t)))
    _fail(t);
  else
    a_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(w_4)), not_null(v_4));
  if(((y_4 != NULL) && (y_4 != t)))
    _fail(t);
  else
    y_4 = t;
  return(t);
}
ATerm As_2_0 (ATerm d_63 (ATerm), ATerm e_63 (ATerm), ATerm t)
{
  ATerm d_5 = NULL,b_5 = NULL,c_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,i_5 = NULL,h_5 = NULL,j_5 = NULL;
  if(((g_5 != NULL) && (g_5 != t)))
    _fail(t);
  else
    g_5 = t;
  if(match_cons(t, sym_As_2))
    {
      if(((b_5 != NULL) && (b_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_5 = ATgetArgument(t, 0);
      if(((c_5 != NULL) && (c_5 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((i_5 != NULL) && (i_5 != t)))
    _fail(t);
  else
    i_5 = t;
  t = SSLgetAnnotations(not_null(g_5));
  if(((d_5 != NULL) && (d_5 != t)))
    _fail(t);
  else
    d_5 = t;
  t = not_null(b_5);
  t = d_63(t);
  if(((e_5 != NULL) && (e_5 != t)))
    _fail(t);
  else
    e_5 = t;
  t = not_null(c_5);
  t = e_63(t);
  if(((f_5 != NULL) && (f_5 != t)))
    _fail(t);
  else
    f_5 = t;
  if(((j_5 != NULL) && (j_5 != t)))
    _fail(t);
  else
    j_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(e_5), not_null(f_5)), not_null(d_5));
  if(((h_5 != NULL) && (h_5 != t)))
    _fail(t);
  else
    h_5 = t;
  return(t);
}
ATerm BuildDefault_1_0 (ATerm j_63 (ATerm), ATerm t)
{
  ATerm l_5 = NULL,k_5 = NULL,m_5 = NULL,n_5 = NULL,p_5 = NULL,o_5 = NULL,q_5 = NULL;
  if(((n_5 != NULL) && (n_5 != t)))
    _fail(t);
  else
    n_5 = t;
  if(match_cons(t, sym_BuildDefault_1))
    {
      if(((k_5 != NULL) && (k_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((p_5 != NULL) && (p_5 != t)))
    _fail(t);
  else
    p_5 = t;
  t = SSLgetAnnotations(not_null(n_5));
  if(((l_5 != NULL) && (l_5 != t)))
    _fail(t);
  else
    l_5 = t;
  t = not_null(k_5);
  t = j_63(t);
  if(((m_5 != NULL) && (m_5 != t)))
    _fail(t);
  else
    m_5 = t;
  if(((q_5 != NULL) && (q_5 != t)))
    _fail(t);
  else
    q_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(m_5)), not_null(l_5));
  if(((o_5 != NULL) && (o_5 != t)))
    _fail(t);
  else
    o_5 = t;
  return(t);
}
ATerm Str_1_0 (ATerm q_62 (ATerm), ATerm t)
{
  ATerm s_5 = NULL,r_5 = NULL,t_5 = NULL,u_5 = NULL,w_5 = NULL,v_5 = NULL,x_5 = NULL;
  if(((u_5 != NULL) && (u_5 != t)))
    _fail(t);
  else
    u_5 = t;
  if(match_cons(t, sym_Str_1))
    {
      if(((r_5 != NULL) && (r_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((w_5 != NULL) && (w_5 != t)))
    _fail(t);
  else
    w_5 = t;
  t = SSLgetAnnotations(not_null(u_5));
  if(((s_5 != NULL) && (s_5 != t)))
    _fail(t);
  else
    s_5 = t;
  t = not_null(r_5);
  t = q_62(t);
  if(((t_5 != NULL) && (t_5 != t)))
    _fail(t);
  else
    t_5 = t;
  if(((x_5 != NULL) && (x_5 != t)))
    _fail(t);
  else
    x_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(t_5)), not_null(s_5));
  if(((v_5 != NULL) && (v_5 != t)))
    _fail(t);
  else
    v_5 = t;
  return(t);
}
ATerm is_real_0_0 (ATerm t)
{
  ATerm k_44 = NULL;
  if(((k_44 != NULL) && (k_44 != t)))
    _fail(t);
  else
    k_44 = t;
  t = SSL_is_real(not_null(k_44));
  return(t);
}
ATerm Real_1_0 (ATerm p_62 (ATerm), ATerm t)
{
  ATerm z_5 = NULL,y_5 = NULL,a_6 = NULL,b_6 = NULL,d_6 = NULL,c_6 = NULL,e_6 = NULL;
  if(((b_6 != NULL) && (b_6 != t)))
    _fail(t);
  else
    b_6 = t;
  if(match_cons(t, sym_Real_1))
    {
      if(((y_5 != NULL) && (y_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((d_6 != NULL) && (d_6 != t)))
    _fail(t);
  else
    d_6 = t;
  t = SSLgetAnnotations(not_null(b_6));
  if(((z_5 != NULL) && (z_5 != t)))
    _fail(t);
  else
    z_5 = t;
  t = not_null(y_5);
  t = p_62(t);
  if(((a_6 != NULL) && (a_6 != t)))
    _fail(t);
  else
    a_6 = t;
  if(((e_6 != NULL) && (e_6 != t)))
    _fail(t);
  else
    e_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(a_6)), not_null(z_5));
  if(((c_6 != NULL) && (c_6 != t)))
    _fail(t);
  else
    c_6 = t;
  return(t);
}
ATerm Int_1_0 (ATerm o_62 (ATerm), ATerm t)
{
  ATerm g_6 = NULL,f_6 = NULL,h_6 = NULL,i_6 = NULL,k_6 = NULL,j_6 = NULL,l_6 = NULL;
  if(((i_6 != NULL) && (i_6 != t)))
    _fail(t);
  else
    i_6 = t;
  if(match_cons(t, sym_Int_1))
    {
      if(((f_6 != NULL) && (f_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((k_6 != NULL) && (k_6 != t)))
    _fail(t);
  else
    k_6 = t;
  t = SSLgetAnnotations(not_null(i_6));
  if(((g_6 != NULL) && (g_6 != t)))
    _fail(t);
  else
    g_6 = t;
  t = not_null(f_6);
  t = o_62(t);
  if(((h_6 != NULL) && (h_6 != t)))
    _fail(t);
  else
    h_6 = t;
  if(((l_6 != NULL) && (l_6 != t)))
    _fail(t);
  else
    l_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(h_6)), not_null(g_6));
  if(((j_6 != NULL) && (j_6 != t)))
    _fail(t);
  else
    j_6 = t;
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
ATerm PrimT_3_0 (ATerm c_67 (ATerm), ATerm d_67 (ATerm), ATerm e_67 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,v_6 = NULL,u_6 = NULL,w_6 = NULL;
  if(((t_6 != NULL) && (t_6 != t)))
    _fail(t);
  else
    t_6 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      if(((m_6 != NULL) && (m_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_6 = ATgetArgument(t, 0);
      if(((n_6 != NULL) && (n_6 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_6 = ATgetArgument(t, 1);
      if(((o_6 != NULL) && (o_6 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        o_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((v_6 != NULL) && (v_6 != t)))
    _fail(t);
  else
    v_6 = t;
  t = SSLgetAnnotations(not_null(t_6));
  if(((p_6 != NULL) && (p_6 != t)))
    _fail(t);
  else
    p_6 = t;
  t = not_null(m_6);
  t = c_67(t);
  if(((q_6 != NULL) && (q_6 != t)))
    _fail(t);
  else
    q_6 = t;
  t = not_null(n_6);
  t = d_67(t);
  if(((r_6 != NULL) && (r_6 != t)))
    _fail(t);
  else
    r_6 = t;
  t = not_null(o_6);
  t = e_67(t);
  if(((s_6 != NULL) && (s_6 != t)))
    _fail(t);
  else
    s_6 = t;
  if(((w_6 != NULL) && (w_6 != t)))
    _fail(t);
  else
    w_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(q_6), not_null(r_6), not_null(s_6)), not_null(p_6));
  if(((u_6 != NULL) && (u_6 != t)))
    _fail(t);
  else
    u_6 = t;
  return(t);
}
ATerm Where_1_0 (ATerm w_66 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,x_6 = NULL,z_6 = NULL,a_7 = NULL,c_7 = NULL,b_7 = NULL,d_7 = NULL;
  if(((a_7 != NULL) && (a_7 != t)))
    _fail(t);
  else
    a_7 = t;
  if(match_cons(t, sym_Where_1))
    {
      if(((x_6 != NULL) && (x_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((c_7 != NULL) && (c_7 != t)))
    _fail(t);
  else
    c_7 = t;
  t = SSLgetAnnotations(not_null(a_7));
  if(((y_6 != NULL) && (y_6 != t)))
    _fail(t);
  else
    y_6 = t;
  t = not_null(x_6);
  t = w_66(t);
  if(((z_6 != NULL) && (z_6 != t)))
    _fail(t);
  else
    z_6 = t;
  if(((d_7 != NULL) && (d_7 != t)))
    _fail(t);
  else
    d_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(z_6)), not_null(y_6));
  if(((b_7 != NULL) && (b_7 != t)))
    _fail(t);
  else
    b_7 = t;
  return(t);
}
ATerm Scope_2_0 (ATerm g_66 (ATerm), ATerm h_66 (ATerm), ATerm t)
{
  ATerm g_7 = NULL,e_7 = NULL,f_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,l_7 = NULL,k_7 = NULL,m_7 = NULL;
  if(((j_7 != NULL) && (j_7 != t)))
    _fail(t);
  else
    j_7 = t;
  if(match_cons(t, sym_Scope_2))
    {
      if(((e_7 != NULL) && (e_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_7 = ATgetArgument(t, 0);
      if(((f_7 != NULL) && (f_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_7 != NULL) && (l_7 != t)))
    _fail(t);
  else
    l_7 = t;
  t = SSLgetAnnotations(not_null(j_7));
  if(((g_7 != NULL) && (g_7 != t)))
    _fail(t);
  else
    g_7 = t;
  t = not_null(e_7);
  t = g_66(t);
  if(((h_7 != NULL) && (h_7 != t)))
    _fail(t);
  else
    h_7 = t;
  t = not_null(f_7);
  t = h_66(t);
  if(((i_7 != NULL) && (i_7 != t)))
    _fail(t);
  else
    i_7 = t;
  if(((m_7 != NULL) && (m_7 != t)))
    _fail(t);
  else
    m_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(h_7), not_null(i_7)), not_null(g_7));
  if(((k_7 != NULL) && (k_7 != t)))
    _fail(t);
  else
    k_7 = t;
  return(t);
}
ATerm Build_1_0 (ATerm e_66 (ATerm), ATerm t)
{
  ATerm o_7 = NULL,n_7 = NULL,p_7 = NULL,q_7 = NULL,s_7 = NULL,r_7 = NULL,t_7 = NULL;
  if(((q_7 != NULL) && (q_7 != t)))
    _fail(t);
  else
    q_7 = t;
  if(match_cons(t, sym_Build_1))
    {
      if(((n_7 != NULL) && (n_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((s_7 != NULL) && (s_7 != t)))
    _fail(t);
  else
    s_7 = t;
  t = SSLgetAnnotations(not_null(q_7));
  if(((o_7 != NULL) && (o_7 != t)))
    _fail(t);
  else
    o_7 = t;
  t = not_null(n_7);
  t = e_66(t);
  if(((p_7 != NULL) && (p_7 != t)))
    _fail(t);
  else
    p_7 = t;
  if(((t_7 != NULL) && (t_7 != t)))
    _fail(t);
  else
    t_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(p_7)), not_null(o_7));
  if(((r_7 != NULL) && (r_7 != t)))
    _fail(t);
  else
    r_7 = t;
  return(t);
}
ATerm Match_1_0 (ATerm d_66 (ATerm), ATerm t)
{
  ATerm v_7 = NULL,u_7 = NULL,w_7 = NULL,x_7 = NULL,z_7 = NULL,y_7 = NULL,a_8 = NULL;
  if(((x_7 != NULL) && (x_7 != t)))
    _fail(t);
  else
    x_7 = t;
  if(match_cons(t, sym_Match_1))
    {
      if(((u_7 != NULL) && (u_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((z_7 != NULL) && (z_7 != t)))
    _fail(t);
  else
    z_7 = t;
  t = SSLgetAnnotations(not_null(x_7));
  if(((v_7 != NULL) && (v_7 != t)))
    _fail(t);
  else
    v_7 = t;
  t = not_null(u_7);
  t = d_66(t);
  if(((w_7 != NULL) && (w_7 != t)))
    _fail(t);
  else
    w_7 = t;
  if(((a_8 != NULL) && (a_8 != t)))
    _fail(t);
  else
    a_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(w_7)), not_null(v_7));
  if(((y_7 != NULL) && (y_7 != t)))
    _fail(t);
  else
    y_7 = t;
  return(t);
}
ATerm Thread_1_0 (ATerm k_67 (ATerm), ATerm t)
{
  ATerm c_8 = NULL,b_8 = NULL,d_8 = NULL,e_8 = NULL,g_8 = NULL,f_8 = NULL,h_8 = NULL;
  if(((e_8 != NULL) && (e_8 != t)))
    _fail(t);
  else
    e_8 = t;
  if(match_cons(t, sym_Thread_1))
    {
      if(((b_8 != NULL) && (b_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((g_8 != NULL) && (g_8 != t)))
    _fail(t);
  else
    g_8 = t;
  t = SSLgetAnnotations(not_null(e_8));
  if(((c_8 != NULL) && (c_8 != t)))
    _fail(t);
  else
    c_8 = t;
  t = not_null(b_8);
  t = k_67(t);
  if(((d_8 != NULL) && (d_8 != t)))
    _fail(t);
  else
    d_8 = t;
  if(((h_8 != NULL) && (h_8 != t)))
    _fail(t);
  else
    h_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(d_8)), not_null(c_8));
  if(((f_8 != NULL) && (f_8 != t)))
    _fail(t);
  else
    f_8 = t;
  return(t);
}
ATerm All_1_0 (ATerm j_67 (ATerm), ATerm t)
{
  ATerm j_8 = NULL,i_8 = NULL,k_8 = NULL,l_8 = NULL,n_8 = NULL,m_8 = NULL,o_8 = NULL;
  if(((l_8 != NULL) && (l_8 != t)))
    _fail(t);
  else
    l_8 = t;
  if(match_cons(t, sym_All_1))
    {
      if(((i_8 != NULL) && (i_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((n_8 != NULL) && (n_8 != t)))
    _fail(t);
  else
    n_8 = t;
  t = SSLgetAnnotations(not_null(l_8));
  if(((j_8 != NULL) && (j_8 != t)))
    _fail(t);
  else
    j_8 = t;
  t = not_null(i_8);
  t = j_67(t);
  if(((k_8 != NULL) && (k_8 != t)))
    _fail(t);
  else
    k_8 = t;
  if(((o_8 != NULL) && (o_8 != t)))
    _fail(t);
  else
    o_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(k_8)), not_null(j_8));
  if(((m_8 != NULL) && (m_8 != t)))
    _fail(t);
  else
    m_8 = t;
  return(t);
}
ATerm Some_1_0 (ATerm h_67 (ATerm), ATerm t)
{
  ATerm q_8 = NULL,p_8 = NULL,r_8 = NULL,s_8 = NULL,u_8 = NULL,t_8 = NULL,v_8 = NULL;
  if(((s_8 != NULL) && (s_8 != t)))
    _fail(t);
  else
    s_8 = t;
  if(match_cons(t, sym_Some_1))
    {
      if(((p_8 != NULL) && (p_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((u_8 != NULL) && (u_8 != t)))
    _fail(t);
  else
    u_8 = t;
  t = SSLgetAnnotations(not_null(s_8));
  if(((q_8 != NULL) && (q_8 != t)))
    _fail(t);
  else
    q_8 = t;
  t = not_null(p_8);
  t = h_67(t);
  if(((r_8 != NULL) && (r_8 != t)))
    _fail(t);
  else
    r_8 = t;
  if(((v_8 != NULL) && (v_8 != t)))
    _fail(t);
  else
    v_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(r_8)), not_null(q_8));
  if(((t_8 != NULL) && (t_8 != t)))
    _fail(t);
  else
    t_8 = t;
  return(t);
}
ATerm One_1_0 (ATerm i_67 (ATerm), ATerm t)
{
  ATerm x_8 = NULL,w_8 = NULL,y_8 = NULL,z_8 = NULL,b_9 = NULL,a_9 = NULL,c_9 = NULL;
  if(((z_8 != NULL) && (z_8 != t)))
    _fail(t);
  else
    z_8 = t;
  if(match_cons(t, sym_One_1))
    {
      if(((w_8 != NULL) && (w_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((b_9 != NULL) && (b_9 != t)))
    _fail(t);
  else
    b_9 = t;
  t = SSLgetAnnotations(not_null(z_8));
  if(((x_8 != NULL) && (x_8 != t)))
    _fail(t);
  else
    x_8 = t;
  t = not_null(w_8);
  t = i_67(t);
  if(((y_8 != NULL) && (y_8 != t)))
    _fail(t);
  else
    y_8 = t;
  if(((c_9 != NULL) && (c_9 != t)))
    _fail(t);
  else
    c_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(y_8)), not_null(x_8));
  if(((a_9 != NULL) && (a_9 != t)))
    _fail(t);
  else
    a_9 = t;
  return(t);
}
ATerm Cong_2_0 (ATerm k_61 (ATerm), ATerm l_61 (ATerm), ATerm t)
{
  ATerm f_9 = NULL,d_9 = NULL,e_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,k_9 = NULL,j_9 = NULL,l_9 = NULL;
  if(((i_9 != NULL) && (i_9 != t)))
    _fail(t);
  else
    i_9 = t;
  if(match_cons(t, sym_Cong_2))
    {
      if(((d_9 != NULL) && (d_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_9 = ATgetArgument(t, 0);
      if(((e_9 != NULL) && (e_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((k_9 != NULL) && (k_9 != t)))
    _fail(t);
  else
    k_9 = t;
  t = SSLgetAnnotations(not_null(i_9));
  if(((f_9 != NULL) && (f_9 != t)))
    _fail(t);
  else
    f_9 = t;
  t = not_null(d_9);
  t = k_61(t);
  if(((g_9 != NULL) && (g_9 != t)))
    _fail(t);
  else
    g_9 = t;
  t = not_null(e_9);
  t = l_61(t);
  if(((h_9 != NULL) && (h_9 != t)))
    _fail(t);
  else
    h_9 = t;
  if(((l_9 != NULL) && (l_9 != t)))
    _fail(t);
  else
    l_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(g_9), not_null(h_9)), not_null(f_9));
  if(((j_9 != NULL) && (j_9 != t)))
    _fail(t);
  else
    j_9 = t;
  return(t);
}
ATerm is_int_0_0 (ATerm t)
{
  ATerm o_42 = NULL;
  if(((o_42 != NULL) && (o_42 != t)))
    _fail(t);
  else
    o_42 = t;
  t = SSL_is_int(not_null(o_42));
  return(t);
}
ATerm Path_2_0 (ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm t)
{
  ATerm o_9 = NULL,m_9 = NULL,n_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,t_9 = NULL,s_9 = NULL,u_9 = NULL;
  if(((r_9 != NULL) && (r_9 != t)))
    _fail(t);
  else
    r_9 = t;
  if(match_cons(t, sym_Path_2))
    {
      if(((m_9 != NULL) && (m_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_9 = ATgetArgument(t, 0);
      if(((n_9 != NULL) && (n_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((t_9 != NULL) && (t_9 != t)))
    _fail(t);
  else
    t_9 = t;
  t = SSLgetAnnotations(not_null(r_9));
  if(((o_9 != NULL) && (o_9 != t)))
    _fail(t);
  else
    o_9 = t;
  t = not_null(m_9);
  t = f_67(t);
  if(((p_9 != NULL) && (p_9 != t)))
    _fail(t);
  else
    p_9 = t;
  t = not_null(n_9);
  t = g_67(t);
  if(((q_9 != NULL) && (q_9 != t)))
    _fail(t);
  else
    q_9 = t;
  if(((u_9 != NULL) && (u_9 != t)))
    _fail(t);
  else
    u_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(p_9), not_null(q_9)), not_null(o_9));
  if(((s_9 != NULL) && (s_9 != t)))
    _fail(t);
  else
    s_9 = t;
  return(t);
}
ATerm Rec_2_0 (ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm t)
{
  ATerm x_9 = NULL,v_9 = NULL,w_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,c_10 = NULL,b_10 = NULL,d_10 = NULL;
  if(((a_10 != NULL) && (a_10 != t)))
    _fail(t);
  else
    a_10 = t;
  if(match_cons(t, sym_Rec_2))
    {
      if(((v_9 != NULL) && (v_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_9 = ATgetArgument(t, 0);
      if(((w_9 != NULL) && (w_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((c_10 != NULL) && (c_10 != t)))
    _fail(t);
  else
    c_10 = t;
  t = SSLgetAnnotations(not_null(a_10));
  if(((x_9 != NULL) && (x_9 != t)))
    _fail(t);
  else
    x_9 = t;
  t = not_null(v_9);
  t = t_66(t);
  if(((y_9 != NULL) && (y_9 != t)))
    _fail(t);
  else
    y_9 = t;
  t = not_null(w_9);
  t = u_66(t);
  if(((z_9 != NULL) && (z_9 != t)))
    _fail(t);
  else
    z_9 = t;
  if(((d_10 != NULL) && (d_10 != t)))
    _fail(t);
  else
    d_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(y_9), not_null(z_9)), not_null(x_9));
  if(((b_10 != NULL) && (b_10 != t)))
    _fail(t);
  else
    b_10 = t;
  return(t);
}
ATerm SVar_1_0 (ATerm v_65 (ATerm), ATerm t)
{
  ATerm f_10 = NULL,e_10 = NULL,g_10 = NULL,h_10 = NULL,j_10 = NULL,i_10 = NULL,k_10 = NULL;
  if(((h_10 != NULL) && (h_10 != t)))
    _fail(t);
  else
    h_10 = t;
  if(match_cons(t, sym_SVar_1))
    {
      if(((e_10 != NULL) && (e_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((j_10 != NULL) && (j_10 != t)))
    _fail(t);
  else
    j_10 = t;
  t = SSLgetAnnotations(not_null(h_10));
  if(((f_10 != NULL) && (f_10 != t)))
    _fail(t);
  else
    f_10 = t;
  t = not_null(e_10);
  t = v_65(t);
  if(((g_10 != NULL) && (g_10 != t)))
    _fail(t);
  else
    g_10 = t;
  if(((k_10 != NULL) && (k_10 != t)))
    _fail(t);
  else
    k_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(g_10)), not_null(f_10));
  if(((i_10 != NULL) && (i_10 != t)))
    _fail(t);
  else
    i_10 = t;
  return(t);
}
ATerm CallT_3_0 (ATerm a_66 (ATerm), ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm t)
{
  ATerm o_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,u_10 = NULL,t_10 = NULL,v_10 = NULL;
  if(((s_10 != NULL) && (s_10 != t)))
    _fail(t);
  else
    s_10 = t;
  if(match_cons(t, sym_CallT_3))
    {
      if(((l_10 != NULL) && (l_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_10 = ATgetArgument(t, 0);
      if(((m_10 != NULL) && (m_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_10 = ATgetArgument(t, 1);
      if(((n_10 != NULL) && (n_10 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        n_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((u_10 != NULL) && (u_10 != t)))
    _fail(t);
  else
    u_10 = t;
  t = SSLgetAnnotations(not_null(s_10));
  if(((o_10 != NULL) && (o_10 != t)))
    _fail(t);
  else
    o_10 = t;
  t = not_null(l_10);
  t = a_66(t);
  if(((p_10 != NULL) && (p_10 != t)))
    _fail(t);
  else
    p_10 = t;
  t = not_null(m_10);
  t = b_66(t);
  if(((q_10 != NULL) && (q_10 != t)))
    _fail(t);
  else
    q_10 = t;
  t = not_null(n_10);
  t = c_66(t);
  if(((r_10 != NULL) && (r_10 != t)))
    _fail(t);
  else
    r_10 = t;
  if(((v_10 != NULL) && (v_10 != t)))
    _fail(t);
  else
    v_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(p_10), not_null(q_10), not_null(r_10)), not_null(o_10));
  if(((t_10 != NULL) && (t_10 != t)))
    _fail(t);
  else
    t_10 = t;
  return(t);
}
ATerm LGChoice_2_0 (ATerm o_66 (ATerm), ATerm p_66 (ATerm), ATerm t)
{
  ATerm y_10 = NULL,w_10 = NULL,x_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,d_11 = NULL,c_11 = NULL,e_11 = NULL;
  if(((b_11 != NULL) && (b_11 != t)))
    _fail(t);
  else
    b_11 = t;
  if(match_cons(t, sym_LGChoice_2))
    {
      if(((w_10 != NULL) && (w_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_10 = ATgetArgument(t, 0);
      if(((x_10 != NULL) && (x_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((d_11 != NULL) && (d_11 != t)))
    _fail(t);
  else
    d_11 = t;
  t = SSLgetAnnotations(not_null(b_11));
  if(((y_10 != NULL) && (y_10 != t)))
    _fail(t);
  else
    y_10 = t;
  t = not_null(w_10);
  t = o_66(t);
  if(((z_10 != NULL) && (z_10 != t)))
    _fail(t);
  else
    z_10 = t;
  t = not_null(x_10);
  t = p_66(t);
  if(((a_11 != NULL) && (a_11 != t)))
    _fail(t);
  else
    a_11 = t;
  if(((e_11 != NULL) && (e_11 != t)))
    _fail(t);
  else
    e_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(z_10), not_null(a_11)), not_null(y_10));
  if(((c_11 != NULL) && (c_11 != t)))
    _fail(t);
  else
    c_11 = t;
  return(t);
}
ATerm GChoice_2_0 (ATerm o_65 (ATerm), ATerm p_65 (ATerm), ATerm t)
{
  ATerm h_11 = NULL,f_11 = NULL,g_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,m_11 = NULL,l_11 = NULL,n_11 = NULL;
  if(((k_11 != NULL) && (k_11 != t)))
    _fail(t);
  else
    k_11 = t;
  if(match_cons(t, sym_GChoice_2))
    {
      if(((f_11 != NULL) && (f_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_11 = ATgetArgument(t, 0);
      if(((g_11 != NULL) && (g_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((m_11 != NULL) && (m_11 != t)))
    _fail(t);
  else
    m_11 = t;
  t = SSLgetAnnotations(not_null(k_11));
  if(((h_11 != NULL) && (h_11 != t)))
    _fail(t);
  else
    h_11 = t;
  t = not_null(f_11);
  t = o_65(t);
  if(((i_11 != NULL) && (i_11 != t)))
    _fail(t);
  else
    i_11 = t;
  t = not_null(g_11);
  t = p_65(t);
  if(((j_11 != NULL) && (j_11 != t)))
    _fail(t);
  else
    j_11 = t;
  if(((n_11 != NULL) && (n_11 != t)))
    _fail(t);
  else
    n_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(i_11), not_null(j_11)), not_null(h_11));
  if(((l_11 != NULL) && (l_11 != t)))
    _fail(t);
  else
    l_11 = t;
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm q_66 (ATerm), ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,x_11 = NULL,w_11 = NULL,y_11 = NULL;
  if(((v_11 != NULL) && (v_11 != t)))
    _fail(t);
  else
    v_11 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      if(((o_11 != NULL) && (o_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_11 = ATgetArgument(t, 0);
      if(((p_11 != NULL) && (p_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_11 = ATgetArgument(t, 1);
      if(((q_11 != NULL) && (q_11 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        q_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((x_11 != NULL) && (x_11 != t)))
    _fail(t);
  else
    x_11 = t;
  t = SSLgetAnnotations(not_null(v_11));
  if(((r_11 != NULL) && (r_11 != t)))
    _fail(t);
  else
    r_11 = t;
  t = not_null(o_11);
  t = q_66(t);
  if(((s_11 != NULL) && (s_11 != t)))
    _fail(t);
  else
    s_11 = t;
  t = not_null(p_11);
  t = r_66(t);
  if(((t_11 != NULL) && (t_11 != t)))
    _fail(t);
  else
    t_11 = t;
  t = not_null(q_11);
  t = s_66(t);
  if(((u_11 != NULL) && (u_11 != t)))
    _fail(t);
  else
    u_11 = t;
  if(((y_11 != NULL) && (y_11 != t)))
    _fail(t);
  else
    y_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(s_11), not_null(t_11), not_null(u_11)), not_null(r_11));
  if(((w_11 != NULL) && (w_11 != t)))
    _fail(t);
  else
    w_11 = t;
  return(t);
}
ATerm LChoice_2_0 (ATerm m_66 (ATerm), ATerm n_66 (ATerm), ATerm t)
{
  ATerm b_12 = NULL,z_11 = NULL,a_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,g_12 = NULL,f_12 = NULL,h_12 = NULL;
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      if(((z_11 != NULL) && (z_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_11 = ATgetArgument(t, 0);
      if(((a_12 != NULL) && (a_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  t = SSLgetAnnotations(not_null(e_12));
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  t = not_null(z_11);
  t = m_66(t);
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  t = not_null(a_12);
  t = n_66(t);
  if(((d_12 != NULL) && (d_12 != t)))
    _fail(t);
  else
    d_12 = t;
  if(((h_12 != NULL) && (h_12 != t)))
    _fail(t);
  else
    h_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(c_12), not_null(d_12)), not_null(b_12));
  if(((f_12 != NULL) && (f_12 != t)))
    _fail(t);
  else
    f_12 = t;
  return(t);
}
ATerm Choice_2_0 (ATerm k_65 (ATerm), ATerm l_65 (ATerm), ATerm t)
{
  ATerm k_12 = NULL,i_12 = NULL,j_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,p_12 = NULL,o_12 = NULL,q_12 = NULL;
  if(((n_12 != NULL) && (n_12 != t)))
    _fail(t);
  else
    n_12 = t;
  if(match_cons(t, sym_Choice_2))
    {
      if(((i_12 != NULL) && (i_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_12 = ATgetArgument(t, 0);
      if(((j_12 != NULL) && (j_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((p_12 != NULL) && (p_12 != t)))
    _fail(t);
  else
    p_12 = t;
  t = SSLgetAnnotations(not_null(n_12));
  if(((k_12 != NULL) && (k_12 != t)))
    _fail(t);
  else
    k_12 = t;
  t = not_null(i_12);
  t = k_65(t);
  if(((l_12 != NULL) && (l_12 != t)))
    _fail(t);
  else
    l_12 = t;
  t = not_null(j_12);
  t = l_65(t);
  if(((m_12 != NULL) && (m_12 != t)))
    _fail(t);
  else
    m_12 = t;
  if(((q_12 != NULL) && (q_12 != t)))
    _fail(t);
  else
    q_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(l_12), not_null(m_12)), not_null(k_12));
  if(((o_12 != NULL) && (o_12 != t)))
    _fail(t);
  else
    o_12 = t;
  return(t);
}
ATerm Seq_2_0 (ATerm k_66 (ATerm), ATerm l_66 (ATerm), ATerm t)
{
  ATerm t_12 = NULL,r_12 = NULL,s_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,y_12 = NULL,x_12 = NULL,z_12 = NULL;
  if(((w_12 != NULL) && (w_12 != t)))
    _fail(t);
  else
    w_12 = t;
  if(match_cons(t, sym_Seq_2))
    {
      if(((r_12 != NULL) && (r_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_12 = ATgetArgument(t, 0);
      if(((s_12 != NULL) && (s_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((y_12 != NULL) && (y_12 != t)))
    _fail(t);
  else
    y_12 = t;
  t = SSLgetAnnotations(not_null(w_12));
  if(((t_12 != NULL) && (t_12 != t)))
    _fail(t);
  else
    t_12 = t;
  t = not_null(r_12);
  t = k_66(t);
  if(((u_12 != NULL) && (u_12 != t)))
    _fail(t);
  else
    u_12 = t;
  t = not_null(s_12);
  t = l_66(t);
  if(((v_12 != NULL) && (v_12 != t)))
    _fail(t);
  else
    v_12 = t;
  if(((z_12 != NULL) && (z_12 != t)))
    _fail(t);
  else
    z_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(u_12), not_null(v_12)), not_null(t_12));
  if(((x_12 != NULL) && (x_12 != t)))
    _fail(t);
  else
    x_12 = t;
  return(t);
}
ATerm Test_1_0 (ATerm x_66 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,a_13 = NULL,c_13 = NULL,d_13 = NULL,f_13 = NULL,e_13 = NULL,g_13 = NULL;
  if(((d_13 != NULL) && (d_13 != t)))
    _fail(t);
  else
    d_13 = t;
  if(match_cons(t, sym_Test_1))
    {
      if(((a_13 != NULL) && (a_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((f_13 != NULL) && (f_13 != t)))
    _fail(t);
  else
    f_13 = t;
  t = SSLgetAnnotations(not_null(d_13));
  if(((b_13 != NULL) && (b_13 != t)))
    _fail(t);
  else
    b_13 = t;
  t = not_null(a_13);
  t = x_66(t);
  if(((c_13 != NULL) && (c_13 != t)))
    _fail(t);
  else
    c_13 = t;
  if(((g_13 != NULL) && (g_13 != t)))
    _fail(t);
  else
    g_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(c_13)), not_null(b_13));
  if(((e_13 != NULL) && (e_13 != t)))
    _fail(t);
  else
    e_13 = t;
  return(t);
}
ATerm Not_1_0 (ATerm v_66 (ATerm), ATerm t)
{
  ATerm i_13 = NULL,h_13 = NULL,j_13 = NULL,k_13 = NULL,m_13 = NULL,l_13 = NULL,n_13 = NULL;
  if(((k_13 != NULL) && (k_13 != t)))
    _fail(t);
  else
    k_13 = t;
  if(match_cons(t, sym_Not_1))
    {
      if(((h_13 != NULL) && (h_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((m_13 != NULL) && (m_13 != t)))
    _fail(t);
  else
    m_13 = t;
  t = SSLgetAnnotations(not_null(k_13));
  if(((i_13 != NULL) && (i_13 != t)))
    _fail(t);
  else
    i_13 = t;
  t = not_null(h_13);
  t = v_66(t);
  if(((j_13 != NULL) && (j_13 != t)))
    _fail(t);
  else
    j_13 = t;
  if(((n_13 != NULL) && (n_13 != t)))
    _fail(t);
  else
    n_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(j_13)), not_null(i_13));
  if(((l_13 != NULL) && (l_13 != t)))
    _fail(t);
  else
    l_13 = t;
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
ATerm VarDec_2_0 (ATerm h_68 (ATerm), ATerm i_68 (ATerm), ATerm t)
{
  ATerm q_13 = NULL,o_13 = NULL,p_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,v_13 = NULL,u_13 = NULL,w_13 = NULL;
  if(((t_13 != NULL) && (t_13 != t)))
    _fail(t);
  else
    t_13 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      if(((o_13 != NULL) && (o_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_13 = ATgetArgument(t, 0);
      if(((p_13 != NULL) && (p_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((v_13 != NULL) && (v_13 != t)))
    _fail(t);
  else
    v_13 = t;
  t = SSLgetAnnotations(not_null(t_13));
  if(((q_13 != NULL) && (q_13 != t)))
    _fail(t);
  else
    q_13 = t;
  t = not_null(o_13);
  t = h_68(t);
  if(((r_13 != NULL) && (r_13 != t)))
    _fail(t);
  else
    r_13 = t;
  t = not_null(p_13);
  t = i_68(t);
  if(((s_13 != NULL) && (s_13 != t)))
    _fail(t);
  else
    s_13 = t;
  if(((w_13 != NULL) && (w_13 != t)))
    _fail(t);
  else
    w_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(r_13), not_null(s_13)), not_null(q_13));
  if(((u_13 != NULL) && (u_13 != t)))
    _fail(t);
  else
    u_13 = t;
  return(t);
}
ATerm Mod_2_0 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm t)
{
  ATerm z_13 = NULL,x_13 = NULL,y_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,e_14 = NULL,d_14 = NULL,f_14 = NULL;
  if(((c_14 != NULL) && (c_14 != t)))
    _fail(t);
  else
    c_14 = t;
  if(match_cons(t, sym_Mod_2))
    {
      if(((x_13 != NULL) && (x_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_13 = ATgetArgument(t, 0);
      if(((y_13 != NULL) && (y_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((e_14 != NULL) && (e_14 != t)))
    _fail(t);
  else
    e_14 = t;
  t = SSLgetAnnotations(not_null(c_14));
  if(((z_13 != NULL) && (z_13 != t)))
    _fail(t);
  else
    z_13 = t;
  t = not_null(x_13);
  t = z_67(t);
  if(((a_14 != NULL) && (a_14 != t)))
    _fail(t);
  else
    a_14 = t;
  t = not_null(y_13);
  t = a_68(t);
  if(((b_14 != NULL) && (b_14 != t)))
    _fail(t);
  else
    b_14 = t;
  if(((f_14 != NULL) && (f_14 != t)))
    _fail(t);
  else
    f_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Mod_2, not_null(a_14), not_null(b_14)), not_null(z_13));
  if(((d_14 != NULL) && (d_14 != t)))
    _fail(t);
  else
    d_14 = t;
  return(t);
}
ATerm SDefT_4_0 (ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm t)
{
  ATerm k_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,r_14 = NULL,q_14 = NULL,s_14 = NULL;
  if(((p_14 != NULL) && (p_14 != t)))
    _fail(t);
  else
    p_14 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      if(((g_14 != NULL) && (g_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_14 = ATgetArgument(t, 0);
      if(((h_14 != NULL) && (h_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_14 = ATgetArgument(t, 1);
      if(((i_14 != NULL) && (i_14 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        i_14 = ATgetArgument(t, 2);
      if(((j_14 != NULL) && (j_14 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        j_14 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((r_14 != NULL) && (r_14 != t)))
    _fail(t);
  else
    r_14 = t;
  t = SSLgetAnnotations(not_null(p_14));
  if(((k_14 != NULL) && (k_14 != t)))
    _fail(t);
  else
    k_14 = t;
  t = not_null(g_14);
  t = o_68(t);
  if(((l_14 != NULL) && (l_14 != t)))
    _fail(t);
  else
    l_14 = t;
  t = not_null(h_14);
  t = p_68(t);
  if(((m_14 != NULL) && (m_14 != t)))
    _fail(t);
  else
    m_14 = t;
  t = not_null(i_14);
  t = q_68(t);
  if(((n_14 != NULL) && (n_14 != t)))
    _fail(t);
  else
    n_14 = t;
  t = not_null(j_14);
  t = r_68(t);
  if(((o_14 != NULL) && (o_14 != t)))
    _fail(t);
  else
    o_14 = t;
  if(((s_14 != NULL) && (s_14 != t)))
    _fail(t);
  else
    s_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(l_14), not_null(m_14), not_null(n_14), not_null(o_14)), not_null(k_14));
  if(((q_14 != NULL) && (q_14 != t)))
    _fail(t);
  else
    q_14 = t;
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
ATerm list_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm a_82 (ATerm t)
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
        t = Cons_2_0(z_81, a_82, t);
      }
    return(t);
  }
  t = a_82(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm o_61 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,t_14 = NULL,v_14 = NULL,w_14 = NULL,y_14 = NULL,x_14 = NULL,z_14 = NULL;
  if(((w_14 != NULL) && (w_14 != t)))
    _fail(t);
  else
    w_14 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      if(((t_14 != NULL) && (t_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((y_14 != NULL) && (y_14 != t)))
    _fail(t);
  else
    y_14 = t;
  t = SSLgetAnnotations(not_null(w_14));
  if(((u_14 != NULL) && (u_14 != t)))
    _fail(t);
  else
    u_14 = t;
  t = not_null(t_14);
  t = o_61(t);
  if(((v_14 != NULL) && (v_14 != t)))
    _fail(t);
  else
    v_14 = t;
  if(((z_14 != NULL) && (z_14 != t)))
    _fail(t);
  else
    z_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(v_14)), not_null(u_14));
  if(((x_14 != NULL) && (x_14 != t)))
    _fail(t);
  else
    x_14 = t;
  return(t);
}
ATerm Specification_1_0 (ATerm t_61 (ATerm), ATerm t)
{
  ATerm b_15 = NULL,a_15 = NULL,c_15 = NULL,d_15 = NULL,f_15 = NULL,e_15 = NULL,g_15 = NULL;
  if(((d_15 != NULL) && (d_15 != t)))
    _fail(t);
  else
    d_15 = t;
  if(match_cons(t, sym_Specification_1))
    {
      if(((a_15 != NULL) && (a_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((f_15 != NULL) && (f_15 != t)))
    _fail(t);
  else
    f_15 = t;
  t = SSLgetAnnotations(not_null(d_15));
  if(((b_15 != NULL) && (b_15 != t)))
    _fail(t);
  else
    b_15 = t;
  t = not_null(a_15);
  t = t_61(t);
  if(((c_15 != NULL) && (c_15 != t)))
    _fail(t);
  else
    c_15 = t;
  if(((g_15 != NULL) && (g_15 != t)))
    _fail(t);
  else
    g_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(c_15)), not_null(b_15));
  if(((e_15 != NULL) && (e_15 != t)))
    _fail(t);
  else
    e_15 = t;
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
ATerm _2_0 (ATerm z_59 (ATerm), ATerm a_60 (ATerm), ATerm t)
{
  ATerm j_15 = NULL,h_15 = NULL,i_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,o_15 = NULL,n_15 = NULL,p_15 = NULL;
  if(((m_15 != NULL) && (m_15 != t)))
    _fail(t);
  else
    m_15 = t;
  if(match_cons(t, sym__2))
    {
      if(((h_15 != NULL) && (h_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_15 = ATgetArgument(t, 0);
      if(((i_15 != NULL) && (i_15 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((o_15 != NULL) && (o_15 != t)))
    _fail(t);
  else
    o_15 = t;
  t = SSLgetAnnotations(not_null(m_15));
  if(((j_15 != NULL) && (j_15 != t)))
    _fail(t);
  else
    j_15 = t;
  t = not_null(h_15);
  t = z_59(t);
  if(((k_15 != NULL) && (k_15 != t)))
    _fail(t);
  else
    k_15 = t;
  t = not_null(i_15);
  t = a_60(t);
  if(((l_15 != NULL) && (l_15 != t)))
    _fail(t);
  else
    l_15 = t;
  if(((p_15 != NULL) && (p_15 != t)))
    _fail(t);
  else
    p_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(k_15), not_null(l_15)), not_null(j_15));
  if(((n_15 != NULL) && (n_15 != t)))
    _fail(t);
  else
    n_15 = t;
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,c_458 = NULL;
  if(((c_0 != NULL) && (c_0 != t)))
    _fail(t);
  else
    c_0 = t;
  if(((e_0 != NULL) && (e_0 != t)))
    _fail(t);
  else
    e_0 = t;
  t = term_n_23;
  t = whoami_0_0(t);
  if(((c_458 != NULL) && (c_458 != t)))
    _fail(t);
  else
    c_458 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_23), not_null(c_458)), term_p_23));
  t = printnl_0_0(t);
  t = term_r_23;
  t = exit_0_0(t);
  t = not_null(c_0);
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,k_0 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_49 != NULL) && (b_49 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_49 = ATgetArgument(t, 0);
      if(((c_49 != NULL) && (c_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((k_0 != NULL) && (k_0 != t)))
    _fail(t);
  else
    k_0 = t;
  t = SSL_printnl(not_null(b_49), not_null(c_49));
  t = not_null(k_0);
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm j_40 = NULL;
  if(((j_40 != NULL) && (j_40 != t)))
    _fail(t);
  else
    j_40 = t;
  t = SSL_implode_string(not_null(j_40));
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
        ATerm p_27 = NULL,q_27 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((p_27 != NULL) && (p_27 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              p_27 = ATgetFirst((ATermList) t);
            if(((q_27 != NULL) && (q_27 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              q_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(p_27);
        {
          ATerm t_17 (ATerm t)
          {
            t = not_null(q_27);
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
  ATerm b_140 = NULL,l_0 = NULL,c_140 = NULL,o_27 = NULL;
  if(((b_140 != NULL) && (b_140 != t)))
    _fail(t);
  else
    b_140 = t;
  if(((l_0 != NULL) && (l_0 != t)))
    _fail(t);
  else
    l_0 = t;
  t = not_null(b_140);
  if(((c_140 != NULL) && (c_140 != t)))
    _fail(t);
  else
    c_140 = t;
  t = SSL_explode_term(not_null(c_140));
  if(match_cons(t, sym__2))
    {
      ATerm u_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((o_27 != NULL) && (o_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(o_27);
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_82 (ATerm), ATerm t)
{
  ATerm n_82 (ATerm t)
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, n_82, t);
        ;
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        t = Nil_0_0(t);
        t = m_82(t);
      }
    return(t);
  }
  t = n_82(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_27 != NULL) && (n_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_27 = ATgetArgument(t, 0);
      if(((m_27 != NULL) && (m_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(n_27);
  {
    ATerm u_17 (ATerm t)
    {
      t = not_null(m_27);
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
  ATerm k_40 = NULL;
  if(((k_40 != NULL) && (k_40 != t)))
    _fail(t);
  else
    k_40 = t;
  t = SSL_explode_string(not_null(k_40));
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
                  ATerm x_50 = NULL;
                  if(match_cons(t, sym_Path_1))
                    {
                      if(((x_50 != NULL) && (x_50 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(x_50);
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
                        ATerm w_50 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            if(((w_50 != NULL) && (w_50 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              w_50 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = not_null(w_50);
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
                          ATerm u_50 = NULL,v_50 = NULL,m_0 = NULL,j_428 = NULL,n_0 = NULL,v_428 = NULL;
                          if(match_cons(t, sym_Prefix_2))
                            {
                              if(((u_50 != NULL) && (u_50 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                u_50 = ATgetArgument(t, 0);
                              if(((v_50 != NULL) && (v_50 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                v_50 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          if(((m_0 != NULL) && (m_0 != t)))
                            _fail(t);
                          else
                            m_0 = t;
                          t = not_null(u_50);
                          t = eval_config_0_0(t);
                          if(((j_428 != NULL) && (j_428 != t)))
                            _fail(t);
                          else
                            j_428 = t;
                          t = not_null(m_0);
                          if(((n_0 != NULL) && (n_0 != t)))
                            _fail(t);
                          else
                            n_0 = t;
                          t = not_null(v_50);
                          t = eval_config_0_0(t);
                          if(((v_428 != NULL) && (v_428 != t)))
                            _fail(t);
                          else
                            v_428 = t;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_428), not_null(v_428));
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
  ATerm t_50 = NULL;
  if(((t_50 != NULL) && (t_50 != t)))
    _fail(t);
  else
    t_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_24, not_null(t_50));
  t = table_get_0_0(t);
  {
    ATerm x_17 (ATerm t)
    {
      ATerm o_0 = NULL,p_0 = NULL,k_427 = NULL;
      t = eval_config_0_0(t);
      if(((o_0 != NULL) && (o_0 != t)))
        _fail(t);
      else
        o_0 = t;
      if(((p_0 != NULL) && (p_0 != t)))
        _fail(t);
      else
        p_0 = t;
      if(((k_427 != NULL) && (k_427 != t)))
        _fail(t);
      else
        k_427 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_24, not_null(t_50), not_null(k_427));
      t = table_put_0_0(t);
      t = not_null(o_0);
      return(t);
    }
    t = try_1_0(x_17, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_95 (ATerm), ATerm t)
{
  ATerm y_17 (ATerm t)
  {
    ATerm q_0 = NULL,r_0 = NULL,r_409 = NULL;
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
    if(((r_409 != NULL) && (r_409 != t)))
      _fail(t);
    else
      r_409 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_409), term_m_24);
    t = geq_0_0(t);
    t = not_null(q_0);
    t = p_95(t);
    return(t);
  }
  t = try_1_0(y_17, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,s_0 = NULL,p_350 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((t_45 != NULL) && (t_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_45 = ATgetArgument(t, 0);
      {
        ATerm n_24 = ATgetArgument(t, 1);
        if(match_cons(n_24, sym_Stream_1))
          {
            if(((u_45 != NULL) && (u_45 != ATgetArgument(n_24, 0))))
              _fail(ATgetArgument(n_24, 0));
            else
              u_45 = ATgetArgument(n_24, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputc(not_null(t_45), not_null(u_45));
  if(((s_0 != NULL) && (s_0 != t)))
    _fail(t);
  else
    s_0 = t;
  if(((p_350 != NULL) && (p_350 != t)))
    _fail(t);
  else
    p_350 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_350));
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,t_0 = NULL,d_393 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_24 = ATgetArgument(t, 0);
      if(match_cons(o_24, sym_Stream_1))
        {
          if(((h_49 != NULL) && (h_49 != ATgetArgument(o_24, 0))))
            _fail(ATgetArgument(o_24, 0));
          else
            h_49 = ATgetArgument(o_24, 0);
        }
      else
        _fail(t);
      if(((i_49 != NULL) && (i_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(h_49), not_null(i_49));
  if(((t_0 != NULL) && (t_0 != t)))
    _fail(t);
  else
    t_0 = t;
  if(((d_393 != NULL) && (d_393 != t)))
    _fail(t);
  else
    d_393 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_393));
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm z_17 (ATerm t)
  {
    ATerm u_0 = NULL,r_394 = NULL;
    t = write_in_text_to_stream_0_0(t);
    if(((u_0 != NULL) && (u_0 != t)))
      _fail(t);
    else
      u_0 = t;
    if(((r_394 != NULL) && (r_394 != t)))
      _fail(t);
    else
      r_394 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_24, not_null(r_394));
    t = fputc_0_0(t);
    return(t);
  }
  t = WriteToFile_1_0(z_17, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,v_0 = NULL,x_391 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_24 = ATgetArgument(t, 0);
      if(match_cons(q_24, sym_Stream_1))
        {
          if(((d_49 != NULL) && (d_49 != ATgetArgument(q_24, 0))))
            _fail(ATgetArgument(q_24, 0));
          else
            d_49 = ATgetArgument(q_24, 0);
        }
      else
        _fail(t);
      if(((e_49 != NULL) && (e_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(d_49), not_null(e_49));
  if(((v_0 != NULL) && (v_0 != t)))
    _fail(t);
  else
    v_0 = t;
  if(((x_391 != NULL) && (x_391 != t)))
    _fail(t);
  else
    x_391 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_391));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm l_94 (ATerm), ATerm t)
{
  ATerm c_395 = NULL,l_49 = NULL,w_0 = NULL,n_395 = NULL,x_0 = NULL,y_395 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_395 != NULL) && (c_395 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_395 = ATgetArgument(t, 0);
      if(((l_49 != NULL) && (l_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(c_395);
  if(((w_0 != NULL) && (w_0 != t)))
    _fail(t);
  else
    w_0 = t;
  if(((n_395 != NULL) && (n_395 != t)))
    _fail(t);
  else
    n_395 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_395), term_r_24);
  t = open_stream_0_0(t);
  if(((x_0 != NULL) && (x_0 != t)))
    _fail(t);
  else
    x_0 = t;
  if(((y_395 != NULL) && (y_395 != t)))
    _fail(t);
  else
    y_395 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_395), not_null(l_49));
  t = l_94(t);
  t = fclose_0_0(t);
  t = not_null(l_49);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_0 = NULL,g_52 = NULL;
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
                if(((g_52 != NULL) && (g_52 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_52 = ATgetArgument(t, 0);
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
          if(((g_52 != NULL) && (g_52 != t)))
            _fail(t);
          else
            g_52 = t;
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
          t = not_null(g_52);
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
ATerm apply_strategy_1_0 (ATerm n_97 (ATerm), ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL;
  if(((z_0 != NULL) && (z_0 != t)))
    _fail(t);
  else
    z_0 = t;
  t = dtime_0_0(t);
  t = not_null(z_0);
  t = n_97(t);
  if(((a_1 != NULL) && (a_1 != t)))
    _fail(t);
  else
    a_1 = t;
  t = dtime_0_0(t);
  if(((d_52 != NULL) && (d_52 != t)))
    _fail(t);
  else
    d_52 = t;
  t = not_null(a_1);
  if(match_cons(t, sym__2))
    {
      if(((e_52 != NULL) && (e_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_52 = ATgetArgument(t, 0);
      if(((f_52 != NULL) && (f_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_52)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(d_52))), not_null(f_52));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL;
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Stream_1))
        {
          if(((x_45 != NULL) && (x_45 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            x_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_fclose(not_null(x_45));
      ;
      LocalPopChoice(y_24);
    }
  else
    {
      t = x_24;
      if(((y_45 != NULL) && (y_45 != t)))
        _fail(t);
      else
        y_45 = t;
      t = SSL_fclose(not_null(y_45));
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm j_49 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((j_49 != NULL) && (j_49 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(j_49));
  return(t);
}
ATerm debug_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,z_385 = NULL,d_1 = NULL,g_386 = NULL;
  if(((b_1 != NULL) && (b_1 != t)))
    _fail(t);
  else
    b_1 = t;
  if(((c_1 != NULL) && (c_1 != t)))
    _fail(t);
  else
    c_1 = t;
  t = x_93(t);
  if(((z_385 != NULL) && (z_385 != t)))
    _fail(t);
  else
    z_385 = t;
  t = not_null(c_1);
  if(((d_1 != NULL) && (d_1 != t)))
    _fail(t);
  else
    d_1 = t;
  if(((g_386 != NULL) && (g_386 != t)))
    _fail(t);
  else
    g_386 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_386)), not_null(z_385)));
  t = printnl_0_0(t);
  t = not_null(b_1);
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,e_1 = NULL,f_351 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_45 != NULL) && (v_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_45 = ATgetArgument(t, 0);
      if(((w_45 != NULL) && (w_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(v_45), not_null(w_45));
  if(((e_1 != NULL) && (e_1 != t)))
    _fail(t);
  else
    e_1 = t;
  if(((f_351 != NULL) && (f_351 != t)))
    _fail(t);
  else
    f_351 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_351));
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm i_40 = NULL;
  if(((i_40 != NULL) && (i_40 != t)))
    _fail(t);
  else
    i_40 = t;
  t = SSL_is_string(not_null(i_40));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_1 = NULL,g_353 = NULL;
  t = SSL_stdin_stream();
  if(((f_1 != NULL) && (f_1 != t)))
    _fail(t);
  else
    f_1 = t;
  if(((g_353 != NULL) && (g_353 != t)))
    _fail(t);
  else
    g_353 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_353));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_1 = NULL,r_353 = NULL;
  t = SSL_stdout_stream();
  if(((g_1 != NULL) && (g_1 != t)))
    _fail(t);
  else
    g_1 = t;
  if(((r_353 != NULL) && (r_353 != t)))
    _fail(t);
  else
    r_353 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_353));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_1 = NULL,c_354 = NULL;
  t = SSL_stderr_stream();
  if(((h_1 != NULL) && (h_1 != t)))
    _fail(t);
  else
    h_1 = t;
  if(((c_354 != NULL) && (c_354 != t)))
    _fail(t);
  else
    c_354 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_354));
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
  ATerm v_221 = NULL,i_1 = NULL,w_221 = NULL,i_35 = NULL,j_35 = NULL;
  if(((v_221 != NULL) && (v_221 != t)))
    _fail(t);
  else
    v_221 = t;
  if(((i_1 != NULL) && (i_1 != t)))
    _fail(t);
  else
    i_1 = t;
  t = not_null(v_221);
  if(((w_221 != NULL) && (w_221 != t)))
    _fail(t);
  else
    w_221 = t;
  t = SSL_explode_term(not_null(w_221));
  if(match_cons(t, sym__2))
    {
      ATerm d_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_25 = ATgetArgument(t, 1);
        if(((ATgetType(e_25) == AT_LIST) && !(ATisEmpty(e_25))))
          {
            if(((j_35 != NULL) && (j_35 != ATgetFirst((ATermList) e_25))))
              _fail(ATgetFirst((ATermList) e_25));
            else
              j_35 = ATgetFirst((ATermList) e_25);
            if(((i_35 != NULL) && (i_35 != (ATerm) ATgetNext((ATermList) e_25))))
              _fail((ATerm) ATgetNext((ATermList) e_25));
            else
              i_35 = (ATerm) ATgetNext((ATermList) e_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(j_35);
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
                ATerm r_344 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    if(((r_344 != NULL) && (r_344 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      r_344 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = not_null(r_344);
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
  ATerm k_1 = NULL,k_49 = NULL;
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 = NULL,t_393 = NULL;
      if(((j_1 != NULL) && (j_1 != t)))
        _fail(t);
      else
        j_1 = t;
      if(((t_393 != NULL) && (t_393 != t)))
        _fail(t);
      else
        t_393 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_393), term_n_25);
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
  if(((k_49 != NULL) && (k_49 != t)))
    _fail(t);
  else
    k_49 = t;
  t = not_null(k_1);
  t = fclose_0_0(t);
  t = not_null(k_49);
  return(t);
}
ATerm split_2_0 (ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,i_225 = NULL,m_1 = NULL,p_225 = NULL;
  if(((l_1 != NULL) && (l_1 != t)))
    _fail(t);
  else
    l_1 = t;
  t = m_89(t);
  if(((i_225 != NULL) && (i_225 != t)))
    _fail(t);
  else
    i_225 = t;
  t = not_null(l_1);
  if(((m_1 != NULL) && (m_1 != t)))
    _fail(t);
  else
    m_1 = t;
  t = n_89(t);
  if(((p_225 != NULL) && (p_225 != t)))
    _fail(t);
  else
    p_225 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_225), not_null(p_225));
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm n_1 = NULL,c_52 = NULL;
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
              if(((c_52 != NULL) && (c_52 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                c_52 = ATgetArgument(t, 0);
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
        if(((c_52 != NULL) && (c_52 != t)))
          _fail(t);
        else
          c_52 = t;
      }
    t = not_null(n_1);
    {
      ATerm j_18 (ATerm t)
      {
        t = not_null(c_52);
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
    ATerm o_1 = NULL,p_1 = NULL,n_461 = NULL;
    if(((o_1 != NULL) && (o_1 != t)))
      _fail(t);
    else
      o_1 = t;
    if(((p_1 != NULL) && (p_1 != t)))
      _fail(t);
    else
      p_1 = t;
    t = string_to_int_0_0(t);
    if(((n_461 != NULL) && (n_461 != t)))
      _fail(t);
    else
      n_461 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_25, not_null(n_461));
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
  ATerm k_42 = NULL;
  if(((k_42 != NULL) && (k_42 != t)))
    _fail(t);
  else
    k_42 = t;
  t = SSL_string_to_int(not_null(k_42));
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
              ATerm r_1 = NULL,s_1 = NULL,s_466 = NULL,t_1 = NULL,d_467 = NULL;
              if(((r_1 != NULL) && (r_1 != t)))
                _fail(t);
              else
                r_1 = t;
              if(((s_1 != NULL) && (s_1 != t)))
                _fail(t);
              else
                s_1 = t;
              t = string_to_int_0_0(t);
              if(((s_466 != NULL) && (s_466 != t)))
                _fail(t);
              else
                s_466 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_l_24, not_null(s_466));
              t = set_config_0_0(t);
              t = not_null(r_1);
              if(((t_1 != NULL) && (t_1 != t)))
                _fail(t);
              else
                t_1 = t;
              if(((d_467 != NULL) && (d_467 != t)))
                _fail(t);
              else
                d_467 = t;
              t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_467));
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
    ATerm v_1 = NULL,w_1 = NULL,a_464 = NULL,x_1 = NULL,l_464 = NULL;
    if(((v_1 != NULL) && (v_1 != t)))
      _fail(t);
    else
      v_1 = t;
    if(((w_1 != NULL) && (w_1 != t)))
      _fail(t);
    else
      w_1 = t;
    if(((a_464 != NULL) && (a_464 != t)))
      _fail(t);
    else
      a_464 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_26, not_null(a_464));
    t = set_config_0_0(t);
    t = not_null(v_1);
    if(((x_1 != NULL) && (x_1 != t)))
      _fail(t);
    else
      x_1 = t;
    if(((l_464 != NULL) && (l_464 != t)))
      _fail(t);
    else
      l_464 = t;
    t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_464));
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
        ATerm w_54 = NULL,u_54 = NULL,v_54 = NULL,z_1 = NULL,a_2 = NULL,i_501 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((w_54 != NULL) && (w_54 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              w_54 = ATgetFirst((ATermList) t);
            {
              ATerm z_26 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(z_26) == AT_LIST) && !(ATisEmpty(z_26))))
                {
                  if(((u_54 != NULL) && (u_54 != ATgetFirst((ATermList) z_26))))
                    _fail(ATgetFirst((ATermList) z_26));
                  else
                    u_54 = ATgetFirst((ATermList) z_26);
                  if(((v_54 != NULL) && (v_54 != (ATerm) ATgetNext((ATermList) z_26))))
                    _fail((ATerm) ATgetNext((ATermList) z_26));
                  else
                    v_54 = (ATerm) ATgetNext((ATermList) z_26);
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
        t = not_null(w_54);
        t = h_0(t);
        t = not_null(z_1);
        if(((a_2 != NULL) && (a_2 != t)))
          _fail(t);
        else
          a_2 = t;
        t = not_null(u_54);
        t = i_0(t);
        if(((i_501 != NULL) && (i_501 != t)))
          _fail(t);
        else
          i_501 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(v_54)), not_null(i_501));
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
    ATerm b_2 = NULL,c_2 = NULL,q_462 = NULL,d_2 = NULL,b_463 = NULL;
    if(((b_2 != NULL) && (b_2 != t)))
      _fail(t);
    else
      b_2 = t;
    if(((c_2 != NULL) && (c_2 != t)))
      _fail(t);
    else
      c_2 = t;
    if(((q_462 != NULL) && (q_462 != t)))
      _fail(t);
    else
      q_462 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_c_27, not_null(q_462));
    t = set_config_0_0(t);
    t = not_null(b_2);
    if(((d_2 != NULL) && (d_2 != t)))
      _fail(t);
    else
      d_2 = t;
    if(((b_463 != NULL) && (b_463 != t)))
      _fail(t);
    else
      b_463 = t;
    t = (ATerm) ATmakeAppl(sym_Input_1, not_null(b_463));
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
  ATerm e_2 = NULL,j_459 = NULL;
  t = report_run_time_0_0(t);
  if(((e_2 != NULL) && (e_2 != t)))
    _fail(t);
  else
    e_2 = t;
  t = term_n_23;
  t = whoami_0_0(t);
  if(((j_459 != NULL) && (j_459 != t)))
    _fail(t);
  else
    j_459 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATinsert(ATinsert(ATempty, term_i_27), not_null(j_459)));
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
  ATerm l_52 = NULL;
  if(((l_52 != NULL) && (l_52 != t)))
    _fail(t);
  else
    l_52 = t;
  t = SSL_TicksToSeconds(not_null(l_52));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_42 != NULL) && (p_42 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_42 = ATgetArgument(t, 0);
      if(((q_42 != NULL) && (q_42 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(p_42), not_null(q_42));
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        t = SSL_addr(not_null(p_42), not_null(q_42));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm t)
{
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = x_87(t);
      ;
      LocalPopChoice(s_27);
    }
  else
    {
      t = r_27;
      {
        ATerm t_33 = NULL,u_33 = NULL,f_2 = NULL,m_201 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((t_33 != NULL) && (t_33 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              t_33 = ATgetFirst((ATermList) t);
            if(((u_33 != NULL) && (u_33 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              u_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        if(((f_2 != NULL) && (f_2 != t)))
          _fail(t);
        else
          f_2 = t;
        t = not_null(u_33);
        t = foldr_2_0(x_87, y_87, t);
        if(((m_201 != NULL) && (m_201 != t)))
          _fail(t);
        else
          m_201 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_33), not_null(m_201));
        t = y_87(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm q_91 (ATerm), ATerm r_91 (ATerm), ATerm t)
{
  ATerm l_292 = NULL,g_2 = NULL,m_292 = NULL,m_40 = NULL;
  if(((l_292 != NULL) && (l_292 != t)))
    _fail(t);
  else
    l_292 = t;
  if(((g_2 != NULL) && (g_2 != t)))
    _fail(t);
  else
    g_2 = t;
  t = not_null(l_292);
  if(((m_292 != NULL) && (m_292 != t)))
    _fail(t);
  else
    m_292 = t;
  t = SSL_explode_term(not_null(m_292));
  if(match_cons(t, sym__2))
    {
      ATerm t_27 = ATgetArgument(t, 0);
      if(((m_40 != NULL) && (m_40 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(m_40);
  t = foldr_2_0(q_91, r_91, t);
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
  ATerm p_43 = NULL,q_43 = NULL,h_2 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_43 != NULL) && (p_43 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_43 = ATgetArgument(t, 0);
      if(((q_43 != NULL) && (q_43 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_43 = ATgetArgument(t, 1);
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
        t = SSL_gti(not_null(p_43), not_null(q_43));
        ;
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        t = SSL_gtr(not_null(p_43), not_null(q_43));
      }
    t = not_null(h_2);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_43 = NULL;
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym__2))
        {
          if(((v_43 != NULL) && (v_43 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_43 = ATgetArgument(t, 0);
          if(((v_43 != NULL) && (v_43 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            v_43 = ATgetArgument(t, 1);
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
ATerm if_verbose1_1_0 (ATerm o_95 (ATerm), ATerm t)
{
  ATerm g_19 (ATerm t)
  {
    ATerm i_2 = NULL,j_2 = NULL,b_409 = NULL;
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
    if(((b_409 != NULL) && (b_409 != t)))
      _fail(t);
    else
      b_409 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_409), term_r_23);
    t = geq_0_0(t);
    t = not_null(i_2);
    t = o_95(t);
    return(t);
  }
  t = try_1_0(g_19, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm h_19 (ATerm t)
  {
    ATerm k_2 = NULL,c_460 = NULL,l_2 = NULL,k_460 = NULL;
    if(((k_2 != NULL) && (k_2 != t)))
      _fail(t);
    else
      k_2 = t;
    t = run_time_0_0(t);
    if(((c_460 != NULL) && (c_460 != t)))
      _fail(t);
    else
      c_460 = t;
    t = not_null(k_2);
    if(((l_2 != NULL) && (l_2 != t)))
      _fail(t);
    else
      l_2 = t;
    t = term_n_23;
    t = whoami_0_0(t);
    if(((k_460 != NULL) && (k_460 != t)))
      _fail(t);
    else
      k_460 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_27), not_null(c_460)), term_y_27), not_null(k_460)));
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
ATerm need_help_1_0 (ATerm l_98 (ATerm), ATerm t)
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
          int e_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(e_28);
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
  t = l_98(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm t_56 = NULL;
  if(((t_56 != NULL) && (t_56 != t)))
    _fail(t);
  else
    t_56 = t;
  t = SSL_table_create(not_null(t_56));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm h_52 = NULL,m_2 = NULL;
  if(((h_52 != NULL) && (h_52 != t)))
    _fail(t);
  else
    h_52 = t;
  if(((m_2 != NULL) && (m_2 != t)))
    _fail(t);
  else
    m_2 = t;
  t = term_k_28;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_28, term_l_28, not_null(h_52));
  t = table_put_0_0(t);
  t = not_null(m_2);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm u_56 = NULL;
  if(((u_56 != NULL) && (u_56 != t)))
    _fail(t);
  else
    u_56 = t;
  t = SSL_table_destroy(not_null(u_56));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm m_51 = NULL;
  if(((m_51 != NULL) && (m_51 != t)))
    _fail(t);
  else
    m_51 = t;
  t = SSL_exit(not_null(m_51));
  return(t);
}
ATerm long_description_1_0 (ATerm m_100 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm w_81 (ATerm t)
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
        t = Cons_2_0(v_81, w_81, t);
      }
    return(t);
  }
  t = w_81(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_28 = NULL,g_28 = NULL,n_2 = NULL,o_2 = NULL,h_149 = NULL,p_2 = NULL,p_149 = NULL,h_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((f_28 != NULL) && (f_28 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            f_28 = ATgetFirst((ATermList) t);
          if(((g_28 != NULL) && (g_28 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(g_28);
      if(((n_2 != NULL) && (n_2 != t)))
        _fail(t);
      else
        n_2 = t;
      if(((o_2 != NULL) && (o_2 != t)))
        _fail(t);
      else
        o_2 = t;
      t = g_0(t);
      if(((h_149 != NULL) && (h_149 != t)))
        _fail(t);
      else
        h_149 = t;
      t = not_null(o_2);
      if(((p_2 != NULL) && (p_2 != t)))
        _fail(t);
      else
        p_2 = t;
      t = not_null(f_28);
      t = f_0(t);
      if(((p_149 != NULL) && (p_149 != t)))
        _fail(t);
      else
        p_149 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(h_149)), not_null(p_149));
      if(((h_28 != NULL) && (h_28 != t)))
        _fail(t);
      else
        h_28 = t;
      t = not_null(n_2);
      {
        ATerm j_19 (ATerm t)
        {
          t = not_null(h_28);
          return(t);
        }
        t = reverse_acc_2_0(f_0, j_19, t);
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
ATerm short_description_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm c_74 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,q_15 = NULL,s_15 = NULL,t_15 = NULL,v_15 = NULL,u_15 = NULL,w_15 = NULL;
  if(((t_15 != NULL) && (t_15 != t)))
    _fail(t);
  else
    t_15 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((q_15 != NULL) && (q_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((v_15 != NULL) && (v_15 != t)))
    _fail(t);
  else
    v_15 = t;
  t = SSLgetAnnotations(not_null(t_15));
  if(((r_15 != NULL) && (r_15 != t)))
    _fail(t);
  else
    r_15 = t;
  t = not_null(q_15);
  t = c_74(t);
  if(((s_15 != NULL) && (s_15 != t)))
    _fail(t);
  else
    s_15 = t;
  if(((w_15 != NULL) && (w_15 != t)))
    _fail(t);
  else
    w_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_15)), not_null(r_15));
  if(((u_15 != NULL) && (u_15 != t)))
    _fail(t);
  else
    u_15 = t;
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_55 = NULL;
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_27;
      t = get_config_0_0(t);
      if(((i_55 != NULL) && (i_55 != t)))
        _fail(t);
      else
        i_55 = t;
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
            if(((i_55 != NULL) && (i_55 != t)))
              _fail(t);
            else
              i_55 = t;
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
        t = not_null(i_55);
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
        ATerm q_2 = NULL,c_511 = NULL;
        if(((q_2 != NULL) && (q_2 != t)))
          _fail(t);
        else
          q_2 = t;
        if(((c_511 != NULL) && (c_511 != t)))
          _fail(t);
        else
          c_511 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_511)), term_w_28);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(p_19, t);
      {
        ATerm q_19 (ATerm t)
        {
          ATerm r_2 = NULL,n_511 = NULL;
          if(((r_2 != NULL) && (r_2 != t)))
            _fail(t);
          else
            r_2 = t;
          {
            ATerm r_19 (ATerm t)
            {
              t = not_null(i_55);
              return(t);
            }
            t = long_description_1_0(r_19, t);
            if(((n_511 != NULL) && (n_511 != t)))
              _fail(t);
            else
              n_511 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(n_511)), term_x_28);
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
ATerm Undefined_1_0 (ATerm d_74 (ATerm), ATerm t)
{
  ATerm y_15 = NULL,x_15 = NULL,z_15 = NULL,a_16 = NULL,c_16 = NULL,b_16 = NULL,d_16 = NULL;
  if(((a_16 != NULL) && (a_16 != t)))
    _fail(t);
  else
    a_16 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((x_15 != NULL) && (x_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((c_16 != NULL) && (c_16 != t)))
    _fail(t);
  else
    c_16 = t;
  t = SSLgetAnnotations(not_null(a_16));
  if(((y_15 != NULL) && (y_15 != t)))
    _fail(t);
  else
    y_15 = t;
  t = not_null(x_15);
  t = d_74(t);
  if(((z_15 != NULL) && (z_15 != t)))
    _fail(t);
  else
    z_15 = t;
  if(((d_16 != NULL) && (d_16 != t)))
    _fail(t);
  else
    d_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_15)), not_null(y_15));
  if(((b_16 != NULL) && (b_16 != t)))
    _fail(t);
  else
    b_16 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm h_82 (ATerm t)
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_82, _id, t);
        ;
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
        t = Cons_2_0(_id, h_82, t);
      }
    return(t);
  }
  t = h_82(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm l_99 (ATerm), ATerm t)
{
  t = fetch_1_0(l_99, t);
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
  ATerm s_2 = NULL,t_2 = NULL,a_383 = NULL;
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
          ATerm u_2 = NULL,c_383 = NULL;
          if(((u_2 != NULL) && (u_2 != t)))
            _fail(t);
          else
            u_2 = t;
          if(((c_383 != NULL) && (c_383 != t)))
            _fail(t);
          else
            c_383 = t;
          t = (ATerm) ATinsert(ATempty, not_null(c_383));
        }
      }
    if(((a_383 != NULL) && (a_383 != t)))
      _fail(t);
    else
      a_383 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_24, not_null(a_383));
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
ATerm try_1_0 (ATerm k_74 (ATerm), ATerm t)
{
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_74(t);
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
  ATerm y_56 = NULL,z_56 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_56 != NULL) && (y_56 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_56 = ATgetArgument(t, 0);
      if(((z_56 != NULL) && (z_56 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(y_56), not_null(z_56));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL,j_55 = NULL,w_2 = NULL,x_2 = NULL,i_514 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((k_55 != NULL) && (k_55 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_55 = ATgetArgument(t, 0);
      if(((l_55 != NULL) && (l_55 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_55 = ATgetArgument(t, 1);
      if(((j_55 != NULL) && (j_55 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        j_55 = ATgetArgument(t, 2);
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
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_55), not_null(l_55));
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
    if(((i_514 != NULL) && (i_514 != t)))
      _fail(t);
    else
      i_514 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(k_55), not_null(l_55), (ATerm) ATinsert(CheckATermList(not_null(i_514)), not_null(j_55)));
    t = table_put_0_0(t);
    t = not_null(w_2);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm q_100 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,n_509 = NULL;
  if(((y_2 != NULL) && (y_2 != t)))
    _fail(t);
  else
    y_2 = t;
  t = term_n_23;
  t = q_100(t);
  if(((n_509 != NULL) && (n_509 != t)))
    _fail(t);
  else
    n_509 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_28, term_u_28, not_null(n_509));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
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
        ATerm t_54 = NULL,s_54 = NULL,z_2 = NULL,a_3 = NULL,a_500 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((t_54 != NULL) && (t_54 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              t_54 = ATgetFirst((ATermList) t);
            if(((s_54 != NULL) && (s_54 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              s_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        if(((z_2 != NULL) && (z_2 != t)))
          _fail(t);
        else
          z_2 = t;
        t = not_null(t_54);
        t = a_0(t);
        t = not_null(z_2);
        if(((a_3 != NULL) && (a_3 != t)))
          _fail(t);
        else
          a_3 = t;
        t = term_n_23;
        t = b_0(t);
        if(((a_500 != NULL) && (a_500 != t)))
          _fail(t);
        else
          a_500 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(s_54)), not_null(a_500));
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
  ATerm f_55 = NULL,g_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((f_55 != NULL) && (f_55 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        f_55 = ATgetFirst((ATermList) t);
      if(((g_55 != NULL) && (g_55 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        g_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(g_55)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_55)));
  return(t);
}
ATerm Cons_2_0 (ATerm i_61 (ATerm), ATerm j_61 (ATerm), ATerm t)
{
  ATerm g_16 = NULL,e_16 = NULL,f_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,l_16 = NULL,k_16 = NULL,m_16 = NULL;
  if(((j_16 != NULL) && (j_16 != t)))
    _fail(t);
  else
    j_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((e_16 != NULL) && (e_16 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        e_16 = ATgetFirst((ATermList) t);
      if(((f_16 != NULL) && (f_16 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        f_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((l_16 != NULL) && (l_16 != t)))
    _fail(t);
  else
    l_16 = t;
  t = SSLgetAnnotations(not_null(j_16));
  if(((g_16 != NULL) && (g_16 != t)))
    _fail(t);
  else
    g_16 = t;
  t = not_null(e_16);
  t = i_61(t);
  if(((h_16 != NULL) && (h_16 != t)))
    _fail(t);
  else
    h_16 = t;
  t = not_null(f_16);
  t = j_61(t);
  if(((i_16 != NULL) && (i_16 != t)))
    _fail(t);
  else
    i_16 = t;
  if(((m_16 != NULL) && (m_16 != t)))
    _fail(t);
  else
    m_16 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_16)), not_null(h_16)), not_null(g_16));
  if(((k_16 != NULL) && (k_16 != t)))
    _fail(t);
  else
    k_16 = t;
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
  ATerm k_50 = NULL,l_50 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_50 != NULL) && (k_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_50 = ATgetArgument(t, 0);
      if(((l_50 != NULL) && (l_50 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_24, not_null(k_50), not_null(l_50));
  t = table_put_0_0(t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_100 (ATerm), ATerm t)
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
      t = o_100(t);
      return(t);
    }
    t = try_1_0(b_20, t);
    t = not_null(b_3);
    {
      ATerm c_20 (ATerm t)
      {
        ATerm c_3 = NULL,d_3 = NULL,q_508 = NULL,e_3 = NULL,b_509 = NULL;
        if(((c_3 != NULL) && (c_3 != t)))
          _fail(t);
        else
          c_3 = t;
        if(((d_3 != NULL) && (d_3 != t)))
          _fail(t);
        else
          d_3 = t;
        if(((q_508 != NULL) && (q_508 != t)))
          _fail(t);
        else
          q_508 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_27, not_null(q_508));
        t = set_config_0_0(t);
        t = not_null(c_3);
        if(((e_3 != NULL) && (e_3 != t)))
          _fail(t);
        else
          e_3 = t;
        if(((b_509 != NULL) && (b_509 != t)))
          _fail(t);
        else
          b_509 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_509));
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
                t = o_100(t);
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
  ATerm f_3 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL;
  if(((f_3 != NULL) && (f_3 != t)))
    _fail(t);
  else
    f_3 = t;
  if(match_cons(t, sym__3))
    {
      if(((v_56 != NULL) && (v_56 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_56 = ATgetArgument(t, 0);
      if(((w_56 != NULL) && (w_56 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_56 = ATgetArgument(t, 1);
      if(((x_56 != NULL) && (x_56 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        x_56 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(v_56), not_null(w_56), not_null(x_56));
  t = not_null(f_3);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_100 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,h_55 = NULL,j_3 = NULL;
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
          t = n_100(t);
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
                        if(((h_55 != NULL) && (h_55 != t)))
                          _fail(t);
                        else
                          h_55 = t;
                        return(t);
                      }
                      t = Undefined_1_0(h_20, t);
                      return(t);
                    }
                    t = option_defined_1_0(g_20, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_55)), term_w_30));
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
ATerm option_wrap_4_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm t)
{
  t = parse_options_1_0(n_98, t);
  t = store_options_0_0(t);
  t = p_98(t);
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_98, t);
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
              t = q_98(t);
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
ATerm iowrap_4_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm t)
{
  ATerm i_20 (ATerm t)
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_98(t);
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
    t = apply_strategy_1_0(c_98, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(i_20, e_98, f_98, j_20, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm t)
{
  ATerm k_20 (ATerm t)
  {
    ATerm l_20 (ATerm t)
    {
      ATerm k_3 = NULL,l_3 = NULL,i_457 = NULL;
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
      if(((i_457 != NULL) && (i_457 != t)))
        _fail(t);
      else
        i_457 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATinsert(ATempty, not_null(i_457)));
      t = printnl_0_0(t);
      t = not_null(k_3);
      return(t);
    }
    t = if_verbose2_1_0(l_20, t);
    return(t);
  }
  t = iowrap_4_0(w_97, x_97, y_97, k_20, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm t)
{
  t = iowrap_3_0(u_97, v_97, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm r_97 (ATerm), ATerm t)
{
  ATerm m_20 (ATerm t)
  {
    t = _2_0(_id, r_97, t);
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
