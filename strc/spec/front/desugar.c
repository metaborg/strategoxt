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
ATerm term_j_23;
ATerm term_f_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_g_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_e_20;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_t_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_g_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_y_14;
ATerm term_r_14;
ATerm term_a_10;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_d_9;
ATerm term_o_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
void init_constant_terms (void)
{
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Sort_2, term_m_9, (ATerm) ATempty);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_ConstType_1, term_p_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym__2, term_o_16, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__2, term_u_16, term_i_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym__2, term_l_17, term_m_17);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym__2, term_t_20, term_i_16);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym__2, term_x_20, term_i_16);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_i_16);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_i_16);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("not a definition: ", 0, ATtrue));
}
ATerm debug_1_0 (ATerm w_103 (ATerm), ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm e_80 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm w_1 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm g_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm n_2 (ATerm);
ATerm g_4 (ATerm s_23, ATerm t_23, ATerm u_23, ATerm);
ATerm genzip_4_0 (ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm p_88 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm u_25 (ATerm j_22, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm v_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm i_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm b_99 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm c_83 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm k_4 (ATerm q_18, ATerm t_18, ATerm u_18, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm y_81 (ATerm), ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm map_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm k_66 (ATerm), ATerm l_66 (ATerm), ATerm);
ATerm l_4 (ATerm b_51, ATerm c_51, ATerm);
ATerm m_4 (ATerm p_54, ATerm q_54, ATerm);
ATerm o_4 (ATerm y_103 (ATerm), ATerm g_494, ATerm t_54, ATerm);
ATerm n_4 (ATerm l_54, ATerm m_54, ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm output_1_0 (ATerm h_108 (ATerm), ATerm);
ATerm g_39 (ATerm a_39, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm p_4 (ATerm r_54, ATerm);
ATerm q_4 (ATerm d_51, ATerm e_51, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_40 (ATerm q_39, ATerm);
ATerm w_40 (ATerm v_39, ATerm w_39, ATerm x_39, ATerm);
ATerm x_40 (ATerm f_40, ATerm j_40, ATerm k_40, ATerm);
ATerm r_4 (ATerm);
ATerm a_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm i_108 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm t_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm z_4 (ATerm s_55, ATerm t_55, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm x_4 (ATerm h_40, ATerm i_40, ATerm g_40, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm s_4 (ATerm l_38, ATerm m_38, ATerm);
ATerm foldr_2_0 (ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_105 (ATerm), ATerm);
ATerm q_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm r_5 (ATerm);
ATerm need_help_1_0 (ATerm y_107 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm x_5 (ATerm);
ATerm z_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm j_88 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_4 (ATerm r_48, ATerm s_48, ATerm);
ATerm c_6 (ATerm);
ATerm f_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm w_4 (ATerm y_41, ATerm z_41, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm b_110 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm parse_options_1_0 (ATerm a_110 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
ATerm f_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm q_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm x_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm w_103 (ATerm), ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL;
  a_0 = t;
  t = w_103(t);
  b_0 = t;
  t = term_b_8;
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), b_0);
  e_0 = t;
  t = SSL_printnl(c_0, e_0);
  t = a_0;
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,q_0 = NULL;
  p_0 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      q_0 = ATgetArgument(t, 0);
      o_0 = ATgetArgument(t, 1);
      {
        ATerm t_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL;
        t = p_0;
        t = new_0_0(t);
        t_0 = t;
        t = new_0_0(t);
        u_0 = t;
        t = new_0_0(t);
        v_0 = t;
        t = new_0_0(t);
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_0), v_0), u_0), t_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, t_0), (ATerm) ATmakeAppl(sym_Var_1, v_0))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, q_0, (ATerm)ATmakeAppl(sym_Var_1, t_0), (ATerm) ATmakeAppl(sym_Var_1, u_0)), (ATerm) ATmakeAppl(sym_BAM_3, o_0, (ATerm)ATmakeAppl(sym_Var_1, v_0), (ATerm) ATmakeAppl(sym_Var_1, w_0)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_c_8, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_0)), (ATerm) ATmakeAppl(sym_Var_1, u_0))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          q_0 = ATgetArgument(t, 0);
          {
            ATerm x_0 = NULL,y_0 = NULL,a_1 = NULL,b_1 = NULL;
            t = p_0;
            t = new_0_0(t);
            a_1 = t;
            t = q_0;
            {
              ATerm f_0 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((x_0 != NULL) && (x_0 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      x_0 = ATgetArgument(t, 0);
                    if(((y_0 != NULL) && (y_0 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      y_0 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, a_1);
                return(t);
              }
              t = oncetd_1_0(f_0, t);
              b_1 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_c_8, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_0)), not_null(x_0))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_1)), (ATerm) ATmakeAppl(sym_Build_1, b_1))));
            }
          }
        }
      else
        {
          ATerm j_1 = NULL,k_1 = NULL,s_1 = NULL,u_1 = NULL,v_1 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              q_0 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_0;
          t = new_0_0(t);
          s_1 = t;
          t = new_0_0(t);
          u_1 = t;
          t = q_0;
          {
            ATerm r_0 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((j_1 != NULL) && (j_1 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    j_1 = ATgetArgument(t, 0);
                  if(((k_1 != NULL) && (k_1 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    k_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, s_1);
              return(t);
            }
            t = oncetd_1_0(r_0, t);
            v_1 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_1), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_1)), (ATerm) ATmakeAppl(sym_PrimT_3, term_d_8, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_1))))), (ATerm)ATmakeAppl(sym_Var_1, s_1), (ATerm) ATmakeAppl(sym_Op_2, term_e_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_1)), not_null(j_1)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL;
  y_1 = t;
  if(match_cons(t, sym_Match_1))
    {
      z_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,h_2 = NULL;
        t = y_1;
        t = new_0_0(t);
        f_2 = t;
        t = z_1;
        {
          ATerm s_0 (ATerm t)
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
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_2), d_2);
            return(t);
          }
          t = pat_td_1_0(s_0, t);
          h_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_o_8, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_2))))));
        }
        ;
        LocalPopChoice(n_8);
      }
    else
      {
        t = j_8;
        {
          ATerm p_8 = t;
          int q_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL;
              t = y_1;
              t = new_0_0(t);
              l_2 = t;
              t = z_1;
              {
                ATerm z_0 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((k_2 != NULL) && (k_2 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        k_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, l_2);
                  return(t);
                }
                t = pat_td_1_0(z_0, t);
                m_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_2)), not_null(k_2))));
              }
              ;
              LocalPopChoice(q_8);
            }
          else
            {
              t = p_8;
              {
                ATerm o_2 = NULL,p_2 = NULL,t_2 = NULL,u_2 = NULL;
                t = y_1;
                t = new_0_0(t);
                t_2 = t;
                t = z_1;
                {
                  ATerm c_1 (ATerm t)
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, t_2);
                    return(t);
                  }
                  t = pat_td_1_0(c_1, t);
                  u_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, t_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_2)), not_null(p_2)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_80(t);
      ;
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      {
        ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
        m_7 = t;
        if(match_cons(t, sym_Op_2))
          {
            n_7 = ATgetArgument(t, 0);
            o_7 = ATgetArgument(t, 1);
            {
              ATerm e_1 = NULL,i_1 = NULL,g_3 = NULL;
              t = SSLgetAnnotations(m_7);
              e_1 = t;
              t = o_7;
              {
                ATerm d_1 (ATerm t)
                {
                  t = pat_td_1_0(e_80, t);
                  return(t);
                }
                t = fetch_1_0(d_1, t);
                i_1 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, n_7, i_1);
                g_3 = t;
                t = SSLsetAnnotations(g_3, e_1);
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                n_7 = ATgetArgument(t, 0);
                o_7 = ATgetArgument(t, 1);
                {
                  ATerm w_8 = t;
                  int x_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_1 = NULL,a_2 = NULL,h_3 = NULL;
                      t = SSLgetAnnotations(m_7);
                      t_1 = t;
                      t = o_7;
                      t = pat_td_1_0(e_80, t);
                      a_2 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, n_7, a_2);
                      h_3 = t;
                      t = SSLsetAnnotations(h_3, t_1);
                      ;
                      LocalPopChoice(x_8);
                    }
                  else
                    {
                      t = w_8;
                      {
                        ATerm w_2 = NULL,z_2 = NULL,j_3 = NULL;
                        t = SSLgetAnnotations(m_7);
                        w_2 = t;
                        t = n_7;
                        t = pat_td_1_0(e_80, t);
                        z_2 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, z_2, o_7);
                        j_3 = t;
                        t = SSLsetAnnotations(j_3, w_2);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    n_7 = ATgetArgument(t, 0);
                    o_7 = ATgetArgument(t, 1);
                    l_7 = ATgetArgument(t, 2);
                    {
                      ATerm r_3 = NULL,y_3 = NULL,k_3 = NULL;
                      t = SSLgetAnnotations(m_7);
                      r_3 = t;
                      t = l_7;
                      {
                        ATerm f_1 (ATerm t)
                        {
                          t = pat_td_1_0(e_80, t);
                          return(t);
                        }
                        t = fetch_1_0(f_1, t);
                        y_3 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, n_7, o_7, y_3);
                        k_3 = t;
                        t = SSLsetAnnotations(k_3, r_3);
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        n_7 = ATgetArgument(t, 0);
                        o_7 = ATgetArgument(t, 1);
                        l_7 = ATgetArgument(t, 2);
                        {
                          ATerm u_4 = NULL,f_5 = NULL,l_3 = NULL;
                          t = SSLgetAnnotations(m_7);
                          u_4 = t;
                          t = l_7;
                          {
                            ATerm g_1 (ATerm t)
                            {
                              t = pat_td_1_0(e_80, t);
                              return(t);
                            }
                            t = fetch_1_0(g_1, t);
                            f_5 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, n_7, o_7, f_5);
                            l_3 = t;
                            t = SSLsetAnnotations(l_3, u_4);
                          }
                        }
                      }
                    else
                      {
                        ATerm s_5 = NULL,j_6 = NULL,m_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            n_7 = ATgetArgument(t, 0);
                            o_7 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(m_7);
                        s_5 = t;
                        t = o_7;
                        t = pat_td_1_0(e_80, t);
                        j_6 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, n_7, j_6);
                        m_3 = t;
                        t = SSLsetAnnotations(m_3, s_5);
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
  ATerm f_8 = NULL,g_8 = NULL;
  f_8 = t;
  if(match_cons(t, sym_Build_1))
    {
      g_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_8 = NULL,i_8 = NULL,k_8 = NULL,l_8 = NULL;
        t = f_8;
        t = new_0_0(t);
        k_8 = t;
        t = g_8;
        {
          ATerm h_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((h_8 != NULL) && (h_8 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_8 = ATgetArgument(t, 0);
                if(((i_8 != NULL) && (i_8 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  i_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, k_8);
            return(t);
          }
          t = pat_td_1_0(h_1, t);
          l_8 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_9, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_8)), not_null(h_8))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_8)))), (ATerm) ATmakeAppl(sym_Build_1, l_8)));
        }
        ;
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        {
          ATerm g_9 = t;
          int h_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_8 = NULL,u_8 = NULL,v_8 = NULL;
              t = f_8;
              t = new_0_0(t);
              u_8 = t;
              t = g_8;
              {
                ATerm l_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((m_8 != NULL) && (m_8 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        m_8 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, u_8);
                  return(t);
                }
                t = pat_td_1_0(l_1, t);
                v_8 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_8), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_8)))), (ATerm) ATmakeAppl(sym_Build_1, v_8)));
              }
              ;
              LocalPopChoice(h_9);
            }
          else
            {
              t = g_9;
              {
                ATerm z_8 = NULL,c_9 = NULL,e_9 = NULL,f_9 = NULL;
                t = f_8;
                t = new_0_0(t);
                e_9 = t;
                t = g_8;
                {
                  ATerm m_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((z_8 != NULL) && (z_8 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          z_8 = ATgetArgument(t, 0);
                        if(((c_9 != NULL) && (c_9 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_9 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, e_9);
                    return(t);
                  }
                  t = pat_td_1_0(m_1, t);
                  f_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_9), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(z_8), not_null(c_9), (ATerm) ATmakeAppl(sym_Var_1, e_9))), (ATerm) ATmakeAppl(sym_Build_1, f_9)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
  c_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_11 = ATgetFirst((ATermList) t);
      e_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm i_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL,r_7 = NULL,s_7 = NULL,v_7 = NULL,a_8 = NULL,h_4 = NULL,e_4 = NULL;
        t = SSLgetAnnotations(c_11);
        s_7 = t;
        t = d_11;
        t = n_0(t);
        v_7 = t;
        t = (ATerm) ATinsert(CheckATermList(e_11), v_7);
        e_4 = t;
        t = SSLsetAnnotations(e_4, s_7);
        a_8 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_7 = ATgetFirst((ATermList) t);
            i_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_8);
        g_7 = t;
        t = i_7;
        {
          ATerm k_9 = t;
          int l_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(l_9);
            }
          else
            {
              t = k_9;
            }
          r_7 = t;
          t = (ATerm) ATinsert(CheckATermList(r_7), h_7);
          h_4 = t;
          t = SSLsetAnnotations(h_4, g_7);
        }
        ;
        LocalPopChoice(j_9);
      }
    else
      {
        t = i_9;
        {
          ATerm t_8 = NULL,y_8 = NULL,y_4 = NULL;
          t = SSLgetAnnotations(c_11);
          t_8 = t;
          t = e_11;
          t = map1_1_0(n_0, t);
          y_8 = t;
          t = (ATerm) ATinsert(CheckATermList(y_8), d_11);
          y_4 = t;
          t = SSLsetAnnotations(y_4, t_8);
        }
      }
  }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm e_13 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_9), term_q_9));
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm i_13 = NULL,o_13 = NULL;
  o_13 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_13 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, i_13, term_q_9);
    }
  else
    {
      t = o_13;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm h_14 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_14, term_q_9);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL;
  j_14 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_14 = ATgetArgument(t, 0);
      {
        ATerm r_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, i_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_9), term_q_9));
            ;
            LocalPopChoice(t_9);
          }
        else
          {
            t = r_9;
            t = j_14;
          }
      }
    }
  else
    {
      t = j_14;
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm k_15 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_9), term_q_9));
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm m_15 = NULL,q_15 = NULL;
  q_15 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_15 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, m_15, term_q_9);
    }
  else
    {
      t = q_15;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,c_12 = NULL,d_12 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      c_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, c_12, d_12);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          c_12 = ATgetArgument(t, 0);
          t = c_12;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_11 = ATgetFirst((ATermList) t);
              y_11 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, x_11, (ATerm) ATmakeAppl(sym_LChoices_1, y_11));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_u_9;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              c_12 = ATgetArgument(t, 0);
              t = c_12;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_11 = ATgetFirst((ATermList) t);
                  y_11 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, x_11, (ATerm) ATmakeAppl(sym_Choices_1, y_11));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_u_9;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  c_12 = ATgetArgument(t, 0);
                  t = c_12;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_11 = ATgetFirst((ATermList) t);
                      y_11 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, (ATerm) ATmakeAppl(sym_Seqs_1, y_11));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_v_9;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_12 = ATgetArgument(t, 0);
                      d_12 = ATgetArgument(t, 1);
                      a_12 = ATgetArgument(t, 2);
                      z_11 = ATgetArgument(t, 3);
                      {
                        ATerm y_12 = NULL,d_13 = NULL;
                        t = d_12;
                        t = map1_1_0(n_1, t);
                        y_12 = t;
                        t = a_12;
                        t = map1_1_0(o_1, t);
                        d_13 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, c_12, y_12, d_13, z_11);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          c_12 = ATgetArgument(t, 0);
                          d_12 = ATgetArgument(t, 1);
                          a_12 = ATgetArgument(t, 2);
                          z_11 = ATgetArgument(t, 3);
                          {
                            ATerm w_9 = t;
                            int x_9 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm e_14 = NULL,g_14 = NULL;
                                t = a_12;
                                t = map1_1_0(p_1, t);
                                e_14 = t;
                                t = d_12;
                                t = map_1_0(q_1, t);
                                g_14 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, c_12, g_14, e_14, z_11);
                                ;
                                LocalPopChoice(x_9);
                              }
                            else
                              {
                                t = w_9;
                                {
                                  ATerm a_15 = NULL,j_15 = NULL;
                                  t = d_12;
                                  t = map1_1_0(r_1, t);
                                  a_15 = t;
                                  t = a_12;
                                  t = map_1_0(w_1, t);
                                  j_15 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, c_12, a_15, j_15, z_11);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              c_12 = ATgetArgument(t, 0);
                              d_12 = ATgetArgument(t, 1);
                              a_12 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, d_12, (ATerm) ATmakeAppl(sym_Op_2, term_e_8, (ATerm) ATinsert(ATinsert(ATempty, a_12), c_12)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  c_12 = ATgetArgument(t, 0);
                                  d_12 = ATgetArgument(t, 1);
                                  a_12 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, a_12)), c_12), (ATerm) ATmakeAppl(sym_Build_1, d_12)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      c_12 = ATgetArgument(t, 0);
                                      d_12 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, (ATerm) ATmakeAppl(sym_Match_1, d_12));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          c_12 = ATgetArgument(t, 0);
                                          d_12 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_12), d_12);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              c_12 = ATgetArgument(t, 0);
                                              d_12 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_12), c_12);
                                        }
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
  ATerm y_9 = t;
  if((PushChoice() == 0))
    {
      ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,j_5 = NULL;
      z_17 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_17);
      x_17 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_17);
      j_5 = t;
      t = SSLsetAnnotations(j_5, x_17);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_9;
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_10;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_18 = ATgetFirst((ATermList) t);
      e_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_18, e_18);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm f_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_10 = ATgetArgument(t, 0);
      if(match_cons(d_10, sym__2))
        {
          f_18 = ATgetArgument(d_10, 0);
          i_18 = ATgetArgument(d_10, 1);
        }
      else
        _fail(t);
      {
        ATerm e_10 = ATgetArgument(t, 1);
        if(match_cons(e_10, sym__2))
          {
            j_18 = ATgetArgument(e_10, 0);
            k_18 = ATgetArgument(e_10, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_18), f_18), (ATerm) ATinsert(CheckATermList(k_18), i_18));
  return(t);
}
ATerm i_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_10;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_18 = ATgetFirst((ATermList) t);
      n_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_18, n_18);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,r_18 = NULL,s_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_10 = ATgetArgument(t, 0);
      if(match_cons(f_10, sym__2))
        {
          o_18 = ATgetArgument(f_10, 0);
          p_18 = ATgetArgument(f_10, 1);
        }
      else
        _fail(t);
      {
        ATerm g_10 = ATgetArgument(t, 1);
        if(match_cons(g_10, sym__2))
          {
            r_18 = ATgetArgument(g_10, 0);
            s_18 = ATgetArgument(g_10, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_18), o_18), (ATerm) ATinsert(CheckATermList(s_18), p_18));
  return(t);
}
ATerm g_4 (ATerm s_23, ATerm t_23, ATerm u_23, ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,d_17 = NULL,e_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,v_17 = NULL,w_17 = NULL,m_5 = NULL;
  t = u_23;
  t = fetch_1_0(x_1, t);
  t = u_23;
  t = genzip_4_0(b_2, c_2, g_2, LiftPrimArg_0_0, t);
  w_17 = t;
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      i_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_17);
  e_17 = t;
  t = h_17;
  t = concat_0_0(t);
  j_17 = t;
  t = i_17;
  t = genzip_4_0(i_2, j_2, n_2, _id, t);
  v_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_17, v_17);
  m_5 = t;
  t = SSLsetAnnotations(m_5, e_17);
  if(match_cons(t, sym__2))
    {
      a_17 = ATgetArgument(t, 0);
      {
        ATerm k_10 = ATgetArgument(t, 1);
        if(match_cons(k_10, sym__2))
          {
            b_17 = ATgetArgument(k_10, 0);
            d_17 = ATgetArgument(k_10, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, a_17, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_17), (ATerm) ATmakeAppl(sym_CallT_3, s_23, t_23, d_17)));
  return(t);
}
ATerm genzip_4_0 (ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm t)
{
  ATerm l_19 (ATerm t)
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_86(t);
        ;
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
        {
          ATerm b_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,k_19 = NULL,u_5 = NULL;
          t = l_86(t);
          k_19 = t;
          if(match_cons(t, sym__2))
            {
              e_19 = ATgetArgument(t, 0);
              f_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_19);
          b_19 = t;
          t = e_19;
          t = n_86(t);
          g_19 = t;
          t = f_19;
          t = l_19(t);
          h_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_19, h_19);
          u_5 = t;
          t = SSLsetAnnotations(u_5, b_19);
          t = m_86(t);
        }
      }
    return(t);
  }
  t = l_19(t);
  return(t);
}
ATerm at_end_1_0 (ATerm p_88 (ATerm), ATerm t)
{
  ATerm q_20 (ATerm t)
  {
    ATerm g_20 = NULL,j_20 = NULL,n_20 = NULL;
    n_20 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_20 = ATgetFirst((ATermList) t);
        j_20 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_9 = NULL,s_9 = NULL,w_5 = NULL;
          t = SSLgetAnnotations(n_20);
          n_9 = t;
          t = j_20;
          t = q_20(t);
          s_9 = t;
          t = (ATerm) ATinsert(CheckATermList(s_9), g_20);
          w_5 = t;
          t = SSLsetAnnotations(w_5, n_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_20;
        t = p_88(t);
      }
    return(t);
  }
  t = q_20(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
  h_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_21;
    }
  else
    {
      ATerm q_2 (ATerm t)
      {
        t = not_null(j_21);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_21 = ATgetFirst((ATermList) t);
          if(((j_21 != NULL) && (j_21 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_21;
      t = at_end_1_0(q_2, t);
    }
  return(t);
}
ATerm u_25 (ATerm j_22, ATerm t)
{
  ATerm m_22 = NULL;
  t = j_22;
  {
    ATerm n_10 = t;
    if((PushChoice() == 0))
      {
        ATerm o_22 = NULL,u_22 = NULL,v_22 = NULL,y_5 = NULL;
        v_22 = t;
        if(match_cons(t, sym_Var_1))
          {
            u_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_22);
        o_22 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, u_22);
        y_5 = t;
        t = SSLsetAnnotations(y_5, o_22);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_10;
      }
    t = new_0_0(t);
    m_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, m_22), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_22), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_22)))), (ATerm) ATmakeAppl(sym_Var_1, m_22)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL;
  f_25 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_25 = ATgetArgument(t, 0);
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_25(f_25, t);
            ;
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_v_9, (ATerm) ATmakeAppl(sym_Var_1, g_25)));
          }
      }
    }
  else
    {
      t = u_25(f_25, t);
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm q_10 = t;
  if((PushChoice() == 0))
    {
      ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,a_6 = NULL;
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
      a_6 = t;
      t = SSLsetAnnotations(a_6, l_11);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_10;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_10;
  return(t);
}
ATerm v_2 (ATerm t)
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
ATerm x_2 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_10 = ATgetArgument(t, 0);
      if(match_cons(r_10, sym__2))
        {
          q_11 = ATgetArgument(r_10, 0);
          r_11 = ATgetArgument(r_10, 1);
        }
      else
        _fail(t);
      {
        ATerm s_10 = ATgetArgument(t, 1);
        if(match_cons(s_10, sym__2))
          {
            s_11 = ATgetArgument(s_10, 0);
            t_11 = ATgetArgument(s_10, 1);
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
ATerm y_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_10;
  return(t);
}
ATerm a_3 (ATerm t)
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
ATerm b_3 (ATerm t)
{
  ATerm w_11 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_10 = ATgetArgument(t, 0);
      if(match_cons(u_10, sym__2))
        {
          w_11 = ATgetArgument(u_10, 0);
          e_12 = ATgetArgument(u_10, 1);
        }
      else
        _fail(t);
      {
        ATerm v_10 = ATgetArgument(t, 1);
        if(match_cons(v_10, sym__2))
          {
            f_12 = ATgetArgument(v_10, 0);
            g_12 = ATgetArgument(v_10, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_12), w_11), (ATerm) ATinsert(CheckATermList(g_12), e_12));
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm w_10 = t;
  if((PushChoice() == 0))
    {
      ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,d_6 = NULL;
      t_13 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_13);
      r_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_13);
      d_6 = t;
      t = SSLsetAnnotations(d_6, r_13);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_10;
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_10;
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm u_13 = NULL,a_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_13 = ATgetFirst((ATermList) t);
      a_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_13, a_14);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm b_14 = NULL,d_14 = NULL,k_14 = NULL,l_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_10 = ATgetArgument(t, 0);
      if(match_cons(x_10, sym__2))
        {
          b_14 = ATgetArgument(x_10, 0);
          d_14 = ATgetArgument(x_10, 1);
        }
      else
        _fail(t);
      {
        ATerm f_11 = ATgetArgument(t, 1);
        if(match_cons(f_11, sym__2))
          {
            k_14 = ATgetArgument(f_11, 0);
            l_14 = ATgetArgument(f_11, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_14), b_14), (ATerm) ATinsert(CheckATermList(l_14), d_14));
  return(t);
}
ATerm i_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_10;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm n_14 = NULL,p_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_14 = ATgetFirst((ATermList) t);
      p_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_14, p_14);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_11 = ATgetArgument(t, 0);
      if(match_cons(g_11, sym__2))
        {
          s_14 = ATgetArgument(g_11, 0);
          t_14 = ATgetArgument(g_11, 1);
        }
      else
        _fail(t);
      {
        ATerm b_12 = ATgetArgument(t, 1);
        if(match_cons(b_12, sym__2))
          {
            u_14 = ATgetArgument(b_12, 0);
            v_14 = ATgetArgument(b_12, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_14), s_14), (ATerm) ATinsert(CheckATermList(v_14), t_14));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm u_30 = NULL,x_30 = NULL,z_30 = NULL,a_31 = NULL;
  x_30 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      z_30 = ATgetArgument(t, 0);
      a_31 = ATgetArgument(t, 1);
      u_30 = ATgetArgument(t, 2);
      {
        ATerm t_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,b_6 = NULL;
        t = u_30;
        t = fetch_1_0(r_2, t);
        t = u_30;
        t = genzip_4_0(s_2, v_2, x_2, LiftPrimArg_0_0, t);
        k_11 = t;
        if(match_cons(t, sym__2))
          {
            b_11 = ATgetArgument(t, 0);
            h_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_11);
        a_11 = t;
        t = b_11;
        t = concat_0_0(t);
        i_11 = t;
        t = h_11;
        t = genzip_4_0(y_2, a_3, b_3, _id, t);
        j_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_11, j_11);
        b_6 = t;
        t = SSLsetAnnotations(b_6, a_11);
        if(match_cons(t, sym__2))
          {
            t_10 = ATgetArgument(t, 0);
            {
              ATerm h_12 = ATgetArgument(t, 1);
              if(match_cons(h_12, sym__2))
                {
                  y_10 = ATgetArgument(h_12, 0);
                  z_10 = ATgetArgument(h_12, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, t_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_10), (ATerm) ATmakeAppl(sym_PrimT_3, z_30, a_31, z_10)));
      }
    }
  else
    {
      ATerm g_13 = NULL,h_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,p_13 = NULL,q_13 = NULL,e_6 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          z_30 = ATgetArgument(t, 0);
          a_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_31;
      t = fetch_1_0(c_3, t);
      t = a_31;
      t = genzip_4_0(d_3, e_3, f_3, LiftPrimArg_0_0, t);
      q_13 = t;
      if(match_cons(t, sym__2))
        {
          l_13 = ATgetArgument(t, 0);
          m_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_13);
      k_13 = t;
      t = l_13;
      t = concat_0_0(t);
      n_13 = t;
      t = m_13;
      t = genzip_4_0(i_3, n_3, o_3, _id, t);
      p_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_13, p_13);
      e_6 = t;
      t = SSLsetAnnotations(e_6, k_13);
      if(match_cons(t, sym__2))
        {
          g_13 = ATgetArgument(t, 0);
          {
            ATerm i_12 = ATgetArgument(t, 1);
            if(match_cons(i_12, sym__2))
              {
                h_13 = ATgetArgument(i_12, 0);
                j_13 = ATgetArgument(i_12, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, g_13, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_13), (ATerm) ATmakeAppl(sym_PrimT_3, z_30, (ATerm)ATempty, j_13)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm q_31 (ATerm t)
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_99(t);
        t = q_31(t);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
      }
    return(t);
  }
  t = q_31(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,r_32 = NULL;
  r_32 = t;
  if(match_cons(t, sym_Con_3))
    {
      k_32 = ATgetArgument(t, 0);
      l_32 = ATgetArgument(t, 1);
      m_32 = ATgetArgument(t, 2);
      {
        ATerm i_15 = NULL,l_6 = NULL;
        t = SSLgetAnnotations(r_32);
        i_15 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, k_32, l_32, m_32);
        l_6 = t;
        t = SSLsetAnnotations(l_6, i_15);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = r_32;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm l_12 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(p_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_12;
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
  m_34 = t;
  if(match_cons(t, sym_Con_3))
    {
      n_34 = ATgetArgument(t, 0);
      o_34 = ATgetArgument(t, 1);
      l_34 = ATgetArgument(t, 2);
      {
        ATerm f_16 = NULL,o_6 = NULL;
        t = SSLgetAnnotations(m_34);
        f_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, n_34, o_34, l_34);
        o_6 = t;
        t = SSLsetAnnotations(o_6, f_16);
      }
    }
  else
    {
      ATerm c_17 = NULL,p_6 = NULL;
      if(match_cons(t, sym_App_2))
        {
          n_34 = ATgetArgument(t, 0);
          o_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_34);
      c_17 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, n_34, o_34);
      p_6 = t;
      t = SSLsetAnnotations(p_6, c_17);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm m_12 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(q_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_12;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      u_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_34;
  if(match_cons(t, sym_StratRule_3))
    {
      v_34 = ATgetArgument(t, 0);
      w_34 = ATgetArgument(t, 1);
      x_34 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_34), (ATerm) ATmakeAppl(sym_Where_1, x_34)), v_34));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          v_34 = ATgetArgument(t, 0);
          w_34 = ATgetArgument(t, 1);
          x_34 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_34;
      t = pureterm_0_0(t);
      t = w_34;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, w_34)), (ATerm) ATmakeAppl(sym_Where_1, x_34)), (ATerm) ATmakeAppl(sym_Match_1, v_34)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  ATerm f_35 (ATerm t)
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_83(t);
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        t = SRTS_one(f_35, t);
      }
    return(t);
  }
  t = f_35(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm k_4 (ATerm q_18, ATerm t_18, ATerm u_18, ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL;
  t = new_0_0(t);
  k_35 = t;
  t = q_18;
  {
    ATerm s_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm p_12 = ATgetArgument(t, 0);
          if(match_cons(p_12, sym_Var_1))
            {
              if(((j_35 != NULL) && (j_35 != ATgetArgument(p_12, 0))))
                _fail(ATgetArgument(p_12, 0));
              else
                j_35 = ATgetArgument(p_12, 0);
            }
          else
            _fail(t);
          if(((h_35 != NULL) && (h_35 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            h_35 = ATgetArgument(t, 1);
          {
            ATerm q_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, j_35);
      return(t);
    }
    t = oncetd_1_0(s_3, t);
    l_35 = t;
    t = t_18;
    {
      ATerm t_3 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm r_12 = ATgetArgument(t, 0);
            if(match_cons(r_12, sym_Var_1))
              {
                if(((j_35 != NULL) && (j_35 != ATgetArgument(r_12, 0))))
                  _fail(ATgetArgument(r_12, 0));
                else
                  j_35 = ATgetArgument(r_12, 0);
              }
            else
              _fail(t);
            if(((i_35 != NULL) && (i_35 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              i_35 = ATgetArgument(t, 1);
            {
              ATerm s_12 = ATgetArgument(t, 2);
              if(match_cons(s_12, sym_CallT_3))
                {
                  if(((g_35 != NULL) && (g_35 != ATgetArgument(s_12, 0))))
                    _fail(ATgetArgument(s_12, 0));
                  else
                    g_35 = ATgetArgument(s_12, 0);
                  {
                    ATerm t_12 = ATgetArgument(s_12, 1);
                    if(((ATgetType(t_12) != AT_LIST) || !(ATisEmpty(t_12))))
                      _fail(t);
                  }
                  {
                    ATerm u_12 = ATgetArgument(s_12, 2);
                    if(((ATgetType(u_12) != AT_LIST) || !(ATisEmpty(u_12))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, k_35);
        return(t);
      }
      t = oncetd_1_0(t_3, t);
      m_35 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_35), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, l_35, m_35, (ATerm) ATmakeAppl(sym_Seq_2, u_18, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(g_35), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_35), not_null(i_35), term_v_9))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_35)), (ATerm) ATmakeAppl(sym_Var_1, k_35))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_12 = t;
      int z_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
          c_36 = t;
          if(match_cons(t, sym_SRule_1))
            {
              d_36 = ATgetArgument(t, 0);
              t = d_36;
              if(match_cons(t, sym_Rule_3))
                {
                  z_35 = ATgetArgument(t, 0);
                  a_36 = ATgetArgument(t, 1);
                  b_36 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = c_36;
              t = k_4(z_35, a_36, b_36, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm r_17 = NULL,u_17 = NULL,t_6 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  d_36 = ATgetArgument(t, 0);
                  e_36 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(c_36);
              r_17 = t;
              t = e_36;
              t = desugarRule_0_0(t);
              u_17 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, d_36, u_17);
              t_6 = t;
              t = SSLsetAnnotations(t_6, r_17);
            }
          ;
          LocalPopChoice(z_12);
        }
      else
        {
          t = x_12;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm y_81 (ATerm), ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    t = topdown_1_0(y_81, t);
    return(t);
  }
  t = y_81(t);
  t = SRTS_all(u_3, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
    }
  t = repeat_1_0(w_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm c_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(f_13);
    }
  else
    {
      t = c_13;
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL;
            u_36 = t;
            if(match_cons(t, sym_CallT_3))
              {
                v_36 = ATgetArgument(t, 0);
                w_36 = ATgetArgument(t, 1);
                x_36 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = u_36;
            t = g_4(v_36, w_36, x_36, t);
            ;
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            {
              ATerm x_13 = t;
              int y_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(y_13);
                }
              else
                {
                  t = x_13;
                  {
                    ATerm z_13 = t;
                    int c_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(c_14);
                      }
                    else
                      {
                        t = z_13;
                        {
                          ATerm f_14 = t;
                          int m_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_14 = t;
                              int q_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      c_37 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = c_37;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      d_37 = ATgetArgument(t, 0);
                                      t = d_37;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          d_37 = ATgetArgument(t, 0);
                                          e_37 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, d_37, e_37);
                                    }
                                  ;
                                  LocalPopChoice(q_14);
                                }
                              else
                                {
                                  t = o_14;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(m_14);
                            }
                          else
                            {
                              t = f_14;
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
ATerm map_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm w_37 (ATerm t)
  {
    ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
    t_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_37;
      }
    else
      {
        ATerm x_18 = NULL,a_19 = NULL,c_19 = NULL,w_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_37 = ATgetFirst((ATermList) t);
            v_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_37);
        x_18 = t;
        t = u_37;
        t = z_87(t);
        a_19 = t;
        t = v_37;
        t = w_37(t);
        c_19 = t;
        t = (ATerm) ATinsert(CheckATermList(c_19), a_19);
        w_6 = t;
        t = SSLsetAnnotations(w_6, x_18);
      }
    return(t);
  }
  t = w_37(t);
  return(t);
}
ATerm Cons_2_0 (ATerm k_66 (ATerm), ATerm l_66 (ATerm), ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,b_7 = NULL;
  d_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_37 = ATgetFirst((ATermList) t);
      a_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_38);
  y_37 = t;
  t = z_37;
  t = k_66(t);
  b_38 = t;
  t = a_38;
  t = l_66(t);
  c_38 = t;
  t = (ATerm) ATinsert(CheckATermList(c_38), b_38);
  b_7 = t;
  t = SSLsetAnnotations(b_7, y_37);
  return(t);
}
ATerm l_4 (ATerm b_51, ATerm c_51, ATerm t)
{
  ATerm e_38 = NULL;
  t = SSL_fputc(b_51, c_51);
  e_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_38);
  return(t);
}
ATerm m_4 (ATerm p_54, ATerm q_54, ATerm t)
{
  ATerm f_38 = NULL;
  t = SSL_write_term_to_stream_text(p_54, q_54);
  f_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_38);
  return(t);
}
ATerm o_4 (ATerm y_103 (ATerm), ATerm g_494, ATerm t_54, ATerm t)
{
  ATerm g_38 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_494, term_r_14);
  t = r_4(t);
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_38, t_54);
  t = y_103(t);
  t = fclose_0_0(t);
  t = t_54;
  return(t);
}
ATerm n_4 (ATerm l_54, ATerm m_54, ATerm t)
{
  ATerm h_38 = NULL;
  t = SSL_write_term_to_stream_baf(l_54, m_54);
  h_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_38);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm k_38 = NULL,n_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_14 = ATgetArgument(t, 0);
      if(match_cons(w_14, sym_Stream_1))
        {
          k_38 = ATgetArgument(w_14, 0);
        }
      else
        _fail(t);
      n_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(k_38, n_38, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_14 = ATgetArgument(t, 0);
      if(match_cons(x_14, sym_Stream_1))
        {
          r_38 = ATgetArgument(x_14, 0);
        }
      else
        _fail(t);
      s_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(r_38, s_38, t);
  o_38 = t;
  t = term_y_14;
  p_38 = t;
  t = o_38;
  if(match_cons(t, sym_Stream_1))
    {
      q_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_y_14, o_38);
  t = l_4(p_38, q_38, t);
  return(t);
}
ATerm output_1_0 (ATerm h_108 (ATerm), ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL;
  t = h_108(t);
  j_38 = t;
  {
    ATerm z_14 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_15;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = z_14;
        t = term_d_15;
      }
    i_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_38, j_38);
    {
      ATerm e_15 = t;
      int f_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_g_15;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, i_38, j_38);
          LocalPopChoice(f_15);
          if(match_cons(t, sym__2))
            {
              ATerm h_15 = ATgetArgument(t, 0);
              ATerm l_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_4(x_3, i_38, j_38, t);
        }
      else
        {
          t = e_15;
          if(match_cons(t, sym__2))
            {
              ATerm n_15 = ATgetArgument(t, 0);
              ATerm o_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_4(z_3, i_38, j_38, t);
        }
    }
  }
  return(t);
}
ATerm g_39 (ATerm a_39, ATerm t)
{
  t = SSL_fclose(a_39);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL;
  e_39 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_39 = ATgetArgument(t, 0);
      {
        ATerm p_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_39);
            ;
            LocalPopChoice(r_15);
          }
        else
          {
            t = p_15;
            t = g_39(e_39, t);
          }
      }
    }
  else
    {
      t = g_39(e_39, t);
    }
  return(t);
}
ATerm p_4 (ATerm r_54, ATerm t)
{
  t = SSL_read_term_from_stream(r_54);
  return(t);
}
ATerm q_4 (ATerm d_51, ATerm e_51, ATerm t)
{
  ATerm h_39 = NULL;
  t = SSL_fopen(d_51, e_51);
  h_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_39);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_39 = NULL;
  t = SSL_stdin_stream();
  i_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_39);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_39 = NULL;
  t = SSL_stdout_stream();
  j_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_39);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_39 = NULL;
  t = SSL_stderr_stream();
  k_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_39);
  return(t);
}
ATerm v_40 (ATerm q_39, ATerm t)
{
  ATerm s_39 = NULL;
  t = SSL_explode_term(q_39);
  if(match_cons(t, sym__2))
    {
      ATerm s_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_15 = ATgetArgument(t, 1);
        if(((ATgetType(t_15) == AT_LIST) && !(ATisEmpty(t_15))))
          {
            s_39 = ATgetFirst((ATermList) t_15);
            {
              ATerm u_15 = (ATerm) ATgetNext((ATermList) t_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_39;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_39;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_39;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_39;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm w_40 (ATerm v_39, ATerm w_39, ATerm x_39, ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,d_40 = NULL,d_7 = NULL;
  t = SSLgetAnnotations(x_39);
  a_40 = t;
  t = v_39;
  if(match_cons(t, sym_Path_1))
    {
      d_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_40, w_39);
  d_7 = t;
  t = SSLsetAnnotations(d_7, a_40);
  if(match_cons(t, sym__2))
    {
      y_39 = ATgetArgument(t, 0);
      z_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(y_39, z_39, t);
  return(t);
}
ATerm x_40 (ATerm f_40, ATerm j_40, ATerm k_40, ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL,q_40 = NULL,e_7 = NULL;
  t = SSLgetAnnotations(k_40);
  n_40 = t;
  t = SSL_is_string(f_40);
  q_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_40, j_40);
  e_7 = t;
  t = SSLsetAnnotations(e_7, n_40);
  if(match_cons(t, sym__2))
    {
      l_40 = ATgetArgument(t, 0);
      m_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(l_40, m_40, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  s_40 = t;
  if(match_cons(t, sym__2))
    {
      t_40 = ATgetArgument(t, 0);
      u_40 = ATgetArgument(t, 1);
      {
        ATerm v_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_40(s_40, t);
            ;
            LocalPopChoice(w_15);
          }
        else
          {
            t = v_15;
            {
              ATerm x_15 = t;
              int y_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_40(t_40, u_40, s_40, t);
                  ;
                  LocalPopChoice(y_15);
                }
              else
                {
                  t = x_15;
                  t = x_40(t_40, u_40, s_40, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_40(s_40, t);
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_z_15;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_41 = NULL;
      b_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_41, term_c_16);
      t = r_4(t);
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = a_16;
      t = debug_1_0(a_4, t);
      _fail(t);
    }
  z_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(a_41, t);
  y_40 = t;
  t = z_40;
  t = fclose_0_0(t);
  t = y_40;
  return(t);
}
ATerm input_1_0 (ATerm i_108 (ATerm), ATerm t)
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      t = term_h_16;
    }
  t = ReadFromFile_0_0(t);
  t = i_108(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL;
  d_41 = t;
  t = term_i_16;
  t = whoami_0_0(t);
  e_41 = t;
  t = term_b_8;
  g_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_16), e_41), term_j_16);
  h_41 = t;
  t = SSL_printnl(g_41, h_41);
  t = term_l_16;
  f_41 = t;
  t = SSL_exit(f_41);
  t = d_41;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm j_41 = NULL;
  j_41 = t;
  if(match_string(t, "-k"))
    {
      t = j_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_41;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
  k_41 = t;
  t = SSL_string_to_int(k_41);
  l_41 = t;
  t = term_m_16;
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_16, l_41);
  t = z_4(m_41, l_41, t);
  t = k_41;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_4, c_4, d_4, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm o_41 = NULL;
  o_41 = t;
  if(match_string(t, "-S"))
    {
      t = o_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_41;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL;
  t = term_o_16;
  p_41 = t;
  t = term_p_16;
  q_41 = t;
  t = term_q_16;
  t = z_4(p_41, q_41, t);
  t = term_r_16;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_s_16;
  return(t);
}
ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
  r_41 = t;
  t = SSL_string_to_int(r_41);
  s_41 = t;
  t = term_o_16;
  t_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_16, s_41);
  t = z_4(t_41, s_41, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_41);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_t_16;
  return(t);
}
ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL;
  t = term_u_16;
  u_41 = t;
  t = term_i_16;
  v_41 = t;
  t = term_v_16;
  t = z_4(u_41, v_41, t);
  t = term_w_16;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_x_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_4, i_4, j_4, t);
      ;
      LocalPopChoice(z_16);
    }
  else
    {
      t = y_16;
      {
        ATerm f_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_4, a_5, b_5, t);
            ;
            LocalPopChoice(g_17);
          }
        else
          {
            t = f_17;
            t = Option_3_0(c_5, d_5, e_5, t);
          }
      }
    }
  return(t);
}
ATerm z_4 (ATerm s_55, ATerm t_55, ATerm t)
{
  ATerm w_41 = NULL;
  t = term_k_17;
  w_41 = t;
  t = SSL_table_put(w_41, s_55, t_55);
  t = (ATerm) ATmakeAppl(sym__3, term_k_17, s_55, t_55);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
      t = term_i_16;
      t = h_0(t);
      d_42 = t;
      t = term_l_17;
      e_42 = t;
      t = term_m_17;
      f_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_17, term_m_17, d_42);
      t = x_4(e_42, f_42, d_42, t);
      _fail(t);
    }
  else
    {
      ATerm i_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_42 = ATgetFirst((ATermList) t);
          c_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_42;
      t = d_0(t);
      t = term_i_16;
      t = g_0(t);
      i_42 = t;
      t = (ATerm) ATinsert(CheckATermList(c_42), i_42);
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm k_42 = NULL;
  k_42 = t;
  if(match_string(t, "-o"))
    {
      t = k_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_42;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL;
  l_42 = t;
  t = term_c_15;
  m_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_15, l_42);
  t = z_4(m_42, l_42, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_42);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_n_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_5, h_5, i_5, t);
  return(t);
}
ATerm x_4 (ATerm h_40, ATerm i_40, ATerm g_40, ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
  o_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_40, i_40);
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_17 = ATgetArgument(t, 0);
            ATerm s_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_40, i_40);
        t = w_4(h_40, i_40, t);
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        t = (ATerm) ATempty;
      }
    p_42 = t;
    t = (ATerm) ATinsert(CheckATermList(p_42), g_40);
    q_42 = t;
    t = SSL_table_put(h_40, i_40, q_42);
    t = o_42;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
      t = term_i_16;
      t = m_0(t);
      b_43 = t;
      t = term_l_17;
      c_43 = t;
      t = term_m_17;
      d_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_17, term_m_17, b_43);
      t = x_4(c_43, d_43, b_43, t);
      _fail(t);
    }
  else
    {
      ATerm h_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_42 = ATgetFirst((ATermList) t);
          y_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_42 = ATgetFirst((ATermList) t);
          a_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_42;
      t = k_0(t);
      t = z_42;
      t = l_0(t);
      h_43 = t;
      t = (ATerm) ATinsert(CheckATermList(a_43), h_43);
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm j_43 = NULL;
  j_43 = t;
  if(match_string(t, "-i"))
    {
      t = j_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_43;
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL;
  k_43 = t;
  t = term_g_16;
  l_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, k_43);
  t = z_4(l_43, k_43, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_43);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_t_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_5, l_5, n_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_16;
  t = whoami_0_0(t);
  m_43 = t;
  t = term_b_8;
  o_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_18), m_43);
  p_43 = t;
  t = SSL_printnl(o_43, p_43);
  t = term_l_16;
  n_43 = t;
  t = SSL_exit(n_43);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_18;
  t = get_config_0_0(t);
  return(t);
}
ATerm s_4 (ATerm l_38, ATerm m_38, ATerm t)
{
  ATerm c_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_38, m_38);
      ;
      LocalPopChoice(g_18);
    }
  else
    {
      t = c_18;
      t = SSL_addr(l_38, m_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
  r_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_43;
      t = a_93(t);
    }
  else
    {
      ATerm w_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_43 = ATgetFirst((ATermList) t);
          t_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_43;
      t = foldr_2_0(a_93, b_93, t);
      w_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_43, w_43);
      t = b_93(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm f_20 = NULL,h_20 = NULL;
  if(match_cons(t, sym__2))
    {
      f_20 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(f_20, h_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_43 = NULL,z_19 = NULL,b_20 = NULL;
  t = times_0_0(t);
  b_20 = t;
  t = SSL_explode_term(b_20);
  if(match_cons(t, sym__2))
    {
      ATerm h_18 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_19;
  t = foldr_2_0(o_5, p_5, t);
  z_43 = t;
  t = SSL_TicksToSeconds(z_43);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
  k_44 = t;
  if(match_cons(t, sym__2))
    {
      l_44 = ATgetArgument(t, 0);
      m_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_44;
        if((l_44 != t))
          {
            _fail(t);
          }
        t = k_44;
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = l_18;
        t = (ATerm) ATmakeAppl(sym__2, l_44, m_44);
        {
          ATerm w_18 = t;
          int y_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_44, m_44);
              ;
              LocalPopChoice(y_18);
            }
          else
            {
              t = w_18;
              t = SSL_gtr(l_44, m_44);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_44, m_44);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_105 (ATerm), ATerm t)
{
  ATerm q_44 = NULL;
  q_44 = t;
  {
    ATerm z_18 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_44 = NULL;
        t = term_o_16;
        t = get_config_0_0(t);
        s_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_44, term_l_16);
        t = geq_0_0(t);
        t = q_44;
        t = i_105(t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = z_18;
        t = q_44;
      }
  }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL,x_44 = NULL,y_44 = NULL;
  t = run_time_0_0(t);
  u_44 = t;
  t = term_i_16;
  t = whoami_0_0(t);
  v_44 = t;
  t = term_b_8;
  x_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_19), u_44), term_i_19), v_44);
  y_44 = t;
  t = SSL_printnl(x_44, y_44);
  t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_19), u_44), term_i_19), v_44));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_16;
  z_44 = t;
  t = SSL_exit(z_44);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL;
  i_45 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_45;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_45 = ATgetArgument(t, 0);
          {
            ATerm w_20 = NULL,p_7 = NULL;
            t = SSLgetAnnotations(i_45);
            w_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_45);
            p_7 = t;
            t = SSLsetAnnotations(p_7, w_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_45;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_107 (ATerm), ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      t = fetch_1_0(r_5, t);
    }
  t = y_107(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_45 = ATgetFirst((ATermList) t);
      m_45 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_45 = NULL,r_45 = NULL;
        ATerm t_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_45)), not_null(r_45));
          return(t);
        }
        t = m_45;
        t = j_0(t);
        if(((q_45 != NULL) && (q_45 != t)))
          _fail(t);
        else
          q_45 = t;
        t = l_45;
        t = i_0(t);
        if(((r_45 != NULL) && (r_45 != t)))
          _fail(t);
        else
          r_45 = t;
        t = m_45;
        t = reverse_acc_2_0(i_0, t_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_16;
      t = j_0(t);
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,w_7 = NULL;
  x_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_45);
  v_45 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_45);
  w_7 = t;
  t = SSLsetAnnotations(w_7, v_45);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm z_45 = NULL;
  z_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_45), term_p_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL;
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      t = fetch_1_0(v_5, t);
    }
  t = term_s_19;
  t = echo_0_0(t);
  t = term_l_17;
  t_45 = t;
  t = term_m_17;
  u_45 = t;
  t = term_t_19;
  t = w_4(t_45, u_45, t);
  t = reverse_acc_2_0(_id, x_5, t);
  t = map_1_0(z_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm j_88 (ATerm), ATerm t)
{
  ATerm w_46 (ATerm t)
  {
    ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL;
    t_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_46 = ATgetFirst((ATermList) t);
        v_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_19 = t;
      int v_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_21 = NULL,n_21 = NULL,y_7 = NULL;
          t = SSLgetAnnotations(t_46);
          f_21 = t;
          t = u_46;
          t = j_88(t);
          n_21 = t;
          t = (ATerm) ATinsert(CheckATermList(v_46), n_21);
          y_7 = t;
          t = SSLsetAnnotations(y_7, f_21);
          ;
          LocalPopChoice(v_19);
        }
      else
        {
          t = u_19;
          {
            ATerm w_21 = NULL,z_21 = NULL,z_7 = NULL;
            t = SSLgetAnnotations(t_46);
            w_21 = t;
            t = v_46;
            t = w_46(t);
            z_21 = t;
            t = (ATerm) ATinsert(CheckATermList(z_21), u_46);
            z_7 = t;
            t = SSLsetAnnotations(z_7, w_21);
          }
        }
    }
    return(t);
  }
  t = w_46(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL;
  a_47 = t;
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_47;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_19 = ATgetFirst((ATermList) t);
                ATerm a_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_47;
          }
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        t = (ATerm) ATinsert(ATempty, a_47);
      }
    b_47 = t;
    t = term_d_15;
    c_47 = t;
    t = SSL_printnl(c_47, b_47);
    t = a_47;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_18;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm v_4 (ATerm r_48, ATerm s_48, ATerm t)
{
  t = SSL_strcat(r_48, s_48);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_e_20;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_47 = NULL;
      m_47 = t;
      t = SSL_is_string(m_47);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = i_20;
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_6, t);
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            {
              ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL;
              s_47 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_47 = ATgetArgument(t, 0);
                  t = t_47;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_47 = ATgetArgument(t, 0);
                      t = t_47;
                      {
                        ATerm o_20 = t;
                        int p_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_20);
                          }
                        else
                          {
                            t = o_20;
                            t = debug_1_0(f_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_47 = NULL,z_47 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_47 = ATgetArgument(t, 0);
                          u_47 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_47;
                      t = eval_config_0_0(t);
                      y_47 = t;
                      t = u_47;
                      t = eval_config_0_0(t);
                      z_47 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_47, z_47);
                      t = v_4(y_47, z_47, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm w_4 (ATerm y_41, ATerm z_41, ATerm t)
{
  t = SSL_table_get(y_41, z_41);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL;
  d_48 = t;
  t = term_k_17;
  e_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_17, d_48);
  t = w_4(e_48, d_48, t);
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_48 = NULL,g_48 = NULL;
        t = eval_config_0_0(t);
        f_48 = t;
        t = term_k_17;
        g_48 = t;
        t = SSL_table_put(g_48, d_48, f_48);
        t = f_48;
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
      }
  }
  return(t);
}
ATerm g_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL;
  t = term_t_20;
  j_48 = t;
  t = term_i_16;
  k_48 = t;
  t = term_u_20;
  t = z_4(j_48, k_48, t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = term_v_20;
  return(t);
}
ATerm k_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL;
  t = term_t_20;
  n_48 = t;
  t = term_i_16;
  o_48 = t;
  t = term_u_20;
  t = z_4(n_48, o_48, t);
  t = term_x_20;
  l_48 = t;
  t = term_i_16;
  m_48 = t;
  t = term_y_20;
  t = z_4(l_48, m_48, t);
  t = term_z_20;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_a_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_6, h_6, i_6, t);
      ;
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      t = Option_3_0(k_6, m_6, n_6, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_110 (ATerm), ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,a_49 = NULL,b_49 = NULL,o_9 = NULL;
  v_48 = t;
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_21;
        t = b_110(t);
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
      }
    t = v_48;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_48 = ATgetFirst((ATermList) t);
        y_48 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_48);
    w_48 = t;
    t = term_b_18;
    b_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_18, x_48);
    t = z_4(b_49, x_48, t);
    t = y_48;
    {
      ATerm l_49 (ATerm t)
      {
        ATerm k_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_21 = t;
            int o_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_49 = NULL;
                e_49 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_49;
                ;
                LocalPopChoice(o_21);
              }
            else
              {
                t = m_21;
                t = b_110(t);
                t = Cons_2_0(_id, l_49, t);
              }
            ;
            LocalPopChoice(l_21);
          }
        else
          {
            t = k_21;
            {
              ATerm h_49 = NULL,i_49 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_49 = ATgetFirst((ATermList) t);
                  i_49 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_49), (ATerm) ATmakeAppl(sym_Undefined_1, h_49));
            }
          }
        return(t);
      }
      t = l_49(t);
      a_49 = t;
      t = (ATerm) ATinsert(CheckATermList(a_49), (ATerm) ATmakeAppl(sym_Program_1, x_48));
      o_9 = t;
      t = SSLsetAnnotations(o_9, w_48);
    }
  }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm x_49 = NULL;
  x_49 = t;
  if(match_string(t, "--help"))
    {
      t = x_49;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_49;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_49;
        }
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL;
  t = term_o_19;
  y_49 = t;
  t = term_i_16;
  z_49 = t;
  t = term_p_21;
  t = z_4(y_49, z_49, t);
  t = term_q_21;
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_r_21;
  return(t);
}
ATerm v_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_110 (ATerm), ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL;
  s_49 = t;
  t = term_l_17;
  u_49 = t;
  t = term_m_17;
  v_49 = t;
  t = (ATerm) ATempty;
  w_49 = t;
  t = SSL_table_put(u_49, v_49, w_49);
  t = s_49;
  {
    ATerm q_6 (ATerm t)
    {
      ATerm s_21 = t;
      int t_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_110(t);
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
                t = Option_3_0(r_6, s_6, u_6, t);
                ;
                LocalPopChoice(v_21);
              }
            else
              {
                t = u_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_6, t);
    {
      ATerm x_21 = t;
      int y_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_50 = NULL;
          g_50 = t;
          {
            ATerm a_22 = t;
            int b_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_22 = NULL;
                t = g_50;
                {
                  ATerm c_22 = t;
                  int d_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_o_19;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(d_22);
                    }
                  else
                    {
                      t = c_22;
                      t = fetch_1_0(v_6, t);
                    }
                  t = g_50;
                  t = default_system_usage_0_0(t);
                  t = term_p_16;
                  s_22 = t;
                  t = SSL_exit(s_22);
                }
                ;
                LocalPopChoice(b_22);
              }
            else
              {
                t = a_22;
                {
                  ATerm y_22 = NULL;
                  t = term_t_20;
                  t = get_config_0_0(t);
                  t = g_50;
                  t = default_system_about_0_0(t);
                  t = term_p_16;
                  y_22 = t;
                  t = SSL_exit(y_22);
                }
              }
          }
          ;
          LocalPopChoice(y_21);
        }
      else
        {
          t = x_21;
          {
            ATerm e_22 = t;
            int f_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
                ATerm x_6 (ATerm t)
                {
                  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,z_9 = NULL;
                  m_50 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      l_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_50);
                  k_50 = t;
                  t = l_50;
                  if(((q_49 != NULL) && (q_49 != t)))
                    _fail(t);
                  else
                    q_49 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, l_50);
                  z_9 = t;
                  t = SSLsetAnnotations(z_9, k_50);
                  return(t);
                }
                t = fetch_1_0(x_6, t);
                t = term_b_8;
                i_50 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_49)), term_g_22);
                j_50 = t;
                t = SSL_printnl(i_50, j_50);
                t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_49)), term_g_22));
                t = default_system_usage_0_0(t);
                t = term_l_16;
                h_50 = t;
                t = SSL_exit(h_50);
                ;
                LocalPopChoice(f_22);
              }
            else
              {
                t = e_22;
              }
          }
        }
      r_49 = t;
      t = term_l_17;
      t_49 = t;
      t = SSL_table_destroy(t_49);
      t = r_49;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL;
  t = parse_options_1_0(a_108, t);
  r_50 = t;
  t = term_h_22;
  u_50 = t;
  t = SSL_table_create(u_50);
  t = term_h_22;
  s_50 = t;
  t = term_i_22;
  t_50 = t;
  t = SSL_table_put(s_50, t_50, r_50);
  t = r_50;
  t = c_108(t);
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_108, t);
        ;
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        {
          ATerm n_22 = t;
          int p_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_108(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(p_22);
            }
          else
            {
              t = n_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      {
        ATerm t_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(w_22);
          }
        else
          {
            t = t_22;
            {
              ATerm x_22 = t;
              int z_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(a_7, c_7, f_7, t);
                  ;
                  LocalPopChoice(z_22);
                }
              else
                {
                  t = x_22;
                  {
                    ATerm a_23 = t;
                    int b_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(b_23);
                      }
                    else
                      {
                        t = a_23;
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
ATerm z_6 (ATerm t)
{
  t = input_1_0(j_7, t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL;
  t = term_g_15;
  z_50 = t;
  t = term_i_16;
  a_51 = t;
  t = term_c_23;
  t = z_4(z_50, a_51, t);
  t = term_d_23;
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_f_23;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = output_1_0(k_7, t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,j_10 = NULL,i_10 = NULL;
  p_51 = t;
  if(match_cons(t, sym_Specification_1))
    {
      j_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_51);
  i_51 = t;
  t = j_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_51 = ATgetFirst((ATermList) t);
      m_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_51);
  k_51 = t;
  t = m_51;
  t = Cons_2_0(q_7, t_7, t);
  n_51 = t;
  t = (ATerm) ATinsert(CheckATermList(n_51), l_51);
  i_10 = t;
  t = SSLsetAnnotations(i_10, k_51);
  o_51 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, o_51);
  j_10 = t;
  t = SSLsetAnnotations(j_10, i_51);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,h_10 = NULL;
  t_51 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      r_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_51);
  q_51 = t;
  t = r_51;
  t = map_1_0(u_7, t);
  s_51 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, s_51);
  h_10 = t;
  t = SSLsetAnnotations(h_10, q_51);
  return(t);
}
ATerm t_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL;
      q_52 = t;
      if(match_cons(t, sym_SDef_3))
        {
          r_52 = ATgetArgument(t, 0);
          s_52 = ATgetArgument(t, 1);
          t_52 = ATgetArgument(t, 2);
          {
            ATerm e_23 = NULL,i_23 = NULL,b_10 = NULL;
            t = SSLgetAnnotations(q_52);
            e_23 = t;
            t = t_52;
            t = desugar_0_0(t);
            i_23 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, r_52, s_52, i_23);
            b_10 = t;
            t = SSLsetAnnotations(b_10, e_23);
          }
        }
      else
        {
          ATerm w_23 = NULL,b_24 = NULL,c_10 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              r_52 = ATgetArgument(t, 0);
              s_52 = ATgetArgument(t, 1);
              t_52 = ATgetArgument(t, 2);
              u_52 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_52);
          w_23 = t;
          t = u_52;
          t = desugar_0_0(t);
          b_24 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, r_52, s_52, t_52, b_24);
          c_10 = t;
          t = SSLsetAnnotations(c_10, w_23);
        }
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      t = debug_1_0(x_7, t);
      _fail(t);
    }
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_j_23;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_6, default_usage_0_0, _id, z_6, t);
  return(t);
}
