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
ATerm term_a_24;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_w_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_v_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_e_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_l_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_q_18;
ATerm term_l_18;
ATerm term_x_17;
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
ATerm term_x_16;
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
ATerm term_n_15;
ATerm term_j_15;
ATerm term_f_10;
ATerm term_b_10;
ATerm term_x_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_h_9;
ATerm term_n_8;
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
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Sort_2, term_q_9, (ATerm) ATempty);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(10);
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
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(1);
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
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym__2, term_q_18, term_u_18);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_t_16);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_t_16);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_b_20, term_t_16);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_t_16);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("not a definition: ", 0, ATtrue));
}
ATerm debug_1_0 (ATerm v_103 (ATerm), ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm d_80 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm u_1 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm n_2 (ATerm);
ATerm i_4 (ATerm v_23, ATerm w_23, ATerm x_23, ATerm);
ATerm genzip_4_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm o_88 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm j_25 (ATerm z_21, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm j_3 (ATerm);
ATerm o_3 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm a_99 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm b_83 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm l_4 (ATerm p_18, ATerm s_18, ATerm t_18, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm x_81 (ATerm), ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm map_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm k_66 (ATerm), ATerm l_66 (ATerm), ATerm);
ATerm m_4 (ATerm b_51, ATerm c_51, ATerm);
ATerm n_4 (ATerm p_54, ATerm q_54, ATerm);
ATerm p_4 (ATerm x_103 (ATerm), ATerm p_491, ATerm t_54, ATerm);
ATerm o_4 (ATerm l_54, ATerm m_54, ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm output_1_0 (ATerm g_108 (ATerm), ATerm);
ATerm r_39 (ATerm l_39, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_4 (ATerm r_54, ATerm);
ATerm r_4 (ATerm d_51, ATerm e_51, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm g_41 (ATerm c_40, ATerm);
ATerm h_41 (ATerm g_40, ATerm k_40, ATerm l_40, ATerm);
ATerm i_41 (ATerm t_40, ATerm u_40, ATerm v_40, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm e_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm h_108 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm k_4 (ATerm);
ATerm y_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm z_4 (ATerm s_55, ATerm t_55, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm x_4 (ATerm i_40, ATerm j_40, ATerm h_40, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm s_4 (ATerm m_38, ATerm n_38, ATerm);
ATerm foldr_2_0 (ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_105 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm w_5 (ATerm);
ATerm need_help_1_0 (ATerm x_107 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm i_88 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_4 (ATerm r_48, ATerm s_48, ATerm);
ATerm g_6 (ATerm);
ATerm i_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm w_4 (ATerm z_41, ATerm a_42, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm a_110 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm w_6 (ATerm);
ATerm z_6 (ATerm);
ATerm parse_options_1_0 (ATerm z_109 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm);
ATerm e_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm k_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm y_7 (ATerm);
ATerm a_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm v_103 (ATerm), ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL;
  a_0 = t;
  t = v_103(t);
  b_0 = t;
  t = term_d_8;
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), b_0);
  e_0 = t;
  t = SSL_printnl(c_0, e_0);
  t = a_0;
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
            t = q_0;
            t = new_0_0(t);
            b_1 = t;
            t = r_0;
            {
              ATerm f_0 (ATerm t)
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
                t = (ATerm) ATmakeAppl(sym_Var_1, b_1);
                return(t);
              }
              t = oncetd_1_0(f_0, t);
              c_1 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_8, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_0)), not_null(y_0))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_1)), (ATerm) ATmakeAppl(sym_Build_1, c_1))));
            }
          }
        }
      else
        {
          ATerm k_1 = NULL,l_1 = NULL,t_1 = NULL,v_1 = NULL,w_1 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              r_0 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_0;
          t = new_0_0(t);
          t_1 = t;
          t = new_0_0(t);
          v_1 = t;
          t = r_0;
          {
            ATerm p_0 (ATerm t)
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
              t = (ATerm) ATmakeAppl(sym_Var_1, t_1);
              return(t);
            }
            t = oncetd_1_0(p_0, t);
            w_1 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_1), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_1)), (ATerm) ATmakeAppl(sym_PrimT_3, term_f_8, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_1))))), (ATerm)ATmakeAppl(sym_Var_1, t_1), (ATerm) ATmakeAppl(sym_Op_2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_1)), not_null(k_1)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL;
  z_1 = t;
  if(match_cons(t, sym_Match_1))
    {
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
        t = z_1;
        t = new_0_0(t);
        f_2 = t;
        t = a_2;
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
          g_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_n_8, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_2))))));
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
              t = z_1;
              t = new_0_0(t);
              l_2 = t;
              t = a_2;
              {
                ATerm t_0 (ATerm t)
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
                  t = (ATerm) ATmakeAppl(sym_Var_1, l_2);
                  return(t);
                }
                t = pat_td_1_0(t_0, t);
                m_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_2)), not_null(j_2))));
              }
              ;
              LocalPopChoice(q_8);
            }
          else
            {
              t = o_8;
              {
                ATerm o_2 = NULL,p_2 = NULL,s_2 = NULL,u_2 = NULL;
                t = z_1;
                t = new_0_0(t);
                s_2 = t;
                t = a_2;
                {
                  ATerm a_1 (ATerm t)
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, s_2);
                    return(t);
                  }
                  t = pat_td_1_0(a_1, t);
                  u_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, s_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_2)), not_null(p_2)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm d_80 (ATerm), ATerm t)
{
  ATerm u_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_80(t);
      ;
      LocalPopChoice(z_8);
    }
  else
    {
      t = u_8;
      {
        ATerm p_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
        u_7 = t;
        if(match_cons(t, sym_Op_2))
          {
            v_7 = ATgetArgument(t, 0);
            w_7 = ATgetArgument(t, 1);
            {
              ATerm e_1 = NULL,i_1 = NULL,h_3 = NULL;
              t = SSLgetAnnotations(u_7);
              e_1 = t;
              t = w_7;
              {
                ATerm d_1 (ATerm t)
                {
                  t = pat_td_1_0(d_80, t);
                  return(t);
                }
                t = fetch_1_0(d_1, t);
                i_1 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, v_7, i_1);
                h_3 = t;
                t = SSLsetAnnotations(h_3, e_1);
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
                      ATerm s_1 = NULL,y_1 = NULL,i_3 = NULL;
                      t = SSLgetAnnotations(u_7);
                      s_1 = t;
                      t = w_7;
                      t = pat_td_1_0(d_80, t);
                      y_1 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, v_7, y_1);
                      i_3 = t;
                      t = SSLsetAnnotations(i_3, s_1);
                      ;
                      LocalPopChoice(c_9);
                    }
                  else
                    {
                      t = a_9;
                      {
                        ATerm w_2 = NULL,z_2 = NULL,k_3 = NULL;
                        t = SSLgetAnnotations(u_7);
                        w_2 = t;
                        t = v_7;
                        t = pat_td_1_0(d_80, t);
                        z_2 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, z_2, w_7);
                        k_3 = t;
                        t = SSLsetAnnotations(k_3, w_2);
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
                      ATerm p_3 = NULL,y_3 = NULL,l_3 = NULL;
                      t = SSLgetAnnotations(u_7);
                      p_3 = t;
                      t = p_7;
                      {
                        ATerm f_1 (ATerm t)
                        {
                          t = pat_td_1_0(d_80, t);
                          return(t);
                        }
                        t = fetch_1_0(f_1, t);
                        y_3 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, v_7, w_7, y_3);
                        l_3 = t;
                        t = SSLsetAnnotations(l_3, p_3);
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
                          ATerm t_4 = NULL,e_5 = NULL,m_3 = NULL;
                          t = SSLgetAnnotations(u_7);
                          t_4 = t;
                          t = p_7;
                          {
                            ATerm g_1 (ATerm t)
                            {
                              t = pat_td_1_0(d_80, t);
                              return(t);
                            }
                            t = fetch_1_0(g_1, t);
                            e_5 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, v_7, w_7, e_5);
                            m_3 = t;
                            t = SSLsetAnnotations(m_3, t_4);
                          }
                        }
                      }
                    else
                      {
                        ATerm r_5 = NULL,h_6 = NULL,n_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            v_7 = ATgetArgument(t, 0);
                            w_7 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(u_7);
                        r_5 = t;
                        t = w_7;
                        t = pat_td_1_0(d_80, t);
                        h_6 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, v_7, h_6);
                        n_3 = t;
                        t = SSLsetAnnotations(n_3, r_5);
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
  i_8 = t;
  if(match_cons(t, sym_Build_1))
    {
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
        t = i_8;
        t = new_0_0(t);
        r_8 = t;
        t = j_8;
        {
          ATerm h_1 (ATerm t)
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
            t = (ATerm) ATmakeAppl(sym_Var_1, r_8);
            return(t);
          }
          t = pat_td_1_0(h_1, t);
          s_8 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_9, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_8)), not_null(k_8))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_8)))), (ATerm) ATmakeAppl(sym_Build_1, s_8)));
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
              t = i_8;
              t = new_0_0(t);
              v_8 = t;
              t = j_8;
              {
                ATerm j_1 (ATerm t)
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
                  t = (ATerm) ATmakeAppl(sym_Var_1, v_8);
                  return(t);
                }
                t = pat_td_1_0(j_1, t);
                w_8 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_8), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_8)))), (ATerm) ATmakeAppl(sym_Build_1, w_8)));
              }
              ;
              LocalPopChoice(j_9);
            }
          else
            {
              t = i_9;
              {
                ATerm y_8 = NULL,b_9 = NULL,d_9 = NULL,e_9 = NULL;
                t = i_8;
                t = new_0_0(t);
                d_9 = t;
                t = j_8;
                {
                  ATerm m_1 (ATerm t)
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, d_9);
                    return(t);
                  }
                  t = pat_td_1_0(m_1, t);
                  e_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_9), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(y_8), not_null(b_9), (ATerm) ATmakeAppl(sym_Var_1, d_9))), (ATerm) ATmakeAppl(sym_Build_1, e_9)));
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
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_6 = NULL,x_6 = NULL,y_6 = NULL,b_7 = NULL,f_7 = NULL,l_7 = NULL,q_7 = NULL,g_4 = NULL,d_4 = NULL;
        t = SSLgetAnnotations(b_11);
        f_7 = t;
        t = f_11;
        t = n_0(t);
        l_7 = t;
        t = (ATerm) ATinsert(CheckATermList(g_11), l_7);
        d_4 = t;
        t = SSLsetAnnotations(d_4, f_7);
        q_7 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_6 = ATgetFirst((ATermList) t);
            y_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_7);
        u_6 = t;
        t = y_6;
        {
          ATerm o_9 = t;
          int p_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(p_9);
            }
          else
            {
              t = o_9;
            }
          b_7 = t;
          t = (ATerm) ATinsert(CheckATermList(b_7), x_6);
          g_4 = t;
          t = SSLsetAnnotations(g_4, u_6);
        }
        ;
        LocalPopChoice(l_9);
      }
    else
      {
        t = k_9;
        {
          ATerm m_8 = NULL,x_8 = NULL,u_4 = NULL;
          t = SSLgetAnnotations(b_11);
          m_8 = t;
          t = g_11;
          t = map1_1_0(n_0, t);
          x_8 = t;
          t = (ATerm) ATinsert(CheckATermList(x_8), f_11);
          u_4 = t;
          t = SSLsetAnnotations(u_4, m_8);
        }
      }
  }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm i_13 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_9), term_t_9));
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  k_13 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_13 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, j_13, term_t_9);
    }
  else
    {
      t = k_13;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm e_14 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_14, term_t_9);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL;
  i_14 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_14 = ATgetArgument(t, 0);
      {
        ATerm u_9 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, h_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_9), term_t_9));
            ;
            LocalPopChoice(v_9);
          }
        else
          {
            t = u_9;
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
ATerm r_1 (ATerm t)
{
  ATerm g_15 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_9), term_t_9));
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  i_15 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_15 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, h_15, term_t_9);
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
              t = term_x_9;
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
                  t = term_x_9;
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
                      t = term_b_10;
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
                        t = map1_1_0(n_1, t);
                        f_13 = t;
                        t = i_12;
                        t = map1_1_0(o_1, t);
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
                            ATerm c_10 = t;
                            int d_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm x_13 = NULL,z_13 = NULL;
                                t = i_12;
                                t = map1_1_0(p_1, t);
                                x_13 = t;
                                t = l_12;
                                t = map_1_0(q_1, t);
                                z_13 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, k_12, z_13, x_13, h_12);
                                ;
                                LocalPopChoice(d_10);
                              }
                            else
                              {
                                t = c_10;
                                {
                                  ATerm b_15 = NULL,d_15 = NULL;
                                  t = l_12;
                                  t = map1_1_0(r_1, t);
                                  b_15 = t;
                                  t = i_12;
                                  t = map_1_0(u_1, t);
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
ATerm x_1 (ATerm t)
{
  ATerm e_10 = t;
  if((PushChoice() == 0))
    {
      ATerm r_17 = NULL,s_17 = NULL,u_17 = NULL,i_5 = NULL;
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
      i_5 = t;
      t = SSLsetAnnotations(i_5, r_17);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_10;
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_10;
  return(t);
}
ATerm c_2 (ATerm t)
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
ATerm h_2 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,f_18 = NULL,g_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_10 = ATgetArgument(t, 0);
      if(match_cons(g_10, sym__2))
        {
          z_17 = ATgetArgument(g_10, 0);
          a_18 = ATgetArgument(g_10, 1);
        }
      else
        _fail(t);
      {
        ATerm i_10 = ATgetArgument(t, 1);
        if(match_cons(i_10, sym__2))
          {
            f_18 = ATgetArgument(i_10, 0);
            g_18 = ATgetArgument(i_10, 1);
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
ATerm i_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_10;
  return(t);
}
ATerm k_2 (ATerm t)
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
ATerm n_2 (ATerm t)
{
  ATerm j_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      if(match_cons(l_10, sym__2))
        {
          j_18 = ATgetArgument(l_10, 0);
          m_18 = ATgetArgument(l_10, 1);
        }
      else
        _fail(t);
      {
        ATerm m_10 = ATgetArgument(t, 1);
        if(match_cons(m_10, sym__2))
          {
            n_18 = ATgetArgument(m_10, 0);
            o_18 = ATgetArgument(m_10, 1);
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
ATerm i_4 (ATerm v_23, ATerm w_23, ATerm x_23, ATerm t)
{
  ATerm d_17 = NULL,g_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,q_17 = NULL,l_5 = NULL;
  t = x_23;
  t = fetch_1_0(x_1, t);
  t = x_23;
  t = genzip_4_0(b_2, c_2, h_2, LiftPrimArg_0_0, t);
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
  t = genzip_4_0(i_2, k_2, n_2, _id, t);
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_17, n_17);
  l_5 = t;
  t = SSLsetAnnotations(l_5, j_17);
  if(match_cons(t, sym__2))
    {
      d_17 = ATgetArgument(t, 0);
      {
        ATerm n_10 = ATgetArgument(t, 1);
        if(match_cons(n_10, sym__2))
          {
            g_17 = ATgetArgument(n_10, 0);
            i_17 = ATgetArgument(n_10, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, d_17, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_17), (ATerm) ATmakeAppl(sym_CallT_3, v_23, w_23, i_17)));
  return(t);
}
ATerm genzip_4_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm t)
{
  ATerm k_19 (ATerm t)
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_86(t);
        ;
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        {
          ATerm r_18 = NULL,v_18 = NULL,a_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,t_5 = NULL;
          t = k_86(t);
          h_19 = t;
          if(match_cons(t, sym__2))
            {
              v_18 = ATgetArgument(t, 0);
              a_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_19);
          r_18 = t;
          t = v_18;
          t = m_86(t);
          f_19 = t;
          t = a_19;
          t = k_19(t);
          g_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_19, g_19);
          t_5 = t;
          t = SSLsetAnnotations(t_5, r_18);
          t = l_86(t);
        }
      }
    return(t);
  }
  t = k_19(t);
  return(t);
}
ATerm at_end_1_0 (ATerm o_88 (ATerm), ATerm t)
{
  ATerm h_21 (ATerm t)
  {
    ATerm l_20 = NULL,p_20 = NULL,s_20 = NULL;
    s_20 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_20 = ATgetFirst((ATermList) t);
        p_20 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_9 = NULL,r_9 = NULL,v_5 = NULL;
          t = SSLgetAnnotations(s_20);
          m_9 = t;
          t = p_20;
          t = h_21(t);
          r_9 = t;
          t = (ATerm) ATinsert(CheckATermList(r_9), l_20);
          v_5 = t;
          t = SSLsetAnnotations(v_5, m_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_20;
        t = o_88(t);
      }
    return(t);
  }
  t = h_21(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,o_21 = NULL;
  l_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_21;
    }
  else
    {
      ATerm q_2 (ATerm t)
      {
        t = not_null(o_21);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_21 = ATgetFirst((ATermList) t);
          if(((o_21 != NULL) && (o_21 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_21;
      t = at_end_1_0(q_2, t);
    }
  return(t);
}
ATerm j_25 (ATerm z_21, ATerm t)
{
  ATerm n_22 = NULL;
  t = z_21;
  {
    ATerm u_10 = t;
    if((PushChoice() == 0))
      {
        ATerm o_22 = NULL,p_22 = NULL,x_22 = NULL,x_5 = NULL;
        x_22 = t;
        if(match_cons(t, sym_Var_1))
          {
            p_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_22);
        o_22 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, p_22);
        x_5 = t;
        t = SSLsetAnnotations(x_5, o_22);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_10;
      }
    t = new_0_0(t);
    n_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, n_22), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_21), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_22)))), (ATerm) ATmakeAppl(sym_Var_1, n_22)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL;
  y_22 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_22 = ATgetArgument(t, 0);
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_25(y_22, t);
            ;
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATmakeAppl(sym_Var_1, z_22)));
          }
      }
    }
  else
    {
      t = j_25(y_22, t);
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm x_10 = t;
  if((PushChoice() == 0))
    {
      ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,z_5 = NULL;
      m_11 = t;
      if(match_cons(t, sym_Var_1))
        {
          l_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_11);
      k_11 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, l_11);
      z_5 = t;
      t = SSLsetAnnotations(z_5, k_11);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_10;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_10;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_11 = ATgetFirst((ATermList) t);
      o_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_11, o_11);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_10 = ATgetArgument(t, 0);
      if(match_cons(y_10, sym__2))
        {
          p_11 = ATgetArgument(y_10, 0);
          q_11 = ATgetArgument(y_10, 1);
        }
      else
        _fail(t);
      {
        ATerm z_10 = ATgetArgument(t, 1);
        if(match_cons(z_10, sym__2))
          {
            r_11 = ATgetArgument(z_10, 0);
            s_11 = ATgetArgument(z_10, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_11), p_11), (ATerm) ATinsert(CheckATermList(s_11), q_11));
  return(t);
}
ATerm y_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_10;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_11 = ATgetFirst((ATermList) t);
      u_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_11, u_11);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_11 = ATgetArgument(t, 0);
      if(match_cons(a_11, sym__2))
        {
          v_11 = ATgetArgument(a_11, 0);
          w_11 = ATgetArgument(a_11, 1);
        }
      else
        _fail(t);
      {
        ATerm h_11 = ATgetArgument(t, 1);
        if(match_cons(h_11, sym__2))
          {
            x_11 = ATgetArgument(h_11, 0);
            y_11 = ATgetArgument(h_11, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_11), v_11), (ATerm) ATinsert(CheckATermList(y_11), w_11));
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm i_11 = t;
  if((PushChoice() == 0))
    {
      ATerm w_13 = NULL,a_14 = NULL,b_14 = NULL,b_6 = NULL;
      b_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          a_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_14);
      w_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, a_14);
      b_6 = t;
      t = SSLsetAnnotations(b_6, w_13);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_11;
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_10;
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_14 = ATgetFirst((ATermList) t);
      d_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_14, d_14);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,j_14 = NULL,k_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_11 = ATgetArgument(t, 0);
      if(match_cons(z_11, sym__2))
        {
          f_14 = ATgetArgument(z_11, 0);
          g_14 = ATgetArgument(z_11, 1);
        }
      else
        _fail(t);
      {
        ATerm a_12 = ATgetArgument(t, 1);
        if(match_cons(a_12, sym__2))
          {
            j_14 = ATgetArgument(a_12, 0);
            k_14 = ATgetArgument(a_12, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_14), f_14), (ATerm) ATinsert(CheckATermList(k_14), g_14));
  return(t);
}
ATerm g_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_10;
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm l_14 = NULL,p_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_14 = ATgetFirst((ATermList) t);
      p_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_14, p_14);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm q_14 = NULL,s_14 = NULL,u_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_12 = ATgetArgument(t, 0);
      if(match_cons(d_12, sym__2))
        {
          q_14 = ATgetArgument(d_12, 0);
          s_14 = ATgetArgument(d_12, 1);
        }
      else
        _fail(t);
      {
        ATerm e_12 = ATgetArgument(t, 1);
        if(match_cons(e_12, sym__2))
          {
            u_14 = ATgetArgument(e_12, 0);
            v_14 = ATgetArgument(e_12, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_14), q_14), (ATerm) ATinsert(CheckATermList(v_14), s_14));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,z_30 = NULL;
  v_30 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      w_30 = ATgetArgument(t, 0);
      z_30 = ATgetArgument(t, 1);
      u_30 = ATgetArgument(t, 2);
      {
        ATerm j_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,j_11 = NULL,a_6 = NULL;
        t = u_30;
        t = fetch_1_0(r_2, t);
        t = u_30;
        t = genzip_4_0(t_2, v_2, x_2, LiftPrimArg_0_0, t);
        j_11 = t;
        if(match_cons(t, sym__2))
          {
            r_10 = ATgetArgument(t, 0);
            c_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_11);
        q_10 = t;
        t = r_10;
        t = concat_0_0(t);
        d_11 = t;
        t = c_11;
        t = genzip_4_0(y_2, a_3, b_3, _id, t);
        e_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_11, e_11);
        a_6 = t;
        t = SSLsetAnnotations(a_6, q_10);
        if(match_cons(t, sym__2))
          {
            j_10 = ATgetArgument(t, 0);
            {
              ATerm f_12 = ATgetArgument(t, 1);
              if(match_cons(f_12, sym__2))
                {
                  o_10 = ATgetArgument(f_12, 0);
                  p_10 = ATgetArgument(f_12, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_10), (ATerm) ATmakeAppl(sym_PrimT_3, w_30, z_30, p_10)));
      }
    }
  else
    {
      ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,q_13 = NULL,r_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,c_6 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          w_30 = ATgetArgument(t, 0);
          z_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_30;
      t = fetch_1_0(c_3, t);
      t = z_30;
      t = genzip_4_0(d_3, e_3, f_3, LiftPrimArg_0_0, t);
      v_13 = t;
      if(match_cons(t, sym__2))
        {
          q_13 = ATgetArgument(t, 0);
          r_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_13);
      b_13 = t;
      t = q_13;
      t = concat_0_0(t);
      t_13 = t;
      t = r_13;
      t = genzip_4_0(g_3, j_3, o_3, _id, t);
      u_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_13, u_13);
      c_6 = t;
      t = SSLsetAnnotations(c_6, b_13);
      if(match_cons(t, sym__2))
        {
          y_12 = ATgetArgument(t, 0);
          {
            ATerm g_12 = ATgetArgument(t, 1);
            if(match_cons(g_12, sym__2))
              {
                z_12 = ATgetArgument(g_12, 0);
                a_13 = ATgetArgument(g_12, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, y_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_12), (ATerm) ATmakeAppl(sym_PrimT_3, w_30, (ATerm)ATempty, a_13)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm n_31 (ATerm t)
  {
    ATerm j_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_99(t);
        t = n_31(t);
        ;
        LocalPopChoice(m_12);
      }
    else
      {
        t = j_12;
      }
    return(t);
  }
  t = n_31(t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,n_32 = NULL,p_32 = NULL;
  p_32 = t;
  if(match_cons(t, sym_Con_3))
    {
      j_32 = ATgetArgument(t, 0);
      k_32 = ATgetArgument(t, 1);
      n_32 = ATgetArgument(t, 2);
      {
        ATerm l_15 = NULL,p_6 = NULL;
        t = SSLgetAnnotations(p_32);
        l_15 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, j_32, k_32, n_32);
        p_6 = t;
        t = SSLsetAnnotations(p_6, l_15);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = p_32;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm n_12 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(q_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_12;
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  o_34 = t;
  if(match_cons(t, sym_Con_3))
    {
      p_34 = ATgetArgument(t, 0);
      q_34 = ATgetArgument(t, 1);
      n_34 = ATgetArgument(t, 2);
      {
        ATerm f_16 = NULL,t_6 = NULL;
        t = SSLgetAnnotations(o_34);
        f_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, p_34, q_34, n_34);
        t_6 = t;
        t = SSLsetAnnotations(t_6, f_16);
      }
    }
  else
    {
      ATerm w_16 = NULL,v_6 = NULL;
      if(match_cons(t, sym_App_2))
        {
          p_34 = ATgetArgument(t, 0);
          q_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_34);
      w_16 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, p_34, q_34);
      v_6 = t;
      t = SSLsetAnnotations(v_6, w_16);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm o_12 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(r_3, t);
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
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      w_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_34;
  if(match_cons(t, sym_StratRule_3))
    {
      x_34 = ATgetArgument(t, 0);
      y_34 = ATgetArgument(t, 1);
      z_34 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_34), (ATerm) ATmakeAppl(sym_Where_1, z_34)), x_34));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          x_34 = ATgetArgument(t, 0);
          y_34 = ATgetArgument(t, 1);
          z_34 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_34;
      t = pureterm_0_0(t);
      t = y_34;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, y_34)), (ATerm) ATmakeAppl(sym_Where_1, z_34)), (ATerm) ATmakeAppl(sym_Match_1, x_34)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm b_83 (ATerm), ATerm t)
{
  ATerm h_35 (ATerm t)
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_83(t);
        ;
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = SRTS_one(h_35, t);
      }
    return(t);
  }
  t = h_35(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm l_4 (ATerm p_18, ATerm s_18, ATerm t_18, ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
  t = new_0_0(t);
  m_35 = t;
  t = p_18;
  {
    ATerm s_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm r_12 = ATgetArgument(t, 0);
          if(match_cons(r_12, sym_Var_1))
            {
              if(((l_35 != NULL) && (l_35 != ATgetArgument(r_12, 0))))
                _fail(ATgetArgument(r_12, 0));
              else
                l_35 = ATgetArgument(r_12, 0);
            }
          else
            _fail(t);
          if(((j_35 != NULL) && (j_35 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_35 = ATgetArgument(t, 1);
          {
            ATerm s_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, l_35);
      return(t);
    }
    t = oncetd_1_0(s_3, t);
    n_35 = t;
    t = s_18;
    {
      ATerm t_3 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm t_12 = ATgetArgument(t, 0);
            if(match_cons(t_12, sym_Var_1))
              {
                if(((l_35 != NULL) && (l_35 != ATgetArgument(t_12, 0))))
                  _fail(ATgetArgument(t_12, 0));
                else
                  l_35 = ATgetArgument(t_12, 0);
              }
            else
              _fail(t);
            if(((k_35 != NULL) && (k_35 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              k_35 = ATgetArgument(t, 1);
            {
              ATerm u_12 = ATgetArgument(t, 2);
              if(match_cons(u_12, sym_CallT_3))
                {
                  if(((i_35 != NULL) && (i_35 != ATgetArgument(u_12, 0))))
                    _fail(ATgetArgument(u_12, 0));
                  else
                    i_35 = ATgetArgument(u_12, 0);
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
        t = (ATerm) ATmakeAppl(sym_Var_1, m_35);
        return(t);
      }
      t = oncetd_1_0(t_3, t);
      o_35 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_35), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, n_35, o_35, (ATerm) ATmakeAppl(sym_Seq_2, t_18, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(i_35), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_35), not_null(k_35), term_b_10))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_35)), (ATerm) ATmakeAppl(sym_Var_1, m_35))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm x_12 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_13 = t;
      int e_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL;
          e_36 = t;
          if(match_cons(t, sym_SRule_1))
            {
              f_36 = ATgetArgument(t, 0);
              t = f_36;
              if(match_cons(t, sym_Rule_3))
                {
                  b_36 = ATgetArgument(t, 0);
                  c_36 = ATgetArgument(t, 1);
                  d_36 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = e_36;
              t = l_4(b_36, c_36, d_36, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm w_17 = NULL,c_18 = NULL,a_7 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  f_36 = ATgetArgument(t, 0);
                  g_36 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(e_36);
              w_17 = t;
              t = g_36;
              t = desugarRule_0_0(t);
              c_18 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, f_36, c_18);
              a_7 = t;
              t = SSLsetAnnotations(a_7, w_17);
            }
          ;
          LocalPopChoice(e_13);
        }
      else
        {
          t = d_13;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(c_13);
    }
  else
    {
      t = x_12;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm x_81 (ATerm), ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    t = topdown_1_0(x_81, t);
    return(t);
  }
  t = x_81(t);
  t = SRTS_all(u_3, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm g_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = g_13;
    }
  t = repeat_1_0(w_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm o_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL;
            w_36 = t;
            if(match_cons(t, sym_CallT_3))
              {
                x_36 = ATgetArgument(t, 0);
                y_36 = ATgetArgument(t, 1);
                z_36 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = w_36;
            t = i_4(x_36, y_36, z_36, t);
            ;
            LocalPopChoice(p_13);
          }
        else
          {
            t = o_13;
            {
              ATerm s_13 = t;
              int y_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(y_13);
                }
              else
                {
                  t = s_13;
                  {
                    ATerm m_14 = t;
                    int n_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(n_14);
                      }
                    else
                      {
                        t = m_14;
                        {
                          ATerm o_14 = t;
                          int r_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_14 = t;
                              int w_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      e_37 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = e_37;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      f_37 = ATgetArgument(t, 0);
                                      {
                                        ATerm x_14 = t;
                                        int y_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm i_37 = NULL,j_37 = NULL;
                                            t = e_37;
                                            {
                                              ATerm x_3 (ATerm t)
                                              {
                                                if(match_cons(t, sym_RootApp_1))
                                                  {
                                                    ATerm z_14 = ATgetArgument(t, 0);
                                                    if(match_cons(z_14, sym_Match_1))
                                                      {
                                                        if(((i_37 != NULL) && (i_37 != ATgetArgument(z_14, 0))))
                                                          _fail(ATgetArgument(z_14, 0));
                                                        else
                                                          i_37 = ATgetArgument(z_14, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = i_37;
                                                return(t);
                                              }
                                              t = pat_td_1_0(x_3, t);
                                              j_37 = t;
                                              t = (ATerm) ATmakeAppl(sym_Match_1, j_37);
                                            }
                                            ;
                                            LocalPopChoice(y_14);
                                          }
                                        else
                                          {
                                            t = x_14;
                                            t = f_37;
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          f_37 = ATgetArgument(t, 0);
                                          g_37 = ATgetArgument(t, 1);
                                          {
                                            ATerm a_15 = t;
                                            int c_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm m_37 = NULL,n_37 = NULL;
                                                t = e_37;
                                                {
                                                  ATerm z_3 (ATerm t)
                                                  {
                                                    if(match_cons(t, sym_RootApp_1))
                                                      {
                                                        ATerm e_15 = ATgetArgument(t, 0);
                                                        if(match_cons(e_15, sym_Match_1))
                                                          {
                                                            if(((m_37 != NULL) && (m_37 != ATgetArgument(e_15, 0))))
                                                              _fail(ATgetArgument(e_15, 0));
                                                            else
                                                              m_37 = ATgetArgument(e_15, 0);
                                                          }
                                                        else
                                                          _fail(t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = m_37;
                                                    return(t);
                                                  }
                                                  t = pat_td_1_0(z_3, t);
                                                  n_37 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, n_37);
                                                }
                                                ;
                                                LocalPopChoice(c_15);
                                              }
                                            else
                                              {
                                                t = a_15;
                                                t = (ATerm) ATmakeAppl(sym_BA_2, f_37, g_37);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm r_37 = NULL,s_37 = NULL;
                                          t = e_37;
                                          {
                                            ATerm a_4 (ATerm t)
                                            {
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  ATerm f_15 = ATgetArgument(t, 0);
                                                  if(match_cons(f_15, sym_Match_1))
                                                    {
                                                      if(((r_37 != NULL) && (r_37 != ATgetArgument(f_15, 0))))
                                                        _fail(ATgetArgument(f_15, 0));
                                                      else
                                                        r_37 = ATgetArgument(f_15, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                              t = r_37;
                                              return(t);
                                            }
                                            t = pat_td_1_0(a_4, t);
                                            s_37 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, s_37);
                                          }
                                        }
                                    }
                                  ;
                                  LocalPopChoice(w_14);
                                }
                              else
                                {
                                  t = t_14;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(r_14);
                            }
                          else
                            {
                              t = o_14;
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
ATerm map_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm h_38 (ATerm t)
  {
    ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
    e_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_38;
      }
    else
      {
        ATerm y_18 = NULL,c_19 = NULL,d_19 = NULL,d_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_38 = ATgetFirst((ATermList) t);
            g_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_38);
        y_18 = t;
        t = f_38;
        t = y_87(t);
        c_19 = t;
        t = g_38;
        t = h_38(t);
        d_19 = t;
        t = (ATerm) ATinsert(CheckATermList(d_19), c_19);
        d_7 = t;
        t = SSLsetAnnotations(d_7, y_18);
      }
    return(t);
  }
  t = h_38(t);
  return(t);
}
ATerm Cons_2_0 (ATerm k_66 (ATerm), ATerm l_66 (ATerm), ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,g_7 = NULL;
  q_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_38 = ATgetFirst((ATermList) t);
      l_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_38);
  j_38 = t;
  t = k_38;
  t = k_66(t);
  o_38 = t;
  t = l_38;
  t = l_66(t);
  p_38 = t;
  t = (ATerm) ATinsert(CheckATermList(p_38), o_38);
  g_7 = t;
  t = SSLsetAnnotations(g_7, j_38);
  return(t);
}
ATerm m_4 (ATerm b_51, ATerm c_51, ATerm t)
{
  ATerm r_38 = NULL;
  t = SSL_fputc(b_51, c_51);
  r_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_38);
  return(t);
}
ATerm n_4 (ATerm p_54, ATerm q_54, ATerm t)
{
  ATerm s_38 = NULL;
  t = SSL_write_term_to_stream_text(p_54, q_54);
  s_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_38);
  return(t);
}
ATerm p_4 (ATerm x_103 (ATerm), ATerm p_491, ATerm t_54, ATerm t)
{
  ATerm t_38 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_491, term_j_15);
  t = open_stream_0_0(t);
  t_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_38, t_54);
  t = x_103(t);
  t = fclose_0_0(t);
  t = t_54;
  return(t);
}
ATerm o_4 (ATerm l_54, ATerm m_54, ATerm t)
{
  ATerm u_38 = NULL;
  t = SSL_write_term_to_stream_baf(l_54, m_54);
  u_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_38);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_15 = ATgetArgument(t, 0);
      if(match_cons(k_15, sym_Stream_1))
        {
          x_38 = ATgetArgument(k_15, 0);
        }
      else
        _fail(t);
      y_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_4(x_38, y_38, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_15 = ATgetArgument(t, 0);
      if(match_cons(m_15, sym_Stream_1))
        {
          c_39 = ATgetArgument(m_15, 0);
        }
      else
        _fail(t);
      d_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(c_39, d_39, t);
  z_38 = t;
  t = term_n_15;
  a_39 = t;
  t = z_38;
  if(match_cons(t, sym_Stream_1))
    {
      b_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_15, z_38);
  t = m_4(a_39, b_39, t);
  return(t);
}
ATerm output_1_0 (ATerm g_108 (ATerm), ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL;
  t = g_108(t);
  w_38 = t;
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
    v_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_38, w_38);
    {
      ATerm s_15 = t;
      int t_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_u_15;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, v_38, w_38);
          LocalPopChoice(t_15);
          if(match_cons(t, sym__2))
            {
              ATerm v_15 = ATgetArgument(t, 0);
              ATerm w_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_4(b_4, v_38, w_38, t);
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
          t = p_4(c_4, v_38, w_38, t);
        }
    }
  }
  return(t);
}
ATerm r_39 (ATerm l_39, ATerm t)
{
  t = SSL_fclose(l_39);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL;
  p_39 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_39 = ATgetArgument(t, 0);
      {
        ATerm z_15 = t;
        int a_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_39);
            ;
            LocalPopChoice(a_16);
          }
        else
          {
            t = z_15;
            t = r_39(p_39, t);
          }
      }
    }
  else
    {
      t = r_39(p_39, t);
    }
  return(t);
}
ATerm q_4 (ATerm r_54, ATerm t)
{
  t = SSL_read_term_from_stream(r_54);
  return(t);
}
ATerm r_4 (ATerm d_51, ATerm e_51, ATerm t)
{
  ATerm t_39 = NULL;
  t = SSL_fopen(d_51, e_51);
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_39);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_39 = NULL;
  t = SSL_stdin_stream();
  u_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_39);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_39 = NULL;
  t = SSL_stdout_stream();
  v_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_39);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_39 = NULL;
  t = SSL_stderr_stream();
  w_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_39);
  return(t);
}
ATerm g_41 (ATerm c_40, ATerm t)
{
  ATerm d_40 = NULL;
  t = SSL_explode_term(c_40);
  if(match_cons(t, sym__2))
    {
      ATerm b_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_16 = ATgetArgument(t, 1);
        if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
          {
            d_40 = ATgetFirst((ATermList) c_16);
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
  t = d_40;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_40;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_40;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_40;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm h_41 (ATerm g_40, ATerm k_40, ATerm l_40, ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,r_40 = NULL,j_7 = NULL;
  t = SSLgetAnnotations(l_40);
  o_40 = t;
  t = g_40;
  if(match_cons(t, sym_Path_1))
    {
      r_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_40, k_40);
  j_7 = t;
  t = SSLsetAnnotations(j_7, o_40);
  if(match_cons(t, sym__2))
    {
      m_40 = ATgetArgument(t, 0);
      n_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(m_40, n_40, t);
  return(t);
}
ATerm i_41 (ATerm t_40, ATerm u_40, ATerm v_40, ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,b_41 = NULL,m_7 = NULL;
  t = SSLgetAnnotations(v_40);
  y_40 = t;
  t = SSL_is_string(t_40);
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_41, u_40);
  m_7 = t;
  t = SSLsetAnnotations(m_7, y_40);
  if(match_cons(t, sym__2))
    {
      w_40 = ATgetArgument(t, 0);
      x_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(w_40, x_40, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_16 = ATgetArgument(t, 0);
      ATerm g_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  d_41 = t;
  if(match_cons(t, sym__2))
    {
      e_41 = ATgetArgument(t, 0);
      f_41 = ATgetArgument(t, 1);
      {
        ATerm h_16 = t;
        int i_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_41(d_41, t);
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
                  t = h_41(e_41, f_41, d_41, t);
                  ;
                  LocalPopChoice(k_16);
                }
              else
                {
                  t = j_16;
                  t = i_41(e_41, f_41, d_41, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_41(d_41, t);
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_l_16;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_41 = NULL;
      m_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_41, term_o_16);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      t = debug_1_0(e_4, t);
      _fail(t);
    }
  k_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(l_41, t);
  j_41 = t;
  t = k_41;
  t = fclose_0_0(t);
  t = j_41;
  return(t);
}
ATerm input_1_0 (ATerm h_108 (ATerm), ATerm t)
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
  t = h_108(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  o_41 = t;
  t = term_t_16;
  t = whoami_0_0(t);
  p_41 = t;
  t = term_d_8;
  r_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_16), p_41), term_u_16);
  s_41 = t;
  t = SSL_printnl(r_41, s_41);
  t = term_x_16;
  q_41 = t;
  t = SSL_exit(q_41);
  t = o_41;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm u_41 = NULL;
  u_41 = t;
  if(match_string(t, "-k"))
    {
      t = u_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_41;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
  v_41 = t;
  t = SSL_string_to_int(v_41);
  w_41 = t;
  t = term_y_16;
  x_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_16, w_41);
  t = z_4(x_41, w_41, t);
  t = v_41;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_z_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_4, h_4, j_4, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm b_42 = NULL;
  b_42 = t;
  if(match_string(t, "-S"))
    {
      t = b_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_42;
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL;
  t = term_a_17;
  c_42 = t;
  t = term_b_17;
  d_42 = t;
  t = term_c_17;
  t = z_4(c_42, d_42, t);
  t = term_e_17;
  return(t);
}
ATerm a_5 (ATerm t)
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
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL;
  e_42 = t;
  t = SSL_string_to_int(e_42);
  f_42 = t;
  t = term_a_17;
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_17, f_42);
  t = z_4(g_42, f_42, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_42);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_h_17;
  return(t);
}
ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL;
  t = term_o_17;
  h_42 = t;
  t = term_t_16;
  i_42 = t;
  t = term_p_17;
  t = z_4(h_42, i_42, t);
  t = term_t_17;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_x_17;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, y_4, a_5, t);
      ;
      LocalPopChoice(d_18);
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
            t = Option_3_0(f_5, g_5, h_5, t);
          }
      }
    }
  return(t);
}
ATerm z_4 (ATerm s_55, ATerm t_55, ATerm t)
{
  ATerm j_42 = NULL;
  t = term_l_18;
  j_42 = t;
  t = SSL_table_put(j_42, s_55, t_55);
  t = (ATerm) ATmakeAppl(sym__3, term_l_18, s_55, t_55);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
      t = term_t_16;
      t = h_0(t);
      o_42 = t;
      t = term_q_18;
      p_42 = t;
      t = term_u_18;
      q_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_18, term_u_18, o_42);
      t = x_4(p_42, q_42, o_42, t);
      _fail(t);
    }
  else
    {
      ATerm t_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_42 = ATgetFirst((ATermList) t);
          n_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_42;
      t = d_0(t);
      t = term_t_16;
      t = g_0(t);
      t_42 = t;
      t = (ATerm) ATinsert(CheckATermList(n_42), t_42);
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm v_42 = NULL;
  v_42 = t;
  if(match_string(t, "-o"))
    {
      t = v_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_42;
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL;
  w_42 = t;
  t = term_q_15;
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_15, w_42);
  t = z_4(x_42, w_42, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_42);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_w_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_5, k_5, m_5, t);
  return(t);
}
ATerm x_4 (ATerm i_40, ATerm j_40, ATerm h_40, ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL;
  z_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_40, j_40);
  {
    ATerm x_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_19 = ATgetArgument(t, 0);
            ATerm e_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_40, j_40);
        t = w_4(i_40, j_40, t);
        ;
        LocalPopChoice(z_18);
      }
    else
      {
        t = x_18;
        t = (ATerm) ATempty;
      }
    a_43 = t;
    t = (ATerm) ATinsert(CheckATermList(a_43), h_40);
    b_43 = t;
    t = SSL_table_put(i_40, j_40, b_43);
    t = z_42;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
      t = term_t_16;
      t = m_0(t);
      m_43 = t;
      t = term_q_18;
      n_43 = t;
      t = term_u_18;
      o_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_18, term_u_18, m_43);
      t = x_4(n_43, o_43, m_43, t);
      _fail(t);
    }
  else
    {
      ATerm s_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_43 = ATgetFirst((ATermList) t);
          j_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_43;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_43 = ATgetFirst((ATermList) t);
          l_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_43;
      t = k_0(t);
      t = k_43;
      t = l_0(t);
      s_43 = t;
      t = (ATerm) ATinsert(CheckATermList(l_43), s_43);
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm u_43 = NULL;
  u_43 = t;
  if(match_string(t, "-i"))
    {
      t = u_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_43;
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL;
  v_43 = t;
  t = term_r_16;
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_16, v_43);
  t = z_4(w_43, v_43, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_43);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_i_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_5, o_5, p_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_16;
  t = whoami_0_0(t);
  x_43 = t;
  t = term_d_8;
  z_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_19), x_43);
  a_44 = t;
  t = SSL_printnl(z_43, a_44);
  t = term_x_16;
  y_43 = t;
  t = SSL_exit(y_43);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_19;
  t = get_config_0_0(t);
  return(t);
}
ATerm s_4 (ATerm m_38, ATerm n_38, ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_38, n_38);
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      t = SSL_addr(m_38, n_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
  c_44 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_44;
      t = z_92(t);
    }
  else
    {
      ATerm h_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_44 = ATgetFirst((ATermList) t);
          e_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_44;
      t = foldr_2_0(z_92, a_93, t);
      h_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_44, h_44);
      t = a_93(t);
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
ATerm s_5 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL;
  if(match_cons(t, sym__2))
    {
      c_20 = ATgetArgument(t, 0);
      d_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(c_20, d_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_44 = NULL,v_19 = NULL,z_19 = NULL;
  t = times_0_0(t);
  z_19 = t;
  t = SSL_explode_term(z_19);
  if(match_cons(t, sym__2))
    {
      ATerm o_19 = ATgetArgument(t, 0);
      v_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_19;
  t = foldr_2_0(q_5, s_5, t);
  k_44 = t;
  t = SSL_TicksToSeconds(k_44);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL;
  v_44 = t;
  if(match_cons(t, sym__2))
    {
      w_44 = ATgetArgument(t, 0);
      x_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_44;
        if((w_44 != t))
          {
            _fail(t);
          }
        t = v_44;
        ;
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = (ATerm) ATmakeAppl(sym__2, w_44, x_44);
        {
          ATerm r_19 = t;
          int s_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_44, x_44);
              ;
              LocalPopChoice(s_19);
            }
          else
            {
              t = r_19;
              t = SSL_gtr(w_44, x_44);
            }
          t = (ATerm) ATmakeAppl(sym__2, w_44, x_44);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  ATerm b_45 = NULL;
  b_45 = t;
  {
    ATerm t_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_45 = NULL;
        t = term_a_17;
        t = get_config_0_0(t);
        d_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_45, term_x_16);
        t = geq_0_0(t);
        t = b_45;
        t = h_105(t);
        ;
        LocalPopChoice(u_19);
      }
    else
      {
        t = t_19;
        t = b_45;
      }
  }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,i_45 = NULL,j_45 = NULL;
  t = run_time_0_0(t);
  f_45 = t;
  t = term_t_16;
  t = whoami_0_0(t);
  g_45 = t;
  t = term_d_8;
  i_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_19), f_45), term_w_19), g_45);
  j_45 = t;
  t = SSL_printnl(i_45, j_45);
  t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_19), f_45), term_w_19), g_45));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_45 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_17;
  k_45 = t;
  t = SSL_exit(k_45);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL;
  t_45 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_45;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_45 = ATgetArgument(t, 0);
          {
            ATerm u_20 = NULL,x_7 = NULL;
            t = SSLgetAnnotations(t_45);
            u_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_45);
            x_7 = t;
            t = SSLsetAnnotations(x_7, u_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_45;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_107 (ATerm), ATerm t)
{
  ATerm y_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_20);
    }
  else
    {
      t = y_19;
      t = fetch_1_0(w_5, t);
    }
  t = x_107(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_45 = ATgetFirst((ATermList) t);
      x_45 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_46 = NULL,c_46 = NULL;
        ATerm y_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_46)), not_null(c_46));
          return(t);
        }
        t = x_45;
        t = j_0(t);
        if(((b_46 != NULL) && (b_46 != t)))
          _fail(t);
        else
          b_46 = t;
        t = w_45;
        t = i_0(t);
        if(((c_46 != NULL) && (c_46 != t)))
          _fail(t);
        else
          c_46 = t;
        t = x_45;
        t = reverse_acc_2_0(i_0, y_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_16;
      t = j_0(t);
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,z_7 = NULL;
  i_46 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_46);
  g_46 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_46);
  z_7 = t;
  t = SSLsetAnnotations(z_7, g_46);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm k_46 = NULL;
  k_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_46), term_e_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL;
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
      t = fetch_1_0(d_6, t);
    }
  t = term_h_20;
  t = echo_0_0(t);
  t = term_q_18;
  e_46 = t;
  t = term_u_18;
  f_46 = t;
  t = term_i_20;
  t = w_4(e_46, f_46, t);
  t = reverse_acc_2_0(_id, e_6, t);
  t = map_1_0(f_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm h_47 (ATerm t)
  {
    ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
    e_47 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_47 = ATgetFirst((ATermList) t);
        g_47 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_20 = t;
      int k_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_21 = NULL,f_21 = NULL,b_8 = NULL;
          t = SSLgetAnnotations(e_47);
          c_21 = t;
          t = f_47;
          t = i_88(t);
          f_21 = t;
          t = (ATerm) ATinsert(CheckATermList(g_47), f_21);
          b_8 = t;
          t = SSLsetAnnotations(b_8, c_21);
          ;
          LocalPopChoice(k_20);
        }
      else
        {
          t = j_20;
          {
            ATerm v_21 = NULL,y_21 = NULL,c_8 = NULL;
            t = SSLgetAnnotations(e_47);
            v_21 = t;
            t = g_47;
            t = h_47(t);
            y_21 = t;
            t = (ATerm) ATinsert(CheckATermList(y_21), f_47);
            c_8 = t;
            t = SSLsetAnnotations(c_8, v_21);
          }
        }
    }
    return(t);
  }
  t = h_47(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
  l_47 = t;
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_47;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_20 = ATgetFirst((ATermList) t);
                ATerm q_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_47;
          }
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = (ATerm) ATinsert(ATempty, l_47);
      }
    m_47 = t;
    t = term_r_15;
    n_47 = t;
    t = SSL_printnl(n_47, m_47);
    t = l_47;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_19;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm v_4 (ATerm r_48, ATerm s_48, ATerm t)
{
  t = SSL_strcat(r_48, s_48);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm r_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(t_20);
    }
  else
    {
      t = r_20;
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = term_v_20;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_47 = NULL;
      x_47 = t;
      t = SSL_is_string(x_47);
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
            t = map_1_0(g_6, t);
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
            {
              ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
              d_48 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_48 = ATgetArgument(t, 0);
                  t = e_48;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_48 = ATgetArgument(t, 0);
                      t = e_48;
                      {
                        ATerm a_21 = t;
                        int b_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(b_21);
                          }
                        else
                          {
                            t = a_21;
                            t = debug_1_0(i_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_48 = NULL,k_48 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_48 = ATgetArgument(t, 0);
                          f_48 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_48;
                      t = eval_config_0_0(t);
                      j_48 = t;
                      t = f_48;
                      t = eval_config_0_0(t);
                      k_48 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
                      t = v_4(j_48, k_48, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm w_4 (ATerm z_41, ATerm a_42, ATerm t)
{
  t = SSL_table_get(z_41, a_42);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL;
  o_48 = t;
  t = term_l_18;
  p_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_18, o_48);
  t = w_4(p_48, o_48, t);
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_48 = NULL,t_48 = NULL;
        t = eval_config_0_0(t);
        q_48 = t;
        t = term_l_18;
        t_48 = t;
        t = SSL_table_put(t_48, o_48, q_48);
        t = q_48;
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
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
  ATerm w_48 = NULL,x_48 = NULL;
  t = term_g_21;
  w_48 = t;
  t = term_t_16;
  x_48 = t;
  t = term_i_21;
  t = z_4(w_48, x_48, t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_j_21;
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
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL;
  t = term_g_21;
  a_49 = t;
  t = term_t_16;
  b_49 = t;
  t = term_i_21;
  t = z_4(a_49, b_49, t);
  t = term_k_21;
  y_48 = t;
  t = term_t_16;
  z_48 = t;
  t = term_n_21;
  t = z_4(y_48, z_48, t);
  t = term_p_21;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_q_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_6, k_6, l_6, t);
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      t = Option_3_0(m_6, n_6, o_6, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_110 (ATerm), ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,l_49 = NULL,m_49 = NULL,n_9 = NULL;
  g_49 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_21;
        t = a_110(t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
      }
    t = g_49;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_49 = ATgetFirst((ATermList) t);
        j_49 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_49);
    h_49 = t;
    t = term_l_19;
    m_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_19, i_49);
    t = z_4(m_49, i_49, t);
    t = j_49;
    {
      ATerm w_49 (ATerm t)
      {
        ATerm x_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_22 = t;
            int c_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_49 = NULL;
                p_49 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_49;
                ;
                LocalPopChoice(c_22);
              }
            else
              {
                t = b_22;
                t = a_110(t);
                t = Cons_2_0(_id, w_49, t);
              }
            ;
            LocalPopChoice(a_22);
          }
        else
          {
            t = x_21;
            {
              ATerm s_49 = NULL,t_49 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_49 = ATgetFirst((ATermList) t);
                  t_49 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_49), (ATerm) ATmakeAppl(sym_Undefined_1, s_49));
            }
          }
        return(t);
      }
      t = w_49(t);
      l_49 = t;
      t = (ATerm) ATinsert(CheckATermList(l_49), (ATerm) ATmakeAppl(sym_Program_1, i_49));
      n_9 = t;
      t = SSLsetAnnotations(n_9, h_49);
    }
  }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm i_50 = NULL;
  i_50 = t;
  if(match_string(t, "--help"))
    {
      t = i_50;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_50;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_50;
        }
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL;
  t = term_b_20;
  j_50 = t;
  t = term_t_16;
  k_50 = t;
  t = term_d_22;
  t = z_4(j_50, k_50, t);
  t = term_e_22;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_f_22;
  return(t);
}
ATerm z_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_109 (ATerm), ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
  d_50 = t;
  t = term_q_18;
  f_50 = t;
  t = term_u_18;
  g_50 = t;
  t = (ATerm) ATempty;
  h_50 = t;
  t = SSL_table_put(f_50, g_50, h_50);
  t = d_50;
  {
    ATerm q_6 (ATerm t)
    {
      ATerm g_22 = t;
      int h_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_109(t);
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
                t = Option_3_0(r_6, s_6, w_6, t);
                ;
                LocalPopChoice(j_22);
              }
            else
              {
                t = i_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_6, t);
    {
      ATerm k_22 = t;
      int l_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_50 = NULL;
          r_50 = t;
          {
            ATerm m_22 = t;
            int q_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_22 = NULL;
                t = r_50;
                {
                  ATerm r_22 = t;
                  int t_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_b_20;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(t_22);
                    }
                  else
                    {
                      t = r_22;
                      t = fetch_1_0(z_6, t);
                    }
                  t = r_50;
                  t = default_system_usage_0_0(t);
                  t = term_b_17;
                  s_22 = t;
                  t = SSL_exit(s_22);
                }
                ;
                LocalPopChoice(q_22);
              }
            else
              {
                t = m_22;
                {
                  ATerm w_22 = NULL;
                  t = term_g_21;
                  t = get_config_0_0(t);
                  t = r_50;
                  t = default_system_about_0_0(t);
                  t = term_b_17;
                  w_22 = t;
                  t = SSL_exit(w_22);
                }
              }
          }
          ;
          LocalPopChoice(l_22);
        }
      else
        {
          t = k_22;
          {
            ATerm u_22 = t;
            int v_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
                ATerm c_7 (ATerm t)
                {
                  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,w_9 = NULL;
                  x_50 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      w_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_50);
                  v_50 = t;
                  t = w_50;
                  if(((b_50 != NULL) && (b_50 != t)))
                    _fail(t);
                  else
                    b_50 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, w_50);
                  w_9 = t;
                  t = SSLsetAnnotations(w_9, v_50);
                  return(t);
                }
                t = fetch_1_0(c_7, t);
                t = term_d_8;
                t_50 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_50)), term_a_23);
                u_50 = t;
                t = SSL_printnl(t_50, u_50);
                t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_50)), term_a_23));
                t = default_system_usage_0_0(t);
                t = term_x_16;
                s_50 = t;
                t = SSL_exit(s_50);
                ;
                LocalPopChoice(v_22);
              }
            else
              {
                t = u_22;
              }
          }
        }
      c_50 = t;
      t = term_q_18;
      e_50 = t;
      t = SSL_table_destroy(e_50);
      t = c_50;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL;
  t = parse_options_1_0(z_107, t);
  i_51 = t;
  t = term_b_23;
  l_51 = t;
  t = SSL_table_create(l_51);
  t = term_b_23;
  j_51 = t;
  t = term_c_23;
  k_51 = t;
  t = SSL_table_put(j_51, k_51, i_51);
  t = i_51;
  t = b_108(t);
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_108, t);
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        {
          ATerm f_23 = t;
          int h_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_108(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_23);
            }
          else
            {
              t = f_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      {
        ATerm l_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(m_23);
          }
        else
          {
            t = l_23;
            {
              ATerm n_23 = t;
              int o_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(i_7, k_7, n_7, t);
                  ;
                  LocalPopChoice(o_23);
                }
              else
                {
                  t = n_23;
                  {
                    ATerm p_23 = t;
                    int q_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(q_23);
                      }
                    else
                      {
                        t = p_23;
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
ATerm h_7 (ATerm t)
{
  t = input_1_0(o_7, t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL;
  t = term_u_15;
  q_51 = t;
  t = term_t_16;
  r_51 = t;
  t = term_r_23;
  t = z_4(q_51, r_51, t);
  t = term_s_23;
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = output_1_0(r_7, t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,k_10 = NULL,h_10 = NULL;
  a_52 = t;
  if(match_cons(t, sym_Specification_1))
    {
      u_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_52);
  t_51 = t;
  t = u_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_51 = ATgetFirst((ATermList) t);
      x_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_51);
  v_51 = t;
  t = x_51;
  t = Cons_2_0(s_7, t_7, t);
  y_51 = t;
  t = (ATerm) ATinsert(CheckATermList(y_51), w_51);
  h_10 = t;
  t = SSLsetAnnotations(h_10, v_51);
  z_51 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, z_51);
  k_10 = t;
  t = SSLsetAnnotations(k_10, t_51);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,a_10 = NULL;
  e_52 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      c_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_52);
  b_52 = t;
  t = c_52;
  t = map_1_0(y_7, t);
  d_52 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, d_52);
  a_10 = t;
  t = SSLsetAnnotations(a_10, b_52);
  return(t);
}
ATerm t_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm u_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL;
      b_53 = t;
      if(match_cons(t, sym_SDef_3))
        {
          c_53 = ATgetArgument(t, 0);
          d_53 = ATgetArgument(t, 1);
          e_53 = ATgetArgument(t, 2);
          {
            ATerm g_23 = NULL,k_23 = NULL,y_9 = NULL;
            t = SSLgetAnnotations(b_53);
            g_23 = t;
            t = e_53;
            t = desugar_0_0(t);
            k_23 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, c_53, d_53, k_23);
            y_9 = t;
            t = SSLsetAnnotations(y_9, g_23);
          }
        }
      else
        {
          ATerm y_23 = NULL,d_24 = NULL,z_9 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              c_53 = ATgetArgument(t, 0);
              d_53 = ATgetArgument(t, 1);
              e_53 = ATgetArgument(t, 2);
              f_53 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_53);
          y_23 = t;
          t = f_53;
          t = desugar_0_0(t);
          d_24 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, c_53, d_53, e_53, d_24);
          z_9 = t;
          t = SSLsetAnnotations(z_9, y_23);
        }
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = u_23;
      t = debug_1_0(a_8, t);
      _fail(t);
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_a_24;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(e_7, default_usage_0_0, _id, h_7, t);
  return(t);
}
