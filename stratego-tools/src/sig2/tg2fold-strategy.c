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
Symbol sym_Module_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Str_1;
Symbol sym_RootApp_1;
Symbol sym_Tuple_1;
Symbol sym_List_1;
Symbol sym_CallNoArgs_1;
Symbol sym_Choice_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Match_1;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDefNoArgs_2;
Symbol sym_SDef_3;
Symbol sym_TreeGrammar_1;
Symbol sym_NonTermRef_2;
Symbol sym_NonTermDec_3;
Symbol sym_Prod_2;
Symbol sym_NonTermRef_2;
Symbol sym_Param_1;
Symbol sym_String_0;
Symbol sym_Int_0;
Symbol sym_Id_1;
Symbol sym_NonTermRef_2;
Symbol sym_Param_1;
Symbol sym_String_0;
Symbol sym_Int_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
  ATprotectSymbol(sym_Tuple_1);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_TreeGrammar_1 = ATmakeSymbol("TreeGrammar", 1, ATfalse);
  ATprotectSymbol(sym_TreeGrammar_1);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_NonTermDec_3 = ATmakeSymbol("NonTermDec", 3, ATfalse);
  ATprotectSymbol(sym_NonTermDec_3);
  sym_Prod_2 = ATmakeSymbol("Prod", 2, ATfalse);
  ATprotectSymbol(sym_Prod_2);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_Param_1 = ATmakeSymbol("Param", 1, ATfalse);
  ATprotectSymbol(sym_Param_1);
  sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
  ATprotectSymbol(sym_String_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_Param_1 = ATmakeSymbol("Param", 1, ATfalse);
  ATprotectSymbol(sym_Param_1);
  sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
  ATprotectSymbol(sym_String_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_i_22;
ATerm term_h_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_j_19;
ATerm term_v_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_l_17;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_d_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_e_14;
ATerm term_x_13;
ATerm term_o_13;
ATerm term_j_13;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_l_9;
ATerm term_y_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_o_7;
ATerm term_m_7;
ATerm term_k_7;
void init_constant_terms (void)
{
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("to-s", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("is-string", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_8);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_b_8);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("is-int", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_8);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_e_8);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("to-", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("T2-", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("is-", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("fold-strategy", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_RootApp_1, term_x_9);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("cond", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_j_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("transform", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_l_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("children", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_o_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("nt", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Var_1, term_t_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_v_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("risky", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_10);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("concat-strings", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_h_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\nTransformation failed when trying to transform to ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Str_1, term_k_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n-------------\n", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Str_1, term_m_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_10);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_p_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\nExpected ", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Str_1, term_t_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol(", but found:\n-------------\n", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Str_1, term_v_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_10);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_y_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym__2, term_q_14, term_v_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__2, term_h_15, term_k_7);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__2, term_t_15, term_u_15);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym__2, term_d_18, term_k_7);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_k_7);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym__2, term_l_17, term_k_7);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_k_7);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm arg_to_fold_arg_0_0 (ATerm);
ATerm map_with_index_1_0 (ATerm g_91 (ATerm), ATerm);
ATerm o_4 (ATerm x_42, ATerm y_42, ATerm);
ATerm while_not_2_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm);
ATerm for_3_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm);
ATerm y_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm p_4 (ATerm i_30, ATerm k_30, ATerm m_30, ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm r_4 (ATerm e_30, ATerm);
ATerm _2_0 (ATerm y_64 (ATerm), ATerm z_64 (ATerm), ATerm);
ATerm u_4 (ATerm e_32, ATerm f_32, ATerm);
ATerm v_4 (ATerm u_50, ATerm v_50, ATerm);
ATerm x_4 (ATerm r_99 (ATerm), ATerm x_393, ATerm y_50, ATerm);
ATerm w_4 (ATerm q_50, ATerm r_50, ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm b_83 (ATerm), ATerm);
ATerm o_8 (ATerm i_8, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm y_4 (ATerm w_50, ATerm);
ATerm z_4 (ATerm g_32, ATerm h_32, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm v_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm t_89 (ATerm), ATerm);
ATerm t_4 (ATerm r_64, ATerm s_64, ATerm);
ATerm debug_1_0 (ATerm p_99 (ATerm), ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm a_110 (ATerm), ATerm);
ATerm y_1 (ATerm);
ATerm b_2 (ATerm);
ATerm e_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm g_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm f_5 (ATerm i_57, ATerm j_57, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_5 (ATerm n_44, ATerm o_44, ATerm m_44, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm e_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_5 (ATerm r_42, ATerm s_42, ATerm);
ATerm foldr_2_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_109 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm need_help_1_0 (ATerm z_83 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_89 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm c_5 (ATerm e_46, ATerm f_46, ATerm);
ATerm Program_1_0 (ATerm g_82 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm x_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm h_82 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm y_101 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm h_5 (ATerm);
ATerm j_5 (ATerm);
ATerm n_5 (ATerm);
ATerm parse_options_1_0 (ATerm x_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm);
ATerm g_6 (ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm w_6 (ATerm);
ATerm a_7 (ATerm);
ATerm iowrap_3_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,k_0 = NULL,q_0 = NULL,r_0 = NULL;
  b_0 = t;
  t = term_k_7;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_m_7;
  k_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_7), f_0), term_o_7);
  q_0 = t;
  t = SSL_printnl(k_0, q_0);
  t = term_w_7;
  r_0 = t;
  t = SSL_exit(r_0);
  t = b_0;
  return(t);
}
ATerm arg_to_fold_arg_0_0 (ATerm t)
{
  ATerm t_1 = NULL,z_1 = NULL,a_2 = NULL,f_2 = NULL;
  t_1 = t;
  if(match_cons(t, sym_Param_1))
    {
      z_1 = ATgetArgument(t, 0);
      {
        ATerm p_0 = NULL,u_0 = NULL,v_0 = NULL;
        t = SSL_int_to_string(z_1);
        u_0 = t;
        t = term_x_7;
        v_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_7, u_0);
        t = t_4(v_0, u_0, t);
        p_0 = t;
        t = (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, p_0));
      }
    }
  else
    {
      if(match_cons(t, sym_String_0))
        {
          t = term_c_8;
        }
      else
        {
          if(match_cons(t, sym_Int_0))
            {
              t = term_f_8;
            }
          else
            {
              ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL;
              if(match_cons(t, sym_NonTermRef_2))
                {
                  z_1 = ATgetArgument(t, 0);
                  f_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_1;
              if(match_cons(t, sym_Id_1))
                {
                  a_2 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_g_8;
              r_2 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_g_8, a_2);
              t = t_4(r_2, a_2, t);
              p_2 = t;
              t = f_2;
              t = map_1_0(arg_to_fold_arg_0_0, t);
              q_2 = t;
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_2), q_2);
            }
        }
    }
  return(t);
}
ATerm map_with_index_1_0 (ATerm g_91 (ATerm), ATerm t)
{
  ATerm x_2 = NULL;
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_7, x_2);
  {
    ATerm p_3 (ATerm t)
    {
      ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
      if(match_cons(t, sym__2))
        {
          a_3 = ATgetArgument(t, 0);
          b_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm k_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_3 = ATgetFirst((ATermList) t);
              d_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, a_3, c_3);
          t = g_91(t);
          k_3 = t;
          t = term_w_7;
          o_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_3, term_w_7);
          t = a_5(a_3, o_3, t);
          m_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_3, d_3);
          t = p_3(t);
          n_3 = t;
          t = (ATerm) ATinsert(CheckATermList(n_3), k_3);
        }
      return(t);
    }
    t = p_3(t);
  }
  return(t);
}
ATerm o_4 (ATerm x_42, ATerm y_42, ATerm t)
{
  ATerm h_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(x_42, y_42);
      ;
      LocalPopChoice(j_8);
    }
  else
    {
      t = h_8;
      t = SSL_subtr(x_42, y_42);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm k_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_102(t);
        ;
        LocalPopChoice(n_8);
      }
    else
      {
        t = k_8;
        t = u_102(t);
        t = q_3(t);
      }
    return(t);
  }
  t = q_3(t);
  return(t);
}
ATerm for_3_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm t)
{
  t = w_102(t);
  t = while_not_2_0(x_102, y_102, t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL;
  if(match_cons(t, sym__2))
    {
      u_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_3, v_3, (ATerm) ATempty);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm w_3 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm s_8 = ATgetArgument(t, 0);
      if(((ATgetType(s_8) != AT_INT) || (ATgetInt((ATermInt) s_8) != 0)))
        _fail(t);
      {
        ATerm u_8 = ATgetArgument(t, 1);
      }
      w_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_3;
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm y_3 = NULL,a_4 = NULL,b_4 = NULL,e_4 = NULL,f_4 = NULL;
  if(match_cons(t, sym__3))
    {
      y_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
      b_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_3, term_w_7);
  t = geq_0_0(t);
  t = term_w_7;
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_3, term_w_7);
  t = o_4(y_3, f_4, t);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_4, a_4, (ATerm) ATinsert(CheckATermList(b_4), a_4));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(y_0, a_1, b_1, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL;
  l_5 = t;
  t = SSL_explode_term(l_5);
  if(match_cons(t, sym__2))
    {
      ATerm v_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_8 = ATgetArgument(t, 1);
        if(((ATgetType(w_8) == AT_LIST) && !(ATisEmpty(w_8))))
          {
            m_5 = ATgetFirst((ATermList) w_8);
            {
              ATerm x_8 = (ATerm) ATgetNext((ATermList) w_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_5;
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
  p_5 = t;
  t = SSL_int_to_string(p_5);
  q_5 = t;
  t = term_x_7;
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_7, q_5);
  t = t_4(r_5, q_5, t);
  o_5 = t;
  t = SSL_is_string(o_5);
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_5);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_y_8;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm s_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,z_0 = NULL;
  s_5 = t;
  t = SSL_explode_term(s_5);
  if(match_cons(t, sym__2))
    {
      ATerm z_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_9 = ATgetArgument(t, 1);
        if(((ATgetType(a_9) == AT_LIST) && !(ATisEmpty(a_9))))
          {
            u_5 = ATgetFirst((ATermList) a_9);
            {
              ATerm b_9 = (ATerm) ATgetNext((ATermList) a_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_5;
  if(match_cons(t, sym_Prod_2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      if(match_cons(c_9, sym_Id_1))
        {
          v_5 = ATgetArgument(c_9, 0);
        }
      else
        _fail(t);
      w_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5;
  t = map_1_0(arg_to_fold_arg_0_0, t);
  x_5 = t;
  t = SSL_explode_term(s_5);
  if(match_cons(t, sym__2))
    {
      ATerm d_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_9 = ATgetArgument(t, 1);
        if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
          {
            ATerm f_9 = ATgetFirst((ATermList) e_9);
            ATerm g_9 = (ATerm) ATgetNext((ATermList) e_9);
            if(((ATgetType(g_9) == AT_LIST) && !(ATisEmpty(g_9))))
              {
                z_0 = ATgetFirst((ATermList) g_9);
                {
                  ATerm h_9 = (ATerm) ATgetNext((ATermList) g_9);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, v_5), x_5), z_0);
  return(t);
}
ATerm p_4 (ATerm i_30, ATerm k_30, ATerm m_30, ATerm t)
{
  ATerm n_4 = NULL,q_4 = NULL,s_4 = NULL,b_5 = NULL,e_5 = NULL,g_5 = NULL,i_5 = NULL,k_5 = NULL;
  t = term_l_9;
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_9, i_30);
  t = t_4(g_5, i_30, t);
  n_4 = t;
  t = term_q_9;
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_9, i_30);
  t = t_4(i_5, i_30, t);
  q_4 = t;
  t = term_g_8;
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_8, i_30);
  t = t_4(k_5, i_30, t);
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_30, term_k_7);
  t = copy_0_0(t);
  t = map_with_index_1_0(c_1, t);
  t = map_1_0(d_1, t);
  b_5 = t;
  t = m_30;
  t = foldr_2_0(e_1, f_1, t);
  e_5 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, s_4, b_5, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_w_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_5), (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, n_4))), (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, q_4)))), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_a_10), (ATerm) ATmakeAppl(sym_Str_1, i_30)))));
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL,d_6 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm e_10 = ATgetArgument(t, 0);
      if(match_cons(e_10, sym_Id_1))
        {
          a_6 = ATgetArgument(e_10, 0);
        }
      else
        _fail(t);
      {
        ATerm f_10 = ATgetArgument(t, 1);
      }
      {
        ATerm g_10 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = term_l_9;
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_9, a_6);
  t = t_4(d_6, a_6, t);
  b_6 = t;
  t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, b_6, term_y_8);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm f_6 = NULL,h_6 = NULL,i_6 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm h_10 = ATgetArgument(t, 0);
      if(match_cons(h_10, sym_Id_1))
        {
          f_6 = ATgetArgument(h_10, 0);
        }
      else
        _fail(t);
      h_6 = ATgetArgument(t, 1);
      i_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_4(f_6, h_6, i_6, t);
  return(t);
}
ATerm r_4 (ATerm e_30, ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL;
  t = e_30;
  t = map_1_0(g_1, t);
  y_5 = t;
  t = e_30;
  t = map_1_0(h_1, t);
  z_5 = t;
  t = (ATerm) ATmakeAppl(sym_Module_2, term_i_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_t_9, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_p_10), term_n_10), term_k_10), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_a_10), term_u_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, term_y_10, term_x_9, (ATerm) ATmakeAppl(sym_Call_2, term_a_11, (ATerm) ATinsert(ATinsert(ATempty, term_r_11), (ATerm) ATmakeAppl(sym_BA_2, term_i_11, (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_11), term_u_10), term_l_11)))))), (ATerm) ATmakeAppl(sym_Call_2, term_a_11, (ATerm) ATinsert(ATinsert(ATempty, term_z_11), (ATerm) ATmakeAppl(sym_BA_2, term_i_11, (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_11), term_u_10), term_u_11))))))))))), (ATerm) ATmakeAppl(sym_Strategies_1, y_5)), (ATerm) ATmakeAppl(sym_Strategies_1, z_5)));
  return(t);
}
ATerm _2_0 (ATerm y_64 (ATerm), ATerm z_64 (ATerm), ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,l_0 = NULL,m_0 = NULL;
  o_6 = t;
  if(match_cons(t, sym__2))
    {
      k_6 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_6);
  j_6 = t;
  t = k_6;
  t = y_64(t);
  m_6 = t;
  t = l_6;
  t = z_64(t);
  n_6 = t;
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_6, n_6);
  l_0 = t;
  t = SSLsetAnnotations(l_0, j_6);
  return(t);
}
ATerm u_4 (ATerm e_32, ATerm f_32, ATerm t)
{
  ATerm r_6 = NULL;
  t = SSL_fputc(e_32, f_32);
  r_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_6);
  return(t);
}
ATerm v_4 (ATerm u_50, ATerm v_50, ATerm t)
{
  ATerm t_6 = NULL;
  t = SSL_write_term_to_stream_text(u_50, v_50);
  t_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_6);
  return(t);
}
ATerm x_4 (ATerm r_99 (ATerm), ATerm x_393, ATerm y_50, ATerm t)
{
  ATerm u_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_393, term_a_12);
  t = open_stream_0_0(t);
  u_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_6, y_50);
  t = r_99(t);
  t = fclose_0_0(t);
  t = y_50;
  return(t);
}
ATerm w_4 (ATerm q_50, ATerm r_50, ATerm t)
{
  ATerm v_6 = NULL;
  t = SSL_write_term_to_stream_baf(q_50, r_50);
  v_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_6);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = fetch_1_0(n_1, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL;
  if(match_cons(t, sym__2))
    {
      b_7 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(p_1, b_7, c_7, t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm d_7 = NULL,f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_12 = ATgetArgument(t, 0);
      if(match_cons(e_12, sym_Stream_1))
        {
          d_7 = ATgetArgument(e_12, 0);
        }
      else
        _fail(t);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4(d_7, f_7, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL;
  if(match_cons(t, sym__2))
    {
      g_7 = ATgetArgument(t, 0);
      h_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(r_1, g_7, h_7, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm l_7 = NULL,n_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_12 = ATgetArgument(t, 0);
      if(match_cons(i_12, sym_Stream_1))
        {
          n_7 = ATgetArgument(i_12, 0);
        }
      else
        _fail(t);
      p_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4(n_7, p_7, t);
  l_7 = t;
  t = term_j_12;
  q_7 = t;
  t = l_7;
  if(match_cons(t, sym_Stream_1))
    {
      r_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_12, l_7);
  t = u_4(q_7, r_7, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL;
  x_6 = t;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm k_12 = t;
      int l_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((y_6 != NULL) && (y_6 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_6 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_1, t);
          ;
          LocalPopChoice(l_12);
        }
      else
        {
          t = k_12;
          t = term_m_12;
          if(((y_6 != NULL) && (y_6 != t)))
            _fail(t);
          else
            y_6 = t;
        }
      return(t);
    }
    t = _2_0(i_1, _id, t);
    t = x_6;
    {
      ATerm k_1 (ATerm t)
      {
        ATerm z_6 = NULL;
        z_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_6), z_6);
        return(t);
      }
      t = _2_0(_id, k_1, t);
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(l_1, m_1, t);
            ;
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
            t = _2_0(_id, q_1, t);
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
ATerm apply_strategy_1_0 (ATerm b_83 (ATerm), ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL,y_7 = NULL,z_7 = NULL;
  s_7 = t;
  t = dtime_0_0(t);
  t = s_7;
  t = b_83(t);
  t_7 = t;
  t = dtime_0_0(t);
  u_7 = t;
  t = t_7;
  if(match_cons(t, sym__2))
    {
      y_7 = ATgetArgument(t, 0);
      z_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_7), (ATerm) ATmakeAppl(sym_Runtime_1, u_7)), z_7);
  return(t);
}
ATerm o_8 (ATerm i_8, ATerm t)
{
  t = SSL_fclose(i_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL;
  m_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_8 = ATgetArgument(t, 0);
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_8);
            ;
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            t = o_8(m_8, t);
          }
      }
    }
  else
    {
      t = o_8(m_8, t);
    }
  return(t);
}
ATerm y_4 (ATerm w_50, ATerm t)
{
  t = SSL_read_term_from_stream(w_50);
  return(t);
}
ATerm z_4 (ATerm g_32, ATerm h_32, ATerm t)
{
  ATerm p_8 = NULL;
  t = SSL_fopen(g_32, h_32);
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_8);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_8 = NULL;
  t = SSL_stdin_stream();
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_8 = NULL;
  t = SSL_stdout_stream();
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_8 = NULL;
  t = SSL_stderr_stream();
  t_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_8);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm m_9 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      m_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_9;
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm p_9 = NULL;
  p_9 = t;
  t = SSL_is_string(p_9);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_12 = ATgetArgument(t, 0);
      ATerm z_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL,o_1 = NULL;
        i_9 = t;
        t = SSL_explode_term(i_9);
        if(match_cons(t, sym__2))
          {
            ATerm d_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_13 = ATgetArgument(t, 1);
              if(((ATgetType(e_13) == AT_LIST) && !(ATisEmpty(e_13))))
                {
                  o_1 = ATgetFirst((ATermList) e_13);
                  {
                    ATerm f_13 = (ATerm) ATgetNext((ATermList) e_13);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = o_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = o_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = o_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(c_13);
      }
    else
      {
        t = a_13;
        {
          ATerm g_13 = t;
          int h_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_9 = NULL,k_9 = NULL;
              t = _2_0(s_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  j_9 = ATgetArgument(t, 0);
                  k_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_4(j_9, k_9, t);
              ;
              LocalPopChoice(h_13);
            }
          else
            {
              t = g_13;
              {
                ATerm n_9 = NULL,o_9 = NULL;
                t = _2_0(u_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    n_9 = ATgetArgument(t, 0);
                    o_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_4(n_9, o_9, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_j_13;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,u_9 = NULL;
  ATerm l_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_9 = NULL;
      v_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_9, term_o_13);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = l_13;
      t = debug_1_0(v_1, t);
      _fail(t);
    }
  r_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_4(u_9, t);
  s_9 = t;
  t = r_9;
  t = fclose_0_0(t);
  t = s_9;
  return(t);
}
ATerm fetch_1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm y_9 (ATerm t)
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(t_89, _id, t);
        ;
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        t = Cons_2_0(_id, y_9, t);
      }
    return(t);
  }
  t = y_9(t);
  return(t);
}
ATerm t_4 (ATerm r_64, ATerm s_64, ATerm t)
{
  t = SSL_strcat(r_64, s_64);
  return(t);
}
ATerm debug_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm z_9 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL;
  z_9 = t;
  t = p_99(t);
  b_10 = t;
  t = term_m_7;
  c_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_9), b_10);
  d_10 = t;
  t = SSL_printnl(c_10, d_10);
  t = z_9;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_10 = NULL;
      m_10 = t;
      t = SSL_is_string(m_10);
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
            t = map_1_0(w_1, t);
            ;
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            {
              ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
              q_10 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_10 = ATgetArgument(t, 0);
                  t = r_10;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_10 = ATgetArgument(t, 0);
                      t = r_10;
                      {
                        ATerm c_14 = t;
                        int d_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(d_14);
                          }
                        else
                          {
                            t = c_14;
                            t = debug_1_0(x_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_10 = NULL,x_10 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_10 = ATgetArgument(t, 0);
                          s_10 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_10;
                      t = eval_config_0_0(t);
                      w_10 = t;
                      t = s_10;
                      t = eval_config_0_0(t);
                      x_10 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_10, x_10);
                      t = t_4(w_10, x_10, t);
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
  ATerm b_11 = NULL,c_11 = NULL;
  b_11 = t;
  t = term_e_14;
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_14, b_11);
  t = c_5(c_11, b_11, t);
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_11 = NULL,e_11 = NULL;
        t = eval_config_0_0(t);
        d_11 = t;
        t = term_e_14;
        e_11 = t;
        t = SSL_table_put(e_11, b_11, d_11);
        t = d_11;
        ;
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_110 (ATerm), ATerm t)
{
  ATerm l_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_11 = NULL,j_11 = NULL;
      f_11 = t;
      t = term_q_14;
      t = get_config_0_0(t);
      j_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_11, term_r_14);
      t = geq_0_0(t);
      t = f_11;
      t = a_110(t);
      ;
      LocalPopChoice(m_14);
    }
  else
    {
      t = l_14;
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm n_11 = NULL;
  n_11 = t;
  if(match_string(t, "-k"))
    {
      t = n_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_11;
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm q_11 = NULL,s_11 = NULL,x_11 = NULL;
  q_11 = t;
  t = SSL_string_to_int(q_11);
  s_11 = t;
  t = term_s_14;
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_14, s_11);
  t = f_5(x_11, s_11, t);
  t = q_11;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_t_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_1, b_2, e_2, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm b_12 = NULL;
  b_12 = t;
  if(match_string(t, "-S"))
    {
      t = b_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_12;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL;
  t = term_q_14;
  c_12 = t;
  t = term_v_14;
  d_12 = t;
  t = term_w_14;
  t = f_5(c_12, d_12, t);
  t = term_y_14;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_z_14;
  return(t);
}
ATerm l_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
  f_12 = t;
  t = SSL_string_to_int(f_12);
  g_12 = t;
  t = term_q_14;
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_14, g_12);
  t = f_5(h_12, g_12, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_12);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_d_15;
  return(t);
}
ATerm o_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL;
  t = term_h_15;
  p_12 = t;
  t = term_k_7;
  q_12 = t;
  t = term_i_15;
  t = f_5(p_12, q_12, t);
  t = term_l_15;
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_m_15;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_2, j_2, k_2, t);
      ;
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      {
        ATerm q_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_2, m_2, n_2, t);
            ;
            LocalPopChoice(r_15);
          }
        else
          {
            t = q_15;
            t = Option_3_0(o_2, s_2, t_2, t);
          }
      }
    }
  return(t);
}
ATerm f_5 (ATerm i_57, ATerm j_57, ATerm t)
{
  ATerm r_12 = NULL;
  t = term_e_14;
  r_12 = t;
  t = SSL_table_put(r_12, i_57, j_57);
  t = (ATerm) ATmakeAppl(sym__3, term_e_14, i_57, j_57);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_12 = NULL,y_12 = NULL,b_13 = NULL;
      t = term_k_7;
      t = d_0(t);
      w_12 = t;
      t = term_t_15;
      y_12 = t;
      t = term_u_15;
      b_13 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_15, term_u_15, w_12);
      t = d_5(y_12, b_13, w_12, t);
      _fail(t);
    }
  else
    {
      ATerm i_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_12 = ATgetFirst((ATermList) t);
          v_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_12;
      t = a_0(t);
      t = term_k_7;
      t = c_0(t);
      i_13 = t;
      t = (ATerm) ATinsert(CheckATermList(v_12), i_13);
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm k_13 = NULL;
  k_13 = t;
  if(match_string(t, "-o"))
    {
      t = k_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_13;
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm m_13 = NULL,p_13 = NULL;
  m_13 = t;
  t = term_v_15;
  p_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_15, m_13);
  t = f_5(p_13, m_13, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_13);
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_w_15;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_2, v_2, w_2, t);
  return(t);
}
ATerm d_5 (ATerm n_44, ATerm o_44, ATerm m_44, ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_44, o_44);
  {
    ATerm x_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_15 = ATgetArgument(t, 0);
            ATerm a_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_44, o_44);
        t = c_5(n_44, o_44, t);
        ;
        LocalPopChoice(y_15);
      }
    else
      {
        t = x_15;
        t = (ATerm) ATempty;
      }
    t_13 = t;
    t = (ATerm) ATinsert(CheckATermList(t_13), m_44);
    u_13 = t;
    t = SSL_table_put(n_44, o_44, u_13);
    t = s_13;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
      t = term_k_7;
      t = j_0(t);
      n_14 = t;
      t = term_t_15;
      o_14 = t;
      t = term_u_15;
      p_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_15, term_u_15, n_14);
      t = d_5(o_14, p_14, n_14, t);
      _fail(t);
    }
  else
    {
      ATerm u_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_14 = ATgetFirst((ATermList) t);
          i_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_14 = ATgetFirst((ATermList) t);
          k_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_14;
      t = h_0(t);
      t = j_14;
      t = i_0(t);
      u_14 = t;
      t = (ATerm) ATinsert(CheckATermList(k_14), u_14);
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm x_14 = NULL;
  x_14 = t;
  if(match_string(t, "-i"))
    {
      t = x_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_14;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL;
  a_15 = t;
  t = term_b_16;
  b_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_16, a_15);
  t = f_5(b_15, a_15, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_15);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_c_16;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, z_2, e_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_7;
  t = whoami_0_0(t);
  c_15 = t;
  t = term_m_7;
  e_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_16), c_15);
  f_15 = t;
  t = SSL_printnl(e_15, f_15);
  t = term_w_7;
  g_15 = t;
  t = SSL_exit(g_15);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_16;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_5 (ATerm r_42, ATerm s_42, ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_42, s_42);
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      t = SSL_addr(r_42, s_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm t)
{
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_96(t);
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      {
        ATerm j_15 = NULL,k_15 = NULL,p_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_15 = ATgetFirst((ATermList) t);
            k_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_15;
        t = foldr_2_0(b_96, c_96, t);
        p_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_15, p_15);
        t = c_96(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_v_14;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL;
  if(match_cons(t, sym__2))
    {
      h_2 = ATgetArgument(t, 0);
      i_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_5(h_2, i_2, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_15 = NULL,c_2 = NULL,d_2 = NULL;
  t = times_0_0(t);
  c_2 = t;
  t = SSL_explode_term(c_2);
  if(match_cons(t, sym__2))
    {
      ATerm j_16 = ATgetArgument(t, 0);
      d_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_2;
  t = foldr_2_0(f_3, g_3, t);
  s_15 = t;
  t = SSL_TicksToSeconds(s_15);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_16 = NULL,m_16 = NULL,n_16 = NULL;
  k_16 = t;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_16;
        if((m_16 != t))
          {
            _fail(t);
          }
        t = k_16;
        ;
        LocalPopChoice(o_16);
      }
    else
      {
        t = l_16;
        t = (ATerm) ATmakeAppl(sym__2, m_16, n_16);
        {
          ATerm p_16 = t;
          int q_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_16, n_16);
              ;
              LocalPopChoice(q_16);
            }
          else
            {
              t = p_16;
              t = SSL_gtr(m_16, n_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_16, n_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_109 (ATerm), ATerm t)
{
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_16 = NULL,v_16 = NULL;
      r_16 = t;
      t = term_q_14;
      t = get_config_0_0(t);
      v_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_16, term_w_7);
      t = geq_0_0(t);
      t = r_16;
      t = z_109(t);
      ;
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
  t = run_time_0_0(t);
  x_16 = t;
  t = term_k_7;
  t = whoami_0_0(t);
  y_16 = t;
  t = term_m_7;
  z_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_16), x_16), term_u_16), y_16);
  a_17 = t;
  t = SSL_printnl(z_16, a_17);
  t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_16), x_16), term_u_16), y_16));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_17 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_14;
  b_17 = t;
  t = SSL_exit(b_17);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm c_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = c_17;
      {
        ATerm g_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(i_17);
          }
        else
          {
            t = g_17;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      t = fetch_1_0(i_3, t);
    }
  t = z_83(t);
  return(t);
}
ATerm map_1_0 (ATerm j_89 (ATerm), ATerm t)
{
  ATerm d_17 (ATerm t)
  {
    ATerm m_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = m_17;
        t = Cons_2_0(j_89, d_17, t);
      }
    return(t);
  }
  t = d_17(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm f_17 = NULL,h_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_17 = ATgetFirst((ATermList) t);
      h_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_17 = NULL,o_17 = NULL;
        t = h_17;
        t = g_0(t);
        n_17 = t;
        t = f_17;
        t = e_0(t);
        o_17 = t;
        t = h_17;
        {
          ATerm l_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(n_17), o_17);
            return(t);
          }
          t = reverse_acc_2_0(e_0, l_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_7;
      t = g_0(t);
    }
  return(t);
}
ATerm c_5 (ATerm e_46, ATerm f_46, ATerm t)
{
  t = SSL_table_get(e_46, f_46);
  return(t);
}
ATerm Program_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm u_17 = NULL,x_17 = NULL,a_18 = NULL,b_18 = NULL,n_0 = NULL,o_0 = NULL;
  b_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_18);
  u_17 = t;
  t = x_17;
  t = g_82(t);
  a_18 = t;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_18);
  n_0 = t;
  t = SSLsetAnnotations(n_0, u_17);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm l_18 = NULL;
  l_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_18), term_q_17);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL;
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      t = fetch_1_0(r_3, t);
    }
  t = term_t_17;
  t = echo_0_0(t);
  t = term_t_15;
  g_18 = t;
  t = term_u_15;
  h_18 = t;
  t = term_v_17;
  t = c_5(g_18, h_18, t);
  t = reverse_acc_2_0(_id, s_3, t);
  t = map_1_0(x_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm h_82 (ATerm), ATerm t)
{
  ATerm n_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,s_0 = NULL,t_0 = NULL;
  s_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      q_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_18);
  n_18 = t;
  t = q_18;
  t = h_82(t);
  r_18 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_18);
  s_0 = t;
  t = SSLsetAnnotations(s_0, n_18);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  {
    ATerm w_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_17 = ATgetFirst((ATermList) t);
                ATerm c_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_18;
          }
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = w_17;
        t = (ATerm) ATinsert(ATempty, w_18);
      }
    x_18 = t;
    t = term_m_12;
    y_18 = t;
    t = SSL_printnl(y_18, x_18);
    t = w_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_16;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL;
  t = term_d_18;
  c_19 = t;
  t = term_k_7;
  d_19 = t;
  t = term_e_18;
  t = f_5(c_19, d_19, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_f_18;
  return(t);
}
ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,i_19 = NULL;
  t = term_d_18;
  e_19 = t;
  t = term_k_7;
  f_19 = t;
  t = term_e_18;
  t = f_5(e_19, f_19, t);
  t = term_i_18;
  g_19 = t;
  t = term_k_7;
  i_19 = t;
  t = term_j_18;
  t = f_5(g_19, i_19, t);
  t = term_k_18;
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_m_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_3, c_4, d_4, t);
      ;
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      t = Option_3_0(g_4, h_4, i_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm t)
{
  ATerm k_19 = NULL,n_19 = NULL,o_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,w_0 = NULL,x_0 = NULL;
  t_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_19 = ATgetFirst((ATermList) t);
      o_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_19);
  k_19 = t;
  t = n_19;
  t = n_69(t);
  r_19 = t;
  t = o_19;
  t = o_69(t);
  s_19 = t;
  x_0 = t;
  t = (ATerm) ATinsert(CheckATermList(s_19), r_19);
  w_0 = t;
  t = SSLsetAnnotations(w_0, k_19);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  b_20 = t;
  t = term_e_16;
  c_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_16, b_20);
  t = f_5(c_20, b_20, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, b_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_101 (ATerm), ATerm t)
{
  ATerm z_19 = NULL;
  z_19 = t;
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_18;
        t = y_101(t);
        ;
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
      }
    t = z_19;
    {
      ATerm k_4 (ATerm t)
      {
        ATerm z_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_19 = t;
            int h_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(h_19);
              }
            else
              {
                t = b_19;
                t = y_101(t);
                t = Cons_2_0(_id, k_4, t);
              }
            ;
            LocalPopChoice(a_19);
          }
        else
          {
            t = z_18;
            {
              ATerm e_20 = NULL,f_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_20 = ATgetFirst((ATermList) t);
                  f_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_20), (ATerm) ATmakeAppl(sym_Undefined_1, e_20));
            }
          }
        return(t);
      }
      t = Cons_2_0(j_4, k_4, t);
    }
  }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm u_20 = NULL;
  u_20 = t;
  if(match_string(t, "--help"))
    {
      t = u_20;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_20;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_20;
        }
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL;
  t = term_l_17;
  v_20 = t;
  t = term_k_7;
  w_20 = t;
  t = term_j_19;
  t = f_5(v_20, w_20, t);
  t = term_l_19;
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm n_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_101 (ATerm), ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
  n_20 = t;
  t = term_t_15;
  q_20 = t;
  t = term_u_15;
  r_20 = t;
  t = (ATerm) ATempty;
  s_20 = t;
  t = SSL_table_put(q_20, r_20, s_20);
  t = n_20;
  {
    ATerm l_4 (ATerm t)
    {
      ATerm p_19 = t;
      int q_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_101(t);
          ;
          LocalPopChoice(q_19);
        }
      else
        {
          t = p_19;
          {
            ATerm u_19 = t;
            int v_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_4, h_5, j_5, t);
                ;
                LocalPopChoice(v_19);
              }
            else
              {
                t = u_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_4, t);
    {
      ATerm w_19 = t;
      int x_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_21 = NULL;
          d_21 = t;
          {
            ATerm y_19 = t;
            int a_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_3 = NULL;
                t = d_21;
                {
                  ATerm d_20 = t;
                  int g_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_17;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(g_20);
                    }
                  else
                    {
                      t = d_20;
                      t = fetch_1_0(n_5, t);
                    }
                  t = d_21;
                  t = default_system_usage_0_0(t);
                  t = term_v_14;
                  j_3 = t;
                  t = SSL_exit(j_3);
                }
                ;
                LocalPopChoice(a_20);
              }
            else
              {
                t = y_19;
                {
                  ATerm t_3 = NULL;
                  t = term_d_18;
                  t = get_config_0_0(t);
                  t = d_21;
                  t = default_system_about_0_0(t);
                  t = term_v_14;
                  t_3 = t;
                  t = SSL_exit(t_3);
                }
              }
          }
          ;
          LocalPopChoice(x_19);
        }
      else
        {
          t = w_19;
          {
            ATerm h_20 = t;
            int i_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
                ATerm t_5 (ATerm t)
                {
                  ATerm c_6 (ATerm t)
                  {
                    if(((o_20 != NULL) && (o_20 != t)))
                      _fail(t);
                    else
                      o_20 = t;
                    return(t);
                  }
                  t = Undefined_1_0(c_6, t);
                  return(t);
                }
                t = fetch_1_0(t_5, t);
                t = term_m_7;
                e_21 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_20)), term_j_20);
                f_21 = t;
                t = SSL_printnl(e_21, f_21);
                t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_20)), term_j_20));
                t = default_system_usage_0_0(t);
                t = term_w_7;
                g_21 = t;
                t = SSL_exit(g_21);
                ;
                LocalPopChoice(i_20);
              }
            else
              {
                t = h_20;
              }
          }
        }
      p_20 = t;
      t = term_t_15;
      t_20 = t;
      t = SSL_table_destroy(t_20);
      t = p_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
  t = parse_options_1_0(b_84, t);
  j_21 = t;
  t = term_k_20;
  k_21 = t;
  t = SSL_table_create(k_21);
  t = term_k_20;
  l_21 = t;
  t = term_l_20;
  m_21 = t;
  t = SSL_table_put(l_21, m_21, j_21);
  t = j_21;
  t = d_84(t);
  {
    ATerm m_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_84, t);
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = m_20;
        {
          ATerm y_20 = t;
          int z_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_84(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_20);
            }
          else
            {
              t = y_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = if_verbose2_1_0(a_7, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL;
  t = term_a_21;
  n_21 = t;
  t = term_k_7;
  o_21 = t;
  t = term_b_21;
  t = f_5(n_21, o_21, t);
  t = term_c_21;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_h_21;
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL;
  p_21 = t;
  t = term_e_16;
  t = get_config_0_0(t);
  q_21 = t;
  t = term_m_7;
  r_21 = t;
  t = (ATerm) ATinsert(ATempty, q_21);
  s_21 = t;
  t = SSL_printnl(r_21, s_21);
  t = p_21;
  return(t);
}
ATerm iowrap_3_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm i_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_83(t);
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = i_21;
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(z_21);
            }
          else
            {
              t = y_21;
              {
                ATerm a_22 = t;
                int b_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(b_22);
                  }
                else
                  {
                    t = a_22;
                    {
                      ATerm c_22 = t;
                      int d_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(q_6, s_6, w_6, t);
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
  ATerm p_6 (ATerm t)
  {
    ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
    t_21 = t;
    {
      ATerm g_22 = t;
      int h_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((u_21 != NULL) && (u_21 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_7, t);
          ;
          LocalPopChoice(h_22);
        }
      else
        {
          t = g_22;
          t = term_i_22;
          u_21 = t;
        }
      t = not_null(u_21);
      t = ReadFromFile_0_0(t);
      v_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_21, v_21);
      t = apply_strategy_1_0(k_83, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(e_6, m_83, g_6, p_6, t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = _2_0(_id, j_7, t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm w_21 = NULL;
  if(match_cons(t, sym_TreeGrammar_1))
    {
      w_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4(w_21, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(i_7, _fail, default_usage_0_0, t);
  return(t);
}
