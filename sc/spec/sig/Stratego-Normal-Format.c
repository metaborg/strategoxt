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
ATerm term_l_22;
ATerm term_i_22;
ATerm term_u_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_l_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_o_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_l_17;
ATerm term_d_17;
ATerm term_x_16;
ATerm term_u_16;
ATerm term_d_16;
ATerm term_x_15;
ATerm term_t_15;
ATerm term_n_15;
ATerm term_z_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_e_10;
void init_constant_terms (void)
{
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym__2, term_q_17, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_a_18, term_e_10);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_j_18);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym__2, term_b_20, term_e_10);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_e_10);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_e_10);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_e_10);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm debug_1_0 (ATerm g_101 (ATerm), ATerm);
ATerm ConstType_1_0 (ATerm q_68 (ATerm), ATerm);
ATerm list_1_0 (ATerm v_88 (ATerm), ATerm);
ATerm FunType_2_0 (ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm);
ATerm Let_2_0 (ATerm s_72 (ATerm), ATerm t_72 (ATerm), ATerm);
ATerm Op_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm);
ATerm Var_1_0 (ATerm i_69 (ATerm), ATerm);
ATerm As_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm f_70 (ATerm), ATerm);
ATerm Str_1_0 (ATerm m_69 (ATerm), ATerm);
ATerm Real_1_0 (ATerm l_69 (ATerm), ATerm);
ATerm Int_1_0 (ATerm k_69 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm term_expression_0_0 (ATerm);
ATerm PrimT_3_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm);
ATerm Where_1_0 (ATerm s_73 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm);
ATerm Build_1_0 (ATerm a_73 (ATerm), ATerm);
ATerm Match_1_0 (ATerm z_72 (ATerm), ATerm);
ATerm Thread_1_0 (ATerm g_74 (ATerm), ATerm);
ATerm All_1_0 (ATerm f_74 (ATerm), ATerm);
ATerm Some_1_0 (ATerm d_74 (ATerm), ATerm);
ATerm One_1_0 (ATerm e_74 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm);
ATerm Path_2_0 (ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm r_72 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm w_72 (ATerm), ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm);
ATerm LGChoice_2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm k_72 (ATerm), ATerm l_72 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm g_72 (ATerm), ATerm h_72 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm g_73 (ATerm), ATerm h_73 (ATerm), ATerm);
ATerm Test_1_0 (ATerm t_73 (ATerm), ATerm);
ATerm Not_1_0 (ATerm r_73 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm m_7 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm d_75 (ATerm), ATerm e_75 (ATerm), ATerm);
ATerm Mod_2_0 (ATerm v_74 (ATerm), ATerm w_74 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm);
ATerm n_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm map_1_0 (ATerm r_88 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm f_68 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm k_68 (ATerm), ATerm);
ATerm _2_0 (ATerm k_63 (ATerm), ATerm l_63 (ATerm), ATerm);
ATerm t_3 (ATerm d_49, ATerm e_49, ATerm);
ATerm u_3 (ATerm r_52, ATerm s_52, ATerm);
ATerm w_3 (ATerm i_101 (ATerm), ATerm i_424, ATerm v_52, ATerm);
ATerm v_3 (ATerm n_52, ATerm o_52, ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm h_8 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm k_104 (ATerm), ATerm);
ATerm y_31 (ATerm s_31, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm t_52, ATerm);
ATerm y_3 (ATerm f_49, ATerm g_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_8 (ATerm);
ATerm m_8 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm n_8 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm b_89 (ATerm), ATerm);
ATerm s_3 (ATerm t_43, ATerm u_43, ATerm);
ATerm o_8 (ATerm);
ATerm q_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm t_102 (ATerm), ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm e_4 (ATerm u_53, ATerm v_53, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm f_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_4 (ATerm s_58, ATerm t_58, ATerm r_58, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_3 (ATerm d_46, ATerm e_46, ATerm);
ATerm foldr_2_0 (ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_102 (ATerm), ATerm);
ATerm o_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_9 (ATerm);
ATerm need_help_1_0 (ATerm i_105 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm b_4 (ATerm j_60, ATerm k_60, ATerm);
ATerm Program_1_0 (ATerm y_80 (ATerm), ATerm);
ATerm t_9 (ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_80 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm y_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm k_10 (ATerm);
ATerm parse_options_p__1_0 (ATerm l_107 (ATerm), ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm parse_options_1_0 (ATerm k_107 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm);
ATerm u_10 (ATerm);
ATerm b_11 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm iowrap_3_0 (ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm);
ATerm h_11 (ATerm);
ATerm l_11 (ATerm);
ATerm m_11 (ATerm);
ATerm n_11 (ATerm);
ATerm o_11 (ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm r_11 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL;
  e_0 = t;
  t = term_e_10;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_s_11;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_11), l_0), term_t_11);
  n_0 = t;
  t = SSL_printnl(m_0, n_0);
  t = term_v_11;
  o_0 = t;
  t = SSL_exit(o_0);
  t = e_0;
  return(t);
}
ATerm debug_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm x_0 = NULL,d_1 = NULL,e_1 = NULL,j_1 = NULL;
  x_0 = t;
  t = g_101(t);
  d_1 = t;
  t = term_s_11;
  e_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_0), d_1);
  j_1 = t;
  t = SSL_printnl(e_1, j_1);
  t = x_0;
  return(t);
}
ATerm ConstType_1_0 (ATerm q_68 (ATerm), ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,t_1 = NULL,u_1 = NULL,c_0 = NULL,k_0 = NULL;
  u_1 = t;
  if(match_cons(t, sym_ConstType_1))
    {
      r_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_1);
  q_1 = t;
  t = r_1;
  t = q_68(t);
  t_1 = t;
  k_0 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, t_1);
  c_0 = t;
  t = SSLsetAnnotations(c_0, q_1);
  return(t);
}
ATerm list_1_0 (ATerm v_88 (ATerm), ATerm t)
{
  t = map_1_0(v_88, t);
  return(t);
}
ATerm FunType_2_0 (ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm t)
{
  ATerm y_1 = NULL,a_2 = NULL,b_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,p_0 = NULL,q_0 = NULL;
  f_2 = t;
  if(match_cons(t, sym_FunType_2))
    {
      a_2 = ATgetArgument(t, 0);
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_2);
  y_1 = t;
  t = a_2;
  t = r_68(t);
  d_2 = t;
  t = b_2;
  t = s_68(t);
  e_2 = t;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, d_2, e_2);
  p_0 = t;
  t = SSLsetAnnotations(p_0, y_1);
  return(t);
}
ATerm Let_2_0 (ATerm s_72 (ATerm), ATerm t_72 (ATerm), ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,o_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,r_0 = NULL,t_0 = NULL;
  s_2 = t;
  if(match_cons(t, sym_Let_2))
    {
      j_2 = ATgetArgument(t, 0);
      o_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_2);
  i_2 = t;
  t = j_2;
  t = s_72(t);
  q_2 = t;
  t = o_2;
  t = t_72(t);
  r_2 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, q_2, r_2);
  r_0 = t;
  t = SSLsetAnnotations(r_0, i_2);
  return(t);
}
ATerm Op_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm t)
{
  ATerm w_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,c_3 = NULL,e_3 = NULL,v_0 = NULL,w_0 = NULL;
  e_3 = t;
  if(match_cons(t, sym_Op_2))
    {
      y_2 = ATgetArgument(t, 0);
      z_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_3);
  w_2 = t;
  t = y_2;
  t = o_69(t);
  a_3 = t;
  t = z_2;
  t = p_69(t);
  c_3 = t;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, a_3, c_3);
  v_0 = t;
  t = SSLsetAnnotations(v_0, w_2);
  return(t);
}
ATerm Var_1_0 (ATerm i_69 (ATerm), ATerm t)
{
  ATerm j_3 = NULL,d_4 = NULL,h_5 = NULL,m_5 = NULL,y_0 = NULL,z_0 = NULL;
  m_5 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_5);
  j_3 = t;
  t = d_4;
  t = i_69(t);
  h_5 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_5);
  y_0 = t;
  t = SSLsetAnnotations(y_0, j_3);
  return(t);
}
ATerm As_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,y_5 = NULL,d_6 = NULL,e_6 = NULL,g_6 = NULL,a_1 = NULL,b_1 = NULL;
  g_6 = t;
  if(match_cons(t, sym_As_2))
    {
      s_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_6);
  r_5 = t;
  t = s_5;
  t = z_69(t);
  d_6 = t;
  t = y_5;
  t = a_70(t);
  e_6 = t;
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, d_6, e_6);
  a_1 = t;
  t = SSLsetAnnotations(a_1, r_5);
  return(t);
}
ATerm BuildDefault_1_0 (ATerm f_70 (ATerm), ATerm t)
{
  ATerm l_6 = NULL,n_6 = NULL,o_6 = NULL,r_6 = NULL,c_1 = NULL,f_1 = NULL;
  r_6 = t;
  if(match_cons(t, sym_BuildDefault_1))
    {
      n_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_6);
  l_6 = t;
  t = n_6;
  t = f_70(t);
  o_6 = t;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_BuildDefault_1, o_6);
  c_1 = t;
  t = SSLsetAnnotations(c_1, l_6);
  return(t);
}
ATerm Str_1_0 (ATerm m_69 (ATerm), ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,o_7 = NULL,g_1 = NULL,h_1 = NULL;
  o_7 = t;
  if(match_cons(t, sym_Str_1))
    {
      k_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_7);
  j_7 = t;
  t = k_7;
  t = m_69(t);
  l_7 = t;
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, l_7);
  g_1 = t;
  t = SSLsetAnnotations(g_1, j_7);
  return(t);
}
ATerm Real_1_0 (ATerm l_69 (ATerm), ATerm t)
{
  ATerm g_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,i_1 = NULL,l_1 = NULL;
  l_8 = t;
  if(match_cons(t, sym_Real_1))
    {
      j_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_8);
  g_8 = t;
  t = j_8;
  t = l_69(t);
  k_8 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Real_1, k_8);
  i_1 = t;
  t = SSLsetAnnotations(i_1, g_8);
  return(t);
}
ATerm Int_1_0 (ATerm k_69 (ATerm), ATerm t)
{
  ATerm p_8 = NULL,z_8 = NULL,e_9 = NULL,g_9 = NULL,m_1 = NULL,n_1 = NULL;
  g_9 = t;
  if(match_cons(t, sym_Int_1))
    {
      z_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_9);
  p_8 = t;
  t = z_8;
  t = k_69(t);
  e_9 = t;
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, e_9);
  m_1 = t;
  t = SSLsetAnnotations(m_1, p_8);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm p_9 = NULL;
  p_9 = t;
  t = SSL_is_string(p_9);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm s_9 = NULL;
  s_9 = t;
  t = SSL_is_int(s_9);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm u_9 = NULL;
  u_9 = t;
  t = SSL_is_real(u_9);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm x_9 = NULL;
  x_9 = t;
  t = SSL_is_string(x_9);
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = Var_1_0(w_5, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm z_9 = NULL;
  z_9 = t;
  t = SSL_is_string(z_9);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm d_10 = NULL;
  d_10 = t;
  t = SSL_is_string(d_10);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = map_1_0(term_expression_0_0, t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm x_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = x_11;
      {
        ATerm a_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(p_5, t);
            ;
            LocalPopChoice(d_12);
          }
        else
          {
            t = a_12;
            {
              ATerm h_12 = t;
              int i_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1_0(q_5, t);
                  ;
                  LocalPopChoice(i_12);
                }
              else
                {
                  t = h_12;
                  {
                    ATerm j_12 = t;
                    int k_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1_0(t_5, t);
                        ;
                        LocalPopChoice(k_12);
                      }
                    else
                      {
                        t = j_12;
                        {
                          ATerm l_12 = t;
                          int m_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1_0(u_5, t);
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
                                    t = BuildDefault_1_0(term_expression_0_0, t);
                                    ;
                                    LocalPopChoice(o_12);
                                  }
                                else
                                  {
                                    t = n_12;
                                    {
                                      ATerm t_12 = t;
                                      int u_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = As_2_0(v_5, term_expression_0_0, t);
                                          ;
                                          LocalPopChoice(u_12);
                                        }
                                      else
                                        {
                                          t = t_12;
                                          {
                                            ATerm v_12 = t;
                                            int w_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Op_2_0(x_5, z_5, t);
                                                ;
                                                LocalPopChoice(w_12);
                                              }
                                            else
                                              {
                                                t = v_12;
                                                t = debug_1_0(a_6, t);
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm PrimT_3_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,o_1 = NULL,p_1 = NULL;
  z_10 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      i_10 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
      v_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_10);
  h_10 = t;
  t = i_10;
  t = y_73(t);
  w_10 = t;
  t = j_10;
  t = z_73(t);
  x_10 = t;
  t = v_10;
  t = a_74(t);
  y_10 = t;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, w_10, x_10, y_10);
  o_1 = t;
  t = SSLsetAnnotations(o_1, h_10);
  return(t);
}
ATerm Where_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  ATerm f_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,s_1 = NULL,v_1 = NULL;
  k_11 = t;
  if(match_cons(t, sym_Where_1))
    {
      i_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_11);
  f_11 = t;
  t = i_11;
  t = s_73(t);
  j_11 = t;
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_Where_1, j_11);
  s_1 = t;
  t = SSLsetAnnotations(s_1, f_11);
  return(t);
}
ATerm Scope_2_0 (ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm t)
{
  ATerm y_11 = NULL,b_12 = NULL,c_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,w_1 = NULL,x_1 = NULL;
  g_12 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_12);
  y_11 = t;
  t = b_12;
  t = c_73(t);
  e_12 = t;
  t = c_12;
  t = d_73(t);
  f_12 = t;
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, f_12);
  w_1 = t;
  t = SSLsetAnnotations(w_1, y_11);
  return(t);
}
ATerm Build_1_0 (ATerm a_73 (ATerm), ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,z_1 = NULL,c_2 = NULL;
  s_12 = t;
  if(match_cons(t, sym_Build_1))
    {
      q_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_12);
  p_12 = t;
  t = q_12;
  t = a_73(t);
  r_12 = t;
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, r_12);
  z_1 = t;
  t = SSLsetAnnotations(z_1, p_12);
  return(t);
}
ATerm Match_1_0 (ATerm z_72 (ATerm), ATerm t)
{
  ATerm e_13 = NULL,j_13 = NULL,l_13 = NULL,m_13 = NULL,g_2 = NULL,h_2 = NULL;
  m_13 = t;
  if(match_cons(t, sym_Match_1))
    {
      j_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_13);
  e_13 = t;
  t = j_13;
  t = z_72(t);
  l_13 = t;
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, l_13);
  g_2 = t;
  t = SSLsetAnnotations(g_2, e_13);
  return(t);
}
ATerm Thread_1_0 (ATerm g_74 (ATerm), ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,k_2 = NULL,n_2 = NULL;
  w_13 = t;
  if(match_cons(t, sym_Thread_1))
    {
      u_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_13);
  t_13 = t;
  t = u_13;
  t = g_74(t);
  v_13 = t;
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym_Thread_1, v_13);
  k_2 = t;
  t = SSLsetAnnotations(k_2, t_13);
  return(t);
}
ATerm All_1_0 (ATerm f_74 (ATerm), ATerm t)
{
  ATerm k_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,p_2 = NULL,t_2 = NULL;
  p_14 = t;
  if(match_cons(t, sym_All_1))
    {
      n_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_14);
  k_14 = t;
  t = n_14;
  t = f_74(t);
  o_14 = t;
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym_All_1, o_14);
  p_2 = t;
  t = SSLsetAnnotations(p_2, k_14);
  return(t);
}
ATerm Some_1_0 (ATerm d_74 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,e_15 = NULL,l_15 = NULL,q_15 = NULL,u_2 = NULL,b_3 = NULL;
  q_15 = t;
  if(match_cons(t, sym_Some_1))
    {
      e_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_15);
  y_14 = t;
  t = e_15;
  t = d_74(t);
  l_15 = t;
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, l_15);
  u_2 = t;
  t = SSLsetAnnotations(u_2, y_14);
  return(t);
}
ATerm One_1_0 (ATerm e_74 (ATerm), ATerm t)
{
  ATerm w_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,d_3 = NULL,f_3 = NULL;
  b_16 = t;
  if(match_cons(t, sym_One_1))
    {
      z_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_16);
  w_15 = t;
  t = z_15;
  t = e_74(t);
  a_16 = t;
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym_One_1, a_16);
  d_3 = t;
  t = SSLsetAnnotations(d_3, w_15);
  return(t);
}
ATerm Cong_2_0 (ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm t)
{
  ATerm h_16 = NULL,l_16 = NULL,s_16 = NULL,z_16 = NULL,i_17 = NULL,r_17 = NULL,g_3 = NULL,h_3 = NULL;
  r_17 = t;
  if(match_cons(t, sym_Cong_2))
    {
      l_16 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_17);
  h_16 = t;
  t = l_16;
  t = b_68(t);
  z_16 = t;
  t = s_16;
  t = c_68(t);
  i_17 = t;
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, z_16, i_17);
  g_3 = t;
  t = SSLsetAnnotations(g_3, h_16);
  return(t);
}
ATerm Path_2_0 (ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm t)
{
  ATerm s_18 = NULL,b_19 = NULL,k_19 = NULL,v_19 = NULL,e_20 = NULL,n_20 = NULL,i_3 = NULL,k_3 = NULL;
  n_20 = t;
  if(match_cons(t, sym_Path_2))
    {
      b_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_20);
  s_18 = t;
  t = b_19;
  t = b_74(t);
  v_19 = t;
  t = k_19;
  t = c_74(t);
  e_20 = t;
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym_Path_2, v_19, e_20);
  i_3 = t;
  t = SSLsetAnnotations(i_3, s_18);
  return(t);
}
ATerm Rec_2_0 (ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm t)
{
  ATerm k_21 = NULL,t_21 = NULL,c_22 = NULL,p_22 = NULL,w_22 = NULL,f_23 = NULL,l_3 = NULL,m_3 = NULL;
  f_23 = t;
  if(match_cons(t, sym_Rec_2))
    {
      t_21 = ATgetArgument(t, 0);
      c_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_23);
  k_21 = t;
  t = t_21;
  t = p_73(t);
  p_22 = t;
  t = c_22;
  t = q_73(t);
  w_22 = t;
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, p_22, w_22);
  l_3 = t;
  t = SSLsetAnnotations(l_3, k_21);
  return(t);
}
ATerm SVar_1_0 (ATerm r_72 (ATerm), ATerm t)
{
  ATerm c_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,n_3 = NULL,o_3 = NULL;
  l_24 = t;
  if(match_cons(t, sym_SVar_1))
    {
      j_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_24);
  c_24 = t;
  t = j_24;
  t = r_72(t);
  k_24 = t;
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, k_24);
  n_3 = t;
  t = SSLsetAnnotations(n_3, c_24);
  return(t);
}
ATerm CallT_3_0 (ATerm w_72 (ATerm), ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,p_3 = NULL,q_3 = NULL;
  v_24 = t;
  if(match_cons(t, sym_CallT_3))
    {
      p_24 = ATgetArgument(t, 0);
      q_24 = ATgetArgument(t, 1);
      r_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_24);
  o_24 = t;
  t = p_24;
  t = w_72(t);
  s_24 = t;
  t = q_24;
  t = x_72(t);
  t_24 = t;
  t = r_24;
  t = y_72(t);
  u_24 = t;
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, s_24, t_24, u_24);
  p_3 = t;
  t = SSLsetAnnotations(p_3, o_24);
  return(t);
}
ATerm LGChoice_2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,a_4 = NULL,f_4 = NULL;
  d_25 = t;
  if(match_cons(t, sym_LGChoice_2))
    {
      z_24 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_25);
  y_24 = t;
  t = z_24;
  t = k_73(t);
  b_25 = t;
  t = a_25;
  t = l_73(t);
  c_25 = t;
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym_LGChoice_2, b_25, c_25);
  a_4 = t;
  t = SSLsetAnnotations(a_4, y_24);
  return(t);
}
ATerm GChoice_2_0 (ATerm k_72 (ATerm), ATerm l_72 (ATerm), ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,g_4 = NULL,i_4 = NULL;
  l_25 = t;
  if(match_cons(t, sym_GChoice_2))
    {
      h_25 = ATgetArgument(t, 0);
      i_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_25);
  g_25 = t;
  t = h_25;
  t = k_72(t);
  j_25 = t;
  t = i_25;
  t = l_72(t);
  k_25 = t;
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym_GChoice_2, j_25, k_25);
  g_4 = t;
  t = SSLsetAnnotations(g_4, g_25);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,j_4 = NULL,k_4 = NULL;
  v_25 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      p_25 = ATgetArgument(t, 0);
      q_25 = ATgetArgument(t, 1);
      r_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_25);
  o_25 = t;
  t = p_25;
  t = m_73(t);
  s_25 = t;
  t = q_25;
  t = n_73(t);
  t_25 = t;
  t = r_25;
  t = o_73(t);
  u_25 = t;
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, s_25, t_25, u_25);
  j_4 = t;
  t = SSLsetAnnotations(j_4, o_25);
  return(t);
}
ATerm LChoice_2_0 (ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,l_4 = NULL,m_4 = NULL;
  d_26 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      z_25 = ATgetArgument(t, 0);
      a_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_26);
  y_25 = t;
  t = z_25;
  t = i_73(t);
  b_26 = t;
  t = a_26;
  t = j_73(t);
  c_26 = t;
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, b_26, c_26);
  l_4 = t;
  t = SSLsetAnnotations(l_4, y_25);
  return(t);
}
ATerm Choice_2_0 (ATerm g_72 (ATerm), ATerm h_72 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,n_4 = NULL,o_4 = NULL;
  l_26 = t;
  if(match_cons(t, sym_Choice_2))
    {
      h_26 = ATgetArgument(t, 0);
      i_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_26);
  g_26 = t;
  t = h_26;
  t = g_72(t);
  j_26 = t;
  t = i_26;
  t = h_72(t);
  k_26 = t;
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, j_26, k_26);
  n_4 = t;
  t = SSLsetAnnotations(n_4, g_26);
  return(t);
}
ATerm Seq_2_0 (ATerm g_73 (ATerm), ATerm h_73 (ATerm), ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,p_4 = NULL,q_4 = NULL;
  t_26 = t;
  if(match_cons(t, sym_Seq_2))
    {
      p_26 = ATgetArgument(t, 0);
      q_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_26);
  o_26 = t;
  t = p_26;
  t = g_73(t);
  r_26 = t;
  t = q_26;
  t = h_73(t);
  s_26 = t;
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, r_26, s_26);
  p_4 = t;
  t = SSLsetAnnotations(p_4, o_26);
  return(t);
}
ATerm Test_1_0 (ATerm t_73 (ATerm), ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,r_4 = NULL,s_4 = NULL;
  z_26 = t;
  if(match_cons(t, sym_Test_1))
    {
      x_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_26);
  w_26 = t;
  t = x_26;
  t = t_73(t);
  y_26 = t;
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym_Test_1, y_26);
  r_4 = t;
  t = SSLsetAnnotations(r_4, w_26);
  return(t);
}
ATerm Not_1_0 (ATerm r_73 (ATerm), ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,t_4 = NULL,u_4 = NULL;
  f_27 = t;
  if(match_cons(t, sym_Not_1))
    {
      d_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_27);
  c_27 = t;
  t = d_27;
  t = r_73(t);
  e_27 = t;
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, e_27);
  t_4 = t;
  t = SSLsetAnnotations(t_4, c_27);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = SVar_1_0(h_6, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = map_1_0(strategy_expression_0_0, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = map_1_0(term_expression_0_0, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_27 = NULL;
      l_27 = t;
      t = SSL_is_string(l_27);
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      t = Mod_2_0(i_6, j_6, t);
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  t = SSL_is_string(m_27);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm n_27 = NULL;
  n_27 = t;
  t = SSL_is_string(n_27);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm o_27 = NULL;
  o_27 = t;
  t = SSL_is_string(o_27);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm p_27 = NULL;
  p_27 = t;
  t = SSL_is_int(p_27);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm q_27 = NULL;
  q_27 = t;
  t = SSL_is_string(q_27);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = map_1_0(strategy_expression_0_0, t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = map_1_0(t_6, t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm r_27 = NULL;
  r_27 = t;
  t = SSL_is_string(r_27);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm s_27 = NULL;
  s_27 = t;
  t = SSL_is_string(s_27);
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = map_1_0(strategy_expression_0_0, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = map_1_0(term_expression_0_0, t);
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = map_1_0(y_6, t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = SDefT_4_0(z_6, a_7, b_7, strategy_expression_0_0, t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  t = SSL_is_string(t_27);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = map_1_0(c_7, t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = map_1_0(g_7, t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = VarDec_2_0(d_7, e_7, t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm s_0 = NULL;
  s_0 = t;
  t = SSL_is_string(s_0);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = FunType_2_0(f_7, _id, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = list_1_0(_id, t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = VarDec_2_0(h_7, i_7, t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm u_0 = NULL;
  u_0 = t;
  t = SSL_is_string(u_0);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = ConstType_1_0(_id, t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_z_12;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      ;
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      {
        ATerm c_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            ;
            LocalPopChoice(d_13);
          }
        else
          {
            t = c_13;
            {
              ATerm f_13 = t;
              int g_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1_0(strategy_expression_0_0, t);
                  ;
                  LocalPopChoice(g_13);
                }
              else
                {
                  t = f_13;
                  {
                    ATerm h_13 = t;
                    int i_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1_0(strategy_expression_0_0, t);
                        ;
                        LocalPopChoice(i_13);
                      }
                    else
                      {
                        t = h_13;
                        {
                          ATerm k_13 = t;
                          int n_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                              ;
                              LocalPopChoice(n_13);
                            }
                          else
                            {
                              t = k_13;
                              {
                                ATerm o_13 = t;
                                int p_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                    ;
                                    LocalPopChoice(p_13);
                                  }
                                else
                                  {
                                    t = o_13;
                                    {
                                      ATerm q_13 = t;
                                      int r_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                          ;
                                          LocalPopChoice(r_13);
                                        }
                                      else
                                        {
                                          t = q_13;
                                          {
                                            ATerm s_13 = t;
                                            int x_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3_0(strategy_expression_0_0, strategy_expression_0_0, strategy_expression_0_0, t);
                                                ;
                                                LocalPopChoice(x_13);
                                              }
                                            else
                                              {
                                                t = s_13;
                                                {
                                                  ATerm y_13 = t;
                                                  int z_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                      ;
                                                      LocalPopChoice(z_13);
                                                    }
                                                  else
                                                    {
                                                      t = y_13;
                                                      {
                                                        ATerm a_14 = t;
                                                        int b_14 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                            ;
                                                            LocalPopChoice(b_14);
                                                          }
                                                        else
                                                          {
                                                            t = a_14;
                                                            {
                                                              ATerm c_14 = t;
                                                              int d_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = CallT_3_0(b_6, c_6, f_6, t);
                                                                  ;
                                                                  LocalPopChoice(d_14);
                                                                }
                                                              else
                                                                {
                                                                  t = c_14;
                                                                  {
                                                                    ATerm e_14 = t;
                                                                    int f_14 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2_0(k_6, strategy_expression_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(f_14);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_14;
                                                                        {
                                                                          ATerm g_14 = t;
                                                                          int h_14 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2_0(m_6, strategy_expression_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(h_14);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_14;
                                                                              {
                                                                                ATerm i_14 = t;
                                                                                int j_14 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Cong_2_0(p_6, q_6, t);
                                                                                    ;
                                                                                    LocalPopChoice(j_14);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_14;
                                                                                    {
                                                                                      ATerm l_14 = t;
                                                                                      int m_14 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1_0(strategy_expression_0_0, t);
                                                                                          ;
                                                                                          LocalPopChoice(m_14);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = l_14;
                                                                                          {
                                                                                            ATerm q_14 = t;
                                                                                            int r_14 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1_0(strategy_expression_0_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(r_14);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = q_14;
                                                                                                {
                                                                                                  ATerm s_14 = t;
                                                                                                  int t_14 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1_0(strategy_expression_0_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(t_14);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = s_14;
                                                                                                      {
                                                                                                        ATerm u_14 = t;
                                                                                                        int v_14 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1_0(strategy_expression_0_0, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(v_14);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = u_14;
                                                                                                            {
                                                                                                              ATerm w_14 = t;
                                                                                                              int x_14 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1_0(term_expression_0_0, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(x_14);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = w_14;
                                                                                                                  {
                                                                                                                    ATerm z_14 = t;
                                                                                                                    int a_15 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1_0(term_expression_0_0, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(a_15);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = z_14;
                                                                                                                        {
                                                                                                                          ATerm b_15 = t;
                                                                                                                          int c_15 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Scope_2_0(s_6, strategy_expression_0_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(c_15);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = b_15;
                                                                                                                              {
                                                                                                                                ATerm d_15 = t;
                                                                                                                                int f_15 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1_0(strategy_expression_0_0, t);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(f_15);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = d_15;
                                                                                                                                    {
                                                                                                                                      ATerm g_15 = t;
                                                                                                                                      int h_15 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = PrimT_3_0(u_6, v_6, w_6, t);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(h_15);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = g_15;
                                                                                                                                          {
                                                                                                                                            ATerm i_15 = t;
                                                                                                                                            int j_15 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                t = Let_2_0(x_6, strategy_expression_0_0, t);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(j_15);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = i_15;
                                                                                                                                                t = debug_1_0(m_7, t);
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm VarDec_2_0 (ATerm d_75 (ATerm), ATerm e_75 (ATerm), ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,v_4 = NULL,w_4 = NULL;
  d_28 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      z_27 = ATgetArgument(t, 0);
      a_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_28);
  y_27 = t;
  t = z_27;
  t = d_75(t);
  b_28 = t;
  t = a_28;
  t = e_75(t);
  c_28 = t;
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_28, c_28);
  v_4 = t;
  t = SSLsetAnnotations(v_4, y_27);
  return(t);
}
ATerm Mod_2_0 (ATerm v_74 (ATerm), ATerm w_74 (ATerm), ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,x_4 = NULL,y_4 = NULL;
  l_28 = t;
  if(match_cons(t, sym_Mod_2))
    {
      h_28 = ATgetArgument(t, 0);
      i_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_28);
  g_28 = t;
  t = h_28;
  t = v_74(t);
  j_28 = t;
  t = i_28;
  t = w_74(t);
  k_28 = t;
  y_4 = t;
  t = (ATerm) ATmakeAppl(sym_Mod_2, j_28, k_28);
  x_4 = t;
  t = SSLsetAnnotations(x_4, g_28);
  return(t);
}
ATerm SDefT_4_0 (ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,z_4 = NULL,a_5 = NULL;
  x_28 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      p_28 = ATgetArgument(t, 0);
      q_28 = ATgetArgument(t, 1);
      r_28 = ATgetArgument(t, 2);
      s_28 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_28);
  o_28 = t;
  t = p_28;
  t = k_75(t);
  t_28 = t;
  t = q_28;
  t = l_75(t);
  u_28 = t;
  t = r_28;
  t = m_75(t);
  v_28 = t;
  t = s_28;
  t = n_75(t);
  w_28 = t;
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, t_28, u_28, v_28, w_28);
  z_4 = t;
  t = SSLsetAnnotations(z_4, o_28);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm k_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_29 = NULL;
      d_29 = t;
      t = SSL_is_string(d_29);
      ;
      LocalPopChoice(m_15);
    }
  else
    {
      t = k_15;
      t = Mod_2_0(r_7, s_7, t);
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = map_1_0(t_7, t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = map_1_0(v_7, t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  t = SSL_is_string(e_29);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm f_29 = NULL;
  f_29 = t;
  t = SSL_is_string(f_29);
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = VarDec_2_0(u_7, _id, t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm g_29 = NULL;
  g_29 = t;
  t = SSL_is_string(g_29);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = VarDec_2_0(w_7, _id, t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm h_29 = NULL;
  h_29 = t;
  t = SSL_is_string(h_29);
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_n_15;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDefT_4_0(n_7, p_7, q_7, strategy_expression_0_0, t);
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      t = debug_1_0(x_7, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm r_88 (ATerm), ATerm t)
{
  ATerm j_29 (ATerm t)
  {
    ATerm r_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = r_15;
        t = Cons_2_0(r_88, j_29, t);
      }
    return(t);
  }
  t = j_29(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm f_68 (ATerm), ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,b_5 = NULL,c_5 = NULL;
  n_29 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      l_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_29);
  k_29 = t;
  t = l_29;
  t = f_68(t);
  m_29 = t;
  c_5 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, m_29);
  b_5 = t;
  t = SSLsetAnnotations(b_5, k_29);
  return(t);
}
ATerm Cons_2_0 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,d_5 = NULL,e_5 = NULL;
  v_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_29 = ATgetFirst((ATermList) t);
      s_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_29);
  q_29 = t;
  t = r_29;
  t = z_67(t);
  t_29 = t;
  t = s_29;
  t = a_68(t);
  u_29 = t;
  e_5 = t;
  t = (ATerm) ATinsert(CheckATermList(u_29), t_29);
  d_5 = t;
  t = SSLsetAnnotations(d_5, q_29);
  return(t);
}
ATerm Specification_1_0 (ATerm k_68 (ATerm), ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,f_5 = NULL,g_5 = NULL;
  b_30 = t;
  if(match_cons(t, sym_Specification_1))
    {
      z_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_30);
  y_29 = t;
  t = z_29;
  t = k_68(t);
  a_30 = t;
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, a_30);
  f_5 = t;
  t = SSLsetAnnotations(f_5, y_29);
  return(t);
}
ATerm _2_0 (ATerm k_63 (ATerm), ATerm l_63 (ATerm), ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,i_5 = NULL,j_5 = NULL;
  j_30 = t;
  if(match_cons(t, sym__2))
    {
      f_30 = ATgetArgument(t, 0);
      g_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_30);
  e_30 = t;
  t = f_30;
  t = k_63(t);
  h_30 = t;
  t = g_30;
  t = l_63(t);
  i_30 = t;
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_30, i_30);
  i_5 = t;
  t = SSLsetAnnotations(i_5, e_30);
  return(t);
}
ATerm t_3 (ATerm d_49, ATerm e_49, ATerm t)
{
  ATerm m_30 = NULL;
  t = SSL_fputc(d_49, e_49);
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_30);
  return(t);
}
ATerm u_3 (ATerm r_52, ATerm s_52, ATerm t)
{
  ATerm n_30 = NULL;
  t = SSL_write_term_to_stream_text(r_52, s_52);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_30);
  return(t);
}
ATerm w_3 (ATerm i_101 (ATerm), ATerm i_424, ATerm v_52, ATerm t)
{
  ATerm o_30 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_424, term_t_15);
  t = open_stream_0_0(t);
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_30, v_52);
  t = i_101(t);
  t = fclose_0_0(t);
  t = v_52;
  return(t);
}
ATerm v_3 (ATerm n_52, ATerm o_52, ATerm t)
{
  ATerm p_30 = NULL;
  t = SSL_write_term_to_stream_baf(n_52, o_52);
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_30);
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = fetch_1_0(d_8, t);
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL;
  if(match_cons(t, sym__2))
    {
      t_30 = ATgetArgument(t, 0);
      u_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(e_8, t_30, u_30, t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_15 = ATgetArgument(t, 0);
      if(match_cons(u_15, sym_Stream_1))
        {
          v_30 = ATgetArgument(u_15, 0);
        }
      else
        _fail(t);
      w_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(v_30, w_30, t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  if(match_cons(t, sym__2))
    {
      x_30 = ATgetArgument(t, 0);
      y_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(h_8, x_30, y_30, t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_15 = ATgetArgument(t, 0);
      if(match_cons(v_15, sym_Stream_1))
        {
          a_31 = ATgetArgument(v_15, 0);
        }
      else
        _fail(t);
      b_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(a_31, b_31, t);
  z_30 = t;
  t = term_x_15;
  c_31 = t;
  t = z_30;
  if(match_cons(t, sym_Stream_1))
    {
      d_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_15, z_30);
  t = t_3(c_31, d_31, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  q_30 = t;
  {
    ATerm y_7 (ATerm t)
    {
      ATerm y_15 = t;
      int c_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_7 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((r_30 != NULL) && (r_30 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_7, t);
          ;
          LocalPopChoice(c_16);
        }
      else
        {
          t = y_15;
          t = term_d_16;
          if(((r_30 != NULL) && (r_30 != t)))
            _fail(t);
          else
            r_30 = t;
        }
      return(t);
    }
    t = _2_0(y_7, _id, t);
    t = q_30;
    {
      ATerm a_8 (ATerm t)
      {
        ATerm s_30 = NULL;
        s_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_30), s_30);
        return(t);
      }
      t = _2_0(_id, a_8, t);
      {
        ATerm e_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(b_8, c_8, t);
            ;
            LocalPopChoice(f_16);
          }
        else
          {
            t = e_16;
            t = _2_0(_id, f_8, t);
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
ATerm apply_strategy_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
  e_31 = t;
  t = dtime_0_0(t);
  t = e_31;
  t = k_104(t);
  f_31 = t;
  t = dtime_0_0(t);
  g_31 = t;
  t = f_31;
  if(match_cons(t, sym__2))
    {
      h_31 = ATgetArgument(t, 0);
      i_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_31), (ATerm) ATmakeAppl(sym_Runtime_1, g_31)), i_31);
  return(t);
}
ATerm y_31 (ATerm s_31, ATerm t)
{
  t = SSL_fclose(s_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  w_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_31 = ATgetArgument(t, 0);
      {
        ATerm g_16 = t;
        int i_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_31);
            ;
            LocalPopChoice(i_16);
          }
        else
          {
            t = g_16;
            t = y_31(w_31, t);
          }
      }
    }
  else
    {
      t = y_31(w_31, t);
    }
  return(t);
}
ATerm x_3 (ATerm t_52, ATerm t)
{
  t = SSL_read_term_from_stream(t_52);
  return(t);
}
ATerm y_3 (ATerm f_49, ATerm g_49, ATerm t)
{
  ATerm z_31 = NULL;
  t = SSL_fopen(f_49, g_49);
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_32 = NULL;
  t = SSL_stdin_stream();
  a_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_32 = NULL;
  t = SSL_stdout_stream();
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_32 = NULL;
  t = SSL_stderr_stream();
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_32);
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm m_32 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      m_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_32;
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  t = SSL_is_string(p_32);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_16 = ATgetArgument(t, 0);
      ATerm k_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_32 = NULL,k_1 = NULL;
        j_32 = t;
        t = SSL_explode_term(j_32);
        if(match_cons(t, sym__2))
          {
            ATerm o_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_16) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_16 = ATgetArgument(t, 1);
              if(((ATgetType(p_16) == AT_LIST) && !(ATisEmpty(p_16))))
                {
                  k_1 = ATgetFirst((ATermList) p_16);
                  {
                    ATerm q_16 = (ATerm) ATgetNext((ATermList) p_16);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = k_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = k_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = k_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        {
          ATerm r_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_32 = NULL,l_32 = NULL;
              t = _2_0(i_8, _id, t);
              if(match_cons(t, sym__2))
                {
                  k_32 = ATgetArgument(t, 0);
                  l_32 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_3(k_32, l_32, t);
              ;
              LocalPopChoice(t_16);
            }
          else
            {
              t = r_16;
              {
                ATerm n_32 = NULL,o_32 = NULL;
                t = _2_0(m_8, _id, t);
                if(match_cons(t, sym__2))
                  {
                    n_32 = ATgetArgument(t, 0);
                    o_32 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_3(n_32, o_32, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_u_16;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_32 = NULL;
      u_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_32, term_x_16);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      t = debug_1_0(n_8, t);
      _fail(t);
    }
  r_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(t_32, t);
  s_32 = t;
  t = r_32;
  t = fclose_0_0(t);
  t = s_32;
  return(t);
}
ATerm fetch_1_0 (ATerm b_89 (ATerm), ATerm t)
{
  ATerm w_32 (ATerm t)
  {
    ATerm y_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(b_89, _id, t);
        ;
        LocalPopChoice(a_17);
      }
    else
      {
        t = y_16;
        t = Cons_2_0(_id, w_32, t);
      }
    return(t);
  }
  t = w_32(t);
  return(t);
}
ATerm s_3 (ATerm t_43, ATerm u_43, ATerm t)
{
  t = SSL_strcat(t_43, u_43);
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
    }
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_d_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_33 = NULL;
      c_33 = t;
      t = SSL_is_string(c_33);
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      {
        ATerm g_17 = t;
        int h_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_8, t);
            ;
            LocalPopChoice(h_17);
          }
        else
          {
            t = g_17;
            {
              ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
              g_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_33 = ATgetArgument(t, 0);
                  t = h_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_33 = ATgetArgument(t, 0);
                      t = h_33;
                      {
                        ATerm j_17 = t;
                        int k_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_17);
                          }
                        else
                          {
                            t = j_17;
                            t = debug_1_0(q_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_33 = NULL,n_33 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_33 = ATgetArgument(t, 0);
                          i_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_33;
                      t = eval_config_0_0(t);
                      m_33 = t;
                      t = i_33;
                      t = eval_config_0_0(t);
                      n_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_33, n_33);
                      t = s_3(m_33, n_33, t);
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
  ATerm q_33 = NULL,r_33 = NULL;
  q_33 = t;
  t = term_l_17;
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_17, q_33);
  t = b_4(r_33, q_33, t);
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_33 = NULL,t_33 = NULL;
        t = eval_config_0_0(t);
        s_33 = t;
        t = term_l_17;
        t_33 = t;
        t = SSL_table_put(t_33, q_33, s_33);
        t = s_33;
        ;
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_33 = NULL,w_33 = NULL;
      u_33 = t;
      t = term_q_17;
      t = get_config_0_0(t);
      w_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_33, term_s_17);
      t = geq_0_0(t);
      t = u_33;
      t = t_102(t);
      ;
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm y_33 = NULL;
  y_33 = t;
  if(match_string(t, "-k"))
    {
      t = y_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_33;
    }
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
  z_33 = t;
  t = SSL_string_to_int(z_33);
  a_34 = t;
  t = term_t_17;
  b_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, a_34);
  t = e_4(b_34, a_34, t);
  t = z_33;
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_u_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_8, s_8, t_8, t);
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm d_34 = NULL;
  d_34 = t;
  if(match_string(t, "-S"))
    {
      t = d_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_34;
    }
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL;
  t = term_q_17;
  e_34 = t;
  t = term_v_17;
  f_34 = t;
  t = term_w_17;
  t = e_4(e_34, f_34, t);
  t = term_x_17;
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm x_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  t = SSL_string_to_int(g_34);
  h_34 = t;
  t = term_q_17;
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, h_34);
  t = e_4(i_34, h_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_34);
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_z_17;
  return(t);
}
ATerm b_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL;
  t = term_a_18;
  j_34 = t;
  t = term_e_10;
  k_34 = t;
  t = term_b_18;
  t = e_4(j_34, k_34, t);
  t = term_c_18;
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_8, v_8, w_8, t);
      ;
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
            t = ArgOption_3_0(x_8, y_8, a_9, t);
            ;
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            t = Option_3_0(b_9, c_9, d_9, t);
          }
      }
    }
  return(t);
}
ATerm e_4 (ATerm u_53, ATerm v_53, ATerm t)
{
  ATerm l_34 = NULL;
  t = term_l_17;
  l_34 = t;
  t = SSL_table_put(l_34, u_53, v_53);
  t = (ATerm) ATmakeAppl(sym__3, term_l_17, u_53, v_53);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
      t = term_e_10;
      t = d_0(t);
      q_34 = t;
      t = term_i_18;
      r_34 = t;
      t = term_j_18;
      s_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_18, term_j_18, q_34);
      t = c_4(r_34, s_34, q_34, t);
      _fail(t);
    }
  else
    {
      ATerm v_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_34 = ATgetFirst((ATermList) t);
          p_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_34;
      t = a_0(t);
      t = term_e_10;
      t = b_0(t);
      v_34 = t;
      t = (ATerm) ATinsert(CheckATermList(p_34), v_34);
    }
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  if(match_string(t, "-o"))
    {
      t = x_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_34;
    }
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL;
  y_34 = t;
  t = term_k_18;
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_18, y_34);
  t = e_4(z_34, y_34, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_34);
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_9, h_9, i_9, t);
  return(t);
}
ATerm c_4 (ATerm s_58, ATerm t_58, ATerm r_58, ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
  b_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_58, t_58);
  {
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_18 = ATgetArgument(t, 0);
            ATerm p_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_58, t_58);
        t = b_4(s_58, t_58, t);
        ;
        LocalPopChoice(n_18);
      }
    else
      {
        t = m_18;
        t = (ATerm) ATempty;
      }
    c_35 = t;
    t = (ATerm) ATinsert(CheckATermList(c_35), r_58);
    d_35 = t;
    t = SSL_table_put(s_58, t_58, d_35);
    t = b_35;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
      t = term_e_10;
      t = j_0(t);
      o_35 = t;
      t = term_i_18;
      p_35 = t;
      t = term_j_18;
      q_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_18, term_j_18, o_35);
      t = c_4(p_35, q_35, o_35, t);
      _fail(t);
    }
  else
    {
      ATerm u_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_35 = ATgetFirst((ATermList) t);
          l_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_35 = ATgetFirst((ATermList) t);
          n_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_35;
      t = h_0(t);
      t = m_35;
      t = i_0(t);
      u_35 = t;
      t = (ATerm) ATinsert(CheckATermList(n_35), u_35);
    }
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm w_35 = NULL;
  w_35 = t;
  if(match_string(t, "-i"))
    {
      t = w_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_35;
    }
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL;
  x_35 = t;
  t = term_q_18;
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_18, x_35);
  t = e_4(y_35, x_35, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_35);
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = term_r_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_9, k_9, l_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_10;
  t = whoami_0_0(t);
  z_35 = t;
  t = term_s_11;
  a_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_18), z_35);
  b_36 = t;
  t = SSL_printnl(a_36, b_36);
  t = term_v_11;
  c_36 = t;
  t = SSL_exit(c_36);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_18;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_3 (ATerm d_46, ATerm e_46, ATerm t)
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_46, e_46);
      ;
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      t = SSL_addr(d_46, e_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm t)
{
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_94(t);
      ;
      LocalPopChoice(y_18);
    }
  else
    {
      t = x_18;
      {
        ATerm f_36 = NULL,g_36 = NULL,j_36 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_36 = ATgetFirst((ATermList) t);
            g_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_36;
        t = foldr_2_0(u_94, v_94, t);
        j_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_36, j_36);
        t = v_94(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm v_2 = NULL,x_2 = NULL;
  if(match_cons(t, sym__2))
    {
      v_2 = ATgetArgument(t, 0);
      x_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(v_2, x_2, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_36 = NULL,l_2 = NULL,m_2 = NULL;
  t = times_0_0(t);
  l_2 = t;
  t = SSL_explode_term(l_2);
  if(match_cons(t, sym__2))
    {
      ATerm z_18 = ATgetArgument(t, 0);
      m_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_2;
  t = foldr_2_0(m_9, n_9, t);
  m_36 = t;
  t = SSL_TicksToSeconds(m_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
  x_36 = t;
  if(match_cons(t, sym__2))
    {
      y_36 = ATgetArgument(t, 0);
      z_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_36;
        if((y_36 != t))
          {
            _fail(t);
          }
        t = x_36;
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = a_19;
        t = (ATerm) ATmakeAppl(sym__2, y_36, z_36);
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_36, z_36);
              ;
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              t = SSL_gtr(y_36, z_36);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_36, z_36);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_37 = NULL,g_37 = NULL;
      c_37 = t;
      t = term_q_17;
      t = get_config_0_0(t);
      g_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_37, term_v_11);
      t = geq_0_0(t);
      t = c_37;
      t = s_102(t);
      ;
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
    }
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
  t = run_time_0_0(t);
  i_37 = t;
  t = term_e_10;
  t = whoami_0_0(t);
  j_37 = t;
  t = term_s_11;
  k_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_19), i_37), term_h_19), j_37);
  l_37 = t;
  t = SSL_printnl(k_37, l_37);
  t = (ATerm) ATmakeAppl(sym__2, term_s_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_19), i_37), term_h_19), j_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_17;
  m_37 = t;
  t = SSL_exit(m_37);
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm j_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(l_19);
    }
  else
    {
      t = j_19;
      {
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_105 (ATerm), ATerm t)
{
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      t = fetch_1_0(q_9, t);
    }
  t = i_105(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_37 = ATgetFirst((ATermList) t);
      p_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_37 = NULL,u_37 = NULL;
        t = p_37;
        t = g_0(t);
        t_37 = t;
        t = o_37;
        t = f_0(t);
        u_37 = t;
        t = p_37;
        {
          ATerm r_9 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(t_37), u_37);
            return(t);
          }
          t = reverse_acc_2_0(f_0, r_9, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_10;
      t = g_0(t);
    }
  return(t);
}
ATerm b_4 (ATerm j_60, ATerm k_60, ATerm t)
{
  t = SSL_table_get(j_60, k_60);
  return(t);
}
ATerm Program_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,k_5 = NULL,l_5 = NULL;
  y_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_37);
  v_37 = t;
  t = w_37;
  t = y_80(t);
  x_37 = t;
  l_5 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_37);
  k_5 = t;
  t = SSLsetAnnotations(k_5, v_37);
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm d_38 = NULL;
  d_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_38), term_r_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL;
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      t = fetch_1_0(t_9, t);
    }
  t = term_u_19;
  t = echo_0_0(t);
  t = term_i_18;
  b_38 = t;
  t = term_j_18;
  c_38 = t;
  t = term_w_19;
  t = b_4(b_38, c_38, t);
  t = reverse_acc_2_0(_id, v_9, t);
  t = map_1_0(w_9, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,n_5 = NULL,o_5 = NULL;
  h_38 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      f_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_38);
  e_38 = t;
  t = f_38;
  t = z_80(t);
  g_38 = t;
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, g_38);
  n_5 = t;
  t = SSLsetAnnotations(n_5, e_38);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
  l_38 = t;
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_38;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_19 = ATgetFirst((ATermList) t);
                ATerm a_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_38;
          }
        ;
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = (ATerm) ATinsert(ATempty, l_38);
      }
    m_38 = t;
    t = term_d_16;
    n_38 = t;
    t = SSL_printnl(n_38, m_38);
    t = l_38;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_18;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL;
  t = term_b_20;
  r_38 = t;
  t = term_e_10;
  s_38 = t;
  t = term_c_20;
  t = e_4(r_38, s_38, t);
  return(t);
}
ATerm b_10 (ATerm t)
{
  t = term_d_20;
  return(t);
}
ATerm c_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL;
  t = term_b_20;
  t_38 = t;
  t = term_e_10;
  u_38 = t;
  t = term_c_20;
  t = e_4(t_38, u_38, t);
  t = term_f_20;
  v_38 = t;
  t = term_e_10;
  w_38 = t;
  t = term_g_20;
  t = e_4(v_38, w_38, t);
  t = term_h_20;
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_9, a_10, b_10, t);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      t = Option_3_0(c_10, f_10, g_10, t);
    }
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL;
  z_38 = t;
  t = term_u_18;
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_18, z_38);
  t = e_4(a_39, z_38, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, z_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm y_38 = NULL;
  y_38 = t;
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_20;
        t = l_107(t);
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
      }
    t = y_38;
    {
      ATerm l_10 (ATerm t)
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_20 = t;
            int s_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(s_20);
              }
            else
              {
                t = r_20;
                t = l_107(t);
                t = Cons_2_0(_id, l_10, t);
              }
            ;
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
            {
              ATerm c_39 = NULL,d_39 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_39 = ATgetFirst((ATermList) t);
                  d_39 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_39), (ATerm) ATmakeAppl(sym_Undefined_1, c_39));
            }
          }
        return(t);
      }
      t = Cons_2_0(k_10, l_10, t);
    }
  }
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm r_39 = NULL;
  r_39 = t;
  if(match_string(t, "--help"))
    {
      t = r_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_39;
        }
    }
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL;
  t = term_q_19;
  s_39 = t;
  t = term_e_10;
  t_39 = t;
  t = term_t_20;
  t = e_4(s_39, t_39, t);
  t = term_u_20;
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = term_v_20;
  return(t);
}
ATerm q_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_107 (ATerm), ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
  k_39 = t;
  t = term_i_18;
  n_39 = t;
  t = term_j_18;
  o_39 = t;
  t = (ATerm) ATempty;
  p_39 = t;
  t = SSL_table_put(n_39, o_39, p_39);
  t = k_39;
  {
    ATerm m_10 (ATerm t)
    {
      ATerm w_20 = t;
      int x_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_107(t);
          ;
          LocalPopChoice(x_20);
        }
      else
        {
          t = w_20;
          {
            ATerm y_20 = t;
            int z_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_10, o_10, p_10, t);
                ;
                LocalPopChoice(z_20);
              }
            else
              {
                t = y_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_10, t);
    {
      ATerm a_21 = t;
      int b_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_40 = NULL;
          a_40 = t;
          {
            ATerm c_21 = t;
            int d_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_3 = NULL;
                t = a_40;
                {
                  ATerm e_21 = t;
                  int f_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_q_19;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(f_21);
                    }
                  else
                    {
                      t = e_21;
                      t = fetch_1_0(q_10, t);
                    }
                  t = a_40;
                  t = default_system_usage_0_0(t);
                  t = term_v_17;
                  r_3 = t;
                  t = SSL_exit(r_3);
                }
                ;
                LocalPopChoice(d_21);
              }
            else
              {
                t = c_21;
                {
                  ATerm h_4 = NULL;
                  t = term_b_20;
                  t = get_config_0_0(t);
                  t = a_40;
                  t = default_system_about_0_0(t);
                  t = term_v_17;
                  h_4 = t;
                  t = SSL_exit(h_4);
                }
              }
          }
          ;
          LocalPopChoice(b_21);
        }
      else
        {
          t = a_21;
          {
            ATerm g_21 = t;
            int h_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL;
                ATerm r_10 (ATerm t)
                {
                  ATerm s_10 (ATerm t)
                  {
                    if(((l_39 != NULL) && (l_39 != t)))
                      _fail(t);
                    else
                      l_39 = t;
                    return(t);
                  }
                  t = Undefined_1_0(s_10, t);
                  return(t);
                }
                t = fetch_1_0(r_10, t);
                t = term_s_11;
                b_40 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_39)), term_i_21);
                c_40 = t;
                t = SSL_printnl(b_40, c_40);
                t = (ATerm) ATmakeAppl(sym__2, term_s_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_39)), term_i_21));
                t = default_system_usage_0_0(t);
                t = term_v_11;
                d_40 = t;
                t = SSL_exit(d_40);
                ;
                LocalPopChoice(h_21);
              }
            else
              {
                t = g_21;
              }
          }
        }
      m_39 = t;
      t = term_i_18;
      q_39 = t;
      t = SSL_table_destroy(q_39);
      t = m_39;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL;
  t = parse_options_1_0(k_105, t);
  g_40 = t;
  t = term_j_21;
  h_40 = t;
  t = SSL_table_create(h_40);
  t = term_j_21;
  i_40 = t;
  t = term_l_21;
  j_40 = t;
  t = SSL_table_put(i_40, j_40, g_40);
  t = g_40;
  t = m_105(t);
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_105, t);
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
              t = n_105(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(p_21);
            }
          else
            {
              t = o_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm u_10 (ATerm t)
{
  t = if_verbose2_1_0(e_11, t);
  return(t);
}
ATerm b_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL;
  t = term_q_21;
  k_40 = t;
  t = term_e_10;
  l_40 = t;
  t = term_r_21;
  t = e_4(k_40, l_40, t);
  t = term_s_21;
  return(t);
}
ATerm d_11 (ATerm t)
{
  t = term_u_21;
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL;
  m_40 = t;
  t = term_u_18;
  t = get_config_0_0(t);
  n_40 = t;
  t = term_s_11;
  o_40 = t;
  t = (ATerm) ATinsert(ATempty, n_40);
  p_40 = t;
  t = SSL_printnl(o_40, p_40);
  t = m_40;
  return(t);
}
ATerm iowrap_3_0 (ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm t)
{
  ATerm t_10 (ATerm t)
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_104(t);
        ;
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        {
          ATerm x_21 = t;
          int y_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(y_21);
            }
          else
            {
              t = x_21;
              {
                ATerm z_21 = t;
                int a_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(a_22);
                  }
                else
                  {
                    t = z_21;
                    {
                      ATerm b_22 = t;
                      int d_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(b_11, c_11, d_11, t);
                          ;
                          LocalPopChoice(d_22);
                        }
                      else
                        {
                          t = b_22;
                          {
                            ATerm e_22 = t;
                            int f_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(f_22);
                              }
                            else
                              {
                                t = e_22;
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
  ATerm a_11 (ATerm t)
  {
    ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
    q_40 = t;
    {
      ATerm g_22 = t;
      int h_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_11 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_40 != NULL) && (r_40 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_40 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_11, t);
          ;
          LocalPopChoice(h_22);
        }
      else
        {
          t = g_22;
          t = term_i_22;
          r_40 = t;
        }
      t = not_null(r_40);
      t = ReadFromFile_0_0(t);
      s_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_40, s_40);
      t = apply_strategy_1_0(t_104, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(t_10, v_104, u_10, a_11, t);
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = _2_0(_id, l_11, t);
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Specification_1_0(m_11, t);
      ;
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      t = debug_1_0(r_11, t);
    }
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = Cons_2_0(_id, n_11, t);
  return(t);
}
ATerm n_11 (ATerm t)
{
  t = Cons_2_0(o_11, p_11, t);
  return(t);
}
ATerm o_11 (ATerm t)
{
  t = Strategies_1_0(q_11, t);
  return(t);
}
ATerm p_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm q_11 (ATerm t)
{
  t = map_1_0(strategy_definition_0_0, t);
  return(t);
}
ATerm r_11 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(h_11, _fail, default_usage_0_0, t);
  return(t);
}
