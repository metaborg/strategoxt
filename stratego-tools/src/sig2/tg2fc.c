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
Symbol sym_Imports_1;
Symbol sym_Strategies_1;
Symbol sym_Module_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Str_1;
Symbol sym_CallNoArgs_1;
Symbol sym_Choice_2;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Build_1;
Symbol sym_LChoice_2;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
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
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
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
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
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
ATerm term_i_16;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_h_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_m_10;
ATerm term_f_10;
ATerm term_y_9;
ATerm term_t_9;
ATerm term_y_8;
ATerm term_u_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_z_7;
ATerm term_u_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_k_7;
ATerm term_h_7;
ATerm term_f_7;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_j_6;
void init_constant_terms (void)
{
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("fc-param", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("is-string", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_7);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_k_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("is-int", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_7);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_q_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("fc-", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a ", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("if-verbose2", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_8);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("debug", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_8);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("integers", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("verbose", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_r_10, term_w_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym__2, term_d_11, term_j_6);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_r_11);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_j_6);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__2, term_r_13, term_j_6);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_j_6);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym__2, term_l_15, term_j_6);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm map_with_index_1_0 (ATerm h_91 (ATerm), ATerm);
ATerm j_4 (ATerm y_42, ATerm z_42, ATerm);
ATerm while_not_2_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm);
ATerm for_3_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm);
ATerm b_0 (ATerm);
ATerm f_0 (ATerm);
ATerm q_0 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm create_call_0_0 (ATerm);
ATerm to_fc_Body_0_0 (ATerm);
ATerm u_0 (ATerm);
ATerm w_0 (ATerm);
ATerm k_4 (ATerm k_30, ATerm i_30, ATerm g_30, ATerm);
ATerm x_0 (ATerm);
ATerm l_4 (ATerm d_30, ATerm);
ATerm o_4 (ATerm f_32, ATerm g_32, ATerm);
ATerm p_4 (ATerm v_50, ATerm w_50, ATerm);
ATerm r_4 (ATerm s_99 (ATerm), ATerm q_392, ATerm z_50, ATerm);
ATerm q_4 (ATerm r_50, ATerm s_50, ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm c_83 (ATerm), ATerm);
ATerm f_11 (ATerm v_10, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm s_4 (ATerm x_50, ATerm);
ATerm t_4 (ATerm h_32, ATerm i_32, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_14 (ATerm z_11, ATerm);
ATerm d_14 (ATerm f_12, ATerm r_12, ATerm s_12, ATerm);
ATerm f_14 (ATerm f_13, ATerm g_13, ATerm i_13, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm f_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_89 (ATerm), ATerm);
ATerm n_4 (ATerm s_64, ATerm t_64, ATerm);
ATerm debug_1_0 (ATerm q_99 (ATerm), ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_110 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm c_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm z_4 (ATerm j_57, ATerm k_57, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm x_4 (ATerm o_44, ATerm p_44, ATerm n_44, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm f_3 (ATerm);
ATerm h_3 (ATerm);
ATerm k_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm u_4 (ATerm s_42, ATerm t_42, ATerm);
ATerm foldr_2_0 (ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_110 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm need_help_1_0 (ATerm a_84 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_89 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm w_4 (ATerm f_46, ATerm g_46, ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm z_101 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm parse_options_1_0 (ATerm y_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm q_5 (ATerm);
ATerm t_5 (ATerm);
ATerm x_5 (ATerm);
ATerm a_6 (ATerm);
ATerm iowrap_3_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm);
ATerm i_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL,p_0 = NULL;
  l_0 = t;
  t = term_j_6;
  t = whoami_0_0(t);
  m_0 = t;
  t = term_l_6;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_6), m_0), term_m_6);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = term_o_6;
  n_0 = t;
  t = SSL_exit(n_0);
  t = l_0;
  return(t);
}
ATerm map_with_index_1_0 (ATerm h_91 (ATerm), ATerm t)
{
  ATerm t_0 = NULL;
  ATerm u_1 (ATerm t)
  {
    ATerm v_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
    if(match_cons(t, sym__2))
      {
        v_0 = ATgetArgument(t, 0);
        y_0 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = y_0;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATempty;
      }
    else
      {
        ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,p_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_0 = ATgetFirst((ATermList) t);
            a_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_0, z_0);
        t = h_91(t);
        g_1 = t;
        t = term_o_6;
        p_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_0, term_o_6);
        t = u_4(v_0, p_1, t);
        i_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_1, a_1);
        t = u_1(t);
        h_1 = t;
        t = (ATerm) ATinsert(CheckATermList(h_1), g_1);
      }
    return(t);
  }
  if(((t_0 != NULL) && (t_0 != t)))
    _fail(t);
  else
    t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_6, not_null(t_0));
  t = u_1(t);
  return(t);
}
ATerm j_4 (ATerm y_42, ATerm z_42, ATerm t)
{
  ATerm s_6 = t;
  int y_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(y_42, z_42);
      ;
      LocalPopChoice(y_6);
    }
  else
    {
      t = s_6;
      t = SSL_subtr(y_42, z_42);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_102(t);
        ;
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        t = v_102(t);
        t = v_1(t);
      }
    return(t);
  }
  t = v_1(t);
  return(t);
}
ATerm for_3_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm t)
{
  t = x_102(t);
  t = while_not_2_0(y_102, z_102, t);
  return(t);
}
ATerm b_0 (ATerm t)
{
  ATerm b_2 = NULL,f_2 = NULL;
  if(match_cons(t, sym__2))
    {
      b_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_2, f_2, (ATerm) ATempty);
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm h_2 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm d_7 = ATgetArgument(t, 0);
      if(((ATgetType(d_7) != AT_INT) || (ATgetInt((ATermInt) d_7) != 0)))
        _fail(t);
      {
        ATerm e_7 = ATgetArgument(t, 1);
      }
      h_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_2;
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL;
  if(match_cons(t, sym__3))
    {
      j_2 = ATgetArgument(t, 0);
      k_2 = ATgetArgument(t, 1);
      m_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_2, term_o_6);
  t = geq_0_0(t);
  t = term_o_6;
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_2, term_o_6);
  t = j_4(j_2, o_2, t);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_2, k_2, (ATerm) ATinsert(CheckATermList(m_2), k_2));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(b_0, f_0, q_0, t);
  return(t);
}
ATerm create_call_0_0 (ATerm t)
{
  ATerm b_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL;
  b_3 = t;
  if(match_cons(t, sym_Param_1))
    {
      g_3 = ATgetArgument(t, 0);
      {
        ATerm r_0 = NULL,s_0 = NULL;
        t = SSL_int_to_string(g_3);
        r_0 = t;
        t = term_f_7;
        s_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, r_0);
        t = n_4(s_0, r_0, t);
      }
    }
  else
    {
      if(match_cons(t, sym_String_0))
        {
          t = term_o_7;
        }
      else
        {
          if(match_cons(t, sym_Int_0))
            {
              t = term_r_7;
            }
          else
            {
              if(match_cons(t, sym_NonTermRef_2))
                {
                  g_3 = ATgetArgument(t, 0);
                  j_3 = ATgetArgument(t, 1);
                  {
                    ATerm l_3 = NULL,o_3 = NULL,p_3 = NULL;
                    t = g_3;
                    if(match_cons(t, sym_Id_1))
                      {
                        i_3 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_u_7;
                    p_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_u_7, i_3);
                    t = n_4(p_3, i_3, t);
                    l_3 = t;
                    t = j_3;
                    t = map_1_0(create_call_0_0, t);
                    o_3 = t;
                    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_3), o_3);
                  }
                }
              else
                {
                  ATerm t_3 = NULL;
                  if(match_cons(t, sym_Prod_2))
                    {
                      g_3 = ATgetArgument(t, 0);
                      j_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = g_3;
                  if(match_cons(t, sym_Id_1))
                    {
                      i_3 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = j_3;
                  t = map_1_0(create_call_0_0, t);
                  t_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, i_3), t_3);
                }
            }
        }
    }
  return(t);
}
ATerm to_fc_Body_0_0 (ATerm t)
{
  ATerm c_4 = NULL,f_4 = NULL,i_4 = NULL,m_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_4 = ATgetFirst((ATermList) t);
      m_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_4 = ATgetFirst((ATermList) t);
      f_4 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_4 = NULL,c_5 = NULL;
        t = i_4;
        t = create_call_0_0(t);
        y_4 = t;
        t = (ATerm) ATinsert(CheckATermList(f_4), c_4);
        t = to_fc_Body_0_0(t);
        c_5 = t;
        t = (ATerm) ATmakeAppl(sym_Choice_2, y_4, c_5);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_4;
      t = create_call_0_0(t);
    }
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL;
  s_5 = t;
  t = SSL_explode_term(s_5);
  if(match_cons(t, sym__2))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_7 = ATgetArgument(t, 1);
        if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
          {
            r_5 = ATgetFirst((ATermList) w_7);
            {
              ATerm y_7 = (ATerm) ATgetNext((ATermList) w_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_5;
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,y_5 = NULL;
  v_5 = t;
  t = SSL_int_to_string(v_5);
  w_5 = t;
  t = term_f_7;
  y_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_7, w_5);
  t = n_4(y_5, w_5, t);
  u_5 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_5);
  return(t);
}
ATerm k_4 (ATerm k_30, ATerm i_30, ATerm g_30, ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL,j_5 = NULL,n_5 = NULL,o_5 = NULL;
  t = term_u_7;
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_7, k_30);
  t = n_4(o_5, k_30, t);
  f_5 = t;
  t = g_30;
  t = to_fc_Body_0_0(t);
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_30, term_j_6);
  t = copy_0_0(t);
  t = map_with_index_1_0(u_0, t);
  t = map_1_0(w_0, t);
  h_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_8), k_30), term_z_7);
  n_5 = t;
  t = SSL_concat_strings(n_5);
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, f_5, h_5, (ATerm) ATmakeAppl(sym_LChoice_2, g_5, (ATerm) ATmakeAppl(sym_Call_2, term_e_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, term_g_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, j_5))))))));
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,e_6 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      if(match_cons(h_8, sym_Id_1))
        {
          b_6 = ATgetArgument(h_8, 0);
        }
      else
        _fail(t);
      c_6 = ATgetArgument(t, 1);
      e_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_4(b_6, c_6, e_6, t);
  return(t);
}
ATerm l_4 (ATerm d_30, ATerm t)
{
  ATerm z_5 = NULL;
  t = d_30;
  t = map_1_0(x_0, t);
  z_5 = t;
  t = (ATerm) ATmakeAppl(sym_Module_2, term_j_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, z_5)), (ATerm) ATmakeAppl(sym_Imports_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_8), term_m_8), term_k_8))));
  return(t);
}
ATerm o_4 (ATerm f_32, ATerm g_32, ATerm t)
{
  ATerm f_6 = NULL;
  t = SSL_fputc(f_32, g_32);
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_6);
  return(t);
}
ATerm p_4 (ATerm v_50, ATerm w_50, ATerm t)
{
  ATerm g_6 = NULL;
  t = SSL_write_term_to_stream_text(v_50, w_50);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_6);
  return(t);
}
ATerm r_4 (ATerm s_99 (ATerm), ATerm q_392, ATerm z_50, ATerm t)
{
  ATerm h_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_392, term_o_8);
  t = open_stream_0_0(t);
  h_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_6, z_50);
  t = s_99(t);
  t = fclose_0_0(t);
  t = z_50;
  return(t);
}
ATerm q_4 (ATerm r_50, ATerm s_50, ATerm t)
{
  ATerm k_6 = NULL;
  t = SSL_write_term_to_stream_baf(r_50, s_50);
  k_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_6);
  return(t);
}
ATerm c_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_8 = ATgetArgument(t, 0);
      if(match_cons(q_8, sym_Stream_1))
        {
          r_1 = ATgetArgument(q_8, 0);
        }
      else
        _fail(t);
      s_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(r_1, s_1, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm i_2 = NULL,l_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_8 = ATgetArgument(t, 0);
      if(match_cons(s_8, sym_Stream_1))
        {
          q_2 = ATgetArgument(s_8, 0);
        }
      else
        _fail(t);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_4(q_2, r_2, t);
  i_2 = t;
  t = term_u_8;
  l_2 = t;
  t = i_2;
  if(match_cons(t, sym_Stream_1))
    {
      p_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, i_2);
  t = o_4(l_2, p_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_6 = NULL,v_6 = NULL,w_6 = NULL,z_6 = NULL,a_7 = NULL,g_7 = NULL,i_7 = NULL,j_7 = NULL,l_7 = NULL,m_7 = NULL,d_9 = NULL,j_9 = NULL,w_2 = NULL,k_0 = NULL;
  if(((v_6 != NULL) && (v_6 != t)))
    _fail(t);
  else
    v_6 = t;
  if(match_cons(t, sym__2))
    {
      if(((j_7 != NULL) && (j_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_7 = ATgetArgument(t, 0);
      if(((l_7 != NULL) && (l_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(v_6));
  if(((i_7 != NULL) && (i_7 != t)))
    _fail(t);
  else
    i_7 = t;
  t = not_null(j_7);
  {
    ATerm w_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((q_6 != NULL) && (q_6 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(b_1, t);
        ;
        LocalPopChoice(x_8);
      }
    else
      {
        t = w_8;
        t = term_y_8;
        if(((q_6 != NULL) && (q_6 != t)))
          _fail(t);
        else
          q_6 = t;
      }
    if(((m_7 != NULL) && (m_7 != t)))
      _fail(t);
    else
      m_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_7), not_null(l_7));
    if(((k_0 != NULL) && (k_0 != t)))
      _fail(t);
    else
      k_0 = t;
    t = SSLsetAnnotations(not_null(k_0), not_null(i_7));
    t = not_null(v_6);
    if(match_cons(t, sym__2))
      {
        if(((z_6 != NULL) && (z_6 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          z_6 = ATgetArgument(t, 0);
        if(((a_7 != NULL) && (a_7 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          a_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(v_6));
    if(((w_6 != NULL) && (w_6 != t)))
      _fail(t);
    else
      w_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), (ATerm) ATmakeAppl(sym__2, not_null(q_6), not_null(a_7)));
    if(((w_2 != NULL) && (w_2 != t)))
      _fail(t);
    else
      w_2 = t;
    t = SSLsetAnnotations(not_null(w_2), not_null(w_6));
    if(((g_7 != NULL) && (g_7 != t)))
      _fail(t);
    else
      g_7 = t;
    if(match_cons(t, sym__2))
      {
        if(((d_9 != NULL) && (d_9 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          d_9 = ATgetArgument(t, 0);
        if(((j_9 != NULL) && (j_9 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          j_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm z_8 = t;
      int a_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,q_1 = NULL,x_2 = NULL;
          t = SSLgetAnnotations(not_null(g_7));
          j_1 = t;
          t = not_null(d_9);
          t = fetch_1_0(c_1, t);
          m_1 = t;
          t = not_null(j_9);
          if(match_cons(t, sym__2))
            {
              o_1 = ATgetArgument(t, 0);
              q_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_4(d_1, o_1, q_1, t);
          n_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_1, n_1);
          x_2 = t;
          t = SSLsetAnnotations(x_2, j_1);
          ;
          LocalPopChoice(a_9);
        }
      else
        {
          t = z_8;
          {
            ATerm z_1 = NULL,d_2 = NULL,e_2 = NULL,g_2 = NULL,y_2 = NULL;
            t = SSLgetAnnotations(not_null(g_7));
            z_1 = t;
            t = not_null(j_9);
            if(match_cons(t, sym__2))
              {
                e_2 = ATgetArgument(t, 0);
                g_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_4(e_1, e_2, g_2, t);
            d_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), d_2);
            y_2 = t;
            t = SSLsetAnnotations(y_2, z_1);
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
ATerm apply_strategy_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,w_9 = NULL,x_9 = NULL,a_10 = NULL,b_10 = NULL;
  b_10 = t;
  t = dtime_0_0(t);
  t = b_10;
  t = c_83(t);
  a_10 = t;
  t = dtime_0_0(t);
  q_9 = t;
  t = a_10;
  if(match_cons(t, sym__2))
    {
      w_9 = ATgetArgument(t, 0);
      x_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_9), (ATerm) ATmakeAppl(sym_Runtime_1, q_9)), x_9);
  return(t);
}
ATerm f_11 (ATerm v_10, ATerm t)
{
  t = SSL_fclose(v_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_10 = NULL,a_11 = NULL;
  a_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_10 = ATgetArgument(t, 0);
      {
        ATerm e_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_10);
            ;
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            t = f_11(a_11, t);
          }
      }
    }
  else
    {
      t = f_11(a_11, t);
    }
  return(t);
}
ATerm s_4 (ATerm x_50, ATerm t)
{
  t = SSL_read_term_from_stream(x_50);
  return(t);
}
ATerm t_4 (ATerm h_32, ATerm i_32, ATerm t)
{
  ATerm h_11 = NULL;
  t = SSL_fopen(h_32, i_32);
  h_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_11);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_11 = NULL;
  t = SSL_stdin_stream();
  l_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_11 = NULL;
  t = SSL_stdout_stream();
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_11 = NULL;
  t = SSL_stderr_stream();
  p_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_11);
  return(t);
}
ATerm a_14 (ATerm z_11, ATerm t)
{
  ATerm a_12 = NULL;
  t = SSL_explode_term(z_11);
  if(match_cons(t, sym__2))
    {
      ATerm g_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_9 = ATgetArgument(t, 1);
        if(((ATgetType(h_9) == AT_LIST) && !(ATisEmpty(h_9))))
          {
            a_12 = ATgetFirst((ATermList) h_9);
            {
              ATerm i_9 = (ATerm) ATgetNext((ATermList) h_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_12;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_12;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_12;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_12;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm d_14 (ATerm f_12, ATerm r_12, ATerm s_12, ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,b_13 = NULL,t_6 = NULL;
  t = SSLgetAnnotations(s_12);
  v_12 = t;
  t = f_12;
  if(match_cons(t, sym_Path_1))
    {
      b_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_13, r_12);
  t_6 = t;
  t = SSLsetAnnotations(t_6, v_12);
  if(match_cons(t, sym__2))
    {
      t_12 = ATgetArgument(t, 0);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4(t_12, u_12, t);
  return(t);
}
ATerm f_14 (ATerm f_13, ATerm g_13, ATerm i_13, ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,q_13 = NULL,t_13 = NULL,n_7 = NULL;
  t = SSLgetAnnotations(i_13);
  q_13 = t;
  t = SSL_is_string(f_13);
  t_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_13, g_13);
  n_7 = t;
  t = SSLsetAnnotations(n_7, q_13);
  if(match_cons(t, sym__2))
    {
      j_13 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4(j_13, k_13, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_9 = ATgetArgument(t, 0);
      ATerm l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  x_13 = t;
  if(match_cons(t, sym__2))
    {
      y_13 = ATgetArgument(t, 0);
      z_13 = ATgetArgument(t, 1);
      {
        ATerm m_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_14(x_13, t);
            ;
            LocalPopChoice(o_9);
          }
        else
          {
            t = m_9;
            {
              ATerm p_9 = t;
              int r_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_14(y_13, z_13, x_13, t);
                  ;
                  LocalPopChoice(r_9);
                }
              else
                {
                  t = p_9;
                  t = f_14(y_13, z_13, x_13, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_14(x_13, t);
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_14 = NULL,i_14 = NULL,j_14 = NULL;
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_14 = NULL;
      k_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_14, term_y_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      t = debug_1_0(f_1, t);
      _fail(t);
    }
  i_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_4(j_14, t);
  g_14 = t;
  t = i_14;
  t = fclose_0_0(t);
  t = g_14;
  return(t);
}
ATerm fetch_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm y_15 (ATerm t)
  {
    ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
    v_15 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_15 = ATgetFirst((ATermList) t);
        x_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_9 = t;
      int c_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_3 = NULL,y_3 = NULL,s_7 = NULL;
          t = SSLgetAnnotations(v_15);
          u_3 = t;
          t = w_15;
          t = u_89(t);
          y_3 = t;
          t = (ATerm) ATinsert(CheckATermList(x_15), y_3);
          s_7 = t;
          t = SSLsetAnnotations(s_7, u_3);
          ;
          LocalPopChoice(c_10);
        }
      else
        {
          t = z_9;
          {
            ATerm i_5 = NULL,m_5 = NULL,t_7 = NULL;
            t = SSLgetAnnotations(v_15);
            i_5 = t;
            t = x_15;
            t = y_15(t);
            m_5 = t;
            t = (ATerm) ATinsert(CheckATermList(m_5), w_15);
            t_7 = t;
            t = SSLsetAnnotations(t_7, i_5);
          }
        }
    }
    return(t);
  }
  t = y_15(t);
  return(t);
}
ATerm n_4 (ATerm s_64, ATerm t_64, ATerm t)
{
  t = SSL_strcat(s_64, t_64);
  return(t);
}
ATerm debug_1_0 (ATerm q_99 (ATerm), ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,l_16 = NULL;
  f_16 = t;
  t = q_99(t);
  g_16 = t;
  t = term_l_6;
  h_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_16), g_16);
  l_16 = t;
  t = SSL_printnl(h_16, l_16);
  t = f_16;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_17 = NULL;
      a_17 = t;
      t = SSL_is_string(a_17);
      ;
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_1, t);
            ;
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            {
              ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
              m_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_17 = ATgetArgument(t, 0);
                  t = n_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_17 = ATgetArgument(t, 0);
                      t = n_17;
                      {
                        ATerm k_10 = t;
                        int l_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_10);
                          }
                        else
                          {
                            t = k_10;
                            t = debug_1_0(l_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_17 = NULL,t_17 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_17 = ATgetArgument(t, 0);
                          o_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_17;
                      t = eval_config_0_0(t);
                      s_17 = t;
                      t = o_17;
                      t = eval_config_0_0(t);
                      t_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_17, t_17);
                      t = n_4(s_17, t_17, t);
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
  ATerm x_17 = NULL,y_17 = NULL;
  x_17 = t;
  t = term_m_10;
  y_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, x_17);
  t = w_4(y_17, x_17, t);
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_17 = NULL,a_18 = NULL;
        t = eval_config_0_0(t);
        z_17 = t;
        t = term_m_10;
        a_18 = t;
        t = SSL_table_put(a_18, x_17, z_17);
        t = z_17;
        ;
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  ATerm i_18 = NULL;
  i_18 = t;
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_18 = NULL;
        t = term_r_10;
        t = get_config_0_0(t);
        m_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_18, term_s_10);
        t = geq_0_0(t);
        t = i_18;
        t = b_110(t);
        ;
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        t = i_18;
      }
  }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm r_18 = NULL;
  r_18 = t;
  if(match_string(t, "-k"))
    {
      t = r_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_18;
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm s_18 = NULL,u_18 = NULL,v_18 = NULL;
  s_18 = t;
  t = SSL_string_to_int(s_18);
  u_18 = t;
  t = term_t_10;
  v_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_10, u_18);
  t = z_4(v_18, u_18, t);
  t = s_18;
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_1, w_1, x_1, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm x_18 = NULL;
  x_18 = t;
  if(match_string(t, "-S"))
    {
      t = x_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_18;
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL;
  t = term_r_10;
  y_18 = t;
  t = term_w_10;
  z_18 = t;
  t = term_x_10;
  t = z_4(y_18, z_18, t);
  t = term_z_10;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_b_11;
  return(t);
}
ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
  a_19 = t;
  t = SSL_string_to_int(a_19);
  b_19 = t;
  t = term_r_10;
  c_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_10, b_19);
  t = z_4(c_19, b_19, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_19);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_c_11;
  return(t);
}
ATerm v_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL;
  t = term_d_11;
  d_19 = t;
  t = term_j_6;
  e_19 = t;
  t = term_e_11;
  t = z_4(d_19, e_19, t);
  t = term_g_11;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_i_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_1, a_2, c_2, t);
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      {
        ATerm m_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_2, t_2, u_2, t);
            ;
            LocalPopChoice(o_11);
          }
        else
          {
            t = m_11;
            t = Option_3_0(v_2, z_2, a_3, t);
          }
      }
    }
  return(t);
}
ATerm z_4 (ATerm j_57, ATerm k_57, ATerm t)
{
  ATerm f_19 = NULL;
  t = term_m_10;
  f_19 = t;
  t = SSL_table_put(f_19, j_57, k_57);
  t = (ATerm) ATmakeAppl(sym__3, term_m_10, j_57, k_57);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
      t = term_j_6;
      t = d_0(t);
      k_19 = t;
      t = term_q_11;
      l_19 = t;
      t = term_r_11;
      m_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_11, term_r_11, k_19);
      t = x_4(l_19, m_19, k_19, t);
      _fail(t);
    }
  else
    {
      ATerm q_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_19 = ATgetFirst((ATermList) t);
          j_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_19;
      t = a_0(t);
      t = term_j_6;
      t = c_0(t);
      q_19 = t;
      t = (ATerm) ATinsert(CheckATermList(j_19), q_19);
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm s_19 = NULL;
  s_19 = t;
  if(match_string(t, "-o"))
    {
      t = s_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_19;
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL;
  t_19 = t;
  t = term_s_11;
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_11, t_19);
  t = z_4(u_19, t_19, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_19);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_t_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_3, d_3, e_3, t);
  return(t);
}
ATerm x_4 (ATerm o_44, ATerm p_44, ATerm n_44, ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_44, p_44);
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_11 = ATgetArgument(t, 0);
            ATerm x_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_44, p_44);
        t = w_4(o_44, p_44, t);
        ;
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        t = (ATerm) ATempty;
      }
    x_19 = t;
    t = (ATerm) ATinsert(CheckATermList(x_19), n_44);
    y_19 = t;
    t = SSL_table_put(o_44, p_44, y_19);
    t = w_19;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
      t = term_j_6;
      t = j_0(t);
      j_20 = t;
      t = term_q_11;
      k_20 = t;
      t = term_r_11;
      l_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_11, term_r_11, j_20);
      t = x_4(k_20, l_20, j_20, t);
      _fail(t);
    }
  else
    {
      ATerm p_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_20 = ATgetFirst((ATermList) t);
          g_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_20 = ATgetFirst((ATermList) t);
          i_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_20;
      t = h_0(t);
      t = h_20;
      t = i_0(t);
      p_20 = t;
      t = (ATerm) ATinsert(CheckATermList(i_20), p_20);
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm r_20 = NULL;
  r_20 = t;
  if(match_string(t, "-i"))
    {
      t = r_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_20;
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL;
  s_20 = t;
  t = term_y_11;
  t_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_11, s_20);
  t = z_4(t_20, s_20, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_20);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_b_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_3, h_3, k_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_6;
  t = whoami_0_0(t);
  u_20 = t;
  t = term_l_6;
  w_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_12), u_20);
  x_20 = t;
  t = SSL_printnl(w_20, x_20);
  t = term_o_6;
  v_20 = t;
  t = SSL_exit(v_20);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_12;
  t = get_config_0_0(t);
  return(t);
}
ATerm u_4 (ATerm s_42, ATerm t_42, ATerm t)
{
  ATerm e_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_42, t_42);
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = e_12;
      t = SSL_addr(s_42, t_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  z_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_20;
      t = c_96(t);
    }
  else
    {
      ATerm e_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_21 = ATgetFirst((ATermList) t);
          b_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_21;
      t = foldr_2_0(c_96, d_96, t);
      e_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_21, e_21);
      t = d_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm u_6 = NULL,x_6 = NULL;
  if(match_cons(t, sym__2))
    {
      u_6 = ATgetArgument(t, 0);
      x_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4(u_6, x_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_21 = NULL,p_6 = NULL,r_6 = NULL;
  t = times_0_0(t);
  r_6 = t;
  t = SSL_explode_term(r_6);
  if(match_cons(t, sym__2))
    {
      ATerm h_12 = ATgetArgument(t, 0);
      p_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6;
  t = foldr_2_0(m_3, n_3, t);
  h_21 = t;
  t = SSL_TicksToSeconds(h_21);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  s_21 = t;
  if(match_cons(t, sym__2))
    {
      t_21 = ATgetArgument(t, 0);
      u_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_21;
        if((t_21 != t))
          {
            _fail(t);
          }
        t = s_21;
        ;
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = (ATerm) ATmakeAppl(sym__2, t_21, u_21);
        {
          ATerm k_12 = t;
          int l_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_21, u_21);
              ;
              LocalPopChoice(l_12);
            }
          else
            {
              t = k_12;
              t = SSL_gtr(t_21, u_21);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_21, u_21);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_110 (ATerm), ATerm t)
{
  ATerm y_21 = NULL;
  y_21 = t;
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_22 = NULL;
        t = term_r_10;
        t = get_config_0_0(t);
        a_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_22, term_o_6);
        t = geq_0_0(t);
        t = y_21;
        t = a_110(t);
        ;
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        t = y_21;
      }
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,f_22 = NULL,g_22 = NULL;
  t = run_time_0_0(t);
  c_22 = t;
  t = term_j_6;
  t = whoami_0_0(t);
  d_22 = t;
  t = term_l_6;
  f_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_12), c_22), term_o_12), d_22);
  g_22 = t;
  t = SSL_printnl(f_22, g_22);
  t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_12), c_22), term_o_12), d_22));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_10;
  h_22 = t;
  t = SSL_exit(h_22);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL;
  q_22 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_22;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_22 = ATgetArgument(t, 0);
          {
            ATerm a_8 = NULL,x_7 = NULL;
            t = SSLgetAnnotations(q_22);
            a_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_22);
            x_7 = t;
            t = SSLsetAnnotations(x_7, a_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_22;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm q_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = q_12;
      t = fetch_1_0(r_3, t);
    }
  t = a_84(t);
  return(t);
}
ATerm map_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  ATerm g_23 (ATerm t)
  {
    ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
    d_23 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_23;
      }
    else
      {
        ATerm l_8 = NULL,b_9 = NULL,c_9 = NULL,b_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_23 = ATgetFirst((ATermList) t);
            f_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_23);
        l_8 = t;
        t = e_23;
        t = k_89(t);
        b_9 = t;
        t = f_23;
        t = g_23(t);
        c_9 = t;
        t = (ATerm) ATinsert(CheckATermList(c_9), b_9);
        b_8 = t;
        t = SSLsetAnnotations(b_8, l_8);
      }
    return(t);
  }
  t = g_23(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_23 = ATgetFirst((ATermList) t);
      k_23 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_23 = NULL,p_23 = NULL;
        ATerm s_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_23)), not_null(p_23));
          return(t);
        }
        t = not_null(k_23);
        t = g_0(t);
        if(((o_23 != NULL) && (o_23 != t)))
          _fail(t);
        else
          o_23 = t;
        t = not_null(j_23);
        t = e_0(t);
        if(((p_23 != NULL) && (p_23 != t)))
          _fail(t);
        else
          p_23 = t;
        t = not_null(k_23);
        t = reverse_acc_2_0(e_0, s_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_6;
      t = g_0(t);
    }
  return(t);
}
ATerm w_4 (ATerm f_46, ATerm g_46, ATerm t)
{
  t = SSL_table_get(f_46, g_46);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,i_8 = NULL;
  v_23 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_23);
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_23);
  i_8 = t;
  t = SSLsetAnnotations(i_8, t_23);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm x_23 = NULL;
  x_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_23), term_y_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL;
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      t = fetch_1_0(v_3, t);
    }
  t = term_c_13;
  t = echo_0_0(t);
  t = term_q_11;
  r_23 = t;
  t = term_r_11;
  s_23 = t;
  t = term_d_13;
  t = w_4(r_23, s_23, t);
  t = reverse_acc_2_0(_id, w_3, t);
  t = map_1_0(x_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
  z_23 = t;
  {
    ATerm e_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_23;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_13 = ATgetFirst((ATermList) t);
                ATerm m_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_23;
          }
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = e_13;
        t = (ATerm) ATinsert(ATempty, z_23);
      }
    a_24 = t;
    t = term_y_8;
    b_24 = t;
    t = SSL_printnl(b_24, a_24);
    t = z_23;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_12;
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
ATerm a_4 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL;
  t = term_n_13;
  f_24 = t;
  t = term_j_6;
  g_24 = t;
  t = term_o_13;
  t = z_4(f_24, g_24, t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_p_13;
  return(t);
}
ATerm d_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  t = term_n_13;
  j_24 = t;
  t = term_j_6;
  k_24 = t;
  t = term_o_13;
  t = z_4(j_24, k_24, t);
  t = term_r_13;
  h_24 = t;
  t = term_j_6;
  i_24 = t;
  t = term_s_13;
  t = z_4(h_24, i_24, t);
  t = term_u_13;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_v_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_13 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_3, a_4, b_4, t);
      ;
      LocalPopChoice(b_14);
    }
  else
    {
      t = w_13;
      t = Option_3_0(d_4, e_4, g_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,p_8 = NULL;
  q_24 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_24 = ATgetFirst((ATermList) t);
      n_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_24);
  l_24 = t;
  t = m_24;
  t = o_69(t);
  o_24 = t;
  t = n_24;
  t = p_69(t);
  p_24 = t;
  t = (ATerm) ATinsert(CheckATermList(p_24), o_24);
  p_8 = t;
  t = SSLsetAnnotations(p_8, l_24);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_101 (ATerm), ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,a_25 = NULL,b_25 = NULL,r_8 = NULL;
  if(((v_24 != NULL) && (v_24 != t)))
    _fail(t);
  else
    v_24 = t;
  {
    ATerm c_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_14;
        t = z_101(t);
        ;
        LocalPopChoice(e_14);
      }
    else
      {
        t = c_14;
      }
    t = not_null(v_24);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((x_24 != NULL) && (x_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          x_24 = ATgetFirst((ATermList) t);
        if(((y_24 != NULL) && (y_24 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          y_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(v_24));
    if(((w_24 != NULL) && (w_24 != t)))
      _fail(t);
    else
      w_24 = t;
    t = term_d_12;
    if(((b_25 != NULL) && (b_25 != t)))
      _fail(t);
    else
      b_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_d_12, not_null(x_24));
    t = z_4(not_null(b_25), not_null(x_24), t);
    t = not_null(y_24);
    {
      ATerm l_25 (ATerm t)
      {
        ATerm l_14 = t;
        int m_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_14 = t;
            int o_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_25 = NULL;
                e_25 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_25;
                ;
                LocalPopChoice(o_14);
              }
            else
              {
                t = n_14;
                t = z_101(t);
                t = Cons_2_0(_id, l_25, t);
              }
            ;
            LocalPopChoice(m_14);
          }
        else
          {
            t = l_14;
            {
              ATerm h_25 = NULL,i_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_25 = ATgetFirst((ATermList) t);
                  i_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_25), (ATerm) ATmakeAppl(sym_Undefined_1, h_25));
            }
          }
        return(t);
      }
      t = l_25(t);
      if(((a_25 != NULL) && (a_25 != t)))
        _fail(t);
      else
        a_25 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(a_25)), (ATerm) ATmakeAppl(sym_Program_1, not_null(x_24)));
      if(((r_8 != NULL) && (r_8 != t)))
        _fail(t);
      else
        r_8 = t;
      t = SSLsetAnnotations(not_null(r_8), not_null(w_24));
    }
  }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm x_25 = NULL;
  x_25 = t;
  if(match_string(t, "--help"))
    {
      t = x_25;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_25;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_25;
        }
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  t = term_x_12;
  y_25 = t;
  t = term_j_6;
  z_25 = t;
  t = term_p_14;
  t = z_4(y_25, z_25, t);
  t = term_q_14;
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_r_14;
  return(t);
}
ATerm d_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_101 (ATerm), ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  if(((s_25 != NULL) && (s_25 != t)))
    _fail(t);
  else
    s_25 = t;
  t = term_q_11;
  if(((u_25 != NULL) && (u_25 != t)))
    _fail(t);
  else
    u_25 = t;
  t = term_r_11;
  if(((v_25 != NULL) && (v_25 != t)))
    _fail(t);
  else
    v_25 = t;
  t = (ATerm) ATempty;
  if(((w_25 != NULL) && (w_25 != t)))
    _fail(t);
  else
    w_25 = t;
  t = SSL_table_put(not_null(u_25), not_null(v_25), not_null(w_25));
  t = not_null(s_25);
  {
    ATerm h_4 (ATerm t)
    {
      ATerm s_14 = t;
      int t_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_101(t);
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
                t = Option_3_0(v_4, a_5, b_5, t);
                ;
                LocalPopChoice(v_14);
              }
            else
              {
                t = u_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_4, t);
    {
      ATerm w_14 = t;
      int x_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_26 = NULL;
          g_26 = t;
          {
            ATerm y_14 = t;
            int z_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_9 = NULL;
                t = g_26;
                {
                  ATerm a_15 = t;
                  int b_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_x_12;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(b_15);
                    }
                  else
                    {
                      t = a_15;
                      t = fetch_1_0(d_5, t);
                    }
                  t = g_26;
                  t = default_system_usage_0_0(t);
                  t = term_w_10;
                  n_9 = t;
                  t = SSL_exit(n_9);
                }
                ;
                LocalPopChoice(z_14);
              }
            else
              {
                t = y_14;
                {
                  ATerm s_9 = NULL;
                  t = term_n_13;
                  t = get_config_0_0(t);
                  t = g_26;
                  t = default_system_about_0_0(t);
                  t = term_w_10;
                  s_9 = t;
                  t = SSL_exit(s_9);
                }
              }
          }
          ;
          LocalPopChoice(x_14);
        }
      else
        {
          t = w_14;
          {
            ATerm c_15 = t;
            int d_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
                ATerm e_5 (ATerm t)
                {
                  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,t_8 = NULL;
                  m_26 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      l_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_26);
                  k_26 = t;
                  t = l_26;
                  if(((q_25 != NULL) && (q_25 != t)))
                    _fail(t);
                  else
                    q_25 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, l_26);
                  t_8 = t;
                  t = SSLsetAnnotations(t_8, k_26);
                  return(t);
                }
                t = fetch_1_0(e_5, t);
                t = term_l_6;
                if(((i_26 != NULL) && (i_26 != t)))
                  _fail(t);
                else
                  i_26 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_25)), term_e_15);
                if(((j_26 != NULL) && (j_26 != t)))
                  _fail(t);
                else
                  j_26 = t;
                t = SSL_printnl(not_null(i_26), not_null(j_26));
                t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_25)), term_e_15));
                t = default_system_usage_0_0(t);
                t = term_o_6;
                if(((h_26 != NULL) && (h_26 != t)))
                  _fail(t);
                else
                  h_26 = t;
                t = SSL_exit(not_null(h_26));
                ;
                LocalPopChoice(d_15);
              }
            else
              {
                t = c_15;
              }
          }
        }
      if(((r_25 != NULL) && (r_25 != t)))
        _fail(t);
      else
        r_25 = t;
      t = term_q_11;
      if(((t_25 != NULL) && (t_25 != t)))
        _fail(t);
      else
        t_25 = t;
      t = SSL_table_destroy(not_null(t_25));
      t = not_null(r_25);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL;
  t = parse_options_1_0(c_84, t);
  r_26 = t;
  t = term_f_15;
  u_26 = t;
  t = SSL_table_create(u_26);
  t = term_f_15;
  s_26 = t;
  t = term_g_15;
  t_26 = t;
  t = SSL_table_put(s_26, t_26, r_26);
  t = r_26;
  t = e_84(t);
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_84, t);
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
        {
          ATerm j_15 = t;
          int k_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_84(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_15);
            }
          else
            {
              t = j_15;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = if_verbose2_1_0(a_6, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL;
  t = term_l_15;
  v_26 = t;
  t = term_j_6;
  w_26 = t;
  t = term_m_15;
  t = z_4(v_26, w_26, t);
  t = term_n_15;
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_o_15;
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL;
  x_26 = t;
  t = term_d_12;
  t = get_config_0_0(t);
  y_26 = t;
  t = term_l_6;
  z_26 = t;
  t = (ATerm) ATinsert(ATempty, y_26);
  a_27 = t;
  t = SSL_printnl(z_26, a_27);
  t = x_26;
  return(t);
}
ATerm iowrap_3_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_83(t);
        ;
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
        {
          ATerm r_15 = t;
          int s_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(s_15);
            }
          else
            {
              t = r_15;
              {
                ATerm t_15 = t;
                int u_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(u_15);
                  }
                else
                  {
                    t = t_15;
                    {
                      ATerm z_15 = t;
                      int a_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(q_5, t_5, x_5, t);
                          ;
                          LocalPopChoice(a_16);
                        }
                      else
                        {
                          t = z_15;
                          {
                            ATerm b_16 = t;
                            int c_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(c_16);
                              }
                            else
                              {
                                t = b_16;
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
  ATerm p_5 (ATerm t)
  {
    ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
    if(((c_27 != NULL) && (c_27 != t)))
      _fail(t);
    else
      c_27 = t;
    {
      ATerm d_16 = t;
      int e_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((b_27 != NULL) && (b_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_6, t);
          ;
          LocalPopChoice(e_16);
        }
      else
        {
          t = d_16;
          t = term_i_16;
          if(((b_27 != NULL) && (b_27 != t)))
            _fail(t);
          else
            b_27 = t;
        }
      t = not_null(b_27);
      t = ReadFromFile_0_0(t);
      if(((d_27 != NULL) && (d_27 != t)))
        _fail(t);
      else
        d_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_27), not_null(d_27));
      t = apply_strategy_1_0(l_83, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(k_5, n_83, l_5, p_5, t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,v_8 = NULL;
  j_27 = t;
  if(match_cons(t, sym__2))
    {
      f_27 = ATgetArgument(t, 0);
      g_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_27);
  e_27 = t;
  t = g_27;
  if(match_cons(t, sym_TreeGrammar_1))
    {
      i_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_4(i_27, t);
  h_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_27, h_27);
  v_8 = t;
  t = SSLsetAnnotations(v_8, e_27);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(i_6, _fail, default_usage_0_0, t);
  return(t);
}
