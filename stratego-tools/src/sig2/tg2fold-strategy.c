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
ATerm term_h_19;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_n_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_d_13;
ATerm term_t_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_o_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_g_7;
void init_constant_terms (void)
{
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("to-s", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("is-string", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_7);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_u_7);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("is-int", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_7);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_y_7);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("to-", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("T2-", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("is-", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("fold-strategy", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_9);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_RootApp_1, term_g_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("cond", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_u_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("transform", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_w_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("children", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_y_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("nt", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Var_1, term_a_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_9);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_e_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("risky", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_10);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("concat-strings", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_m_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\nTransformation failed when trying to transform to ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Str_1, term_o_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n-------------\n", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Str_1, term_v_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_9);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\nExpected ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Str_1, term_z_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(", but found:\n-------------\n", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Str_1, term_b_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_9);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_d_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym__2, term_m_13, term_s_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_g_7);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym__2, term_k_14, term_l_14);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_b_16, term_g_7);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__2, term_e_16, term_g_7);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__2, term_j_15, term_g_7);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_g_7);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm arg_to_fold_arg_0_0 (ATerm);
ATerm map_with_index_1_0 (ATerm g_91 (ATerm), ATerm);
ATerm o_4 (ATerm x_42, ATerm y_42, ATerm);
ATerm while_not_2_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm);
ATerm for_3_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm);
ATerm l_0 (ATerm);
ATerm m_0 (ATerm);
ATerm o_0 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm p_4 (ATerm i_30, ATerm k_30, ATerm m_30, ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm r_4 (ATerm e_30, ATerm);
ATerm u_4 (ATerm e_32, ATerm f_32, ATerm);
ATerm v_4 (ATerm u_50, ATerm v_50, ATerm);
ATerm x_4 (ATerm r_99 (ATerm), ATerm x_393, ATerm y_50, ATerm);
ATerm w_4 (ATerm q_50, ATerm r_50, ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm n_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm b_83 (ATerm), ATerm);
ATerm p_10 (ATerm b_10, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm y_4 (ATerm w_50, ATerm);
ATerm z_4 (ATerm g_32, ATerm h_32, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_13 (ATerm e_11, ATerm);
ATerm q_13 (ATerm m_11, ATerm p_11, ATerm s_11, ATerm);
ATerm u_13 (ATerm p_12, ATerm q_12, ATerm s_12, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm t_89 (ATerm), ATerm);
ATerm t_4 (ATerm r_64, ATerm s_64, ATerm);
ATerm debug_1_0 (ATerm p_99 (ATerm), ATerm);
ATerm p_1 (ATerm);
ATerm x_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm a_110 (ATerm), ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm f_5 (ATerm i_57, ATerm j_57, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_5 (ATerm n_44, ATerm o_44, ATerm m_44, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm l_3 (ATerm);
ATerm r_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_5 (ATerm r_42, ATerm s_42, ATerm);
ATerm foldr_2_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm v_3 (ATerm);
ATerm y_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_109 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm need_help_1_0 (ATerm z_83 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_89 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm c_5 (ATerm e_46, ATerm f_46, ATerm);
ATerm b_5 (ATerm);
ATerm e_5 (ATerm);
ATerm g_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm h_5 (ATerm);
ATerm j_5 (ATerm);
ATerm n_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm y_101 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm e_6 (ATerm);
ATerm g_6 (ATerm);
ATerm k_6 (ATerm);
ATerm parse_options_1_0 (ATerm x_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm iowrap_3_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm);
ATerm z_6 (ATerm);
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
  t = term_g_7;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_i_7;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_7), f_0), term_n_7);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_p_7;
  k_0 = t;
  t = SSL_exit(k_0);
  t = b_0;
  return(t);
}
ATerm arg_to_fold_arg_0_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL;
  i_1 = t;
  if(match_cons(t, sym_Param_1))
    {
      j_1 = ATgetArgument(t, 0);
      {
        ATerm p_0 = NULL,u_0 = NULL,v_0 = NULL;
        t = SSL_int_to_string(j_1);
        u_0 = t;
        t = term_r_7;
        v_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_7, u_0);
        t = t_4(v_0, u_0, t);
        p_0 = t;
        t = (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, p_0));
      }
    }
  else
    {
      if(match_cons(t, sym_String_0))
        {
          t = term_w_7;
        }
      else
        {
          if(match_cons(t, sym_Int_0))
            {
              t = term_a_8;
            }
          else
            {
              ATerm t_1 = NULL,z_1 = NULL,l_2 = NULL;
              if(match_cons(t, sym_NonTermRef_2))
                {
                  j_1 = ATgetArgument(t, 0);
                  l_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_1;
              if(match_cons(t, sym_Id_1))
                {
                  k_1 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_b_8;
              l_2 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_b_8, k_1);
              t = t_4(l_2, k_1, t);
              t_1 = t;
              t = l_1;
              t = map_1_0(arg_to_fold_arg_0_0, t);
              z_1 = t;
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_1), z_1);
            }
        }
    }
  return(t);
}
ATerm map_with_index_1_0 (ATerm g_91 (ATerm), ATerm t)
{
  ATerm r_2 = NULL;
  ATerm g_3 (ATerm t)
  {
    ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
    if(match_cons(t, sym__2))
      {
        u_2 = ATgetArgument(t, 0);
        v_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = v_2;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATempty;
      }
    else
      {
        ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_2 = ATgetFirst((ATermList) t);
            x_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_2, w_2);
        t = g_91(t);
        c_3 = t;
        t = term_p_7;
        f_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_2, term_p_7);
        t = a_5(u_2, f_3, t);
        e_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_3, x_2);
        t = g_3(t);
        d_3 = t;
        t = (ATerm) ATinsert(CheckATermList(d_3), c_3);
      }
    return(t);
  }
  if(((r_2 != NULL) && (r_2 != t)))
    _fail(t);
  else
    r_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_7, not_null(r_2));
  t = g_3(t);
  return(t);
}
ATerm o_4 (ATerm x_42, ATerm y_42, ATerm t)
{
  ATerm d_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(x_42, y_42);
      ;
      LocalPopChoice(f_8);
    }
  else
    {
      t = d_8;
      t = SSL_subtr(x_42, y_42);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm g_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_102(t);
        ;
        LocalPopChoice(h_8);
      }
    else
      {
        t = g_8;
        t = u_102(t);
        t = k_3(t);
      }
    return(t);
  }
  t = k_3(t);
  return(t);
}
ATerm for_3_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm t)
{
  t = w_102(t);
  t = while_not_2_0(x_102, y_102, t);
  return(t);
}
ATerm l_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      m_3 = ATgetArgument(t, 0);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_3, n_3, (ATerm) ATempty);
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm o_3 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm i_8 = ATgetArgument(t, 0);
      if(((ATgetType(i_8) != AT_INT) || (ATgetInt((ATermInt) i_8) != 0)))
        _fail(t);
      {
        ATerm j_8 = ATgetArgument(t, 1);
      }
      o_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_3;
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  if(match_cons(t, sym__3))
    {
      p_3 = ATgetArgument(t, 0);
      q_3 = ATgetArgument(t, 1);
      s_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_3, term_p_7);
  t = geq_0_0(t);
  t = term_p_7;
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, term_p_7);
  t = o_4(p_3, u_3, t);
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_3, q_3, (ATerm) ATinsert(CheckATermList(s_3), q_3));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(l_0, m_0, o_0, t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL;
  j_4 = t;
  t = SSL_explode_term(j_4);
  if(match_cons(t, sym__2))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_8 = ATgetArgument(t, 1);
        if(((ATgetType(m_8) == AT_LIST) && !(ATisEmpty(m_8))))
          {
            i_4 = ATgetFirst((ATermList) m_8);
            {
              ATerm n_8 = (ATerm) ATgetNext((ATermList) m_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_4;
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,q_4 = NULL;
  n_4 = t;
  t = SSL_int_to_string(n_4);
  m_4 = t;
  t = term_r_7;
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, m_4);
  t = t_4(q_4, m_4, t);
  l_4 = t;
  t = SSL_is_string(l_4);
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_4);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_o_8;
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm i_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,o_5 = NULL,b_1 = NULL;
  i_5 = t;
  t = SSL_explode_term(i_5);
  if(match_cons(t, sym__2))
    {
      ATerm p_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_8 = ATgetArgument(t, 1);
        if(((ATgetType(q_8) == AT_LIST) && !(ATisEmpty(q_8))))
          {
            o_5 = ATgetFirst((ATermList) q_8);
            {
              ATerm r_8 = (ATerm) ATgetNext((ATermList) q_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_5;
  if(match_cons(t, sym_Prod_2))
    {
      ATerm s_8 = ATgetArgument(t, 0);
      if(match_cons(s_8, sym_Id_1))
        {
          k_5 = ATgetArgument(s_8, 0);
        }
      else
        _fail(t);
      l_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5;
  t = map_1_0(arg_to_fold_arg_0_0, t);
  m_5 = t;
  t = SSL_explode_term(i_5);
  if(match_cons(t, sym__2))
    {
      ATerm t_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_8 = ATgetArgument(t, 1);
        if(((ATgetType(v_8) == AT_LIST) && !(ATisEmpty(v_8))))
          {
            ATerm w_8 = ATgetFirst((ATermList) v_8);
            ATerm z_8 = (ATerm) ATgetNext((ATermList) v_8);
            if(((ATgetType(z_8) == AT_LIST) && !(ATisEmpty(z_8))))
              {
                b_1 = ATgetFirst((ATermList) z_8);
                {
                  ATerm a_9 = (ATerm) ATgetNext((ATermList) z_8);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_5), m_5), b_1);
  return(t);
}
ATerm p_4 (ATerm i_30, ATerm k_30, ATerm m_30, ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,a_4 = NULL,b_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL;
  t = term_b_9;
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_9, i_30);
  t = t_4(g_4, i_30, t);
  w_3 = t;
  t = term_c_9;
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_9, i_30);
  t = t_4(f_4, i_30, t);
  x_3 = t;
  t = term_b_8;
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_8, i_30);
  t = t_4(e_4, i_30, t);
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_30, term_g_7);
  t = copy_0_0(t);
  t = map_with_index_1_0(w_0, t);
  t = map_1_0(y_0, t);
  b_4 = t;
  t = m_30;
  t = foldr_2_0(z_0, a_1, t);
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, a_4, b_4, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_e_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_4), (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, w_3))), (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, x_3)))), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_h_9), (ATerm) ATmakeAppl(sym_Str_1, i_30)))));
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm s_5 = NULL,x_5 = NULL,a_6 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm n_9 = ATgetArgument(t, 0);
      if(match_cons(n_9, sym_Id_1))
        {
          s_5 = ATgetArgument(n_9, 0);
        }
      else
        _fail(t);
      {
        ATerm o_9 = ATgetArgument(t, 1);
      }
      {
        ATerm r_9 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = term_b_9;
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_9, s_5);
  t = t_4(a_6, s_5, t);
  x_5 = t;
  t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, x_5, term_o_8);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm s_9 = ATgetArgument(t, 0);
      if(match_cons(s_9, sym_Id_1))
        {
          b_6 = ATgetArgument(s_9, 0);
        }
      else
        _fail(t);
      c_6 = ATgetArgument(t, 1);
      d_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_4(b_6, c_6, d_6, t);
  return(t);
}
ATerm r_4 (ATerm e_30, ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  t = e_30;
  t = map_1_0(c_1, t);
  p_5 = t;
  t = e_30;
  t = map_1_0(d_1, t);
  q_5 = t;
  t = (ATerm) ATmakeAppl(sym_Module_2, term_t_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_d_9, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_z_9), term_x_9), term_v_9), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_h_9), term_c_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, term_h_10, term_g_9, (ATerm) ATmakeAppl(sym_Call_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_y_10), (ATerm) ATmakeAppl(sym_BA_2, term_n_10, (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_10), term_c_10), term_u_10)))))), (ATerm) ATmakeAppl(sym_Call_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_g_11), (ATerm) ATmakeAppl(sym_BA_2, term_n_10, (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_11), term_c_10), term_a_11))))))))))), (ATerm) ATmakeAppl(sym_Strategies_1, p_5)), (ATerm) ATmakeAppl(sym_Strategies_1, q_5)));
  return(t);
}
ATerm u_4 (ATerm e_32, ATerm f_32, ATerm t)
{
  ATerm f_6 = NULL;
  t = SSL_fputc(e_32, f_32);
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_6);
  return(t);
}
ATerm v_4 (ATerm u_50, ATerm v_50, ATerm t)
{
  ATerm h_6 = NULL;
  t = SSL_write_term_to_stream_text(u_50, v_50);
  h_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_6);
  return(t);
}
ATerm x_4 (ATerm r_99 (ATerm), ATerm x_393, ATerm y_50, ATerm t)
{
  ATerm i_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_393, term_h_11);
  t = open_stream_0_0(t);
  i_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_6, y_50);
  t = r_99(t);
  t = fclose_0_0(t);
  t = y_50;
  return(t);
}
ATerm w_4 (ATerm q_50, ATerm r_50, ATerm t)
{
  ATerm j_6 = NULL;
  t = SSL_write_term_to_stream_baf(q_50, r_50);
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_6);
  return(t);
}
ATerm f_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_11 = ATgetArgument(t, 0);
      if(match_cons(i_11, sym_Stream_1))
        {
          v_1 = ATgetArgument(i_11, 0);
        }
      else
        _fail(t);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4(v_1, w_1, t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,m_2 = NULL,o_2 = NULL,p_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_11 = ATgetArgument(t, 0);
      if(match_cons(j_11, sym_Stream_1))
        {
          o_2 = ATgetArgument(j_11, 0);
        }
      else
        _fail(t);
      p_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4(o_2, p_2, t);
  j_2 = t;
  t = term_k_11;
  k_2 = t;
  t = j_2;
  if(match_cons(t, sym_Stream_1))
    {
      m_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_11, j_2);
  t = u_4(k_2, m_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL,x_6 = NULL,y_6 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,h_7 = NULL,x_8 = NULL,y_8 = NULL,s_0 = NULL,n_0 = NULL;
  if(((u_6 != NULL) && (u_6 != t)))
    _fail(t);
  else
    u_6 = t;
  if(match_cons(t, sym__2))
    {
      if(((d_7 != NULL) && (d_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_7 = ATgetArgument(t, 0);
      if(((e_7 != NULL) && (e_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(u_6));
  if(((c_7 != NULL) && (c_7 != t)))
    _fail(t);
  else
    c_7 = t;
  t = not_null(d_7);
  {
    ATerm l_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((t_6 != NULL) && (t_6 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(e_1, t);
        ;
        LocalPopChoice(n_11);
      }
    else
      {
        t = l_11;
        t = term_o_11;
        if(((t_6 != NULL) && (t_6 != t)))
          _fail(t);
        else
          t_6 = t;
      }
    if(((h_7 != NULL) && (h_7 != t)))
      _fail(t);
    else
      h_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), not_null(e_7));
    if(((n_0 != NULL) && (n_0 != t)))
      _fail(t);
    else
      n_0 = t;
    t = SSLsetAnnotations(not_null(n_0), not_null(c_7));
    t = not_null(u_6);
    if(match_cons(t, sym__2))
      {
        if(((x_6 != NULL) && (x_6 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          x_6 = ATgetArgument(t, 0);
        if(((y_6 != NULL) && (y_6 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          y_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(u_6));
    if(((v_6 != NULL) && (v_6 != t)))
      _fail(t);
    else
      v_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_6), (ATerm) ATmakeAppl(sym__2, not_null(t_6), not_null(y_6)));
    if(((s_0 != NULL) && (s_0 != t)))
      _fail(t);
    else
      s_0 = t;
    t = SSLsetAnnotations(not_null(s_0), not_null(v_6));
    if(((b_7 != NULL) && (b_7 != t)))
      _fail(t);
    else
      b_7 = t;
    if(match_cons(t, sym__2))
      {
        if(((x_8 != NULL) && (x_8 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          x_8 = ATgetArgument(t, 0);
        if(((y_8 != NULL) && (y_8 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          y_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm q_11 = t;
      int r_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,u_1 = NULL,t_0 = NULL;
          t = SSLgetAnnotations(not_null(b_7));
          m_1 = t;
          t = not_null(x_8);
          t = fetch_1_0(f_1, t);
          q_1 = t;
          t = not_null(y_8);
          if(match_cons(t, sym__2))
            {
              s_1 = ATgetArgument(t, 0);
              u_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_4(g_1, s_1, u_1, t);
          r_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_1, r_1);
          t_0 = t;
          t = SSLsetAnnotations(t_0, m_1);
          ;
          LocalPopChoice(r_11);
        }
      else
        {
          t = q_11;
          {
            ATerm d_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,x_0 = NULL;
            t = SSLgetAnnotations(not_null(b_7));
            d_2 = t;
            t = not_null(y_8);
            if(match_cons(t, sym__2))
              {
                h_2 = ATgetArgument(t, 0);
                i_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_4(n_1, h_2, i_2, t);
            g_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_8), g_2);
            x_0 = t;
            t = SSLsetAnnotations(x_0, d_2);
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
  ATerm f_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,m_9 = NULL;
  m_9 = t;
  t = dtime_0_0(t);
  t = m_9;
  t = b_83(t);
  k_9 = t;
  t = dtime_0_0(t);
  f_9 = t;
  t = k_9;
  if(match_cons(t, sym__2))
    {
      i_9 = ATgetArgument(t, 0);
      j_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_9), (ATerm) ATmakeAppl(sym_Runtime_1, f_9)), j_9);
  return(t);
}
ATerm p_10 (ATerm b_10, ATerm t)
{
  t = SSL_fclose(b_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL;
  g_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_10 = ATgetArgument(t, 0);
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_10);
            ;
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
            t = p_10(g_10, t);
          }
      }
    }
  else
    {
      t = p_10(g_10, t);
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
  ATerm q_10 = NULL;
  t = SSL_fopen(g_32, h_32);
  q_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_10);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_10 = NULL;
  t = SSL_stdin_stream();
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  t = SSL_stdout_stream();
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_10 = NULL;
  t = SSL_stderr_stream();
  t_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_10);
  return(t);
}
ATerm o_13 (ATerm e_11, ATerm t)
{
  ATerm f_11 = NULL;
  t = SSL_explode_term(e_11);
  if(match_cons(t, sym__2))
    {
      ATerm v_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_11 = ATgetArgument(t, 1);
        if(((ATgetType(w_11) == AT_LIST) && !(ATisEmpty(w_11))))
          {
            f_11 = ATgetFirst((ATermList) w_11);
            {
              ATerm x_11 = (ATerm) ATgetNext((ATermList) w_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_11;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_11;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_11;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_11;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm q_13 (ATerm m_11, ATerm p_11, ATerm s_11, ATerm t)
{
  ATerm z_11 = NULL,f_12 = NULL,g_12 = NULL,l_12 = NULL,h_1 = NULL;
  t = SSLgetAnnotations(s_11);
  g_12 = t;
  t = m_11;
  if(match_cons(t, sym_Path_1))
    {
      l_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_12, p_11);
  h_1 = t;
  t = SSLsetAnnotations(h_1, g_12);
  if(match_cons(t, sym__2))
    {
      z_11 = ATgetArgument(t, 0);
      f_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4(z_11, f_12, t);
  return(t);
}
ATerm u_13 (ATerm p_12, ATerm q_12, ATerm s_12, ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,e_13 = NULL,n_2 = NULL;
  t = SSLgetAnnotations(s_12);
  y_12 = t;
  t = SSL_is_string(p_12);
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_13, q_12);
  n_2 = t;
  t = SSLsetAnnotations(n_2, y_12);
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      x_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4(w_12, x_12, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,l_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_11 = ATgetArgument(t, 0);
      ATerm a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  i_13 = t;
  if(match_cons(t, sym__2))
    {
      j_13 = ATgetArgument(t, 0);
      l_13 = ATgetArgument(t, 1);
      {
        ATerm b_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_13(i_13, t);
            ;
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            {
              ATerm d_12 = t;
              int e_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_13(j_13, l_13, i_13, t);
                  ;
                  LocalPopChoice(e_12);
                }
              else
                {
                  t = d_12;
                  t = u_13(j_13, l_13, i_13, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_13(i_13, t);
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_h_12;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_13 = NULL,y_13 = NULL,z_13 = NULL;
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_14 = NULL;
      c_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_14, term_k_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      t = debug_1_0(o_1, t);
      _fail(t);
    }
  y_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_4(z_13, t);
  w_13 = t;
  t = y_13;
  t = fclose_0_0(t);
  t = w_13;
  return(t);
}
ATerm fetch_1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm t_15 (ATerm t)
  {
    ATerm p_15 = NULL,r_15 = NULL,s_15 = NULL;
    p_15 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_15 = ATgetFirst((ATermList) t);
        s_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_12 = t;
      int n_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_4 = NULL,s_4 = NULL,j_7 = NULL;
          t = SSLgetAnnotations(p_15);
          c_4 = t;
          t = r_15;
          t = t_89(t);
          s_4 = t;
          t = (ATerm) ATinsert(CheckATermList(s_15), s_4);
          j_7 = t;
          t = SSLsetAnnotations(j_7, c_4);
          ;
          LocalPopChoice(n_12);
        }
      else
        {
          t = m_12;
          {
            ATerm u_5 = NULL,y_5 = NULL,l_7 = NULL;
            t = SSLgetAnnotations(p_15);
            u_5 = t;
            t = s_15;
            t = t_15(t);
            y_5 = t;
            t = (ATerm) ATinsert(CheckATermList(y_5), r_15);
            l_7 = t;
            t = SSLsetAnnotations(l_7, u_5);
          }
        }
    }
    return(t);
  }
  t = t_15(t);
  return(t);
}
ATerm t_4 (ATerm r_64, ATerm s_64, ATerm t)
{
  t = SSL_strcat(r_64, s_64);
  return(t);
}
ATerm debug_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL;
  w_15 = t;
  t = p_99(t);
  x_15 = t;
  t = term_i_7;
  y_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_15), x_15);
  z_15 = t;
  t = SSL_printnl(y_15, z_15);
  t = w_15;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm o_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(r_12);
    }
  else
    {
      t = o_12;
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_t_12;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_16 = NULL;
      i_16 = t;
      t = SSL_is_string(i_16);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_1, t);
            ;
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
            {
              ATerm o_16 = NULL,p_16 = NULL,r_16 = NULL;
              o_16 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_16 = ATgetArgument(t, 0);
                  t = p_16;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_16 = ATgetArgument(t, 0);
                      t = p_16;
                      {
                        ATerm b_13 = t;
                        int c_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_13);
                          }
                        else
                          {
                            t = b_13;
                            t = debug_1_0(x_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm b_17 = NULL,c_17 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_16 = ATgetArgument(t, 0);
                          r_16 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_16;
                      t = eval_config_0_0(t);
                      b_17 = t;
                      t = r_16;
                      t = eval_config_0_0(t);
                      c_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_17, c_17);
                      t = t_4(b_17, c_17, t);
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
  ATerm h_17 = NULL,i_17 = NULL;
  h_17 = t;
  t = term_d_13;
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, h_17);
  t = c_5(i_17, h_17, t);
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_17 = NULL,l_17 = NULL;
        t = eval_config_0_0(t);
        j_17 = t;
        t = term_d_13;
        l_17 = t;
        t = SSL_table_put(l_17, h_17, j_17);
        t = j_17;
        ;
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_110 (ATerm), ATerm t)
{
  ATerm r_17 = NULL;
  r_17 = t;
  {
    ATerm h_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_17 = NULL;
        t = term_m_13;
        t = get_config_0_0(t);
        t_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_17, term_n_13);
        t = geq_0_0(t);
        t = r_17;
        t = a_110(t);
        ;
        LocalPopChoice(k_13);
      }
    else
      {
        t = h_13;
        t = r_17;
      }
  }
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm x_17 = NULL;
  x_17 = t;
  if(match_string(t, "-k"))
    {
      t = x_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_17;
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
  y_17 = t;
  t = SSL_string_to_int(y_17);
  z_17 = t;
  t = term_p_13;
  a_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, z_17);
  t = f_5(a_18, z_17, t);
  t = y_17;
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_r_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_1, a_2, b_2, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm c_18 = NULL;
  c_18 = t;
  if(match_string(t, "-S"))
    {
      t = c_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_18;
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL;
  t = term_m_13;
  d_18 = t;
  t = term_s_13;
  e_18 = t;
  t = term_t_13;
  t = f_5(d_18, e_18, t);
  t = term_v_13;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
  f_18 = t;
  t = SSL_string_to_int(f_18);
  g_18 = t;
  t = term_m_13;
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_13, g_18);
  t = f_5(h_18, g_18, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_18);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm y_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm k_18 = NULL,n_18 = NULL;
  t = term_b_14;
  k_18 = t;
  t = term_g_7;
  n_18 = t;
  t = term_d_14;
  t = f_5(k_18, n_18, t);
  t = term_e_14;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_2, e_2, f_2, t);
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
            t = ArgOption_3_0(q_2, s_2, t_2, t);
            ;
            LocalPopChoice(j_14);
          }
        else
          {
            t = i_14;
            t = Option_3_0(y_2, z_2, a_3, t);
          }
      }
    }
  return(t);
}
ATerm f_5 (ATerm i_57, ATerm j_57, ATerm t)
{
  ATerm o_18 = NULL;
  t = term_d_13;
  o_18 = t;
  t = SSL_table_put(o_18, i_57, j_57);
  t = (ATerm) ATmakeAppl(sym__3, term_d_13, i_57, j_57);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_18 = NULL,x_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_19 = NULL,d_19 = NULL,e_19 = NULL;
      t = term_g_7;
      t = d_0(t);
      a_19 = t;
      t = term_k_14;
      d_19 = t;
      t = term_l_14;
      e_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_14, term_l_14, a_19);
      t = d_5(d_19, e_19, a_19, t);
      _fail(t);
    }
  else
    {
      ATerm j_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_18 = ATgetFirst((ATermList) t);
          x_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_18;
      t = a_0(t);
      t = term_g_7;
      t = c_0(t);
      j_19 = t;
      t = (ATerm) ATinsert(CheckATermList(x_18), j_19);
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm l_19 = NULL;
  l_19 = t;
  if(match_string(t, "-o"))
    {
      t = l_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_19;
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm p_19 = NULL,t_19 = NULL;
  p_19 = t;
  t = term_m_14;
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_14, p_19);
  t = f_5(t_19, p_19, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_19);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_n_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_3, h_3, i_3, t);
  return(t);
}
ATerm d_5 (ATerm n_44, ATerm o_44, ATerm m_44, ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
  v_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_44, o_44);
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_14 = ATgetArgument(t, 0);
            ATerm r_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_44, o_44);
        t = c_5(n_44, o_44, t);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        t = (ATerm) ATempty;
      }
    w_19 = t;
    t = (ATerm) ATinsert(CheckATermList(w_19), m_44);
    x_19 = t;
    t = SSL_table_put(n_44, o_44, x_19);
    t = v_19;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL;
      t = term_g_7;
      t = j_0(t);
      i_20 = t;
      t = term_k_14;
      j_20 = t;
      t = term_l_14;
      k_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_14, term_l_14, i_20);
      t = d_5(j_20, k_20, i_20, t);
      _fail(t);
    }
  else
    {
      ATerm s_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_20 = ATgetFirst((ATermList) t);
          f_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_20 = ATgetFirst((ATermList) t);
          h_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_20;
      t = h_0(t);
      t = g_20;
      t = i_0(t);
      s_20 = t;
      t = (ATerm) ATinsert(CheckATermList(h_20), s_20);
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm w_20 = NULL;
  w_20 = t;
  if(match_string(t, "-i"))
    {
      t = w_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_20;
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm x_20 = NULL,a_21 = NULL;
  x_20 = t;
  t = term_s_14;
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_14, x_20);
  t = f_5(a_21, x_20, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_20);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_t_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_3, l_3, r_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_7;
  t = whoami_0_0(t);
  b_21 = t;
  t = term_i_7;
  e_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_14), b_21);
  f_21 = t;
  t = SSL_printnl(e_21, f_21);
  t = term_p_7;
  d_21 = t;
  t = SSL_exit(d_21);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_14;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_5 (ATerm r_42, ATerm s_42, ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_42, s_42);
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      t = SSL_addr(r_42, s_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
  h_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_21;
      t = b_96(t);
    }
  else
    {
      ATerm m_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_21 = ATgetFirst((ATermList) t);
          j_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_21;
      t = foldr_2_0(b_96, c_96, t);
      m_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_21, m_21);
      t = c_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm k_7 = NULL,m_7 = NULL;
  if(match_cons(t, sym__2))
    {
      k_7 = ATgetArgument(t, 0);
      m_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_5(k_7, m_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_21 = NULL,a_7 = NULL,f_7 = NULL;
  t = times_0_0(t);
  f_7 = t;
  t = SSL_explode_term(f_7);
  if(match_cons(t, sym__2))
    {
      ATerm y_14 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7;
  t = foldr_2_0(v_3, y_3, t);
  p_21 = t;
  t = SSL_TicksToSeconds(p_21);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
  b_22 = t;
  if(match_cons(t, sym__2))
    {
      c_22 = ATgetArgument(t, 0);
      d_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_22;
        if((c_22 != t))
          {
            _fail(t);
          }
        t = b_22;
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = (ATerm) ATmakeAppl(sym__2, c_22, d_22);
        {
          ATerm b_15 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_22, d_22);
              ;
              LocalPopChoice(c_15);
            }
          else
            {
              t = b_15;
              t = SSL_gtr(c_22, d_22);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_22, d_22);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_109 (ATerm), ATerm t)
{
  ATerm h_22 = NULL;
  h_22 = t;
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_22 = NULL;
        t = term_m_13;
        t = get_config_0_0(t);
        j_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_22, term_p_7);
        t = geq_0_0(t);
        t = h_22;
        t = z_109(t);
        ;
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        t = h_22;
      }
  }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,o_22 = NULL,p_22 = NULL;
  t = run_time_0_0(t);
  l_22 = t;
  t = term_g_7;
  t = whoami_0_0(t);
  m_22 = t;
  t = term_i_7;
  o_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_15), l_22), term_f_15), m_22);
  p_22 = t;
  t = SSL_printnl(o_22, p_22);
  t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_15), l_22), term_f_15), m_22));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_13;
  q_22 = t;
  t = SSL_exit(q_22);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL;
  z_22 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_22;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_22 = ATgetArgument(t, 0);
          {
            ATerm u_8 = NULL,q_7 = NULL;
            t = SSLgetAnnotations(z_22);
            u_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_22);
            q_7 = t;
            t = SSLsetAnnotations(q_7, u_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_22;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      t = fetch_1_0(h_4, t);
    }
  t = z_83(t);
  return(t);
}
ATerm map_1_0 (ATerm j_89 (ATerm), ATerm t)
{
  ATerm p_23 (ATerm t)
  {
    ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
    m_23 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_23;
      }
    else
      {
        ATerm l_9 = NULL,p_9 = NULL,q_9 = NULL,t_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_23 = ATgetFirst((ATermList) t);
            o_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_23);
        l_9 = t;
        t = n_23;
        t = j_89(t);
        p_9 = t;
        t = o_23;
        t = p_23(t);
        q_9 = t;
        t = (ATerm) ATinsert(CheckATermList(q_9), p_9);
        t_7 = t;
        t = SSLsetAnnotations(t_7, l_9);
      }
    return(t);
  }
  t = p_23(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_23 = ATgetFirst((ATermList) t);
      t_23 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_23 = NULL,y_23 = NULL;
        ATerm k_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_23)), not_null(y_23));
          return(t);
        }
        t = not_null(t_23);
        t = g_0(t);
        if(((x_23 != NULL) && (x_23 != t)))
          _fail(t);
        else
          x_23 = t;
        t = not_null(s_23);
        t = e_0(t);
        if(((y_23 != NULL) && (y_23 != t)))
          _fail(t);
        else
          y_23 = t;
        t = not_null(t_23);
        t = reverse_acc_2_0(e_0, k_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_7;
      t = g_0(t);
    }
  return(t);
}
ATerm c_5 (ATerm e_46, ATerm f_46, ATerm t)
{
  t = SSL_table_get(e_46, f_46);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,v_7 = NULL;
  e_24 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_24);
  c_24 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_24);
  v_7 = t;
  t = SSLsetAnnotations(v_7, c_24);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm g_24 = NULL;
  g_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_24), term_k_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL;
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_15);
    }
  else
    {
      t = l_15;
      t = fetch_1_0(b_5, t);
    }
  t = term_n_15;
  t = echo_0_0(t);
  t = term_k_14;
  a_24 = t;
  t = term_l_14;
  b_24 = t;
  t = term_o_15;
  t = c_5(a_24, b_24, t);
  t = reverse_acc_2_0(_id, e_5, t);
  t = map_1_0(g_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
  i_24 = t;
  {
    ATerm q_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_24;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_15 = ATgetFirst((ATermList) t);
                ATerm a_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_24;
          }
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = q_15;
        t = (ATerm) ATinsert(ATempty, i_24);
      }
    j_24 = t;
    t = term_o_11;
    k_24 = t;
    t = SSL_printnl(k_24, j_24);
    t = i_24;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_14;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL;
  t = term_b_16;
  o_24 = t;
  t = term_g_7;
  p_24 = t;
  t = term_c_16;
  t = f_5(o_24, p_24, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL;
  t = term_b_16;
  s_24 = t;
  t = term_g_7;
  t_24 = t;
  t = term_c_16;
  t = f_5(s_24, t_24, t);
  t = term_e_16;
  q_24 = t;
  t = term_g_7;
  r_24 = t;
  t = term_f_16;
  t = f_5(q_24, r_24, t);
  t = term_g_16;
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_h_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_5, j_5, n_5, t);
      ;
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
      t = Option_3_0(r_5, t_5, v_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,z_7 = NULL;
  z_24 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_24 = ATgetFirst((ATermList) t);
      w_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_24);
  u_24 = t;
  t = v_24;
  t = n_69(t);
  x_24 = t;
  t = w_24;
  t = o_69(t);
  y_24 = t;
  t = (ATerm) ATinsert(CheckATermList(y_24), x_24);
  z_7 = t;
  t = SSLsetAnnotations(z_7, u_24);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_101 (ATerm), ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,j_25 = NULL,k_25 = NULL,c_8 = NULL;
  if(((e_25 != NULL) && (e_25 != t)))
    _fail(t);
  else
    e_25 = t;
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_16;
        t = y_101(t);
        ;
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
      }
    t = not_null(e_25);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((g_25 != NULL) && (g_25 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          g_25 = ATgetFirst((ATermList) t);
        if(((h_25 != NULL) && (h_25 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          h_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(e_25));
    if(((f_25 != NULL) && (f_25 != t)))
      _fail(t);
    else
      f_25 = t;
    t = term_v_14;
    if(((k_25 != NULL) && (k_25 != t)))
      _fail(t);
    else
      k_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_14, not_null(g_25));
    t = f_5(not_null(k_25), not_null(g_25), t);
    t = not_null(h_25);
    {
      ATerm u_25 (ATerm t)
      {
        ATerm q_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_16 = t;
            int u_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_25 = NULL;
                n_25 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_25;
                ;
                LocalPopChoice(u_16);
              }
            else
              {
                t = t_16;
                t = y_101(t);
                t = Cons_2_0(_id, u_25, t);
              }
            ;
            LocalPopChoice(s_16);
          }
        else
          {
            t = q_16;
            {
              ATerm q_25 = NULL,r_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_25 = ATgetFirst((ATermList) t);
                  r_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_25), (ATerm) ATmakeAppl(sym_Undefined_1, q_25));
            }
          }
        return(t);
      }
      t = u_25(t);
      if(((j_25 != NULL) && (j_25 != t)))
        _fail(t);
      else
        j_25 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(j_25)), (ATerm) ATmakeAppl(sym_Program_1, not_null(g_25)));
      if(((c_8 != NULL) && (c_8 != t)))
        _fail(t);
      else
        c_8 = t;
      t = SSLsetAnnotations(not_null(c_8), not_null(f_25));
    }
  }
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  if(match_string(t, "--help"))
    {
      t = g_26;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_26;
        }
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL;
  t = term_j_15;
  h_26 = t;
  t = term_g_7;
  i_26 = t;
  t = term_v_16;
  t = f_5(h_26, i_26, t);
  t = term_w_16;
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_x_16;
  return(t);
}
ATerm k_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_101 (ATerm), ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
  if(((b_26 != NULL) && (b_26 != t)))
    _fail(t);
  else
    b_26 = t;
  t = term_k_14;
  if(((d_26 != NULL) && (d_26 != t)))
    _fail(t);
  else
    d_26 = t;
  t = term_l_14;
  if(((e_26 != NULL) && (e_26 != t)))
    _fail(t);
  else
    e_26 = t;
  t = (ATerm) ATempty;
  if(((f_26 != NULL) && (f_26 != t)))
    _fail(t);
  else
    f_26 = t;
  t = SSL_table_put(not_null(d_26), not_null(e_26), not_null(f_26));
  t = not_null(b_26);
  {
    ATerm w_5 (ATerm t)
    {
      ATerm y_16 = t;
      int z_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_101(t);
          ;
          LocalPopChoice(z_16);
        }
      else
        {
          t = y_16;
          {
            ATerm a_17 = t;
            int d_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_5, e_6, g_6, t);
                ;
                LocalPopChoice(d_17);
              }
            else
              {
                t = a_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_5, t);
    {
      ATerm e_17 = t;
      int f_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_26 = NULL;
          p_26 = t;
          {
            ATerm g_17 = t;
            int k_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_10 = NULL;
                t = p_26;
                {
                  ATerm m_17 = t;
                  int n_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_j_15;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(n_17);
                    }
                  else
                    {
                      t = m_17;
                      t = fetch_1_0(k_6, t);
                    }
                  t = p_26;
                  t = default_system_usage_0_0(t);
                  t = term_s_13;
                  d_10 = t;
                  t = SSL_exit(d_10);
                }
                ;
                LocalPopChoice(k_17);
              }
            else
              {
                t = g_17;
                {
                  ATerm l_10 = NULL;
                  t = term_b_16;
                  t = get_config_0_0(t);
                  t = p_26;
                  t = default_system_about_0_0(t);
                  t = term_s_13;
                  l_10 = t;
                  t = SSL_exit(l_10);
                }
              }
          }
          ;
          LocalPopChoice(f_17);
        }
      else
        {
          t = e_17;
          {
            ATerm o_17 = t;
            int p_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
                ATerm l_6 (ATerm t)
                {
                  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,e_8 = NULL;
                  v_26 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      u_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_26);
                  t_26 = t;
                  t = u_26;
                  if(((z_25 != NULL) && (z_25 != t)))
                    _fail(t);
                  else
                    z_25 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_26);
                  e_8 = t;
                  t = SSLsetAnnotations(e_8, t_26);
                  return(t);
                }
                t = fetch_1_0(l_6, t);
                t = term_i_7;
                if(((r_26 != NULL) && (r_26 != t)))
                  _fail(t);
                else
                  r_26 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_25)), term_q_17);
                if(((s_26 != NULL) && (s_26 != t)))
                  _fail(t);
                else
                  s_26 = t;
                t = SSL_printnl(not_null(r_26), not_null(s_26));
                t = (ATerm) ATmakeAppl(sym__2, term_i_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_25)), term_q_17));
                t = default_system_usage_0_0(t);
                t = term_p_7;
                if(((q_26 != NULL) && (q_26 != t)))
                  _fail(t);
                else
                  q_26 = t;
                t = SSL_exit(not_null(q_26));
                ;
                LocalPopChoice(p_17);
              }
            else
              {
                t = o_17;
              }
          }
        }
      if(((a_26 != NULL) && (a_26 != t)))
        _fail(t);
      else
        a_26 = t;
      t = term_k_14;
      if(((c_26 != NULL) && (c_26 != t)))
        _fail(t);
      else
        c_26 = t;
      t = SSL_table_destroy(not_null(c_26));
      t = not_null(a_26);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
  t = parse_options_1_0(b_84, t);
  a_27 = t;
  t = term_s_17;
  d_27 = t;
  t = SSL_table_create(d_27);
  t = term_s_17;
  b_27 = t;
  t = term_u_17;
  c_27 = t;
  t = SSL_table_put(b_27, c_27, a_27);
  t = a_27;
  t = d_84(t);
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_84, t);
        ;
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        {
          ATerm b_18 = t;
          int i_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_84(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_18);
            }
          else
            {
              t = b_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = if_verbose2_1_0(s_6, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL;
  t = term_j_18;
  e_27 = t;
  t = term_g_7;
  f_27 = t;
  t = term_l_18;
  t = f_5(e_27, f_27, t);
  t = term_m_18;
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_p_18;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL;
  g_27 = t;
  t = term_v_14;
  t = get_config_0_0(t);
  h_27 = t;
  t = term_i_7;
  i_27 = t;
  t = (ATerm) ATinsert(ATempty, h_27);
  j_27 = t;
  t = SSL_printnl(i_27, j_27);
  t = g_27;
  return(t);
}
ATerm iowrap_3_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_83(t);
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          ATerm s_18 = t;
          int t_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(t_18);
            }
          else
            {
              t = s_18;
              {
                ATerm v_18 = t;
                int w_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(w_18);
                  }
                else
                  {
                    t = v_18;
                    {
                      ATerm y_18 = t;
                      int z_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(p_6, q_6, r_6, t);
                          ;
                          LocalPopChoice(z_18);
                        }
                      else
                        {
                          t = y_18;
                          {
                            ATerm b_19 = t;
                            int c_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(c_19);
                              }
                            else
                              {
                                t = b_19;
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
  ATerm o_6 (ATerm t)
  {
    ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
    if(((l_27 != NULL) && (l_27 != t)))
      _fail(t);
    else
      l_27 = t;
    {
      ATerm f_19 = t;
      int g_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((k_27 != NULL) && (k_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_6, t);
          ;
          LocalPopChoice(g_19);
        }
      else
        {
          t = f_19;
          t = term_h_19;
          if(((k_27 != NULL) && (k_27 != t)))
            _fail(t);
          else
            k_27 = t;
        }
      t = not_null(k_27);
      t = ReadFromFile_0_0(t);
      if(((m_27 != NULL) && (m_27 != t)))
        _fail(t);
      else
        m_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_27), not_null(m_27));
      t = apply_strategy_1_0(k_83, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(m_6, m_83, n_6, o_6, t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,l_8 = NULL;
  s_27 = t;
  if(match_cons(t, sym__2))
    {
      o_27 = ATgetArgument(t, 0);
      p_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_27);
  n_27 = t;
  t = p_27;
  if(match_cons(t, sym_TreeGrammar_1))
    {
      r_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4(r_27, t);
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_27, q_27);
  l_8 = t;
  t = SSLsetAnnotations(l_8, n_27);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(z_6, _fail, default_usage_0_0, t);
  return(t);
}
