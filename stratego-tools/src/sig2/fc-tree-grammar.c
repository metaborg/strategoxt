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
Symbol sym_Undefined_0;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_b_21;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_c_17;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_j_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_n_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_s_11;
ATerm term_j_11;
ATerm term_f_11;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_d_10;
ATerm term_t_9;
ATerm term_e_9;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
void init_constant_terms (void)
{
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Id: ", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Arg: ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a ProdItem: ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a List: ", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_l_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_z_7);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__2, term_e_13, term_f_13);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_z_7);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym__2, term_j_16, term_z_7);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym__2, term_j_15, term_z_7);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym__2, term_s_19, term_z_7);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Prod: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a NonTermDec: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a TreeGrammar: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm debug_1_0 (ATerm q_87 (ATerm), ATerm);
ATerm if_verbose2_1_0 (ATerm x_82 (ATerm), ATerm);
ATerm Param_1_0 (ATerm k_61 (ATerm), ATerm);
ATerm o_1 (ATerm);
ATerm r_1 (ATerm);
ATerm w_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm k_2 (ATerm);
ATerm fc_Arg_0_0 (ATerm);
ATerm NonTermRef_2_0 (ATerm d_61 (ATerm), ATerm e_61 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm v_2 (ATerm);
ATerm x_2 (ATerm);
ATerm fc_ProdItem_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm fc_List_1_0 (ATerm h_67 (ATerm), ATerm);
ATerm Id_1_0 (ATerm l_61 (ATerm), ATerm);
ATerm Prod_2_0 (ATerm i_61 (ATerm), ATerm j_61 (ATerm), ATerm);
ATerm NonTermDec_3_0 (ATerm f_61 (ATerm), ATerm g_61 (ATerm), ATerm h_61 (ATerm), ATerm);
ATerm TreeGrammar_1_0 (ATerm c_61 (ATerm), ATerm);
ATerm _2_0 (ATerm l_56 (ATerm), ATerm m_56 (ATerm), ATerm);
ATerm u_3 (ATerm u_43, ATerm v_43, ATerm);
ATerm v_3 (ATerm q_47, ATerm r_47, ATerm);
ATerm x_3 (ATerm s_87 (ATerm), ATerm t_464, ATerm u_47, ATerm);
ATerm w_3 (ATerm m_47, ATerm n_47, ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm s_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm f_84 (ATerm), ATerm);
ATerm v_10 (ATerm o_10, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm y_3 (ATerm s_47, ATerm);
ATerm z_3 (ATerm w_43, ATerm x_43, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm e_4 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm g_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_71 (ATerm), ATerm);
ATerm t_3 (ATerm f_41, ATerm g_41, ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm f_4 (ATerm n_41, ATerm o_41, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_4 (ATerm h_25, ATerm i_25, ATerm g_25, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_4 (ATerm l_23, ATerm m_23, ATerm);
ATerm foldr_2_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_5 (ATerm);
ATerm need_help_1_0 (ATerm d_85 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_71 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm c_4 (ATerm y_26, ATerm z_26, ATerm);
ATerm Program_1_0 (ATerm m_66 (ATerm), ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm n_66 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm s_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm a_61 (ATerm), ATerm b_61 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm z_89 (ATerm), ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm parse_options_1_0 (ATerm y_89 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm iowrap_3_0 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm s_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL;
  f_0 = t;
  t = term_z_7;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_a_8;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_8), l_0), term_b_8);
  n_0 = t;
  t = SSL_printnl(m_0, n_0);
  t = term_d_8;
  o_0 = t;
  t = SSL_exit(o_0);
  t = f_0;
  return(t);
}
ATerm debug_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm x_0 = NULL,d_1 = NULL,e_1 = NULL,j_1 = NULL;
  x_0 = t;
  t = q_87(t);
  d_1 = t;
  t = term_a_8;
  e_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_0), d_1);
  j_1 = t;
  t = SSL_printnl(e_1, j_1);
  t = x_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 = NULL,t_1 = NULL;
      q_1 = t;
      t = term_g_8;
      t = get_config_0_0(t);
      t_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_1, term_h_8);
      t = geq_0_0(t);
      t = q_1;
      t = x_82(t);
      ;
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
    }
  return(t);
}
ATerm Param_1_0 (ATerm k_61 (ATerm), ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL,x_1 = NULL,y_1 = NULL,b_0 = NULL,k_0 = NULL;
  y_1 = t;
  if(match_cons(t, sym_Param_1))
    {
      v_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_1);
  u_1 = t;
  t = v_1;
  t = k_61(t);
  x_1 = t;
  k_0 = t;
  t = (ATerm) ATmakeAppl(sym_Param_1, x_1);
  b_0 = t;
  t = SSLsetAnnotations(b_0, u_1);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm i_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_1_0(w_1, t);
      ;
      LocalPopChoice(l_8);
    }
  else
    {
      t = i_8;
      t = if_verbose2_1_0(z_1, t);
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = fc_List_1_0(fc_Arg_0_0, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm d_2 = NULL;
  d_2 = t;
  t = SSL_is_string(d_2);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = debug_1_0(a_2, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_n_8;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm e_2 = NULL;
  e_2 = t;
  t = SSL_is_int(e_2);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_o_8;
  return(t);
}
ATerm fc_Arg_0_0 (ATerm t)
{
  ATerm q_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = NonTermRef_2_0(o_1, r_1, t);
          ;
          LocalPopChoice(u_8);
        }
      else
        {
          t = t_8;
          {
            ATerm w_8 = t;
            int x_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Param_1_0(b_2, t);
                ;
                LocalPopChoice(x_8);
              }
            else
              {
                t = w_8;
                {
                  ATerm z_8 = t;
                  int a_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(!(match_cons(t, sym_String_0)))
                        _fail(t);
                      ;
                      LocalPopChoice(a_9);
                    }
                  else
                    {
                      t = z_8;
                      if(!(match_cons(t, sym_Int_0)))
                        _fail(t);
                    }
                }
              }
          }
        }
      ;
      LocalPopChoice(s_8);
    }
  else
    {
      t = q_8;
      t = if_verbose2_1_0(c_2, t);
    }
  return(t);
}
ATerm NonTermRef_2_0 (ATerm d_61 (ATerm), ATerm e_61 (ATerm), ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,o_2 = NULL,p_0 = NULL,q_0 = NULL;
  o_2 = t;
  if(match_cons(t, sym_NonTermRef_2))
    {
      g_2 = ATgetArgument(t, 0);
      h_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_2);
  f_2 = t;
  t = g_2;
  t = d_61(t);
  i_2 = t;
  t = h_2;
  t = e_61(t);
  j_2 = t;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_NonTermRef_2, i_2, j_2);
  p_0 = t;
  t = SSLsetAnnotations(p_0, f_2);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_1_0(n_2, t);
      ;
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      t = if_verbose2_1_0(p_2, t);
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = fc_List_1_0(fc_Arg_0_0, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm s_2 = NULL;
  s_2 = t;
  t = SSL_is_string(s_2);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_n_8;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm t_2 = NULL;
  t_2 = t;
  t = SSL_is_int(t_2);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_e_9;
  return(t);
}
ATerm fc_ProdItem_0_0 (ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_9 = t;
      int l_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = NonTermRef_2_0(l_2, m_2, t);
          ;
          LocalPopChoice(l_9);
        }
      else
        {
          t = i_9;
          {
            ATerm m_9 = t;
            int q_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Param_1_0(r_2, t);
                ;
                LocalPopChoice(q_9);
              }
            else
              {
                t = m_9;
                {
                  ATerm r_9 = t;
                  int s_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(!(match_cons(t, sym_String_0)))
                        _fail(t);
                      ;
                      LocalPopChoice(s_9);
                    }
                  else
                    {
                      t = r_9;
                      if(!(match_cons(t, sym_Int_0)))
                        _fail(t);
                    }
                }
              }
          }
        }
      ;
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      t = if_verbose2_1_0(v_2, t);
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = debug_1_0(c_3, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm fc_List_1_0 (ATerm h_67 (ATerm), ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_9 = t;
      int a_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(a_10);
        }
      else
        {
          t = z_9;
          {
            ATerm a_3 (ATerm t)
            {
              t = fc_List_1_0(h_67, t);
              return(t);
            }
            t = Cons_2_0(h_67, a_3, t);
          }
        }
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      t = if_verbose2_1_0(b_3, t);
    }
  return(t);
}
ATerm Id_1_0 (ATerm l_61 (ATerm), ATerm t)
{
  ATerm u_2 = NULL,w_2 = NULL,y_2 = NULL,z_2 = NULL,r_0 = NULL,s_0 = NULL;
  z_2 = t;
  if(match_cons(t, sym_Id_1))
    {
      w_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_2);
  u_2 = t;
  t = w_2;
  t = l_61(t);
  y_2 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_Id_1, y_2);
  r_0 = t;
  t = SSLsetAnnotations(r_0, u_2);
  return(t);
}
ATerm Prod_2_0 (ATerm i_61 (ATerm), ATerm j_61 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,i_3 = NULL,j_3 = NULL,r_3 = NULL,p_4 = NULL,t_0 = NULL,u_0 = NULL;
  p_4 = t;
  if(match_cons(t, sym_Prod_2))
    {
      f_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_4);
  e_3 = t;
  t = f_3;
  t = i_61(t);
  j_3 = t;
  t = i_3;
  t = j_61(t);
  r_3 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Prod_2, j_3, r_3);
  t_0 = t;
  t = SSLsetAnnotations(t_0, e_3);
  return(t);
}
ATerm NonTermDec_3_0 (ATerm f_61 (ATerm), ATerm g_61 (ATerm), ATerm h_61 (ATerm), ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,j_5 = NULL,k_5 = NULL,m_5 = NULL,n_5 = NULL,p_5 = NULL,v_0 = NULL,y_0 = NULL;
  p_5 = t;
  if(match_cons(t, sym_NonTermDec_3))
    {
      x_4 = ATgetArgument(t, 0);
      y_4 = ATgetArgument(t, 1);
      j_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_5);
  w_4 = t;
  t = x_4;
  t = f_61(t);
  k_5 = t;
  t = y_4;
  t = g_61(t);
  m_5 = t;
  t = j_5;
  t = h_61(t);
  n_5 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_NonTermDec_3, k_5, m_5, n_5);
  v_0 = t;
  t = SSLsetAnnotations(v_0, w_4);
  return(t);
}
ATerm TreeGrammar_1_0 (ATerm c_61 (ATerm), ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL,x_5 = NULL,e_6 = NULL,z_0 = NULL,a_1 = NULL;
  e_6 = t;
  if(match_cons(t, sym_TreeGrammar_1))
    {
      u_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_6);
  t_5 = t;
  t = u_5;
  t = c_61(t);
  x_5 = t;
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym_TreeGrammar_1, x_5);
  z_0 = t;
  t = SSLsetAnnotations(z_0, t_5);
  return(t);
}
ATerm _2_0 (ATerm l_56 (ATerm), ATerm m_56 (ATerm), ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,e_7 = NULL,g_7 = NULL,l_7 = NULL,m_7 = NULL,b_1 = NULL,c_1 = NULL;
  m_7 = t;
  if(match_cons(t, sym__2))
    {
      r_6 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_7);
  q_6 = t;
  t = r_6;
  t = l_56(t);
  g_7 = t;
  t = e_7;
  t = m_56(t);
  l_7 = t;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_7, l_7);
  b_1 = t;
  t = SSLsetAnnotations(b_1, q_6);
  return(t);
}
ATerm u_3 (ATerm u_43, ATerm v_43, ATerm t)
{
  ATerm r_7 = NULL;
  t = SSL_fputc(u_43, v_43);
  r_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_7);
  return(t);
}
ATerm v_3 (ATerm q_47, ATerm r_47, ATerm t)
{
  ATerm t_7 = NULL;
  t = SSL_write_term_to_stream_text(q_47, r_47);
  t_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_7);
  return(t);
}
ATerm x_3 (ATerm s_87 (ATerm), ATerm t_464, ATerm u_47, ATerm t)
{
  ATerm u_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_464, term_d_10);
  t = open_stream_0_0(t);
  u_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_7, u_47);
  t = s_87(t);
  t = fclose_0_0(t);
  t = u_47;
  return(t);
}
ATerm w_3 (ATerm m_47, ATerm n_47, ATerm t)
{
  ATerm v_7 = NULL;
  t = SSL_write_term_to_stream_baf(m_47, n_47);
  v_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_7);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = fetch_1_0(o_3, t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm p_8 = NULL,r_8 = NULL;
  if(match_cons(t, sym__2))
    {
      p_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3(p_3, p_8, r_8, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm v_8 = NULL,y_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_10 = ATgetArgument(t, 0);
      if(match_cons(e_10, sym_Stream_1))
        {
          v_8 = ATgetArgument(e_10, 0);
        }
      else
        _fail(t);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(v_8, y_8, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm d_9 = NULL,f_9 = NULL;
  if(match_cons(t, sym__2))
    {
      d_9 = ATgetArgument(t, 0);
      f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3(s_3, d_9, f_9, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_10 = ATgetArgument(t, 0);
      if(match_cons(f_10, sym_Stream_1))
        {
          k_9 = ATgetArgument(f_10, 0);
        }
      else
        _fail(t);
      n_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(k_9, n_9, t);
  j_9 = t;
  t = term_g_10;
  o_9 = t;
  t = j_9;
  if(match_cons(t, sym_Stream_1))
    {
      p_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_10, j_9);
  t = u_3(o_9, p_9, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL;
  j_8 = t;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm h_10 = t;
      int i_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((k_8 != NULL) && (k_8 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_8 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_3, t);
          ;
          LocalPopChoice(i_10);
        }
      else
        {
          t = h_10;
          t = term_j_10;
          if(((k_8 != NULL) && (k_8 != t)))
            _fail(t);
          else
            k_8 = t;
        }
      return(t);
    }
    t = _2_0(g_3, _id, t);
    t = j_8;
    {
      ATerm k_3 (ATerm t)
      {
        ATerm m_8 = NULL;
        m_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_8), m_8);
        return(t);
      }
      t = _2_0(_id, k_3, t);
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(m_3, n_3, t);
            ;
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            t = _2_0(_id, q_3, t);
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
ATerm apply_strategy_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,b_10 = NULL,c_10 = NULL;
  w_9 = t;
  t = dtime_0_0(t);
  t = w_9;
  t = f_84(t);
  x_9 = t;
  t = dtime_0_0(t);
  y_9 = t;
  t = x_9;
  if(match_cons(t, sym__2))
    {
      b_10 = ATgetArgument(t, 0);
      c_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_10), (ATerm) ATmakeAppl(sym_Runtime_1, y_9)), c_10);
  return(t);
}
ATerm v_10 (ATerm o_10, ATerm t)
{
  t = SSL_fclose(o_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL;
  t_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_10 = ATgetArgument(t, 0);
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_10);
            ;
            LocalPopChoice(n_10);
          }
        else
          {
            t = m_10;
            t = v_10(t_10, t);
          }
      }
    }
  else
    {
      t = v_10(t_10, t);
    }
  return(t);
}
ATerm y_3 (ATerm s_47, ATerm t)
{
  t = SSL_read_term_from_stream(s_47);
  return(t);
}
ATerm z_3 (ATerm w_43, ATerm x_43, ATerm t)
{
  ATerm w_10 = NULL;
  t = SSL_fopen(w_43, x_43);
  w_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_10);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_10 = NULL;
  t = SSL_stdin_stream();
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_10 = NULL;
  t = SSL_stdout_stream();
  y_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_10 = NULL;
  t = SSL_stderr_stream();
  z_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_10);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm m_11 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      m_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_11;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm v_11 = NULL;
  v_11 = t;
  t = SSL_is_string(v_11);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_10 = ATgetArgument(t, 0);
      ATerm q_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_11 = NULL,w_0 = NULL;
        i_11 = t;
        t = SSL_explode_term(i_11);
        if(match_cons(t, sym__2))
          {
            ATerm a_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_11) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm b_11 = ATgetArgument(t, 1);
              if(((ATgetType(b_11) == AT_LIST) && !(ATisEmpty(b_11))))
                {
                  w_0 = ATgetFirst((ATermList) b_11);
                  {
                    ATerm c_11 = (ATerm) ATgetNext((ATermList) b_11);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_0;
        if(match_cons(t, sym_stderr_0))
          {
            t = w_0;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = w_0;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = w_0;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = r_10;
        {
          ATerm d_11 = t;
          int e_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_11 = NULL,l_11 = NULL;
              t = _2_0(b_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  k_11 = ATgetArgument(t, 0);
                  l_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_3(k_11, l_11, t);
              ;
              LocalPopChoice(e_11);
            }
          else
            {
              t = d_11;
              {
                ATerm n_11 = NULL,u_11 = NULL;
                t = _2_0(e_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    n_11 = ATgetArgument(t, 0);
                    u_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_3(n_11, u_11, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,a_12 = NULL;
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_12 = NULL;
      b_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_12, term_j_11);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      t = debug_1_0(g_4, t);
      _fail(t);
    }
  x_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_3(a_12, t);
  y_11 = t;
  t = x_11;
  t = fclose_0_0(t);
  t = y_11;
  return(t);
}
ATerm fetch_1_0 (ATerm u_71 (ATerm), ATerm t)
{
  ATerm d_12 (ATerm t)
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(u_71, _id, t);
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        t = Cons_2_0(_id, d_12, t);
      }
    return(t);
  }
  t = d_12(t);
  return(t);
}
ATerm t_3 (ATerm f_41, ATerm g_41, ATerm t)
{
  t = SSL_strcat(f_41, g_41);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_12 = NULL;
      m_12 = t;
      t = SSL_is_string(m_12);
      ;
      LocalPopChoice(w_11);
    }
  else
    {
      t = t_11;
      {
        ATerm z_11 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_4, t);
            ;
            LocalPopChoice(c_12);
          }
        else
          {
            t = z_11;
            {
              ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
              r_12 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_12 = ATgetArgument(t, 0);
                  t = s_12;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_12 = ATgetArgument(t, 0);
                      t = s_12;
                      {
                        ATerm e_12 = t;
                        int f_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(f_12);
                          }
                        else
                          {
                            t = e_12;
                            t = debug_1_0(i_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_13 = NULL,b_13 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_12 = ATgetArgument(t, 0);
                          t_12 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_12;
                      t = eval_config_0_0(t);
                      a_13 = t;
                      t = t_12;
                      t = eval_config_0_0(t);
                      b_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_13, b_13);
                      t = t_3(a_13, b_13, t);
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
  ATerm l_13 = NULL,o_13 = NULL;
  l_13 = t;
  t = term_g_12;
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_12, l_13);
  t = c_4(o_13, l_13, t);
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_13 = NULL,q_13 = NULL;
        t = eval_config_0_0(t);
        p_13 = t;
        t = term_g_12;
        q_13 = t;
        t = SSL_table_put(q_13, l_13, p_13);
        t = p_13;
        ;
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
      }
  }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm u_13 = NULL;
  u_13 = t;
  if(match_string(t, "-k"))
    {
      t = u_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_13;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm v_13 = NULL,z_13 = NULL,b_14 = NULL;
  v_13 = t;
  t = SSL_string_to_int(v_13);
  z_13 = t;
  t = term_j_12;
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_12, z_13);
  t = f_4(b_14, z_13, t);
  t = v_13;
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_k_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, k_4, l_4, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm f_14 = NULL;
  f_14 = t;
  if(match_string(t, "-S"))
    {
      t = f_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_14;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL;
  t = term_g_8;
  g_14 = t;
  t = term_l_12;
  h_14 = t;
  t = term_n_12;
  t = f_4(g_14, h_14, t);
  t = term_o_12;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_p_12;
  return(t);
}
ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  i_14 = t;
  t = SSL_string_to_int(i_14);
  j_14 = t;
  t = term_g_8;
  k_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_8, j_14);
  t = f_4(k_14, j_14, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_14);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_q_12;
  return(t);
}
ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL;
  t = term_u_12;
  l_14 = t;
  t = term_z_7;
  m_14 = t;
  t = term_v_12;
  t = f_4(l_14, m_14, t);
  t = term_w_12;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_x_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_4, n_4, o_4, t);
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm c_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_4, r_4, s_4, t);
            ;
            LocalPopChoice(d_13);
          }
        else
          {
            t = c_13;
            t = Option_3_0(t_4, u_4, v_4, t);
          }
      }
    }
  return(t);
}
ATerm f_4 (ATerm n_41, ATerm o_41, ATerm t)
{
  ATerm n_14 = NULL;
  t = term_g_12;
  n_14 = t;
  t = SSL_table_put(n_14, n_41, o_41);
  t = (ATerm) ATmakeAppl(sym__3, term_g_12, n_41, o_41);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
      t = term_z_7;
      t = d_0(t);
      s_14 = t;
      t = term_e_13;
      t_14 = t;
      t = term_f_13;
      u_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_13, term_f_13, s_14);
      t = d_4(t_14, u_14, s_14, t);
      _fail(t);
    }
  else
    {
      ATerm b_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_14 = ATgetFirst((ATermList) t);
          r_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_14;
      t = a_0(t);
      t = term_z_7;
      t = c_0(t);
      b_15 = t;
      t = (ATerm) ATinsert(CheckATermList(r_14), b_15);
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm f_15 = NULL;
  f_15 = t;
  if(match_string(t, "-o"))
    {
      t = f_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_15;
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL;
  g_15 = t;
  t = term_g_13;
  h_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_13, g_15);
  t = f_4(h_15, g_15, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_15);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_h_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_4, a_5, b_5, t);
  return(t);
}
ATerm d_4 (ATerm h_25, ATerm i_25, ATerm g_25, ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL;
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_25, i_25);
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_13 = ATgetArgument(t, 0);
            ATerm m_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_25, i_25);
        t = c_4(h_25, i_25, t);
        ;
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        t = (ATerm) ATempty;
      }
    m_15 = t;
    t = (ATerm) ATinsert(CheckATermList(m_15), g_25);
    n_15 = t;
    t = SSL_table_put(h_25, i_25, n_15);
    t = l_15;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
      t = term_z_7;
      t = j_0(t);
      z_15 = t;
      t = term_e_13;
      a_16 = t;
      t = term_f_13;
      b_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_13, term_f_13, z_15);
      t = d_4(a_16, b_16, z_15, t);
      _fail(t);
    }
  else
    {
      ATerm f_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_15 = ATgetFirst((ATermList) t);
          w_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_15 = ATgetFirst((ATermList) t);
          y_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_15;
      t = h_0(t);
      t = x_15;
      t = i_0(t);
      f_16 = t;
      t = (ATerm) ATinsert(CheckATermList(y_15), f_16);
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm l_16 = NULL;
  l_16 = t;
  if(match_string(t, "-i"))
    {
      t = l_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_16;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL;
  m_16 = t;
  t = term_n_13;
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_13, m_16);
  t = f_4(n_16, m_16, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_16);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_r_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_5, d_5, e_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_7;
  t = whoami_0_0(t);
  o_16 = t;
  t = term_a_8;
  p_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_13), o_16);
  q_16 = t;
  t = SSL_printnl(p_16, q_16);
  t = term_d_8;
  r_16 = t;
  t = SSL_exit(r_16);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_13;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_4 (ATerm l_23, ATerm m_23, ATerm t)
{
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_23, m_23);
      ;
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      t = SSL_addr(l_23, m_23);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm t)
{
  ATerm y_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_78(t);
      ;
      LocalPopChoice(a_14);
    }
  else
    {
      t = y_13;
      {
        ATerm u_16 = NULL,v_16 = NULL,y_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_16 = ATgetFirst((ATermList) t);
            v_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_16;
        t = foldr_2_0(c_78, d_78, t);
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_16, y_16);
        t = d_78(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_l_12;
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm p_1 = NULL,s_1 = NULL;
  if(match_cons(t, sym__2))
    {
      p_1 = ATgetArgument(t, 0);
      s_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(p_1, s_1, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_17 = NULL,l_1 = NULL,m_1 = NULL;
  t = times_0_0(t);
  l_1 = t;
  t = SSL_explode_term(l_1);
  if(match_cons(t, sym__2))
    {
      ATerm c_14 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_1;
  t = foldr_2_0(f_5, g_5, t);
  b_17 = t;
  t = SSL_TicksToSeconds(b_17);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
  m_17 = t;
  if(match_cons(t, sym__2))
    {
      n_17 = ATgetArgument(t, 0);
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_17;
        if((n_17 != t))
          {
            _fail(t);
          }
        t = m_17;
        ;
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        t = (ATerm) ATmakeAppl(sym__2, n_17, o_17);
        {
          ATerm o_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_17, o_17);
              ;
              LocalPopChoice(p_14);
            }
          else
            {
              t = o_14;
              t = SSL_gtr(n_17, o_17);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_17, o_17);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_17 = NULL,t_17 = NULL;
      r_17 = t;
      t = term_g_8;
      t = get_config_0_0(t);
      t_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_17, term_d_8);
      t = geq_0_0(t);
      t = r_17;
      t = w_82(t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL;
  t = run_time_0_0(t);
  v_17 = t;
  t = term_z_7;
  t = whoami_0_0(t);
  w_17 = t;
  t = term_a_8;
  x_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_14), v_17), term_x_14), w_17);
  y_17 = t;
  t = SSL_printnl(x_17, y_17);
  t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_14), v_17), term_x_14), w_17));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_17 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_12;
  z_17 = t;
  t = SSL_exit(z_17);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
      {
        ATerm c_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(d_15);
          }
        else
          {
            t = c_15;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_85 (ATerm), ATerm t)
{
  ATerm e_15 = t;
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
      t = e_15;
      t = fetch_1_0(i_5, t);
    }
  t = d_85(t);
  return(t);
}
ATerm map_1_0 (ATerm k_71 (ATerm), ATerm t)
{
  ATerm a_18 (ATerm t)
  {
    ATerm k_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(o_15);
      }
    else
      {
        t = k_15;
        t = Cons_2_0(k_71, a_18, t);
      }
    return(t);
  }
  t = a_18(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_18 = ATgetFirst((ATermList) t);
      d_18 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_18 = NULL,i_18 = NULL;
        t = d_18;
        t = g_0(t);
        h_18 = t;
        t = c_18;
        t = e_0(t);
        i_18 = t;
        t = d_18;
        {
          ATerm l_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(h_18), i_18);
            return(t);
          }
          t = reverse_acc_2_0(e_0, l_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_7;
      t = g_0(t);
    }
  return(t);
}
ATerm c_4 (ATerm y_26, ATerm z_26, ATerm t)
{
  t = SSL_table_get(y_26, z_26);
  return(t);
}
ATerm Program_1_0 (ATerm m_66 (ATerm), ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,f_1 = NULL,g_1 = NULL;
  m_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_18);
  j_18 = t;
  t = k_18;
  t = m_66(t);
  l_18 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_18);
  f_1 = t;
  t = SSLsetAnnotations(f_1, j_18);
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm r_18 = NULL;
  r_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_18), term_p_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL;
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      t = fetch_1_0(o_5, t);
    }
  t = term_s_15;
  t = echo_0_0(t);
  t = term_e_13;
  p_18 = t;
  t = term_f_13;
  q_18 = t;
  t = term_t_15;
  t = c_4(p_18, q_18, t);
  t = reverse_acc_2_0(_id, q_5, t);
  t = map_1_0(r_5, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm n_66 (ATerm), ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,h_1 = NULL,i_1 = NULL;
  v_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      t_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_18);
  s_18 = t;
  t = t_18;
  t = n_66(t);
  u_18 = t;
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_18);
  h_1 = t;
  t = SSLsetAnnotations(h_1, s_18);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
  z_18 = t;
  {
    ATerm u_15 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_16 = ATgetFirst((ATermList) t);
                ATerm e_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_18;
          }
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = u_15;
        t = (ATerm) ATinsert(ATempty, z_18);
      }
    a_19 = t;
    t = term_j_10;
    b_19 = t;
    t = SSL_printnl(b_19, a_19);
    t = z_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  t = term_g_16;
  f_19 = t;
  t = term_z_7;
  g_19 = t;
  t = term_h_16;
  t = f_4(f_19, g_19, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_i_16;
  return(t);
}
ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  t = term_g_16;
  h_19 = t;
  t = term_z_7;
  i_19 = t;
  t = term_h_16;
  t = f_4(h_19, i_19, t);
  t = term_j_16;
  j_19 = t;
  t = term_z_7;
  k_19 = t;
  t = term_k_16;
  t = f_4(j_19, k_19, t);
  t = term_s_16;
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_t_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_5, v_5, w_5, t);
      ;
      LocalPopChoice(x_16);
    }
  else
    {
      t = w_16;
      t = Option_3_0(y_5, z_5, a_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_61 (ATerm), ATerm b_61 (ATerm), ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,k_1 = NULL,n_1 = NULL;
  q_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_19 = ATgetFirst((ATermList) t);
      n_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_19);
  l_19 = t;
  t = m_19;
  t = a_61(t);
  o_19 = t;
  t = n_19;
  t = b_61(t);
  p_19 = t;
  n_1 = t;
  t = (ATerm) ATinsert(CheckATermList(p_19), o_19);
  k_1 = t;
  t = SSLsetAnnotations(k_1, l_19);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL;
  v_19 = t;
  t = term_t_13;
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_13, v_19);
  t = f_4(w_19, v_19, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, v_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_89 (ATerm), ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_17;
        t = z_89(t);
        ;
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
      }
    t = u_19;
    {
      ATerm c_6 (ATerm t)
      {
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_17 = t;
            int g_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(g_17);
              }
            else
              {
                t = f_17;
                t = z_89(t);
                t = Cons_2_0(_id, c_6, t);
              }
            ;
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            {
              ATerm y_19 = NULL,z_19 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_19 = ATgetFirst((ATermList) t);
                  z_19 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_19), (ATerm) ATmakeAppl(sym_Undefined_1, y_19));
            }
          }
        return(t);
      }
      t = Cons_2_0(b_6, c_6, t);
    }
  }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  if(match_string(t, "--help"))
    {
      t = n_20;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_20;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_20;
        }
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  t = term_j_15;
  o_20 = t;
  t = term_z_7;
  p_20 = t;
  t = term_h_17;
  t = f_4(o_20, p_20, t);
  t = term_i_17;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_j_17;
  return(t);
}
ATerm i_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  g_20 = t;
  t = term_e_13;
  j_20 = t;
  t = term_f_13;
  k_20 = t;
  t = (ATerm) ATempty;
  l_20 = t;
  t = SSL_table_put(j_20, k_20, l_20);
  t = g_20;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm k_17 = t;
      int l_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_89(t);
          ;
          LocalPopChoice(l_17);
        }
      else
        {
          t = k_17;
          {
            ATerm p_17 = t;
            int q_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_6, g_6, h_6, t);
                ;
                LocalPopChoice(q_17);
              }
            else
              {
                t = p_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_6, t);
    {
      ATerm s_17 = t;
      int u_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_20 = NULL;
          w_20 = t;
          {
            ATerm b_18 = t;
            int e_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_3 = NULL;
                t = w_20;
                {
                  ATerm f_18 = t;
                  int g_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_j_15;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(g_18);
                    }
                  else
                    {
                      t = f_18;
                      t = fetch_1_0(i_6, t);
                    }
                  t = w_20;
                  t = default_system_usage_0_0(t);
                  t = term_l_12;
                  d_3 = t;
                  t = SSL_exit(d_3);
                }
                ;
                LocalPopChoice(e_18);
              }
            else
              {
                t = b_18;
                {
                  ATerm l_3 = NULL;
                  t = term_g_16;
                  t = get_config_0_0(t);
                  t = w_20;
                  t = default_system_about_0_0(t);
                  t = term_l_12;
                  l_3 = t;
                  t = SSL_exit(l_3);
                }
              }
          }
          ;
          LocalPopChoice(u_17);
        }
      else
        {
          t = s_17;
          {
            ATerm n_18 = t;
            int o_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL;
                ATerm j_6 (ATerm t)
                {
                  ATerm k_6 (ATerm t)
                  {
                    if(((h_20 != NULL) && (h_20 != t)))
                      _fail(t);
                    else
                      h_20 = t;
                    return(t);
                  }
                  t = Undefined_1_0(k_6, t);
                  return(t);
                }
                t = fetch_1_0(j_6, t);
                t = term_a_8;
                x_20 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_20)), term_w_18);
                y_20 = t;
                t = SSL_printnl(x_20, y_20);
                t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_20)), term_w_18));
                t = default_system_usage_0_0(t);
                t = term_d_8;
                z_20 = t;
                t = SSL_exit(z_20);
                ;
                LocalPopChoice(o_18);
              }
            else
              {
                t = n_18;
              }
          }
        }
      i_20 = t;
      t = term_e_13;
      m_20 = t;
      t = SSL_table_destroy(m_20);
      t = i_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
  t = parse_options_1_0(f_85, t);
  c_21 = t;
  t = term_x_18;
  d_21 = t;
  t = SSL_table_create(d_21);
  t = term_x_18;
  e_21 = t;
  t = term_y_18;
  f_21 = t;
  t = SSL_table_put(e_21, f_21, c_21);
  t = c_21;
  t = h_85(t);
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_85, t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        {
          ATerm e_19 = t;
          int r_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_19);
            }
          else
            {
              t = e_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = if_verbose2_1_0(t_6, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL;
  t = term_s_19;
  g_21 = t;
  t = term_z_7;
  h_21 = t;
  t = term_t_19;
  t = f_4(g_21, h_21, t);
  t = term_x_19;
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
  i_21 = t;
  t = term_t_13;
  t = get_config_0_0(t);
  j_21 = t;
  t = term_a_8;
  k_21 = t;
  t = (ATerm) ATinsert(ATempty, j_21);
  l_21 = t;
  t = SSL_printnl(k_21, l_21);
  t = i_21;
  return(t);
}
ATerm iowrap_3_0 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_84(t);
        ;
        LocalPopChoice(c_20);
      }
    else
      {
        t = b_20;
        {
          ATerm d_20 = t;
          int e_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(e_20);
            }
          else
            {
              t = d_20;
              {
                ATerm f_20 = t;
                int q_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(q_20);
                  }
                else
                  {
                    t = f_20;
                    {
                      ATerm r_20 = t;
                      int s_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(o_6, p_6, s_6, t);
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
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(u_20);
                              }
                            else
                              {
                                t = t_20;
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
  ATerm n_6 (ATerm t)
  {
    ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
    m_21 = t;
    {
      ATerm v_20 = t;
      int a_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((n_21 != NULL) && (n_21 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(u_6, t);
          ;
          LocalPopChoice(a_21);
        }
      else
        {
          t = v_20;
          t = term_b_21;
          n_21 = t;
        }
      t = not_null(n_21);
      t = ReadFromFile_0_0(t);
      o_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_21, o_21);
      t = apply_strategy_1_0(o_84, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(l_6, q_84, m_6, n_6, t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = _2_0(_id, w_6, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm p_21 = NULL;
  p_21 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = TreeGrammar_1_0(x_6, t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = if_verbose2_1_0(x_7, t);
      }
    t = p_21;
  }
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = fc_List_1_0(y_6, t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = NonTermDec_3_0(z_6, a_7, b_7, t);
      ;
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      t = if_verbose2_1_0(s_7, t);
    }
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_1_0(c_7, t);
      ;
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      t = if_verbose2_1_0(d_7, t);
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm r_21 = NULL;
  r_21 = t;
  t = SSL_is_int(r_21);
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = fc_List_1_0(h_7, t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm q_21 = NULL;
  q_21 = t;
  t = SSL_is_string(q_21);
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = debug_1_0(f_7, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_n_8;
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Prod_2_0(i_7, j_7, t);
      ;
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      t = if_verbose2_1_0(p_7, t);
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_1_0(k_7, t);
      ;
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      t = if_verbose2_1_0(n_7, t);
    }
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = fc_List_1_0(fc_ProdItem_0_0, t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm s_21 = NULL;
  s_21 = t;
  t = SSL_is_string(s_21);
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = debug_1_0(o_7, t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_n_8;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = debug_1_0(q_7, t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = debug_1_0(w_7, t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = debug_1_0(y_7, t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_f_22;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(v_6, _fail, default_usage_0_0, t);
  return(t);
}
