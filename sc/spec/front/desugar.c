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
Symbol sym_Con_3;
Symbol sym_StratRule_3;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_SRule_1;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_Where_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_ExplodeCong_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Undefined_0;
Symbol sym_Anno_2;
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
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
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
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
ATerm term_q_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_z_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_c_21;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_b_20;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_s_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_p_18;
ATerm term_l_18;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_u_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_h_9;
ATerm term_m_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
void init_constant_terms (void)
{
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Sort_2, term_r_9, (ATerm) ATempty);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_ConstType_1, term_t_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__2, term_a_17, term_b_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_t_16);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym__2, term_p_18, term_s_18);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym__2, term_n_21, term_t_16);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_t_16);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym__2, term_y_19, term_t_16);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_t_16);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("not a definition: ", 0, ATtrue));
}
ATerm debug_1_0 (ATerm o_118 (ATerm), ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm x_94 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm x_1 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm c_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm n_2 (ATerm);
ATerm q_2 (ATerm);
ATerm i_4 (ATerm p_38, ATerm q_38, ATerm r_38, ATerm);
ATerm genzip_4_0 (ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm i_103 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm d_21 (ATerm n_20, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm j_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm t_113 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm v_97 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm l_4 (ATerm e_34, ATerm f_34, ATerm g_34, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm r_96 (ATerm), ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm map_1_0 (ATerm s_102 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm);
ATerm m_4 (ATerm v_65, ATerm w_65, ATerm);
ATerm n_4 (ATerm j_69, ATerm k_69, ATerm);
ATerm p_4 (ATerm q_118 (ATerm), ATerm d_524, ATerm n_69, ATerm);
ATerm o_4 (ATerm f_69, ATerm g_69, ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm output_1_0 (ATerm z_122 (ATerm), ATerm);
ATerm d_35 (ATerm x_34, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_4 (ATerm l_69, ATerm);
ATerm r_4 (ATerm x_65, ATerm y_65, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm t_40 (ATerm k_36, ATerm);
ATerm u_40 (ATerm t_36, ATerm u_36, ATerm v_36, ATerm);
ATerm v_40 (ATerm r_37, ATerm s_37, ATerm t_37, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm a_123 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm y_4 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm g_5 (ATerm);
ATerm j_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm z_4 (ATerm m_70, ATerm n_70, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm x_4 (ATerm c_55, ATerm d_55, ATerm b_55, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm s_4 (ATerm g_53, ATerm h_53, ATerm);
ATerm foldr_2_0 (ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_120 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm need_help_1_0 (ATerm q_122 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm c_103 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_4 (ATerm l_63, ATerm m_63, ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm w_4 (ATerm t_56, ATerm u_56, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm t_124 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm parse_options_1_0 (ATerm s_124 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_122 (ATerm), ATerm t_122 (ATerm), ATerm u_122 (ATerm), ATerm v_122 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm g_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm x_7 (ATerm);
ATerm z_7 (ATerm);
ATerm c_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm o_118 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,l_0 = NULL,m_0 = NULL;
  b_0 = t;
  t = o_118(t);
  f_0 = t;
  t = term_d_8;
  l_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_0), f_0);
  m_0 = t;
  t = SSL_printnl(l_0, m_0);
  t = b_0;
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm o_0 = NULL,q_0 = NULL,r_0 = NULL;
  q_0 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      r_0 = ATgetArgument(t, 0);
      o_0 = ATgetArgument(t, 1);
      {
        ATerm u_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL;
        t = q_0;
        t = new_0_0(t);
        u_0 = t;
        t = new_0_0(t);
        v_0 = t;
        t = new_0_0(t);
        w_0 = t;
        t = new_0_0(t);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_0), w_0), v_0), u_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, u_0), (ATerm) ATmakeAppl(sym_Var_1, w_0))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, r_0, (ATerm)ATmakeAppl(sym_Var_1, u_0), (ATerm) ATmakeAppl(sym_Var_1, v_0)), (ATerm) ATmakeAppl(sym_BAM_3, o_0, (ATerm)ATmakeAppl(sym_Var_1, w_0), (ATerm) ATmakeAppl(sym_Var_1, x_0)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_e_8, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, x_0)), (ATerm) ATmakeAppl(sym_Var_1, v_0))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          r_0 = ATgetArgument(t, 0);
          {
            ATerm y_0 = NULL,z_0 = NULL,b_1 = NULL,c_1 = NULL;
            t = not_null(q_0);
            t = new_0_0(t);
            if(((b_1 != NULL) && (b_1 != t)))
              _fail(t);
            else
              b_1 = t;
            t = not_null(r_0);
            {
              ATerm p_0 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((y_0 != NULL) && (y_0 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      y_0 = ATgetArgument(t, 0);
                    if(((z_0 != NULL) && (z_0 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      z_0 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_1));
                return(t);
              }
              t = oncetd_1_0(p_0, t);
              if(((c_1 != NULL) && (c_1 != t)))
                _fail(t);
              else
                c_1 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_1)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_8, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_0)), not_null(y_0))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_1))), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_1)))));
            }
          }
        }
      else
        {
          ATerm k_1 = NULL,l_1 = NULL,t_1 = NULL,v_1 = NULL,w_1 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              if(((r_0 != NULL) && (r_0 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_0 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(q_0);
          t = new_0_0(t);
          if(((t_1 != NULL) && (t_1 != t)))
            _fail(t);
          else
            t_1 = t;
          t = new_0_0(t);
          if(((v_1 != NULL) && (v_1 != t)))
            _fail(t);
          else
            v_1 = t;
          t = not_null(r_0);
          {
            ATerm s_0 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((k_1 != NULL) && (k_1 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    k_1 = ATgetArgument(t, 0);
                  if(((l_1 != NULL) && (l_1 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    l_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_1));
              return(t);
            }
            t = oncetd_1_0(s_0, t);
            if(((w_1 != NULL) && (w_1 != t)))
              _fail(t);
            else
              w_1 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_1)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_1)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_1)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_1))), (ATerm) ATmakeAppl(sym_PrimT_3, term_f_8, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_1)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_1)), (ATerm) ATmakeAppl(sym_Op_2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_1)), not_null(k_1)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL;
  if(((z_1 != NULL) && (z_1 != t)))
    _fail(t);
  else
    z_1 = t;
  if(match_cons(t, sym_Match_1))
    {
      if(((a_2 != NULL) && (a_2 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
        t = not_null(z_1);
        t = new_0_0(t);
        if(((f_2 != NULL) && (f_2 != t)))
          _fail(t);
        else
          f_2 = t;
        t = not_null(a_2);
        {
          ATerm t_0 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((d_2 != NULL) && (d_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_2 = ATgetArgument(t, 0);
                if(((e_2 != NULL) && (e_2 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  e_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_2)), not_null(d_2));
            return(t);
          }
          t = pat_td_1_0(t_0, t);
          if(((g_2 != NULL) && (g_2 != t)))
            _fail(t);
          else
            g_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_2)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_m_8, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_2)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_2))))));
        }
        ;
        LocalPopChoice(l_8);
      }
    else
      {
        t = h_8;
        {
          ATerm o_8 = t;
          int q_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_2 = NULL,l_2 = NULL,m_2 = NULL;
              t = not_null(z_1);
              t = new_0_0(t);
              if(((l_2 != NULL) && (l_2 != t)))
                _fail(t);
              else
                l_2 = t;
              t = not_null(a_2);
              {
                ATerm a_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((j_2 != NULL) && (j_2 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        j_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_2));
                  return(t);
                }
                t = pat_td_1_0(a_1, t);
                if(((m_2 != NULL) && (m_2 != t)))
                  _fail(t);
                else
                  m_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_2))), not_null(j_2))));
              }
              ;
              LocalPopChoice(q_8);
            }
          else
            {
              t = o_8;
              {
                ATerm o_2 = NULL,p_2 = NULL,s_2 = NULL,u_2 = NULL;
                t = not_null(z_1);
                t = new_0_0(t);
                if(((s_2 != NULL) && (s_2 != t)))
                  _fail(t);
                else
                  s_2 = t;
                t = not_null(a_2);
                {
                  ATerm d_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((p_2 != NULL) && (p_2 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          p_2 = ATgetArgument(t, 0);
                        if(((o_2 != NULL) && (o_2 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          o_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_2));
                    return(t);
                  }
                  t = pat_td_1_0(d_1, t);
                  if(((u_2 != NULL) && (u_2 != t)))
                    _fail(t);
                  else
                    u_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_2))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_2)), not_null(p_2)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm x_94 (ATerm), ATerm t)
{
  ATerm u_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_94(t);
      ;
      LocalPopChoice(x_8);
    }
  else
    {
      t = u_8;
      {
        ATerm p_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
        if(((u_7 != NULL) && (u_7 != t)))
          _fail(t);
        else
          u_7 = t;
        if(match_cons(t, sym_Op_2))
          {
            v_7 = ATgetArgument(t, 0);
            w_7 = ATgetArgument(t, 1);
            {
              ATerm f_1 = NULL,j_1 = NULL,n_0 = NULL;
              t = SSLgetAnnotations(not_null(u_7));
              if(((f_1 != NULL) && (f_1 != t)))
                _fail(t);
              else
                f_1 = t;
              t = not_null(w_7);
              {
                ATerm e_1 (ATerm t)
                {
                  t = pat_td_1_0(x_94, t);
                  return(t);
                }
                t = fetch_1_0(e_1, t);
                if(((j_1 != NULL) && (j_1 != t)))
                  _fail(t);
                else
                  j_1 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, not_null(v_7), not_null(j_1));
                if(((n_0 != NULL) && (n_0 != t)))
                  _fail(t);
                else
                  n_0 = t;
                t = SSLsetAnnotations(not_null(n_0), not_null(f_1));
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                v_7 = ATgetArgument(t, 0);
                w_7 = ATgetArgument(t, 1);
                {
                  ATerm a_9 = t;
                  int c_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_1 = NULL,b_2 = NULL,h_3 = NULL;
                      t = SSLgetAnnotations(not_null(u_7));
                      u_1 = t;
                      t = not_null(w_7);
                      t = pat_td_1_0(x_94, t);
                      b_2 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(v_7), b_2);
                      h_3 = t;
                      t = SSLsetAnnotations(h_3, u_1);
                      ;
                      LocalPopChoice(c_9);
                    }
                  else
                    {
                      t = a_9;
                      {
                        ATerm x_2 = NULL,a_3 = NULL,i_3 = NULL;
                        t = SSLgetAnnotations(not_null(u_7));
                        x_2 = t;
                        t = not_null(v_7);
                        t = pat_td_1_0(x_94, t);
                        a_3 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, a_3, not_null(w_7));
                        i_3 = t;
                        t = SSLsetAnnotations(i_3, x_2);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    v_7 = ATgetArgument(t, 0);
                    w_7 = ATgetArgument(t, 1);
                    p_7 = ATgetArgument(t, 2);
                    {
                      ATerm s_3 = NULL,z_3 = NULL,k_3 = NULL;
                      t = SSLgetAnnotations(not_null(u_7));
                      if(((s_3 != NULL) && (s_3 != t)))
                        _fail(t);
                      else
                        s_3 = t;
                      t = not_null(p_7);
                      {
                        ATerm g_1 (ATerm t)
                        {
                          t = pat_td_1_0(x_94, t);
                          return(t);
                        }
                        t = fetch_1_0(g_1, t);
                        if(((z_3 != NULL) && (z_3 != t)))
                          _fail(t);
                        else
                          z_3 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(v_7), not_null(w_7), not_null(z_3));
                        if(((k_3 != NULL) && (k_3 != t)))
                          _fail(t);
                        else
                          k_3 = t;
                        t = SSLsetAnnotations(not_null(k_3), not_null(s_3));
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        v_7 = ATgetArgument(t, 0);
                        w_7 = ATgetArgument(t, 1);
                        p_7 = ATgetArgument(t, 2);
                        {
                          ATerm a_5 = NULL,f_5 = NULL,l_3 = NULL;
                          t = SSLgetAnnotations(not_null(u_7));
                          if(((a_5 != NULL) && (a_5 != t)))
                            _fail(t);
                          else
                            a_5 = t;
                          t = not_null(p_7);
                          {
                            ATerm h_1 (ATerm t)
                            {
                              t = pat_td_1_0(x_94, t);
                              return(t);
                            }
                            t = fetch_1_0(h_1, t);
                            if(((f_5 != NULL) && (f_5 != t)))
                              _fail(t);
                            else
                              f_5 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(v_7), not_null(w_7), not_null(f_5));
                            if(((l_3 != NULL) && (l_3 != t)))
                              _fail(t);
                            else
                              l_3 = t;
                            t = SSLsetAnnotations(not_null(l_3), not_null(a_5));
                          }
                        }
                      }
                    else
                      {
                        ATerm f_6 = NULL,i_6 = NULL,m_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            if(((v_7 != NULL) && (v_7 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              v_7 = ATgetArgument(t, 0);
                            if(((w_7 != NULL) && (w_7 != ATgetArgument(t, 1))))
                              _fail(ATgetArgument(t, 1));
                            else
                              w_7 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(not_null(u_7));
                        f_6 = t;
                        t = not_null(w_7);
                        t = pat_td_1_0(x_94, t);
                        i_6 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, not_null(v_7), i_6);
                        m_3 = t;
                        t = SSLsetAnnotations(m_3, f_6);
                      }
                  }
              }
          }
      }
    }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL;
  if(((i_8 != NULL) && (i_8 != t)))
    _fail(t);
  else
    i_8 = t;
  if(match_cons(t, sym_Build_1))
    {
      if(((j_8 != NULL) && (j_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_8 = NULL,p_8 = NULL,r_8 = NULL,s_8 = NULL;
        t = not_null(i_8);
        t = new_0_0(t);
        if(((r_8 != NULL) && (r_8 != t)))
          _fail(t);
        else
          r_8 = t;
        t = not_null(j_8);
        {
          ATerm i_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((k_8 != NULL) && (k_8 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_8 = ATgetArgument(t, 0);
                if(((p_8 != NULL) && (p_8 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  p_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_8));
            return(t);
          }
          t = pat_td_1_0(i_1, t);
          if(((s_8 != NULL) && (s_8 != t)))
            _fail(t);
          else
            s_8 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_9, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_8)), not_null(k_8))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_8))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_8))));
        }
        ;
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        {
          ATerm i_9 = t;
          int j_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_8 = NULL,v_8 = NULL,w_8 = NULL;
              t = not_null(i_8);
              t = new_0_0(t);
              if(((v_8 != NULL) && (v_8 != t)))
                _fail(t);
              else
                v_8 = t;
              t = not_null(j_8);
              {
                ATerm m_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((t_8 != NULL) && (t_8 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        t_8 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_8));
                  return(t);
                }
                t = pat_td_1_0(m_1, t);
                if(((w_8 != NULL) && (w_8 != t)))
                  _fail(t);
                else
                  w_8 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_8), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_8))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_8))));
              }
              ;
              LocalPopChoice(j_9);
            }
          else
            {
              t = i_9;
              {
                ATerm y_8 = NULL,b_9 = NULL,d_9 = NULL,e_9 = NULL;
                t = not_null(i_8);
                t = new_0_0(t);
                if(((d_9 != NULL) && (d_9 != t)))
                  _fail(t);
                else
                  d_9 = t;
                t = not_null(j_8);
                {
                  ATerm n_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((y_8 != NULL) && (y_8 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          y_8 = ATgetArgument(t, 0);
                        if(((b_9 != NULL) && (b_9 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          b_9 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_9));
                    return(t);
                  }
                  t = pat_td_1_0(n_1, t);
                  if(((e_9 != NULL) && (e_9 != t)))
                    _fail(t);
                  else
                    e_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(y_8), not_null(b_9), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_9)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_9))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm map1_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm b_11 = NULL,f_11 = NULL,g_11 = NULL;
  b_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_11 = ATgetFirst((ATermList) t);
      g_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_6 = NULL,y_6 = NULL,b_7 = NULL,f_7 = NULL,i_7 = NULL,q_7 = NULL,r_7 = NULL,d_4 = NULL,x_3 = NULL;
        t = SSLgetAnnotations(b_11);
        i_7 = t;
        t = f_11;
        t = k_0(t);
        q_7 = t;
        t = (ATerm) ATinsert(CheckATermList(g_11), q_7);
        x_3 = t;
        t = SSLsetAnnotations(x_3, i_7);
        r_7 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_6 = ATgetFirst((ATermList) t);
            b_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_7);
        x_6 = t;
        t = b_7;
        {
          ATerm n_9 = t;
          int q_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(k_0, t);
              ;
              LocalPopChoice(q_9);
            }
          else
            {
              t = n_9;
            }
          f_7 = t;
          t = (ATerm) ATinsert(CheckATermList(f_7), y_6);
          d_4 = t;
          t = SSLsetAnnotations(d_4, x_6);
        }
        ;
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        {
          ATerm n_8 = NULL,z_8 = NULL,g_4 = NULL;
          t = SSLgetAnnotations(b_11);
          n_8 = t;
          t = g_11;
          t = map1_1_0(k_0, t);
          z_8 = t;
          t = (ATerm) ATinsert(CheckATermList(z_8), f_11);
          g_4 = t;
          t = SSLsetAnnotations(g_4, n_8);
        }
      }
  }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm i_13 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_9), term_u_9));
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  k_13 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_13 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, j_13, term_u_9);
    }
  else
    {
      t = k_13;
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm e_14 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_14, term_u_9);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL;
  i_14 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_14 = ATgetArgument(t, 0);
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, h_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_9), term_u_9));
            ;
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
            t = i_14;
          }
      }
    }
  else
    {
      t = i_14;
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm g_15 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_9), term_u_9));
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  i_15 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_15 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, h_15, term_u_9);
    }
  else
    {
      t = i_15;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,h_12 = NULL,i_12 = NULL,k_12 = NULL,l_12 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      k_12 = ATgetArgument(t, 0);
      l_12 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, k_12, l_12);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          k_12 = ATgetArgument(t, 0);
          t = k_12;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_12 = ATgetFirst((ATermList) t);
              c_12 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, b_12, (ATerm) ATmakeAppl(sym_LChoices_1, c_12));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_b_10;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              k_12 = ATgetArgument(t, 0);
              t = k_12;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_12 = ATgetFirst((ATermList) t);
                  c_12 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, b_12, (ATerm) ATmakeAppl(sym_Choices_1, c_12));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_b_10;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  k_12 = ATgetArgument(t, 0);
                  t = k_12;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      b_12 = ATgetFirst((ATermList) t);
                      c_12 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_12, (ATerm) ATmakeAppl(sym_Seqs_1, c_12));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_c_10;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_12 = ATgetArgument(t, 0);
                      l_12 = ATgetArgument(t, 1);
                      i_12 = ATgetArgument(t, 2);
                      h_12 = ATgetArgument(t, 3);
                      {
                        ATerm f_13 = NULL,h_13 = NULL;
                        t = l_12;
                        t = map1_1_0(o_1, t);
                        f_13 = t;
                        t = i_12;
                        t = map1_1_0(p_1, t);
                        h_13 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, k_12, f_13, h_13, h_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          k_12 = ATgetArgument(t, 0);
                          l_12 = ATgetArgument(t, 1);
                          i_12 = ATgetArgument(t, 2);
                          h_12 = ATgetArgument(t, 3);
                          {
                            ATerm d_10 = t;
                            int e_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm x_13 = NULL,z_13 = NULL;
                                t = i_12;
                                t = map1_1_0(q_1, t);
                                x_13 = t;
                                t = l_12;
                                t = map_1_0(r_1, t);
                                z_13 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, k_12, z_13, x_13, h_12);
                                ;
                                LocalPopChoice(e_10);
                              }
                            else
                              {
                                t = d_10;
                                {
                                  ATerm b_15 = NULL,d_15 = NULL;
                                  t = l_12;
                                  t = map1_1_0(s_1, t);
                                  b_15 = t;
                                  t = i_12;
                                  t = map_1_0(x_1, t);
                                  d_15 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, k_12, b_15, d_15, h_12);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              k_12 = ATgetArgument(t, 0);
                              l_12 = ATgetArgument(t, 1);
                              i_12 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, l_12, (ATerm) ATmakeAppl(sym_Op_2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, i_12), k_12)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  k_12 = ATgetArgument(t, 0);
                                  l_12 = ATgetArgument(t, 1);
                                  i_12 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, i_12)), k_12), (ATerm) ATmakeAppl(sym_Build_1, l_12)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      k_12 = ATgetArgument(t, 0);
                                      l_12 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_12, (ATerm) ATmakeAppl(sym_Match_1, l_12));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          k_12 = ATgetArgument(t, 0);
                                          l_12 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_12), l_12);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              k_12 = ATgetArgument(t, 0);
                                              l_12 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_12), k_12);
                                        }
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
ATerm y_1 (ATerm t)
{
  ATerm f_10 = t;
  if((PushChoice() == 0))
    {
      ATerm r_17 = NULL,s_17 = NULL,u_17 = NULL,h_5 = NULL;
      u_17 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_17);
      r_17 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_17);
      h_5 = t;
      t = SSLsetAnnotations(h_5, r_17);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_10;
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_10;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm v_17 = NULL,y_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_17 = ATgetFirst((ATermList) t);
      y_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_17, y_17);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,f_18 = NULL,g_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_10 = ATgetArgument(t, 0);
      if(match_cons(i_10, sym__2))
        {
          z_17 = ATgetArgument(i_10, 0);
          a_18 = ATgetArgument(i_10, 1);
        }
      else
        _fail(t);
      {
        ATerm j_10 = ATgetArgument(t, 1);
        if(match_cons(j_10, sym__2))
          {
            f_18 = ATgetArgument(j_10, 0);
            g_18 = ATgetArgument(j_10, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_18), z_17), (ATerm) ATinsert(CheckATermList(g_18), a_18));
  return(t);
}
ATerm k_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_10;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_18 = ATgetFirst((ATermList) t);
      i_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_18, i_18);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm j_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      if(match_cons(k_10, sym__2))
        {
          j_18 = ATgetArgument(k_10, 0);
          m_18 = ATgetArgument(k_10, 1);
        }
      else
        _fail(t);
      {
        ATerm l_10 = ATgetArgument(t, 1);
        if(match_cons(l_10, sym__2))
          {
            n_18 = ATgetArgument(l_10, 0);
            o_18 = ATgetArgument(l_10, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_18), j_18), (ATerm) ATinsert(CheckATermList(o_18), m_18));
  return(t);
}
ATerm i_4 (ATerm p_38, ATerm q_38, ATerm r_38, ATerm t)
{
  ATerm d_17 = NULL,g_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,q_17 = NULL,i_5 = NULL;
  t = r_38;
  t = fetch_1_0(y_1, t);
  t = r_38;
  t = genzip_4_0(c_2, h_2, i_2, LiftPrimArg_0_0, t);
  q_17 = t;
  if(match_cons(t, sym__2))
    {
      k_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_17);
  j_17 = t;
  t = k_17;
  t = concat_0_0(t);
  m_17 = t;
  t = l_17;
  t = genzip_4_0(k_2, n_2, q_2, _id, t);
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_17, n_17);
  i_5 = t;
  t = SSLsetAnnotations(i_5, j_17);
  if(match_cons(t, sym__2))
    {
      d_17 = ATgetArgument(t, 0);
      {
        ATerm m_10 = ATgetArgument(t, 1);
        if(match_cons(m_10, sym__2))
          {
            g_17 = ATgetArgument(m_10, 0);
            i_17 = ATgetArgument(m_10, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, d_17, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_17), (ATerm) ATmakeAppl(sym_CallT_3, p_38, q_38, i_17)));
  return(t);
}
ATerm genzip_4_0 (ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm t)
{
  ATerm a_19 (ATerm t)
  {
    ATerm n_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_101(t);
        ;
        LocalPopChoice(s_10);
      }
    else
      {
        t = n_10;
        {
          ATerm q_18 = NULL,r_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,z_18 = NULL,s_5 = NULL;
          t = e_101(t);
          z_18 = t;
          if(match_cons(t, sym__2))
            {
              r_18 = ATgetArgument(t, 0);
              u_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_18);
          q_18 = t;
          t = r_18;
          t = g_101(t);
          v_18 = t;
          t = u_18;
          t = a_19(t);
          w_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_18, w_18);
          s_5 = t;
          t = SSLsetAnnotations(s_5, q_18);
          t = f_101(t);
        }
      }
    return(t);
  }
  t = a_19(t);
  return(t);
}
ATerm at_end_1_0 (ATerm i_103 (ATerm), ATerm t)
{
  ATerm a_20 (ATerm t)
  {
    ATerm t_19 = NULL,u_19 = NULL,z_19 = NULL;
    z_19 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_19 = ATgetFirst((ATermList) t);
        u_19 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_9 = NULL,s_9 = NULL,u_5 = NULL;
          t = SSLgetAnnotations(z_19);
          o_9 = t;
          t = u_19;
          t = a_20(t);
          s_9 = t;
          t = (ATerm) ATinsert(CheckATermList(s_9), t_19);
          u_5 = t;
          t = SSLsetAnnotations(u_5, o_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_19;
        t = i_103(t);
      }
    return(t);
  }
  t = a_20(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_20 = NULL,g_20 = NULL,h_20 = NULL;
  e_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_20;
    }
  else
    {
      ATerm r_2 (ATerm t)
      {
        t = not_null(h_20);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((g_20 != NULL) && (g_20 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            g_20 = ATgetFirst((ATermList) t);
          if(((h_20 != NULL) && (h_20 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(g_20);
      t = at_end_1_0(r_2, t);
    }
  return(t);
}
ATerm d_21 (ATerm n_20, ATerm t)
{
  ATerm r_20 = NULL;
  t = n_20;
  {
    ATerm t_10 = t;
    if((PushChoice() == 0))
      {
        ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL,w_5 = NULL;
        u_20 = t;
        if(match_cons(t, sym_Var_1))
          {
            t_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_20);
        s_20 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, t_20);
        w_5 = t;
        t = SSLsetAnnotations(w_5, s_20);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_10;
      }
    t = new_0_0(t);
    r_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, r_20), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_20), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_20)))), (ATerm) ATmakeAppl(sym_Var_1, r_20)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL;
  x_20 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_20 = ATgetArgument(t, 0);
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_21(x_20, t);
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATmakeAppl(sym_Var_1, y_20)));
          }
      }
    }
  else
    {
      t = d_21(x_20, t);
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm w_10 = t;
  if((PushChoice() == 0))
    {
      ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,y_5 = NULL;
      n_11 = t;
      if(match_cons(t, sym_Var_1))
        {
          m_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_11);
      l_11 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, m_11);
      y_5 = t;
      t = SSLsetAnnotations(y_5, l_11);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_10;
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_10;
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_11 = ATgetFirst((ATermList) t);
      p_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_11, p_11);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_10 = ATgetArgument(t, 0);
      if(match_cons(x_10, sym__2))
        {
          q_11 = ATgetArgument(x_10, 0);
          r_11 = ATgetArgument(x_10, 1);
        }
      else
        _fail(t);
      {
        ATerm y_10 = ATgetArgument(t, 1);
        if(match_cons(y_10, sym__2))
          {
            s_11 = ATgetArgument(y_10, 0);
            t_11 = ATgetArgument(y_10, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_11), q_11), (ATerm) ATinsert(CheckATermList(t_11), r_11));
  return(t);
}
ATerm z_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_10;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_11 = ATgetFirst((ATermList) t);
      v_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_11, v_11);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_10 = ATgetArgument(t, 0);
      if(match_cons(z_10, sym__2))
        {
          w_11 = ATgetArgument(z_10, 0);
          x_11 = ATgetArgument(z_10, 1);
        }
      else
        _fail(t);
      {
        ATerm a_11 = ATgetArgument(t, 1);
        if(match_cons(a_11, sym__2))
          {
            y_11 = ATgetArgument(a_11, 0);
            z_11 = ATgetArgument(a_11, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_11), w_11), (ATerm) ATinsert(CheckATermList(z_11), x_11));
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm h_11 = t;
  if((PushChoice() == 0))
    {
      ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,a_6 = NULL;
      c_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          b_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_14);
      a_14 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, b_14);
      a_6 = t;
      t = SSLsetAnnotations(a_6, a_14);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_11;
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_10;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm d_14 = NULL,f_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_14 = ATgetFirst((ATermList) t);
      f_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_14, f_14);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm g_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_11 = ATgetArgument(t, 0);
      if(match_cons(i_11, sym__2))
        {
          g_14 = ATgetArgument(i_11, 0);
          j_14 = ATgetArgument(i_11, 1);
        }
      else
        _fail(t);
      {
        ATerm a_12 = ATgetArgument(t, 1);
        if(match_cons(a_12, sym__2))
          {
            k_14 = ATgetArgument(a_12, 0);
            l_14 = ATgetArgument(a_12, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_14), g_14), (ATerm) ATinsert(CheckATermList(l_14), j_14));
  return(t);
}
ATerm j_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_10;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_14 = ATgetFirst((ATermList) t);
      q_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_14, q_14);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm s_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_12 = ATgetArgument(t, 0);
      if(match_cons(d_12, sym__2))
        {
          s_14 = ATgetArgument(d_12, 0);
          u_14 = ATgetArgument(d_12, 1);
        }
      else
        _fail(t);
      {
        ATerm e_12 = ATgetArgument(t, 1);
        if(match_cons(e_12, sym__2))
          {
            v_14 = ATgetArgument(e_12, 0);
            w_14 = ATgetArgument(e_12, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_14), s_14), (ATerm) ATinsert(CheckATermList(w_14), u_14));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,m_26 = NULL;
  i_26 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      j_26 = ATgetArgument(t, 0);
      m_26 = ATgetArgument(t, 1);
      h_26 = ATgetArgument(t, 2);
      {
        ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,j_11 = NULL,k_11 = NULL,z_5 = NULL;
        t = h_26;
        t = fetch_1_0(t_2, t);
        t = h_26;
        t = genzip_4_0(v_2, w_2, y_2, LiftPrimArg_0_0, t);
        k_11 = t;
        if(match_cons(t, sym__2))
          {
            c_11 = ATgetArgument(t, 0);
            d_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_11);
        r_10 = t;
        t = c_11;
        t = concat_0_0(t);
        e_11 = t;
        t = d_11;
        t = genzip_4_0(z_2, b_3, c_3, _id, t);
        j_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_11, j_11);
        z_5 = t;
        t = SSLsetAnnotations(z_5, r_10);
        if(match_cons(t, sym__2))
          {
            o_10 = ATgetArgument(t, 0);
            {
              ATerm f_12 = ATgetArgument(t, 1);
              if(match_cons(f_12, sym__2))
                {
                  p_10 = ATgetArgument(f_12, 0);
                  q_10 = ATgetArgument(f_12, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_10), (ATerm) ATmakeAppl(sym_PrimT_3, j_26, m_26, q_10)));
      }
    }
  else
    {
      ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,q_13 = NULL,r_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,b_6 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          j_26 = ATgetArgument(t, 0);
          m_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_26;
      t = fetch_1_0(d_3, t);
      t = m_26;
      t = genzip_4_0(e_3, f_3, g_3, LiftPrimArg_0_0, t);
      w_13 = t;
      if(match_cons(t, sym__2))
        {
          r_13 = ATgetArgument(t, 0);
          t_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_13);
      q_13 = t;
      t = r_13;
      t = concat_0_0(t);
      u_13 = t;
      t = t_13;
      t = genzip_4_0(j_3, n_3, o_3, _id, t);
      v_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_13, v_13);
      b_6 = t;
      t = SSLsetAnnotations(b_6, q_13);
      if(match_cons(t, sym__2))
        {
          z_12 = ATgetArgument(t, 0);
          {
            ATerm g_12 = ATgetArgument(t, 1);
            if(match_cons(g_12, sym__2))
              {
                a_13 = ATgetArgument(g_12, 0);
                b_13 = ATgetArgument(g_12, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, z_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_13), (ATerm) ATmakeAppl(sym_PrimT_3, j_26, (ATerm)ATempty, b_13)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm t_113 (ATerm), ATerm t)
{
  ATerm b_27 (ATerm t)
  {
    ATerm j_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_113(t);
        t = b_27(t);
        ;
        LocalPopChoice(m_12);
      }
    else
      {
        t = j_12;
      }
    return(t);
  }
  t = b_27(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm u_27 = NULL,x_27 = NULL,z_27 = NULL,a_28 = NULL;
  a_28 = t;
  if(match_cons(t, sym_Con_3))
    {
      u_27 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
      z_27 = ATgetArgument(t, 2);
      {
        ATerm n_15 = NULL,o_6 = NULL;
        t = SSLgetAnnotations(a_28);
        n_15 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, u_27, x_27, z_27);
        o_6 = t;
        t = SSLsetAnnotations(o_6, n_15);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = a_28;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm n_12 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(p_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_12;
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
  v_29 = t;
  if(match_cons(t, sym_Con_3))
    {
      w_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
      u_29 = ATgetArgument(t, 2);
      {
        ATerm g_16 = NULL,s_6 = NULL;
        t = SSLgetAnnotations(v_29);
        g_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, w_29, x_29, u_29);
        s_6 = t;
        t = SSLsetAnnotations(s_6, g_16);
      }
    }
  else
    {
      ATerm x_16 = NULL,t_6 = NULL;
      if(match_cons(t, sym_App_2))
        {
          w_29 = ATgetArgument(t, 0);
          x_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_29);
      x_16 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, w_29, x_29);
      t_6 = t;
      t = SSLsetAnnotations(t_6, x_16);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm o_12 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(q_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_12;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      d_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_30;
  if(match_cons(t, sym_StratRule_3))
    {
      e_30 = ATgetArgument(t, 0);
      f_30 = ATgetArgument(t, 1);
      g_30 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_30), (ATerm) ATmakeAppl(sym_Where_1, g_30)), e_30));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          e_30 = ATgetArgument(t, 0);
          f_30 = ATgetArgument(t, 1);
          g_30 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = e_30;
      t = pureterm_0_0(t);
      t = f_30;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, f_30)), (ATerm) ATmakeAppl(sym_Where_1, g_30)), (ATerm) ATmakeAppl(sym_Match_1, e_30)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm n_30 (ATerm t)
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_97(t);
        ;
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = SRTS_one(n_30, t);
      }
    return(t);
  }
  t = n_30(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm l_4 (ATerm e_34, ATerm f_34, ATerm g_34, ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
  t = new_0_0(t);
  if(((s_30 != NULL) && (s_30 != t)))
    _fail(t);
  else
    s_30 = t;
  t = not_null(e_34);
  {
    ATerm r_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm r_12 = ATgetArgument(t, 0);
          if(match_cons(r_12, sym_Var_1))
            {
              if(((r_30 != NULL) && (r_30 != ATgetArgument(r_12, 0))))
                _fail(ATgetArgument(r_12, 0));
              else
                r_30 = ATgetArgument(r_12, 0);
            }
          else
            _fail(t);
          if(((p_30 != NULL) && (p_30 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            p_30 = ATgetArgument(t, 1);
          {
            ATerm s_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_30));
      return(t);
    }
    t = oncetd_1_0(r_3, t);
    if(((t_30 != NULL) && (t_30 != t)))
      _fail(t);
    else
      t_30 = t;
    t = not_null(f_34);
    {
      ATerm t_3 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm t_12 = ATgetArgument(t, 0);
            if(match_cons(t_12, sym_Var_1))
              {
                if(((r_30 != NULL) && (r_30 != ATgetArgument(t_12, 0))))
                  _fail(ATgetArgument(t_12, 0));
                else
                  r_30 = ATgetArgument(t_12, 0);
              }
            else
              _fail(t);
            if(((q_30 != NULL) && (q_30 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              q_30 = ATgetArgument(t, 1);
            {
              ATerm u_12 = ATgetArgument(t, 2);
              if(match_cons(u_12, sym_CallT_3))
                {
                  if(((o_30 != NULL) && (o_30 != ATgetArgument(u_12, 0))))
                    _fail(ATgetArgument(u_12, 0));
                  else
                    o_30 = ATgetArgument(u_12, 0);
                  {
                    ATerm v_12 = ATgetArgument(u_12, 1);
                    if(((ATgetType(v_12) != AT_LIST) || !(ATisEmpty(v_12))))
                      _fail(t);
                  }
                  {
                    ATerm w_12 = ATgetArgument(u_12, 2);
                    if(((ATgetType(w_12) != AT_LIST) || !(ATisEmpty(w_12))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_30));
        return(t);
      }
      t = oncetd_1_0(t_3, t);
      if(((u_30 != NULL) && (u_30 != t)))
        _fail(t);
      else
        u_30 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_30)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_30), not_null(u_30), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_34), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(o_30), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_30), not_null(q_30), term_c_10))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(r_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_30)))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_13 = t;
      int d_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
          k_31 = t;
          if(match_cons(t, sym_SRule_1))
            {
              l_31 = ATgetArgument(t, 0);
              t = l_31;
              if(match_cons(t, sym_Rule_3))
                {
                  h_31 = ATgetArgument(t, 0);
                  i_31 = ATgetArgument(t, 1);
                  j_31 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = k_31;
              t = l_4(h_31, i_31, j_31, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm x_17 = NULL,d_18 = NULL,z_6 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  l_31 = ATgetArgument(t, 0);
                  m_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_31);
              x_17 = t;
              t = m_31;
              t = desugarRule_0_0(t);
              d_18 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, l_31, d_18);
              z_6 = t;
              t = SSLsetAnnotations(z_6, x_17);
            }
          ;
          LocalPopChoice(d_13);
        }
      else
        {
          t = c_13;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm r_96 (ATerm), ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    t = topdown_1_0(r_96, t);
    return(t);
  }
  t = r_96(t);
  t = SRTS_all(u_3, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm e_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(g_13);
    }
  else
    {
      t = e_13;
    }
  t = repeat_1_0(w_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
            a_32 = t;
            if(match_cons(t, sym_CallT_3))
              {
                b_32 = ATgetArgument(t, 0);
                c_32 = ATgetArgument(t, 1);
                d_32 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = a_32;
            t = i_4(b_32, c_32, d_32, t);
            ;
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            {
              ATerm p_13 = t;
              int s_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(s_13);
                }
              else
                {
                  t = p_13;
                  {
                    ATerm y_13 = t;
                    int m_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(m_14);
                      }
                    else
                      {
                        t = y_13;
                        {
                          ATerm n_14 = t;
                          int o_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_14 = t;
                              int t_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      if(((i_32 != NULL) && (i_32 != ATgetArgument(t, 0))))
                                        _fail(ATgetArgument(t, 0));
                                      else
                                        i_32 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = not_null(i_32);
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      j_32 = ATgetArgument(t, 0);
                                      {
                                        ATerm x_14 = t;
                                        int y_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm m_32 = NULL,n_32 = NULL;
                                            t = not_null(i_32);
                                            {
                                              ATerm y_3 (ATerm t)
                                              {
                                                if(match_cons(t, sym_RootApp_1))
                                                  {
                                                    ATerm z_14 = ATgetArgument(t, 0);
                                                    if(match_cons(z_14, sym_Match_1))
                                                      {
                                                        if(((m_32 != NULL) && (m_32 != ATgetArgument(z_14, 0))))
                                                          _fail(ATgetArgument(z_14, 0));
                                                        else
                                                          m_32 = ATgetArgument(z_14, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = not_null(m_32);
                                                return(t);
                                              }
                                              t = pat_td_1_0(y_3, t);
                                              if(((n_32 != NULL) && (n_32 != t)))
                                                _fail(t);
                                              else
                                                n_32 = t;
                                              t = (ATerm) ATmakeAppl(sym_Match_1, not_null(n_32));
                                            }
                                            ;
                                            LocalPopChoice(y_14);
                                          }
                                        else
                                          {
                                            t = x_14;
                                            t = not_null(j_32);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          j_32 = ATgetArgument(t, 0);
                                          k_32 = ATgetArgument(t, 1);
                                          {
                                            ATerm a_15 = t;
                                            int c_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm q_32 = NULL,r_32 = NULL;
                                                t = not_null(i_32);
                                                {
                                                  ATerm a_4 (ATerm t)
                                                  {
                                                    if(match_cons(t, sym_RootApp_1))
                                                      {
                                                        ATerm e_15 = ATgetArgument(t, 0);
                                                        if(match_cons(e_15, sym_Match_1))
                                                          {
                                                            if(((q_32 != NULL) && (q_32 != ATgetArgument(e_15, 0))))
                                                              _fail(ATgetArgument(e_15, 0));
                                                            else
                                                              q_32 = ATgetArgument(e_15, 0);
                                                          }
                                                        else
                                                          _fail(t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = not_null(q_32);
                                                    return(t);
                                                  }
                                                  t = pat_td_1_0(a_4, t);
                                                  if(((r_32 != NULL) && (r_32 != t)))
                                                    _fail(t);
                                                  else
                                                    r_32 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, not_null(r_32));
                                                }
                                                ;
                                                LocalPopChoice(c_15);
                                              }
                                            else
                                              {
                                                t = a_15;
                                                t = (ATerm) ATmakeAppl(sym_BA_2, not_null(j_32), not_null(k_32));
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm v_32 = NULL,w_32 = NULL;
                                          t = not_null(i_32);
                                          {
                                            ATerm b_4 (ATerm t)
                                            {
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  ATerm f_15 = ATgetArgument(t, 0);
                                                  if(match_cons(f_15, sym_Match_1))
                                                    {
                                                      if(((v_32 != NULL) && (v_32 != ATgetArgument(f_15, 0))))
                                                        _fail(ATgetArgument(f_15, 0));
                                                      else
                                                        v_32 = ATgetArgument(f_15, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                              t = not_null(v_32);
                                              return(t);
                                            }
                                            t = pat_td_1_0(b_4, t);
                                            if(((w_32 != NULL) && (w_32 != t)))
                                              _fail(t);
                                            else
                                              w_32 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(w_32));
                                          }
                                        }
                                    }
                                  ;
                                  LocalPopChoice(t_14);
                                }
                              else
                                {
                                  t = r_14;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(o_14);
                            }
                          else
                            {
                              t = n_14;
                              t = Expl_0_0(t);
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
ATerm desugar_0_0 (ATerm t)
{
  t = topdown_1_0(v_3, t);
  return(t);
}
ATerm map_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm l_33 (ATerm t)
  {
    ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
    i_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_33;
      }
    else
      {
        ATerm b_19 = NULL,e_19 = NULL,f_19 = NULL,c_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_33 = ATgetFirst((ATermList) t);
            k_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_33);
        b_19 = t;
        t = j_33;
        t = s_102(t);
        e_19 = t;
        t = k_33;
        t = l_33(t);
        f_19 = t;
        t = (ATerm) ATinsert(CheckATermList(f_19), e_19);
        c_7 = t;
        t = SSLsetAnnotations(c_7, b_19);
      }
    return(t);
  }
  t = l_33(t);
  return(t);
}
ATerm Cons_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,e_7 = NULL;
  s_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_33 = ATgetFirst((ATermList) t);
      p_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_33);
  n_33 = t;
  t = o_33;
  t = e_81(t);
  q_33 = t;
  t = p_33;
  t = f_81(t);
  r_33 = t;
  t = (ATerm) ATinsert(CheckATermList(r_33), q_33);
  e_7 = t;
  t = SSLsetAnnotations(e_7, n_33);
  return(t);
}
ATerm m_4 (ATerm v_65, ATerm w_65, ATerm t)
{
  ATerm t_33 = NULL;
  t = SSL_fputc(v_65, w_65);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_33);
  return(t);
}
ATerm n_4 (ATerm j_69, ATerm k_69, ATerm t)
{
  ATerm u_33 = NULL;
  t = SSL_write_term_to_stream_text(j_69, k_69);
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_33);
  return(t);
}
ATerm p_4 (ATerm q_118 (ATerm), ATerm d_524, ATerm n_69, ATerm t)
{
  ATerm v_33 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_524, term_j_15);
  t = open_stream_0_0(t);
  v_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_33, n_69);
  t = q_118(t);
  t = fclose_0_0(t);
  t = n_69;
  return(t);
}
ATerm o_4 (ATerm f_69, ATerm g_69, ATerm t)
{
  ATerm w_33 = NULL;
  t = SSL_write_term_to_stream_baf(f_69, g_69);
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_33);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_15 = ATgetArgument(t, 0);
      if(match_cons(k_15, sym_Stream_1))
        {
          z_33 = ATgetArgument(k_15, 0);
        }
      else
        _fail(t);
      a_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_4(z_33, a_34, t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,o_34 = NULL,p_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_15 = ATgetArgument(t, 0);
      if(match_cons(l_15, sym_Stream_1))
        {
          o_34 = ATgetArgument(l_15, 0);
        }
      else
        _fail(t);
      p_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(o_34, p_34, t);
  b_34 = t;
  t = term_m_15;
  c_34 = t;
  t = b_34;
  if(match_cons(t, sym_Stream_1))
    {
      d_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_15, b_34);
  t = m_4(c_34, d_34, t);
  return(t);
}
ATerm output_1_0 (ATerm z_122 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  t = z_122(t);
  y_33 = t;
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_15;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = term_r_15;
      }
    x_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_33, y_33);
    {
      ATerm s_15 = t;
      int t_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_u_15;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, x_33, y_33);
          LocalPopChoice(t_15);
          if(match_cons(t, sym__2))
            {
              ATerm v_15 = ATgetArgument(t, 0);
              ATerm w_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_4(c_4, x_33, y_33, t);
        }
      else
        {
          t = s_15;
          if(match_cons(t, sym__2))
            {
              ATerm x_15 = ATgetArgument(t, 0);
              ATerm y_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_4(e_4, x_33, y_33, t);
        }
    }
  }
  return(t);
}
ATerm d_35 (ATerm x_34, ATerm t)
{
  t = SSL_fclose(x_34);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL;
  b_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_35 = ATgetArgument(t, 0);
      {
        ATerm z_15 = t;
        int a_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_35);
            ;
            LocalPopChoice(a_16);
          }
        else
          {
            t = z_15;
            t = d_35(b_35, t);
          }
      }
    }
  else
    {
      t = d_35(b_35, t);
    }
  return(t);
}
ATerm q_4 (ATerm l_69, ATerm t)
{
  t = SSL_read_term_from_stream(l_69);
  return(t);
}
ATerm r_4 (ATerm x_65, ATerm y_65, ATerm t)
{
  ATerm e_35 = NULL;
  t = SSL_fopen(x_65, y_65);
  e_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_35);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_36 = NULL;
  t = SSL_stdin_stream();
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_36);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_36 = NULL;
  t = SSL_stdout_stream();
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_36);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_36 = NULL;
  t = SSL_stderr_stream();
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_36);
  return(t);
}
ATerm t_40 (ATerm k_36, ATerm t)
{
  ATerm l_36 = NULL;
  t = SSL_explode_term(k_36);
  if(match_cons(t, sym__2))
    {
      ATerm b_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_16 = ATgetArgument(t, 1);
        if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
          {
            l_36 = ATgetFirst((ATermList) c_16);
            {
              ATerm d_16 = (ATerm) ATgetNext((ATermList) c_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_36;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_36;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_36;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_36;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm u_40 (ATerm t_36, ATerm u_36, ATerm v_36, ATerm t)
{
  ATerm w_36 = NULL,g_37 = NULL,h_37 = NULL,k_37 = NULL,h_7 = NULL;
  t = SSLgetAnnotations(v_36);
  h_37 = t;
  t = t_36;
  if(match_cons(t, sym_Path_1))
    {
      k_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_37, u_36);
  h_7 = t;
  t = SSLsetAnnotations(h_7, h_37);
  if(match_cons(t, sym__2))
    {
      w_36 = ATgetArgument(t, 0);
      g_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(w_36, g_37, t);
  return(t);
}
ATerm v_40 (ATerm r_37, ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm u_37 = NULL,c_40 = NULL,d_40 = NULL,o_40 = NULL,j_7 = NULL;
  t = SSLgetAnnotations(t_37);
  d_40 = t;
  t = SSL_is_string(r_37);
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_40, s_37);
  j_7 = t;
  t = SSLsetAnnotations(j_7, d_40);
  if(match_cons(t, sym__2))
    {
      u_37 = ATgetArgument(t, 0);
      c_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(u_37, c_40, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_16 = ATgetArgument(t, 0);
      ATerm f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  q_40 = t;
  if(match_cons(t, sym__2))
    {
      r_40 = ATgetArgument(t, 0);
      s_40 = ATgetArgument(t, 1);
      {
        ATerm h_16 = t;
        int i_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_40(q_40, t);
            ;
            LocalPopChoice(i_16);
          }
        else
          {
            t = h_16;
            {
              ATerm j_16 = t;
              int k_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_40(r_40, s_40, q_40, t);
                  ;
                  LocalPopChoice(k_16);
                }
              else
                {
                  t = j_16;
                  t = v_40(r_40, s_40, q_40, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_40(q_40, t);
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_l_16;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_40 = NULL;
      z_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_40, term_o_16);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      t = debug_1_0(f_4, t);
      _fail(t);
    }
  x_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(y_40, t);
  w_40 = t;
  t = x_40;
  t = fclose_0_0(t);
  t = w_40;
  return(t);
}
ATerm input_1_0 (ATerm a_123 (ATerm), ATerm t)
{
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
      t = term_s_16;
    }
  t = ReadFromFile_0_0(t);
  t = a_123(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
  b_41 = t;
  t = term_t_16;
  t = whoami_0_0(t);
  c_41 = t;
  t = term_d_8;
  e_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_16), c_41), term_u_16);
  f_41 = t;
  t = SSL_printnl(e_41, f_41);
  t = term_w_16;
  d_41 = t;
  t = SSL_exit(d_41);
  t = b_41;
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm h_41 = NULL;
  h_41 = t;
  if(match_string(t, "-k"))
    {
      t = h_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_41;
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL;
  i_41 = t;
  t = SSL_string_to_int(i_41);
  j_41 = t;
  t = term_y_16;
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_16, j_41);
  t = z_4(k_41, j_41, t);
  t = i_41;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_z_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, j_4, k_4, t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm m_41 = NULL;
  m_41 = t;
  if(match_string(t, "-S"))
    {
      t = m_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_41;
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL;
  t = term_a_17;
  n_41 = t;
  t = term_b_17;
  o_41 = t;
  t = term_c_17;
  t = z_4(n_41, o_41, t);
  t = term_e_17;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
  p_41 = t;
  t = SSL_string_to_int(p_41);
  q_41 = t;
  t = term_a_17;
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_17, q_41);
  t = z_4(r_41, q_41, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_41);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_h_17;
  return(t);
}
ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL;
  t = term_o_17;
  s_41 = t;
  t = term_t_16;
  t_41 = t;
  t = term_p_17;
  t = z_4(s_41, t_41, t);
  t = term_t_17;
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_w_17;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_4, u_4, y_4, t);
      ;
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
      {
        ATerm e_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_5, c_5, d_5, t);
            ;
            LocalPopChoice(k_18);
          }
        else
          {
            t = e_18;
            t = Option_3_0(e_5, g_5, j_5, t);
          }
      }
    }
  return(t);
}
ATerm z_4 (ATerm m_70, ATerm n_70, ATerm t)
{
  ATerm u_41 = NULL;
  t = term_l_18;
  u_41 = t;
  t = SSL_table_put(u_41, m_70, n_70);
  t = (ATerm) ATmakeAppl(sym__3, term_l_18, m_70, n_70);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
      t = term_t_16;
      t = d_0(t);
      z_41 = t;
      t = term_p_18;
      a_42 = t;
      t = term_s_18;
      b_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_18, term_s_18, z_41);
      t = x_4(a_42, b_42, z_41, t);
      _fail(t);
    }
  else
    {
      ATerm e_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_41 = ATgetFirst((ATermList) t);
          y_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_41;
      t = a_0(t);
      t = term_t_16;
      t = c_0(t);
      e_42 = t;
      t = (ATerm) ATinsert(CheckATermList(y_41), e_42);
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm g_42 = NULL;
  g_42 = t;
  if(match_string(t, "-o"))
    {
      t = g_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_42;
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL;
  h_42 = t;
  t = term_q_15;
  i_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_15, h_42);
  t = z_4(i_42, h_42, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_42);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_t_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_5, l_5, m_5, t);
  return(t);
}
ATerm x_4 (ATerm c_55, ATerm d_55, ATerm b_55, ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL;
  k_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_55, d_55);
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_19 = ATgetArgument(t, 0);
            ATerm d_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_55, d_55);
        t = w_4(c_55, d_55, t);
        ;
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = (ATerm) ATempty;
      }
    l_42 = t;
    t = (ATerm) ATinsert(CheckATermList(l_42), b_55);
    m_42 = t;
    t = SSL_table_put(c_55, d_55, m_42);
    t = k_42;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
      t = term_t_16;
      t = j_0(t);
      x_42 = t;
      t = term_p_18;
      y_42 = t;
      t = term_s_18;
      z_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_18, term_s_18, x_42);
      t = x_4(y_42, z_42, x_42, t);
      _fail(t);
    }
  else
    {
      ATerm d_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_42 = ATgetFirst((ATermList) t);
          u_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_42 = ATgetFirst((ATermList) t);
          w_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_42;
      t = h_0(t);
      t = v_42;
      t = i_0(t);
      d_43 = t;
      t = (ATerm) ATinsert(CheckATermList(w_42), d_43);
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm f_43 = NULL;
  f_43 = t;
  if(match_string(t, "-i"))
    {
      t = f_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_43;
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL;
  g_43 = t;
  t = term_r_16;
  h_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_16, g_43);
  t = z_4(h_43, g_43, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_43);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_5, o_5, p_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_16;
  t = whoami_0_0(t);
  i_43 = t;
  t = term_d_8;
  k_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_19), i_43);
  l_43 = t;
  t = SSL_printnl(k_43, l_43);
  t = term_w_16;
  j_43 = t;
  t = SSL_exit(j_43);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_19;
  t = get_config_0_0(t);
  return(t);
}
ATerm s_4 (ATerm g_53, ATerm h_53, ATerm t)
{
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_53, h_53);
      ;
      LocalPopChoice(k_19);
    }
  else
    {
      t = j_19;
      t = SSL_addr(g_53, h_53);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
  n_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_43;
      t = t_107(t);
    }
  else
    {
      ATerm s_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_43 = ATgetFirst((ATermList) t);
          p_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_43;
      t = foldr_2_0(t_107, u_107, t);
      s_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_43, s_43);
      t = u_107(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_b_17;
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  if(match_cons(t, sym__2))
    {
      o_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(o_20, p_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_43 = NULL,d_20 = NULL,f_20 = NULL;
  t = times_0_0(t);
  f_20 = t;
  t = SSL_explode_term(f_20);
  if(match_cons(t, sym__2))
    {
      ATerm l_19 = ATgetArgument(t, 0);
      d_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_20;
  t = foldr_2_0(q_5, r_5, t);
  v_43 = t;
  t = SSL_TicksToSeconds(v_43);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
  g_44 = t;
  if(match_cons(t, sym__2))
    {
      h_44 = ATgetArgument(t, 0);
      i_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_44;
        if((h_44 != t))
          {
            _fail(t);
          }
        t = g_44;
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        t = (ATerm) ATmakeAppl(sym__2, h_44, i_44);
        {
          ATerm o_19 = t;
          int p_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_44, i_44);
              ;
              LocalPopChoice(p_19);
            }
          else
            {
              t = o_19;
              t = SSL_gtr(h_44, i_44);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_44, i_44);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_120 (ATerm), ATerm t)
{
  ATerm m_44 = NULL;
  m_44 = t;
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_44 = NULL;
        t = term_a_17;
        t = get_config_0_0(t);
        o_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_44, term_w_16);
        t = geq_0_0(t);
        t = m_44;
        t = a_120(t);
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = m_44;
      }
  }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,t_44 = NULL,u_44 = NULL;
  t = run_time_0_0(t);
  q_44 = t;
  t = term_t_16;
  t = whoami_0_0(t);
  r_44 = t;
  t = term_d_8;
  t_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_19), q_44), term_s_19), r_44);
  u_44 = t;
  t = SSL_printnl(t_44, u_44);
  t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_19), q_44), term_s_19), r_44));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_17;
  v_44 = t;
  t = SSL_exit(v_44);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL;
  e_45 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_45;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_45 = ATgetArgument(t, 0);
          {
            ATerm k_21 = NULL,o_7 = NULL;
            t = SSLgetAnnotations(e_45);
            k_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_45);
            o_7 = t;
            t = SSLsetAnnotations(o_7, k_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_45;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_122 (ATerm), ATerm t)
{
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      t = fetch_1_0(v_5, t);
    }
  t = q_122(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_45 = ATgetFirst((ATermList) t);
      i_45 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_45 = NULL,n_45 = NULL;
        ATerm x_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_45)), not_null(n_45));
          return(t);
        }
        t = not_null(i_45);
        t = g_0(t);
        if(((m_45 != NULL) && (m_45 != t)))
          _fail(t);
        else
          m_45 = t;
        t = not_null(h_45);
        t = e_0(t);
        if(((n_45 != NULL) && (n_45 != t)))
          _fail(t);
        else
          n_45 = t;
        t = not_null(i_45);
        t = reverse_acc_2_0(e_0, x_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_16;
      t = g_0(t);
    }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,y_7 = NULL;
  t_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_45);
  r_45 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_45);
  y_7 = t;
  t = SSLsetAnnotations(y_7, r_45);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm v_45 = NULL;
  v_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_45), term_b_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL;
  ATerm c_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_20);
    }
  else
    {
      t = c_20;
      t = fetch_1_0(c_6, t);
    }
  t = term_j_20;
  t = echo_0_0(t);
  t = term_p_18;
  p_45 = t;
  t = term_s_18;
  q_45 = t;
  t = term_k_20;
  t = w_4(p_45, q_45, t);
  t = reverse_acc_2_0(_id, d_6, t);
  t = map_1_0(e_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_103 (ATerm), ATerm t)
{
  ATerm s_46 (ATerm t)
  {
    ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
    p_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_46 = ATgetFirst((ATermList) t);
        r_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_20 = t;
      int m_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_21 = NULL,c_22 = NULL,a_8 = NULL;
          t = SSLgetAnnotations(p_46);
          y_21 = t;
          t = q_46;
          t = c_103(t);
          c_22 = t;
          t = (ATerm) ATinsert(CheckATermList(r_46), c_22);
          a_8 = t;
          t = SSLsetAnnotations(a_8, y_21);
          ;
          LocalPopChoice(m_20);
        }
      else
        {
          t = l_20;
          {
            ATerm a_23 = NULL,h_23 = NULL,b_8 = NULL;
            t = SSLgetAnnotations(p_46);
            a_23 = t;
            t = r_46;
            t = s_46(t);
            h_23 = t;
            t = (ATerm) ATinsert(CheckATermList(h_23), q_46);
            b_8 = t;
            t = SSLsetAnnotations(b_8, a_23);
          }
        }
    }
    return(t);
  }
  t = s_46(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
  w_46 = t;
  {
    ATerm q_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_46;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_20 = ATgetFirst((ATermList) t);
                ATerm z_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_46;
          }
        ;
        LocalPopChoice(v_20);
      }
    else
      {
        t = q_20;
        t = (ATerm) ATinsert(ATempty, w_46);
      }
    x_46 = t;
    t = term_r_15;
    y_46 = t;
    t = SSL_printnl(y_46, x_46);
    t = w_46;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_19;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm v_4 (ATerm l_63, ATerm m_63, ATerm t)
{
  t = SSL_strcat(l_63, m_63);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_47 = NULL;
      i_47 = t;
      t = SSL_is_string(i_47);
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
            t = map_1_0(g_6, t);
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            {
              ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL;
              o_47 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_47 = ATgetArgument(t, 0);
                  t = p_47;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_47 = ATgetArgument(t, 0);
                      t = p_47;
                      {
                        ATerm i_21 = t;
                        int j_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_21);
                          }
                        else
                          {
                            t = i_21;
                            t = debug_1_0(h_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_47 = NULL,x_47 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_47 = ATgetArgument(t, 0);
                          q_47 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_47;
                      t = eval_config_0_0(t);
                      w_47 = t;
                      t = q_47;
                      t = eval_config_0_0(t);
                      x_47 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_47, x_47);
                      t = v_4(w_47, x_47, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm w_4 (ATerm t_56, ATerm u_56, ATerm t)
{
  t = SSL_table_get(t_56, u_56);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL;
  b_48 = t;
  t = term_l_18;
  c_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_18, b_48);
  t = w_4(c_48, b_48, t);
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_48 = NULL,e_48 = NULL;
        t = eval_config_0_0(t);
        d_48 = t;
        t = term_l_18;
        e_48 = t;
        t = SSL_table_put(e_48, b_48, d_48);
        t = d_48;
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
      }
  }
  return(t);
}
ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL;
  t = term_n_21;
  h_48 = t;
  t = term_t_16;
  i_48 = t;
  t = term_o_21;
  t = z_4(h_48, i_48, t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm m_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL;
  t = term_n_21;
  n_48 = t;
  t = term_t_16;
  o_48 = t;
  t = term_o_21;
  t = z_4(n_48, o_48, t);
  t = term_q_21;
  l_48 = t;
  t = term_t_16;
  m_48 = t;
  t = term_r_21;
  t = z_4(l_48, m_48, t);
  t = term_s_21;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_t_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_6, k_6, l_6, t);
      ;
      LocalPopChoice(v_21);
    }
  else
    {
      t = u_21;
      t = Option_3_0(m_6, n_6, p_6, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_124 (ATerm), ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,y_48 = NULL,z_48 = NULL,k_9 = NULL;
  if(((t_48 != NULL) && (t_48 != t)))
    _fail(t);
  else
    t_48 = t;
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_21;
        t = t_124(t);
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
      }
    t = not_null(t_48);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((v_48 != NULL) && (v_48 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          v_48 = ATgetFirst((ATermList) t);
        if(((w_48 != NULL) && (w_48 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          w_48 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(t_48));
    if(((u_48 != NULL) && (u_48 != t)))
      _fail(t);
    else
      u_48 = t;
    t = term_i_19;
    if(((z_48 != NULL) && (z_48 != t)))
      _fail(t);
    else
      z_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_19, not_null(v_48));
    t = z_4(not_null(z_48), not_null(v_48), t);
    t = not_null(w_48);
    {
      ATerm j_49 (ATerm t)
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_22 = t;
            int e_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_49 = NULL;
                c_49 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_49;
                ;
                LocalPopChoice(e_22);
              }
            else
              {
                t = d_22;
                t = t_124(t);
                t = Cons_2_0(_id, j_49, t);
              }
            ;
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            {
              ATerm f_49 = NULL,g_49 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_49 = ATgetFirst((ATermList) t);
                  g_49 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_49), (ATerm) ATmakeAppl(sym_Undefined_1, f_49));
            }
          }
        return(t);
      }
      t = j_49(t);
      if(((y_48 != NULL) && (y_48 != t)))
        _fail(t);
      else
        y_48 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(y_48)), (ATerm) ATmakeAppl(sym_Program_1, not_null(v_48)));
      if(((k_9 != NULL) && (k_9 != t)))
        _fail(t);
      else
        k_9 = t;
      t = SSLsetAnnotations(not_null(k_9), not_null(u_48));
    }
  }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm v_49 = NULL;
  v_49 = t;
  if(match_string(t, "--help"))
    {
      t = v_49;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_49;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_49;
        }
    }
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL;
  t = term_y_19;
  w_49 = t;
  t = term_t_16;
  x_49 = t;
  t = term_f_22;
  t = z_4(w_49, x_49, t);
  t = term_g_22;
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_h_22;
  return(t);
}
ATerm w_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_124 (ATerm), ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
  if(((q_49 != NULL) && (q_49 != t)))
    _fail(t);
  else
    q_49 = t;
  t = term_p_18;
  if(((s_49 != NULL) && (s_49 != t)))
    _fail(t);
  else
    s_49 = t;
  t = term_s_18;
  if(((t_49 != NULL) && (t_49 != t)))
    _fail(t);
  else
    t_49 = t;
  t = (ATerm) ATempty;
  if(((u_49 != NULL) && (u_49 != t)))
    _fail(t);
  else
    u_49 = t;
  t = SSL_table_put(not_null(s_49), not_null(t_49), not_null(u_49));
  t = not_null(q_49);
  {
    ATerm q_6 (ATerm t)
    {
      ATerm i_22 = t;
      int j_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_124(t);
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
                t = Option_3_0(r_6, u_6, v_6, t);
                ;
                LocalPopChoice(l_22);
              }
            else
              {
                t = k_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_6, t);
    {
      ATerm m_22 = t;
      int n_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_50 = NULL;
          f_50 = t;
          {
            ATerm o_22 = t;
            int p_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_24 = NULL;
                t = f_50;
                {
                  ATerm q_22 = t;
                  int r_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_y_19;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(r_22);
                    }
                  else
                    {
                      t = q_22;
                      t = fetch_1_0(w_6, t);
                    }
                  t = f_50;
                  t = default_system_usage_0_0(t);
                  t = term_b_17;
                  f_24 = t;
                  t = SSL_exit(f_24);
                }
                ;
                LocalPopChoice(p_22);
              }
            else
              {
                t = o_22;
                {
                  ATerm m_24 = NULL;
                  t = term_n_21;
                  t = get_config_0_0(t);
                  t = f_50;
                  t = default_system_about_0_0(t);
                  t = term_b_17;
                  m_24 = t;
                  t = SSL_exit(m_24);
                }
              }
          }
          ;
          LocalPopChoice(n_22);
        }
      else
        {
          t = m_22;
          {
            ATerm s_22 = t;
            int t_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
                ATerm a_7 (ATerm t)
                {
                  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,p_9 = NULL;
                  l_50 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      k_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_50);
                  j_50 = t;
                  t = k_50;
                  if(((o_49 != NULL) && (o_49 != t)))
                    _fail(t);
                  else
                    o_49 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_50);
                  p_9 = t;
                  t = SSLsetAnnotations(p_9, j_50);
                  return(t);
                }
                t = fetch_1_0(a_7, t);
                t = term_d_8;
                if(((h_50 != NULL) && (h_50 != t)))
                  _fail(t);
                else
                  h_50 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_49)), term_u_22);
                if(((i_50 != NULL) && (i_50 != t)))
                  _fail(t);
                else
                  i_50 = t;
                t = SSL_printnl(not_null(h_50), not_null(i_50));
                t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_49)), term_u_22));
                t = default_system_usage_0_0(t);
                t = term_w_16;
                if(((g_50 != NULL) && (g_50 != t)))
                  _fail(t);
                else
                  g_50 = t;
                t = SSL_exit(not_null(g_50));
                ;
                LocalPopChoice(t_22);
              }
            else
              {
                t = s_22;
              }
          }
        }
      if(((p_49 != NULL) && (p_49 != t)))
        _fail(t);
      else
        p_49 = t;
      t = term_p_18;
      if(((r_49 != NULL) && (r_49 != t)))
        _fail(t);
      else
        r_49 = t;
      t = SSL_table_destroy(not_null(r_49));
      t = not_null(p_49);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_122 (ATerm), ATerm t_122 (ATerm), ATerm u_122 (ATerm), ATerm v_122 (ATerm), ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL;
  t = parse_options_1_0(s_122, t);
  q_50 = t;
  t = term_v_22;
  t_50 = t;
  t = SSL_table_create(t_50);
  t = term_v_22;
  r_50 = t;
  t = term_w_22;
  s_50 = t;
  t = SSL_table_put(r_50, s_50, q_50);
  t = q_50;
  t = u_122(t);
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_122, t);
        ;
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        {
          ATerm z_22 = t;
          int b_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_122(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_23);
            }
          else
            {
              t = z_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(f_23);
          }
        else
          {
            t = e_23;
            {
              ATerm g_23 = t;
              int i_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(k_7, l_7, m_7, t);
                  ;
                  LocalPopChoice(i_23);
                }
              else
                {
                  t = g_23;
                  {
                    ATerm j_23 = t;
                    int k_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(k_23);
                      }
                    else
                      {
                        t = j_23;
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
ATerm g_7 (ATerm t)
{
  t = input_1_0(n_7, t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL;
  t = term_u_15;
  y_50 = t;
  t = term_t_16;
  z_50 = t;
  t = term_l_23;
  t = z_4(y_50, z_50, t);
  t = term_m_23;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_n_23;
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = output_1_0(s_7, t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm b_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,h_10 = NULL,a_10 = NULL;
  k_51 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_51);
  b_51 = t;
  t = e_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_51 = ATgetFirst((ATermList) t);
      h_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_51);
  f_51 = t;
  t = h_51;
  t = Cons_2_0(t_7, x_7, t);
  i_51 = t;
  t = (ATerm) ATinsert(CheckATermList(i_51), g_51);
  a_10 = t;
  t = SSLsetAnnotations(a_10, f_51);
  j_51 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, j_51);
  h_10 = t;
  t = SSLsetAnnotations(h_10, b_51);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,z_9 = NULL;
  o_51 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      m_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_51);
  l_51 = t;
  t = m_51;
  t = map_1_0(z_7, t);
  n_51 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, n_51);
  z_9 = t;
  t = SSLsetAnnotations(z_9, l_51);
  return(t);
}
ATerm x_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
      l_52 = t;
      if(match_cons(t, sym_SDef_3))
        {
          m_52 = ATgetArgument(t, 0);
          n_52 = ATgetArgument(t, 1);
          o_52 = ATgetArgument(t, 2);
          {
            ATerm v_24 = NULL,c_25 = NULL,x_9 = NULL;
            t = SSLgetAnnotations(l_52);
            v_24 = t;
            t = o_52;
            t = desugar_0_0(t);
            c_25 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, m_52, n_52, c_25);
            x_9 = t;
            t = SSLsetAnnotations(x_9, v_24);
          }
        }
      else
        {
          ATerm a_26 = NULL,n_26 = NULL,y_9 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              m_52 = ATgetArgument(t, 0);
              n_52 = ATgetArgument(t, 1);
              o_52 = ATgetArgument(t, 2);
              p_52 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_52);
          a_26 = t;
          t = p_52;
          t = desugar_0_0(t);
          n_26 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, m_52, n_52, o_52, n_26);
          y_9 = t;
          t = SSLsetAnnotations(y_9, a_26);
        }
      ;
      LocalPopChoice(p_23);
    }
  else
    {
      t = o_23;
      t = debug_1_0(c_8, t);
      _fail(t);
    }
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(d_7, default_usage_0_0, _id, g_7, t);
  return(t);
}
