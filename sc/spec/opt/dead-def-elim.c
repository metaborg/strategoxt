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
Symbol sym_RDefT_4;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Rec_2;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
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
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
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
ATerm term_q_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_v_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_e_37;
ATerm term_z_36;
ATerm term_w_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_w_34;
ATerm term_t_34;
ATerm term_q_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_h_33;
ATerm term_e_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_v_31;
ATerm term_r_31;
ATerm term_k_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_x_27;
ATerm term_k_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_d_26;
ATerm term_t_19;
ATerm term_c_4;
void init_constant_terms (void)
{
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_28);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_35);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym__3, term_q_34, term_l_37, term_c_4);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm DefDead_0_0 (ATerm);
ATerm filter_1_0 (ATerm q_100 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm DeclareNotDead_0_0 (ATerm);
ATerm i_19 (ATerm);
ATerm DeclareDefDead_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm j_100 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm i_100 (ATerm), ATerm);
ATerm scope_2_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm);
ATerm m_19 (ATerm);
ATerm r_19 (ATerm);
ATerm s_19 (ATerm);
ATerm u_19 (ATerm);
ATerm local_dead_def_elim_0_0 (ATerm);
ATerm map_1_0 (ATerm b_94 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm);
ATerm Let_2_0 (ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm);
ATerm v_19 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm union_1_0 (ATerm p_96 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm);
ATerm e_20 (ATerm);
ATerm f_20 (ATerm);
ATerm g_20 (ATerm);
ATerm h_20 (ATerm);
ATerm i_20 (ATerm);
ATerm j_20 (ATerm);
ATerm k_20 (ATerm);
ATerm free_vars_3_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm diff_1_0 (ATerm k_96 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm p_92 (ATerm), ATerm);
ATerm m_20 (ATerm);
ATerm o_20 (ATerm);
ATerm p_20 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm u_20 (ATerm);
ATerm v_20 (ATerm);
ATerm w_20 (ATerm);
ATerm y_20 (ATerm);
ATerm z_20 (ATerm);
ATerm c_21 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNext_3_0 (ATerm z_116 (ATerm), ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm);
ATerm for_3_0 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm);
ATerm f_21 (ATerm);
ATerm h_21 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm);
ATerm assert_1_0 (ATerm m_100 (ATerm), ATerm);
ATerm j_21 (ATerm);
ATerm RegisterDefinition_0_0 (ATerm);
ATerm m_21 (ATerm);
ATerm q_21 (ATerm);
ATerm v_21 (ATerm);
ATerm w_21 (ATerm);
ATerm a_22 (ATerm);
ATerm b_22 (ATerm);
ATerm d_22 (ATerm);
ATerm e_22 (ATerm);
ATerm dead_def_elim_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm n_73 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm j_73 (ATerm), ATerm k_73 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm s_73 (ATerm), ATerm);
ATerm _2_0 (ATerm u_68 (ATerm), ATerm v_68 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm t_109 (ATerm), ATerm);
ATerm k_22 (ATerm);
ATerm l_22 (ATerm);
ATerm o_22 (ATerm);
ATerm p_22 (ATerm);
ATerm q_22 (ATerm);
ATerm t_22 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm v_112 (ATerm), ATerm);
ATerm f_18 (ATerm z_17, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm u_22 (ATerm);
ATerm v_22 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_94 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_94 (ATerm), ATerm);
ATerm x_22 (ATerm);
ATerm y_22 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm a_23 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_111 (ATerm), ATerm);
ATerm g_23 (ATerm);
ATerm h_23 (ATerm);
ATerm i_23 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm k_23 (ATerm);
ATerm o_23 (ATerm);
ATerm p_23 (ATerm);
ATerm s_23 (ATerm);
ATerm t_23 (ATerm);
ATerm v_23 (ATerm);
ATerm w_23 (ATerm);
ATerm y_23 (ATerm);
ATerm z_23 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm a_24 (ATerm);
ATerm b_24 (ATerm);
ATerm c_24 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm d_24 (ATerm);
ATerm e_24 (ATerm);
ATerm f_24 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm g_24 (ATerm);
ATerm h_24 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_111 (ATerm), ATerm);
ATerm l_24 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm m_24 (ATerm);
ATerm need_help_1_0 (ATerm t_113 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm b_86 (ATerm), ATerm);
ATerm q_24 (ATerm);
ATerm t_24 (ATerm);
ATerm w_24 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm c_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm x_24 (ATerm);
ATerm y_24 (ATerm);
ATerm f_25 (ATerm);
ATerm g_25 (ATerm);
ATerm m_25 (ATerm);
ATerm n_25 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm o_25 (ATerm);
ATerm parse_options_p__1_0 (ATerm w_115 (ATerm), ATerm);
ATerm t_25 (ATerm);
ATerm u_25 (ATerm);
ATerm v_25 (ATerm);
ATerm y_25 (ATerm);
ATerm parse_options_1_0 (ATerm v_115 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm);
ATerm f_26 (ATerm);
ATerm l_26 (ATerm);
ATerm m_26 (ATerm);
ATerm n_26 (ATerm);
ATerm o_26 (ATerm);
ATerm iowrap_3_0 (ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm);
ATerm r_26 (ATerm);
ATerm x_26 (ATerm);
ATerm y_26 (ATerm);
ATerm z_26 (ATerm);
ATerm a_27 (ATerm);
ATerm b_27 (ATerm);
ATerm c_27 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_0 = NULL,k_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL;
  i_0 = t;
  t = term_c_4;
  t = whoami_0_0(t);
  k_0 = t;
  o_0 = t;
  t = term_t_19;
  m_0 = t;
  t = o_0;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_27), k_0), term_d_26);
  n_0 = t;
  t = SSL_printnl(m_0, n_0);
  r_0 = t;
  t = term_e_27;
  q_0 = t;
  t = SSL_exit(q_0);
  t = i_0;
  return(t);
}
ATerm DefDead_0_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL;
  c_1 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      d_1 = ATgetArgument(t, 0);
      {
        ATerm f_27 = ATgetArgument(t, 1);
      }
      {
        ATerm g_27 = ATgetArgument(t, 2);
      }
      {
        ATerm h_27 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_2 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL;
        t = term_k_27;
        u_0 = t;
        t = term_k_27;
        s_0 = t;
        t = u_0;
        v_0 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, d_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
        t_0 = t;
        t = SSL_table_get(s_0, t_0);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_2 = ATgetFirst((ATermList) t);
            {
              ATerm l_27 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = e_2;
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        {
          ATerm q_2 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL;
          t = term_k_27;
          y_0 = t;
          t = term_k_27;
          w_0 = t;
          t = y_0;
          z_0 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, d_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
          x_0 = t;
          t = SSL_table_get(w_0, x_0);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_2 = ATgetFirst((ATermList) t);
              {
                ATerm m_27 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = q_2;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm n_27 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_27) != ATmakeSymbol("f_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_c_4;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm q_100 (ATerm), ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm q_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_19 (ATerm t)
            {
              t = filter_1_0(q_100, t);
              return(t);
            }
            t = Cons_2_0(q_100, h_19, t);
            ;
            LocalPopChoice(r_27);
          }
        else
          {
            t = q_27;
            {
              ATerm o_1 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm s_27 = ATgetFirst((ATermList) t);
                  o_1 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = o_1;
              t = filter_1_0(q_100, t);
            }
          }
      }
    }
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL,a_1 = NULL,b_1 = NULL;
  if(match_cons(t, sym__3))
    {
      q_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
      s_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(q_1, r_1);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_27 = ATgetFirst((ATermList) t);
      t_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  b_1 = t;
  t = (ATerm) ATinsert(CheckATermList(t_1), s_1);
  a_1 = t;
  t = SSL_table_put(q_1, r_1, a_1);
  t = (ATerm) ATmakeAppl(sym__3, q_1, r_1, s_1);
  return(t);
}
ATerm DeclareNotDead_0_0 (ATerm t)
{
  ATerm z_1 = NULL,b_2 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm u_27 = ATgetArgument(t, 0);
      if(match_cons(u_27, sym_SVar_1))
        {
          z_1 = ATgetArgument(u_27, 0);
        }
      else
        _fail(t);
      {
        ATerm v_27 = ATgetArgument(t, 1);
      }
      {
        ATerm w_27 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_27, (ATerm)ATmakeAppl(sym_SDefT_4, z_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_x_27);
  t = table_replace_0_0(t);
  t = b_2;
  return(t);
}
ATerm i_19 (ATerm t)
{
  t = term_k_27;
  return(t);
}
ATerm DeclareDefDead_0_0 (ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      c_2 = ATgetArgument(t, 0);
      {
        ATerm y_27 = ATgetArgument(t, 1);
      }
      {
        ATerm z_27 = ATgetArgument(t, 2);
      }
      {
        ATerm a_28 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, c_2, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_c_28);
  t = assert_1_0(i_19, t);
  t = d_2;
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      h_2 = ATgetArgument(t, 0);
      i_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_2, i_2);
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_3 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_28 = ATgetArgument(t, 0);
            ATerm g_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_2, i_2);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_28 = ATgetFirst((ATermList) t);
            a_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_3;
        ;
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        t = (ATerm) ATempty;
      }
    m_2 = t;
    t = SSL_table_put(h_2, i_2, m_2);
    t = (ATerm) ATmakeAppl(sym__2, h_2, i_2);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,n_3 = NULL,o_3 = NULL,g_1 = NULL,h_1 = NULL;
  k_3 = t;
  t = j_100(t);
  l_3 = t;
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_1 = NULL,f_1 = NULL;
        f_1 = t;
        t = term_k_28;
        e_1 = t;
        t = SSL_table_get(l_3, e_1);
        ;
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_3 = ATgetFirst((ATermList) t);
        n_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    h_1 = t;
    t = term_k_28;
    g_1 = t;
    t = SSL_table_put(l_3, g_1, n_3);
    t = o_3;
    {
      ATerm j_19 (ATerm t)
      {
        ATerm p_3 = NULL;
        p_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_3, p_3);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(j_19, t);
      t = k_3;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm t)
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_91(t);
      t = i_91(t);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      t = i_91(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_100 (ATerm), ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,x_3 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL;
  u_3 = t;
  t = i_100(t);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_3, term_k_28);
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 = NULL,j_1 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_28 = ATgetArgument(t, 0);
            ATerm q_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        j_1 = t;
        t = term_k_28;
        i_1 = t;
        t = SSL_table_get(v_3, i_1);
        ;
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        t = (ATerm) ATempty;
      }
    x_3 = t;
    m_1 = t;
    t = term_k_28;
    k_1 = t;
    t = m_1;
    n_1 = t;
    t = (ATerm) ATinsert(CheckATermList(x_3), (ATerm) ATempty);
    l_1 = t;
    t = SSL_table_put(v_3, k_1, l_1);
    t = u_3;
  }
  return(t);
}
ATerm scope_2_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm t)
{
  t = begin_scope_1_0(k_100, t);
  {
    ATerm l_19 (ATerm t)
    {
      t = end_scope_1_0(k_100, t);
      return(t);
    }
    t = restore_always_2_0(l_100, l_19, t);
  }
  return(t);
}
ATerm m_19 (ATerm t)
{
  t = term_k_27;
  return(t);
}
ATerm r_19 (ATerm t)
{
  t = map_1_0(DeclareDefDead_0_0, t);
  return(t);
}
ATerm s_19 (ATerm t)
{
  t = filter_1_0(u_19, t);
  return(t);
}
ATerm u_19 (ATerm t)
{
  ATerm r_28 = t;
  if((PushChoice() == 0))
    {
      t = DefDead_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_28;
    }
  return(t);
}
ATerm local_dead_def_elim_0_0 (ATerm t)
{
  ATerm q_19 (ATerm t)
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Let_2_0(r_19, _id, t);
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        {
          ATerm u_28 = t;
          int v_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = DeclareNotDead_0_0(t);
              ;
              LocalPopChoice(v_28);
            }
          else
            {
              t = u_28;
            }
        }
      }
    t = SRTS_all(local_dead_def_elim_0_0, t);
    {
      ATerm w_28 = t;
      int x_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Let_2_0(s_19, _id, t);
          ;
          LocalPopChoice(x_28);
        }
      else
        {
          t = w_28;
        }
    }
    return(t);
  }
  t = scope_2_0(m_19, q_19, t);
  return(t);
}
ATerm map_1_0 (ATerm b_94 (ATerm), ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
        t = Cons_2_0(b_94, d_4, t);
      }
    return(t);
  }
  t = d_4(t);
  return(t);
}
ATerm Rec_2_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,p_1 = NULL,u_1 = NULL;
  o_4 = t;
  if(match_cons(t, sym_Rec_2))
    {
      k_4 = ATgetArgument(t, 0);
      l_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_4);
  i_4 = t;
  t = k_4;
  t = s_78(t);
  m_4 = t;
  t = l_4;
  t = t_78(t);
  n_4 = t;
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, m_4, n_4);
  p_1 = t;
  t = SSLsetAnnotations(p_1, i_4);
  return(t);
}
ATerm SDefT_4_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,c_5 = NULL,d_5 = NULL,n_5 = NULL,o_5 = NULL,v_1 = NULL,w_1 = NULL;
  o_5 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      v_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
      x_4 = ATgetArgument(t, 2);
      y_4 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_5);
  u_4 = t;
  t = v_4;
  t = n_80(t);
  z_4 = t;
  t = w_4;
  t = o_80(t);
  c_5 = t;
  t = x_4;
  t = p_80(t);
  d_5 = t;
  t = y_4;
  t = q_80(t);
  n_5 = t;
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, z_4, c_5, d_5, n_5);
  v_1 = t;
  t = SSLsetAnnotations(v_1, u_4);
  return(t);
}
ATerm SDef_3_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,z_5 = NULL,a_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,x_1 = NULL,y_1 = NULL;
  j_6 = t;
  if(match_cons(t, sym_SDef_3))
    {
      v_5 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
      z_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_6);
  u_5 = t;
  t = v_5;
  t = k_80(t);
  a_6 = t;
  t = w_5;
  t = l_80(t);
  h_6 = t;
  t = z_5;
  t = m_80(t);
  i_6 = t;
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, a_6, h_6, i_6);
  x_1 = t;
  t = SSLsetAnnotations(x_1, u_5);
  return(t);
}
ATerm Let_2_0 (ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,a_2 = NULL,f_2 = NULL;
  w_6 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_6);
  n_6 = t;
  t = o_6;
  t = v_77(t);
  u_6 = t;
  t = t_6;
  t = w_77(t);
  v_6 = t;
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, u_6, v_6);
  a_2 = t;
  t = SSLsetAnnotations(a_2, n_6);
  return(t);
}
ATerm sboundin_3_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm t)
{
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(f_87, f_87, t);
      ;
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
      {
        ATerm c_29 = t;
        int d_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(h_87, h_87, f_87, t);
            ;
            LocalPopChoice(d_29);
          }
        else
          {
            t = c_29;
            {
              ATerm e_29 = t;
              int f_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(h_87, h_87, h_87, f_87, t);
                  ;
                  LocalPopChoice(f_29);
                }
              else
                {
                  t = e_29;
                  t = Rec_2_0(h_87, f_87, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_19 (ATerm t)
{
  ATerm h_7 = NULL;
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          h_7 = ATgetArgument(t, 0);
          {
            ATerm i_29 = ATgetArgument(t, 1);
          }
          {
            ATerm j_29 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_29);
      t = h_7;
    }
  else
    {
      t = g_29;
      if(match_cons(t, sym_SDefT_4))
        {
          h_7 = ATgetArgument(t, 0);
          {
            ATerm k_29 = ATgetArgument(t, 1);
          }
          {
            ATerm l_29 = ATgetArgument(t, 2);
          }
          {
            ATerm m_29 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = h_7;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm f_7 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      f_7 = ATgetArgument(t, 0);
      {
        ATerm n_29 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = f_7;
  t = map_1_0(v_19, t);
  return(t);
}
ATerm union_1_0 (ATerm p_96 (ATerm), ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym__2))
    {
      u_8 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8;
  {
    ATerm w_8 (ATerm t)
    {
      ATerm o_29 = t;
      int p_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_8;
          ;
          LocalPopChoice(p_29);
        }
      else
        {
          t = o_29;
          {
            ATerm q_29 = t;
            int r_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_3 = NULL,c_3 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    b_3 = ATgetFirst((ATermList) t);
                    c_3 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = v_8;
                {
                  ATerm x_19 (ATerm t)
                  {
                    ATerm e_3 = NULL;
                    e_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_3, e_3);
                    t = p_96(t);
                    return(t);
                  }
                  t = fetch_1_0(x_19, t);
                  t = c_3;
                  t = w_8(t);
                }
                ;
                LocalPopChoice(r_29);
              }
            else
              {
                t = q_29;
                t = Cons_2_0(_id, w_8, t);
              }
          }
        }
      return(t);
    }
    t = w_8(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_99(t);
      ;
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      {
        ATerm z_8 = NULL,a_9 = NULL,d_9 = NULL,e_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_8 = ATgetFirst((ATermList) t);
            a_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_8;
        t = f_99(t);
        d_9 = t;
        t = a_9;
        t = foldr_3_0(d_99, e_99, f_99, t);
        e_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_9, e_9);
        t = e_99(t);
      }
    }
  return(t);
}
ATerm e_20 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_20 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_20 (ATerm t)
{
  t = union_1_0(h_20, t);
  return(t);
}
ATerm h_20 (ATerm t)
{
  ATerm g_4 = NULL;
  if(match_cons(t, sym__2))
    {
      g_4 = ATgetArgument(t, 0);
      if((g_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm i_20 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_20 (ATerm t)
{
  t = union_1_0(k_20, t);
  return(t);
}
ATerm k_20 (ATerm t)
{
  ATerm a_5 = NULL;
  if(match_cons(t, sym__2))
    {
      a_5 = ATgetArgument(t, 0);
      if((a_5 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_9 (ATerm t)
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_103(t);
        ;
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        {
          ATerm w_29 = t;
          int x_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_9 = NULL,j_9 = NULL,s_3 = NULL,t_3 = NULL;
              h_9 = t;
              t = g_103(t);
              j_9 = t;
              t = h_9;
              {
                ATerm b_20 (ATerm t)
                {
                  ATerm j_3 = NULL;
                  t = m_9(t);
                  j_3 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_3, j_9);
                  t = diff_0_0(t);
                  return(t);
                }
                t = h_103(b_20, m_9, e_20, t);
                s_3 = t;
                t = SSL_explode_term(s_3);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_29 = ATgetArgument(t, 0);
                    t_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_3;
                t = foldr_3_0(f_20, g_20, _id, t);
              }
              ;
              LocalPopChoice(x_29);
            }
          else
            {
              t = w_29;
              {
                ATerm h_4 = NULL,j_4 = NULL;
                h_4 = t;
                t = SSL_explode_term(h_4);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_29 = ATgetArgument(t, 0);
                    j_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_4;
                t = foldr_3_0(i_20, j_20, m_9, t);
              }
            }
        }
      }
    return(t);
  }
  t = m_9(t);
  return(t);
}
ATerm diff_1_0 (ATerm k_96 (ATerm), ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_9;
  {
    ATerm x_9 (ATerm t)
    {
      ATerm a_30 = t;
      int b_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(b_30);
        }
      else
        {
          t = a_30;
          {
            ATerm c_30 = t;
            int d_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_5 = NULL,i_5 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    h_5 = ATgetFirst((ATermList) t);
                    i_5 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = w_9;
                {
                  ATerm l_20 (ATerm t)
                  {
                    ATerm j_5 = NULL;
                    j_5 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_5, j_5);
                    t = k_96(t);
                    return(t);
                  }
                  t = fetch_1_0(l_20, t);
                  t = i_5;
                  t = x_9(t);
                }
                ;
                LocalPopChoice(d_30);
              }
            else
              {
                t = c_30;
                t = Cons_2_0(_id, x_9, t);
              }
          }
        }
      return(t);
    }
    t = x_9(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm p_92 (ATerm), ATerm t)
{
  ATerm y_9 (ATerm t)
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_92(t);
        ;
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        t = n_92(t);
        t = _2_0(p_92, y_9, t);
        t = o_92(t);
      }
    return(t);
  }
  t = y_9(t);
  return(t);
}
ATerm m_20 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_30 = ATgetArgument(t, 0);
      if(((ATgetType(g_30) != AT_LIST) || !(ATisEmpty(g_30))))
        _fail(t);
      {
        ATerm h_30 = ATgetArgument(t, 1);
        if(((ATgetType(h_30) != AT_LIST) || !(ATisEmpty(h_30))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_20 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_30 = ATgetArgument(t, 0);
      if(((ATgetType(i_30) == AT_LIST) && !(ATisEmpty(i_30))))
        {
          h_10 = ATgetFirst((ATermList) i_30);
          j_10 = (ATerm) ATgetNext((ATermList) i_30);
        }
      else
        _fail(t);
      {
        ATerm j_30 = ATgetArgument(t, 1);
        if(((ATgetType(j_30) == AT_LIST) && !(ATisEmpty(j_30))))
          {
            i_10 = ATgetFirst((ATermList) j_30);
            k_10 = (ATerm) ATgetNext((ATermList) j_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_10, i_10), (ATerm) ATmakeAppl(sym__2, j_10, k_10));
  return(t);
}
ATerm p_20 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL;
  if(match_cons(t, sym__2))
    {
      l_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_10), l_10);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_30 = ATgetFirst((ATermList) t);
      if(match_cons(k_30, sym__2))
        {
          a_10 = ATgetArgument(k_30, 0);
          b_10 = ATgetArgument(k_30, 1);
        }
      else
        _fail(t);
      c_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(b_10);
  if(match_cons(t, sym__2))
    {
      d_10 = ATgetArgument(t, 0);
      e_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(a_10);
  if(match_cons(t, sym__2))
    {
      if((d_10 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      f_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_10, e_10);
  t = genzip_4_0(m_20, o_20, p_20, _id, t);
  g_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_10, c_10);
  {
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_30 = ATgetArgument(t, 0);
            ATerm o_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_10;
        {
          ATerm q_20 (ATerm t)
          {
            t = c_10;
            return(t);
          }
          t = at_end_1_0(q_20, t);
        }
        ;
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
        {
          ATerm r_5 = NULL,g_2 = NULL,j_2 = NULL;
          j_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_10, c_10);
          g_2 = t;
          t = SSL_explode_term(g_2);
          if(match_cons(t, sym__2))
            {
              ATerm p_30 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) p_30) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_5;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm u_20 (ATerm t)
{
  ATerm v_10 = NULL;
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_10);
  return(t);
}
ATerm v_20 (ATerm t)
{
  t = _2_0(_id, y_20, t);
  return(t);
}
ATerm w_20 (ATerm t)
{
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, z_20, t);
      ;
      LocalPopChoice(r_30);
    }
  else
    {
      t = q_30;
      {
        ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
        if(match_cons(t, sym__2))
          {
            e_11 = ATgetArgument(t, 0);
            f_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_11;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_11 = ATgetFirst((ATermList) t);
            h_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_11), g_11), h_11);
      }
    }
  return(t);
}
ATerm y_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm z_20 (ATerm t)
{
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_10 = ATgetFirst((ATermList) t);
          a_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_10;
      if(match_cons(t, sym__2))
        {
          y_10 = ATgetArgument(t, 0);
          z_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_10;
      if((y_10 != t))
        {
          _fail(t);
        }
      t = a_11;
      ;
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm c_21 (ATerm t)
{
  ATerm p_11 = NULL;
  if(match_cons(t, sym__2))
    {
      p_11 = ATgetArgument(t, 0);
      if((p_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(u_20, v_20, w_20, t);
      ;
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      t = diff_1_0(c_21, t);
    }
  return(t);
}
ATerm GnNext_3_0 (ATerm z_116 (ATerm), ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,k_12 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm w_30 = ATgetArgument(t, 0);
      if(((ATgetType(w_30) == AT_LIST) && !(ATisEmpty(w_30))))
        {
          u_11 = ATgetFirst((ATermList) w_30);
          v_11 = (ATerm) ATgetNext((ATermList) w_30);
        }
      else
        _fail(t);
      w_11 = ATgetArgument(t, 1);
      x_11 = ATgetArgument(t, 2);
      y_11 = ATgetArgument(t, 3);
      z_11 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_11, x_11);
  t = z_116(t);
  a_12 = t;
  t = a_117(t);
  b_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_12, w_11);
  t = diff_0_0(t);
  e_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_12, v_11);
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_30 = ATgetArgument(t, 0);
            ATerm a_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_12;
        {
          ATerm d_21 (ATerm t)
          {
            t = v_11;
            return(t);
          }
          t = at_end_1_0(d_21, t);
        }
        ;
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        {
          ATerm c_6 = NULL,k_2 = NULL,l_2 = NULL;
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_12, v_11);
          k_2 = t;
          t = SSL_explode_term(k_2);
          if(match_cons(t, sym__2))
            {
              ATerm b_31 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_31) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              c_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_6;
          t = concat_0_0(t);
        }
      }
    f_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_12, w_11);
    {
      ATerm c_31 = t;
      int d_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm e_31 = ATgetArgument(t, 0);
              ATerm f_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_12;
          {
            ATerm e_21 (ATerm t)
            {
              t = w_11;
              return(t);
            }
            t = at_end_1_0(e_21, t);
          }
          ;
          LocalPopChoice(d_31);
        }
      else
        {
          t = c_31;
          {
            ATerm g_6 = NULL,n_2 = NULL,o_2 = NULL;
            o_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_12, w_11);
            n_2 = t;
            t = SSL_explode_term(n_2);
            if(match_cons(t, sym__2))
              {
                ATerm g_31 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) g_31) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                g_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_6;
            t = concat_0_0(t);
          }
        }
      g_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, u_11, a_12, y_11);
      t = b_117(t);
      k_12 = t;
      t = (ATerm) ATmakeAppl(sym__5, f_12, g_12, x_11, k_12, z_11);
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm t)
{
  ATerm s_12 (ATerm t)
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_105(t);
        ;
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        t = m_105(t);
        t = s_12(t);
      }
    return(t);
  }
  t = s_12(t);
  return(t);
}
ATerm for_3_0 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm t)
{
  t = o_105(t);
  t = while_not_2_0(p_105, q_105, t);
  return(t);
}
ATerm f_21 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym__3))
    {
      w_12 = ATgetArgument(t, 0);
      x_12 = ATgetArgument(t, 1);
      y_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, w_12, w_12, x_12, y_12, (ATerm) ATempty);
  return(t);
}
ATerm h_21 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm j_31 = ATgetArgument(t, 0);
      if(((ATgetType(j_31) != AT_LIST) || !(ATisEmpty(j_31))))
        _fail(t);
      {
        ATerm k_31 = ATgetArgument(t, 1);
      }
      {
        ATerm l_31 = ATgetArgument(t, 2);
      }
      z_12 = ATgetArgument(t, 3);
      a_13 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_12, a_13);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm t)
{
  ATerm v_12 = NULL;
  ATerm i_21 (ATerm t)
  {
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(w_116, x_116, y_116, t);
        ;
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
        {
          ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
          if(match_cons(t, sym__5))
            {
              c_13 = ATgetArgument(t, 0);
              f_13 = ATgetArgument(t, 1);
              g_13 = ATgetArgument(t, 2);
              h_13 = ATgetArgument(t, 3);
              i_13 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = c_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_13 = ATgetFirst((ATermList) t);
              e_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, e_13, f_13, g_13, h_13, (ATerm) ATinsert(CheckATermList(i_13), d_13));
        }
      }
    return(t);
  }
  t = for_3_0(f_21, h_21, i_21, t);
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      {
        ATerm o_31 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_12;
  return(t);
}
ATerm assert_1_0 (ATerm m_100 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
  if(match_cons(t, sym__2))
    {
      p_13 = ATgetArgument(t, 0);
      q_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_100(t);
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_13, p_13, q_13);
  t = table_push_0_0(t);
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_2 = NULL,r_2 = NULL;
        r_2 = t;
        t = term_k_28;
        p_2 = t;
        t = SSL_table_get(r_13, p_2);
        ;
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_13 = ATgetFirst((ATermList) t);
        t_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    u_2 = t;
    t = term_k_28;
    s_2 = t;
    t = u_2;
    v_2 = t;
    t = (ATerm) ATinsert(CheckATermList(t_13), (ATerm) ATinsert(CheckATermList(s_13), p_13));
    t_2 = t;
    t = SSL_table_put(r_13, s_2, t_2);
    t = (ATerm) ATmakeAppl(sym__2, p_13, q_13);
  }
  return(t);
}
ATerm j_21 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm RegisterDefinition_0_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  u_13 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      v_13 = ATgetArgument(t, 0);
      {
        ATerm s_31 = ATgetArgument(t, 1);
      }
      {
        ATerm t_31 = ATgetArgument(t, 2);
      }
      {
        ATerm u_31 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  w_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_13, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_v_31, u_13));
  t = assert_1_0(j_21, t);
  t = w_13;
  return(t);
}
ATerm m_21 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,y_6 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL;
  if(match_cons(t, sym__2))
    {
      q_6 = ATgetArgument(t, 0);
      {
        ATerm w_31 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = term_r_31;
  y_2 = t;
  t = term_r_31;
  w_2 = t;
  t = y_2;
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_6, (ATerm) ATempty);
  x_2 = t;
  t = SSL_table_get(w_2, x_2);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_6 = ATgetFirst((ATermList) t);
      {
        ATerm x_31 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_6;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm y_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_31) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6;
  return(t);
}
ATerm q_21 (ATerm t)
{
  t = free_vars_3_0(w_21, a_22, sboundin_3_0, t);
  return(t);
}
ATerm v_21 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm z_31 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
      n_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_15), m_15);
  return(t);
}
ATerm w_21 (ATerm t)
{
  ATerm c_14 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      c_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_14);
  return(t);
}
ATerm a_22 (ATerm t)
{
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
      {
        ATerm e_14 = NULL,f_14 = NULL;
        ATerm c_32 = t;
        int d_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm e_32 = ATgetArgument(t, 0);
                f_14 = ATgetArgument(t, 1);
                {
                  ATerm f_32 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(d_32);
            t = f_14;
            t = map_1_0(b_22, t);
          }
        else
          {
            t = c_32;
            {
              ATerm g_32 = t;
              int h_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      e_14 = ATgetArgument(t, 0);
                      {
                        ATerm i_32 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(h_32);
                  t = (ATerm) ATinsert(ATempty, e_14);
                }
              else
                {
                  t = g_32;
                  {
                    ATerm j_32 = t;
                    int k_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm l_32 = ATgetArgument(t, 0);
                            f_14 = ATgetArgument(t, 1);
                            {
                              ATerm m_32 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm n_32 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(k_32);
                        t = f_14;
                        t = map_1_0(d_22, t);
                      }
                    else
                      {
                        t = j_32;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm o_32 = ATgetArgument(t, 0);
                            f_14 = ATgetArgument(t, 1);
                            {
                              ATerm p_32 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm q_32 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = f_14;
                        t = map_1_0(e_22, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm b_22 (ATerm t)
{
  ATerm o_14 = NULL;
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_14 = ATgetArgument(t, 0);
          {
            ATerm t_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_32);
      t = o_14;
    }
  else
    {
      t = r_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_14;
    }
  return(t);
}
ATerm d_22 (ATerm t)
{
  ATerm x_14 = NULL;
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_14 = ATgetArgument(t, 0);
          {
            ATerm w_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_32);
      t = x_14;
    }
  else
    {
      t = u_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_14;
    }
  return(t);
}
ATerm e_22 (ATerm t)
{
  ATerm j_15 = NULL;
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_15 = ATgetArgument(t, 0);
          {
            ATerm z_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_32);
      t = j_15;
    }
  else
    {
      t = x_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_15;
    }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm b_14 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_a_33), b_14, (ATerm) ATempty);
  t = graph_nodes_roots_3_0(m_21, q_21, v_21, t);
  return(t);
}
ATerm Strategies_1_0 (ATerm n_73 (ATerm), ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,d_3 = NULL,f_3 = NULL;
  r_15 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      p_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_15);
  o_15 = t;
  t = p_15;
  t = n_73(t);
  q_15 = t;
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, q_15);
  d_3 = t;
  t = SSLsetAnnotations(d_3, o_15);
  return(t);
}
ATerm Cons_2_0 (ATerm j_73 (ATerm), ATerm k_73 (ATerm), ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,a_16 = NULL,b_16 = NULL,g_3 = NULL,h_3 = NULL;
  b_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_15 = ATgetFirst((ATermList) t);
      x_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_16);
  v_15 = t;
  t = w_15;
  t = j_73(t);
  y_15 = t;
  t = x_15;
  t = k_73(t);
  a_16 = t;
  h_3 = t;
  t = (ATerm) ATinsert(CheckATermList(a_16), y_15);
  g_3 = t;
  t = SSLsetAnnotations(g_3, v_15);
  return(t);
}
ATerm Specification_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,i_3 = NULL,m_3 = NULL;
  j_16 = t;
  if(match_cons(t, sym_Specification_1))
    {
      h_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_16);
  e_16 = t;
  t = h_16;
  t = s_73(t);
  i_16 = t;
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_16);
  i_3 = t;
  t = SSLsetAnnotations(i_3, e_16);
  return(t);
}
ATerm _2_0 (ATerm u_68 (ATerm), ATerm v_68 (ATerm), ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,t_16 = NULL,q_3 = NULL,r_3 = NULL;
  t_16 = t;
  if(match_cons(t, sym__2))
    {
      o_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_16);
  n_16 = t;
  t = o_16;
  t = u_68(t);
  q_16 = t;
  t = p_16;
  t = v_68(t);
  r_16 = t;
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_16, r_16);
  q_3 = t;
  t = SSLsetAnnotations(q_3, n_16);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm t_109 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  if(match_cons(t, sym__2))
    {
      w_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_16, term_b_33);
  t = open_stream_0_0(t);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_16, x_16);
  t = t_109(t);
  t = fclose_0_0(t);
  t = x_16;
  return(t);
}
ATerm k_22 (ATerm t)
{
  t = fetch_1_0(o_22, t);
  return(t);
}
ATerm l_22 (ATerm t)
{
  t = WriteToFile_1_0(p_22, t);
  return(t);
}
ATerm o_22 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm p_22 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_33 = ATgetArgument(t, 0);
      if(match_cons(c_33, sym_Stream_1))
        {
          d_17 = ATgetArgument(c_33, 0);
        }
      else
        _fail(t);
      e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(d_17, e_17);
  f_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_17);
  return(t);
}
ATerm q_22 (ATerm t)
{
  t = WriteToFile_1_0(t_22, t);
  return(t);
}
ATerm t_22 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,j_17 = NULL,k_17 = NULL,w_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_33 = ATgetArgument(t, 0);
      if(match_cons(d_33, sym_Stream_1))
        {
          g_17 = ATgetArgument(d_33, 0);
        }
      else
        _fail(t);
      h_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(g_17, h_17);
  j_17 = t;
  y_3 = t;
  t = term_e_33;
  w_3 = t;
  t = SSL_fputc(w_3, j_17);
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_17);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL;
  b_17 = t;
  {
    ATerm f_22 (ATerm t)
    {
      ATerm f_33 = t;
      int g_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_22 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((c_17 != NULL) && (c_17 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_22, t);
          ;
          LocalPopChoice(g_33);
        }
      else
        {
          t = f_33;
          t = term_h_33;
          if(((c_17 != NULL) && (c_17 != t)))
            _fail(t);
          else
            c_17 = t;
        }
      return(t);
    }
    t = _2_0(f_22, _id, t);
    t = b_17;
    {
      ATerm j_22 (ATerm t)
      {
        ATerm c_7 = NULL;
        c_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), c_7);
        return(t);
      }
      t = _2_0(_id, j_22, t);
      {
        ATerm i_33 = t;
        int j_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(k_22, l_22, t);
            ;
            LocalPopChoice(j_33);
          }
        else
          {
            t = i_33;
            t = _2_0(_id, q_22, t);
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
ATerm apply_strategy_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,r_17 = NULL;
  l_17 = t;
  t = dtime_0_0(t);
  t = l_17;
  t = v_112(t);
  m_17 = t;
  t = dtime_0_0(t);
  n_17 = t;
  t = m_17;
  if(match_cons(t, sym__2))
    {
      o_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_17), (ATerm) ATmakeAppl(sym_Runtime_1, n_17)), r_17);
  return(t);
}
ATerm f_18 (ATerm z_17, ATerm t)
{
  t = SSL_fclose(z_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL;
  d_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_18 = ATgetArgument(t, 0);
      {
        ATerm k_33 = t;
        int l_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_18);
            ;
            LocalPopChoice(l_33);
          }
        else
          {
            t = k_33;
            t = f_18(d_18, t);
          }
      }
    }
  else
    {
      t = f_18(d_18, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_18 = NULL;
  t = SSL_stdin_stream();
  g_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_18 = NULL;
  t = SSL_stdout_stream();
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_18 = NULL;
  t = SSL_stderr_stream();
  j_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_18);
  return(t);
}
ATerm u_22 (ATerm t)
{
  ATerm v_18 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      v_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_18;
  return(t);
}
ATerm v_22 (ATerm t)
{
  ATerm a_19 = NULL;
  a_19 = t;
  t = SSL_is_string(a_19);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_33 = ATgetArgument(t, 0);
      ATerm n_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_7 = NULL,w_7 = NULL;
        u_7 = t;
        t = SSL_explode_term(u_7);
        if(match_cons(t, sym__2))
          {
            ATerm q_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_33) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_33 = ATgetArgument(t, 1);
              if(((ATgetType(r_33) == AT_LIST) && !(ATisEmpty(r_33))))
                {
                  w_7 = ATgetFirst((ATermList) r_33);
                  {
                    ATerm s_33 = (ATerm) ATgetNext((ATermList) r_33);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_7;
        if(match_cons(t, sym_stderr_0))
          {
            t = w_7;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = w_7;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = w_7;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(p_33);
      }
    else
      {
        t = o_33;
        {
          ATerm t_33 = t;
          int u_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
              t = _2_0(u_22, _id, t);
              if(match_cons(t, sym__2))
                {
                  r_18 = ATgetArgument(t, 0);
                  s_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(r_18, s_18);
              t_18 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, t_18);
              ;
              LocalPopChoice(u_33);
            }
          else
            {
              t = t_33;
              {
                ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
                t = _2_0(v_22, _id, t);
                if(match_cons(t, sym__2))
                  {
                    x_18 = ATgetArgument(t, 0);
                    y_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(x_18, y_18);
                z_18 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, z_18);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,e_19 = NULL;
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_19 = NULL;
      f_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_19, term_x_33);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
      {
        ATerm x_7 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,e_4 = NULL;
        x_7 = t;
        t = term_y_33;
        b_4 = t;
        t = term_t_19;
        z_3 = t;
        t = b_4;
        e_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, x_7), term_y_33);
        a_4 = t;
        t = SSL_printnl(z_3, a_4);
        t = x_7;
        _fail(t);
      }
    }
  b_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(e_19);
  c_19 = t;
  t = b_19;
  t = fclose_0_0(t);
  t = c_19;
  return(t);
}
ATerm fetch_1_0 (ATerm m_94 (ATerm), ATerm t)
{
  ATerm k_19 (ATerm t)
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_94, _id, t);
        ;
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        t = Cons_2_0(_id, k_19, t);
      }
    return(t);
  }
  t = k_19(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_34);
    }
  else
    {
      t = b_34;
      {
        ATerm n_19 = NULL,o_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_19 = ATgetFirst((ATermList) t);
            o_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_19;
        {
          ATerm w_22 (ATerm t)
          {
            t = o_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(w_22, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_94 (ATerm), ATerm t)
{
  ATerm w_19 (ATerm t)
  {
    ATerm d_34 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_19, t);
        ;
        LocalPopChoice(e_34);
      }
    else
      {
        t = d_34;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_94(t);
      }
    return(t);
  }
  t = w_19(t);
  return(t);
}
ATerm x_22 (ATerm t)
{
  ATerm z_19 = NULL;
  z_19 = t;
  t = SSL_explode_string(z_19);
  return(t);
}
ATerm y_22 (ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  t = SSL_explode_string(a_20);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm y_19 = NULL;
  t = _2_0(x_22, y_22, t);
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_20 = NULL,d_20 = NULL;
        if(match_cons(t, sym__2))
          {
            c_20 = ATgetArgument(t, 0);
            d_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_20;
        {
          ATerm z_22 (ATerm t)
          {
            t = d_20;
            return(t);
          }
          t = at_end_1_0(z_22, t);
        }
        ;
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        {
          ATerm c_8 = NULL,d_8 = NULL;
          c_8 = t;
          t = SSL_explode_term(c_8);
          if(match_cons(t, sym__2))
            {
              ATerm h_34 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_34) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              d_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_8;
          t = concat_0_0(t);
        }
      }
    y_19 = t;
    t = SSL_implode_string(y_19);
  }
  return(t);
}
ATerm a_23 (ATerm t)
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_34 = t;
  int l_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_20 = NULL;
      n_20 = t;
      t = SSL_is_string(n_20);
      ;
      LocalPopChoice(l_34);
    }
  else
    {
      t = k_34;
      {
        ATerm m_34 = t;
        int n_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_23, t);
            ;
            LocalPopChoice(n_34);
          }
        else
          {
            t = m_34;
            {
              ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
              r_20 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_20 = ATgetArgument(t, 0);
                  t = s_20;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_20 = ATgetArgument(t, 0);
                      t = s_20;
                      {
                        ATerm o_34 = t;
                        int p_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm f_4 = NULL,p_4 = NULL;
                            p_4 = t;
                            t = term_q_34;
                            f_4 = t;
                            t = SSL_table_get(f_4, s_20);
                            {
                              ATerm r_34 = t;
                              int s_34 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm s_10 = NULL,q_4 = NULL,r_4 = NULL;
                                  t = eval_config_0_0(t);
                                  s_10 = t;
                                  r_4 = t;
                                  t = term_q_34;
                                  q_4 = t;
                                  t = SSL_table_put(q_4, s_20, s_10);
                                  t = s_10;
                                  ;
                                  LocalPopChoice(s_34);
                                }
                              else
                                {
                                  t = r_34;
                                }
                            }
                            ;
                            LocalPopChoice(p_34);
                          }
                        else
                          {
                            t = o_34;
                            {
                              ATerm s_4 = NULL,t_4 = NULL,b_5 = NULL,e_5 = NULL;
                              t = term_t_34;
                              b_5 = t;
                              t = term_t_19;
                              s_4 = t;
                              t = b_5;
                              e_5 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, s_20), term_t_34);
                              t_4 = t;
                              t = SSL_printnl(s_4, t_4);
                              t = s_20;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm a_21 = NULL,b_21 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_20 = ATgetArgument(t, 0);
                          t_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_20;
                      t = eval_config_0_0(t);
                      a_21 = t;
                      t = t_20;
                      t = eval_config_0_0(t);
                      b_21 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_21, b_21);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_111 (ATerm), ATerm t)
{
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_21 = NULL,l_21 = NULL,f_5 = NULL,g_5 = NULL,k_5 = NULL,l_5 = NULL;
      g_21 = t;
      t = term_w_34;
      k_5 = t;
      t = term_q_34;
      f_5 = t;
      t = k_5;
      l_5 = t;
      t = term_w_34;
      g_5 = t;
      t = SSL_table_get(f_5, g_5);
      {
        ATerm x_34 = t;
        int y_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_11 = NULL,m_5 = NULL,p_5 = NULL,q_5 = NULL,s_5 = NULL;
            t = eval_config_0_0(t);
            q_11 = t;
            q_5 = t;
            t = term_q_34;
            m_5 = t;
            t = q_5;
            s_5 = t;
            t = term_w_34;
            p_5 = t;
            t = SSL_table_put(m_5, p_5, q_11);
            t = q_11;
            ;
            LocalPopChoice(y_34);
          }
        else
          {
            t = x_34;
          }
        l_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_21, term_z_34);
        t = geq_0_0(t);
        t = g_21;
        t = e_111(t);
      }
      ;
      LocalPopChoice(v_34);
    }
  else
    {
      t = u_34;
    }
  return(t);
}
ATerm g_23 (ATerm t)
{
  ATerm n_21 = NULL;
  n_21 = t;
  if(match_string(t, "-k"))
    {
      t = n_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_21;
    }
  return(t);
}
ATerm h_23 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,t_5 = NULL,x_5 = NULL,y_5 = NULL,b_6 = NULL;
  o_21 = t;
  t = SSL_string_to_int(o_21);
  p_21 = t;
  y_5 = t;
  t = term_q_34;
  t_5 = t;
  t = y_5;
  b_6 = t;
  t = term_a_35;
  x_5 = t;
  t = SSL_table_put(t_5, x_5, p_21);
  t = o_21;
  return(t);
}
ATerm i_23 (ATerm t)
{
  t = term_b_35;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_23, h_23, i_23, t);
  return(t);
}
ATerm k_23 (ATerm t)
{
  ATerm r_21 = NULL;
  r_21 = t;
  if(match_string(t, "-S"))
    {
      t = r_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_21;
    }
  return(t);
}
ATerm o_23 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
  k_6 = t;
  t = term_q_34;
  d_6 = t;
  t = k_6;
  l_6 = t;
  t = term_w_34;
  e_6 = t;
  t = l_6;
  m_6 = t;
  t = term_c_35;
  f_6 = t;
  t = SSL_table_put(d_6, e_6, f_6);
  t = term_d_35;
  return(t);
}
ATerm p_23 (ATerm t)
{
  t = term_e_35;
  return(t);
}
ATerm s_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_23 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,p_6 = NULL,s_6 = NULL,x_6 = NULL,z_6 = NULL;
  t_21 = t;
  t = SSL_string_to_int(t_21);
  u_21 = t;
  x_6 = t;
  t = term_q_34;
  p_6 = t;
  t = x_6;
  z_6 = t;
  t = term_w_34;
  s_6 = t;
  t = SSL_table_put(p_6, s_6, u_21);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_21);
  return(t);
}
ATerm v_23 (ATerm t)
{
  t = term_f_35;
  return(t);
}
ATerm w_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_23 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,d_7 = NULL,e_7 = NULL,g_7 = NULL,i_7 = NULL;
  e_7 = t;
  t = term_q_34;
  a_7 = t;
  t = e_7;
  g_7 = t;
  t = term_g_35;
  b_7 = t;
  t = g_7;
  i_7 = t;
  t = term_c_4;
  d_7 = t;
  t = SSL_table_put(a_7, b_7, d_7);
  t = term_h_35;
  return(t);
}
ATerm z_23 (ATerm t)
{
  t = term_i_35;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_23, o_23, p_23, t);
      ;
      LocalPopChoice(k_35);
    }
  else
    {
      t = j_35;
      {
        ATerm l_35 = t;
        int m_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_23, t_23, v_23, t);
            ;
            LocalPopChoice(m_35);
          }
        else
          {
            t = l_35;
            t = Option_3_0(w_23, y_23, z_23, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_21 = NULL;
      t = term_c_4;
      t = d_0(t);
      z_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_35, term_o_35, z_21);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_21 = ATgetFirst((ATermList) t);
          y_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_21;
      t = a_0(t);
      t = term_c_4;
      t = c_0(t);
      c_22 = t;
      t = (ATerm) ATinsert(CheckATermList(y_21), c_22);
    }
  return(t);
}
ATerm a_24 (ATerm t)
{
  ATerm h_22 = NULL;
  h_22 = t;
  if(match_string(t, "-o"))
    {
      t = h_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_22;
    }
  return(t);
}
ATerm b_24 (ATerm t)
{
  ATerm i_22 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
  i_22 = t;
  l_7 = t;
  t = term_q_34;
  j_7 = t;
  t = l_7;
  m_7 = t;
  t = term_p_35;
  k_7 = t;
  t = SSL_table_put(j_7, k_7, i_22);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_22);
  return(t);
}
ATerm c_24 (ATerm t)
{
  t = term_q_35;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_24, b_24, c_24, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,r_22 = NULL,s_22 = NULL,n_7 = NULL,o_7 = NULL;
  if(match_cons(t, sym__3))
    {
      m_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
      r_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_22, n_22);
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_35 = ATgetArgument(t, 0);
            ATerm u_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_22, n_22);
        ;
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
        t = (ATerm) ATempty;
      }
    s_22 = t;
    o_7 = t;
    t = (ATerm) ATinsert(CheckATermList(s_22), r_22);
    n_7 = t;
    t = SSL_table_put(m_22, n_22, n_7);
    t = (ATerm) ATmakeAppl(sym__3, m_22, n_22, r_22);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_23 = NULL;
      t = term_c_4;
      t = l_0(t);
      f_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_35, term_o_35, f_23);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm j_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_23 = ATgetFirst((ATermList) t);
          c_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_23 = ATgetFirst((ATermList) t);
          e_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_23;
      t = h_0(t);
      t = d_23;
      t = j_0(t);
      j_23 = t;
      t = (ATerm) ATinsert(CheckATermList(e_23), j_23);
    }
  return(t);
}
ATerm d_24 (ATerm t)
{
  ATerm l_23 = NULL;
  l_23 = t;
  if(match_string(t, "-i"))
    {
      t = l_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_23;
    }
  return(t);
}
ATerm e_24 (ATerm t)
{
  ATerm m_23 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
  m_23 = t;
  r_7 = t;
  t = term_q_34;
  p_7 = t;
  t = r_7;
  s_7 = t;
  t = term_v_35;
  q_7 = t;
  t = SSL_table_put(p_7, q_7, m_23);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_23);
  return(t);
}
ATerm f_24 (ATerm t)
{
  t = term_w_35;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_24, e_24, f_24, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_23 = NULL,a_8 = NULL,t_7 = NULL,v_7 = NULL,y_7 = NULL,z_7 = NULL,b_8 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_4;
  t = whoami_0_0(t);
  n_23 = t;
  y_7 = t;
  t = term_t_19;
  t_7 = t;
  t = y_7;
  z_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_35), n_23);
  v_7 = t;
  t = SSL_printnl(t_7, v_7);
  b_8 = t;
  t = term_e_27;
  a_8 = t;
  t = SSL_exit(a_8);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
  t = term_y_35;
  g_8 = t;
  t = term_q_34;
  e_8 = t;
  t = g_8;
  h_8 = t;
  t = term_y_35;
  f_8 = t;
  t = SSL_table_get(e_8, f_8);
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_12 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL;
        t = eval_config_0_0(t);
        c_12 = t;
        k_8 = t;
        t = term_q_34;
        i_8 = t;
        t = k_8;
        l_8 = t;
        t = term_y_35;
        j_8 = t;
        t = SSL_table_put(i_8, j_8, c_12);
        t = c_12;
        ;
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm t)
{
  ATerm b_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_99(t);
      ;
      LocalPopChoice(c_36);
    }
  else
    {
      t = b_36;
      {
        ATerm q_23 = NULL,r_23 = NULL,u_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_23 = ATgetFirst((ATermList) t);
            r_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_23;
        t = foldr_2_0(b_99, c_99, t);
        u_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_23, u_23);
        t = c_99(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm g_24 (ATerm t)
{
  t = term_c_35;
  return(t);
}
ATerm h_24 (ATerm t)
{
  ATerm l_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      l_12 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(l_12, t_12);
        ;
        LocalPopChoice(e_36);
      }
    else
      {
        t = d_36;
        t = SSL_addr(l_12, t_12);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_23 = NULL,d_12 = NULL,h_12 = NULL;
  t = times_0_0(t);
  d_12 = t;
  t = SSL_explode_term(d_12);
  if(match_cons(t, sym__2))
    {
      ATerm f_36 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12;
  t = foldr_2_0(g_24, h_24, t);
  x_23 = t;
  t = SSL_TicksToSeconds(x_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
  i_24 = t;
  if(match_cons(t, sym__2))
    {
      j_24 = ATgetArgument(t, 0);
      k_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_24;
        if((j_24 != t))
          {
            _fail(t);
          }
        t = i_24;
        ;
        LocalPopChoice(h_36);
      }
    else
      {
        t = g_36;
        t = i_24;
        {
          ATerm i_36 = t;
          int j_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_24, k_24);
              ;
              LocalPopChoice(j_36);
            }
          else
            {
              t = i_36;
              t = SSL_gtr(j_24, k_24);
            }
          t = (ATerm) ATmakeAppl(sym__2, j_24, k_24);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_111 (ATerm), ATerm t)
{
  ATerm k_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_24 = NULL,p_24 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
      n_24 = t;
      t = term_w_34;
      o_8 = t;
      t = term_q_34;
      m_8 = t;
      t = o_8;
      p_8 = t;
      t = term_w_34;
      n_8 = t;
      t = SSL_table_get(m_8, n_8);
      {
        ATerm m_36 = t;
        int n_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_15 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
            t = eval_config_0_0(t);
            b_15 = t;
            s_8 = t;
            t = term_q_34;
            q_8 = t;
            t = s_8;
            t_8 = t;
            t = term_w_34;
            r_8 = t;
            t = SSL_table_put(q_8, r_8, b_15);
            t = b_15;
            ;
            LocalPopChoice(n_36);
          }
        else
          {
            t = m_36;
          }
        p_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_24, term_e_27);
        t = geq_0_0(t);
        t = n_24;
        t = d_111(t);
      }
      ;
      LocalPopChoice(l_36);
    }
  else
    {
      t = k_36;
    }
  return(t);
}
ATerm l_24 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,x_8 = NULL,y_8 = NULL,b_9 = NULL,c_9 = NULL;
  t = run_time_0_0(t);
  r_24 = t;
  t = term_c_4;
  t = whoami_0_0(t);
  s_24 = t;
  b_9 = t;
  t = term_t_19;
  x_8 = t;
  t = b_9;
  c_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_36), r_24), term_o_36), s_24);
  y_8 = t;
  t = SSL_printnl(x_8, y_8);
  t = (ATerm) ATmakeAppl(sym__2, term_t_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_36), r_24), term_o_36), s_24));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_24, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  t = report_run_time_0_0(t);
  g_9 = t;
  t = term_c_35;
  f_9 = t;
  t = SSL_exit(f_9);
  return(t);
}
ATerm m_24 (ATerm t)
{
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
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
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(t_36);
          }
        else
          {
            t = s_36;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_113 (ATerm), ATerm t)
{
  ATerm u_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_9 = NULL,k_9 = NULL,l_9 = NULL,n_9 = NULL;
      t = term_w_36;
      l_9 = t;
      t = term_q_34;
      i_9 = t;
      t = l_9;
      n_9 = t;
      t = term_w_36;
      k_9 = t;
      t = SSL_table_get(i_9, k_9);
      {
        ATerm x_36 = t;
        int y_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_15 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
            t = eval_config_0_0(t);
            s_15 = t;
            q_9 = t;
            t = term_q_34;
            o_9 = t;
            t = q_9;
            r_9 = t;
            t = term_w_36;
            p_9 = t;
            t = SSL_table_put(o_9, p_9, s_15);
            t = s_15;
            ;
            LocalPopChoice(y_36);
          }
        else
          {
            t = x_36;
          }
      }
      ;
      LocalPopChoice(v_36);
    }
  else
    {
      t = u_36;
      t = fetch_1_0(m_24, t);
    }
  t = t_113(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_24 = ATgetFirst((ATermList) t);
      v_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_24 = NULL,a_25 = NULL;
        t = v_24;
        t = g_0(t);
        z_24 = t;
        t = u_24;
        t = e_0(t);
        a_25 = t;
        t = v_24;
        {
          ATerm o_24 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(z_24), a_25);
            return(t);
          }
          t = reverse_acc_2_0(e_0, o_24, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_4;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm b_86 (ATerm), ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,s_9 = NULL,t_9 = NULL;
  e_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_25);
  b_25 = t;
  t = c_25;
  t = b_86(t);
  d_25 = t;
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_25);
  s_9 = t;
  t = SSLsetAnnotations(s_9, b_25);
  return(t);
}
ATerm q_24 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm t_24 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_24 (ATerm t)
{
  ATerm h_25 = NULL;
  h_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_25), term_z_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_10 = NULL,w_10 = NULL,b_11 = NULL,c_11 = NULL;
  ATerm a_37 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_9 = NULL,z_9 = NULL,n_10 = NULL,o_10 = NULL;
      t = term_y_35;
      n_10 = t;
      t = term_q_34;
      u_9 = t;
      t = n_10;
      o_10 = t;
      t = term_y_35;
      z_9 = t;
      t = SSL_table_get(u_9, z_9);
      {
        ATerm c_37 = t;
        int d_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_16 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,t_10 = NULL;
            t = eval_config_0_0(t);
            k_16 = t;
            r_10 = t;
            t = term_q_34;
            p_10 = t;
            t = r_10;
            t_10 = t;
            t = term_y_35;
            q_10 = t;
            t = SSL_table_put(p_10, q_10, k_16);
            t = k_16;
            ;
            LocalPopChoice(d_37);
          }
        else
          {
            t = c_37;
          }
      }
      ;
      LocalPopChoice(b_37);
    }
  else
    {
      t = a_37;
      t = fetch_1_0(q_24, t);
    }
  t = term_e_37;
  t = echo_0_0(t);
  b_11 = t;
  t = term_n_35;
  u_10 = t;
  t = b_11;
  c_11 = t;
  t = term_o_35;
  w_10 = t;
  t = SSL_table_get(u_10, w_10);
  t = reverse_acc_2_0(_id, t_24, t);
  t = map_1_0(w_24, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm c_86 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,d_11 = NULL,i_11 = NULL;
  l_25 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      j_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_25);
  i_25 = t;
  t = j_25;
  t = c_86(t);
  k_25 = t;
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_25);
  d_11 = t;
  t = SSLsetAnnotations(d_11, i_25);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,j_11 = NULL,k_11 = NULL;
  p_25 = t;
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_25;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_37 = ATgetFirst((ATermList) t);
                ATerm i_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_25;
          }
        ;
        LocalPopChoice(g_37);
      }
    else
      {
        t = f_37;
        t = (ATerm) ATinsert(ATempty, p_25);
      }
    q_25 = t;
    k_11 = t;
    t = term_h_33;
    j_11 = t;
    t = SSL_printnl(j_11, q_25);
    t = p_25;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
  t = term_y_35;
  n_11 = t;
  t = term_q_34;
  l_11 = t;
  t = n_11;
  o_11 = t;
  t = term_y_35;
  m_11 = t;
  t = SSL_table_get(l_11, m_11);
  {
    ATerm j_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_17 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,i_12 = NULL;
        t = eval_config_0_0(t);
        i_17 = t;
        t_11 = t;
        t = term_q_34;
        r_11 = t;
        t = t_11;
        i_12 = t;
        t = term_y_35;
        s_11 = t;
        t = SSL_table_put(r_11, s_11, i_17);
        t = i_17;
        ;
        LocalPopChoice(k_37);
      }
    else
      {
        t = j_37;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm x_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_24 (ATerm t)
{
  ATerm j_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
  o_12 = t;
  t = term_q_34;
  j_12 = t;
  t = o_12;
  p_12 = t;
  t = term_l_37;
  m_12 = t;
  t = p_12;
  q_12 = t;
  t = term_c_4;
  n_12 = t;
  t = SSL_table_put(j_12, m_12, n_12);
  t = term_m_37;
  return(t);
}
ATerm f_25 (ATerm t)
{
  t = term_n_37;
  return(t);
}
ATerm g_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_25 (ATerm t)
{
  ATerm r_12 = NULL,u_12 = NULL,b_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
  j_13 = t;
  t = term_q_34;
  r_12 = t;
  t = j_13;
  k_13 = t;
  t = term_l_37;
  u_12 = t;
  t = k_13;
  l_13 = t;
  t = term_c_4;
  b_13 = t;
  t = SSL_table_put(r_12, u_12, b_13);
  x_13 = t;
  t = term_q_34;
  m_13 = t;
  t = x_13;
  y_13 = t;
  t = term_o_37;
  n_13 = t;
  t = y_13;
  z_13 = t;
  t = term_c_4;
  o_13 = t;
  t = SSL_table_put(m_13, n_13, o_13);
  t = term_p_37;
  return(t);
}
ATerm n_25 (ATerm t)
{
  t = term_q_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_37 = t;
  int s_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_24, y_24, f_25, t);
      ;
      LocalPopChoice(s_37);
    }
  else
    {
      t = r_37;
      t = Option_3_0(g_25, m_25, n_25, t);
    }
  return(t);
}
ATerm o_25 (ATerm t)
{
  ATerm x_25 = NULL,a_14 = NULL,d_14 = NULL,g_14 = NULL,h_14 = NULL;
  x_25 = t;
  g_14 = t;
  t = term_q_34;
  a_14 = t;
  t = g_14;
  h_14 = t;
  t = term_y_35;
  d_14 = t;
  t = SSL_table_put(a_14, d_14, x_25);
  t = (ATerm) ATmakeAppl(sym_Program_1, x_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_115 (ATerm), ATerm t)
{
  ATerm w_25 = NULL;
  w_25 = t;
  {
    ATerm t_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_37;
        t = w_115(t);
        ;
        LocalPopChoice(u_37);
      }
    else
      {
        t = t_37;
      }
    t = w_25;
    {
      ATerm r_25 (ATerm t)
      {
        ATerm w_37 = t;
        int x_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_37 = t;
            int z_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(z_37);
              }
            else
              {
                t = y_37;
                t = w_115(t);
                t = Cons_2_0(_id, r_25, t);
              }
            ;
            LocalPopChoice(x_37);
          }
        else
          {
            t = w_37;
            {
              ATerm z_25 = NULL,a_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_25 = ATgetFirst((ATermList) t);
                  a_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_26), (ATerm) ATmakeAppl(sym_Undefined_1, z_25));
            }
          }
        return(t);
      }
      t = Cons_2_0(o_25, r_25, t);
    }
  }
  return(t);
}
ATerm t_25 (ATerm t)
{
  ATerm k_26 = NULL;
  k_26 = t;
  if(match_string(t, "--help"))
    {
      t = k_26;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_26;
        }
    }
  return(t);
}
ATerm u_25 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  s_14 = t;
  t = term_q_34;
  p_14 = t;
  t = s_14;
  t_14 = t;
  t = term_w_36;
  q_14 = t;
  t = t_14;
  u_14 = t;
  t = term_c_4;
  r_14 = t;
  t = SSL_table_put(p_14, q_14, r_14);
  t = term_a_38;
  return(t);
}
ATerm v_25 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm y_25 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_115 (ATerm), ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,z_16 = NULL,a_17 = NULL;
  h_26 = t;
  l_14 = t;
  t = term_n_35;
  i_14 = t;
  t = l_14;
  m_14 = t;
  t = term_o_35;
  j_14 = t;
  t = m_14;
  n_14 = t;
  t = (ATerm) ATempty;
  k_14 = t;
  t = SSL_table_put(i_14, j_14, k_14);
  t = h_26;
  {
    ATerm s_25 (ATerm t)
    {
      ATerm c_38 = t;
      int d_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_115(t);
          ;
          LocalPopChoice(d_38);
        }
      else
        {
          t = c_38;
          {
            ATerm e_38 = t;
            int f_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_25, u_25, v_25, t);
                ;
                LocalPopChoice(f_38);
              }
            else
              {
                t = e_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_25, t);
    {
      ATerm g_38 = t;
      int h_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_26 = NULL;
          p_26 = t;
          {
            ATerm i_38 = t;
            int j_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_15 = NULL,g_15 = NULL;
                t = p_26;
                {
                  ATerm k_38 = t;
                  int l_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_14 = NULL,w_14 = NULL,y_14 = NULL,z_14 = NULL;
                      t = term_w_36;
                      y_14 = t;
                      t = term_q_34;
                      v_14 = t;
                      t = y_14;
                      z_14 = t;
                      t = term_w_36;
                      w_14 = t;
                      t = SSL_table_get(v_14, w_14);
                      {
                        ATerm m_38 = t;
                        int n_38 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_19 = NULL,a_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
                            t = eval_config_0_0(t);
                            p_19 = t;
                            d_15 = t;
                            t = term_q_34;
                            a_15 = t;
                            t = d_15;
                            e_15 = t;
                            t = term_w_36;
                            c_15 = t;
                            t = SSL_table_put(a_15, c_15, p_19);
                            t = p_19;
                            ;
                            LocalPopChoice(n_38);
                          }
                        else
                          {
                            t = m_38;
                          }
                      }
                      ;
                      LocalPopChoice(l_38);
                    }
                  else
                    {
                      t = k_38;
                      t = fetch_1_0(y_25, t);
                    }
                  t = p_26;
                  t = default_system_usage_0_0(t);
                  g_15 = t;
                  t = term_c_35;
                  f_15 = t;
                  t = SSL_exit(f_15);
                }
                ;
                LocalPopChoice(j_38);
              }
            else
              {
                t = i_38;
                {
                  ATerm h_15 = NULL,i_15 = NULL,k_15 = NULL,l_15 = NULL,d_16 = NULL,f_16 = NULL;
                  t = term_l_37;
                  k_15 = t;
                  t = term_q_34;
                  h_15 = t;
                  t = k_15;
                  l_15 = t;
                  t = term_l_37;
                  i_15 = t;
                  t = SSL_table_get(h_15, i_15);
                  {
                    ATerm o_38 = t;
                    int p_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_20 = NULL,t_15 = NULL,u_15 = NULL,z_15 = NULL,c_16 = NULL;
                        t = eval_config_0_0(t);
                        x_20 = t;
                        z_15 = t;
                        t = term_q_34;
                        t_15 = t;
                        t = z_15;
                        c_16 = t;
                        t = term_l_37;
                        u_15 = t;
                        t = SSL_table_put(t_15, u_15, x_20);
                        t = x_20;
                        ;
                        LocalPopChoice(p_38);
                      }
                    else
                      {
                        t = o_38;
                      }
                    t = p_26;
                    t = default_system_about_0_0(t);
                    f_16 = t;
                    t = term_c_35;
                    d_16 = t;
                    t = SSL_exit(d_16);
                  }
                }
              }
          }
          ;
          LocalPopChoice(h_38);
        }
      else
        {
          t = g_38;
          {
            ATerm q_38 = t;
            int r_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_16 = NULL,l_16 = NULL,m_16 = NULL,s_16 = NULL,u_16 = NULL,v_16 = NULL;
                ATerm b_26 (ATerm t)
                {
                  ATerm c_26 (ATerm t)
                  {
                    if(((i_26 != NULL) && (i_26 != t)))
                      _fail(t);
                    else
                      i_26 = t;
                    return(t);
                  }
                  t = Undefined_1_0(c_26, t);
                  return(t);
                }
                t = fetch_1_0(b_26, t);
                m_16 = t;
                t = term_t_19;
                g_16 = t;
                t = m_16;
                s_16 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_26)), term_s_38);
                l_16 = t;
                t = SSL_printnl(g_16, l_16);
                t = (ATerm) ATmakeAppl(sym__2, term_t_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_26)), term_s_38));
                t = default_system_usage_0_0(t);
                v_16 = t;
                t = term_e_27;
                u_16 = t;
                t = SSL_exit(u_16);
                ;
                LocalPopChoice(r_38);
              }
            else
              {
                t = q_38;
              }
          }
        }
      j_26 = t;
      a_17 = t;
      t = term_n_35;
      z_16 = t;
      t = SSL_table_destroy(z_16);
      t = j_26;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm t)
{
  ATerm s_26 = NULL,p_17 = NULL,q_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
  t = parse_options_1_0(v_113, t);
  s_26 = t;
  q_17 = t;
  t = term_t_38;
  p_17 = t;
  t = SSL_table_create(p_17);
  u_17 = t;
  t = term_t_38;
  s_17 = t;
  t = u_17;
  v_17 = t;
  t = term_u_38;
  t_17 = t;
  t = SSL_table_put(s_17, t_17, s_26);
  t = s_26;
  t = x_113(t);
  {
    ATerm v_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_113, t);
        ;
        LocalPopChoice(w_38);
      }
    else
      {
        t = v_38;
        {
          ATerm x_38 = t;
          int y_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_113(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_38);
            }
          else
            {
              t = x_38;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm f_26 (ATerm t)
{
  t = if_verbose2_1_0(o_26, t);
  return(t);
}
ATerm l_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_26 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,a_18 = NULL,b_18 = NULL,e_18 = NULL;
  a_18 = t;
  t = term_q_34;
  w_17 = t;
  t = a_18;
  b_18 = t;
  t = term_z_38;
  x_17 = t;
  t = b_18;
  e_18 = t;
  t = term_c_4;
  y_17 = t;
  t = SSL_table_put(w_17, x_17, y_17);
  t = term_a_39;
  return(t);
}
ATerm n_26 (ATerm t)
{
  t = term_b_39;
  return(t);
}
ATerm o_26 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,i_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,u_18 = NULL,w_18 = NULL,d_19 = NULL,g_19 = NULL;
  t_26 = t;
  t = term_y_35;
  l_18 = t;
  t = term_q_34;
  i_18 = t;
  t = l_18;
  m_18 = t;
  t = term_y_35;
  k_18 = t;
  t = SSL_table_get(i_18, k_18);
  {
    ATerm c_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_21 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
        t = eval_config_0_0(t);
        k_21 = t;
        p_18 = t;
        t = term_q_34;
        n_18 = t;
        t = p_18;
        q_18 = t;
        t = term_y_35;
        o_18 = t;
        t = SSL_table_put(n_18, o_18, k_21);
        t = k_21;
        ;
        LocalPopChoice(d_39);
      }
    else
      {
        t = c_39;
      }
    u_26 = t;
    d_19 = t;
    t = term_t_19;
    u_18 = t;
    t = d_19;
    g_19 = t;
    t = (ATerm) ATinsert(ATempty, u_26);
    w_18 = t;
    t = SSL_printnl(u_18, w_18);
    t = t_26;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm t)
{
  ATerm e_26 (ATerm t)
  {
    ATerm e_39 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_113(t);
        ;
        LocalPopChoice(f_39);
      }
    else
      {
        t = e_39;
        {
          ATerm g_39 = t;
          int h_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(h_39);
            }
          else
            {
              t = g_39;
              {
                ATerm i_39 = t;
                int j_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(j_39);
                  }
                else
                  {
                    t = i_39;
                    {
                      ATerm k_39 = t;
                      int l_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(l_26, m_26, n_26, t);
                          ;
                          LocalPopChoice(l_39);
                        }
                      else
                        {
                          t = k_39;
                          {
                            ATerm m_39 = t;
                            int n_39 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(n_39);
                              }
                            else
                              {
                                t = m_39;
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
  ATerm g_26 (ATerm t)
  {
    ATerm v_26 = NULL,w_26 = NULL,s_21 = NULL;
    v_26 = t;
    {
      ATerm o_39 = t;
      int p_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_26 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((w_26 != NULL) && (w_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_26, t);
          ;
          LocalPopChoice(p_39);
        }
      else
        {
          t = o_39;
          t = term_q_39;
          w_26 = t;
        }
      t = not_null(w_26);
      t = ReadFromFile_0_0(t);
      s_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_26, s_21);
      t = apply_strategy_1_0(e_113, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(e_26, g_113, f_26, g_26, t);
  return(t);
}
ATerm r_26 (ATerm t)
{
  t = _2_0(_id, x_26, t);
  return(t);
}
ATerm x_26 (ATerm t)
{
  t = Specification_1_0(y_26, t);
  return(t);
}
ATerm y_26 (ATerm t)
{
  t = Cons_2_0(_id, z_26, t);
  return(t);
}
ATerm z_26 (ATerm t)
{
  t = Cons_2_0(a_27, b_27, t);
  return(t);
}
ATerm a_27 (ATerm t)
{
  t = Strategies_1_0(c_27, t);
  return(t);
}
ATerm b_27 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm c_27 (ATerm t)
{
  t = dead_def_elim_0_0(t);
  t = map_1_0(local_dead_def_elim_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(r_26, _fail, default_usage_0_0, t);
  return(t);
}
