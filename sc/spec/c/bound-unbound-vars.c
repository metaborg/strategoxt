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
ATerm term_m_24;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_v_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_j_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_p_16;
ATerm term_u_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_z_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_j_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_o_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_y_8;
ATerm term_u_7;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_s_6;
ATerm term_h_6;
ATerm term_g_6;
void init_constant_terms (void)
{
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_6);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_9);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_g_6, term_p_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym__2, term_h_14, term_o_9);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_o_9);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym__2, term_s_19, term_o_9);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym__2, term_a_20, term_o_9);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_o_9);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm z_94 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm p_96 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm q_67 (ATerm), ATerm);
ATerm mark_guardedlchoice_1_0 (ATerm i_75 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm k_67 (ATerm), ATerm l_67 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm h_75 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm i_66 (ATerm), ATerm j_66 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm g_75 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm);
ATerm mark_rec_0_0 (ATerm);
ATerm PrimT_3_0 (ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm Call_2_0 (ATerm w_66 (ATerm), ATerm x_66 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm y_66 (ATerm), ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm m_69 (ATerm), ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm);
ATerm mark_sdef_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm restore_MarkVar_0_0 (ATerm);
ATerm Let_2_0 (ATerm u_66 (ATerm), ATerm v_66 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm o_75 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm n_75 (ATerm), ATerm);
ATerm scope_2_0 (ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm e_67 (ATerm), ATerm f_67 (ATerm), ATerm);
ATerm mark_scope_0_0 (ATerm);
ATerm Build_1_0 (ATerm c_67 (ATerm), ATerm);
ATerm mark_build_0_0 (ATerm);
ATerm assert_1_0 (ATerm r_75 (ATerm), ATerm);
ATerm table_lookup_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm t_75 (ATerm), ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm alltd_1_0 (ATerm n_77 (ATerm), ATerm);
ATerm mark_match_0_0 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm m_62 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm r_62 (ATerm), ATerm);
ATerm mark_bound_unbound_vars_0_0 (ATerm);
ATerm _2_0 (ATerm z_60 (ATerm), ATerm a_61 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm b_80 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_96 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm j_95 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_98 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm v_94 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm);
ATerm crush_2_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_96 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm j_99 (ATerm), ATerm);
ATerm store_options_0_0 (ATerm);
ATerm map_1_0 (ATerm l_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm a_75 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm b_75 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm v_79 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm j_100 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm s_87 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm o_101 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm m_101 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm l_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm p_98 (ATerm), ATerm);
ATerm bound_unbound_vars_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm o_3 = NULL;
  o_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, o_3));
  t = o_3;
  return(t);
}
ATerm say_1_0 (ATerm z_94 (ATerm), ATerm t)
{
  ATerm r_3 = NULL;
  r_3 = t;
  t = z_94(t);
  t = debug_0_0(t);
  t = r_3;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm p_96 (ATerm), ATerm t)
{
  ATerm j_0 (ATerm t)
  {
    ATerm s_3 = NULL,u_3 = NULL;
    s_3 = t;
    t = term_g_6;
    t = get_config_0_0(t);
    u_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_3, term_h_6);
    t = geq_0_0(t);
    t = s_3;
    t = p_96(t);
    return(t);
  }
  t = try_1_0(j_0, t);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm q_67 (ATerm), ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,e_4 = NULL;
  e_4 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      w_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
      z_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_4);
  v_3 = t;
  t = w_3;
  t = o_67(t);
  a_4 = t;
  t = y_3;
  t = p_67(t);
  b_4 = t;
  t = z_3;
  t = q_67(t);
  c_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, a_4, b_4, c_4), v_3);
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm i_75 (ATerm), ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, _id, t);
  {
    ATerm m_0 (ATerm t)
    {
      t = GuardedLChoice_3_0(i_75, _id, _id, t);
      t = GuardedLChoice_3_0(_id, i_75, _id, t);
      return(t);
    }
    ATerm n_0 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, _id, i_75, t);
      return(t);
    }
    t = abstract_choice_2_0(m_0, n_0, t);
  }
  return(t);
}
ATerm LChoice_2_0 (ATerm k_67 (ATerm), ATerm l_67 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,l_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
  q_4 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      l_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_4);
  i_4 = t;
  t = l_4;
  t = k_67(t);
  o_4 = t;
  t = n_4;
  t = l_67(t);
  p_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, o_4, p_4), i_4);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm h_75 (ATerm), ATerm t)
{
  t = LChoice_2_0(_id, _id, t);
  {
    ATerm o_0 (ATerm t)
    {
      t = LChoice_2_0(h_75, _id, t);
      return(t);
    }
    ATerm p_0 (ATerm t)
    {
      t = LChoice_2_0(_id, h_75, t);
      return(t);
    }
    t = abstract_choice_2_0(o_0, p_0, t);
  }
  return(t);
}
ATerm Choice_2_0 (ATerm i_66 (ATerm), ATerm j_66 (ATerm), ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
  b_5 = t;
  if(match_cons(t, sym_Choice_2))
    {
      x_4 = ATgetArgument(t, 0);
      y_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_5);
  w_4 = t;
  t = x_4;
  t = i_66(t);
  z_4 = t;
  t = y_4;
  t = j_66(t);
  a_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, z_4, a_5), w_4);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm t)
{
  ATerm n_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,y_5 = NULL;
  n_5 = t;
  t = save_MarkVar_0_0(t);
  r_5 = t;
  t = n_5;
  t = j_75(t);
  s_5 = t;
  t = save_MarkVar_0_0(t);
  t_5 = t;
  t = r_5;
  t = restore_MarkVar_0_0(t);
  t = s_5;
  t = k_75(t);
  y_5 = t;
  t = t_5;
  t = isect_MarkVar_0_0(t);
  t = y_5;
  return(t);
}
ATerm mark_choice_1_0 (ATerm g_75 (ATerm), ATerm t)
{
  t = Choice_2_0(_id, _id, t);
  {
    ATerm q_0 (ATerm t)
    {
      t = Choice_2_0(g_75, _id, t);
      return(t);
    }
    ATerm r_0 (ATerm t)
    {
      t = Choice_2_0(_id, g_75, t);
      return(t);
    }
    t = abstract_choice_2_0(q_0, r_0, t);
  }
  return(t);
}
ATerm Rec_2_0 (ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL,d_6 = NULL,f_6 = NULL,i_6 = NULL;
  i_6 = t;
  if(match_cons(t, sym_Rec_2))
    {
      a_6 = ATgetArgument(t, 0);
      b_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_6);
  z_5 = t;
  t = a_6;
  t = r_67(t);
  d_6 = t;
  t = b_6;
  t = s_67(t);
  f_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, d_6, f_6), z_5);
  return(t);
}
ATerm mark_rec_0_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  if(match_cons(t, sym_Rec_2))
    {
      ATerm j_6 = ATgetArgument(t, 0);
      ATerm k_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  q_6 = t;
  t = save_MarkVar_0_0(t);
  r_6 = t;
  t = q_6;
  t = Rec_2_0(_id, mark_buv_0_0, t);
  t = r_6;
  t = isect_MarkVar_0_0(t);
  t = q_6;
  t = Rec_2_0(_id, mark_buv_0_0, t);
  return(t);
}
ATerm PrimT_3_0 (ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,e_7 = NULL,f_7 = NULL,k_7 = NULL,l_7 = NULL;
  l_7 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      z_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
      b_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_7);
  y_6 = t;
  t = z_6;
  t = a_68(t);
  e_7 = t;
  t = a_7;
  t = b_68(t);
  f_7 = t;
  t = b_7;
  t = c_68(t);
  k_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, e_7, f_7, k_7), y_6);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm r_7 = NULL,w_7 = NULL,x_7 = NULL;
  t = PrimT_3_0(_id, _id, _id, t);
  r_7 = t;
  t = save_MarkVar_0_0(t);
  w_7 = t;
  t = r_7;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm t_0 (ATerm t)
      {
        t = alltd_1_0(MarkVar_0_0, t);
        return(t);
      }
      t = map_1_0(t_0, t);
      return(t);
    }
    t = PrimT_3_0(_id, _id, s_0, t);
    t = PrimT_3_0(_id, mark_buv_0_0, _id, t);
    x_7 = t;
    t = w_7;
    t = isect_MarkVar_0_0(t);
    t = x_7;
  }
  return(t);
}
ATerm Call_2_0 (ATerm w_66 (ATerm), ATerm x_66 (ATerm), ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,c_8 = NULL,d_8 = NULL,i_8 = NULL,j_8 = NULL;
  j_8 = t;
  if(match_cons(t, sym_Call_2))
    {
      z_7 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_8);
  y_7 = t;
  t = z_7;
  t = w_66(t);
  d_8 = t;
  t = c_8;
  t = x_66(t);
  i_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, d_8, i_8), y_7);
  return(t);
}
ATerm CallT_3_0 (ATerm y_66 (ATerm), ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm t)
{
  ATerm p_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,z_8 = NULL,k_9 = NULL,l_9 = NULL,q_9 = NULL;
  q_9 = t;
  if(match_cons(t, sym_CallT_3))
    {
      v_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
      x_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_9);
  p_8 = t;
  t = v_8;
  t = y_66(t);
  z_8 = t;
  t = w_8;
  t = z_66(t);
  k_9 = t;
  t = x_8;
  t = a_67(t);
  l_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, z_8, k_9, l_9), p_8);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_10 = NULL,g_10 = NULL,h_10 = NULL;
      t = CallT_3_0(_id, _id, _id, t);
      b_10 = t;
      t = save_MarkVar_0_0(t);
      g_10 = t;
      t = b_10;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = alltd_1_0(MarkVar_0_0, t);
            return(t);
          }
          t = map_1_0(v_0, t);
          return(t);
        }
        t = CallT_3_0(_id, _id, u_0, t);
        t = CallT_3_0(_id, mark_buv_0_0, _id, t);
        h_10 = t;
        t = g_10;
        t = isect_MarkVar_0_0(t);
        t = h_10;
      }
      ;
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      {
        ATerm j_10 = NULL,r_10 = NULL,v_10 = NULL;
        t = Call_2_0(_id, _id, t);
        j_10 = t;
        t = save_MarkVar_0_0(t);
        r_10 = t;
        t = j_10;
        t = Call_2_0(_id, mark_buv_0_0, t);
        v_10 = t;
        t = r_10;
        t = isect_MarkVar_0_0(t);
        t = v_10;
      }
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm m_69 (ATerm), ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,f_11 = NULL,p_11 = NULL,t_11 = NULL,v_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,d_12 = NULL;
  d_12 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      x_10 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
      p_11 = ATgetArgument(t, 2);
      t_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_12);
  w_10 = t;
  t = x_10;
  t = m_69(t);
  v_11 = t;
  t = f_11;
  t = n_69(t);
  z_11 = t;
  t = p_11;
  t = o_69(t);
  a_12 = t;
  t = t_11;
  t = p_69(t);
  b_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, v_11, z_11, a_12, b_12), w_10);
  return(t);
}
ATerm mark_sdef_0_0 (ATerm t)
{
  ATerm v_12 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm n_6 = ATgetArgument(t, 0);
      ATerm o_6 = ATgetArgument(t, 1);
      v_12 = ATgetArgument(t, 2);
      {
        ATerm p_6 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm w_0 (ATerm t)
    {
      ATerm x_0 (ATerm t)
      {
        t = term_s_6;
        return(t);
      }
      ATerm y_0 (ATerm t)
      {
        ATerm x_12 = NULL;
        x_12 = t;
        t = v_12;
        {
          ATerm z_0 (ATerm t)
          {
            ATerm z_12 = NULL,e_13 = NULL;
            if(match_cons(t, sym_VarDec_2))
              {
                z_12 = ATgetArgument(t, 0);
                {
                  ATerm t_6 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            e_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_12), term_v_6);
            {
              ATerm a_1 (ATerm t)
              {
                t = term_s_6;
                return(t);
              }
              t = assert_1_0(a_1, t);
              t = e_13;
            }
            return(t);
          }
          t = map_1_0(z_0, t);
          t = x_12;
          t = mark_buv_0_0(t);
        }
        return(t);
      }
      t = scope_2_0(x_0, y_0, t);
      return(t);
    }
    t = SDefT_4_0(_id, _id, _id, w_0, t);
  }
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm h_13 = NULL,l_13 = NULL,m_13 = NULL;
  m_13 = t;
  {
    ATerm w_6 = t;
    int x_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm c_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_6);
        t = m_13;
      }
    else
      {
        t = w_6;
        {
          ATerm d_7 = t;
          int g_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm h_7 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(g_7);
              t = m_13;
            }
          else
            {
              t = d_7;
              {
                ATerm i_7 = t;
                int j_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm m_7 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(j_7);
                    t = m_13;
                  }
                else
                  {
                    t = i_7;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm n_7 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = m_13;
                  }
              }
            }
        }
      }
    t = save_MarkVar_0_0(t);
    h_13 = t;
    t = m_13;
    t = SRTS_one(mark_buv_0_0, t);
    l_13 = t;
    t = h_13;
    t = isect_MarkVar_0_0(t);
    t = l_13;
  }
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL;
  if(match_cons(t, sym__2))
    {
      t_13 = ATgetArgument(t, 0);
      s_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_13;
  {
    ATerm b_1 (ATerm t)
    {
      ATerm w_13 = NULL,x_13 = NULL;
      if(match_cons(t, sym__2))
        {
          w_13 = ATgetArgument(t, 0);
          x_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(t_13, w_13, x_13);
      t = (ATerm) ATmakeAppl(sym__3, t_13, w_13, x_13);
      return(t);
    }
    t = map_1_0(b_1, t);
  }
  return(t);
}
ATerm restore_MarkVar_0_0 (ATerm t)
{
  ATerm a_14 = NULL;
  a_14 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_s_6, a_14);
  t = table_putlist_0_0(t);
  t = a_14;
  return(t);
}
ATerm Let_2_0 (ATerm u_66 (ATerm), ATerm v_66 (ATerm), ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  g_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_14 = ATgetArgument(t, 0);
      d_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_14);
  b_14 = t;
  t = c_14;
  t = u_66(t);
  e_14 = t;
  t = d_14;
  t = v_66(t);
  f_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, e_14, f_14), b_14);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm k_14 = NULL;
  k_14 = t;
  t = SSL_table_keys(k_14);
  {
    ATerm c_1 (ATerm t)
    {
      ATerm l_14 = NULL,m_14 = NULL;
      l_14 = t;
      t = SSL_table_get(k_14, l_14);
      m_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_14, m_14);
      return(t);
    }
    t = map_1_0(c_1, t);
  }
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_s_6;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm e_1 (ATerm t)
    {
      ATerm m_15 (ATerm x_14, ATerm y_14, ATerm z_14, ATerm t)
      {
        t = z_14;
        {
          ATerm o_7 = t;
          int p_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_15 (ATerm c_15, ATerm t)
              {
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue)), x_14);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm q_7 = ATgetFirst((ATermList) t);
                    if(match_cons(q_7, sym_Defined_2))
                      {
                        ATerm t_7 = ATgetArgument(q_7, 0);
                        if((y_14 != ATgetArgument(q_7, 1)))
                          {
                            _fail(ATgetArgument(q_7, 1));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm s_7 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = c_15;
                return(t);
              }
              t = n_15(z_14, t);
              ;
              LocalPopChoice(p_7);
            }
          else
            {
              t = o_7;
              t = (ATerm) ATmakeAppl(sym__2, x_14, (ATerm) ATinsert(ATempty, term_u_7));
            }
        }
        return(t);
      }
      ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,k_15 = NULL;
      f_15 = t;
      if(match_cons(t, sym__2))
        {
          g_15 = ATgetArgument(t, 0);
          h_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_15;
      {
        ATerm v_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_15 = ATgetFirst((ATermList) t);
                {
                  ATerm b_8 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(a_8);
            t = i_15;
            {
              ATerm e_8 = t;
              int f_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm g_8 = ATgetArgument(t, 0);
                      k_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(f_8);
                  t = g_15;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm h_8 = t;
                      int k_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = f_15;
                          ;
                          LocalPopChoice(k_8);
                        }
                      else
                        {
                          t = h_8;
                          t = m_15(g_15, k_15, f_15, t);
                        }
                    }
                  else
                    {
                      t = m_15(g_15, k_15, f_15, t);
                    }
                }
              else
                {
                  t = e_8;
                  t = g_15;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = f_15;
                }
            }
          }
        else
          {
            t = v_7;
            t = g_15;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = f_15;
          }
      }
      return(t);
    }
    t = try_1_0(e_1, t);
    return(t);
  }
  t = map_1_0(d_1, t);
  t = restore_MarkVar_0_0(t);
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
  t = Let_2_0(_id, _id, t);
  o_15 = t;
  t = save_MarkVar_0_0(t);
  p_15 = t;
  t = o_15;
  t = Let_2_0(_id, mark_buv_0_0, t);
  q_15 = t;
  t = p_15;
  t = isect_MarkVar_0_0(t);
  t = save_MarkVar_0_0(t);
  r_15 = t;
  t = q_15;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        ATerm s_15 = NULL;
        t = mark_buv_0_0(t);
        s_15 = t;
        t = r_15;
        t = restore_MarkVar_0_0(t);
        t = s_15;
        return(t);
      }
      t = map_1_0(g_1, t);
      return(t);
    }
    t = Let_2_0(f_1, _id, t);
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym__2))
    {
      v_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_16 (ATerm t)
        {
          ATerm y_15 = NULL;
          t = SSL_table_get(v_15, w_15);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm n_8 = ATgetFirst((ATermList) t);
              y_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = y_15;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm o_8 = ATgetArgument(t, 0);
            ATerm q_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_16(t);
        ;
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        t = (ATerm) ATempty;
      }
    x_15 = t;
    t = SSL_table_put(v_15, w_15, x_15);
    t = (ATerm) ATmakeAppl(sym__2, v_15, w_15);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm o_75 (ATerm), ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
  d_16 = t;
  t = o_75(t);
  e_16 = t;
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(e_16, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(s_8);
      }
    else
      {
        t = r_8;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_16 = ATgetFirst((ATermList) t);
        f_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(e_16, (ATerm)ATmakeAppl(sym_Scopes_0), f_16);
    t = g_16;
    {
      ATerm h_1 (ATerm t)
      {
        ATerm h_16 = NULL;
        h_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_16, h_16);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(h_1, t);
      t = d_16;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm t)
{
  ATerm t_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_88(t);
      t = i_88(t);
      ;
      LocalPopChoice(u_8);
    }
  else
    {
      t = t_8;
      t = i_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_75 (ATerm), ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  k_16 = t;
  t = n_75(t);
  l_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_16, term_y_8);
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_16 (ATerm t)
        {
          t = SSL_table_get(l_16, (ATerm) ATmakeAppl(sym_Scopes_0));
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm c_9 = ATgetArgument(t, 0);
            ATerm d_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_16(t);
        ;
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        t = (ATerm) ATempty;
      }
    m_16 = t;
    t = SSL_table_put(l_16, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(m_16), (ATerm) ATempty));
    t = k_16;
  }
  return(t);
}
ATerm scope_2_0 (ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm t)
{
  t = begin_scope_1_0(p_75, t);
  {
    ATerm i_1 (ATerm t)
    {
      t = end_scope_1_0(p_75, t);
      return(t);
    }
    t = restore_always_2_0(q_75, i_1, t);
  }
  return(t);
}
ATerm Scope_2_0 (ATerm e_67 (ATerm), ATerm f_67 (ATerm), ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL;
  w_16 = t;
  if(match_cons(t, sym_Scope_2))
    {
      s_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_16);
  r_16 = t;
  t = s_16;
  t = e_67(t);
  u_16 = t;
  t = t_16;
  t = f_67(t);
  v_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, u_16, v_16), r_16);
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm a_17 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      a_17 = ATgetArgument(t, 0);
      {
        ATerm e_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm j_1 (ATerm t)
    {
      ATerm k_1 (ATerm t)
      {
        t = term_s_6;
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        ATerm b_17 = NULL;
        b_17 = t;
        t = a_17;
        {
          ATerm m_1 (ATerm t)
          {
            ATerm c_17 = NULL;
            c_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_17), term_g_9);
            {
              ATerm n_1 (ATerm t)
              {
                t = term_s_6;
                return(t);
              }
              t = assert_1_0(n_1, t);
              t = c_17;
            }
            return(t);
          }
          t = map_1_0(m_1, t);
          t = b_17;
          t = mark_buv_0_0(t);
        }
        return(t);
      }
      t = scope_2_0(k_1, l_1, t);
      return(t);
    }
    t = Scope_2_0(_id, j_1, t);
  }
  return(t);
}
ATerm Build_1_0 (ATerm c_67 (ATerm), ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  g_17 = t;
  if(match_cons(t, sym_Build_1))
    {
      e_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_17);
  d_17 = t;
  t = e_17;
  t = c_67(t);
  f_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, f_17), d_17);
  return(t);
}
ATerm mark_build_0_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    t = alltd_1_0(MarkVar_0_0, t);
    return(t);
  }
  t = Build_1_0(o_1, t);
  return(t);
}
ATerm assert_1_0 (ATerm r_75 (ATerm), ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  if(match_cons(t, sym__2))
    {
      k_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_75(t);
  m_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_17, k_17, l_17);
  t = table_push_0_0(t);
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(m_17, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_17 = ATgetFirst((ATermList) t);
        o_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(m_17, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(o_17), (ATerm) ATinsert(CheckATermList(n_17), k_17)));
    t = (ATerm) ATmakeAppl(sym__2, k_17, l_17);
  }
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
  if(match_cons(t, sym__2))
    {
      p_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(match_cons(t, sym__2))
    {
      ATerm j_9 = ATgetArgument(t, 0);
      ATerm m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(p_17, q_17);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_17 = ATgetFirst((ATermList) t);
      {
        ATerm n_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_17;
  return(t);
}
ATerm rewrite_1_0 (ATerm t_75 (ATerm), ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL;
  s_17 = t;
  t = term_o_9;
  t = t_75(t);
  t_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_17, s_17);
  t = table_lookup_0_0(t);
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm p_18 (ATerm y_17, ATerm z_17, ATerm t)
  {
    t = z_17;
    {
      ATerm p_1 (ATerm t)
      {
        t = term_s_6;
        return(t);
      }
      t = rewrite_1_0(p_1, t);
      if(match_cons(t, sym_Defined_1))
        {
          ATerm p_9 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) p_9) != ATmakeSymbol("h_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, y_17), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue))));
    }
    return(t);
  }
  ATerm q_18 (ATerm d_18, ATerm e_18, ATerm t)
  {
    t = e_18;
    {
      ATerm q_1 (ATerm t)
      {
        t = term_s_6;
        return(t);
      }
      t = rewrite_1_0(q_1, t);
      if(match_cons(t, sym_Defined_1))
        {
          ATerm r_9 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) r_9) != ATmakeSymbol("f_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, d_18), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue))));
    }
    return(t);
  }
  ATerm r_18 (ATerm i_18, ATerm j_18, ATerm t)
  {
    t = j_18;
    {
      ATerm r_1 (ATerm t)
      {
        t = term_s_6;
        return(t);
      }
      t = rewrite_1_0(r_1, t);
      if(match_cons(t, sym_Defined_1))
        {
          ATerm s_9 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) s_9) != ATmakeSymbol("b_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, i_18), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue))));
    }
    return(t);
  }
  ATerm n_18 = NULL,o_18 = NULL;
  n_18 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_18(o_18, n_18, t);
        ;
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
        {
          ATerm v_9 = t;
          int w_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_18(o_18, n_18, t);
              ;
              LocalPopChoice(w_9);
            }
          else
            {
              t = v_9;
              t = r_18(o_18, n_18, t);
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm n_77 (ATerm), ATerm t)
{
  ATerm s_18 (ATerm t)
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_77(t);
        ;
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        t = SRTS_all(s_18, t);
      }
    return(t);
  }
  t = s_18(t);
  return(t);
}
ATerm mark_match_0_0 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      t_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_18;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm v_18 = NULL,w_18 = NULL;
      t = MarkVar_0_0(t);
      v_18 = t;
      if(match_cons(t, sym_Var_1))
        {
          w_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_18), term_a_10);
      {
        ATerm t_1 (ATerm t)
        {
          t = term_s_6;
          return(t);
        }
        t = assert_1_0(t_1, t);
        t = v_18;
      }
      return(t);
    }
    t = alltd_1_0(s_1, t);
    u_18 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, u_18);
  }
  return(t);
}
ATerm mark_buv_0_0 (ATerm t)
{
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = mark_match_0_0(t);
      ;
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_build_0_0(t);
            ;
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            {
              ATerm i_10 = t;
              int k_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_scope_0_0(t);
                  ;
                  LocalPopChoice(k_10);
                }
              else
                {
                  t = i_10;
                  {
                    ATerm l_10 = t;
                    int m_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_let_0_0(t);
                        ;
                        LocalPopChoice(m_10);
                      }
                    else
                      {
                        t = l_10;
                        {
                          ATerm n_10 = t;
                          int o_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = mark_traversal_0_0(t);
                              ;
                              LocalPopChoice(o_10);
                            }
                          else
                            {
                              t = n_10;
                              {
                                ATerm p_10 = t;
                                int q_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_sdef_0_0(t);
                                    ;
                                    LocalPopChoice(q_10);
                                  }
                                else
                                  {
                                    t = p_10;
                                    {
                                      ATerm s_10 = t;
                                      int t_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = mark_call_0_0(t);
                                          ;
                                          LocalPopChoice(t_10);
                                        }
                                      else
                                        {
                                          t = s_10;
                                          {
                                            ATerm u_10 = t;
                                            int y_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_prim_0_0(t);
                                                ;
                                                LocalPopChoice(y_10);
                                              }
                                            else
                                              {
                                                t = u_10;
                                                {
                                                  ATerm z_10 = t;
                                                  int a_11 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_rec_0_0(t);
                                                      ;
                                                      LocalPopChoice(a_11);
                                                    }
                                                  else
                                                    {
                                                      t = z_10;
                                                      {
                                                        ATerm b_11 = t;
                                                        int c_11 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = mark_choice_1_0(mark_buv_0_0, t);
                                                            ;
                                                            LocalPopChoice(c_11);
                                                          }
                                                        else
                                                          {
                                                            t = b_11;
                                                            {
                                                              ATerm d_11 = t;
                                                              int e_11 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(e_11);
                                                                }
                                                              else
                                                                {
                                                                  t = d_11;
                                                                  {
                                                                    ATerm g_11 = t;
                                                                    int h_11 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(h_11);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = g_11;
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
ATerm Strategies_1_0 (ATerm m_62 (ATerm), ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  a_19 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      y_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_19);
  x_18 = t;
  t = y_18;
  t = m_62(t);
  z_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, z_18), x_18);
  return(t);
}
ATerm Specification_1_0 (ATerm r_62 (ATerm), ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
  h_19 = t;
  if(match_cons(t, sym_Specification_1))
    {
      f_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_19);
  e_19 = t;
  t = f_19;
  t = r_62(t);
  g_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, g_19), e_19);
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm v_1 (ATerm t)
    {
      t = term_i_11;
      return(t);
    }
    t = say_1_0(v_1, t);
    return(t);
  }
  t = if_verbose4_1_0(u_1, t);
  {
    ATerm w_1 (ATerm t)
    {
      ATerm x_1 (ATerm t)
      {
        ATerm y_1 (ATerm t)
        {
          ATerm a_2 (ATerm t)
          {
            t = map_1_0(mark_buv_0_0, t);
            return(t);
          }
          t = Strategies_1_0(a_2, t);
          return(t);
        }
        ATerm z_1 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(y_1, z_1, t);
        return(t);
      }
      t = Cons_2_0(_id, x_1, t);
      return(t);
    }
    t = Specification_1_0(w_1, t);
    {
      ATerm b_2 (ATerm t)
      {
        ATerm c_2 (ATerm t)
        {
          t = term_j_11;
          return(t);
        }
        t = say_1_0(c_2, t);
        return(t);
      }
      t = if_verbose4_1_0(b_2, t);
    }
  }
  return(t);
}
ATerm _2_0 (ATerm z_60 (ATerm), ATerm a_61 (ATerm), ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
  q_19 = t;
  if(match_cons(t, sym__2))
    {
      m_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_19);
  l_19 = t;
  t = m_19;
  t = z_60(t);
  o_19 = t;
  t = n_19;
  t = a_61(t);
  p_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, o_19, p_19), l_19);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL;
  u_19 = t;
  t = term_o_9;
  t = whoami_0_0(t);
  v_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), v_19), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = u_19;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  x_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_19 = ATgetFirst((ATermList) t);
          z_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_19;
      {
        ATerm d_2 (ATerm t)
        {
          t = z_19;
          t = concat_0_0(t);
          return(t);
        }
        t = at_end_1_0(d_2, t);
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL;
  d_20 = t;
  t = SSL_explode_term(d_20);
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_20;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  ATerm h_20 (ATerm t)
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, h_20, t);
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        {
          ATerm g_20 = NULL;
          g_20 = t;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = g_20;
          t = b_80(t);
        }
      }
    return(t);
  }
  t = h_20(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      j_20 = ATgetArgument(t, 0);
      i_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_20;
  {
    ATerm e_2 (ATerm t)
    {
      t = i_20;
      return(t);
    }
    t = at_end_1_0(e_2, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm k_20 = NULL;
  ATerm f_2 (ATerm t)
  {
    ATerm l_20 = NULL;
    l_20 = t;
    t = SSL_explode_string(l_20);
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm m_20 = NULL;
    m_20 = t;
    t = SSL_explode_string(m_20);
    return(t);
  }
  t = _2_0(f_2, g_2, t);
  t = conc_0_0(t);
  k_20 = t;
  t = SSL_implode_string(k_20);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_21 (ATerm q_20, ATerm t)
      {
        t = SSL_is_string(q_20);
        return(t);
      }
      ATerm s_20 = NULL;
      s_20 = t;
      t = e_21(s_20, t);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      {
        ATerm s_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_2 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(h_2, t);
            ;
            LocalPopChoice(u_11);
          }
        else
          {
            t = s_11;
            {
              ATerm f_21 (ATerm t_20, ATerm u_20, ATerm t)
              {
                t = t_20;
                {
                  ATerm w_11 = t;
                  int x_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(x_11);
                    }
                  else
                    {
                      t = w_11;
                      {
                        ATerm i_2 (ATerm t)
                        {
                          t = term_y_11;
                          return(t);
                        }
                        t = debug_1_0(i_2, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
              w_20 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_20 = ATgetArgument(t, 0);
                  t = x_20;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_20 = ATgetArgument(t, 0);
                      t = f_21(x_20, w_20, t);
                    }
                  else
                    {
                      ATerm c_21 = NULL,d_21 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_20 = ATgetArgument(t, 0);
                          y_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_20;
                      t = eval_config_0_0(t);
                      c_21 = t;
                      t = y_20;
                      t = eval_config_0_0(t);
                      d_21 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_21, d_21);
                      t = conc_strings_0_0(t);
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
  ATerm g_21 = NULL;
  g_21 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), g_21);
  {
    ATerm j_2 (ATerm t)
    {
      ATerm h_21 = NULL;
      t = eval_config_0_0(t);
      h_21 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), g_21, h_21);
      t = h_21;
      return(t);
    }
    t = try_1_0(j_2, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_96 (ATerm), ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm i_21 = NULL,j_21 = NULL;
    i_21 = t;
    t = term_g_6;
    t = get_config_0_0(t);
    j_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_21, term_c_12);
    t = geq_0_0(t);
    t = i_21;
    t = n_96(t);
    return(t);
  }
  t = try_1_0(k_2, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm e_12 = ATgetArgument(t, 0);
        if(match_cons(e_12, sym_Stream_1))
          {
            k_21 = ATgetArgument(e_12, 0);
          }
        else
          _fail(t);
        l_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(k_21, l_21);
    m_21 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), m_21);
    n_21 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, n_21);
    return(t);
  }
  t = WriteToFile_1_0(l_2, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm j_95 (ATerm), ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  if(match_cons(t, sym__2))
    {
      o_21 = ATgetArgument(t, 0);
      p_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_21, term_f_12);
  t = open_stream_0_0(t);
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_21, p_21);
  t = j_95(t);
  t = fclose_0_0(t);
  t = p_21;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm g_12 = ATgetArgument(t, 0);
        if(match_cons(g_12, sym_Stream_1))
          {
            r_21 = ATgetArgument(g_12, 0);
          }
        else
          _fail(t);
        s_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(r_21, s_21);
    t_21 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, t_21);
    return(t);
  }
  t = WriteToFile_1_0(m_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL;
  u_21 = t;
  {
    ATerm n_2 (ATerm t)
    {
      ATerm h_12 = t;
      int i_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                v_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(o_2, t);
          ;
          LocalPopChoice(i_12);
        }
      else
        {
          t = h_12;
          t = term_j_12;
          v_21 = t;
        }
      return(t);
    }
    t = _2_0(n_2, _id, t);
    t = u_21;
    {
      ATerm p_2 (ATerm t)
      {
        ATerm q_2 (ATerm t)
        {
          t = not_null(v_21);
          return(t);
        }
        t = split_2_0(q_2, _id, t);
        return(t);
      }
      t = _2_0(_id, p_2, t);
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              ATerm s_2 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(s_2, t);
              return(t);
            }
            t = _2_0(r_2, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm l_98 (ATerm), ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
  w_21 = t;
  t = dtime_0_0(t);
  t = w_21;
  t = l_98(t);
  x_21 = t;
  t = dtime_0_0(t);
  y_21 = t;
  t = x_21;
  if(match_cons(t, sym__2))
    {
      z_21 = ATgetArgument(t, 0);
      a_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_21), (ATerm) ATmakeAppl(sym_Runtime_1, y_21)), a_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_22 (ATerm e_22, ATerm f_22, ATerm t)
  {
    t = SSL_fclose(e_22);
    return(t);
  }
  ATerm o_22 (ATerm i_22, ATerm t)
  {
    t = SSL_fclose(i_22);
    return(t);
  }
  ATerm l_22 = NULL,m_22 = NULL;
  m_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_22 = ATgetArgument(t, 0);
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_22(l_22, m_22, t);
            ;
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            t = o_22(m_22, t);
          }
      }
    }
  else
    {
      t = o_22(m_22, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL;
  p_22 = t;
  t = v_94(t);
  q_22 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_22), q_22));
  t = p_22;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_22 = NULL;
  t = SSL_stdin_stream();
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_22 = NULL;
  t = SSL_stdout_stream();
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_22);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_22 = NULL;
  t = SSL_stderr_stream();
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_22);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm v_22 = NULL;
  v_22 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_22;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_22;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_22;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL;
  w_22 = t;
  t = SSL_explode_term(w_22);
  if(match_cons(t, sym__2))
    {
      ATerm o_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_12 = ATgetArgument(t, 1);
        if(((ATgetType(p_12) == AT_LIST) && !(ATisEmpty(p_12))))
          {
            x_22 = ATgetFirst((ATermList) p_12);
            {
              ATerm q_12 = (ATerm) ATgetNext((ATermList) p_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_22;
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_12 = ATgetArgument(t, 0);
      ATerm s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        {
          ATerm w_12 = t;
          int y_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
              ATerm t_2 (ATerm t)
              {
                ATerm b_23 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    b_23 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_23;
                return(t);
              }
              t = _2_0(t_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  y_22 = ATgetArgument(t, 0);
                  z_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(y_22, z_22);
              a_23 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, a_23);
              ;
              LocalPopChoice(y_12);
            }
          else
            {
              t = w_12;
              {
                ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
                ATerm u_2 (ATerm t)
                {
                  ATerm f_23 = NULL;
                  f_23 = t;
                  t = SSL_is_string(f_23);
                  return(t);
                }
                t = _2_0(u_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    c_23 = ATgetArgument(t, 0);
                    d_23 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(c_23, d_23);
                e_23 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_23);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_23 = NULL;
      j_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_23, term_c_13);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      {
        ATerm v_2 (ATerm t)
        {
          t = term_d_13;
          return(t);
        }
        t = debug_1_0(v_2, t);
        _fail(t);
      }
    }
  g_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_23);
  h_23 = t;
  t = g_23;
  t = fclose_0_0(t);
  t = h_23;
  return(t);
}
ATerm split_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  l_23 = t;
  t = n_78(t);
  m_23 = t;
  t = l_23;
  t = o_78(t);
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_23, n_23);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL;
  o_23 = t;
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_2 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              p_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(w_2, t);
        ;
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = term_i_13;
        p_23 = t;
      }
    t = o_23;
    {
      ATerm x_2 (ATerm t)
      {
        t = not_null(p_23);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, x_2, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm r_23 = NULL;
    r_23 = t;
    if(match_string(t, "-k"))
      {
        t = r_23;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = r_23;
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm s_23 = NULL,t_23 = NULL;
    s_23 = t;
    t = SSL_string_to_int(s_23);
    t_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_13, t_23);
    t = set_config_0_0(t);
    t = s_23;
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_k_13;
    return(t);
  }
  t = ArgOption_3_0(y_2, z_2, a_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_3 (ATerm t)
      {
        ATerm v_23 = NULL;
        v_23 = t;
        if(match_string(t, "-S"))
          {
            t = v_23;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = v_23;
          }
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = term_q_13;
        t = set_config_0_0(t);
        t = term_r_13;
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_u_13;
        return(t);
      }
      t = Option_3_0(b_3, c_3, d_3, t);
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
        ATerm v_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm f_3 (ATerm t)
            {
              ATerm w_23 = NULL,x_23 = NULL;
              w_23 = t;
              t = SSL_string_to_int(w_23);
              x_23 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_g_6, x_23);
              t = set_config_0_0(t);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, w_23);
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              t = term_z_13;
              return(t);
            }
            t = ArgOption_3_0(e_3, f_3, g_3, t);
            ;
            LocalPopChoice(y_13);
          }
        else
          {
            t = v_13;
            {
              ATerm h_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm i_3 (ATerm t)
              {
                t = term_i_14;
                t = set_config_0_0(t);
                t = term_j_14;
                return(t);
              }
              ATerm j_3 (ATerm t)
              {
                t = term_n_14;
                return(t);
              }
              t = Option_3_0(h_3, i_3, j_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm z_23 = NULL;
    z_23 = t;
    if(match_string(t, "-o"))
      {
        t = z_23;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = z_23;
      }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    ATerm a_24 = NULL;
    a_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_14, a_24);
    t = set_config_0_0(t);
    t = (ATerm) ATmakeAppl(sym_Output_1, a_24);
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_r_14;
    return(t);
  }
  t = ArgOption_3_0(k_3, l_3, m_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
        ATerm n_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm p_3 (ATerm t)
        {
          t = term_v_14;
          t = set_config_0_0(t);
          t = term_w_14;
          return(t);
        }
        ATerm q_3 (ATerm t)
        {
          t = term_a_15;
          return(t);
        }
        t = Option_3_0(n_3, p_3, q_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
  d_24 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = d_24;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm l_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_24 = ATgetFirst((ATermList) t);
          f_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_24 = ATgetFirst((ATermList) t);
          h_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_24;
      t = i_0(t);
      t = g_24;
      t = k_0(t);
      l_24 = t;
      t = (ATerm) ATinsert(CheckATermList(h_24), l_24);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm n_24 = NULL;
    n_24 = t;
    if(match_string(t, "-i"))
      {
        t = n_24;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = n_24;
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    ATerm o_24 = NULL;
    o_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_15, o_24);
    t = set_config_0_0(t);
    t = (ATerm) ATmakeAppl(sym_Input_1, o_24);
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = term_d_15;
    return(t);
  }
  t = ArgOption_3_0(t_3, x_3, d_4, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm e_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(j_15);
    }
  else
    {
      t = e_15;
      {
        ATerm l_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(t_15);
          }
        else
          {
            t = l_15;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_9;
  t = whoami_0_0(t);
  p_24 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), p_24));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_15;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_24;
      t = b_86(t);
    }
  else
    {
      ATerm w_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_24 = ATgetFirst((ATermList) t);
          t_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_24;
      t = foldr_2_0(b_86, c_86, t);
      w_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_24, w_24);
      t = c_86(t);
    }
  return(t);
}
ATerm crush_2_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  x_24 = t;
  t = SSL_explode_term(x_24);
  if(match_cons(t, sym__2))
    {
      ATerm z_15 = ATgetArgument(t, 0);
      y_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_24;
  t = foldr_2_0(z_83, a_84, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_24 = NULL;
  t = times_0_0(t);
  {
    ATerm f_4 (ATerm t)
    {
      t = term_p_13;
      return(t);
    }
    ATerm g_4 (ATerm t)
    {
      ATerm a_25 = NULL,b_25 = NULL;
      if(match_cons(t, sym__2))
        {
          a_25 = ATgetArgument(t, 0);
          b_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm a_16 = t;
        int b_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(a_25, b_25);
            ;
            LocalPopChoice(b_16);
          }
        else
          {
            t = a_16;
            t = SSL_addr(a_25, b_25);
          }
      }
      return(t);
    }
    t = crush_2_0(f_4, g_4, t);
    z_24 = t;
    t = SSL_TicksToSeconds(z_24);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_25 (ATerm e_25, ATerm f_25, ATerm g_25, ATerm t)
  {
    t = g_25;
    {
      ATerm i_16 = t;
      int j_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_gti(e_25, f_25);
          ;
          LocalPopChoice(j_16);
        }
      else
        {
          t = i_16;
          t = SSL_gtr(e_25, f_25);
        }
      t = (ATerm) ATmakeAppl(sym__2, e_25, f_25);
    }
    return(t);
  }
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
  k_25 = t;
  if(match_cons(t, sym__2))
    {
      l_25 = ATgetArgument(t, 0);
      m_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_25;
        if((l_25 != t))
          {
            _fail(t);
          }
        t = k_25;
        ;
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        t = o_25(l_25, m_25, k_25, t);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_96 (ATerm), ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm p_25 = NULL,q_25 = NULL;
    p_25 = t;
    t = term_g_6;
    t = get_config_0_0(t);
    q_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_25, term_p_16);
    t = geq_0_0(t);
    t = p_25;
    t = m_96(t);
    return(t);
  }
  t = try_1_0(h_4, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm s_25 = NULL,t_25 = NULL;
    t = run_time_0_0(t);
    s_25 = t;
    t = term_o_9;
    t = whoami_0_0(t);
    t_25 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), s_25), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), t_25));
    t = (ATerm) ATmakeAppl(sym__2, term_x_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_16), s_25), term_y_16), t_25));
    return(t);
  }
  t = if_verbose1_1_0(j_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm j_99 (ATerm), ATerm t)
{
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      {
        ATerm k_4 (ATerm t)
        {
          ATerm u_17 = t;
          int v_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_25 = NULL;
              w_25 = t;
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              t = w_25;
              ;
              LocalPopChoice(v_17);
            }
          else
            {
              t = u_17;
              {
                ATerm w_17 = t;
                int x_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(x_17);
                  }
                else
                  {
                    t = w_17;
                    {
                      ATerm x_25 = NULL;
                      x_25 = t;
                      if(!(match_cons(t, sym_Version_0)))
                        _fail(t);
                      t = x_25;
                    }
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(k_4, t);
      }
    }
  t = j_99(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm y_25 = NULL;
  y_25 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), y_25);
  t = y_25;
  return(t);
}
ATerm map_1_0 (ATerm l_79 (ATerm), ATerm t)
{
  ATerm b_26 (ATerm t)
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_26 = NULL;
        a_26 = t;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_26;
        ;
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        t = Cons_2_0(l_79, b_26, t);
      }
    return(t);
  }
  t = b_26(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_26 = ATgetFirst((ATermList) t);
      e_26 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_27 = NULL,s_27 = NULL;
        t = e_26;
        t = g_0(t);
        r_27 = t;
        t = d_26;
        t = e_0(t);
        s_27 = t;
        t = e_26;
        {
          ATerm m_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(r_27), s_27);
            return(t);
          }
          t = reverse_acc_2_0(e_0, m_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_9;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, r_4, t);
  return(t);
}
ATerm Program_1_0 (ATerm a_75 (ATerm), ATerm t)
{
  ATerm t_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL;
  c_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_28);
  t_27 = t;
  t = a_28;
  t = a_75(t);
  b_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, b_28), t_27);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_18);
    }
  else
    {
      t = c_18;
      {
        ATerm s_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(s_4, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_g_18;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm t_4 (ATerm t)
    {
      ATerm i_28 = NULL;
      i_28 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, i_28), term_h_18);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(t_4, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm b_75 (ATerm), ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL;
  m_28 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      k_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_28);
  j_28 = t;
  t = k_28;
  t = b_75(t);
  l_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, l_28), j_28);
  return(t);
}
ATerm fetch_1_0 (ATerm v_79 (ATerm), ATerm t)
{
  ATerm q_28 (ATerm t)
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(v_79, _id, t);
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        t = Cons_2_0(_id, q_28, t);
      }
    return(t);
  }
  t = q_28(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  t = fetch_1_0(j_100, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_28 = NULL,z_28 = NULL;
  s_28 = t;
  {
    ATerm m_18 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_19 = ATgetFirst((ATermList) t);
                ATerm d_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_28;
          }
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = m_18;
        t = (ATerm) ATinsert(ATempty, s_28);
      }
    z_28 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), z_28);
    t = s_28;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_15;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_87(t);
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm v_4 (ATerm t)
      {
        t = term_t_19;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm c_5 (ATerm t)
      {
        t = term_w_19;
        return(t);
      }
      t = Option_3_0(u_4, v_4, c_5, t);
      ;
      LocalPopChoice(r_19);
    }
  else
    {
      t = k_19;
      {
        ATerm d_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm e_5 (ATerm t)
        {
          t = term_t_19;
          t = set_config_0_0(t);
          t = term_b_20;
          t = set_config_0_0(t);
          t = term_c_20;
          return(t);
        }
        ATerm f_5 (ATerm t)
        {
          t = term_f_20;
          return(t);
        }
        t = Option_3_0(d_5, e_5, f_5, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
  if(match_cons(t, sym__3))
    {
      f_29 = ATgetArgument(t, 0);
      g_29 = ATgetArgument(t, 1);
      h_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_29, g_29);
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_29 (ATerm t)
        {
          t = SSL_table_get(f_29, g_29);
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm p_20 = ATgetArgument(t, 0);
            ATerm r_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_29(t);
        ;
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        t = (ATerm) ATempty;
      }
    i_29 = t;
    t = SSL_table_put(f_29, g_29, (ATerm) ATinsert(CheckATermList(i_29), h_29));
    t = (ATerm) ATmakeAppl(sym__3, f_29, g_29, h_29);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  ATerm n_29 = NULL;
  t = term_o_9;
  t = o_101(t);
  n_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_20, term_z_20, n_29);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  p_29 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = p_29;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm u_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_29 = ATgetFirst((ATermList) t);
          r_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_29;
      t = a_0(t);
      t = term_o_9;
      t = c_0(t);
      u_29 = t;
      t = (ATerm) ATinsert(CheckATermList(r_29), u_29);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm w_29 = NULL;
    w_29 = t;
    if(match_string(t, "--help"))
      {
        t = w_29;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = w_29;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = w_29;
          }
      }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = term_a_21;
    t = set_config_0_0(t);
    t = term_b_21;
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = term_b_22;
    return(t);
  }
  t = Option_3_0(g_5, h_5, i_5, t);
  return(t);
}
ATerm Cons_2_0 (ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  c_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_29 = ATgetFirst((ATermList) t);
      z_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_30);
  x_29 = t;
  t = y_29;
  t = i_62(t);
  a_30 = t;
  t = z_29;
  t = j_62(t);
  b_30 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(b_30), a_30), x_29);
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL;
  if(match_cons(t, sym__2))
    {
      h_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), h_30, i_30);
  t = (ATerm) ATmakeAppl(sym__3, term_c_22, h_30, i_30);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm l_30 = NULL;
  l_30 = t;
  {
    ATerm j_5 (ATerm t)
    {
      t = term_d_22;
      t = m_101(t);
      return(t);
    }
    t = try_1_0(j_5, t);
    t = l_30;
    {
      ATerm k_5 (ATerm t)
      {
        ATerm m_30 = NULL;
        m_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_15, m_30);
        t = set_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, m_30);
        return(t);
      }
      ATerm l_5 (ATerm t)
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_22 = t;
            int k_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_30 = NULL;
                n_30 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_30;
                ;
                LocalPopChoice(k_22);
              }
            else
              {
                t = j_22;
                t = m_101(t);
                t = Cons_2_0(_id, l_5, t);
              }
            ;
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            {
              ATerm p_30 = NULL,q_30 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_30 = ATgetFirst((ATermList) t);
                  q_30 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_30), (ATerm) ATmakeAppl(sym_Undefined_1, p_30));
            }
          }
        return(t);
      }
      t = Cons_2_0(k_5, l_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm l_101 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  w_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = w_30;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm u_22 = t;
      int k_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_101(t);
          ;
          LocalPopChoice(k_23);
        }
      else
        {
          t = u_22;
          {
            ATerm q_23 = t;
            int u_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(u_23);
              }
            else
              {
                t = q_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_5, t);
    {
      ATerm o_5 (ATerm t)
      {
        ATerm y_23 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_31 (ATerm z_30, ATerm t)
            {
              t = z_30;
              {
                ATerm c_24 = t;
                int i_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_j_17;
                    t = get_config_0_0(t);
                    ;
                    LocalPopChoice(i_24);
                  }
                else
                  {
                    t = c_24;
                    {
                      ATerm p_5 (ATerm t)
                      {
                        if(!(match_cons(t, sym_Help_0)))
                          _fail(t);
                        return(t);
                      }
                      t = option_defined_1_0(p_5, t);
                    }
                  }
                t = z_30;
                t = system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(0));
              }
              return(t);
            }
            ATerm k_31 (ATerm g_31, ATerm t)
            {
              t = term_s_19;
              t = get_config_0_0(t);
              t = g_31;
              t = system_about_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(0));
              return(t);
            }
            ATerm i_31 = NULL;
            i_31 = t;
            {
              ATerm j_24 = t;
              int k_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_31(i_31, t);
                  ;
                  LocalPopChoice(k_24);
                }
              else
                {
                  t = j_24;
                  t = k_31(i_31, t);
                }
            }
            ;
            LocalPopChoice(b_24);
          }
        else
          {
            t = y_23;
            {
              ATerm q_5 (ATerm t)
              {
                ATerm u_5 (ATerm t)
                {
                  x_30 = t;
                  return(t);
                }
                t = Undefined_1_0(u_5, t);
                return(t);
              }
              t = option_defined_1_0(q_5, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(x_30)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_30)), term_m_24));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(o_5, t);
      y_30 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = y_30;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm t)
{
  t = parse_options_1_0(l_99, t);
  t = store_options_0_0(t);
  t = n_99(t);
  {
    ATerm q_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_99, t);
        ;
        LocalPopChoice(u_24);
      }
    else
      {
        t = q_24;
        {
          ATerm v_24 = t;
          int c_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_99(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_25);
            }
          else
            {
              t = v_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm d_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_99(t);
        ;
        LocalPopChoice(h_25);
      }
    else
      {
        t = d_25;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(a_99, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(v_5, c_99, d_99, w_5, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm c_6 (ATerm t)
    {
      ATerm l_31 = NULL,m_31 = NULL;
      l_31 = t;
      t = term_u_15;
      t = get_config_0_0(t);
      m_31 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, m_31));
      t = l_31;
      return(t);
    }
    t = if_verbose2_1_0(c_6, t);
    return(t);
  }
  t = iowrap_4_0(u_98, v_98, w_98, x_5, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm t)
{
  t = iowrap_3_0(s_98, t_98, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm p_98 (ATerm), ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    t = _2_0(_id, p_98, t);
    return(t);
  }
  t = iowrap_2_0(e_6, _fail, t);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  t = iowrap_1_0(mark_bound_unbound_vars_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = bound_unbound_vars_0_0(t);
  return(t);
}
