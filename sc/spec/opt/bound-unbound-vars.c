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
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Choice_2;
Symbol sym_Let_2;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Some_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
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
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_i_25;
ATerm term_e_24;
ATerm term_c_24;
ATerm term_o_23;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_j_22;
ATerm term_c_22;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_j_21;
ATerm term_s_20;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_n_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_i_15;
ATerm term_g_14;
ATerm term_z_13;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_f_11;
ATerm term_s_10;
ATerm term_z_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_t_7;
void init_constant_terms (void)
{
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_Defined_2, term_u_8, term_v_8);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Defined_2, term_o_11, term_p_11);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Defined_2, term_l_12, term_v_8);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym__3, term_t_21, term_u_21, term_t_7);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm if_verbose4_1_0 (ATerm f_111 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm p_74 (ATerm), ATerm);
ATerm mark_guardedlchoice_1_0 (ATerm i_82 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm h_82 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm g_82 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm q_74 (ATerm), ATerm r_74 (ATerm), ATerm);
ATerm mark_rec_0_0 (ATerm);
ATerm PrimT_3_0 (ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm Call_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm);
ATerm b_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm mark_sdef_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm Let_2_0 (ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm);
ATerm j_1 (ATerm);
ATerm b_13 (ATerm n_11, ATerm u_11, ATerm v_11, ATerm w_11, ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm assert_1_0 (ATerm r_82 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm o_82 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm n_82 (ATerm), ATerm);
ATerm scope_2_0 (ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm);
ATerm y_1 (ATerm);
ATerm b_2 (ATerm);
ATerm f_2 (ATerm);
ATerm mark_scope_0_0 (ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm alltd_1_0 (ATerm n_84 (ATerm), ATerm);
ATerm Build_1_0 (ATerm b_74 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm g_2 (ATerm);
ATerm mark_match_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm l_69 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm q_69 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm u_2 (ATerm);
ATerm w_2 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm mark_bound_unbound_vars_0_0 (ATerm);
ATerm _2_0 (ATerm s_64 (ATerm), ATerm t_64 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm n_102 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm z_103 (ATerm), ATerm);
ATerm o_20 (ATerm i_20, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm w_86 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm c_87 (ATerm), ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_111 (ATerm), ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm u_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm y_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_111 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm c_6 (ATerm);
ATerm need_help_1_0 (ATerm x_104 (ATerm), ATerm);
ATerm map_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm z_81 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm a_82 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm t_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm);
ATerm u_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm c_108 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm b_7 (ATerm);
ATerm parse_options_1_0 (ATerm b_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm);
ATerm f_7 (ATerm);
ATerm h_7 (ATerm);
ATerm j_7 (ATerm);
ATerm l_7 (ATerm);
ATerm n_7 (ATerm);
ATerm iowrap_3_0 (ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL;
  u_0 = t;
  t = term_t_7;
  t = whoami_0_0(t);
  v_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), v_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = u_0;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm f_111 (ATerm), ATerm t)
{
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 = NULL,p_1 = NULL;
      h_1 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 = NULL;
            t = eval_config_0_0(t);
            p_0 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_0);
            t = p_0;
            ;
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
          }
        p_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_1, term_d_8);
        t = geq_0_0(t);
        t = h_1;
        t = f_111(t);
      }
      ;
      LocalPopChoice(a_8);
    }
  else
    {
      t = z_7;
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm p_74 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,x_1 = NULL,z_1 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL;
  e_2 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      u_1 = ATgetArgument(t, 0);
      v_1 = ATgetArgument(t, 1);
      x_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_2);
  t_1 = t;
  t = u_1;
  t = n_74(t);
  z_1 = t;
  t = v_1;
  t = o_74(t);
  c_2 = t;
  t = x_1;
  t = p_74(t);
  d_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, z_1, c_2, d_2), t_1);
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, _id, t);
  {
    ATerm j_0 (ATerm t)
    {
      t = GuardedLChoice_3_0(i_82, _id, _id, t);
      t = GuardedLChoice_3_0(_id, i_82, _id, t);
      return(t);
    }
    ATerm m_0 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, _id, i_82, t);
      return(t);
    }
    t = abstract_choice_2_0(j_0, m_0, t);
  }
  return(t);
}
ATerm LChoice_2_0 (ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL;
  o_2 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      j_2 = ATgetArgument(t, 0);
      k_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_2);
  i_2 = t;
  t = j_2;
  t = j_74(t);
  m_2 = t;
  t = k_2;
  t = k_74(t);
  n_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, m_2, n_2), i_2);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm h_82 (ATerm), ATerm t)
{
  t = LChoice_2_0(_id, _id, t);
  {
    ATerm n_0 (ATerm t)
    {
      t = LChoice_2_0(h_82, _id, t);
      return(t);
    }
    ATerm o_0 (ATerm t)
    {
      t = LChoice_2_0(_id, h_82, t);
      return(t);
    }
    t = abstract_choice_2_0(n_0, o_0, t);
  }
  return(t);
}
ATerm Choice_2_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,v_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL;
  a_3 = t;
  if(match_cons(t, sym_Choice_2))
    {
      t_2 = ATgetArgument(t, 0);
      v_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_3);
  s_2 = t;
  t = t_2;
  t = h_73(t);
  x_2 = t;
  t = v_2;
  t = i_73(t);
  z_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, x_2, z_2), s_2);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,i_3 = NULL,p_3 = NULL;
  e_3 = t;
  t = save_MarkVar_0_0(t);
  f_3 = t;
  t = e_3;
  t = j_82(t);
  g_3 = t;
  t = save_MarkVar_0_0(t);
  i_3 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_e_8, f_3);
  t = table_putlist_0_0(t);
  t = g_3;
  t = k_82(t);
  p_3 = t;
  t = i_3;
  t = isect_MarkVar_0_0(t);
  t = p_3;
  return(t);
}
ATerm mark_choice_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  t = Choice_2_0(_id, _id, t);
  {
    ATerm q_0 (ATerm t)
    {
      t = Choice_2_0(g_82, _id, t);
      return(t);
    }
    ATerm r_0 (ATerm t)
    {
      t = Choice_2_0(_id, g_82, t);
      return(t);
    }
    t = abstract_choice_2_0(q_0, r_0, t);
  }
  return(t);
}
ATerm Rec_2_0 (ATerm q_74 (ATerm), ATerm r_74 (ATerm), ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,b_4 = NULL,f_4 = NULL,i_4 = NULL,j_4 = NULL;
  j_4 = t;
  if(match_cons(t, sym_Rec_2))
    {
      w_3 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_4);
  v_3 = t;
  t = w_3;
  t = q_74(t);
  f_4 = t;
  t = b_4;
  t = r_74(t);
  i_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, f_4, i_4), v_3);
  return(t);
}
ATerm mark_rec_0_0 (ATerm t)
{
  ATerm n_4 = NULL,p_4 = NULL;
  if(match_cons(t, sym_Rec_2))
    {
      ATerm g_8 = ATgetArgument(t, 0);
      ATerm h_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  n_4 = t;
  t = save_MarkVar_0_0(t);
  p_4 = t;
  t = n_4;
  t = Rec_2_0(_id, mark_buv_0_0, t);
  t = p_4;
  t = isect_MarkVar_0_0(t);
  t = n_4;
  t = Rec_2_0(_id, mark_buv_0_0, t);
  return(t);
}
ATerm PrimT_3_0 (ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL;
  y_4 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      r_4 = ATgetArgument(t, 0);
      s_4 = ATgetArgument(t, 1);
      t_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_4);
  q_4 = t;
  t = r_4;
  t = z_74(t);
  v_4 = t;
  t = s_4;
  t = a_75(t);
  w_4 = t;
  t = t_4;
  t = b_75(t);
  x_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, v_4, w_4, x_4), q_4);
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = map_1_0(t_0, t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm b_5 = NULL,g_5 = NULL,i_5 = NULL;
  t = PrimT_3_0(_id, _id, _id, t);
  b_5 = t;
  t = save_MarkVar_0_0(t);
  g_5 = t;
  t = b_5;
  t = PrimT_3_0(_id, _id, s_0, t);
  t = PrimT_3_0(_id, mark_buv_0_0, _id, t);
  i_5 = t;
  t = g_5;
  t = isect_MarkVar_0_0(t);
  t = i_5;
  return(t);
}
ATerm Call_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,q_5 = NULL,r_5 = NULL;
  r_5 = t;
  if(match_cons(t, sym_Call_2))
    {
      k_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_5);
  j_5 = t;
  t = k_5;
  t = v_73(t);
  m_5 = t;
  t = l_5;
  t = w_73(t);
  q_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, m_5, q_5), j_5);
  return(t);
}
ATerm CallT_3_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,w_5 = NULL,x_5 = NULL,a_6 = NULL,b_6 = NULL,f_6 = NULL,p_6 = NULL,a_7 = NULL;
  a_7 = t;
  if(match_cons(t, sym_CallT_3))
    {
      w_5 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
      a_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_7);
  u_5 = t;
  t = w_5;
  t = x_73(t);
  b_6 = t;
  t = x_5;
  t = y_73(t);
  f_6 = t;
  t = a_6;
  t = z_73(t);
  p_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, b_6, f_6, p_6), u_5);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = map_1_0(z_0, t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm k_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_7 = NULL,k_7 = NULL,m_7 = NULL;
      t = CallT_3_0(_id, _id, _id, t);
      i_7 = t;
      t = save_MarkVar_0_0(t);
      k_7 = t;
      t = i_7;
      t = CallT_3_0(_id, _id, y_0, t);
      t = CallT_3_0(_id, mark_buv_0_0, _id, t);
      m_7 = t;
      t = k_7;
      t = isect_MarkVar_0_0(t);
      t = m_7;
      ;
      LocalPopChoice(r_8);
    }
  else
    {
      t = k_8;
      {
        ATerm p_7 = NULL,q_7 = NULL,s_7 = NULL;
        t = Call_2_0(_id, _id, t);
        p_7 = t;
        t = save_MarkVar_0_0(t);
        q_7 = t;
        t = p_7;
        t = Call_2_0(_id, mark_buv_0_0, t);
        s_7 = t;
        t = q_7;
        t = isect_MarkVar_0_0(t);
        t = s_7;
      }
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,i_8 = NULL,j_8 = NULL,n_8 = NULL,p_8 = NULL,q_8 = NULL,s_8 = NULL;
  s_8 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      w_7 = ATgetArgument(t, 0);
      x_7 = ATgetArgument(t, 1);
      y_7 = ATgetArgument(t, 2);
      i_8 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_8);
  v_7 = t;
  t = w_7;
  t = l_76(t);
  j_8 = t;
  t = x_7;
  t = m_76(t);
  n_8 = t;
  t = y_7;
  t = n_76(t);
  p_8 = t;
  t = i_8;
  t = o_76(t);
  q_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, j_8, n_8, p_8, q_8), v_7);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_e_8;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      e_9 = ATgetArgument(t, 0);
      {
        ATerm t_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, e_9), term_z_8);
  t = assert_1_0(f_1, t);
  t = f_9;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_e_8;
  return(t);
}
ATerm mark_sdef_0_0 (ATerm t)
{
  ATerm y_8 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm a_9 = ATgetArgument(t, 0);
      ATerm c_9 = ATgetArgument(t, 1);
      y_8 = ATgetArgument(t, 2);
      {
        ATerm d_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm a_1 (ATerm t)
    {
      ATerm d_1 (ATerm t)
      {
        ATerm b_9 = NULL;
        b_9 = t;
        t = y_8;
        t = map_1_0(e_1, t);
        t = b_9;
        t = mark_buv_0_0(t);
        return(t);
      }
      t = scope_2_0(b_1, d_1, t);
      return(t);
    }
    t = SDefT_4_0(_id, _id, _id, a_1, t);
  }
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,p_9 = NULL;
  p_9 = t;
  {
    ATerm g_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm i_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_9);
        t = p_9;
      }
    else
      {
        t = g_9;
        {
          ATerm j_9 = t;
          int k_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm l_9 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(k_9);
              t = p_9;
            }
          else
            {
              t = j_9;
              {
                ATerm o_9 = t;
                int q_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm r_9 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(q_9);
                    t = p_9;
                  }
                else
                  {
                    t = o_9;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm s_9 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = p_9;
                  }
              }
            }
        }
      }
    t = save_MarkVar_0_0(t);
    m_9 = t;
    t = p_9;
    t = SRTS_one(mark_buv_0_0, t);
    n_9 = t;
    t = m_9;
    t = isect_MarkVar_0_0(t);
    t = n_9;
  }
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL;
  w_0 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue)), w_0);
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_0, x_0);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = SSL_table_keys((ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue)));
  t = map_1_0(g_1, t);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL;
  if(match_cons(t, sym__2))
    {
      b_10 = ATgetArgument(t, 0);
      a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_10;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm e_10 = NULL,f_10 = NULL;
      if(match_cons(t, sym__2))
        {
          e_10 = ATgetArgument(t, 0);
          f_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(b_10, e_10, f_10);
      t = (ATerm) ATmakeAppl(sym__3, b_10, e_10, f_10);
      return(t);
    }
    t = map_1_0(i_1, t);
  }
  return(t);
}
ATerm Let_2_0 (ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm t)
{
  ATerm h_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,q_10 = NULL;
  q_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_10);
  h_10 = t;
  t = k_10;
  t = t_73(t);
  m_10 = t;
  t = l_10;
  t = u_73(t);
  n_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, m_10, n_10), h_10);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,v_12 = NULL,x_12 = NULL,a_13 = NULL;
      n_12 = t;
      if(match_cons(t, sym__2))
        {
          o_12 = ATgetArgument(t, 0);
          p_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_12 = ATgetFirst((ATermList) t);
          a_13 = (ATerm) ATgetNext((ATermList) t);
          t = v_12;
          {
            ATerm w_9 = t;
            int x_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm y_9 = ATgetArgument(t, 0);
                    x_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(x_9);
                t = o_12;
                if(match_cons(t, sym_Scopes_0))
                  {
                    ATerm z_9 = t;
                    int c_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = n_12;
                        ;
                        LocalPopChoice(c_10);
                      }
                    else
                      {
                        t = z_9;
                        t = b_13(o_12, x_12, a_13, n_12, t);
                      }
                  }
                else
                  {
                    t = b_13(o_12, x_12, a_13, n_12, t);
                  }
              }
            else
              {
                t = w_9;
                t = o_12;
                if(!(match_cons(t, sym_Scopes_0)))
                  _fail(t);
                t = n_12;
              }
          }
        }
      else
        {
          t = o_12;
          if(!(match_cons(t, sym_Scopes_0)))
            _fail(t);
          t = n_12;
        }
      ;
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
    }
  return(t);
}
ATerm b_13 (ATerm n_11, ATerm u_11, ATerm v_11, ATerm w_11, ATerm t)
{
  t = w_11;
  {
    ATerm g_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue)), n_11);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_10 = ATgetFirst((ATermList) t);
            if(match_cons(j_10, sym_Defined_2))
              {
                ATerm r_10 = ATgetArgument(j_10, 0);
                if((u_11 != ATgetArgument(j_10, 1)))
                  {
                    _fail(ATgetArgument(j_10, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm p_10 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = w_11;
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = g_10;
        t = (ATerm) ATmakeAppl(sym__2, n_11, (ATerm) ATinsert(CheckATermList(v_11), term_s_10));
      }
  }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  k_11 = t;
  t = save_MarkVar_0_0(t);
  t = k_11;
  t = map_1_0(j_1, t);
  l_11 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_e_8, l_11);
  t = table_putlist_0_0(t);
  t = l_11;
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm d_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
  t = Let_2_0(_id, _id, t);
  d_13 = t;
  t = save_MarkVar_0_0(t);
  h_13 = t;
  t = d_13;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm m_1 (ATerm t)
      {
        ATerm l_13 = NULL;
        t = mark_buv_0_0(t);
        l_13 = t;
        t = h_13;
        t = isect_MarkVar_0_0(t);
        t = l_13;
        return(t);
      }
      t = map_1_0(m_1, t);
      return(t);
    }
    ATerm l_1 (ATerm t)
    {
      ATerm o_13 = NULL;
      t = mark_buv_0_0(t);
      o_13 = t;
      t = h_13;
      t = isect_MarkVar_0_0(t);
      t = o_13;
      return(t);
    }
    t = Let_2_0(k_1, l_1, t);
    t = d_13;
    t = save_MarkVar_0_0(t);
    i_13 = t;
    t = d_13;
    {
      ATerm n_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          ATerm w_13 = NULL;
          w_13 = t;
          t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue)));
          t = (ATerm) ATmakeAppl(sym__2, term_e_8, i_13);
          t = table_putlist_0_0(t);
          t = w_13;
          t = mark_buv_0_0(t);
          return(t);
        }
        t = map_1_0(q_1, t);
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        ATerm e_14 = NULL;
        e_14 = t;
        t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue)));
        t = (ATerm) ATmakeAppl(sym__2, term_e_8, i_13);
        t = table_putlist_0_0(t);
        t = e_14;
        t = mark_buv_0_0(t);
        return(t);
      }
      t = Let_2_0(n_1, o_1, t);
      j_13 = t;
      t = save_MarkVar_0_0(t);
      t = j_13;
    }
  }
  return(t);
}
ATerm assert_1_0 (ATerm r_82 (ATerm), ATerm t)
{
  ATerm f_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
  if(match_cons(t, sym__2))
    {
      f_14 = ATgetArgument(t, 0);
      m_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_82(t);
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_14, f_14, m_14);
  t = table_push_0_0(t);
  {
    ATerm t_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(v_10);
      }
    else
      {
        t = t_10;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_14 = ATgetFirst((ATermList) t);
        p_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_14, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(p_14), (ATerm) ATinsert(CheckATermList(o_14), f_14)));
    t = (ATerm) ATmakeAppl(sym__2, f_14, m_14);
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__2))
    {
      t_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_14, u_14);
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_10 = ATgetArgument(t, 0);
            ATerm z_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_14, u_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_11 = ATgetFirst((ATermList) t);
            c_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_1;
        ;
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        t = (ATerm) ATempty;
      }
    v_14 = t;
    t = SSL_table_put(t_14, u_14, v_14);
    t = (ATerm) ATmakeAppl(sym__2, t_14, u_14);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm o_82 (ATerm), ATerm t)
{
  ATerm b_15 = NULL,d_15 = NULL,f_15 = NULL,g_15 = NULL;
  b_15 = t;
  t = o_82(t);
  d_15 = t;
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(d_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_15 = ATgetFirst((ATermList) t);
        f_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(d_15, (ATerm)ATmakeAppl(sym_Scopes_0), f_15);
    t = g_15;
    {
      ATerm r_1 (ATerm t)
      {
        ATerm h_15 = NULL;
        h_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_15, h_15);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(r_1, t);
      t = b_15;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm t)
{
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_95(t);
      t = j_95(t);
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      t = j_95(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
  k_15 = t;
  t = n_82(t);
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_15, term_f_11);
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_11 = ATgetArgument(t, 0);
            ATerm j_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        t = (ATerm) ATempty;
      }
    m_15 = t;
    t = SSL_table_put(l_15, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(m_15), (ATerm) ATempty));
    t = k_15;
  }
  return(t);
}
ATerm scope_2_0 (ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm t)
{
  t = begin_scope_1_0(p_82, t);
  {
    ATerm s_1 (ATerm t)
    {
      t = end_scope_1_0(p_82, t);
      return(t);
    }
    t = restore_always_2_0(q_82, s_1, t);
  }
  return(t);
}
ATerm Scope_2_0 (ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
  w_15 = t;
  if(match_cons(t, sym_Scope_2))
    {
      s_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_15);
  r_15 = t;
  t = s_15;
  t = d_74(t);
  u_15 = t;
  t = t_15;
  t = e_74(t);
  v_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, u_15, v_15), r_15);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_e_8;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm c_16 = NULL;
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_16), term_q_11);
  t = assert_1_0(f_2, t);
  t = c_16;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_e_8;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm z_15 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      z_15 = ATgetArgument(t, 0);
      {
        ATerm r_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm w_1 (ATerm t)
    {
      ATerm a_2 (ATerm t)
      {
        ATerm b_16 = NULL;
        b_16 = t;
        t = z_15;
        t = map_1_0(b_2, t);
        t = b_16;
        t = mark_buv_0_0(t);
        return(t);
      }
      t = scope_2_0(y_1, a_2, t);
      return(t);
    }
    t = Scope_2_0(_id, w_1, t);
  }
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  j_17 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_2 = NULL,y_2 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue)), j_17);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_2 = ATgetFirst((ATermList) t);
            {
              ATerm y_11 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = y_2;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm z_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_11) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            h_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, k_17), (ATerm) ATinsert(ATempty, h_2));
        ;
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        {
          ATerm a_12 = t;
          int b_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_3 = NULL,t_3 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue)), j_17);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_3 = ATgetFirst((ATermList) t);
                  {
                    ATerm c_12 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = t_3;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm e_12 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_12) != ATmakeSymbol("f_0", 0, ATtrue)))
                    _fail(t);
                  n_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, k_17), (ATerm) ATinsert(ATempty, n_3));
              ;
              LocalPopChoice(b_12);
            }
          else
            {
              t = a_12;
              {
                ATerm d_4 = NULL,o_4 = NULL;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue)), j_17);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    o_4 = ATgetFirst((ATermList) t);
                    {
                      ATerm f_12 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = o_4;
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm h_12 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) h_12) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    d_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, k_17), (ATerm) ATinsert(ATempty, d_4));
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  ATerm o_17 (ATerm t)
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_84(t);
        ;
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = SRTS_all(o_17, t);
      }
    return(t);
  }
  t = o_17(t);
  return(t);
}
ATerm Build_1_0 (ATerm b_74 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,u_17 = NULL,v_17 = NULL;
  v_17 = t;
  if(match_cons(t, sym_Build_1))
    {
      q_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_17);
  p_17 = t;
  t = q_17;
  t = b_74(t);
  u_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, u_17), p_17);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,e_18 = NULL,f_18 = NULL;
  if(match_cons(t, sym__3))
    {
      z_17 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
      e_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(z_17, a_18);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_12 = ATgetFirst((ATermList) t);
      f_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(z_17, a_18, (ATerm) ATinsert(CheckATermList(f_18), e_18));
  t = (ATerm) ATmakeAppl(sym__3, z_17, a_18, e_18);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  t = MarkVar_0_0(t);
  m_18 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_e_8, (ATerm)ATmakeAppl(sym_Var_1, n_18), term_m_12);
  t = table_replace_0_0(t);
  t = m_18;
  return(t);
}
ATerm mark_match_0_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      k_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_18;
  t = alltd_1_0(g_2, t);
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, l_18);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_buv_0_0 (ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = mark_match_0_0(t);
      ;
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1_0(l_2, t);
            ;
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            {
              ATerm u_12 = t;
              int w_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_scope_0_0(t);
                  ;
                  LocalPopChoice(w_12);
                }
              else
                {
                  t = u_12;
                  {
                    ATerm y_12 = t;
                    int z_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_let_0_0(t);
                        ;
                        LocalPopChoice(z_12);
                      }
                    else
                      {
                        t = y_12;
                        {
                          ATerm c_13 = t;
                          int e_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = mark_traversal_0_0(t);
                              ;
                              LocalPopChoice(e_13);
                            }
                          else
                            {
                              t = c_13;
                              {
                                ATerm f_13 = t;
                                int g_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_sdef_0_0(t);
                                    ;
                                    LocalPopChoice(g_13);
                                  }
                                else
                                  {
                                    t = f_13;
                                    {
                                      ATerm k_13 = t;
                                      int m_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = mark_call_0_0(t);
                                          ;
                                          LocalPopChoice(m_13);
                                        }
                                      else
                                        {
                                          t = k_13;
                                          {
                                            ATerm n_13 = t;
                                            int p_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_prim_0_0(t);
                                                ;
                                                LocalPopChoice(p_13);
                                              }
                                            else
                                              {
                                                t = n_13;
                                                {
                                                  ATerm q_13 = t;
                                                  int r_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_rec_0_0(t);
                                                      ;
                                                      LocalPopChoice(r_13);
                                                    }
                                                  else
                                                    {
                                                      t = q_13;
                                                      {
                                                        ATerm s_13 = t;
                                                        int t_13 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = mark_choice_1_0(mark_buv_0_0, t);
                                                            ;
                                                            LocalPopChoice(t_13);
                                                          }
                                                        else
                                                          {
                                                            t = s_13;
                                                            {
                                                              ATerm u_13 = t;
                                                              int v_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(v_13);
                                                                }
                                                              else
                                                                {
                                                                  t = u_13;
                                                                  {
                                                                    ATerm x_13 = t;
                                                                    int y_13 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(y_13);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_13;
                                                                        t = SRTS_all(mark_buv_0_0, t);
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
ATerm Strategies_1_0 (ATerm l_69 (ATerm), ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  r_18 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      p_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_18);
  o_18 = t;
  t = p_18;
  t = l_69(t);
  q_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, q_18), o_18);
  return(t);
}
ATerm Specification_1_0 (ATerm q_69 (ATerm), ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
  x_18 = t;
  if(match_cons(t, sym_Specification_1))
    {
      v_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_18);
  u_18 = t;
  t = v_18;
  t = q_69(t);
  w_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, w_18), u_18);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm a_19 = NULL;
  a_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue))));
  t = a_19;
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = Cons_2_0(_id, r_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = Cons_2_0(u_2, w_2, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = Strategies_1_0(b_3, t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = map_1_0(mark_buv_0_0, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm b_19 = NULL;
  b_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue))));
  t = b_19;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  t = if_verbose4_1_0(p_2, t);
  t = Specification_1_0(q_2, t);
  t = if_verbose4_1_0(c_3, t);
  return(t);
}
ATerm _2_0 (ATerm s_64 (ATerm), ATerm t_64 (ATerm), ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
  h_19 = t;
  if(match_cons(t, sym__2))
    {
      d_19 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_19);
  c_19 = t;
  t = d_19;
  t = s_64(t);
  f_19 = t;
  t = e_19;
  t = t_64(t);
  g_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, f_19, g_19), c_19);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  if(match_cons(t, sym__2))
    {
      k_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_19, term_z_13);
  t = open_stream_0_0(t);
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_19, l_19);
  t = n_102(t);
  t = fclose_0_0(t);
  t = l_19;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = fetch_1_0(m_3, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = WriteToFile_1_0(o_3, t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_14 = ATgetArgument(t, 0);
      if(match_cons(a_14, sym_Stream_1))
        {
          p_19 = ATgetArgument(a_14, 0);
        }
      else
        _fail(t);
      q_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(p_19, q_19);
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_19);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = WriteToFile_1_0(r_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_14 = ATgetArgument(t, 0);
      if(match_cons(b_14, sym_Stream_1))
        {
          s_19 = ATgetArgument(b_14, 0);
        }
      else
        _fail(t);
      t_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(s_19, t_19);
  u_19 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), u_19);
  v_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_19);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL;
  n_19 = t;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm c_14 = t;
      int d_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((o_19 != NULL) && (o_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_3, t);
          ;
          LocalPopChoice(d_14);
        }
      else
        {
          t = c_14;
          t = term_g_14;
          if(((o_19 != NULL) && (o_19 != t)))
            _fail(t);
          else
            o_19 = t;
        }
      return(t);
    }
    t = _2_0(d_3, _id, t);
    t = n_19;
    {
      ATerm j_3 (ATerm t)
      {
        ATerm h_5 = NULL;
        h_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_19), h_5);
        return(t);
      }
      t = _2_0(_id, j_3, t);
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(k_3, l_3, t);
            ;
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
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
ATerm apply_strategy_1_0 (ATerm z_103 (ATerm), ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
  w_19 = t;
  t = dtime_0_0(t);
  t = w_19;
  t = z_103(t);
  x_19 = t;
  t = dtime_0_0(t);
  y_19 = t;
  t = x_19;
  if(match_cons(t, sym__2))
    {
      z_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_19), (ATerm) ATmakeAppl(sym_Runtime_1, y_19)), a_20);
  return(t);
}
ATerm o_20 (ATerm i_20, ATerm t)
{
  t = SSL_fclose(i_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL;
  m_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_20 = ATgetArgument(t, 0);
      {
        ATerm j_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_20);
            ;
            LocalPopChoice(k_14);
          }
        else
          {
            t = j_14;
            t = o_20(m_20, t);
          }
      }
    }
  else
    {
      t = o_20(m_20, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_20 = NULL;
  t = SSL_stdin_stream();
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_20);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_20 = NULL;
  t = SSL_stdout_stream();
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_20);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_20 = NULL;
  t = SSL_stderr_stream();
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_20);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm z_20 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      z_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_20;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm d_21 = NULL;
  d_21 = t;
  t = SSL_is_string(d_21);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_14 = ATgetArgument(t, 0);
      ATerm q_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_6 = NULL,k_6 = NULL;
        j_6 = t;
        t = SSL_explode_term(j_6);
        if(match_cons(t, sym__2))
          {
            ATerm w_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_14) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm x_14 = ATgetArgument(t, 1);
              if(((ATgetType(x_14) == AT_LIST) && !(ATisEmpty(x_14))))
                {
                  k_6 = ATgetFirst((ATermList) x_14);
                  {
                    ATerm y_14 = (ATerm) ATgetNext((ATermList) x_14);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = k_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = k_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = k_6;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        {
          ATerm z_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
              t = _2_0(s_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_20 = ATgetArgument(t, 0);
                  x_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(w_20, x_20);
              y_20 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, y_20);
              ;
              LocalPopChoice(a_15);
            }
          else
            {
              t = z_14;
              {
                ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
                t = _2_0(u_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    a_21 = ATgetArgument(t, 0);
                    b_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(a_21, b_21);
                c_21 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, c_21);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
  ATerm c_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21 = NULL;
      i_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_21, term_i_15);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(e_15);
    }
  else
    {
      t = c_15;
      {
        ATerm l_6 = NULL;
        l_6 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_6), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = l_6;
        _fail(t);
      }
    }
  e_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(g_21);
  f_21 = t;
  t = e_21;
  t = fclose_0_0(t);
  t = f_21;
  return(t);
}
ATerm fetch_1_0 (ATerm w_86 (ATerm), ATerm t)
{
  ATerm n_21 (ATerm t)
  {
    ATerm j_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(w_86, _id, t);
        ;
        LocalPopChoice(n_15);
      }
    else
      {
        t = j_15;
        t = Cons_2_0(_id, n_21, t);
      }
    return(t);
  }
  t = n_21(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      {
        ATerm q_21 = NULL,r_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_21 = ATgetFirst((ATermList) t);
            r_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_21;
        {
          ATerm x_3 (ATerm t)
          {
            t = r_21;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(x_3, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm x_21 (ATerm t)
  {
    ATerm q_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, x_21, t);
        ;
        LocalPopChoice(x_15);
      }
    else
      {
        t = q_15;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_87(t);
      }
    return(t);
  }
  t = x_21(t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm a_22 = NULL;
  a_22 = t;
  t = SSL_explode_string(a_22);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm b_22 = NULL;
  b_22 = t;
  t = SSL_explode_string(b_22);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm z_21 = NULL;
  t = _2_0(y_3, z_3, t);
  {
    ATerm y_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_22 = NULL,e_22 = NULL;
        if(match_cons(t, sym__2))
          {
            d_22 = ATgetArgument(t, 0);
            e_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_22;
        {
          ATerm a_4 (ATerm t)
          {
            t = e_22;
            return(t);
          }
          t = at_end_1_0(a_4, t);
        }
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = y_15;
        {
          ATerm r_6 = NULL,s_6 = NULL;
          r_6 = t;
          t = SSL_explode_term(r_6);
          if(match_cons(t, sym__2))
            {
              ATerm d_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_16) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              s_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_6;
          t = concat_0_0(t);
        }
      }
    z_21 = t;
    t = SSL_implode_string(z_21);
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(f_16);
    }
  else
    {
      t = e_16;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_22 = NULL;
      o_22 = t;
      t = SSL_is_string(o_22);
      ;
      LocalPopChoice(h_16);
    }
  else
    {
      t = g_16;
      {
        ATerm i_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_4, t);
            ;
            LocalPopChoice(j_16);
          }
        else
          {
            t = i_16;
            {
              ATerm s_22 = NULL,v_22 = NULL,x_22 = NULL;
              s_22 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_22 = ATgetArgument(t, 0);
                  t = v_22;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_22 = ATgetArgument(t, 0);
                      t = v_22;
                      {
                        ATerm k_16 = t;
                        int l_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_22);
                            {
                              ATerm m_16 = t;
                              int n_16 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm u_7 = NULL;
                                  t = eval_config_0_0(t);
                                  u_7 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_22, u_7);
                                  t = u_7;
                                  ;
                                  LocalPopChoice(n_16);
                                }
                              else
                                {
                                  t = m_16;
                                }
                            }
                            ;
                            LocalPopChoice(l_16);
                          }
                        else
                          {
                            t = k_16;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_22), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = v_22;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_23 = NULL,f_23 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_22 = ATgetArgument(t, 0);
                          x_22 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_22;
                      t = eval_config_0_0(t);
                      d_23 = t;
                      t = x_22;
                      t = eval_config_0_0(t);
                      f_23 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_23, f_23);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_111 (ATerm), ATerm t)
{
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_23 = NULL,n_23 = NULL;
      l_23 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_8 = NULL;
            t = eval_config_0_0(t);
            f_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), f_8);
            t = f_8;
            ;
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
          }
        n_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_23, term_s_16);
        t = geq_0_0(t);
        t = l_23;
        t = d_111(t);
      }
      ;
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm p_23 = NULL;
  p_23 = t;
  if(match_string(t, "-k"))
    {
      t = p_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_23;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL;
  q_23 = t;
  t = SSL_string_to_int(q_23);
  r_23 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), r_23);
  t = q_23;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_t_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_4, g_4, h_4, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm t_23 = NULL;
  t_23 = t;
  if(match_string(t, "-S"))
    {
      t = t_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_23;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_v_16;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_w_16;
  return(t);
}
ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL;
  u_23 = t;
  t = SSL_string_to_int(u_23);
  v_23 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_23);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_23);
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_x_16;
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
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_y_16;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_z_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, l_4, m_4, t);
      ;
      LocalPopChoice(b_17);
    }
  else
    {
      t = a_17;
      {
        ATerm c_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_4, z_4, a_5, t);
            ;
            LocalPopChoice(d_17);
          }
        else
          {
            t = c_17;
            t = Option_3_0(c_5, d_5, e_5, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_24 = NULL;
      t = term_t_7;
      t = d_0(t);
      a_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_17, term_f_17, a_24);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm d_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_23 = ATgetFirst((ATermList) t);
          z_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_23;
      t = a_0(t);
      t = term_t_7;
      t = c_0(t);
      d_24 = t;
      t = (ATerm) ATinsert(CheckATermList(z_23), d_24);
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm f_24 = NULL;
  f_24 = t;
  if(match_string(t, "-o"))
    {
      t = f_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_24;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm g_24 = NULL;
  g_24 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), g_24);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_24);
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_g_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_5, n_5, o_5, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
  if(match_cons(t, sym__3))
    {
      j_24 = ATgetArgument(t, 0);
      k_24 = ATgetArgument(t, 1);
      l_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_24, k_24);
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_17 = ATgetArgument(t, 0);
            ATerm m_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_24, k_24);
        ;
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        t = (ATerm) ATempty;
      }
    m_24 = t;
    t = SSL_table_put(j_24, k_24, (ATerm) ATinsert(CheckATermList(m_24), l_24));
    t = (ATerm) ATmakeAppl(sym__3, j_24, k_24, l_24);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_24 = NULL;
      t = term_t_7;
      t = l_0(t);
      y_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_17, term_f_17, y_24);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_24 = ATgetFirst((ATermList) t);
          v_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_24 = ATgetFirst((ATermList) t);
          x_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_24;
      t = i_0(t);
      t = w_24;
      t = k_0(t);
      c_25 = t;
      t = (ATerm) ATinsert(CheckATermList(x_24), c_25);
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  if(match_string(t, "-i"))
    {
      t = e_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_25;
    }
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm f_25 = NULL;
  f_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), f_25);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_25);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_n_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, s_5, t_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_7;
  t = whoami_0_0(t);
  g_25 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), g_25));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_8 = NULL;
        t = eval_config_0_0(t);
        l_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_8);
        t = l_8;
        ;
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm t)
{
  ATerm t_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_93(t);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = t_17;
      {
        ATerm j_25 = NULL,k_25 = NULL,n_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_25 = ATgetFirst((ATermList) t);
            k_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_25;
        t = foldr_2_0(c_93, d_93, t);
        n_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_25, n_25);
        t = d_93(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_u_16;
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL;
  if(match_cons(t, sym__2))
    {
      w_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(w_8, x_8);
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        t = SSL_addr(w_8, x_8);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_25 = NULL,m_8 = NULL,o_8 = NULL;
  t = times_0_0(t);
  m_8 = t;
  t = SSL_explode_term(m_8);
  if(match_cons(t, sym__2))
    {
      ATerm b_18 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8;
  t = foldr_2_0(v_5, y_5, t);
  q_25 = t;
  t = SSL_TicksToSeconds(q_25);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
  b_26 = t;
  if(match_cons(t, sym__2))
    {
      c_26 = ATgetArgument(t, 0);
      d_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_26;
        if((c_26 != t))
          {
            _fail(t);
          }
        t = b_26;
        ;
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
        t = b_26;
        {
          ATerm g_18 = t;
          int h_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_26, d_26);
              ;
              LocalPopChoice(h_18);
            }
          else
            {
              t = g_18;
              t = SSL_gtr(c_26, d_26);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_26, d_26);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_111 (ATerm), ATerm t)
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_26 = NULL,i_26 = NULL;
      g_26 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_9 = NULL;
            t = eval_config_0_0(t);
            v_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_9);
            t = v_9;
            ;
            LocalPopChoice(t_18);
          }
        else
          {
            t = s_18;
          }
        i_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_26, term_y_18);
        t = geq_0_0(t);
        t = g_26;
        t = c_111(t);
      }
      ;
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL;
  t = run_time_0_0(t);
  k_26 = t;
  t = term_t_7;
  t = whoami_0_0(t);
  l_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), k_26), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), l_26));
  t = (ATerm) ATmakeAppl(sym__2, term_z_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_19), k_26), term_i_19), l_26));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
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
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(e_20);
          }
        else
          {
            t = d_20;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_104 (ATerm), ATerm t)
{
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm h_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_10 = NULL;
            t = eval_config_0_0(t);
            d_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), d_10);
            t = d_10;
            ;
            LocalPopChoice(j_20);
          }
        else
          {
            t = h_20;
          }
      }
      ;
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
      t = fetch_1_0(c_6, t);
    }
  t = x_104(t);
  return(t);
}
ATerm map_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm m_26 (ATerm t)
  {
    ATerm k_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = k_20;
        t = Cons_2_0(l_86, m_26, t);
      }
    return(t);
  }
  t = m_26(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_26 = ATgetFirst((ATermList) t);
      q_26 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_26 = NULL,v_26 = NULL;
        t = q_26;
        t = g_0(t);
        u_26 = t;
        t = p_26;
        t = e_0(t);
        v_26 = t;
        t = q_26;
        {
          ATerm d_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(u_26), v_26);
            return(t);
          }
          t = reverse_acc_2_0(e_0, d_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_7;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL;
  z_26 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_26);
  w_26 = t;
  t = x_26;
  t = z_81(t);
  y_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, y_26), w_26);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm c_27 = NULL;
  c_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_27), term_s_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm v_20 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_10 = NULL;
            t = eval_config_0_0(t);
            o_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_10);
            t = o_10;
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = v_20;
          }
      }
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      t = fetch_1_0(e_6, t);
    }
  t = term_j_21;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, g_6, t);
  t = map_1_0(h_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm a_82 (ATerm), ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
  g_27 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      e_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_27);
  d_27 = t;
  t = e_27;
  t = a_82(t);
  f_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, f_27), d_27);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL;
  k_27 = t;
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_27;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_21 = ATgetFirst((ATermList) t);
                ATerm o_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_27;
          }
        ;
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        t = (ATerm) ATinsert(ATempty, k_27);
      }
    l_27 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), l_27);
    t = k_27;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm p_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_10 = NULL;
        t = eval_config_0_0(t);
        u_10 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_10);
        t = u_10;
        ;
        LocalPopChoice(s_21);
      }
    else
      {
        t = p_21;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm i_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_v_21;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_y_21;
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_6, m_6, n_6, t);
      ;
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      t = Option_3_0(o_6, q_6, t_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL;
  u_27 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_27 = ATgetFirst((ATermList) t);
      r_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_27);
  p_27 = t;
  t = q_27;
  t = h_69(t);
  s_27 = t;
  t = r_27;
  t = i_69(t);
  t_27 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(t_27), s_27), p_27);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm b_28 = NULL;
  b_28 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_28);
  t = (ATerm) ATmakeAppl(sym_Program_1, b_28);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_108 (ATerm), ATerm t)
{
  ATerm y_27 = NULL;
  y_27 = t;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_22;
        t = c_108(t);
        ;
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
      }
    t = y_27;
    {
      ATerm v_6 (ATerm t)
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_22 = t;
            int n_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(n_22);
              }
            else
              {
                t = m_22;
                t = c_108(t);
                t = Cons_2_0(_id, v_6, t);
              }
            ;
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            {
              ATerm d_28 = NULL,e_28 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_28 = ATgetFirst((ATermList) t);
                  e_28 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_28), (ATerm) ATmakeAppl(sym_Undefined_1, d_28));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_6, v_6, t);
    }
  }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  if(match_string(t, "--help"))
    {
      t = o_28;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_28;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_28;
        }
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_p_22;
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm b_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_108 (ATerm), ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
  l_28 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = l_28;
  {
    ATerm w_6 (ATerm t)
    {
      ATerm r_22 = t;
      int t_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_108(t);
          ;
          LocalPopChoice(t_22);
        }
      else
        {
          t = r_22;
          {
            ATerm u_22 = t;
            int w_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_6, y_6, z_6, t);
                ;
                LocalPopChoice(w_22);
              }
            else
              {
                t = u_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_6, t);
    {
      ATerm y_22 = t;
      int z_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_28 = NULL;
          t_28 = t;
          {
            ATerm a_23 = t;
            int b_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = t_28;
                {
                  ATerm c_23 = t;
                  int e_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm g_23 = t;
                        int h_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm m_11 = NULL;
                            t = eval_config_0_0(t);
                            m_11 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), m_11);
                            t = m_11;
                            ;
                            LocalPopChoice(h_23);
                          }
                        else
                          {
                            t = g_23;
                          }
                      }
                      ;
                      LocalPopChoice(e_23);
                    }
                  else
                    {
                      t = c_23;
                      t = fetch_1_0(b_7, t);
                    }
                  t = t_28;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(b_23);
              }
            else
              {
                t = a_23;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm i_23 = t;
                  int j_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_11 = NULL;
                      t = eval_config_0_0(t);
                      x_11 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), x_11);
                      t = x_11;
                      ;
                      LocalPopChoice(j_23);
                    }
                  else
                    {
                      t = i_23;
                    }
                  t = t_28;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(z_22);
        }
      else
        {
          t = y_22;
          {
            ATerm k_23 = t;
            int m_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_7 (ATerm t)
                {
                  ATerm d_7 (ATerm t)
                  {
                    if(((m_28 != NULL) && (m_28 != t)))
                      _fail(t);
                    else
                      m_28 = t;
                    return(t);
                  }
                  t = Undefined_1_0(d_7, t);
                  return(t);
                }
                t = fetch_1_0(c_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(m_28)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_z_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_28)), term_o_23));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(m_23);
              }
            else
              {
                t = k_23;
              }
          }
        }
      n_28 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = n_28;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm t)
{
  ATerm y_28 = NULL;
  t = parse_options_1_0(z_104, t);
  y_28 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), y_28);
  t = y_28;
  t = b_105(t);
  {
    ATerm s_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_105, t);
        ;
        LocalPopChoice(w_23);
      }
    else
      {
        t = s_23;
        {
          ATerm x_23 = t;
          int b_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_105(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_24);
            }
          else
            {
              t = x_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = if_verbose2_1_0(n_7, t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_c_24;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL;
  z_28 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_12 = NULL;
        t = eval_config_0_0(t);
        d_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_12);
        t = d_12;
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
      }
    a_29 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, a_29));
    t = z_28;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm t)
{
  ATerm e_7 (ATerm t)
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_104(t);
        ;
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        {
          ATerm p_24 = t;
          int q_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(q_24);
            }
          else
            {
              t = p_24;
              {
                ATerm r_24 = t;
                int s_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(s_24);
                  }
                else
                  {
                    t = r_24;
                    {
                      ATerm t_24 = t;
                      int z_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(h_7, j_7, l_7, t);
                          ;
                          LocalPopChoice(z_24);
                        }
                      else
                        {
                          t = t_24;
                          {
                            ATerm a_25 = t;
                            int b_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(b_25);
                              }
                            else
                              {
                                t = a_25;
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
  ATerm g_7 (ATerm t)
  {
    ATerm b_29 = NULL,c_29 = NULL,g_12 = NULL;
    b_29 = t;
    {
      ATerm d_25 = t;
      int h_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((c_29 != NULL) && (c_29 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_7, t);
          ;
          LocalPopChoice(h_25);
        }
      else
        {
          t = d_25;
          t = term_i_25;
          c_29 = t;
        }
      t = not_null(c_29);
      t = ReadFromFile_0_0(t);
      g_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_29, g_12);
      t = apply_strategy_1_0(i_104, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(e_7, k_104, f_7, g_7, t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = _2_0(_id, mark_bound_unbound_vars_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(r_7, _fail, default_usage_0_0, t);
  return(t);
}
