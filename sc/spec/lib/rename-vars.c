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
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Scope_2;
Symbol sym_Rec_2;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Undefined_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_s_21;
ATerm term_h_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_y_20;
ATerm term_t_20;
ATerm term_g_20;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_z_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_p_14;
ATerm term_m_14;
void init_constant_terms (void)
{
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__2, term_q_16, term_s_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym__2, term_e_17, term_h_16);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym__2, term_w_17, term_x_17);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym__2, term_t_20, term_h_16);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_b_21, term_h_16);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_h_16);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_h_16);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm a_0 (ATerm);
ATerm b_0 (ATerm);
ATerm c_0 (ATerm);
ATerm f_0 (ATerm);
ATerm o_0 (ATerm);
ATerm r_0 (ATerm);
ATerm y_0 (ATerm);
ATerm a_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm spaste_1_0 (ATerm m_72 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm n_72 (ATerm), ATerm o_72 (ATerm), ATerm p_72 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm a_5 (ATerm t_18, ATerm s_18, ATerm);
ATerm SVar_1_0 (ATerm d_63 (ATerm), ATerm);
ATerm l_5 (ATerm x_86 (ATerm), ATerm y_86 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_34, ATerm x_34, ATerm w_34, ATerm);
ATerm new_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm o_5 (ATerm r_86 (ATerm), ATerm s_86 (ATerm (ATerm), ATerm), ATerm q_34, ATerm t_34, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm f_87 (ATerm), ATerm);
ATerm rename_4_0 (ATerm m_86 (ATerm (ATerm), ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_86 (ATerm (ATerm), ATerm), ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm tpaste_1_0 (ATerm i_72 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm j_72 (ATerm), ATerm k_72 (ATerm), ATerm l_72 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm f_5 (ATerm w_81 (ATerm), ATerm c_27, ATerm b_27, ATerm);
ATerm foldr_3_0 (ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm);
ATerm g_5 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm g_27, ATerm f_27, ATerm);
ATerm h_5 (ATerm r_81 (ATerm), ATerm a_27, ATerm z_26, ATerm);
ATerm at_end_1_0 (ATerm z_79 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm c_36 (ATerm u_35, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm j_5 (ATerm o_506, ATerm t_506, ATerm y_50, ATerm);
ATerm while_not_2_0 (ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm);
ATerm for_3_0 (ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm h_39 (ATerm q_37, ATerm r_37, ATerm s_37, ATerm);
ATerm a_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm free_vars_3_0 (ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm r_88 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm u_59 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm t_5 (ATerm e_42, ATerm f_42, ATerm);
ATerm u_5 (ATerm p_46, ATerm q_46, ATerm);
ATerm w_5 (ATerm u_94 (ATerm), ATerm v_455, ATerm t_46, ATerm);
ATerm v_5 (ATerm l_46, ATerm m_46, ATerm);
ATerm i_5 (ATerm);
ATerm m_5 (ATerm);
ATerm output_1_0 (ATerm o_92 (ATerm), ATerm);
ATerm g_48 (ATerm w_47, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_5 (ATerm r_46, ATerm);
ATerm y_5 (ATerm g_42, ATerm h_42, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm e_50 (ATerm w_48, ATerm);
ATerm f_50 (ATerm c_49, ATerm d_49, ATerm e_49, ATerm);
ATerm g_50 (ATerm p_49, ATerm q_49, ATerm r_49, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm n_5 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm p_92 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm a_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm g_6 (ATerm b_51, ATerm c_51, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm e_6 (ATerm l_32, ATerm m_32, ATerm k_32, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm v_6 (ATerm);
ATerm x_6 (ATerm);
ATerm c_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_5 (ATerm p_30, ATerm q_30, ATerm);
ATerm foldr_2_0 (ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_7 (ATerm);
ATerm h_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_101 (ATerm), ATerm);
ATerm i_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm j_7 (ATerm);
ATerm need_help_1_0 (ATerm f_92 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm t_79 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm c_6 (ATerm u_40, ATerm v_40, ATerm);
ATerm debug_1_0 (ATerm s_94 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_79 (ATerm), ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm d_6 (ATerm c_34, ATerm d_34, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_58 (ATerm), ATerm o_58 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm b_97 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm parse_options_1_0 (ATerm a_97 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_8 = ATgetArgument(t, 0);
      if(((ATgetType(i_8) != AT_LIST) || !(ATisEmpty(i_8))))
        _fail(t);
      {
        ATerm k_8 = ATgetArgument(t, 1);
        if(((ATgetType(k_8) != AT_LIST) || !(ATisEmpty(k_8))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_0 (ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_8 = ATgetArgument(t, 0);
      if(((ATgetType(l_8) == AT_LIST) && !(ATisEmpty(l_8))))
        {
          s_0 = ATgetFirst((ATermList) l_8);
          t_0 = (ATerm) ATgetNext((ATermList) l_8);
        }
      else
        _fail(t);
      {
        ATerm m_8 = ATgetArgument(t, 1);
        if(((ATgetType(m_8) == AT_LIST) && !(ATisEmpty(m_8))))
          {
            u_0 = ATgetFirst((ATermList) m_8);
            v_0 = (ATerm) ATgetNext((ATermList) m_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_0, u_0), (ATerm) ATmakeAppl(sym__2, t_0, v_0));
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL;
  if(match_cons(t, sym__2))
    {
      w_0 = ATgetArgument(t, 0);
      x_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_0), w_0);
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm z_0 = NULL,b_1 = NULL,c_1 = NULL,m_1 = NULL,p_1 = NULL;
  if(match_cons(t, sym__2))
    {
      z_0 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_0;
  {
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm p_8 = ATgetArgument(t, 0);
            b_1 = ATgetArgument(t, 1);
            c_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(o_8);
        t = (ATerm) ATmakeAppl(sym_SDef_3, p_1, b_1, c_1);
      }
    else
      {
        t = n_8;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm q_8 = ATgetArgument(t, 0);
            b_1 = ATgetArgument(t, 1);
            c_1 = ATgetArgument(t, 2);
            m_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, p_1, b_1, c_1, m_1);
      }
  }
  return(t);
}
ATerm o_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_8 = ATgetArgument(t, 0);
      if(((ATgetType(r_8) != AT_LIST) || !(ATisEmpty(r_8))))
        _fail(t);
      {
        ATerm s_8 = ATgetArgument(t, 1);
        if(((ATgetType(s_8) != AT_LIST) || !(ATisEmpty(s_8))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,l_3 = NULL,r_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_8 = ATgetArgument(t, 0);
      if(((ATgetType(t_8) == AT_LIST) && !(ATisEmpty(t_8))))
        {
          i_3 = ATgetFirst((ATermList) t_8);
          j_3 = (ATerm) ATgetNext((ATermList) t_8);
        }
      else
        _fail(t);
      {
        ATerm u_8 = ATgetArgument(t, 1);
        if(((ATgetType(u_8) == AT_LIST) && !(ATisEmpty(u_8))))
          {
            l_3 = ATgetFirst((ATermList) u_8);
            r_3 = (ATerm) ATgetNext((ATermList) u_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_3, l_3), (ATerm) ATmakeAppl(sym__2, j_3, r_3));
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL;
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_3), s_3);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm z_3 = NULL,i_4 = NULL,j_4 = NULL;
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3;
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_8);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_4);
      }
    else
      {
        t = v_8;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_8 = ATgetArgument(t, 0);
            i_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_4, i_4);
      }
  }
  return(t);
}
ATerm h_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_8 = ATgetArgument(t, 0);
      if(((ATgetType(z_8) != AT_LIST) || !(ATisEmpty(z_8))))
        _fail(t);
      {
        ATerm a_9 = ATgetArgument(t, 1);
        if(((ATgetType(a_9) != AT_LIST) || !(ATisEmpty(a_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm t_6 = NULL,w_6 = NULL,y_6 = NULL,z_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      if(((ATgetType(c_9) == AT_LIST) && !(ATisEmpty(c_9))))
        {
          t_6 = ATgetFirst((ATermList) c_9);
          w_6 = (ATerm) ATgetNext((ATermList) c_9);
        }
      else
        _fail(t);
      {
        ATerm e_9 = ATgetArgument(t, 1);
        if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
          {
            y_6 = ATgetFirst((ATermList) e_9);
            z_6 = (ATerm) ATgetNext((ATermList) e_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_6, y_6), (ATerm) ATmakeAppl(sym__2, w_6, z_6));
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL;
  if(match_cons(t, sym__2))
    {
      a_7 = ATgetArgument(t, 0);
      b_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_7), a_7);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm d_7 = NULL,f_7 = NULL,g_7 = NULL;
  if(match_cons(t, sym__2))
    {
      d_7 = ATgetArgument(t, 0);
      g_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7;
  {
    ATerm g_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm l_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_9);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_7);
      }
    else
      {
        t = g_9;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_9 = ATgetArgument(t, 0);
            f_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_7, f_7);
      }
  }
  return(t);
}
ATerm l_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_9 = ATgetArgument(t, 0);
      if(((ATgetType(p_9) != AT_LIST) || !(ATisEmpty(p_9))))
        _fail(t);
      {
        ATerm r_9 = ATgetArgument(t, 1);
        if(((ATgetType(r_9) != AT_LIST) || !(ATisEmpty(r_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm f_9 = NULL,h_9 = NULL,i_9 = NULL,k_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_9 = ATgetArgument(t, 0);
      if(((ATgetType(u_9) == AT_LIST) && !(ATisEmpty(u_9))))
        {
          f_9 = ATgetFirst((ATermList) u_9);
          h_9 = (ATerm) ATgetNext((ATermList) u_9);
        }
      else
        _fail(t);
      {
        ATerm v_9 = ATgetArgument(t, 1);
        if(((ATgetType(v_9) == AT_LIST) && !(ATisEmpty(v_9))))
          {
            i_9 = ATgetFirst((ATermList) v_9);
            k_9 = (ATerm) ATgetNext((ATermList) v_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_9, i_9), (ATerm) ATmakeAppl(sym__2, h_9, k_9));
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL;
  if(match_cons(t, sym__2))
    {
      n_9 = ATgetArgument(t, 0);
      o_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_9), n_9);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm q_9 = NULL,s_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_9;
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm y_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_9);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, t_9);
      }
    else
      {
        t = w_9;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_9 = ATgetArgument(t, 0);
            s_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, t_9, s_9);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm m_72 (ATerm), ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  e_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_10 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
      {
        ATerm e_0 = NULL,p_0 = NULL,q_0 = NULL,n_0 = NULL;
        t = SSLgetAnnotations(e_10);
        e_0 = t;
        t = f_10;
        t = m_72(t);
        q_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_10, q_0);
        t = genzip_4_0(a_0, b_0, c_0, f_0, t);
        p_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, p_0, g_10);
        n_0 = t;
        t = SSLsetAnnotations(n_0, e_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_10 = ATgetArgument(t, 0);
          g_10 = ATgetArgument(t, 1);
          a_10 = ATgetArgument(t, 2);
          {
            ATerm i_2 = NULL,x_2 = NULL,a_3 = NULL,d_1 = NULL;
            t = SSLgetAnnotations(e_10);
            i_2 = t;
            t = g_10;
            t = m_72(t);
            a_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_10, a_3);
            t = genzip_4_0(o_0, r_0, y_0, a_1, t);
            x_2 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, f_10, x_2, a_10);
            d_1 = t;
            t = SSLsetAnnotations(d_1, i_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              f_10 = ATgetArgument(t, 0);
              g_10 = ATgetArgument(t, 1);
              a_10 = ATgetArgument(t, 2);
              b_10 = ATgetArgument(t, 3);
              {
                ATerm k_5 = NULL,p_6 = NULL,q_6 = NULL,e_1 = NULL;
                t = SSLgetAnnotations(e_10);
                k_5 = t;
                t = g_10;
                t = m_72(t);
                q_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_10, q_6);
                t = genzip_4_0(h_1, i_1, j_1, k_1, t);
                p_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_10, p_6, a_10, b_10);
                e_1 = t;
                t = SSLsetAnnotations(e_1, k_5);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  f_10 = ATgetArgument(t, 0);
                  g_10 = ATgetArgument(t, 1);
                  a_10 = ATgetArgument(t, 2);
                  b_10 = ATgetArgument(t, 3);
                  {
                    ATerm j_8 = NULL,b_9 = NULL,d_9 = NULL,f_1 = NULL;
                    t = SSLgetAnnotations(e_10);
                    j_8 = t;
                    t = g_10;
                    t = m_72(t);
                    d_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, g_10, d_9);
                    t = genzip_4_0(l_1, q_1, r_1, s_1, t);
                    b_9 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, f_10, b_9, a_10, b_10);
                    f_1 = t;
                    t = SSLsetAnnotations(f_1, j_8);
                  }
                }
              else
                {
                  ATerm v_10 = NULL,y_10 = NULL,g_1 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      f_10 = ATgetArgument(t, 0);
                      g_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_10);
                  v_10 = t;
                  t = f_10;
                  t = m_72(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      y_10 = ATgetFirst((ATermList) t);
                      {
                        ATerm c_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, y_10, g_10);
                  g_1 = t;
                  t = SSLsetAnnotations(g_1, v_10);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm n_72 (ATerm), ATerm o_72 (ATerm), ATerm p_72 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
  m_15 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_15 = ATgetArgument(t, 0);
      o_15 = ATgetArgument(t, 1);
      {
        ATerm l_11 = NULL,u_11 = NULL,v_11 = NULL,n_1 = NULL;
        t = SSLgetAnnotations(m_15);
        l_11 = t;
        t = n_15;
        t = n_72(t);
        u_11 = t;
        t = o_15;
        t = n_72(t);
        v_11 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, u_11, v_11);
        n_1 = t;
        t = SSLsetAnnotations(n_1, l_11);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          n_15 = ATgetArgument(t, 0);
          o_15 = ATgetArgument(t, 1);
          k_15 = ATgetArgument(t, 2);
          {
            ATerm p_12 = NULL,w_12 = NULL,y_12 = NULL,a_13 = NULL,o_1 = NULL;
            t = SSLgetAnnotations(m_15);
            p_12 = t;
            t = n_15;
            t = p_72(t);
            w_12 = t;
            t = o_15;
            t = p_72(t);
            y_12 = t;
            t = k_15;
            t = n_72(t);
            a_13 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, w_12, y_12, a_13);
            o_1 = t;
            t = SSLsetAnnotations(o_1, p_12);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              n_15 = ATgetArgument(t, 0);
              o_15 = ATgetArgument(t, 1);
              k_15 = ATgetArgument(t, 2);
              l_15 = ATgetArgument(t, 3);
              {
                ATerm p_13 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,v_1 = NULL;
                t = SSLgetAnnotations(m_15);
                p_13 = t;
                t = n_15;
                t = p_72(t);
                e_14 = t;
                t = o_15;
                t = p_72(t);
                f_14 = t;
                t = k_15;
                t = p_72(t);
                g_14 = t;
                t = l_15;
                t = n_72(t);
                h_14 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, e_14, f_14, g_14, h_14);
                v_1 = t;
                t = SSLsetAnnotations(v_1, p_13);
              }
            }
          else
            {
              ATerm s_14 = NULL,w_14 = NULL,x_14 = NULL,x_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  n_15 = ATgetArgument(t, 0);
                  o_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_15);
              s_14 = t;
              t = n_15;
              t = p_72(t);
              w_14 = t;
              t = o_15;
              t = n_72(t);
              x_14 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, w_14, x_14);
              x_1 = t;
              t = SSLsetAnnotations(x_1, s_14);
            }
        }
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm a_16 = NULL;
  ATerm d_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          a_16 = ATgetArgument(t, 0);
          {
            ATerm i_10 = ATgetArgument(t, 1);
          }
          {
            ATerm j_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_10);
      t = a_16;
    }
  else
    {
      t = d_10;
      if(match_cons(t, sym_SDefT_4))
        {
          a_16 = ATgetArgument(t, 0);
          {
            ATerm k_10 = ATgetArgument(t, 1);
          }
          {
            ATerm l_10 = ATgetArgument(t, 2);
          }
          {
            ATerm m_10 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = a_16;
    }
  return(t);
}
ATerm a_5 (ATerm t_18, ATerm s_18, ATerm t)
{
  t = t_18;
  t = map_1_0(t_1, t);
  return(t);
}
ATerm SVar_1_0 (ATerm d_63 (ATerm), ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,r_16 = NULL,w_16 = NULL,m_2 = NULL;
  w_16 = t;
  if(match_cons(t, sym_SVar_1))
    {
      o_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_16);
  n_16 = t;
  t = o_16;
  t = d_63(t);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, r_16);
  m_2 = t;
  t = SSLsetAnnotations(m_2, n_16);
  return(t);
}
ATerm l_5 (ATerm x_86 (ATerm), ATerm y_86 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_34, ATerm x_34, ATerm w_34, ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm y_16 = NULL;
    y_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_16, w_34);
    t = x_86(t);
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm z_16 = NULL;
    z_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_16, x_34);
    t = x_86(t);
    return(t);
  }
  t = y_34;
  t = y_86(u_1, w_1, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm y_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_10 = ATgetArgument(t, 0);
      if(((ATgetType(n_10) != AT_LIST) || !(ATisEmpty(n_10))))
        _fail(t);
      {
        ATerm o_10 = ATgetArgument(t, 1);
        if(((ATgetType(o_10) != AT_LIST) || !(ATisEmpty(o_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm k_17 = NULL,m_17 = NULL,r_17 = NULL,s_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_10 = ATgetArgument(t, 0);
      if(((ATgetType(p_10) == AT_LIST) && !(ATisEmpty(p_10))))
        {
          k_17 = ATgetFirst((ATermList) p_10);
          m_17 = (ATerm) ATgetNext((ATermList) p_10);
        }
      else
        _fail(t);
      {
        ATerm q_10 = ATgetArgument(t, 1);
        if(((ATgetType(q_10) == AT_LIST) && !(ATisEmpty(q_10))))
          {
            r_17 = ATgetFirst((ATermList) q_10);
            s_17 = (ATerm) ATgetNext((ATermList) q_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_17, r_17), (ATerm) ATmakeAppl(sym__2, m_17, s_17));
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm t_17 = NULL,v_17 = NULL;
  if(match_cons(t, sym__2))
    {
      t_17 = ATgetArgument(t, 0);
      v_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_17), t_17);
  return(t);
}
ATerm o_5 (ATerm r_86 (ATerm), ATerm s_86 (ATerm (ATerm), ATerm), ATerm q_34, ATerm t_34, ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,g_17 = NULL,h_17 = NULL,j_17 = NULL;
  t = q_34;
  t = r_86(t);
  c_17 = t;
  t = map_1_0(new_0_0, t);
  d_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_17, d_17);
  t = genzip_4_0(y_1, z_1, a_2, _id, t);
  j_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_17, t_34);
  t = conc_0_0(t);
  g_17 = t;
  t = q_34;
  {
    ATerm b_2 (ATerm t)
    {
      t = d_17;
      return(t);
    }
    t = s_86(b_2, t);
    if(((h_17 != NULL) && (h_17 != t)))
      _fail(t);
    else
      h_17 = t;
    t = (ATerm) ATmakeAppl(sym__3, h_17, t_34, g_17);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,n_18 = NULL,p_18 = NULL,q_18 = NULL;
  j_18 = t;
  if(match_cons(t, sym__2))
    {
      k_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_18 = ATgetFirst((ATermList) t);
      q_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_18;
  if(match_cons(t, sym__2))
    {
      h_18 = ATgetArgument(t, 0);
      i_18 = ATgetArgument(t, 1);
      {
        ATerm r_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_18;
            if((k_18 != t))
              {
                _fail(t);
              }
            t = i_18;
            ;
            LocalPopChoice(s_10);
          }
        else
          {
            t = r_10;
            t = (ATerm) ATmakeAppl(sym__2, k_18, q_18);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, k_18, q_18);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm f_20 (ATerm t)
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_87(t);
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        {
          ATerm a_20 = NULL,b_20 = NULL,e_20 = NULL;
          ATerm c_2 (ATerm t)
          {
            ATerm i_15 = NULL;
            i_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_15, not_null(e_20));
            t = f_20(t);
            return(t);
          }
          if(((a_20 != NULL) && (a_20 != t)))
            _fail(t);
          else
            a_20 = t;
          if(match_cons(t, sym__2))
            {
              if(((b_20 != NULL) && (b_20 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_20 = ATgetArgument(t, 0);
              if(((e_20 != NULL) && (e_20 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                e_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_20;
          t = SRTS_all(c_2, t);
        }
      }
    return(t);
  }
  t = f_20(t);
  return(t);
}
ATerm rename_4_0 (ATerm m_86 (ATerm (ATerm), ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_86 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm k_20 = NULL;
  ATerm n_21 (ATerm t)
  {
    ATerm d_2 (ATerm t)
    {
      ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
      e_21 = t;
      if(match_cons(t, sym__2))
        {
          f_21 = ATgetArgument(t, 0);
          g_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm w_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 (ATerm t)
            {
              ATerm m_21 = NULL;
              m_21 = t;
              t = (ATerm) ATmakeAppl(sym__2, m_21, g_21);
              t = lookup_0_0(t);
              return(t);
            }
            t = f_21;
            t = m_86(e_2, t);
            ;
            LocalPopChoice(x_10);
          }
        else
          {
            t = w_10;
            {
              ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
              t = e_21;
              t = o_5(n_86, p_86, f_21, g_21, t);
              if(match_cons(t, sym__3))
                {
                  b_16 = ATgetArgument(t, 0);
                  c_16 = ATgetArgument(t, 1);
                  d_16 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = l_5(n_21, o_86, b_16, c_16, d_16, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(d_2, t);
    return(t);
  }
  if(((k_20 != NULL) && (k_20 != t)))
    _fail(t);
  else
    k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_20, (ATerm) ATempty);
  t = n_21(t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_10 = ATgetArgument(t, 0);
      if(((ATgetType(z_10) != AT_LIST) || !(ATisEmpty(z_10))))
        _fail(t);
      {
        ATerm a_11 = ATgetArgument(t, 1);
        if(((ATgetType(a_11) != AT_LIST) || !(ATisEmpty(a_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm g_18 = NULL,l_18 = NULL,m_18 = NULL,o_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_11 = ATgetArgument(t, 0);
      if(((ATgetType(b_11) == AT_LIST) && !(ATisEmpty(b_11))))
        {
          g_18 = ATgetFirst((ATermList) b_11);
          l_18 = (ATerm) ATgetNext((ATermList) b_11);
        }
      else
        _fail(t);
      {
        ATerm c_11 = ATgetArgument(t, 1);
        if(((ATgetType(c_11) == AT_LIST) && !(ATisEmpty(c_11))))
          {
            m_18 = ATgetFirst((ATermList) c_11);
            o_18 = (ATerm) ATgetNext((ATermList) c_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_18, m_18), (ATerm) ATmakeAppl(sym__2, l_18, o_18));
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm r_18 = NULL,u_18 = NULL;
  if(match_cons(t, sym__2))
    {
      r_18 = ATgetArgument(t, 0);
      u_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_18), r_18);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm z_18 = NULL,b_19 = NULL,d_19 = NULL;
  if(match_cons(t, sym__2))
    {
      z_18 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_18;
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm f_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_11);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_19);
      }
    else
      {
        t = d_11;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm g_11 = ATgetArgument(t, 0);
            b_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, d_19, b_19);
      }
  }
  return(t);
}
ATerm k_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_11 = ATgetArgument(t, 0);
      if(((ATgetType(h_11) != AT_LIST) || !(ATisEmpty(h_11))))
        _fail(t);
      {
        ATerm i_11 = ATgetArgument(t, 1);
        if(((ATgetType(i_11) != AT_LIST) || !(ATisEmpty(i_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_11 = ATgetArgument(t, 0);
      if(((ATgetType(j_11) == AT_LIST) && !(ATisEmpty(j_11))))
        {
          u_20 = ATgetFirst((ATermList) j_11);
          v_20 = (ATerm) ATgetNext((ATermList) j_11);
        }
      else
        _fail(t);
      {
        ATerm k_11 = ATgetArgument(t, 1);
        if(((ATgetType(k_11) == AT_LIST) && !(ATisEmpty(k_11))))
          {
            w_20 = ATgetFirst((ATermList) k_11);
            x_20 = (ATerm) ATgetNext((ATermList) k_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_20, w_20), (ATerm) ATmakeAppl(sym__2, v_20, x_20));
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm z_20 = NULL,i_21 = NULL;
  if(match_cons(t, sym__2))
    {
      z_20 = ATgetArgument(t, 0);
      i_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_21), z_20);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm l_21 = NULL,q_21 = NULL,r_21 = NULL;
  if(match_cons(t, sym__2))
    {
      l_21 = ATgetArgument(t, 0);
      r_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_21;
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm o_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_11);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_21);
      }
    else
      {
        t = m_11;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm p_11 = ATgetArgument(t, 0);
            q_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_21, q_21);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm i_72 (ATerm), ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,d_26 = NULL;
  x_25 = t;
  if(match_cons(t, sym_Scope_2))
    {
      y_25 = ATgetArgument(t, 0);
      z_25 = ATgetArgument(t, 1);
      {
        ATerm u_16 = NULL,b_17 = NULL,p_2 = NULL;
        t = SSLgetAnnotations(x_25);
        u_16 = t;
        t = y_25;
        t = i_72(t);
        b_17 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, b_17, z_25);
        p_2 = t;
        t = SSLsetAnnotations(p_2, u_16);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          y_25 = ATgetArgument(t, 0);
          z_25 = ATgetArgument(t, 1);
          a_26 = ATgetArgument(t, 2);
          d_26 = ATgetArgument(t, 3);
          {
            ATerm y_17 = NULL,d_18 = NULL,e_18 = NULL,q_2 = NULL;
            t = SSLgetAnnotations(x_25);
            y_17 = t;
            t = a_26;
            t = i_72(t);
            e_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_26, e_18);
            t = genzip_4_0(f_2, g_2, h_2, j_2, t);
            d_18 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, y_25, z_25, d_18, d_26);
            q_2 = t;
            t = SSLsetAnnotations(q_2, y_17);
          }
        }
      else
        {
          ATerm i_20 = NULL,o_20 = NULL,p_20 = NULL,s_2 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              y_25 = ATgetArgument(t, 0);
              z_25 = ATgetArgument(t, 1);
              a_26 = ATgetArgument(t, 2);
              d_26 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_25);
          i_20 = t;
          t = a_26;
          t = i_72(t);
          p_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_26, p_20);
          t = genzip_4_0(k_2, l_2, n_2, o_2, t);
          o_20 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, y_25, z_25, o_20, d_26);
          s_2 = t;
          t = SSLsetAnnotations(s_2, i_20);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm j_72 (ATerm), ATerm k_72 (ATerm), ATerm l_72 (ATerm), ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,b_30 = NULL;
  w_29 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_30 = ATgetArgument(t, 0);
      t_29 = ATgetArgument(t, 1);
      {
        ATerm d_22 = NULL,h_22 = NULL,i_22 = NULL,w_2 = NULL;
        t = SSLgetAnnotations(w_29);
        d_22 = t;
        t = b_30;
        t = l_72(t);
        h_22 = t;
        t = t_29;
        t = j_72(t);
        i_22 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, h_22, i_22);
        w_2 = t;
        t = SSLsetAnnotations(w_2, d_22);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          b_30 = ATgetArgument(t, 0);
          t_29 = ATgetArgument(t, 1);
          u_29 = ATgetArgument(t, 2);
          v_29 = ATgetArgument(t, 3);
          {
            ATerm b_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,y_2 = NULL;
            t = SSLgetAnnotations(w_29);
            b_23 = t;
            t = b_30;
            t = l_72(t);
            j_23 = t;
            t = t_29;
            t = l_72(t);
            k_23 = t;
            t = u_29;
            t = l_72(t);
            l_23 = t;
            t = v_29;
            t = j_72(t);
            m_23 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, j_23, k_23, l_23, m_23);
            y_2 = t;
            t = SSLsetAnnotations(y_2, b_23);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              b_30 = ATgetArgument(t, 0);
              t_29 = ATgetArgument(t, 1);
              u_29 = ATgetArgument(t, 2);
              v_29 = ATgetArgument(t, 3);
              {
                ATerm s_25 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,z_2 = NULL;
                t = SSLgetAnnotations(w_29);
                s_25 = t;
                t = b_30;
                t = l_72(t);
                i_26 = t;
                t = t_29;
                t = l_72(t);
                j_26 = t;
                t = u_29;
                t = l_72(t);
                k_26 = t;
                t = v_29;
                t = j_72(t);
                l_26 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, i_26, j_26, k_26, l_26);
                z_2 = t;
                t = SSLsetAnnotations(z_2, s_25);
              }
            }
          else
            {
              ATerm k_27 = NULL,y_27 = NULL,b_3 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  b_30 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_29);
              k_27 = t;
              t = b_30;
              t = j_72(t);
              y_27 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, y_27);
              b_3 = t;
              t = SSLsetAnnotations(b_3, k_27);
            }
        }
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm j_30 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_30);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      {
        ATerm l_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            l_30 = ATgetArgument(t, 0);
            t = l_30;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                l_30 = ATgetArgument(t, 0);
                u_30 = ATgetArgument(t, 1);
                v_30 = ATgetArgument(t, 2);
                w_30 = ATgetArgument(t, 3);
                t = v_30;
                t = map_1_0(u_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    l_30 = ATgetArgument(t, 0);
                    u_30 = ATgetArgument(t, 1);
                    v_30 = ATgetArgument(t, 2);
                    w_30 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = v_30;
                t = map_1_0(v_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm h_31 = NULL;
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_31 = ATgetArgument(t, 0);
          {
            ATerm w_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_11);
      t = h_31;
    }
  else
    {
      t = s_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_31;
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm w_31 = NULL;
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_31 = ATgetArgument(t, 0);
          {
            ATerm z_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_11);
      t = w_31;
    }
  else
    {
      t = x_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_31;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(r_2, t_2, tboundin_3_0, t);
  return(t);
}
ATerm f_5 (ATerm w_81 (ATerm), ATerm c_27, ATerm b_27, ATerm t)
{
  ATerm x_32 (ATerm t)
  {
    ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
    s_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_27;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_32 = ATgetFirst((ATermList) t);
            u_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_12 = t;
          int b_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_32;
              {
                ATerm c_3 (ATerm t)
                {
                  t = b_27;
                  return(t);
                }
                t = g_5(w_81, c_3, t_32, u_32, t);
                t = x_32(t);
              }
              ;
              LocalPopChoice(b_12);
            }
          else
            {
              t = a_12;
              {
                ATerm n_28 = NULL,q_28 = NULL,h_3 = NULL;
                t = SSLgetAnnotations(s_32);
                n_28 = t;
                t = u_32;
                t = x_32(t);
                q_28 = t;
                t = (ATerm) ATinsert(CheckATermList(q_28), t_32);
                h_3 = t;
                t = SSLsetAnnotations(h_3, n_28);
              }
            }
        }
      }
    return(t);
  }
  t = c_27;
  t = x_32(t);
  return(t);
}
ATerm foldr_3_0 (ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
  c_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_33;
      t = m_84(t);
    }
  else
    {
      ATerm h_33 = NULL,i_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_33 = ATgetFirst((ATermList) t);
          e_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_33;
      t = o_84(t);
      h_33 = t;
      t = e_33;
      t = foldr_3_0(m_84, n_84, o_84, t);
      i_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_33, i_33);
      t = n_84(t);
    }
  return(t);
}
ATerm g_5 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm g_27, ATerm f_27, ATerm t)
{
  t = a_82(t);
  {
    ATerm d_3 (ATerm t)
    {
      ATerm l_33 = NULL;
      l_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_27, l_33);
      t = z_81(t);
      return(t);
    }
    t = fetch_1_0(d_3, t);
    t = f_27;
  }
  return(t);
}
ATerm h_5 (ATerm r_81 (ATerm), ATerm a_27, ATerm z_26, ATerm t)
{
  ATerm b_34 (ATerm t)
  {
    ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
    w_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_33;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_33 = ATgetFirst((ATermList) t);
            y_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_12 = t;
          int d_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_33;
              {
                ATerm e_3 (ATerm t)
                {
                  t = z_26;
                  return(t);
                }
                t = g_5(r_81, e_3, x_33, y_33, t);
                t = b_34(t);
              }
              ;
              LocalPopChoice(d_12);
            }
          else
            {
              t = c_12;
              {
                ATerm k_29 = NULL,o_29 = NULL,m_3 = NULL;
                t = SSLgetAnnotations(w_33);
                k_29 = t;
                t = y_33;
                t = b_34(t);
                o_29 = t;
                t = (ATerm) ATinsert(CheckATermList(o_29), x_33);
                m_3 = t;
                t = SSLsetAnnotations(m_3, k_29);
              }
            }
        }
      }
    return(t);
  }
  t = a_27;
  t = b_34(t);
  return(t);
}
ATerm at_end_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm o_35 (ATerm t)
  {
    ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
    n_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_35 = ATgetFirst((ATermList) t);
        m_35 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_30 = NULL,n_30 = NULL,o_3 = NULL;
          t = SSLgetAnnotations(n_35);
          h_30 = t;
          t = m_35;
          t = o_35(t);
          n_30 = t;
          t = (ATerm) ATinsert(CheckATermList(n_30), l_35);
          o_3 = t;
          t = SSLsetAnnotations(o_3, h_30);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_35;
        t = z_79(t);
      }
    return(t);
  }
  t = o_35(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_34;
    }
  else
    {
      ATerm f_3 (ATerm t)
      {
        t = not_null(i_34);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((h_34 != NULL) && (h_34 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            h_34 = ATgetFirst((ATermList) t);
          if(((i_34 != NULL) && (i_34 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_34;
      t = at_end_1_0(f_3, t);
    }
  return(t);
}
ATerm c_36 (ATerm u_35, ATerm t)
{
  ATerm v_35 = NULL;
  t = SSL_explode_term(u_35);
  if(match_cons(t, sym__2))
    {
      ATerm e_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_35;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
  z_35 = t;
  if(match_cons(t, sym__2))
    {
      x_35 = ATgetArgument(t, 0);
      y_35 = ATgetArgument(t, 1);
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_3 (ATerm t)
            {
              t = y_35;
              return(t);
            }
            t = x_35;
            t = at_end_1_0(g_3, t);
            ;
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            t = c_36(z_35, t);
          }
      }
    }
  else
    {
      t = c_36(z_35, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm t)
{
  ATerm p_36 (ATerm t)
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_77(t);
        ;
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
        {
          ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,j_36 = NULL,k_36 = NULL,m_36 = NULL,q_3 = NULL;
          t = v_77(t);
          m_36 = t;
          if(match_cons(t, sym__2))
            {
              f_36 = ATgetArgument(t, 0);
              g_36 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_36);
          e_36 = t;
          t = f_36;
          t = x_77(t);
          j_36 = t;
          t = g_36;
          t = p_36(t);
          k_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
          q_3 = t;
          t = SSLsetAnnotations(q_3, e_36);
          t = w_77(t);
        }
      }
    return(t);
  }
  t = p_36(t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_12 = ATgetArgument(t, 0);
      if(((ATgetType(j_12) != AT_LIST) || !(ATisEmpty(j_12))))
        _fail(t);
      {
        ATerm k_12 = ATgetArgument(t, 1);
        if(((ATgetType(k_12) != AT_LIST) || !(ATisEmpty(k_12))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_12 = ATgetArgument(t, 0);
      if(((ATgetType(l_12) == AT_LIST) && !(ATisEmpty(l_12))))
        {
          x_36 = ATgetFirst((ATermList) l_12);
          y_36 = (ATerm) ATgetNext((ATermList) l_12);
        }
      else
        _fail(t);
      {
        ATerm m_12 = ATgetArgument(t, 1);
        if(((ATgetType(m_12) == AT_LIST) && !(ATisEmpty(m_12))))
          {
            z_36 = ATgetFirst((ATermList) m_12);
            a_37 = (ATerm) ATgetNext((ATermList) m_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_36, z_36), (ATerm) ATmakeAppl(sym__2, y_36, a_37));
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  if(match_cons(t, sym__2))
    {
      b_37 = ATgetArgument(t, 0);
      c_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_37), b_37);
  return(t);
}
ATerm j_5 (ATerm o_506, ATerm t_506, ATerm y_50, ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t = SSL_explode_term(t_506);
  if(match_cons(t, sym__2))
    {
      s_36 = ATgetArgument(t, 0);
      u_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_506);
  if(match_cons(t, sym__2))
    {
      if((s_36 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      t_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_36, u_36);
  t = genzip_4_0(k_3, n_3, p_3, _id, t);
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_36, y_50);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm t)
{
  ATerm e_37 (ATerm t)
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_91(t);
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        t = b_91(t);
        t = e_37(t);
      }
    return(t);
  }
  t = e_37(t);
  return(t);
}
ATerm for_3_0 (ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm t)
{
  t = d_91(t);
  t = while_not_2_0(e_91, f_91, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm l_37 = NULL;
  l_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, l_37);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,v_3 = NULL;
  p_37 = t;
  if(match_cons(t, sym__2))
    {
      n_37 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_37);
  m_37 = t;
  t = o_37;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_37, o_37);
  v_3 = t;
  t = SSLsetAnnotations(v_3, m_37);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
  n_38 = t;
  if(match_cons(t, sym__2))
    {
      o_38 = ATgetArgument(t, 0);
      p_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_38 = ATgetFirst((ATermList) t);
      r_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_39(o_38, p_38, n_38, t);
            ;
            LocalPopChoice(r_12);
          }
        else
          {
            t = q_12;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_38), q_38), r_38);
          }
      }
    }
  else
    {
      t = h_39(o_38, p_38, n_38, t);
    }
  return(t);
}
ATerm h_39 (ATerm q_37, ATerm r_37, ATerm s_37, ATerm t)
{
  ATerm t_37 = NULL,y_37 = NULL,x_3 = NULL,b_38 = NULL,c_38 = NULL,e_38 = NULL,f_38 = NULL;
  t = SSLgetAnnotations(s_37);
  t_37 = t;
  t = r_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_38 = ATgetFirst((ATermList) t);
      f_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_38;
  if(match_cons(t, sym__2))
    {
      c_38 = ATgetArgument(t, 0);
      e_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_38;
        if((c_38 != t))
          {
            _fail(t);
          }
        t = f_38;
        ;
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        t = r_37;
        t = j_5(c_38, e_38, f_38, t);
      }
    y_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_37, y_37);
    x_3 = t;
    t = SSLsetAnnotations(x_3, t_37);
  }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm g_39 = NULL;
  if(match_cons(t, sym__2))
    {
      g_39 = ATgetArgument(t, 0);
      if((g_39 != ATgetArgument(t, 1)))
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
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(u_3, w_3, y_3, t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
        ATerm v_38 = NULL,x_38 = NULL,y_38 = NULL;
        v_38 = t;
        if(match_cons(t, sym__2))
          {
            x_38 = ATgetArgument(t, 0);
            y_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_38;
        t = h_5(a_4, x_38, y_38, t);
      }
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL;
  if(match_cons(t, sym__2))
    {
      r_31 = ATgetArgument(t, 0);
      s_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(l_4, r_31, s_31, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm t_31 = NULL;
  if(match_cons(t, sym__2))
    {
      t_31 = ATgetArgument(t, 0);
      if((t_31 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL;
  if(match_cons(t, sym__2))
    {
      i_32 = ATgetArgument(t, 0);
      j_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(p_4, i_32, j_32, t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm n_32 = NULL;
  if(match_cons(t, sym__2))
    {
      n_32 = ATgetArgument(t, 0);
      if((n_32 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm r_88 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm v_39 (ATerm t)
  {
    ATerm x_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_88(t);
        ;
        LocalPopChoice(z_12);
      }
    else
      {
        t = x_12;
        {
          ATerm b_13 = t;
          int c_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_39 = NULL,k_39 = NULL,e_31 = NULL,f_31 = NULL;
              j_39 = t;
              t = q_88(t);
              k_39 = t;
              t = j_39;
              {
                ATerm c_4 (ATerm t)
                {
                  ATerm m_39 = NULL;
                  t = v_39(t);
                  m_39 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_39, k_39);
                  t = diff_0_0(t);
                  return(t);
                }
                t = r_88(c_4, v_39, e_4, t);
                if(((f_31 != NULL) && (f_31 != t)))
                  _fail(t);
                else
                  f_31 = t;
                t = SSL_explode_term(f_31);
                if(match_cons(t, sym__2))
                  {
                    ATerm d_13 = ATgetArgument(t, 0);
                    if(((e_31 != NULL) && (e_31 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      e_31 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_31;
                t = foldr_3_0(g_4, h_4, _id, t);
              }
              ;
              LocalPopChoice(c_13);
            }
          else
            {
              t = b_13;
              {
                ATerm z_31 = NULL,a_32 = NULL;
                a_32 = t;
                t = SSL_explode_term(a_32);
                if(match_cons(t, sym__2))
                  {
                    ATerm e_13 = ATgetArgument(t, 0);
                    z_31 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_31;
                t = foldr_3_0(m_4, o_4, v_39, t);
              }
            }
        }
      }
    return(t);
  }
  t = v_39(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm i_40 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_40);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
      {
        ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            k_40 = ATgetArgument(t, 0);
            t = k_40;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                k_40 = ATgetArgument(t, 0);
                l_40 = ATgetArgument(t, 1);
                m_40 = ATgetArgument(t, 2);
                n_40 = ATgetArgument(t, 3);
                t = m_40;
                t = map_1_0(t_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    k_40 = ATgetArgument(t, 0);
                    l_40 = ATgetArgument(t, 1);
                    m_40 = ATgetArgument(t, 2);
                    n_40 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = m_40;
                t = map_1_0(u_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm b_41 = NULL;
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_41 = ATgetArgument(t, 0);
          {
            ATerm j_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_13);
      t = b_41;
    }
  else
    {
      t = h_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_41;
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm q_41 = NULL;
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_41 = ATgetArgument(t, 0);
          {
            ATerm m_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_13);
      t = q_41;
    }
  else
    {
      t = k_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_41;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm b_40 = NULL,f_40 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      f_40 = ATgetArgument(t, 0);
      t = f_40;
      if(match_cons(t, sym_Rule_3))
        {
          b_40 = ATgetArgument(t, 0);
          {
            ATerm n_13 = ATgetArgument(t, 1);
          }
          {
            ATerm o_13 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = b_40;
      t = free_vars_3_0(r_4, s_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          f_40 = ATgetArgument(t, 0);
          {
            ATerm q_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = f_40;
    }
  return(t);
}
ATerm Var_1_0 (ATerm u_59 (ATerm), ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,b_4 = NULL;
  x_41 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_41);
  u_41 = t;
  t = v_41;
  t = u_59(t);
  w_41 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_41);
  b_4 = t;
  t = SSLsetAnnotations(b_4, u_41);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      {
        ATerm t_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            t_42 = ATgetArgument(t, 0);
            y_42 = ATgetArgument(t, 1);
            z_42 = ATgetArgument(t, 2);
            a_43 = ATgetArgument(t, 3);
            t = z_42;
            t = map_1_0(w_4, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                t_42 = ATgetArgument(t, 0);
                y_42 = ATgetArgument(t, 1);
                z_42 = ATgetArgument(t, 2);
                a_43 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = z_42;
            t = map_1_0(x_4, t);
          }
      }
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm l_43 = NULL;
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_43 = ATgetArgument(t, 0);
          {
            ATerm v_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_13);
      t = l_43;
    }
  else
    {
      t = t_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_43;
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm a_44 = NULL;
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_44 = ATgetArgument(t, 0);
          {
            ATerm y_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_13);
      t = a_44;
    }
  else
    {
      t = w_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_44;
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,i_44 = NULL,j_44 = NULL;
  d_44 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_44 = ATgetArgument(t, 0);
      f_44 = ATgetArgument(t, 1);
      t = d_44;
      t = a_5(e_44, f_44, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_44 = ATgetArgument(t, 0);
          f_44 = ATgetArgument(t, 1);
          i_44 = ATgetArgument(t, 2);
          t = f_44;
          t = map_1_0(b_5, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              e_44 = ATgetArgument(t, 0);
              f_44 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, e_44);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  e_44 = ATgetArgument(t, 0);
                  f_44 = ATgetArgument(t, 1);
                  i_44 = ATgetArgument(t, 2);
                  j_44 = ATgetArgument(t, 3);
                  t = f_44;
                  t = map_1_0(c_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_44 = ATgetArgument(t, 0);
                      f_44 = ATgetArgument(t, 1);
                      i_44 = ATgetArgument(t, 2);
                      j_44 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_44;
                  t = map_1_0(d_5, t);
                }
            }
        }
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm r_44 = NULL;
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_44 = ATgetArgument(t, 0);
          {
            ATerm b_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_14);
      t = r_44;
    }
  else
    {
      t = z_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_44;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm e_45 = NULL;
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_45 = ATgetArgument(t, 0);
          {
            ATerm i_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_14);
      t = e_45;
    }
  else
    {
      t = c_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_45;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm x_45 = NULL;
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_45 = ATgetArgument(t, 0);
          {
            ATerm l_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_14);
      t = x_45;
    }
  else
    {
      t = j_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_45;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, v_4, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, z_4, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm t_5 (ATerm e_42, ATerm f_42, ATerm t)
{
  ATerm d_46 = NULL;
  t = SSL_fputc(e_42, f_42);
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_46);
  return(t);
}
ATerm u_5 (ATerm p_46, ATerm q_46, ATerm t)
{
  ATerm f_46 = NULL;
  t = SSL_write_term_to_stream_text(p_46, q_46);
  f_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_46);
  return(t);
}
ATerm w_5 (ATerm u_94 (ATerm), ATerm v_455, ATerm t_46, ATerm t)
{
  ATerm i_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_455, term_m_14);
  t = open_stream_0_0(t);
  i_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_46, t_46);
  t = u_94(t);
  t = fclose_0_0(t);
  t = t_46;
  return(t);
}
ATerm v_5 (ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm j_46 = NULL;
  t = SSL_write_term_to_stream_baf(l_46, m_46);
  j_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_46);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_14 = ATgetArgument(t, 0);
      if(match_cons(n_14, sym_Stream_1))
        {
          x_46 = ATgetArgument(n_14, 0);
        }
      else
        _fail(t);
      y_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(x_46, y_46, t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm z_46 = NULL,b_47 = NULL,c_47 = NULL,f_47 = NULL,h_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      if(match_cons(o_14, sym_Stream_1))
        {
          f_47 = ATgetArgument(o_14, 0);
        }
      else
        _fail(t);
      h_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(f_47, h_47, t);
  z_46 = t;
  t = term_p_14;
  b_47 = t;
  t = z_46;
  if(match_cons(t, sym_Stream_1))
    {
      c_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_14, z_46);
  t = t_5(b_47, c_47, t);
  return(t);
}
ATerm output_1_0 (ATerm o_92 (ATerm), ATerm t)
{
  ATerm k_46 = NULL,o_46 = NULL;
  t = o_92(t);
  o_46 = t;
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_14;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        t = term_u_14;
      }
    k_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_46, o_46);
    {
      ATerm v_14 = t;
      int y_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_z_14;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, k_46, o_46);
          LocalPopChoice(y_14);
          if(match_cons(t, sym__2))
            {
              ATerm a_15 = ATgetArgument(t, 0);
              ATerm b_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_5(i_5, k_46, o_46, t);
        }
      else
        {
          t = v_14;
          if(match_cons(t, sym__2))
            {
              ATerm c_15 = ATgetArgument(t, 0);
              ATerm d_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_5(m_5, k_46, o_46, t);
        }
    }
  }
  return(t);
}
ATerm g_48 (ATerm w_47, ATerm t)
{
  t = SSL_fclose(w_47);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL;
  d_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_48 = ATgetArgument(t, 0);
      {
        ATerm e_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_48);
            ;
            LocalPopChoice(f_15);
          }
        else
          {
            t = e_15;
            t = g_48(d_48, t);
          }
      }
    }
  else
    {
      t = g_48(d_48, t);
    }
  return(t);
}
ATerm x_5 (ATerm r_46, ATerm t)
{
  t = SSL_read_term_from_stream(r_46);
  return(t);
}
ATerm y_5 (ATerm g_42, ATerm h_42, ATerm t)
{
  ATerm h_48 = NULL;
  t = SSL_fopen(g_42, h_42);
  h_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_48);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_48 = NULL;
  t = SSL_stdin_stream();
  i_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_48);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_48 = NULL;
  t = SSL_stdout_stream();
  n_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_48);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_48 = NULL;
  t = SSL_stderr_stream();
  o_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_48);
  return(t);
}
ATerm e_50 (ATerm w_48, ATerm t)
{
  ATerm x_48 = NULL;
  t = SSL_explode_term(w_48);
  if(match_cons(t, sym__2))
    {
      ATerm g_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_15 = ATgetArgument(t, 1);
        if(((ATgetType(h_15) == AT_LIST) && !(ATisEmpty(h_15))))
          {
            x_48 = ATgetFirst((ATermList) h_15);
            {
              ATerm j_15 = (ATerm) ATgetNext((ATermList) h_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_48;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_48;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_48;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_48;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm f_50 (ATerm c_49, ATerm d_49, ATerm e_49, ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL,n_49 = NULL,d_4 = NULL;
  t = SSLgetAnnotations(e_49);
  j_49 = t;
  t = c_49;
  if(match_cons(t, sym_Path_1))
    {
      n_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_49, d_49);
  d_4 = t;
  t = SSLsetAnnotations(d_4, j_49);
  if(match_cons(t, sym__2))
    {
      h_49 = ATgetArgument(t, 0);
      i_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(h_49, i_49, t);
  return(t);
}
ATerm g_50 (ATerm p_49, ATerm q_49, ATerm r_49, ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,z_49 = NULL,f_4 = NULL;
  t = SSLgetAnnotations(r_49);
  u_49 = t;
  t = SSL_is_string(p_49);
  z_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_49, q_49);
  f_4 = t;
  t = SSLsetAnnotations(f_4, u_49);
  if(match_cons(t, sym__2))
    {
      s_49 = ATgetArgument(t, 0);
      t_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(s_49, t_49, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_15 = ATgetArgument(t, 0);
      ATerm q_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  b_50 = t;
  if(match_cons(t, sym__2))
    {
      c_50 = ATgetArgument(t, 0);
      d_50 = ATgetArgument(t, 1);
      {
        ATerm r_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_50(b_50, t);
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
                  t = f_50(c_50, d_50, b_50, t);
                  ;
                  LocalPopChoice(u_15);
                }
              else
                {
                  t = t_15;
                  t = g_50(c_50, d_50, b_50, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_50(b_50, t);
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_v_15;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_50 = NULL;
      k_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_50, term_y_15);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
      t = debug_1_0(n_5, t);
      _fail(t);
    }
  i_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(j_50, t);
  h_50 = t;
  t = i_50;
  t = fclose_0_0(t);
  t = h_50;
  return(t);
}
ATerm input_1_0 (ATerm p_92 (ATerm), ATerm t)
{
  ATerm z_15 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_16);
    }
  else
    {
      t = z_15;
      t = term_g_16;
    }
  t = ReadFromFile_0_0(t);
  t = p_92(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
  m_50 = t;
  t = term_h_16;
  t = whoami_0_0(t);
  o_50 = t;
  t = term_i_16;
  q_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_16), o_50), term_j_16);
  r_50 = t;
  t = SSL_printnl(q_50, r_50);
  t = term_l_16;
  p_50 = t;
  t = SSL_exit(p_50);
  t = m_50;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm u_50 = NULL;
  u_50 = t;
  if(match_string(t, "-k"))
    {
      t = u_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_50;
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,d_51 = NULL;
  z_50 = t;
  t = SSL_string_to_int(z_50);
  a_51 = t;
  t = term_m_16;
  d_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_16, a_51);
  t = g_6(d_51, a_51, t);
  t = z_50;
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_5, r_5, a_6, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm f_51 = NULL;
  f_51 = t;
  if(match_string(t, "-S"))
    {
      t = f_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_51;
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL;
  t = term_q_16;
  g_51 = t;
  t = term_s_16;
  h_51 = t;
  t = term_t_16;
  t = g_6(g_51, h_51, t);
  t = term_v_16;
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = term_x_16;
  return(t);
}
ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  p_51 = t;
  t = SSL_string_to_int(p_51);
  q_51 = t;
  t = term_q_16;
  r_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_16, q_51);
  t = g_6(r_51, q_51, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_51);
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_a_17;
  return(t);
}
ATerm m_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL;
  t = term_e_17;
  s_51 = t;
  t = term_h_16;
  t_51 = t;
  t = term_f_17;
  t = g_6(s_51, t_51, t);
  t = term_i_17;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_l_17;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_6, h_6, i_6, t);
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      {
        ATerm p_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_6, k_6, l_6, t);
            ;
            LocalPopChoice(q_17);
          }
        else
          {
            t = p_17;
            t = Option_3_0(m_6, n_6, o_6, t);
          }
      }
    }
  return(t);
}
ATerm g_6 (ATerm b_51, ATerm c_51, ATerm t)
{
  ATerm u_51 = NULL;
  t = term_u_17;
  u_51 = t;
  t = SSL_table_put(u_51, b_51, c_51);
  t = (ATerm) ATmakeAppl(sym__3, term_u_17, b_51, c_51);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm y_51 = NULL,a_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_52 = NULL,d_52 = NULL,e_52 = NULL;
      t = term_h_16;
      t = h_0(t);
      b_52 = t;
      t = term_w_17;
      d_52 = t;
      t = term_x_17;
      e_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_17, term_x_17, b_52);
      t = e_6(d_52, e_52, b_52, t);
      _fail(t);
    }
  else
    {
      ATerm i_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_51 = ATgetFirst((ATermList) t);
          a_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_51;
      t = d_0(t);
      t = term_h_16;
      t = g_0(t);
      i_52 = t;
      t = (ATerm) ATinsert(CheckATermList(a_52), i_52);
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm q_52 = NULL;
  q_52 = t;
  if(match_string(t, "-o"))
    {
      t = q_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_52;
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL;
  r_52 = t;
  t = term_t_14;
  s_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_14, r_52);
  t = g_6(s_52, r_52, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_52);
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_z_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_6, s_6, u_6, t);
  return(t);
}
ATerm e_6 (ATerm l_32, ATerm m_32, ATerm k_32, ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
  v_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_32, m_32);
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_18 = ATgetArgument(t, 0);
            ATerm f_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_32, m_32);
        t = d_6(l_32, m_32, t);
        ;
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        t = (ATerm) ATempty;
      }
    w_52 = t;
    t = (ATerm) ATinsert(CheckATermList(w_52), k_32);
    x_52 = t;
    t = SSL_table_put(l_32, m_32, x_52);
    t = v_52;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,l_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL;
      t = term_h_16;
      t = m_0(t);
      m_53 = t;
      t = term_w_17;
      n_53 = t;
      t = term_x_17;
      o_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_17, term_x_17, m_53);
      t = e_6(n_53, o_53, m_53, t);
      _fail(t);
    }
  else
    {
      ATerm s_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_53 = ATgetFirst((ATermList) t);
          i_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_53;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_53 = ATgetFirst((ATermList) t);
          l_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_53;
      t = k_0(t);
      t = j_53;
      t = l_0(t);
      s_53 = t;
      t = (ATerm) ATinsert(CheckATermList(l_53), s_53);
    }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm u_53 = NULL;
  u_53 = t;
  if(match_string(t, "-i"))
    {
      t = u_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_53;
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm v_53 = NULL,y_53 = NULL;
  v_53 = t;
  t = term_f_16;
  y_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_16, v_53);
  t = g_6(y_53, v_53, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_53);
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_v_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_6, x_6, c_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,d_54 = NULL,e_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_16;
  t = whoami_0_0(t);
  z_53 = t;
  t = term_i_16;
  d_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_18), z_53);
  e_54 = t;
  t = SSL_printnl(d_54, e_54);
  t = term_l_16;
  a_54 = t;
  t = SSL_exit(a_54);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_18;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_5 (ATerm p_30, ATerm q_30, ATerm t)
{
  ATerm y_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_30, q_30);
      ;
      LocalPopChoice(a_19);
    }
  else
    {
      t = y_18;
      t = SSL_addr(p_30, q_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm t)
{
  ATerm g_54 = NULL,k_54 = NULL,n_54 = NULL;
  g_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_54;
      t = k_84(t);
    }
  else
    {
      ATerm u_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_54 = ATgetFirst((ATermList) t);
          n_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_54;
      t = foldr_2_0(k_84, l_84, t);
      u_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_54, u_54);
      t = l_84(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_s_16;
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm s_34 = NULL,u_34 = NULL;
  if(match_cons(t, sym__2))
    {
      s_34 = ATgetArgument(t, 0);
      u_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(s_34, u_34, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_54 = NULL,m_34 = NULL,n_34 = NULL;
  t = times_0_0(t);
  n_34 = t;
  t = SSL_explode_term(n_34);
  if(match_cons(t, sym__2))
    {
      ATerm c_19 = ATgetArgument(t, 0);
      m_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_34;
  t = foldr_2_0(e_7, h_7, t);
  z_54 = t;
  t = SSL_TicksToSeconds(z_54);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
  q_55 = t;
  if(match_cons(t, sym__2))
    {
      r_55 = ATgetArgument(t, 0);
      s_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_55;
        if((r_55 != t))
          {
            _fail(t);
          }
        t = q_55;
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        t = (ATerm) ATmakeAppl(sym__2, r_55, s_55);
        {
          ATerm g_19 = t;
          int h_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_55, s_55);
              ;
              LocalPopChoice(h_19);
            }
          else
            {
              t = g_19;
              t = SSL_gtr(r_55, s_55);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_55, s_55);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_101 (ATerm), ATerm t)
{
  ATerm w_55 = NULL;
  w_55 = t;
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_55 = NULL;
        t = term_q_16;
        t = get_config_0_0(t);
        y_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_55, term_l_16);
        t = geq_0_0(t);
        t = w_55;
        t = b_101(t);
        ;
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        t = w_55;
      }
  }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL,d_56 = NULL,e_56 = NULL;
  t = run_time_0_0(t);
  a_56 = t;
  t = term_h_16;
  t = whoami_0_0(t);
  b_56 = t;
  t = term_i_16;
  d_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_19), a_56), term_k_19), b_56);
  e_56 = t;
  t = SSL_printnl(d_56, e_56);
  t = (ATerm) ATmakeAppl(sym__2, term_i_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_19), a_56), term_k_19), b_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_16;
  f_56 = t;
  t = SSL_exit(f_56);
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm n_56 = NULL,q_56 = NULL;
  q_56 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_56;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_56 = ATgetArgument(t, 0);
          {
            ATerm h_36 = NULL,k_4 = NULL;
            t = SSLgetAnnotations(q_56);
            h_36 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_56);
            k_4 = t;
            t = SSLsetAnnotations(k_4, h_36);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_56;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_92 (ATerm), ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      t = fetch_1_0(j_7, t);
    }
  t = f_92(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_56 = ATgetFirst((ATermList) t);
      u_56 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_56 = NULL,z_56 = NULL;
        ATerm k_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_56)), not_null(z_56));
          return(t);
        }
        t = u_56;
        t = j_0(t);
        if(((y_56 != NULL) && (y_56 != t)))
          _fail(t);
        else
          y_56 = t;
        t = t_56;
        t = i_0(t);
        if(((z_56 != NULL) && (z_56 != t)))
          _fail(t);
        else
          z_56 = t;
        t = u_56;
        t = reverse_acc_2_0(i_0, k_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_16;
      t = j_0(t);
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL,n_4 = NULL;
  f_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_57);
  d_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_57);
  n_4 = t;
  t = SSLsetAnnotations(n_4, d_57);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm h_57 = NULL;
  h_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_57), term_p_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL;
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      t = fetch_1_0(l_7, t);
    }
  t = term_s_19;
  t = echo_0_0(t);
  t = term_w_17;
  b_57 = t;
  t = term_x_17;
  c_57 = t;
  t = term_t_19;
  t = d_6(b_57, c_57, t);
  t = reverse_acc_2_0(_id, m_7, t);
  t = map_1_0(n_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm t_79 (ATerm), ATerm t)
{
  ATerm e_58 (ATerm t)
  {
    ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL;
    b_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_58 = ATgetFirst((ATermList) t);
        d_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_19 = t;
      int v_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_37 = NULL,j_37 = NULL,q_4 = NULL;
          t = SSLgetAnnotations(b_58);
          g_37 = t;
          t = c_58;
          t = t_79(t);
          j_37 = t;
          t = (ATerm) ATinsert(CheckATermList(d_58), j_37);
          q_4 = t;
          t = SSLsetAnnotations(q_4, g_37);
          ;
          LocalPopChoice(v_19);
        }
      else
        {
          t = u_19;
          {
            ATerm z_38 = NULL,e_39 = NULL,y_4 = NULL;
            t = SSLgetAnnotations(b_58);
            z_38 = t;
            t = d_58;
            t = e_58(t);
            e_39 = t;
            t = (ATerm) ATinsert(CheckATermList(e_39), c_58);
            y_4 = t;
            t = SSLsetAnnotations(y_4, z_38);
          }
        }
    }
    return(t);
  }
  t = e_58(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
  i_58 = t;
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_19 = ATgetFirst((ATermList) t);
                ATerm z_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_58;
          }
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        t = (ATerm) ATinsert(ATempty, i_58);
      }
    j_58 = t;
    t = term_u_14;
    k_58 = t;
    t = SSL_printnl(k_58, j_58);
    t = i_58;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_18;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm c_6 (ATerm u_40, ATerm v_40, ATerm t)
{
  t = SSL_strcat(u_40, v_40);
  return(t);
}
ATerm debug_1_0 (ATerm s_94 (ATerm), ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL;
  q_58 = t;
  t = s_94(t);
  r_58 = t;
  t = term_i_16;
  s_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_58), r_58);
  t_58 = t;
  t = SSL_printnl(s_58, t_58);
  t = q_58;
  return(t);
}
ATerm map_1_0 (ATerm j_79 (ATerm), ATerm t)
{
  ATerm i_59 (ATerm t)
  {
    ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL;
    f_59 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_59;
      }
    else
      {
        ATerm q_40 = NULL,t_40 = NULL,i_41 = NULL,e_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_59 = ATgetFirst((ATermList) t);
            h_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_59);
        q_40 = t;
        t = g_59;
        t = j_79(t);
        t_40 = t;
        t = h_59;
        t = i_59(t);
        i_41 = t;
        t = (ATerm) ATinsert(CheckATermList(i_41), t_40);
        e_5 = t;
        t = SSLsetAnnotations(e_5, q_40);
      }
    return(t);
  }
  t = i_59(t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_59 = NULL;
      q_59 = t;
      t = SSL_is_string(q_59);
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = h_20;
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_7, t);
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            {
              ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL;
              x_59 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_59 = ATgetArgument(t, 0);
                  t = y_59;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_59 = ATgetArgument(t, 0);
                      t = y_59;
                      {
                        ATerm n_20 = t;
                        int q_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_20);
                          }
                        else
                          {
                            t = n_20;
                            t = debug_1_0(p_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_60 = NULL,e_60 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_59 = ATgetArgument(t, 0);
                          z_59 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_59;
                      t = eval_config_0_0(t);
                      d_60 = t;
                      t = z_59;
                      t = eval_config_0_0(t);
                      e_60 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_60, e_60);
                      t = c_6(d_60, e_60, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm d_6 (ATerm c_34, ATerm d_34, ATerm t)
{
  t = SSL_table_get(c_34, d_34);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm i_60 = NULL,j_60 = NULL;
  i_60 = t;
  t = term_u_17;
  j_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, i_60);
  t = d_6(j_60, i_60, t);
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_60 = NULL,l_60 = NULL;
        t = eval_config_0_0(t);
        k_60 = t;
        t = term_u_17;
        l_60 = t;
        t = SSL_table_put(l_60, i_60, k_60);
        t = k_60;
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
      }
  }
  return(t);
}
ATerm q_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL;
  t = term_t_20;
  o_60 = t;
  t = term_h_16;
  p_60 = t;
  t = term_y_20;
  t = g_6(o_60, p_60, t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = term_a_21;
  return(t);
}
ATerm t_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL;
  t = term_t_20;
  s_60 = t;
  t = term_h_16;
  t_60 = t;
  t = term_y_20;
  t = g_6(s_60, t_60, t);
  t = term_b_21;
  q_60 = t;
  t = term_h_16;
  r_60 = t;
  t = term_c_21;
  t = g_6(q_60, r_60, t);
  t = term_d_21;
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_h_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_7, r_7, s_7, t);
      ;
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      t = Option_3_0(t_7, u_7, v_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_58 (ATerm), ATerm o_58 (ATerm), ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,p_5 = NULL;
  z_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_60 = ATgetFirst((ATermList) t);
      w_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_60);
  u_60 = t;
  t = v_60;
  t = n_58(t);
  x_60 = t;
  t = w_60;
  t = o_58(t);
  y_60 = t;
  t = (ATerm) ATinsert(CheckATermList(y_60), x_60);
  p_5 = t;
  t = SSLsetAnnotations(p_5, u_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_97 (ATerm), ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,j_61 = NULL,k_61 = NULL,s_5 = NULL;
  e_61 = t;
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_21;
        t = b_97(t);
        ;
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
      }
    t = e_61;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_61 = ATgetFirst((ATermList) t);
        h_61 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_61);
    f_61 = t;
    t = term_x_18;
    k_61 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_18, g_61);
    t = g_6(k_61, g_61, t);
    t = h_61;
    {
      ATerm u_61 (ATerm t)
      {
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_21 = t;
            int w_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_61 = NULL;
                n_61 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_61;
                ;
                LocalPopChoice(w_21);
              }
            else
              {
                t = v_21;
                t = b_97(t);
                t = Cons_2_0(_id, u_61, t);
              }
            ;
            LocalPopChoice(u_21);
          }
        else
          {
            t = t_21;
            {
              ATerm q_61 = NULL,r_61 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_61 = ATgetFirst((ATermList) t);
                  r_61 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_61), (ATerm) ATmakeAppl(sym_Undefined_1, q_61));
            }
          }
        return(t);
      }
      t = u_61(t);
      if(((j_61 != NULL) && (j_61 != t)))
        _fail(t);
      else
        j_61 = t;
      t = (ATerm) ATinsert(CheckATermList(j_61), (ATerm) ATmakeAppl(sym_Program_1, g_61));
      if(((s_5 != NULL) && (s_5 != t)))
        _fail(t);
      else
        s_5 = t;
      t = SSLsetAnnotations(s_5, f_61);
    }
  }
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm g_62 = NULL;
  g_62 = t;
  if(match_string(t, "--help"))
    {
      t = g_62;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_62;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_62;
        }
    }
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL;
  t = term_o_19;
  h_62 = t;
  t = term_h_16;
  i_62 = t;
  t = term_x_21;
  t = g_6(h_62, i_62, t);
  t = term_y_21;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm a_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_97 (ATerm), ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL;
  b_62 = t;
  t = term_w_17;
  d_62 = t;
  t = term_x_17;
  e_62 = t;
  t = (ATerm) ATempty;
  f_62 = t;
  t = SSL_table_put(d_62, e_62, f_62);
  t = b_62;
  {
    ATerm w_7 (ATerm t)
    {
      ATerm a_22 = t;
      int b_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_97(t);
          ;
          LocalPopChoice(b_22);
        }
      else
        {
          t = a_22;
          {
            ATerm c_22 = t;
            int e_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_7, y_7, z_7, t);
                ;
                LocalPopChoice(e_22);
              }
            else
              {
                t = c_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_7, t);
    {
      ATerm f_22 = t;
      int g_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_62 = NULL;
          p_62 = t;
          {
            ATerm j_22 = t;
            int k_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_42 = NULL;
                t = p_62;
                {
                  ATerm l_22 = t;
                  int m_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_o_19;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(m_22);
                    }
                  else
                    {
                      t = l_22;
                      t = fetch_1_0(a_8, t);
                    }
                  t = p_62;
                  t = default_system_usage_0_0(t);
                  t = term_s_16;
                  l_42 = t;
                  t = SSL_exit(l_42);
                }
                ;
                LocalPopChoice(k_22);
              }
            else
              {
                t = j_22;
                {
                  ATerm p_42 = NULL;
                  t = term_t_20;
                  t = get_config_0_0(t);
                  t = p_62;
                  t = default_system_about_0_0(t);
                  t = term_s_16;
                  p_42 = t;
                  t = SSL_exit(p_42);
                }
              }
          }
          ;
          LocalPopChoice(g_22);
        }
      else
        {
          t = f_22;
          {
            ATerm n_22 = t;
            int o_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL;
                ATerm b_8 (ATerm t)
                {
                  ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL,b_6 = NULL;
                  v_62 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      u_62 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_62);
                  t_62 = t;
                  t = u_62;
                  if(((z_61 != NULL) && (z_61 != t)))
                    _fail(t);
                  else
                    z_61 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_62);
                  b_6 = t;
                  t = SSLsetAnnotations(b_6, t_62);
                  return(t);
                }
                t = fetch_1_0(b_8, t);
                t = term_i_16;
                if(((r_62 != NULL) && (r_62 != t)))
                  _fail(t);
                else
                  r_62 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_61)), term_p_22);
                if(((s_62 != NULL) && (s_62 != t)))
                  _fail(t);
                else
                  s_62 = t;
                t = SSL_printnl(r_62, s_62);
                t = (ATerm) ATmakeAppl(sym__2, term_i_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_61)), term_p_22));
                t = default_system_usage_0_0(t);
                t = term_l_16;
                if(((q_62 != NULL) && (q_62 != t)))
                  _fail(t);
                else
                  q_62 = t;
                t = SSL_exit(q_62);
                ;
                LocalPopChoice(o_22);
              }
            else
              {
                t = n_22;
              }
          }
        }
      if(((a_62 != NULL) && (a_62 != t)))
        _fail(t);
      else
        a_62 = t;
      t = term_w_17;
      if(((c_62 != NULL) && (c_62 != t)))
        _fail(t);
      else
        c_62 = t;
      t = SSL_table_destroy(c_62);
      t = a_62;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL,e_63 = NULL;
  t = parse_options_1_0(h_92, t);
  a_63 = t;
  t = term_q_22;
  e_63 = t;
  t = SSL_table_create(e_63);
  t = term_q_22;
  b_63 = t;
  t = term_r_22;
  c_63 = t;
  t = SSL_table_put(b_63, c_63, a_63);
  t = a_63;
  t = j_92(t);
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_92, t);
        ;
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        {
          ATerm u_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(v_22);
            }
          else
            {
              t = u_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
            {
              ATerm a_23 = t;
              int c_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(e_8, f_8, g_8, t);
                  ;
                  LocalPopChoice(c_23);
                }
              else
                {
                  t = a_23;
                  {
                    ATerm d_23 = t;
                    int e_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(e_23);
                      }
                    else
                      {
                        t = d_23;
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
ATerm d_8 (ATerm t)
{
  t = input_1_0(h_8, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL;
  t = term_z_14;
  g_63 = t;
  t = term_h_16;
  h_63 = t;
  t = term_f_23;
  t = g_6(g_63, h_63, t);
  t = term_g_23;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = output_1_0(strename_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(c_8, default_usage_0_0, _id, d_8, t);
  return(t);
}
