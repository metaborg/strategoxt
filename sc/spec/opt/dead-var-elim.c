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
Symbol sym_Signature_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Choice_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
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
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
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
ATerm term_c_37;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_h_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_q_34;
ATerm term_l_34;
ATerm term_i_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_i_32;
ATerm term_f_32;
ATerm term_c_32;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_t_30;
ATerm term_q_30;
ATerm term_n_30;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_y_28;
ATerm term_q_28;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_g_26;
ATerm term_h_20;
ATerm term_n_16;
void init_constant_terms (void)
{
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_29);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_32);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym__3, term_c_32, term_x_34, term_n_16);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm topdown_1_0 (ATerm n_86 (ATerm), ATerm);
ATerm all_rl_1_0 (ATerm s_84 (ATerm), ATerm);
ATerm Match_1_0 (ATerm h_76 (ATerm), ATerm);
ATerm o_17 (ATerm);
ATerm v_17 (ATerm);
ATerm w_17 (ATerm);
ATerm EliminateFromMatch_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm);
ATerm elim_guardedlchoice_1_0 (ATerm o_84 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm);
ATerm elim_lchoice_1_0 (ATerm n_84 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm);
ATerm s_18 (ATerm);
ATerm l_6 (ATerm m_5, ATerm p_5, ATerm);
ATerm isect_ElimVar_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm u_18 (ATerm);
ATerm save_ElimVar_0_0 (ATerm);
ATerm elim_abstract_choice_2_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm);
ATerm elim_choice_1_0 (ATerm m_84 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm alltd_1_0 (ATerm f_88 (ATerm), ATerm);
ATerm reverse_map_1_0 (ATerm r_92 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm g_77 (ATerm), ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm);
ATerm Build_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm);
ATerm c_19 (ATerm);
ATerm h_19 (ATerm);
ATerm i_19 (ATerm);
ATerm j_19 (ATerm);
ATerm elim_sdef_1_0 (ATerm t_84 (ATerm), ATerm);
ATerm ElimVar_0_0 (ATerm);
ATerm filter_1_0 (ATerm d_99 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm);
ATerm assert_1_0 (ATerm z_98 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm w_98 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_98 (ATerm), ATerm);
ATerm scope_2_0 (ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm);
ATerm z_19 (ATerm);
ATerm b_20 (ATerm);
ATerm c_20 (ATerm);
ATerm f_20 (ATerm);
ATerm g_20 (ATerm);
ATerm i_20 (ATerm);
ATerm j_20 (ATerm);
ATerm l_20 (ATerm);
ATerm o_20 (ATerm);
ATerm p_20 (ATerm);
ATerm r_20 (ATerm);
ATerm s_20 (ATerm);
ATerm v_20 (ATerm);
ATerm w_20 (ATerm);
ATerm x_20 (ATerm);
ATerm y_20 (ATerm);
ATerm z_20 (ATerm);
ATerm dead_var_elim_0_0 (ATerm);
ATerm map_1_0 (ATerm o_92 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm s_71 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm o_71 (ATerm), ATerm p_71 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm t_71 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm x_71 (ATerm), ATerm);
ATerm _2_0 (ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm g_108 (ATerm), ATerm);
ATerm d_21 (ATerm);
ATerm e_21 (ATerm);
ATerm f_21 (ATerm);
ATerm g_21 (ATerm);
ATerm h_21 (ATerm);
ATerm j_21 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm i_111 (ATerm), ATerm);
ATerm b_19 (ATerm v_18, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm k_21 (ATerm);
ATerm l_21 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm z_92 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_93 (ATerm), ATerm);
ATerm q_21 (ATerm);
ATerm r_21 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm v_21 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm r_109 (ATerm), ATerm);
ATerm w_21 (ATerm);
ATerm x_21 (ATerm);
ATerm z_21 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm b_22 (ATerm);
ATerm f_22 (ATerm);
ATerm j_22 (ATerm);
ATerm k_22 (ATerm);
ATerm o_22 (ATerm);
ATerm p_22 (ATerm);
ATerm r_22 (ATerm);
ATerm u_22 (ATerm);
ATerm v_22 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm a_23 (ATerm);
ATerm b_23 (ATerm);
ATerm c_23 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm d_23 (ATerm);
ATerm e_23 (ATerm);
ATerm f_23 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm g_23 (ATerm);
ATerm m_23 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm q_109 (ATerm), ATerm);
ATerm n_23 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm o_23 (ATerm);
ATerm need_help_1_0 (ATerm g_112 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm g_84 (ATerm), ATerm);
ATerm u_23 (ATerm);
ATerm v_23 (ATerm);
ATerm y_23 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm h_84 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_23 (ATerm);
ATerm b_24 (ATerm);
ATerm c_24 (ATerm);
ATerm e_24 (ATerm);
ATerm f_24 (ATerm);
ATerm g_24 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm h_24 (ATerm);
ATerm parse_options_p__1_0 (ATerm j_114 (ATerm), ATerm);
ATerm k_24 (ATerm);
ATerm l_24 (ATerm);
ATerm m_24 (ATerm);
ATerm n_24 (ATerm);
ATerm parse_options_1_0 (ATerm i_114 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm i_112 (ATerm), ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm);
ATerm v_24 (ATerm);
ATerm a_25 (ATerm);
ATerm d_25 (ATerm);
ATerm e_25 (ATerm);
ATerm f_25 (ATerm);
ATerm iowrap_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm);
ATerm n_25 (ATerm);
ATerm t_25 (ATerm);
ATerm u_25 (ATerm);
ATerm v_25 (ATerm);
ATerm w_25 (ATerm);
ATerm x_25 (ATerm);
ATerm a_26 (ATerm);
ATerm b_26 (ATerm);
ATerm c_26 (ATerm);
ATerm d_26 (ATerm);
ATerm dead_var_elim_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_0 = NULL,k_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL,q_0 = NULL,r_0 = NULL,t_0 = NULL;
  i_0 = t;
  t = term_n_16;
  t = whoami_0_0(t);
  k_0 = t;
  n_0 = t;
  t = term_h_20;
  l_0 = t;
  t = n_0;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_26), k_0), term_g_26);
  m_0 = t;
  t = SSL_printnl(l_0, m_0);
  t_0 = t;
  t = term_k_26;
  r_0 = t;
  t = SSL_exit(r_0);
  t = i_0;
  return(t);
}
ATerm topdown_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  t = n_86(t);
  {
    ATerm n_17 (ATerm t)
    {
      t = topdown_1_0(n_86, t);
      return(t);
    }
    t = SRTS_all(n_17, t);
  }
  return(t);
}
ATerm all_rl_1_0 (ATerm s_84 (ATerm), ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,s_0 = NULL,w_0 = NULL;
  o_0 = t;
  t = SSL_explode_term(o_0);
  if(match_cons(t, sym__2))
    {
      p_0 = ATgetArgument(t, 0);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_0;
  t = reverse_map_1_0(s_84, t);
  w_0 = t;
  t = SSL_mkterm(p_0, w_0);
  return(t);
}
ATerm Match_1_0 (ATerm h_76 (ATerm), ATerm t)
{
  ATerm x_0 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL,u_0 = NULL,v_0 = NULL;
  d_1 = t;
  if(match_cons(t, sym_Match_1))
    {
      b_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_1);
  x_0 = t;
  t = b_1;
  t = h_76(t);
  c_1 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, c_1);
  u_0 = t;
  t = SSLsetAnnotations(u_0, x_0);
  return(t);
}
ATerm o_17 (ATerm t)
{
  t = alltd_1_0(v_17, t);
  t = alltd_1_0(w_17, t);
  return(t);
}
ATerm v_17 (ATerm t)
{
  ATerm n_1 = NULL,p_1 = NULL,a_2 = NULL,j_2 = NULL;
  a_2 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_2;
        n_1 = t;
        t = SSLgetAnnotations(a_2);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_26 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) n_26) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm o_26 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(o_26) != AT_LIST) || !(ATisEmpty(o_26))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = a_2;
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = j_2;
        n_1 = t;
        t = SSLgetAnnotations(a_2);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_2;
      }
    p_1 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_r_26, (ATerm)ATmakeAppl(sym_Var_1, n_1), term_s_26);
    t = table_replace_0_0(t);
    t = p_1;
  }
  return(t);
}
ATerm w_17 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_2);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_26 = ATgetFirst((ATermList) t);
      ATerm w_26 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(w_26) != AT_LIST) || !(ATisEmpty(w_26))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, q_2);
  t = ElimVar_0_0(t);
  return(t);
}
ATerm EliminateFromMatch_0_0 (ATerm t)
{
  t = Match_1_0(o_17, t);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm t)
{
  ATerm a_3 = NULL,c_3 = NULL,d_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,j_3 = NULL,k_3 = NULL,y_0 = NULL,z_0 = NULL;
  k_3 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      c_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
      f_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_3);
  a_3 = t;
  t = c_3;
  t = u_76(t);
  g_3 = t;
  t = d_3;
  t = v_76(t);
  h_3 = t;
  t = f_3;
  t = w_76(t);
  j_3 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, g_3, h_3, j_3);
  y_0 = t;
  t = SSLsetAnnotations(y_0, a_3);
  return(t);
}
ATerm elim_guardedlchoice_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, _id, t);
  {
    ATerm o_18 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, o_84, _id, t);
      t = GuardedLChoice_3_0(o_84, _id, _id, t);
      return(t);
    }
    ATerm p_18 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, _id, o_84, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(o_18, p_18, t);
  }
  return(t);
}
ATerm LChoice_2_0 (ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,a_1 = NULL,e_1 = NULL;
  u_3 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      q_3 = ATgetArgument(t, 0);
      r_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_3);
  p_3 = t;
  t = q_3;
  t = q_76(t);
  s_3 = t;
  t = r_3;
  t = r_76(t);
  t_3 = t;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, s_3, t_3);
  a_1 = t;
  t = SSLsetAnnotations(a_1, p_3);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  t = LChoice_2_0(_id, _id, t);
  {
    ATerm q_18 (ATerm t)
    {
      t = LChoice_2_0(n_84, _id, t);
      return(t);
    }
    ATerm r_18 (ATerm t)
    {
      t = LChoice_2_0(_id, n_84, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(q_18, r_18, t);
  }
  return(t);
}
ATerm Choice_2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,k_4 = NULL,f_1 = NULL,g_1 = NULL;
  k_4 = t;
  if(match_cons(t, sym_Choice_2))
    {
      d_4 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_4);
  c_4 = t;
  t = d_4;
  t = o_75(t);
  f_4 = t;
  t = e_4;
  t = p_75(t);
  g_4 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, f_4, g_4);
  f_1 = t;
  t = SSLsetAnnotations(f_1, c_4);
  return(t);
}
ATerm s_18 (ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_5 = NULL,c_6 = NULL,d_6 = NULL,g_6 = NULL;
      z_5 = t;
      if(match_cons(t, sym__2))
        {
          c_6 = ATgetArgument(t, 0);
          d_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_6;
      {
        ATerm a_27 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_6 = ATgetFirst((ATermList) t);
                {
                  ATerm h_27 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(b_27);
            t = g_6;
            {
              ATerm i_27 = t;
              int j_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm k_27 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(j_27);
                  t = c_6;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm l_27 = t;
                      int m_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_5;
                          ;
                          LocalPopChoice(m_27);
                        }
                      else
                        {
                          t = l_27;
                          t = l_6(c_6, z_5, t);
                        }
                    }
                  else
                    {
                      t = l_6(c_6, z_5, t);
                    }
                }
              else
                {
                  t = i_27;
                  t = c_6;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = z_5;
                }
            }
          }
        else
          {
            t = a_27;
            t = c_6;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = z_5;
          }
      }
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
    }
  return(t);
}
ATerm l_6 (ATerm m_5, ATerm p_5, ATerm t)
{
  t = p_5;
  {
    ATerm n_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 = NULL,i_1 = NULL;
        t = p_5;
        i_1 = t;
        t = term_r_26;
        h_1 = t;
        t = SSL_table_get(h_1, m_5);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_27 = ATgetFirst((ATermList) t);
            if(match_cons(r_27, sym_Defined_1))
              {
                ATerm t_27 = ATgetArgument(r_27, 0);
              }
            else
              _fail(t);
            {
              ATerm s_27 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = p_5;
        ;
        LocalPopChoice(q_27);
      }
    else
      {
        t = n_27;
        t = (ATerm) ATmakeAppl(sym__2, m_5, (ATerm) ATinsert(ATempty, term_s_26));
      }
  }
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm l_5 = NULL,j_1 = NULL,k_1 = NULL;
  t = map_1_0(s_18, t);
  l_5 = t;
  k_1 = t;
  t = term_r_26;
  j_1 = t;
  t = SSL_table_destroy(j_1);
  t = (ATerm) ATmakeAppl(sym__2, term_r_26, l_5);
  t = table_putlist_0_0(t);
  t = l_5;
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  if(match_cons(t, sym__2))
    {
      r_6 = ATgetArgument(t, 0);
      q_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6;
  {
    ATerm t_18 (ATerm t)
    {
      ATerm v_6 = NULL,w_6 = NULL;
      if(match_cons(t, sym__2))
        {
          v_6 = ATgetArgument(t, 0);
          w_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(r_6, v_6, w_6);
      t = (ATerm) ATmakeAppl(sym__3, r_6, v_6, w_6);
      return(t);
    }
    t = map_1_0(t_18, t);
  }
  return(t);
}
ATerm u_18 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL,o_1 = NULL,q_1 = NULL;
  e_2 = t;
  q_1 = t;
  t = term_r_26;
  o_1 = t;
  t = SSL_table_get(o_1, e_2);
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_2, f_2);
  return(t);
}
ATerm save_ElimVar_0_0 (ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL;
  t = term_r_26;
  m_1 = t;
  t = term_r_26;
  l_1 = t;
  t = SSL_table_keys(l_1);
  t = map_1_0(u_18, t);
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,m_7 = NULL,q_7 = NULL,r_7 = NULL,r_1 = NULL,s_1 = NULL;
  g_7 = t;
  t = save_ElimVar_0_0(t);
  h_7 = t;
  t = g_7;
  t = p_84(t);
  m_7 = t;
  t = save_ElimVar_0_0(t);
  q_7 = t;
  s_1 = t;
  t = term_r_26;
  r_1 = t;
  t = SSL_table_destroy(r_1);
  t = (ATerm) ATmakeAppl(sym__2, term_r_26, h_7);
  t = table_putlist_0_0(t);
  t = m_7;
  t = q_84(t);
  r_7 = t;
  t = q_7;
  t = isect_ElimVar_0_0(t);
  t = r_7;
  return(t);
}
ATerm elim_choice_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  t = Choice_2_0(_id, _id, t);
  {
    ATerm w_18 (ATerm t)
    {
      t = Choice_2_0(m_84, _id, t);
      return(t);
    }
    ATerm x_18 (ATerm t)
    {
      t = Choice_2_0(_id, m_84, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(w_18, x_18, t);
  }
  return(t);
}
ATerm Seq_2_0 (ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,y_7 = NULL,a_8 = NULL,b_8 = NULL,g_8 = NULL,t_1 = NULL,u_1 = NULL;
  g_8 = t;
  if(match_cons(t, sym_Seq_2))
    {
      v_7 = ATgetArgument(t, 0);
      y_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_8);
  u_7 = t;
  t = v_7;
  t = o_76(t);
  a_8 = t;
  t = y_7;
  t = p_76(t);
  b_8 = t;
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, a_8, b_8);
  t_1 = t;
  t = SSLsetAnnotations(t_1, u_7);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm j_8 = NULL,m_8 = NULL,n_8 = NULL,u_8 = NULL,v_1 = NULL,w_1 = NULL;
  if(match_cons(t, sym__3))
    {
      j_8 = ATgetArgument(t, 0);
      m_8 = ATgetArgument(t, 1);
      n_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(j_8, m_8);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_27 = ATgetFirst((ATermList) t);
      u_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  w_1 = t;
  t = (ATerm) ATinsert(CheckATermList(u_8), n_8);
  v_1 = t;
  t = SSL_table_put(j_8, m_8, v_1);
  t = (ATerm) ATmakeAppl(sym__3, j_8, m_8, n_8);
  return(t);
}
ATerm alltd_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm y_8 (ATerm t)
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_88(t);
        ;
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        t = SRTS_all(y_8, t);
      }
    return(t);
  }
  t = y_8(t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm r_92 (ATerm), ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_19 (ATerm t)
      {
        t = reverse_map_1_0(r_92, t);
        return(t);
      }
      t = Cons_2_0(_id, a_19, t);
      t = Cons_2_0(r_92, _id, t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,m_9 = NULL,n_9 = NULL,x_1 = NULL,y_1 = NULL;
  n_9 = t;
  if(match_cons(t, sym_CallT_3))
    {
      b_9 = ATgetArgument(t, 0);
      g_9 = ATgetArgument(t, 1);
      h_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_9);
  a_9 = t;
  t = b_9;
  t = e_76(t);
  i_9 = t;
  t = g_9;
  t = f_76(t);
  j_9 = t;
  t = h_9;
  t = g_76(t);
  m_9 = t;
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, i_9, j_9, m_9);
  x_1 = t;
  t = SSLsetAnnotations(x_1, a_9);
  return(t);
}
ATerm PrimT_3_0 (ATerm g_77 (ATerm), ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL,a_10 = NULL,i_10 = NULL,m_10 = NULL,n_10 = NULL,q_10 = NULL,z_1 = NULL,b_2 = NULL;
  q_10 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      u_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
      a_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_10);
  t_9 = t;
  t = u_9;
  t = g_77(t);
  i_10 = t;
  t = v_9;
  t = h_77(t);
  m_10 = t;
  t = a_10;
  t = i_77(t);
  n_10 = t;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, i_10, m_10, n_10);
  z_1 = t;
  t = SSLsetAnnotations(z_1, t_9);
  return(t);
}
ATerm Build_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm a_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,c_2 = NULL,d_2 = NULL;
  e_11 = t;
  if(match_cons(t, sym_Build_1))
    {
      c_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_11);
  a_11 = t;
  t = c_11;
  t = i_76(t);
  d_11 = t;
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, d_11);
  c_2 = t;
  t = SSLsetAnnotations(c_2, a_11);
  return(t);
}
ATerm SDefT_4_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm t)
{
  ATerm w_11 = NULL,z_11 = NULL,a_12 = NULL,i_12 = NULL,j_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,s_12 = NULL,t_12 = NULL,g_2 = NULL,h_2 = NULL;
  t_12 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      z_11 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
      i_12 = ATgetArgument(t, 2);
      j_12 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_12);
  w_11 = t;
  t = z_11;
  t = s_78(t);
  m_12 = t;
  t = a_12;
  t = t_78(t);
  n_12 = t;
  t = i_12;
  t = u_78(t);
  o_12 = t;
  t = j_12;
  t = v_78(t);
  s_12 = t;
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, m_12, n_12, o_12, s_12);
  g_2 = t;
  t = SSLsetAnnotations(g_2, w_11);
  return(t);
}
ATerm c_19 (ATerm t)
{
  t = term_r_26;
  return(t);
}
ATerm h_19 (ATerm t)
{
  t = map_1_0(i_19, t);
  return(t);
}
ATerm i_19 (ATerm t)
{
  ATerm y_12 = NULL,c_13 = NULL;
  y_12 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      c_13 = ATgetArgument(t, 0);
      {
        ATerm z_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_13), term_s_26);
  t = assert_1_0(j_19, t);
  t = y_12;
  return(t);
}
ATerm j_19 (ATerm t)
{
  t = term_r_26;
  return(t);
}
ATerm elim_sdef_1_0 (ATerm t_84 (ATerm), ATerm t)
{
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm a_28 = ATgetArgument(t, 0);
      ATerm b_28 = ATgetArgument(t, 1);
      ATerm c_28 = ATgetArgument(t, 2);
      ATerm d_28 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm g_19 (ATerm t)
    {
      t = SDefT_4_0(_id, _id, h_19, t_84, t);
      return(t);
    }
    t = scope_2_0(c_19, g_19, t);
  }
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm t_13 = NULL;
  t_13 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm e_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_3 = NULL,i_2 = NULL,k_2 = NULL;
        t = term_r_26;
        k_2 = t;
        t = term_r_26;
        i_2 = t;
        t = SSL_table_get(i_2, t_13);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_3 = ATgetFirst((ATermList) t);
            {
              ATerm h_28 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = x_3;
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(g_28);
      }
    else
      {
        t = f_28;
        {
          ATerm i_28 = t;
          int j_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_4 = NULL,l_2 = NULL,m_2 = NULL;
              t = term_r_26;
              m_2 = t;
              t = term_r_26;
              l_2 = t;
              t = SSL_table_get(l_2, t_13);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_4 = ATgetFirst((ATermList) t);
                  {
                    ATerm k_28 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = n_4;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(j_28);
            }
          else
            {
              t = i_28;
              {
                ATerm l_28 = t;
                int m_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_4 = NULL,n_2 = NULL,o_2 = NULL;
                    t = term_r_26;
                    o_2 = t;
                    t = term_r_26;
                    n_2 = t;
                    t = SSL_table_get(n_2, t_13);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        u_4 = ATgetFirst((ATermList) t);
                        {
                          ATerm n_28 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = u_4;
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    _fail(t);
                    ;
                    LocalPopChoice(m_28);
                  }
                else
                  {
                    t = l_28;
                    {
                      ATerm b_5 = NULL,r_2 = NULL,s_2 = NULL;
                      t = term_r_26;
                      s_2 = t;
                      t = term_r_26;
                      r_2 = t;
                      t = SSL_table_get(r_2, t_13);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          b_5 = ATgetFirst((ATermList) t);
                          {
                            ATerm o_28 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = b_5;
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm p_28 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) p_28) != ATmakeSymbol("b_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_q_28;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      {
        ATerm t_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_19 (ATerm t)
            {
              t = filter_1_0(d_99, t);
              return(t);
            }
            t = Cons_2_0(d_99, w_19, t);
            ;
            LocalPopChoice(u_28);
          }
        else
          {
            t = t_28;
            {
              ATerm c_14 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm v_28 = ATgetFirst((ATermList) t);
                  c_14 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = c_14;
              t = filter_1_0(d_99, t);
            }
          }
      }
    }
  return(t);
}
ATerm Scope_2_0 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,t_2 = NULL,u_2 = NULL;
  m_14 = t;
  if(match_cons(t, sym_Scope_2))
    {
      i_14 = ATgetArgument(t, 0);
      j_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_14);
  h_14 = t;
  t = i_14;
  t = k_76(t);
  k_14 = t;
  t = j_14;
  t = l_76(t);
  l_14 = t;
  u_2 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, k_14, l_14);
  t_2 = t;
  t = SSLsetAnnotations(t_2, h_14);
  return(t);
}
ATerm assert_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm p_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,b_3 = NULL;
  if(match_cons(t, sym__2))
    {
      p_14 = ATgetArgument(t, 0);
      t_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_98(t);
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_14, p_14, t_14);
  t = table_push_0_0(t);
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_2 = NULL,w_2 = NULL;
        w_2 = t;
        t = term_y_28;
        v_2 = t;
        t = SSL_table_get(u_14, v_2);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_14 = ATgetFirst((ATermList) t);
        w_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    z_2 = t;
    t = term_y_28;
    x_2 = t;
    t = z_2;
    b_3 = t;
    t = (ATerm) ATinsert(CheckATermList(w_14), (ATerm) ATinsert(CheckATermList(v_14), p_14));
    y_2 = t;
    t = SSL_table_put(u_14, x_2, y_2);
    t = (ATerm) ATmakeAppl(sym__2, p_14, t_14);
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm z_14 = NULL,b_15 = NULL,c_15 = NULL;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      b_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_14, b_15);
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_29 = ATgetArgument(t, 0);
            ATerm c_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_14, b_15);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_29 = ATgetFirst((ATermList) t);
            e_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_5;
        ;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        t = (ATerm) ATempty;
      }
    c_15 = t;
    t = SSL_table_put(z_14, b_15, c_15);
    t = (ATerm) ATmakeAppl(sym__2, z_14, b_15);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,l_3 = NULL,m_3 = NULL;
  i_15 = t;
  t = w_98(t);
  j_15 = t;
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_3 = NULL,i_3 = NULL;
        i_3 = t;
        t = term_y_28;
        e_3 = t;
        t = SSL_table_get(j_15, e_3);
        ;
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_15 = ATgetFirst((ATermList) t);
        k_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    m_3 = t;
    t = term_y_28;
    l_3 = t;
    t = SSL_table_put(j_15, l_3, k_15);
    t = l_15;
    {
      ATerm x_19 (ATerm t)
      {
        ATerm p_15 = NULL;
        p_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_15, p_15);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(x_19, t);
      t = i_15;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm t)
{
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_89(t);
      t = v_89(t);
      ;
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
      t = v_89(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,v_3 = NULL,w_3 = NULL,y_3 = NULL,z_3 = NULL;
  t_15 = t;
  t = v_98(t);
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_15, term_y_28);
  {
    ATerm i_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_3 = NULL,o_3 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_29 = ATgetArgument(t, 0);
            ATerm l_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        o_3 = t;
        t = term_y_28;
        n_3 = t;
        t = SSL_table_get(u_15, n_3);
        ;
        LocalPopChoice(j_29);
      }
    else
      {
        t = i_29;
        t = (ATerm) ATempty;
      }
    v_15 = t;
    y_3 = t;
    t = term_y_28;
    v_3 = t;
    t = y_3;
    z_3 = t;
    t = (ATerm) ATinsert(CheckATermList(v_15), (ATerm) ATempty);
    w_3 = t;
    t = SSL_table_put(u_15, v_3, w_3);
    t = t_15;
  }
  return(t);
}
ATerm scope_2_0 (ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm t)
{
  t = begin_scope_1_0(x_98, t);
  {
    ATerm y_19 (ATerm t)
    {
      t = end_scope_1_0(x_98, t);
      return(t);
    }
    t = restore_always_2_0(y_98, y_19, t);
  }
  return(t);
}
ATerm z_19 (ATerm t)
{
  t = term_r_26;
  return(t);
}
ATerm b_20 (ATerm t)
{
  t = Scope_2_0(c_20, dead_var_elim_0_0, t);
  t = Scope_2_0(i_20, _id, t);
  return(t);
}
ATerm c_20 (ATerm t)
{
  t = map_1_0(f_20, t);
  return(t);
}
ATerm f_20 (ATerm t)
{
  ATerm i_16 = NULL;
  i_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, i_16), term_n_29);
  t = assert_1_0(g_20, t);
  t = i_16;
  return(t);
}
ATerm g_20 (ATerm t)
{
  t = term_r_26;
  return(t);
}
ATerm i_20 (ATerm t)
{
  t = filter_1_0(j_20, t);
  return(t);
}
ATerm j_20 (ATerm t)
{
  ATerm o_29 = t;
  if((PushChoice() == 0))
    {
      ATerm j_16 = NULL;
      j_16 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, j_16);
      t = ElimVar_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_29;
    }
  return(t);
}
ATerm l_20 (ATerm t)
{
  t = alltd_1_0(o_20, t);
  return(t);
}
ATerm o_20 (ATerm t)
{
  ATerm k_16 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_26, (ATerm)ATmakeAppl(sym_Var_1, k_16), term_s_26);
  t = table_replace_0_0(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, k_16);
  return(t);
}
ATerm p_20 (ATerm t)
{
  t = reverse_map_1_0(dead_var_elim_0_0, t);
  return(t);
}
ATerm r_20 (ATerm t)
{
  t = reverse_map_1_0(s_20, t);
  return(t);
}
ATerm s_20 (ATerm t)
{
  t = alltd_1_0(v_20, t);
  return(t);
}
ATerm v_20 (ATerm t)
{
  ATerm l_16 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_26, (ATerm)ATmakeAppl(sym_Var_1, l_16), term_s_26);
  t = table_replace_0_0(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, l_16);
  return(t);
}
ATerm w_20 (ATerm t)
{
  t = reverse_map_1_0(dead_var_elim_0_0, t);
  return(t);
}
ATerm x_20 (ATerm t)
{
  t = reverse_map_1_0(y_20, t);
  return(t);
}
ATerm y_20 (ATerm t)
{
  t = alltd_1_0(z_20, t);
  return(t);
}
ATerm z_20 (ATerm t)
{
  ATerm m_16 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_26, (ATerm)ATmakeAppl(sym_Var_1, m_16), term_s_26);
  t = table_replace_0_0(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, m_16);
  return(t);
}
ATerm dead_var_elim_0_0 (ATerm t)
{
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_16 = NULL;
      f_16 = t;
      if(match_cons(t, sym_Scope_2))
        {
          ATerm r_29 = ATgetArgument(t, 0);
          ATerm s_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_16;
      t = scope_2_0(z_19, b_20, t);
      ;
      LocalPopChoice(q_29);
    }
  else
    {
      t = p_29;
      {
        ATerm t_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = elim_sdef_1_0(dead_var_elim_0_0, t);
            ;
            LocalPopChoice(u_29);
          }
        else
          {
            t = t_29;
            {
              ATerm v_29 = t;
              int w_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Build_1_0(l_20, t);
                  ;
                  LocalPopChoice(w_29);
                }
              else
                {
                  t = v_29;
                  {
                    ATerm x_29 = t;
                    int y_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = PrimT_3_0(_id, p_20, r_20, t);
                        ;
                        LocalPopChoice(y_29);
                      }
                    else
                      {
                        t = x_29;
                        {
                          ATerm z_29 = t;
                          int a_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = CallT_3_0(_id, w_20, x_20, t);
                              ;
                              LocalPopChoice(a_30);
                            }
                          else
                            {
                              t = z_29;
                              {
                                ATerm b_30 = t;
                                int c_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Seq_2_0(_id, dead_var_elim_0_0, t);
                                    t = Seq_2_0(dead_var_elim_0_0, _id, t);
                                    ;
                                    LocalPopChoice(c_30);
                                  }
                                else
                                  {
                                    t = b_30;
                                    {
                                      ATerm d_30 = t;
                                      int e_30 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = elim_choice_1_0(dead_var_elim_0_0, t);
                                          ;
                                          LocalPopChoice(e_30);
                                        }
                                      else
                                        {
                                          t = d_30;
                                          {
                                            ATerm f_30 = t;
                                            int g_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = elim_lchoice_1_0(dead_var_elim_0_0, t);
                                                ;
                                                LocalPopChoice(g_30);
                                              }
                                            else
                                              {
                                                t = f_30;
                                                {
                                                  ATerm h_30 = t;
                                                  int i_30 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = elim_guardedlchoice_1_0(dead_var_elim_0_0, t);
                                                      ;
                                                      LocalPopChoice(i_30);
                                                    }
                                                  else
                                                    {
                                                      t = h_30;
                                                      {
                                                        ATerm j_30 = t;
                                                        int k_30 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = EliminateFromMatch_0_0(t);
                                                            ;
                                                            LocalPopChoice(k_30);
                                                          }
                                                        else
                                                          {
                                                            t = j_30;
                                                            t = all_rl_1_0(dead_var_elim_0_0, t);
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
ATerm map_1_0 (ATerm o_92 (ATerm), ATerm t)
{
  ATerm o_16 (ATerm t)
  {
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
        t = Cons_2_0(o_92, o_16, t);
      }
    return(t);
  }
  t = o_16(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm s_71 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,a_4 = NULL,b_4 = NULL;
  s_16 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      q_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_16);
  p_16 = t;
  t = q_16;
  t = s_71(t);
  r_16 = t;
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, r_16);
  a_4 = t;
  t = SSLsetAnnotations(a_4, p_16);
  return(t);
}
ATerm Cons_2_0 (ATerm o_71 (ATerm), ATerm p_71 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,h_4 = NULL,i_4 = NULL;
  a_17 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_16 = ATgetFirst((ATermList) t);
      x_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_17);
  v_16 = t;
  t = w_16;
  t = o_71(t);
  y_16 = t;
  t = x_16;
  t = p_71(t);
  z_16 = t;
  i_4 = t;
  t = (ATerm) ATinsert(CheckATermList(z_16), y_16);
  h_4 = t;
  t = SSLsetAnnotations(h_4, v_16);
  return(t);
}
ATerm Signature_1_0 (ATerm t_71 (ATerm), ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,j_4 = NULL,l_4 = NULL;
  g_17 = t;
  if(match_cons(t, sym_Signature_1))
    {
      e_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_17);
  d_17 = t;
  t = e_17;
  t = t_71(t);
  f_17 = t;
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, f_17);
  j_4 = t;
  t = SSLsetAnnotations(j_4, d_17);
  return(t);
}
ATerm Specification_1_0 (ATerm x_71 (ATerm), ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,m_4 = NULL,o_4 = NULL;
  m_17 = t;
  if(match_cons(t, sym_Specification_1))
    {
      k_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_17);
  j_17 = t;
  t = k_17;
  t = x_71(t);
  l_17 = t;
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_17);
  m_4 = t;
  t = SSLsetAnnotations(m_4, j_17);
  return(t);
}
ATerm _2_0 (ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,p_4 = NULL,q_4 = NULL;
  u_17 = t;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_17);
  p_17 = t;
  t = q_17;
  t = z_66(t);
  s_17 = t;
  t = r_17;
  t = a_67(t);
  t_17 = t;
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_17, t_17);
  p_4 = t;
  t = SSLsetAnnotations(p_4, p_17);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm g_108 (ATerm), ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  if(match_cons(t, sym__2))
    {
      x_17 = ATgetArgument(t, 0);
      y_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_17, term_n_30);
  t = open_stream_0_0(t);
  z_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_17, y_17);
  t = g_108(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
ATerm d_21 (ATerm t)
{
  t = fetch_1_0(f_21, t);
  return(t);
}
ATerm e_21 (ATerm t)
{
  t = WriteToFile_1_0(g_21, t);
  return(t);
}
ATerm f_21 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm g_21 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_30 = ATgetArgument(t, 0);
      if(match_cons(o_30, sym_Stream_1))
        {
          c_18 = ATgetArgument(o_30, 0);
        }
      else
        _fail(t);
      d_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(c_18, d_18);
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_18);
  return(t);
}
ATerm h_21 (ATerm t)
{
  t = WriteToFile_1_0(j_21, t);
  return(t);
}
ATerm j_21 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,r_4 = NULL,s_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_30 = ATgetArgument(t, 0);
      if(match_cons(p_30, sym_Stream_1))
        {
          f_18 = ATgetArgument(p_30, 0);
        }
      else
        _fail(t);
      g_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(f_18, g_18);
  h_18 = t;
  s_4 = t;
  t = term_q_30;
  r_4 = t;
  t = SSL_fputc(r_4, h_18);
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_18);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  a_18 = t;
  {
    ATerm a_21 (ATerm t)
    {
      ATerm r_30 = t;
      int s_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_21 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((b_18 != NULL) && (b_18 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(b_21, t);
          ;
          LocalPopChoice(s_30);
        }
      else
        {
          t = r_30;
          t = term_t_30;
          if(((b_18 != NULL) && (b_18 != t)))
            _fail(t);
          else
            b_18 = t;
        }
      return(t);
    }
    t = _2_0(a_21, _id, t);
    t = a_18;
    {
      ATerm c_21 (ATerm t)
      {
        ATerm v_5 = NULL;
        v_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_18), v_5);
        return(t);
      }
      t = _2_0(_id, c_21, t);
      {
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(d_21, e_21, t);
            ;
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
            t = _2_0(_id, h_21, t);
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
ATerm apply_strategy_1_0 (ATerm i_111 (ATerm), ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
  j_18 = t;
  t = dtime_0_0(t);
  t = j_18;
  t = i_111(t);
  k_18 = t;
  t = dtime_0_0(t);
  l_18 = t;
  t = k_18;
  if(match_cons(t, sym__2))
    {
      m_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_18), (ATerm) ATmakeAppl(sym_Runtime_1, l_18)), n_18);
  return(t);
}
ATerm b_19 (ATerm v_18, ATerm t)
{
  t = SSL_fclose(v_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL;
  z_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_18 = ATgetArgument(t, 0);
      {
        ATerm w_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_18);
            ;
            LocalPopChoice(x_30);
          }
        else
          {
            t = w_30;
            t = b_19(z_18, t);
          }
      }
    }
  else
    {
      t = b_19(z_18, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_19 = NULL;
  t = SSL_stdin_stream();
  d_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_19);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_19 = NULL;
  t = SSL_stdout_stream();
  e_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_19);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_19 = NULL;
  t = SSL_stderr_stream();
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_19);
  return(t);
}
ATerm k_21 (ATerm t)
{
  ATerm n_19 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      n_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_19;
  return(t);
}
ATerm l_21 (ATerm t)
{
  ATerm r_19 = NULL;
  r_19 = t;
  t = SSL_is_string(r_19);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_30 = ATgetArgument(t, 0);
      ATerm z_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 = NULL,b_7 = NULL;
        a_7 = t;
        t = SSL_explode_term(a_7);
        if(match_cons(t, sym__2))
          {
            ATerm c_31 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_31) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_31 = ATgetArgument(t, 1);
              if(((ATgetType(d_31) == AT_LIST) && !(ATisEmpty(d_31))))
                {
                  b_7 = ATgetFirst((ATermList) d_31);
                  {
                    ATerm e_31 = (ATerm) ATgetNext((ATermList) d_31);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_7;
        if(match_cons(t, sym_stderr_0))
          {
            t = b_7;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = b_7;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = b_7;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        {
          ATerm f_31 = t;
          int g_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
              t = _2_0(k_21, _id, t);
              if(match_cons(t, sym__2))
                {
                  k_19 = ATgetArgument(t, 0);
                  l_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(k_19, l_19);
              m_19 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, m_19);
              ;
              LocalPopChoice(g_31);
            }
          else
            {
              t = f_31;
              {
                ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
                t = _2_0(l_21, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_19 = ATgetArgument(t, 0);
                    p_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(o_19, p_19);
                q_19 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, q_19);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_19 = NULL;
      v_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_19, term_j_31);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_31);
    }
  else
    {
      t = h_31;
      {
        ATerm c_7 = NULL,t_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
        c_7 = t;
        t = term_k_31;
        w_4 = t;
        t = term_h_20;
        t_4 = t;
        t = w_4;
        x_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, c_7), term_k_31);
        v_4 = t;
        t = SSL_printnl(t_4, v_4);
        t = c_7;
        _fail(t);
      }
    }
  s_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(u_19);
  t_19 = t;
  t = s_19;
  t = fclose_0_0(t);
  t = t_19;
  return(t);
}
ATerm fetch_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  ATerm a_20 (ATerm t)
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_92, _id, t);
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        t = Cons_2_0(_id, a_20, t);
      }
    return(t);
  }
  t = a_20(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      {
        ATerm d_20 = NULL,e_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_20 = ATgetFirst((ATermList) t);
            e_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_20;
        {
          ATerm p_21 (ATerm t)
          {
            t = e_20;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(p_21, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm f_93 (ATerm), ATerm t)
{
  ATerm k_20 (ATerm t)
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, k_20, t);
        ;
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_93(t);
      }
    return(t);
  }
  t = k_20(t);
  return(t);
}
ATerm q_21 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  t = SSL_explode_string(n_20);
  return(t);
}
ATerm r_21 (ATerm t)
{
  ATerm q_20 = NULL;
  q_20 = t;
  t = SSL_explode_string(q_20);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm m_20 = NULL;
  t = _2_0(q_21, r_21, t);
  {
    ATerm r_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_20 = NULL,u_20 = NULL;
        if(match_cons(t, sym__2))
          {
            t_20 = ATgetArgument(t, 0);
            u_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_20;
        {
          ATerm u_21 (ATerm t)
          {
            t = u_20;
            return(t);
          }
          t = at_end_1_0(u_21, t);
        }
        ;
        LocalPopChoice(s_31);
      }
    else
      {
        t = r_31;
        {
          ATerm j_7 = NULL,k_7 = NULL;
          j_7 = t;
          t = SSL_explode_term(j_7);
          if(match_cons(t, sym__2))
            {
              ATerm t_31 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_31) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              k_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_7;
          t = concat_0_0(t);
        }
      }
    m_20 = t;
    t = SSL_implode_string(m_20);
  }
  return(t);
}
ATerm v_21 (ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21 = NULL;
      i_21 = t;
      t = SSL_is_string(i_21);
      ;
      LocalPopChoice(x_31);
    }
  else
    {
      t = w_31;
      {
        ATerm y_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_21, t);
            ;
            LocalPopChoice(z_31);
          }
        else
          {
            t = y_31;
            {
              ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
              m_21 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_21 = ATgetArgument(t, 0);
                  t = n_21;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_21 = ATgetArgument(t, 0);
                      t = n_21;
                      {
                        ATerm a_32 = t;
                        int b_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm y_4 = NULL,z_4 = NULL;
                            z_4 = t;
                            t = term_c_32;
                            y_4 = t;
                            t = SSL_table_get(y_4, n_21);
                            {
                              ATerm d_32 = t;
                              int e_32 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm r_8 = NULL,a_5 = NULL,c_5 = NULL;
                                  t = eval_config_0_0(t);
                                  r_8 = t;
                                  c_5 = t;
                                  t = term_c_32;
                                  a_5 = t;
                                  t = SSL_table_put(a_5, n_21, r_8);
                                  t = r_8;
                                  ;
                                  LocalPopChoice(e_32);
                                }
                              else
                                {
                                  t = d_32;
                                }
                            }
                            ;
                            LocalPopChoice(b_32);
                          }
                        else
                          {
                            t = a_32;
                            {
                              ATerm d_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL;
                              t = term_f_32;
                              g_5 = t;
                              t = term_h_20;
                              d_5 = t;
                              t = g_5;
                              h_5 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, n_21), term_f_32);
                              f_5 = t;
                              t = SSL_printnl(d_5, f_5);
                              t = n_21;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm s_21 = NULL,t_21 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_21 = ATgetArgument(t, 0);
                          o_21 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_21;
                      t = eval_config_0_0(t);
                      s_21 = t;
                      t = o_21;
                      t = eval_config_0_0(t);
                      t_21 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_21, t_21);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_109 (ATerm), ATerm t)
{
  ATerm g_32 = t;
  int h_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_21 = NULL,a_22 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,n_5 = NULL;
      y_21 = t;
      t = term_i_32;
      k_5 = t;
      t = term_c_32;
      i_5 = t;
      t = k_5;
      n_5 = t;
      t = term_i_32;
      j_5 = t;
      t = SSL_table_get(i_5, j_5);
      {
        ATerm j_32 = t;
        int k_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_9 = NULL,o_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL;
            t = eval_config_0_0(t);
            f_9 = t;
            r_5 = t;
            t = term_c_32;
            o_5 = t;
            t = r_5;
            s_5 = t;
            t = term_i_32;
            q_5 = t;
            t = SSL_table_put(o_5, q_5, f_9);
            t = f_9;
            ;
            LocalPopChoice(k_32);
          }
        else
          {
            t = j_32;
          }
        a_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_22, term_l_32);
        t = geq_0_0(t);
        t = y_21;
        t = r_109(t);
      }
      ;
      LocalPopChoice(h_32);
    }
  else
    {
      t = g_32;
    }
  return(t);
}
ATerm w_21 (ATerm t)
{
  ATerm c_22 = NULL;
  c_22 = t;
  if(match_string(t, "-k"))
    {
      t = c_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_22;
    }
  return(t);
}
ATerm x_21 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,t_5 = NULL,u_5 = NULL,w_5 = NULL,x_5 = NULL;
  d_22 = t;
  t = SSL_string_to_int(d_22);
  e_22 = t;
  w_5 = t;
  t = term_c_32;
  t_5 = t;
  t = w_5;
  x_5 = t;
  t = term_m_32;
  u_5 = t;
  t = SSL_table_put(t_5, u_5, e_22);
  t = d_22;
  return(t);
}
ATerm z_21 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_21, x_21, z_21, t);
  return(t);
}
ATerm b_22 (ATerm t)
{
  ATerm g_22 = NULL;
  g_22 = t;
  if(match_string(t, "-S"))
    {
      t = g_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_22;
    }
  return(t);
}
ATerm f_22 (ATerm t)
{
  ATerm y_5 = NULL,a_6 = NULL,b_6 = NULL,e_6 = NULL,f_6 = NULL,h_6 = NULL;
  e_6 = t;
  t = term_c_32;
  y_5 = t;
  t = e_6;
  f_6 = t;
  t = term_i_32;
  a_6 = t;
  t = f_6;
  h_6 = t;
  t = term_o_32;
  b_6 = t;
  t = SSL_table_put(y_5, a_6, b_6);
  t = term_p_32;
  return(t);
}
ATerm j_22 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm k_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_22 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,m_6 = NULL;
  h_22 = t;
  t = SSL_string_to_int(h_22);
  i_22 = t;
  k_6 = t;
  t = term_c_32;
  i_6 = t;
  t = k_6;
  m_6 = t;
  t = term_i_32;
  j_6 = t;
  t = SSL_table_put(i_6, j_6, i_22);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_22);
  return(t);
}
ATerm p_22 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm r_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_22 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL;
  s_6 = t;
  t = term_c_32;
  n_6 = t;
  t = s_6;
  t_6 = t;
  t = term_s_32;
  o_6 = t;
  t = t_6;
  u_6 = t;
  t = term_n_16;
  p_6 = t;
  t = SSL_table_put(n_6, o_6, p_6);
  t = term_t_32;
  return(t);
}
ATerm v_22 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_22, f_22, j_22, t);
      ;
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      {
        ATerm x_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_22, o_22, p_22, t);
            ;
            LocalPopChoice(y_32);
          }
        else
          {
            t = x_32;
            t = Option_3_0(r_22, u_22, v_22, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_22 = NULL;
      t = term_n_16;
      t = d_0(t);
      n_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_32, term_a_33, n_22);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm q_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_22 = ATgetFirst((ATermList) t);
          m_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_22;
      t = a_0(t);
      t = term_n_16;
      t = c_0(t);
      q_22 = t;
      t = (ATerm) ATinsert(CheckATermList(m_22), q_22);
    }
  return(t);
}
ATerm a_23 (ATerm t)
{
  ATerm s_22 = NULL;
  s_22 = t;
  if(match_string(t, "-o"))
    {
      t = s_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_22;
    }
  return(t);
}
ATerm b_23 (ATerm t)
{
  ATerm t_22 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,d_7 = NULL;
  t_22 = t;
  z_6 = t;
  t = term_c_32;
  x_6 = t;
  t = z_6;
  d_7 = t;
  t = term_b_33;
  y_6 = t;
  t = SSL_table_put(x_6, y_6, t_22);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_22);
  return(t);
}
ATerm c_23 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_23, b_23, c_23, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,e_7 = NULL,f_7 = NULL;
  if(match_cons(t, sym__3))
    {
      w_22 = ATgetArgument(t, 0);
      x_22 = ATgetArgument(t, 1);
      y_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_22, x_22);
  {
    ATerm d_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_33 = ATgetArgument(t, 0);
            ATerm g_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_22, x_22);
        ;
        LocalPopChoice(e_33);
      }
    else
      {
        t = d_33;
        t = (ATerm) ATempty;
      }
    z_22 = t;
    f_7 = t;
    t = (ATerm) ATinsert(CheckATermList(z_22), y_22);
    e_7 = t;
    t = SSL_table_put(w_22, x_22, e_7);
    t = (ATerm) ATmakeAppl(sym__3, w_22, x_22, y_22);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_23 = NULL;
      t = term_n_16;
      t = j_0(t);
      l_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_32, term_a_33, l_23);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm p_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_23 = ATgetFirst((ATermList) t);
          i_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_23 = ATgetFirst((ATermList) t);
          k_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_23;
      t = g_0(t);
      t = j_23;
      t = h_0(t);
      p_23 = t;
      t = (ATerm) ATinsert(CheckATermList(k_23), p_23);
    }
  return(t);
}
ATerm d_23 (ATerm t)
{
  ATerm r_23 = NULL;
  r_23 = t;
  if(match_string(t, "-i"))
    {
      t = r_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_23;
    }
  return(t);
}
ATerm e_23 (ATerm t)
{
  ATerm s_23 = NULL,i_7 = NULL,l_7 = NULL,n_7 = NULL,o_7 = NULL;
  s_23 = t;
  n_7 = t;
  t = term_c_32;
  i_7 = t;
  t = n_7;
  o_7 = t;
  t = term_h_33;
  l_7 = t;
  t = SSL_table_put(i_7, l_7, s_23);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_23);
  return(t);
}
ATerm f_23 (ATerm t)
{
  t = term_i_33;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_23, e_23, f_23, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_23 = NULL,x_7 = NULL,p_7 = NULL,s_7 = NULL,t_7 = NULL,w_7 = NULL,z_7 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_16;
  t = whoami_0_0(t);
  t_23 = t;
  t_7 = t;
  t = term_h_20;
  p_7 = t;
  t = t_7;
  w_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_33), t_23);
  s_7 = t;
  t = SSL_printnl(p_7, s_7);
  z_7 = t;
  t = term_k_26;
  x_7 = t;
  t = SSL_exit(x_7);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL;
  t = term_k_33;
  e_8 = t;
  t = term_c_32;
  c_8 = t;
  t = e_8;
  f_8 = t;
  t = term_k_33;
  d_8 = t;
  t = SSL_table_get(c_8, d_8);
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_9 = NULL,h_8 = NULL,i_8 = NULL,k_8 = NULL,l_8 = NULL;
        t = eval_config_0_0(t);
        q_9 = t;
        k_8 = t;
        t = term_c_32;
        h_8 = t;
        t = k_8;
        l_8 = t;
        t = term_k_33;
        i_8 = t;
        t = SSL_table_put(h_8, i_8, q_9);
        t = q_9;
        ;
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm t)
{
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_97(t);
      ;
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      {
        ATerm w_23 = NULL,x_23 = NULL,a_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_23 = ATgetFirst((ATermList) t);
            x_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_23;
        t = foldr_2_0(o_97, p_97, t);
        a_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_23, a_24);
        t = p_97(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm g_23 (ATerm t)
{
  t = term_o_32;
  return(t);
}
ATerm m_23 (ATerm t)
{
  ATerm z_9 = NULL,b_10 = NULL;
  if(match_cons(t, sym__2))
    {
      z_9 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(z_9, b_10);
        ;
        LocalPopChoice(q_33);
      }
    else
      {
        t = p_33;
        t = SSL_addr(z_9, b_10);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_24 = NULL,r_9 = NULL,w_9 = NULL;
  t = times_0_0(t);
  r_9 = t;
  t = SSL_explode_term(r_9);
  if(match_cons(t, sym__2))
    {
      ATerm r_33 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9;
  t = foldr_2_0(g_23, m_23, t);
  d_24 = t;
  t = SSL_TicksToSeconds(d_24);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  p_24 = t;
  if(match_cons(t, sym__2))
    {
      q_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_24;
        if((q_24 != t))
          {
            _fail(t);
          }
        t = p_24;
        ;
        LocalPopChoice(t_33);
      }
    else
      {
        t = s_33;
        t = p_24;
        {
          ATerm u_33 = t;
          int v_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_24, r_24);
              ;
              LocalPopChoice(v_33);
            }
          else
            {
              t = u_33;
              t = SSL_gtr(q_24, r_24);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_24, r_24);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_109 (ATerm), ATerm t)
{
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_24 = NULL,w_24 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,s_8 = NULL;
      u_24 = t;
      t = term_i_32;
      q_8 = t;
      t = term_c_32;
      o_8 = t;
      t = q_8;
      s_8 = t;
      t = term_i_32;
      p_8 = t;
      t = SSL_table_get(o_8, p_8);
      {
        ATerm y_33 = t;
        int z_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_10 = NULL,t_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL;
            t = eval_config_0_0(t);
            s_10 = t;
            w_8 = t;
            t = term_c_32;
            t_8 = t;
            t = w_8;
            x_8 = t;
            t = term_i_32;
            v_8 = t;
            t = SSL_table_put(t_8, v_8, s_10);
            t = s_10;
            ;
            LocalPopChoice(z_33);
          }
        else
          {
            t = y_33;
          }
        w_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_24, term_k_26);
        t = geq_0_0(t);
        t = u_24;
        t = q_109(t);
      }
      ;
      LocalPopChoice(x_33);
    }
  else
    {
      t = w_33;
    }
  return(t);
}
ATerm n_23 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,z_8 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
  t = run_time_0_0(t);
  y_24 = t;
  t = term_n_16;
  t = whoami_0_0(t);
  z_24 = t;
  d_9 = t;
  t = term_h_20;
  z_8 = t;
  t = d_9;
  e_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_34), y_24), term_a_34), z_24);
  c_9 = t;
  t = SSL_printnl(z_8, c_9);
  t = (ATerm) ATmakeAppl(sym__2, term_h_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_34), y_24), term_a_34), z_24));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_23, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL;
  t = report_run_time_0_0(t);
  l_9 = t;
  t = term_o_32;
  k_9 = t;
  t = SSL_exit(k_9);
  return(t);
}
ATerm o_23 (ATerm t)
{
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
      {
        ATerm e_34 = t;
        int f_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(f_34);
          }
        else
          {
            t = e_34;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_112 (ATerm), ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_9 = NULL,p_9 = NULL,s_9 = NULL,x_9 = NULL;
      t = term_i_34;
      s_9 = t;
      t = term_c_32;
      o_9 = t;
      t = s_9;
      x_9 = t;
      t = term_i_34;
      p_9 = t;
      t = SSL_table_get(o_9, p_9);
      {
        ATerm j_34 = t;
        int k_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_10 = NULL,y_9 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
            t = eval_config_0_0(t);
            x_10 = t;
            d_10 = t;
            t = term_c_32;
            y_9 = t;
            t = d_10;
            e_10 = t;
            t = term_i_34;
            c_10 = t;
            t = SSL_table_put(y_9, c_10, x_10);
            t = x_10;
            ;
            LocalPopChoice(k_34);
          }
        else
          {
            t = j_34;
          }
      }
      ;
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      t = fetch_1_0(o_23, t);
    }
  t = g_112(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_25 = ATgetFirst((ATermList) t);
      c_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_25 = NULL,h_25 = NULL;
        t = c_25;
        t = f_0(t);
        g_25 = t;
        t = b_25;
        t = e_0(t);
        h_25 = t;
        t = c_25;
        {
          ATerm q_23 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(g_25), h_25);
            return(t);
          }
          t = reverse_acc_2_0(e_0, q_23, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_16;
      t = f_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,f_10 = NULL,g_10 = NULL;
  l_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_25);
  i_25 = t;
  t = j_25;
  t = g_84(t);
  k_25 = t;
  g_10 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_25);
  f_10 = t;
  t = SSLsetAnnotations(f_10, i_25);
  return(t);
}
ATerm u_23 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm v_23 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_23 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_25), term_l_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,y_10 = NULL;
  ATerm m_34 = t;
  int n_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
      t = term_k_33;
      k_10 = t;
      t = term_c_32;
      h_10 = t;
      t = k_10;
      l_10 = t;
      t = term_k_33;
      j_10 = t;
      t = SSL_table_get(h_10, j_10);
      {
        ATerm o_34 = t;
        int p_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_11 = NULL,o_10 = NULL,p_10 = NULL,r_10 = NULL,t_10 = NULL;
            t = eval_config_0_0(t);
            h_11 = t;
            r_10 = t;
            t = term_c_32;
            o_10 = t;
            t = r_10;
            t_10 = t;
            t = term_k_33;
            p_10 = t;
            t = SSL_table_put(o_10, p_10, h_11);
            t = h_11;
            ;
            LocalPopChoice(p_34);
          }
        else
          {
            t = o_34;
          }
      }
      ;
      LocalPopChoice(n_34);
    }
  else
    {
      t = m_34;
      t = fetch_1_0(u_23, t);
    }
  t = term_q_34;
  t = echo_0_0(t);
  w_10 = t;
  t = term_z_32;
  u_10 = t;
  t = w_10;
  y_10 = t;
  t = term_a_33;
  v_10 = t;
  t = SSL_table_get(u_10, v_10);
  t = reverse_acc_2_0(_id, v_23, t);
  t = map_1_0(y_23, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm h_84 (ATerm), ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,z_10 = NULL,b_11 = NULL;
  s_25 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      q_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_25);
  p_25 = t;
  t = q_25;
  t = h_84(t);
  r_25 = t;
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_25);
  z_10 = t;
  t = SSLsetAnnotations(z_10, p_25);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,f_11 = NULL,g_11 = NULL;
  y_25 = t;
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_25;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_34 = ATgetFirst((ATermList) t);
                ATerm u_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_25;
          }
        ;
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        t = (ATerm) ATinsert(ATempty, y_25);
      }
    z_25 = t;
    g_11 = t;
    t = term_t_30;
    f_11 = t;
    t = SSL_printnl(f_11, z_25);
    t = y_25;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
  t = term_k_33;
  k_11 = t;
  t = term_c_32;
  i_11 = t;
  t = k_11;
  l_11 = t;
  t = term_k_33;
  j_11 = t;
  t = SSL_table_get(i_11, j_11);
  {
    ATerm v_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
        t = eval_config_0_0(t);
        m_11 = t;
        p_11 = t;
        t = term_c_32;
        n_11 = t;
        t = p_11;
        q_11 = t;
        t = term_k_33;
        o_11 = t;
        t = SSL_table_put(n_11, o_11, m_11);
        t = m_11;
        ;
        LocalPopChoice(w_34);
      }
    else
      {
        t = v_34;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm z_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_24 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,x_11 = NULL;
  u_11 = t;
  t = term_c_32;
  r_11 = t;
  t = u_11;
  v_11 = t;
  t = term_x_34;
  s_11 = t;
  t = v_11;
  x_11 = t;
  t = term_n_16;
  t_11 = t;
  t = SSL_table_put(r_11, s_11, t_11);
  t = term_y_34;
  return(t);
}
ATerm c_24 (ATerm t)
{
  t = term_z_34;
  return(t);
}
ATerm e_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_24 (ATerm t)
{
  ATerm y_11 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,k_12 = NULL,l_12 = NULL,p_12 = NULL,r_12 = NULL,u_12 = NULL;
  d_12 = t;
  t = term_c_32;
  y_11 = t;
  t = d_12;
  f_12 = t;
  t = term_x_34;
  b_12 = t;
  t = f_12;
  g_12 = t;
  t = term_n_16;
  c_12 = t;
  t = SSL_table_put(y_11, b_12, c_12);
  p_12 = t;
  t = term_c_32;
  h_12 = t;
  t = p_12;
  r_12 = t;
  t = term_a_35;
  k_12 = t;
  t = r_12;
  u_12 = t;
  t = term_n_16;
  l_12 = t;
  t = SSL_table_put(h_12, k_12, l_12);
  t = term_b_35;
  return(t);
}
ATerm g_24 (ATerm t)
{
  t = term_c_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_23, b_24, c_24, t);
      ;
      LocalPopChoice(e_35);
    }
  else
    {
      t = d_35;
      t = Option_3_0(e_24, f_24, g_24, t);
    }
  return(t);
}
ATerm h_24 (ATerm t)
{
  ATerm f_26 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,a_13 = NULL;
  f_26 = t;
  x_12 = t;
  t = term_c_32;
  v_12 = t;
  t = x_12;
  a_13 = t;
  t = term_k_33;
  w_12 = t;
  t = SSL_table_put(v_12, w_12, f_26);
  t = (ATerm) ATmakeAppl(sym_Program_1, f_26);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_114 (ATerm), ATerm t)
{
  ATerm e_26 = NULL;
  e_26 = t;
  {
    ATerm f_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_35;
        t = j_114(t);
        ;
        LocalPopChoice(g_35);
      }
    else
      {
        t = f_35;
      }
    t = e_26;
    {
      ATerm i_24 (ATerm t)
      {
        ATerm i_35 = t;
        int j_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_35 = t;
            int l_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(l_35);
              }
            else
              {
                t = k_35;
                t = j_114(t);
                t = Cons_2_0(_id, i_24, t);
              }
            ;
            LocalPopChoice(j_35);
          }
        else
          {
            t = i_35;
            {
              ATerm h_26 = NULL,i_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_26 = ATgetFirst((ATermList) t);
                  i_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_26), (ATerm) ATmakeAppl(sym_Undefined_1, h_26));
            }
          }
        return(t);
      }
      t = Cons_2_0(h_24, i_24, t);
    }
  }
  return(t);
}
ATerm k_24 (ATerm t)
{
  ATerm u_26 = NULL;
  u_26 = t;
  if(match_string(t, "--help"))
    {
      t = u_26;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_26;
        }
    }
  return(t);
}
ATerm l_24 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
  m_13 = t;
  t = term_c_32;
  j_13 = t;
  t = m_13;
  n_13 = t;
  t = term_i_34;
  k_13 = t;
  t = n_13;
  o_13 = t;
  t = term_n_16;
  l_13 = t;
  t = SSL_table_put(j_13, k_13, l_13);
  t = term_m_35;
  return(t);
}
ATerm m_24 (ATerm t)
{
  t = term_n_35;
  return(t);
}
ATerm n_24 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_114 (ATerm), ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,t_26 = NULL,b_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,h_13 = NULL,i_13 = NULL,f_15 = NULL,g_15 = NULL;
  p_26 = t;
  f_13 = t;
  t = term_z_32;
  b_13 = t;
  t = f_13;
  h_13 = t;
  t = term_a_33;
  d_13 = t;
  t = h_13;
  i_13 = t;
  t = (ATerm) ATempty;
  e_13 = t;
  t = SSL_table_put(b_13, d_13, e_13);
  t = p_26;
  {
    ATerm j_24 (ATerm t)
    {
      ATerm o_35 = t;
      int p_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_114(t);
          ;
          LocalPopChoice(p_35);
        }
      else
        {
          t = o_35;
          {
            ATerm q_35 = t;
            int r_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_24, l_24, m_24, t);
                ;
                LocalPopChoice(r_35);
              }
            else
              {
                t = q_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_24, t);
    {
      ATerm s_35 = t;
      int t_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_26 = NULL;
          z_26 = t;
          {
            ATerm u_35 = t;
            int v_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_13 = NULL,z_13 = NULL;
                t = z_26;
                {
                  ATerm w_35 = t;
                  int x_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
                      t = term_i_34;
                      r_13 = t;
                      t = term_c_32;
                      p_13 = t;
                      t = r_13;
                      s_13 = t;
                      t = term_i_34;
                      q_13 = t;
                      t = SSL_table_get(p_13, q_13);
                      {
                        ATerm y_35 = t;
                        int z_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm e_12 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
                            t = eval_config_0_0(t);
                            e_12 = t;
                            w_13 = t;
                            t = term_c_32;
                            u_13 = t;
                            t = w_13;
                            x_13 = t;
                            t = term_i_34;
                            v_13 = t;
                            t = SSL_table_put(u_13, v_13, e_12);
                            t = e_12;
                            ;
                            LocalPopChoice(z_35);
                          }
                        else
                          {
                            t = y_35;
                          }
                      }
                      ;
                      LocalPopChoice(x_35);
                    }
                  else
                    {
                      t = w_35;
                      t = fetch_1_0(n_24, t);
                    }
                  t = z_26;
                  t = default_system_usage_0_0(t);
                  z_13 = t;
                  t = term_o_32;
                  y_13 = t;
                  t = SSL_exit(y_13);
                }
                ;
                LocalPopChoice(v_35);
              }
            else
              {
                t = u_35;
                {
                  ATerm a_14 = NULL,b_14 = NULL,d_14 = NULL,e_14 = NULL,q_14 = NULL,r_14 = NULL;
                  t = term_x_34;
                  d_14 = t;
                  t = term_c_32;
                  a_14 = t;
                  t = d_14;
                  e_14 = t;
                  t = term_x_34;
                  b_14 = t;
                  t = SSL_table_get(a_14, b_14);
                  {
                    ATerm a_36 = t;
                    int b_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_12 = NULL,f_14 = NULL,g_14 = NULL,n_14 = NULL,o_14 = NULL;
                        t = eval_config_0_0(t);
                        q_12 = t;
                        n_14 = t;
                        t = term_c_32;
                        f_14 = t;
                        t = n_14;
                        o_14 = t;
                        t = term_x_34;
                        g_14 = t;
                        t = SSL_table_put(f_14, g_14, q_12);
                        t = q_12;
                        ;
                        LocalPopChoice(b_36);
                      }
                    else
                      {
                        t = a_36;
                      }
                    t = z_26;
                    t = default_system_about_0_0(t);
                    r_14 = t;
                    t = term_o_32;
                    q_14 = t;
                    t = SSL_exit(q_14);
                  }
                }
              }
          }
          ;
          LocalPopChoice(t_35);
        }
      else
        {
          t = s_35;
          {
            ATerm c_36 = t;
            int d_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_14 = NULL,x_14 = NULL,y_14 = NULL,a_15 = NULL,d_15 = NULL,e_15 = NULL;
                ATerm o_24 (ATerm t)
                {
                  ATerm s_24 (ATerm t)
                  {
                    if(((q_26 != NULL) && (q_26 != t)))
                      _fail(t);
                    else
                      q_26 = t;
                    return(t);
                  }
                  t = Undefined_1_0(s_24, t);
                  return(t);
                }
                t = fetch_1_0(o_24, t);
                y_14 = t;
                t = term_h_20;
                s_14 = t;
                t = y_14;
                a_15 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_26)), term_e_36);
                x_14 = t;
                t = SSL_printnl(s_14, x_14);
                t = (ATerm) ATmakeAppl(sym__2, term_h_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_26)), term_e_36));
                t = default_system_usage_0_0(t);
                e_15 = t;
                t = term_k_26;
                d_15 = t;
                t = SSL_exit(d_15);
                ;
                LocalPopChoice(d_36);
              }
            else
              {
                t = c_36;
              }
          }
        }
      t_26 = t;
      g_15 = t;
      t = term_z_32;
      f_15 = t;
      t = SSL_table_destroy(f_15);
      t = t_26;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_112 (ATerm), ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm t)
{
  ATerm c_27 = NULL,h_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,q_15 = NULL,r_15 = NULL;
  t = parse_options_1_0(i_112, t);
  c_27 = t;
  m_15 = t;
  t = term_f_36;
  h_15 = t;
  t = SSL_table_create(h_15);
  q_15 = t;
  t = term_f_36;
  n_15 = t;
  t = q_15;
  r_15 = t;
  t = term_g_36;
  o_15 = t;
  t = SSL_table_put(n_15, o_15, c_27);
  t = c_27;
  t = k_112(t);
  {
    ATerm h_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_112, t);
        ;
        LocalPopChoice(i_36);
      }
    else
      {
        t = h_36;
        {
          ATerm j_36 = t;
          int k_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_112(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_36);
            }
          else
            {
              t = j_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_24 (ATerm t)
{
  t = if_verbose2_1_0(f_25, t);
  return(t);
}
ATerm a_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_25 (ATerm t)
{
  ATerm s_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL;
  y_15 = t;
  t = term_c_32;
  s_15 = t;
  t = y_15;
  z_15 = t;
  t = term_l_36;
  w_15 = t;
  t = z_15;
  a_16 = t;
  t = term_n_16;
  x_15 = t;
  t = SSL_table_put(s_15, w_15, x_15);
  t = term_m_36;
  return(t);
}
ATerm e_25 (ATerm t)
{
  t = term_n_36;
  return(t);
}
ATerm f_25 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,b_17 = NULL,c_17 = NULL,h_17 = NULL,i_17 = NULL;
  d_27 = t;
  t = term_k_33;
  d_16 = t;
  t = term_c_32;
  b_16 = t;
  t = d_16;
  e_16 = t;
  t = term_k_33;
  c_16 = t;
  t = SSL_table_get(b_16, c_16);
  {
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_12 = NULL,g_16 = NULL,h_16 = NULL,t_16 = NULL,u_16 = NULL;
        t = eval_config_0_0(t);
        z_12 = t;
        t_16 = t;
        t = term_c_32;
        g_16 = t;
        t = t_16;
        u_16 = t;
        t = term_k_33;
        h_16 = t;
        t = SSL_table_put(g_16, h_16, z_12);
        t = z_12;
        ;
        LocalPopChoice(p_36);
      }
    else
      {
        t = o_36;
      }
    e_27 = t;
    h_17 = t;
    t = term_h_20;
    b_17 = t;
    t = h_17;
    i_17 = t;
    t = (ATerm) ATinsert(ATempty, e_27);
    c_17 = t;
    t = SSL_printnl(b_17, c_17);
    t = d_27;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t)
{
  ATerm t_24 (ATerm t)
  {
    ATerm q_36 = t;
    int r_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_111(t);
        ;
        LocalPopChoice(r_36);
      }
    else
      {
        t = q_36;
        {
          ATerm s_36 = t;
          int t_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(t_36);
            }
          else
            {
              t = s_36;
              {
                ATerm u_36 = t;
                int v_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(v_36);
                  }
                else
                  {
                    t = u_36;
                    {
                      ATerm w_36 = t;
                      int x_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(a_25, d_25, e_25, t);
                          ;
                          LocalPopChoice(x_36);
                        }
                      else
                        {
                          t = w_36;
                          {
                            ATerm y_36 = t;
                            int z_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(z_36);
                              }
                            else
                              {
                                t = y_36;
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
  ATerm x_24 (ATerm t)
  {
    ATerm f_27 = NULL,g_27 = NULL,g_13 = NULL;
    f_27 = t;
    {
      ATerm a_37 = t;
      int b_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_25 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_27 != NULL) && (g_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(m_25, t);
          ;
          LocalPopChoice(b_37);
        }
      else
        {
          t = a_37;
          t = term_c_37;
          g_27 = t;
        }
      t = not_null(g_27);
      t = ReadFromFile_0_0(t);
      g_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_27, g_13);
      t = apply_strategy_1_0(r_111, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(t_24, t_111, v_24, x_24, t);
  return(t);
}
ATerm n_25 (ATerm t)
{
  t = _2_0(_id, t_25, t);
  return(t);
}
ATerm t_25 (ATerm t)
{
  t = Specification_1_0(u_25, t);
  return(t);
}
ATerm u_25 (ATerm t)
{
  t = Cons_2_0(v_25, w_25, t);
  return(t);
}
ATerm v_25 (ATerm t)
{
  t = Signature_1_0(_id, t);
  return(t);
}
ATerm w_25 (ATerm t)
{
  t = Cons_2_0(x_25, a_26, t);
  return(t);
}
ATerm x_25 (ATerm t)
{
  t = Strategies_1_0(b_26, t);
  return(t);
}
ATerm a_26 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm b_26 (ATerm t)
{
  t = map_1_0(c_26, t);
  return(t);
}
ATerm c_26 (ATerm t)
{
  t = dead_var_elim_0_0(t);
  t = topdown_1_0(d_26, t);
  return(t);
}
ATerm d_26 (ATerm t)
{
  ATerm d_37 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_27 = NULL,p_27 = NULL;
      o_27 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_27);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm f_37 = ATgetFirst((ATermList) t);
          ATerm g_37 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(g_37) != AT_LIST) || !(ATisEmpty(g_37))))
            _fail(t);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, p_27);
      ;
      LocalPopChoice(e_37);
    }
  else
    {
      t = d_37;
    }
  return(t);
}
ATerm dead_var_elim_io_0_0 (ATerm t)
{
  t = iowrap_3_0(n_25, _fail, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = dead_var_elim_io_0_0(t);
  return(t);
}
