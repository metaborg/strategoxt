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
ATerm term_l_18;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_d_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_u_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_x_14;
ATerm term_t_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_x_10;
ATerm term_n_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_g_9;
ATerm term_c_9;
ATerm term_y_8;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_r_7;
ATerm term_o_7;
ATerm term_k_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_l_6;
ATerm term_h_6;
ATerm term_d_6;
ATerm term_x_5;
ATerm term_t_5;
void init_constant_terms (void)
{
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("fc-param", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("is-string", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_6);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_b_7);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("is-int", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_7);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_k_7);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("fc-", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("if-verbose2", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_8);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("debug", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_8);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("integers", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("verbose", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_i_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym__2, term_p_11, term_t_5);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_b_12, term_c_12);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__2, term_e_15, term_t_5);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_i_15, term_t_5);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_t_5);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_t_5);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm map_with_index_1_0 (ATerm h_91 (ATerm), ATerm);
ATerm j_4 (ATerm y_42, ATerm z_42, ATerm);
ATerm while_not_2_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm);
ATerm for_3_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm create_call_0_0 (ATerm);
ATerm to_fc_Body_0_0 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm k_4 (ATerm k_30, ATerm i_30, ATerm g_30, ATerm);
ATerm h_1 (ATerm);
ATerm l_4 (ATerm d_30, ATerm);
ATerm _2_0 (ATerm z_64 (ATerm), ATerm a_65 (ATerm), ATerm);
ATerm o_4 (ATerm f_32, ATerm g_32, ATerm);
ATerm p_4 (ATerm v_50, ATerm w_50, ATerm);
ATerm r_4 (ATerm s_99 (ATerm), ATerm q_392, ATerm z_50, ATerm);
ATerm q_4 (ATerm r_50, ATerm s_50, ATerm);
ATerm m_1 (ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm c_83 (ATerm), ATerm);
ATerm v_8 (ATerm o_8, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm s_4 (ATerm x_50, ATerm);
ATerm t_4 (ATerm h_32, ATerm i_32, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm x_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_89 (ATerm), ATerm);
ATerm n_4 (ATerm s_64, ATerm t_64, ATerm);
ATerm debug_1_0 (ATerm q_99 (ATerm), ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_110 (ATerm), ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm h_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm k_2 (ATerm);
ATerm o_2 (ATerm);
ATerm r_2 (ATerm);
ATerm u_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm z_4 (ATerm j_57, ATerm k_57, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm x_4 (ATerm o_44, ATerm p_44, ATerm n_44, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm e_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm u_4 (ATerm s_42, ATerm t_42, ATerm);
ATerm foldr_2_0 (ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm n_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_110 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm need_help_1_0 (ATerm a_84 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_89 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm w_4 (ATerm f_46, ATerm g_46, ATerm);
ATerm Program_1_0 (ATerm h_82 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm x_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm i_82 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm z_101 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm m_4 (ATerm);
ATerm v_4 (ATerm);
ATerm y_4 (ATerm);
ATerm parse_options_1_0 (ATerm y_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm iowrap_3_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
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
  t = term_t_5;
  t = whoami_0_0(t);
  m_0 = t;
  t = term_x_5;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_6), m_0), term_d_6);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_l_6;
  p_0 = t;
  t = SSL_exit(p_0);
  t = l_0;
  return(t);
}
ATerm map_with_index_1_0 (ATerm h_91 (ATerm), ATerm t)
{
  ATerm t_0 = NULL;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_6, t_0);
  {
    ATerm i_2 (ATerm t)
    {
      ATerm v_0 = NULL,x_0 = NULL,z_0 = NULL,b_1 = NULL;
      if(match_cons(t, sym__2))
        {
          v_0 = ATgetArgument(t, 0);
          x_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_0;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm k_1 = NULL,p_1 = NULL,v_1 = NULL,w_1 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_0 = ATgetFirst((ATermList) t);
              b_1 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, v_0, z_0);
          t = h_91(t);
          k_1 = t;
          t = term_l_6;
          w_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_0, term_l_6);
          t = u_4(v_0, w_1, t);
          p_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_1, b_1);
          t = i_2(t);
          v_1 = t;
          t = (ATerm) ATinsert(CheckATermList(v_1), k_1);
        }
      return(t);
    }
    t = i_2(t);
  }
  return(t);
}
ATerm j_4 (ATerm y_42, ATerm z_42, ATerm t)
{
  ATerm n_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(y_42, z_42);
      ;
      LocalPopChoice(p_6);
    }
  else
    {
      t = n_6;
      t = SSL_subtr(y_42, z_42);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm r_6 = t;
    int s_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_102(t);
        ;
        LocalPopChoice(s_6);
      }
    else
      {
        t = r_6;
        t = v_102(t);
        t = j_2(t);
      }
    return(t);
  }
  t = j_2(t);
  return(t);
}
ATerm for_3_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm t)
{
  t = x_102(t);
  t = while_not_2_0(y_102, z_102, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      l_2 = ATgetArgument(t, 0);
      m_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, l_2, m_2, (ATerm) ATempty);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm n_2 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm t_6 = ATgetArgument(t, 0);
      if(((ATgetType(t_6) != AT_INT) || (ATgetInt((ATermInt) t_6) != 0)))
        _fail(t);
      {
        ATerm u_6 = ATgetArgument(t, 1);
      }
      n_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_2;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,s_2 = NULL,t_2 = NULL,v_2 = NULL;
  if(match_cons(t, sym__3))
    {
      p_2 = ATgetArgument(t, 0);
      q_2 = ATgetArgument(t, 1);
      s_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_2, term_l_6);
  t = geq_0_0(t);
  t = term_l_6;
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_2, term_l_6);
  t = j_4(p_2, v_2, t);
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_2, q_2, (ATerm) ATinsert(CheckATermList(s_2), q_2));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(c_1, d_1, e_1, t);
  return(t);
}
ATerm create_call_0_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL;
  j_3 = t;
  if(match_cons(t, sym_Param_1))
    {
      k_3 = ATgetArgument(t, 0);
      {
        ATerm r_0 = NULL,s_0 = NULL;
        t = SSL_int_to_string(k_3);
        r_0 = t;
        t = term_x_6;
        s_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_6, r_0);
        t = n_4(s_0, r_0, t);
      }
    }
  else
    {
      if(match_cons(t, sym_String_0))
        {
          t = term_c_7;
        }
      else
        {
          if(match_cons(t, sym_Int_0))
            {
              t = term_o_7;
            }
          else
            {
              if(match_cons(t, sym_NonTermRef_2))
                {
                  k_3 = ATgetArgument(t, 0);
                  m_3 = ATgetArgument(t, 1);
                  {
                    ATerm s_3 = NULL,u_3 = NULL,w_3 = NULL;
                    t = k_3;
                    if(match_cons(t, sym_Id_1))
                      {
                        l_3 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_r_7;
                    w_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_r_7, l_3);
                    t = n_4(w_3, l_3, t);
                    s_3 = t;
                    t = m_3;
                    t = map_1_0(create_call_0_0, t);
                    u_3 = t;
                    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_3), u_3);
                  }
                }
              else
                {
                  ATerm b_4 = NULL;
                  if(match_cons(t, sym_Prod_2))
                    {
                      k_3 = ATgetArgument(t, 0);
                      m_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = k_3;
                  if(match_cons(t, sym_Id_1))
                    {
                      l_3 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_3;
                  t = map_1_0(create_call_0_0, t);
                  b_4 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_3), b_4);
                }
            }
        }
    }
  return(t);
}
ATerm to_fc_Body_0_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,h_5 = NULL,j_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_5 = ATgetFirst((ATermList) t);
      j_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_5 = ATgetFirst((ATermList) t);
      f_5 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_5 = NULL,p_5 = NULL;
        t = h_5;
        t = create_call_0_0(t);
        o_5 = t;
        t = (ATerm) ATinsert(CheckATermList(f_5), e_5);
        t = to_fc_Body_0_0(t);
        p_5 = t;
        t = (ATerm) ATmakeAppl(sym_Choice_2, o_5, p_5);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_5;
      t = create_call_0_0(t);
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL;
  a_6 = t;
  t = SSL_explode_term(a_6);
  if(match_cons(t, sym__2))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_7 = ATgetArgument(t, 1);
        if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
          {
            b_6 = ATgetFirst((ATermList) z_7);
            {
              ATerm b_8 = (ATerm) ATgetNext((ATermList) z_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_6;
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm c_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL;
  c_6 = t;
  t = SSL_int_to_string(c_6);
  f_6 = t;
  t = term_x_6;
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_6, f_6);
  t = n_4(g_6, f_6, t);
  e_6 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_6);
  return(t);
}
ATerm k_4 (ATerm k_30, ATerm i_30, ATerm g_30, ATerm t)
{
  ATerm s_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,y_5 = NULL,z_5 = NULL;
  t = term_r_7;
  y_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, k_30);
  t = n_4(y_5, k_30, t);
  s_5 = t;
  t = g_30;
  t = to_fc_Body_0_0(t);
  u_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_30, term_t_5);
  t = copy_0_0(t);
  t = map_with_index_1_0(f_1, t);
  t = map_1_0(g_1, t);
  v_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_8), k_30), term_h_8);
  z_5 = t;
  t = SSL_concat_strings(z_5);
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, s_5, v_5, (ATerm) ATmakeAppl(sym_LChoice_2, u_5, (ATerm) ATmakeAppl(sym_Call_2, term_k_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, term_m_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_5))))))));
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL,m_6 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      if(match_cons(n_8, sym_Id_1))
        {
          j_6 = ATgetArgument(n_8, 0);
        }
      else
        _fail(t);
      k_6 = ATgetArgument(t, 1);
      m_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_4(j_6, k_6, m_6, t);
  return(t);
}
ATerm l_4 (ATerm d_30, ATerm t)
{
  ATerm i_6 = NULL;
  t = d_30;
  t = map_1_0(h_1, t);
  i_6 = t;
  t = (ATerm) ATmakeAppl(sym_Module_2, term_p_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, i_6)), (ATerm) ATmakeAppl(sym_Imports_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), term_r_8), term_q_8))));
  return(t);
}
ATerm _2_0 (ATerm z_64 (ATerm), ATerm a_65 (ATerm), ATerm t)
{
  ATerm o_6 = NULL,q_6 = NULL,v_6 = NULL,w_6 = NULL,z_6 = NULL,a_7 = NULL,b_0 = NULL,f_0 = NULL;
  a_7 = t;
  if(match_cons(t, sym__2))
    {
      q_6 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_7);
  o_6 = t;
  t = q_6;
  t = z_64(t);
  w_6 = t;
  t = v_6;
  t = a_65(t);
  z_6 = t;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_6, z_6);
  b_0 = t;
  t = SSLsetAnnotations(b_0, o_6);
  return(t);
}
ATerm o_4 (ATerm f_32, ATerm g_32, ATerm t)
{
  ATerm e_7 = NULL;
  t = SSL_fputc(f_32, g_32);
  e_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_7);
  return(t);
}
ATerm p_4 (ATerm v_50, ATerm w_50, ATerm t)
{
  ATerm f_7 = NULL;
  t = SSL_write_term_to_stream_text(v_50, w_50);
  f_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_7);
  return(t);
}
ATerm r_4 (ATerm s_99 (ATerm), ATerm q_392, ATerm z_50, ATerm t)
{
  ATerm g_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_392, term_y_8);
  t = open_stream_0_0(t);
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_7, z_50);
  t = s_99(t);
  t = fclose_0_0(t);
  t = z_50;
  return(t);
}
ATerm q_4 (ATerm r_50, ATerm s_50, ATerm t)
{
  ATerm h_7 = NULL;
  t = SSL_write_term_to_stream_baf(r_50, s_50);
  h_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_7);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = fetch_1_0(q_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL;
  if(match_cons(t, sym__2))
    {
      m_7 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(r_1, m_7, n_7, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_8 = ATgetArgument(t, 0);
      if(match_cons(z_8, sym_Stream_1))
        {
          p_7 = ATgetArgument(z_8, 0);
        }
      else
        _fail(t);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(p_7, q_7, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL;
  if(match_cons(t, sym__2))
    {
      s_7 = ATgetArgument(t, 0);
      t_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(t_1, s_7, t_7, t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm u_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,a_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_9 = ATgetArgument(t, 0);
      if(match_cons(b_9, sym_Stream_1))
        {
          w_7 = ATgetArgument(b_9, 0);
        }
      else
        _fail(t);
      x_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_4(w_7, x_7, t);
  u_7 = t;
  t = term_c_9;
  y_7 = t;
  t = u_7;
  if(match_cons(t, sym_Stream_1))
    {
      a_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_9, u_7);
  t = o_4(y_7, a_8, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL;
  i_7 = t;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm e_9 = t;
      int f_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((j_7 != NULL) && (j_7 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_7 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_1, t);
          ;
          LocalPopChoice(f_9);
        }
      else
        {
          t = e_9;
          t = term_g_9;
          if(((j_7 != NULL) && (j_7 != t)))
            _fail(t);
          else
            j_7 = t;
        }
      return(t);
    }
    t = _2_0(i_1, _id, t);
    t = i_7;
    {
      ATerm l_1 (ATerm t)
      {
        ATerm l_7 = NULL;
        l_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_7), l_7);
        return(t);
      }
      t = _2_0(_id, l_1, t);
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(m_1, o_1, t);
            ;
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            t = _2_0(_id, s_1, t);
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
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL;
  c_8 = t;
  t = dtime_0_0(t);
  t = c_8;
  t = c_83(t);
  d_8 = t;
  t = dtime_0_0(t);
  e_8 = t;
  t = d_8;
  if(match_cons(t, sym__2))
    {
      f_8 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_8), (ATerm) ATmakeAppl(sym_Runtime_1, e_8)), g_8);
  return(t);
}
ATerm v_8 (ATerm o_8, ATerm t)
{
  t = SSL_fclose(o_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL;
  t_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_8 = ATgetArgument(t, 0);
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_8);
            ;
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
            t = v_8(t_8, t);
          }
      }
    }
  else
    {
      t = v_8(t_8, t);
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
  ATerm w_8 = NULL;
  t = SSL_fopen(h_32, i_32);
  w_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_8);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_8 = NULL;
  t = SSL_stdin_stream();
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_9 = NULL;
  t = SSL_stdout_stream();
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_9 = NULL;
  t = SSL_stderr_stream();
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_9);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm x_9 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      x_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_9;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm h_10 = NULL;
  h_10 = t;
  t = SSL_is_string(h_10);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_9 = ATgetArgument(t, 0);
      ATerm m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_9 = NULL,n_1 = NULL;
        t_9 = t;
        t = SSL_explode_term(t_9);
        if(match_cons(t, sym__2))
          {
            ATerm p_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_9 = ATgetArgument(t, 1);
              if(((ATgetType(q_9) == AT_LIST) && !(ATisEmpty(q_9))))
                {
                  n_1 = ATgetFirst((ATermList) q_9);
                  {
                    ATerm r_9 = (ATerm) ATgetNext((ATermList) q_9);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = n_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = n_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = n_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(o_9);
      }
    else
      {
        t = n_9;
        {
          ATerm s_9 = t;
          int v_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_9 = NULL,w_9 = NULL;
              t = _2_0(u_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  u_9 = ATgetArgument(t, 0);
                  w_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_4(u_9, w_9, t);
              ;
              LocalPopChoice(v_9);
            }
          else
            {
              t = s_9;
              {
                ATerm y_9 = NULL,g_10 = NULL;
                t = _2_0(x_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    y_9 = ATgetArgument(t, 0);
                    g_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_4(y_9, g_10, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_z_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_10 = NULL;
      m_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_10, term_c_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      t = debug_1_0(y_1, t);
      _fail(t);
    }
  j_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_4(l_10, t);
  k_10 = t;
  t = j_10;
  t = fclose_0_0(t);
  t = k_10;
  return(t);
}
ATerm fetch_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm p_10 (ATerm t)
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(u_89, _id, t);
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        t = Cons_2_0(_id, p_10, t);
      }
    return(t);
  }
  t = p_10(t);
  return(t);
}
ATerm n_4 (ATerm s_64, ATerm t_64, ATerm t)
{
  t = SSL_strcat(s_64, t_64);
  return(t);
}
ATerm debug_1_0 (ATerm q_99 (ATerm), ATerm t)
{
  ATerm s_10 = NULL,u_10 = NULL,y_10 = NULL,z_10 = NULL;
  s_10 = t;
  t = q_99(t);
  u_10 = t;
  t = term_x_5;
  y_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_10), u_10);
  z_10 = t;
  t = SSL_printnl(y_10, z_10);
  t = s_10;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm f_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_10);
    }
  else
    {
      t = f_10;
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_n_10;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_11 = NULL;
      j_11 = t;
      t = SSL_is_string(j_11);
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = o_10;
      {
        ATerm r_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_1, t);
            ;
            LocalPopChoice(t_10);
          }
        else
          {
            t = r_10;
            {
              ATerm n_11 = NULL,q_11 = NULL,r_11 = NULL;
              n_11 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_11 = ATgetArgument(t, 0);
                  t = q_11;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_11 = ATgetArgument(t, 0);
                      t = q_11;
                      {
                        ATerm v_10 = t;
                        int w_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(w_10);
                          }
                        else
                          {
                            t = v_10;
                            t = debug_1_0(a_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm z_11 = NULL,a_12 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_11 = ATgetArgument(t, 0);
                          r_11 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_11;
                      t = eval_config_0_0(t);
                      z_11 = t;
                      t = r_11;
                      t = eval_config_0_0(t);
                      a_12 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_11, a_12);
                      t = n_4(z_11, a_12, t);
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
  ATerm f_12 = NULL,g_12 = NULL;
  f_12 = t;
  t = term_x_10;
  g_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, f_12);
  t = w_4(g_12, f_12, t);
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_12 = NULL,i_12 = NULL;
        t = eval_config_0_0(t);
        h_12 = t;
        t = term_x_10;
        i_12 = t;
        t = SSL_table_put(i_12, f_12, h_12);
        t = h_12;
        ;
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_12 = NULL,n_12 = NULL;
      j_12 = t;
      t = term_e_11;
      t = get_config_0_0(t);
      n_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_12, term_f_11);
      t = geq_0_0(t);
      t = j_12;
      t = b_110(t);
      ;
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
    }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm r_12 = NULL;
  r_12 = t;
  if(match_string(t, "-k"))
    {
      t = r_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_12;
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,v_12 = NULL;
  s_12 = t;
  t = SSL_string_to_int(s_12);
  t_12 = t;
  t = term_g_11;
  v_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_11, t_12);
  t = z_4(v_12, t_12, t);
  t = s_12;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_h_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_2, e_2, h_2, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm x_12 = NULL;
  x_12 = t;
  if(match_string(t, "-S"))
    {
      t = x_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_12;
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL;
  t = term_e_11;
  y_12 = t;
  t = term_i_11;
  z_12 = t;
  t = term_k_11;
  t = z_4(y_12, z_12, t);
  t = term_l_11;
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_m_11;
  return(t);
}
ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  a_13 = t;
  t = SSL_string_to_int(a_13);
  b_13 = t;
  t = term_e_11;
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, b_13);
  t = z_4(c_13, b_13, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_13);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_o_11;
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
  ATerm d_13 = NULL,g_13 = NULL;
  t = term_p_11;
  d_13 = t;
  t = term_t_5;
  g_13 = t;
  t = term_s_11;
  t = z_4(d_13, g_13, t);
  t = term_t_11;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_u_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_2, o_2, r_2, t);
      ;
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_2, w_2, x_2, t);
            ;
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            t = Option_3_0(y_2, z_2, a_3, t);
          }
      }
    }
  return(t);
}
ATerm z_4 (ATerm j_57, ATerm k_57, ATerm t)
{
  ATerm h_13 = NULL;
  t = term_x_10;
  h_13 = t;
  t = SSL_table_put(h_13, j_57, k_57);
  t = (ATerm) ATmakeAppl(sym__3, term_x_10, j_57, k_57);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
      t = term_t_5;
      t = d_0(t);
      n_13 = t;
      t = term_b_12;
      o_13 = t;
      t = term_c_12;
      p_13 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_12, term_c_12, n_13);
      t = x_4(o_13, p_13, n_13, t);
      _fail(t);
    }
  else
    {
      ATerm y_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_13 = ATgetFirst((ATermList) t);
          l_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_13;
      t = a_0(t);
      t = term_t_5;
      t = c_0(t);
      y_13 = t;
      t = (ATerm) ATinsert(CheckATermList(l_13), y_13);
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm a_14 = NULL;
  a_14 = t;
  if(match_string(t, "-o"))
    {
      t = a_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_14;
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm b_14 = NULL,d_14 = NULL;
  b_14 = t;
  t = term_d_12;
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_12, b_14);
  t = z_4(d_14, b_14, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_14);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_e_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_3, c_3, d_3, t);
  return(t);
}
ATerm x_4 (ATerm o_44, ATerm p_44, ATerm n_44, ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,i_14 = NULL;
  f_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_44, p_44);
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_12 = ATgetArgument(t, 0);
            ATerm o_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_44, p_44);
        t = w_4(o_44, p_44, t);
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        t = (ATerm) ATempty;
      }
    g_14 = t;
    t = (ATerm) ATinsert(CheckATermList(g_14), n_44);
    i_14 = t;
    t = SSL_table_put(o_44, p_44, i_14);
    t = f_14;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,u_14 = NULL,v_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_14 = NULL,y_14 = NULL,b_15 = NULL;
      t = term_t_5;
      t = j_0(t);
      w_14 = t;
      t = term_b_12;
      y_14 = t;
      t = term_c_12;
      b_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_12, term_c_12, w_14);
      t = x_4(y_14, b_15, w_14, t);
      _fail(t);
    }
  else
    {
      ATerm f_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_14 = ATgetFirst((ATermList) t);
          s_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_14 = ATgetFirst((ATermList) t);
          v_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_14;
      t = h_0(t);
      t = u_14;
      t = i_0(t);
      f_15 = t;
      t = (ATerm) ATinsert(CheckATermList(v_14), f_15);
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm o_15 = NULL;
  o_15 = t;
  if(match_string(t, "-i"))
    {
      t = o_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_15;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  r_15 = t;
  t = term_p_12;
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_12, r_15);
  t = z_4(s_15, r_15, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_15);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_q_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_3, g_3, h_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_5;
  t = whoami_0_0(t);
  t_15 = t;
  t = term_x_5;
  w_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_12), t_15);
  x_15 = t;
  t = SSL_printnl(w_15, x_15);
  t = term_l_6;
  y_15 = t;
  t = SSL_exit(y_15);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_w_12;
  t = get_config_0_0(t);
  return(t);
}
ATerm u_4 (ATerm s_42, ATerm t_42, ATerm t)
{
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_42, t_42);
      ;
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      t = SSL_addr(s_42, t_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm t)
{
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_96(t);
      ;
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      {
        ATerm h_16 = NULL,i_16 = NULL,l_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_16 = ATgetFirst((ATermList) t);
            i_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_16;
        t = foldr_2_0(c_96, d_96, t);
        l_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_16, l_16);
        t = d_96(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_i_11;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL;
  if(match_cons(t, sym__2))
    {
      f_2 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4(f_2, g_2, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_16 = NULL,b_2 = NULL,c_2 = NULL;
  t = times_0_0(t);
  b_2 = t;
  t = SSL_explode_term(b_2);
  if(match_cons(t, sym__2))
    {
      ATerm m_13 = ATgetArgument(t, 0);
      c_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_2;
  t = foldr_2_0(i_3, n_3, t);
  o_16 = t;
  t = SSL_TicksToSeconds(o_16);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_17 = NULL,e_17 = NULL,f_17 = NULL;
  b_17 = t;
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_17;
        if((e_17 != t))
          {
            _fail(t);
          }
        t = b_17;
        ;
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        t = (ATerm) ATmakeAppl(sym__2, e_17, f_17);
        {
          ATerm s_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_17, f_17);
              ;
              LocalPopChoice(t_13);
            }
          else
            {
              t = s_13;
              t = SSL_gtr(e_17, f_17);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_17, f_17);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_110 (ATerm), ATerm t)
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_17 = NULL,o_17 = NULL;
      k_17 = t;
      t = term_e_11;
      t = get_config_0_0(t);
      o_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_17, term_l_6);
      t = geq_0_0(t);
      t = k_17;
      t = a_110(t);
      ;
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm q_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  t = run_time_0_0(t);
  q_17 = t;
  t = term_t_5;
  t = whoami_0_0(t);
  s_17 = t;
  t = term_x_5;
  t_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_13), q_17), term_w_13), s_17);
  u_17 = t;
  t = SSL_printnl(t_17, u_17);
  t = (ATerm) ATmakeAppl(sym__2, term_x_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_13), q_17), term_w_13), s_17));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_17 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_11;
  v_17 = t;
  t = SSL_exit(v_17);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm z_13 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(c_14);
    }
  else
    {
      t = z_13;
      {
        ATerm e_14 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(h_14);
          }
        else
          {
            t = e_14;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_14);
    }
  else
    {
      t = j_14;
      t = fetch_1_0(q_3, t);
    }
  t = a_84(t);
  return(t);
}
ATerm map_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  ATerm w_17 (ATerm t)
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = Cons_2_0(k_89, w_17, t);
      }
    return(t);
  }
  t = w_17(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_17 = ATgetFirst((ATermList) t);
      z_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_18 = NULL,f_18 = NULL;
        t = z_17;
        t = g_0(t);
        e_18 = t;
        t = y_17;
        t = e_0(t);
        f_18 = t;
        t = z_17;
        {
          ATerm r_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(e_18), f_18);
            return(t);
          }
          t = reverse_acc_2_0(e_0, r_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_5;
      t = g_0(t);
    }
  return(t);
}
ATerm w_4 (ATerm f_46, ATerm g_46, ATerm t)
{
  t = SSL_table_get(f_46, g_46);
  return(t);
}
ATerm Program_1_0 (ATerm h_82 (ATerm), ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_0 = NULL,q_0 = NULL;
  j_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_18);
  g_18 = t;
  t = h_18;
  t = h_82(t);
  i_18 = t;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_18);
  k_0 = t;
  t = SSLsetAnnotations(k_0, g_18);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm o_18 = NULL;
  o_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_18), term_o_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_14);
    }
  else
    {
      t = p_14;
      t = fetch_1_0(t_3, t);
    }
  t = term_t_14;
  t = echo_0_0(t);
  t = term_b_12;
  m_18 = t;
  t = term_c_12;
  n_18 = t;
  t = term_x_14;
  t = w_4(m_18, n_18, t);
  t = reverse_acc_2_0(_id, v_3, t);
  t = map_1_0(x_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,u_0 = NULL,w_0 = NULL;
  s_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      q_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_18);
  p_18 = t;
  t = q_18;
  t = i_82(t);
  r_18 = t;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_18);
  u_0 = t;
  t = SSLsetAnnotations(u_0, p_18);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
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
                ATerm c_15 = ATgetFirst((ATermList) t);
                ATerm d_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_18;
          }
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = (ATerm) ATinsert(ATempty, w_18);
      }
    x_18 = t;
    t = term_g_9;
    y_18 = t;
    t = SSL_printnl(y_18, x_18);
    t = w_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_w_12;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL;
  t = term_e_15;
  c_19 = t;
  t = term_t_5;
  d_19 = t;
  t = term_g_15;
  t = z_4(c_19, d_19, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_h_15;
  return(t);
}
ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
  t = term_e_15;
  e_19 = t;
  t = term_t_5;
  f_19 = t;
  t = term_g_15;
  t = z_4(e_19, f_19, t);
  t = term_i_15;
  g_19 = t;
  t = term_t_5;
  h_19 = t;
  t = term_j_15;
  t = z_4(g_19, h_19, t);
  t = term_k_15;
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_l_15;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_3, z_3, a_4, t);
      ;
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      t = Option_3_0(c_4, d_4, e_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,y_0 = NULL,a_1 = NULL;
  n_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_19 = ATgetFirst((ATermList) t);
      k_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_19);
  i_19 = t;
  t = j_19;
  t = o_69(t);
  l_19 = t;
  t = k_19;
  t = p_69(t);
  m_19 = t;
  a_1 = t;
  t = (ATerm) ATinsert(CheckATermList(m_19), l_19);
  y_0 = t;
  t = SSLsetAnnotations(y_0, i_19);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL;
  s_19 = t;
  t = term_w_12;
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_12, s_19);
  t = z_4(t_19, s_19, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, s_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_101 (ATerm), ATerm t)
{
  ATerm r_19 = NULL;
  r_19 = t;
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_15;
        t = z_101(t);
        ;
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
      }
    t = r_19;
    {
      ATerm g_4 (ATerm t)
      {
        ATerm v_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_16 = t;
            int b_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(b_16);
              }
            else
              {
                t = a_16;
                t = z_101(t);
                t = Cons_2_0(_id, g_4, t);
              }
            ;
            LocalPopChoice(z_15);
          }
        else
          {
            t = v_15;
            {
              ATerm v_19 = NULL,w_19 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_19 = ATgetFirst((ATermList) t);
                  w_19 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_19), (ATerm) ATmakeAppl(sym_Undefined_1, v_19));
            }
          }
        return(t);
      }
      t = Cons_2_0(f_4, g_4, t);
    }
  }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm k_20 = NULL;
  k_20 = t;
  if(match_string(t, "--help"))
    {
      t = k_20;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_20;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_20;
        }
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL;
  t = term_l_14;
  l_20 = t;
  t = term_t_5;
  m_20 = t;
  t = term_c_16;
  t = z_4(l_20, m_20, t);
  t = term_d_16;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm y_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_101 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  d_20 = t;
  t = term_b_12;
  g_20 = t;
  t = term_c_12;
  h_20 = t;
  t = (ATerm) ATempty;
  i_20 = t;
  t = SSL_table_put(g_20, h_20, i_20);
  t = d_20;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm f_16 = t;
      int g_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_101(t);
          ;
          LocalPopChoice(g_16);
        }
      else
        {
          t = f_16;
          {
            ATerm j_16 = t;
            int k_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_4, m_4, v_4, t);
                ;
                LocalPopChoice(k_16);
              }
            else
              {
                t = j_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_4, t);
    {
      ATerm m_16 = t;
      int n_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_20 = NULL;
          t_20 = t;
          {
            ATerm p_16 = t;
            int q_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_3 = NULL;
                t = t_20;
                {
                  ATerm r_16 = t;
                  int s_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_14;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(s_16);
                    }
                  else
                    {
                      t = r_16;
                      t = fetch_1_0(y_4, t);
                    }
                  t = t_20;
                  t = default_system_usage_0_0(t);
                  t = term_i_11;
                  f_3 = t;
                  t = SSL_exit(f_3);
                }
                ;
                LocalPopChoice(q_16);
              }
            else
              {
                t = p_16;
                {
                  ATerm p_3 = NULL;
                  t = term_e_15;
                  t = get_config_0_0(t);
                  t = t_20;
                  t = default_system_about_0_0(t);
                  t = term_i_11;
                  p_3 = t;
                  t = SSL_exit(p_3);
                }
              }
          }
          ;
          LocalPopChoice(n_16);
        }
      else
        {
          t = m_16;
          {
            ATerm t_16 = t;
            int u_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
                ATerm a_5 (ATerm t)
                {
                  ATerm b_5 (ATerm t)
                  {
                    if(((e_20 != NULL) && (e_20 != t)))
                      _fail(t);
                    else
                      e_20 = t;
                    return(t);
                  }
                  t = Undefined_1_0(b_5, t);
                  return(t);
                }
                t = fetch_1_0(a_5, t);
                t = term_x_5;
                u_20 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_20)), term_v_16);
                v_20 = t;
                t = SSL_printnl(u_20, v_20);
                t = (ATerm) ATmakeAppl(sym__2, term_x_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_20)), term_v_16));
                t = default_system_usage_0_0(t);
                t = term_l_6;
                w_20 = t;
                t = SSL_exit(w_20);
                ;
                LocalPopChoice(u_16);
              }
            else
              {
                t = t_16;
              }
          }
        }
      f_20 = t;
      t = term_b_12;
      j_20 = t;
      t = SSL_table_destroy(j_20);
      t = f_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
  t = parse_options_1_0(c_84, t);
  z_20 = t;
  t = term_w_16;
  a_21 = t;
  t = SSL_table_create(a_21);
  t = term_w_16;
  b_21 = t;
  t = term_x_16;
  c_21 = t;
  t = SSL_table_put(b_21, c_21, z_20);
  t = z_20;
  t = e_84(t);
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_84, t);
        ;
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
        {
          ATerm a_17 = t;
          int c_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_84(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_17);
            }
          else
            {
              t = a_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = if_verbose2_1_0(m_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  t = term_d_17;
  d_21 = t;
  t = term_t_5;
  e_21 = t;
  t = term_g_17;
  t = z_4(d_21, e_21, t);
  t = term_h_17;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_i_17;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
  f_21 = t;
  t = term_w_12;
  t = get_config_0_0(t);
  g_21 = t;
  t = term_x_5;
  h_21 = t;
  t = (ATerm) ATinsert(ATempty, g_21);
  i_21 = t;
  t = SSL_printnl(h_21, i_21);
  t = f_21;
  return(t);
}
ATerm iowrap_3_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm j_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_83(t);
        ;
        LocalPopChoice(l_17);
      }
    else
      {
        t = j_17;
        {
          ATerm m_17 = t;
          int n_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(n_17);
            }
          else
            {
              t = m_17;
              {
                ATerm p_17 = t;
                int r_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(r_17);
                  }
                else
                  {
                    t = p_17;
                    {
                      ATerm x_17 = t;
                      int a_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(i_5, k_5, l_5, t);
                          ;
                          LocalPopChoice(a_18);
                        }
                      else
                        {
                          t = x_17;
                          {
                            ATerm b_18 = t;
                            int c_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(c_18);
                              }
                            else
                              {
                                t = b_18;
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
  ATerm g_5 (ATerm t)
  {
    ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
    j_21 = t;
    {
      ATerm d_18 = t;
      int k_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((k_21 != NULL) && (k_21 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_5, t);
          ;
          LocalPopChoice(k_18);
        }
      else
        {
          t = d_18;
          t = term_l_18;
          k_21 = t;
        }
      t = not_null(k_21);
      t = ReadFromFile_0_0(t);
      l_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_21, l_21);
      t = apply_strategy_1_0(l_83, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(c_5, n_83, d_5, g_5, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = _2_0(_id, r_5, t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm m_21 = NULL;
  if(match_cons(t, sym_TreeGrammar_1))
    {
      m_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_4(m_21, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(q_5, _fail, default_usage_0_0, t);
  return(t);
}
