#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_Fail_0;
Symbol sym_Success_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
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
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_LNil_0;
Symbol sym_LCons_3;
Symbol sym_NL_0;
Symbol sym_L_1;
Symbol sym_UL_0;
Symbol sym_US_0;
Symbol sym_Label_2;
Symbol sym_Bracket_5;
Symbol sym_amb_2;
Symbol sym_amb1_1;
Symbol sym_amb2_1;
Symbol sym_Input2_1;
Symbol sym_Path_0;
Symbol sym_SquashedPath_0;
Symbol sym_NoPath_0;
Symbol sym_TopMost_0;
Symbol sym_UseAmbMark_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Success_0 = ATmakeSymbol("Success", 0, ATfalse);
  ATprotectSymbol(sym_Success_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
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
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_LNil_0 = ATmakeSymbol("LNil", 0, ATfalse);
  ATprotectSymbol(sym_LNil_0);
  sym_LCons_3 = ATmakeSymbol("LCons", 3, ATfalse);
  ATprotectSymbol(sym_LCons_3);
  sym_NL_0 = ATmakeSymbol("NL", 0, ATfalse);
  ATprotectSymbol(sym_NL_0);
  sym_L_1 = ATmakeSymbol("L", 1, ATfalse);
  ATprotectSymbol(sym_L_1);
  sym_UL_0 = ATmakeSymbol("UL", 0, ATfalse);
  ATprotectSymbol(sym_UL_0);
  sym_US_0 = ATmakeSymbol("US", 0, ATfalse);
  ATprotectSymbol(sym_US_0);
  sym_Label_2 = ATmakeSymbol("Label", 2, ATfalse);
  ATprotectSymbol(sym_Label_2);
  sym_Bracket_5 = ATmakeSymbol("Bracket", 5, ATfalse);
  ATprotectSymbol(sym_Bracket_5);
  sym_amb_2 = ATmakeSymbol("amb", 2, ATfalse);
  ATprotectSymbol(sym_amb_2);
  sym_amb1_1 = ATmakeSymbol("amb1", 1, ATfalse);
  ATprotectSymbol(sym_amb1_1);
  sym_amb2_1 = ATmakeSymbol("amb2", 1, ATfalse);
  ATprotectSymbol(sym_amb2_1);
  sym_Input2_1 = ATmakeSymbol("Input2", 1, ATfalse);
  ATprotectSymbol(sym_Input2_1);
  sym_Path_0 = ATmakeSymbol("Path", 0, ATfalse);
  ATprotectSymbol(sym_Path_0);
  sym_SquashedPath_0 = ATmakeSymbol("SquashedPath", 0, ATfalse);
  ATprotectSymbol(sym_SquashedPath_0);
  sym_NoPath_0 = ATmakeSymbol("NoPath", 0, ATfalse);
  ATprotectSymbol(sym_NoPath_0);
  sym_TopMost_0 = ATmakeSymbol("TopMost", 0, ATfalse);
  ATprotectSymbol(sym_TopMost_0);
  sym_UseAmbMark_0 = ATmakeSymbol("UseAmbMark", 0, ATfalse);
  ATprotectSymbol(sym_UseAmbMark_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_c_25;
ATerm term_v_24;
ATerm term_j_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_m_23;
ATerm term_k_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_p_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_j_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_s_21;
ATerm term_o_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_w_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_w_18;
ATerm term_b_18;
ATerm term_z_17;
ATerm term_k_17;
ATerm term_r_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_q_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_k_12;
ATerm term_v_10;
ATerm term_d_9;
ATerm term_b_9;
ATerm term_w_8;
ATerm term_q_8;
ATerm term_n_8;
ATerm term_c_8;
ATerm term_v_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_z_6;
void init_constant_terms (void)
{
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("0.2", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" version ", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] -i file -i2 file [-o file] [-b]", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n		{--path|--nopath|--squashedpath|--topmost}", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [--useambmark]", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n		[--help|-h|-?] [--version]\n", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_Path_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_SquashedPath_0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_NoPath_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_TopMost_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_UseAmbMark_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("..", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("diff: ", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__3, term_i_13, term_i_13, term_l_7);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_w_15, term_b_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_i_13);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_w_18, term_q_13);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_13);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__2, term_v_21, term_b_7);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_g_22, term_b_7);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym__2, term_m_22, term_b_7);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym__2, term_g_23, term_k_23);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym__3, term_g_23, term_k_23, (ATerm) ATempty);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm version_0 (ATerm);
ATerm my_usage_0 (ATerm);
ATerm Option_2 (ATerm, ATerm t_62 (ATerm), ATerm u_62 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm e_63 (ATerm), ATerm f_63 (ATerm));
ATerm ops_0 (ATerm);
ATerm echo_1 (ATerm, ATerm e_66 (ATerm));
ATerm try_echo_1 (ATerm, ATerm u_86 (ATerm));
ATerm is_diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm u_81 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm h_65 (ATerm));
ATerm laydiff_2 (ATerm, ATerm n_86 (ATerm), ATerm o_86 (ATerm));
ATerm laydiff_1 (ATerm, ATerm m_86 (ATerm));
ATerm is_list_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm LConstoCons_0 (ATerm);
ATerm laydiff_squash_2 (ATerm, ATerm r_86 (ATerm), ATerm s_86 (ATerm));
ATerm laydiff_squash_1 (ATerm, ATerm q_86 (ATerm));
ATerm printtopdiff_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm e_74 (ATerm));
ATerm zip_1 (ATerm, ATerm g_74 (ATerm));
ATerm eq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm d_70 (ATerm));
ATerm length_0 (ATerm);
ATerm L_1 (ATerm, ATerm j_57 (ATerm));
ATerm UL_0 (ATerm);
ATerm NL_0 (ATerm);
ATerm is_layout_0 (ATerm);
ATerm layeq_2 (ATerm, ATerm j_86 (ATerm), ATerm k_86 (ATerm));
ATerm printdiff_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm z_75 (ATerm));
ATerm get_options_0 (ATerm);
ATerm option_value_2 (ATerm, ATerm i_65 (ATerm), ATerm j_65 (ATerm));
ATerm ldiff_0 (ATerm);
ATerm _2 (ATerm, ATerm y_50 (ATerm), ATerm z_50 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_66 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm z_69 (ATerm), ATerm a_70 (ATerm));
ATerm crush_2 (ATerm, ATerm r_71 (ATerm), ATerm s_71 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_63 (ATerm));
ATerm report_success_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_65 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_68 (ATerm), ATerm o_68 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_65 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_76 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_62 (ATerm));
ATerm map_1 (ATerm, ATerm o_75 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_62 (ATerm));
ATerm Program_1 (ATerm, ATerm m_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm n_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_63 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_84 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_62 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm w_57 (ATerm), ATerm x_57 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_62 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_62 (ATerm));
ATerm iowrapNoOutput_3 (ATerm, ATerm e_65 (ATerm), ATerm f_65 (ATerm), ATerm g_65 (ATerm));
ATerm main_0 (ATerm);
ATerm version_0 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm my_usage_0 (ATerm t)
{
  ATerm u_0 = NULL;
  ATerm a_7;
  a_7 = t;
  {
    ATerm i_1 = NULL;
    ATerm w_1 = NULL;
    ATerm c_0 (ATerm t)
    {
      ATerm v_0 = NULL,g_1 = NULL;
      v_0 = t;
      o_0 :
      if(match_cons(v_0, sym_Program_1))
        {
          g_1 = ATgetArgument(v_0, 0);
          t = not_null(g_1);
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_value_2(t, c_0, _fail);
    {
      i_1 = t;
      {
        if(((u_0 != NULL) && (u_0 != i_1)))
          _fail(i_1);
        else
          u_0 = i_1;
        {
          ATerm x_1 = NULL;
          t = term_b_7;
          {
            t = version_0(t);
            {
              x_1 = t;
              if(((w_1 != NULL) && (w_1 != x_1)))
                _fail(x_1);
              else
                w_1 = x_1;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_7), term_j_7), term_i_7), term_h_7), not_null(u_0)), term_g_7), term_f_7), not_null(w_1)), term_e_7), not_null(u_0)));
            {
              t = printnl_0(t);
              {
                t = term_l_7;
                t = exit_0(t);
              }
            }
          }
        }
      }
    }
  }
  t = a_7;
  return(t);
}
ATerm Option_2 (ATerm t, ATerm t_62 (ATerm), ATerm u_62 (ATerm))
{
  ATerm d_0 (ATerm t)
  {
    t = term_m_7;
    return(t);
  }
  t = Option_3(t, t_62, u_62, d_0);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm e_63 (ATerm), ATerm f_63 (ATerm))
{
  ATerm g_0 (ATerm t)
  {
    t = term_m_7;
    return(t);
  }
  t = ArgOption_3(t, e_63, f_63, g_0);
  return(t);
}
ATerm ops_0 (ATerm t)
{
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_0 (ATerm t)
      {
        ATerm v_2 = NULL;
        v_2 = t;
        l_2 :
        if(!(match_string(v_2, "-i2")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm m_0 (ATerm t)
      {
        ATerm w_2 = NULL;
        w_2 = t;
        t = (ATerm) ATmakeAppl(sym_Input2_1, not_null(w_2));
        return(t);
      }
      t = ArgOption_2(t, h_0, m_0);
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_0 (ATerm t)
            {
              ATerm y_2 = NULL;
              y_2 = t;
              q_2 :
              if(!(match_string(y_2, "--path")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm p_0 (ATerm t)
            {
              t = term_v_7;
              return(t);
            }
            t = Option_2(t, n_0, p_0);
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            {
              ATerm w_7 = t;
              int x_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_0 (ATerm t)
                  {
                    ATerm z_2 = NULL;
                    z_2 = t;
                    r_2 :
                    if(!(match_string(z_2, "--squashedpath")))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  ATerm r_0 (ATerm t)
                  {
                    t = term_c_8;
                    return(t);
                  }
                  t = Option_2(t, q_0, r_0);
                  LocalPopChoice(x_7);
                }
              else
                {
                  t = w_7;
                  {
                    ATerm g_8 = t;
                    int m_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_0 (ATerm t)
                        {
                          ATerm a_3 = NULL;
                          a_3 = t;
                          s_2 :
                          if(!(match_string(a_3, "--nopath")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm t_0 (ATerm t)
                        {
                          t = term_n_8;
                          return(t);
                        }
                        t = Option_2(t, s_0, t_0);
                        LocalPopChoice(m_8);
                      }
                    else
                      {
                        t = g_8;
                        {
                          ATerm o_8 = t;
                          int p_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_0 (ATerm t)
                              {
                                ATerm b_3 = NULL;
                                b_3 = t;
                                t_2 :
                                if(!(match_string(b_3, "--topmost")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm x_0 (ATerm t)
                              {
                                t = term_q_8;
                                return(t);
                              }
                              t = Option_2(t, w_0, x_0);
                              LocalPopChoice(p_8);
                            }
                          else
                            {
                              t = o_8;
                              {
                                ATerm y_0 (ATerm t)
                                {
                                  ATerm c_3 = NULL;
                                  c_3 = t;
                                  u_2 :
                                  if(!(match_string(c_3, "--useambmark")))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                ATerm z_0 (ATerm t)
                                {
                                  t = term_w_8;
                                  return(t);
                                }
                                t = Option_2(t, y_0, z_0);
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
ATerm echo_1 (ATerm t, ATerm e_66 (ATerm))
{
  ATerm x_8;
  x_8 = t;
  {
    ATerm g_3 = NULL,i_3 = NULL;
    ATerm a_9;
    a_9 = t;
    {
      ATerm h_3 = NULL;
      t = e_66(t);
      {
        h_3 = t;
        if(((g_3 != NULL) && (g_3 != h_3)))
          _fail(h_3);
        else
          g_3 = h_3;
      }
    }
    t = a_9;
    {
      ATerm j_3 = NULL;
      j_3 = t;
      if(((i_3 != NULL) && (i_3 != j_3)))
        _fail(j_3);
      else
        i_3 = j_3;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_3)), not_null(g_3)));
        t = printnl_0(t);
      }
    }
  }
  t = x_8;
  return(t);
}
ATerm try_echo_1 (ATerm t, ATerm u_86 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm c_9 = t;
    if((PushChoice() == 0))
      {
        ATerm b_1 (ATerm t)
        {
          t = term_d_9;
          return(t);
        }
        t = has_option_1(t, b_1);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_9;
      }
    t = echo_1(t, u_86);
    return(t);
  }
  t = try_1(t, a_1);
  return(t);
}
ATerm is_diff_0 (ATerm t)
{
  ATerm n_3 = NULL;
  n_3 = t;
  m_3 :
  if(!(match_string(n_3, "..")))
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm u_81 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_81(t);
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        t = _one(t, o_3);
      }
    return(t);
  }
  t = o_3(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
  s_3 = t;
  r_3 :
  if(match_cons(s_3, sym__2))
    {
      t_3 = ATgetArgument(s_3, 0);
      u_3 = ATgetArgument(s_3, 1);
      {
        ATerm h_9;
        h_9 = t;
        {
          t = not_null(u_3);
          {
            ATerm c_1 (ATerm t)
            {
              ATerm x_3 = NULL;
              x_3 = t;
              if(((t_3 != NULL) && (t_3 != x_3)))
                _fail(x_3);
              else
                t_3 = x_3;
              return(t);
            }
            t = oncetd_1(t, c_1);
          }
        }
        t = h_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm c_4 = NULL;
  ATerm e_4 = NULL;
  c_4 = t;
  {
    ATerm f_4 = NULL;
    t = get_options_0(t);
    {
      f_4 = t;
      {
        if(((e_4 != NULL) && (e_4 != f_4)))
          _fail(f_4);
        else
          e_4 = f_4;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_4), not_null(e_4));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_b_7;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm h_65 (ATerm))
{
  ATerm i_9;
  i_9 = t;
  {
    t = term_b_7;
    {
      t = h_65(t);
      t = check_option_0(t);
    }
  }
  t = i_9;
  return(t);
}
ATerm laydiff_2 (ATerm t, ATerm n_86 (ATerm), ATerm o_86 (ATerm))
{
  ATerm d_7 (ATerm t)
  {
    ATerm h_5 = NULL;
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = eq_0(t);
        t = Fst_0(t);
        LocalPopChoice(l_9);
      }
    else
      {
        t = k_9;
        {
          ATerm m_9 = t;
          int n_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2(t, is_layout_0, is_layout_0);
              t = Fst_0(t);
              LocalPopChoice(n_9);
            }
          else
            {
              t = m_9;
              {
                ATerm o_9 = t;
                int r_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
                    j_5 = t;
                    t_4 :
                    if(match_cons(j_5, sym__2))
                      {
                        k_5 = ATgetArgument(j_5, 0);
                        l_5 = ATgetArgument(j_5, 1);
                        {
                          ATerm o_5 = NULL,p_5 = NULL,v_5 = NULL,g_6 = NULL;
                          ATerm s_9;
                          s_9 = t;
                          {
                            ATerm q_5 = NULL;
                            ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
                            t = not_null(l_5);
                            {
                              q_5 = t;
                              {
                                t = SSL_explode_term(not_null(q_5));
                                {
                                  s_5 = t;
                                  l_4 :
                                  if(match_cons(s_5, sym__2))
                                    {
                                      t_5 = ATgetArgument(s_5, 0);
                                      u_5 = ATgetArgument(s_5, 1);
                                      {
                                        if(((o_5 != NULL) && (o_5 != t_5)))
                                          _fail(t_5);
                                        else
                                          o_5 = t_5;
                                        if(((p_5 != NULL) && (p_5 != u_5)))
                                          _fail(u_5);
                                        else
                                          p_5 = u_5;
                                      }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              }
                            }
                          }
                          t = s_9;
                          {
                            ATerm t_9;
                            t_9 = t;
                            {
                              ATerm w_5 = NULL;
                              ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
                              t = not_null(k_5);
                              {
                                w_5 = t;
                                {
                                  t = SSL_explode_term(not_null(w_5));
                                  {
                                    y_5 = t;
                                    o_4 :
                                    if(match_cons(y_5, sym__2))
                                      {
                                        z_5 = ATgetArgument(y_5, 0);
                                        a_6 = ATgetArgument(y_5, 1);
                                        {
                                          if(((o_5 != NULL) && (o_5 != z_5)))
                                            _fail(z_5);
                                          else
                                            o_5 = z_5;
                                          if(((v_5 != NULL) && (v_5 != a_6)))
                                            _fail(a_6);
                                          else
                                            v_5 = a_6;
                                        }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                }
                              }
                            }
                            t = t_9;
                            {
                              ATerm u_9;
                              u_9 = t;
                              {
                                ATerm b_6 = NULL,d_6 = NULL,f_6 = NULL;
                                ATerm w_9;
                                w_9 = t;
                                {
                                  ATerm c_6 = NULL;
                                  t = not_null(v_5);
                                  {
                                    t = length_0(t);
                                    {
                                      c_6 = t;
                                      if(((b_6 != NULL) && (b_6 != c_6)))
                                        _fail(c_6);
                                      else
                                        b_6 = c_6;
                                    }
                                  }
                                }
                                t = w_9;
                                {
                                  ATerm e_6 = NULL;
                                  t = not_null(p_5);
                                  {
                                    t = length_0(t);
                                    {
                                      e_6 = t;
                                      if(((d_6 != NULL) && (d_6 != e_6)))
                                        _fail(e_6);
                                      else
                                        d_6 = e_6;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(b_6), not_null(d_6));
                                    {
                                      t = eq_0(t);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_5), not_null(p_5));
                                        {
                                          t = zip_1(t, d_7);
                                          {
                                            f_6 = t;
                                            if(((h_5 != NULL) && (h_5 != f_6)))
                                              _fail(f_6);
                                            else
                                              h_5 = f_6;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              t = u_9;
                              {
                                t = SSL_mkterm(not_null(o_5), not_null(h_5));
                                {
                                  g_6 = t;
                                  t = not_null(g_6);
                                }
                              }
                            }
                          }
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                    LocalPopChoice(r_9);
                  }
                else
                  {
                    t = o_9;
                    {
                      ATerm z_9 = t;
                      int c_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
                          t = o_86(t);
                          {
                            i_6 = t;
                            v_4 :
                            if(match_cons(i_6, sym__2))
                              {
                                j_6 = ATgetArgument(i_6, 0);
                                m_6 = ATgetArgument(i_6, 1);
                                w_4 :
                                if(match_cons(j_6, sym_Label_2))
                                  {
                                    k_6 = ATgetArgument(j_6, 0);
                                    l_6 = ATgetArgument(j_6, 1);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(l_6), not_null(m_6));
                                      t = d_7(t);
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                          LocalPopChoice(c_10);
                        }
                      else
                        {
                          t = z_9;
                          {
                            ATerm d_10 = t;
                            int f_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL;
                                t = o_86(t);
                                {
                                  p_6 = t;
                                  y_4 :
                                  if(match_cons(p_6, sym__2))
                                    {
                                      q_6 = ATgetArgument(p_6, 0);
                                      r_6 = ATgetArgument(p_6, 1);
                                      z_4 :
                                      if(match_cons(r_6, sym_Label_2))
                                        {
                                          s_6 = ATgetArgument(r_6, 0);
                                          t_6 = ATgetArgument(r_6, 1);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(q_6), not_null(t_6));
                                            t = d_7(t);
                                          }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                                LocalPopChoice(f_10);
                              }
                            else
                              {
                                t = d_10;
                                {
                                  ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL;
                                  w_6 = t;
                                  c_5 :
                                  if(match_cons(w_6, sym__2))
                                    {
                                      x_6 = ATgetArgument(w_6, 0);
                                      y_6 = ATgetArgument(w_6, 1);
                                      {
                                        ATerm g_10 = t;
                                        int h_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = n_86(t);
                                            t = (ATerm) ATmakeAppl(sym_amb_2, (ATerm)ATmakeAppl(sym_amb1_1, not_null(x_6)), (ATerm) ATmakeAppl(sym_amb2_1, not_null(y_6)));
                                            LocalPopChoice(h_10);
                                          }
                                        else
                                          {
                                            t = g_10;
                                            t = (ATerm) ATmakeAppl(sym_amb_2, not_null(x_6), not_null(y_6));
                                          }
                                      }
                                    }
                                  else
                                    {
                                      _fail(t);
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
  t = d_7(t);
  return(t);
}
ATerm laydiff_1 (ATerm t, ATerm m_86 (ATerm))
{
  t = laydiff_2(t, m_86, _fail);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
  s_7 = t;
  r_7 :
  if(((ATermList) s_7 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(s_7) == AT_LIST) && ((ATermList) s_7 != ATempty)))
        {
          t_7 = ATgetFirst((ATermList) s_7);
          u_7 = (ATerm) ATgetNext((ATermList) s_7);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm b_8 = NULL;
  ATerm d_8 = NULL,e_8 = NULL;
  b_8 = t;
  {
    ATerm f_8 = NULL;
    ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL;
    t = not_null(b_8);
    {
      f_8 = t;
      {
        t = SSL_explode_term(not_null(f_8));
        {
          h_8 = t;
          y_7 :
          if(match_cons(h_8, sym__2))
            {
              i_8 = ATgetArgument(h_8, 0);
              j_8 = ATgetArgument(h_8, 1);
              z_7 :
              if(match_string(i_8, ""))
                {
                  a_8 :
                  if(((ATgetType(j_8) == AT_LIST) && ((ATermList) j_8 != ATempty)))
                    {
                      k_8 = ATgetFirst((ATermList) j_8);
                      l_8 = (ATerm) ATgetNext((ATermList) j_8);
                      {
                        if(((e_8 != NULL) && (e_8 != k_8)))
                          _fail(k_8);
                        else
                          e_8 = k_8;
                        if(((d_8 != NULL) && (d_8 != l_8)))
                          _fail(l_8);
                        else
                          d_8 = l_8;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(e_8);
  }
  return(t);
}
ATerm LConstoCons_0 (ATerm t)
{
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      {
        ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL;
        s_8 = t;
        r_8 :
        if(match_cons(s_8, sym_LCons_3))
          {
            t_8 = ATgetArgument(s_8, 0);
            u_8 = ATgetArgument(s_8, 1);
            v_8 = ATgetArgument(s_8, 2);
            {
              ATerm y_8 = NULL;
              ATerm z_8 = NULL;
              t = not_null(v_8);
              {
                t = LConstoCons_0(t);
                {
                  z_8 = t;
                  if(((y_8 != NULL) && (y_8 != z_8)))
                    _fail(z_8);
                  else
                    y_8 = z_8;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(y_8)), not_null(t_8));
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm laydiff_squash_2 (ATerm t, ATerm r_86 (ATerm), ATerm s_86 (ATerm))
{
  ATerm s_12 (ATerm t)
  {
    ATerm k_10 = NULL,m_10 = NULL;
    ATerm d_1 (ATerm t)
    {
      t = _2(t, LConstoCons_0, LConstoCons_0);
      return(t);
    }
    t = try_1(t, d_1);
    {
      ATerm l_10 = t;
      int q_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = eq_0(t);
          {
            t = Fst_0(t);
            {
              ATerm e_1 (ATerm t)
              {
                ATerm r_10 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_10;
                  }
                t = term_v_10;
                return(t);
              }
              t = try_1(t, e_1);
            }
          }
          LocalPopChoice(q_10);
        }
      else
        {
          t = l_10;
          {
            ATerm b_11 = t;
            int o_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2(t, is_layout_0, is_layout_0);
                t = term_v_10;
                LocalPopChoice(o_11);
              }
            else
              {
                t = b_11;
                {
                  ATerm p_11 = t;
                  int q_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
                      n_10 = t;
                      v_9 :
                      if(match_cons(n_10, sym__2))
                        {
                          o_10 = ATgetArgument(n_10, 0);
                          p_10 = ATgetArgument(n_10, 1);
                          {
                            ATerm s_10 = NULL,t_10 = NULL,z_10 = NULL;
                            ATerm t_11;
                            t_11 = t;
                            {
                              ATerm u_10 = NULL;
                              ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
                              t = not_null(p_10);
                              {
                                u_10 = t;
                                {
                                  t = SSL_explode_term(not_null(u_10));
                                  {
                                    w_10 = t;
                                    g_9 :
                                    if(match_cons(w_10, sym__2))
                                      {
                                        x_10 = ATgetArgument(w_10, 0);
                                        y_10 = ATgetArgument(w_10, 1);
                                        {
                                          if(((s_10 != NULL) && (s_10 != x_10)))
                                            _fail(x_10);
                                          else
                                            s_10 = x_10;
                                          if(((t_10 != NULL) && (t_10 != y_10)))
                                            _fail(y_10);
                                          else
                                            t_10 = y_10;
                                        }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                }
                              }
                            }
                            t = t_11;
                            {
                              ATerm v_11;
                              v_11 = t;
                              {
                                ATerm a_11 = NULL;
                                ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
                                t = not_null(o_10);
                                {
                                  a_11 = t;
                                  {
                                    t = SSL_explode_term(not_null(a_11));
                                    {
                                      c_11 = t;
                                      j_9 :
                                      if(match_cons(c_11, sym__2))
                                        {
                                          d_11 = ATgetArgument(c_11, 0);
                                          e_11 = ATgetArgument(c_11, 1);
                                          {
                                            if(((s_10 != NULL) && (s_10 != d_11)))
                                              _fail(d_11);
                                            else
                                              s_10 = d_11;
                                            if(((z_10 != NULL) && (z_10 != e_11)))
                                              _fail(e_11);
                                            else
                                              z_10 = e_11;
                                          }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  }
                                }
                              }
                              t = v_11;
                              {
                                ATerm f_11 = NULL,h_11 = NULL,r_11 = NULL;
                                ATerm c_12;
                                c_12 = t;
                                {
                                  ATerm g_11 = NULL;
                                  t = not_null(z_10);
                                  {
                                    t = length_0(t);
                                    {
                                      g_11 = t;
                                      if(((f_11 != NULL) && (f_11 != g_11)))
                                        _fail(g_11);
                                      else
                                        f_11 = g_11;
                                    }
                                  }
                                }
                                t = c_12;
                                {
                                  ATerm i_11 = NULL;
                                  t = not_null(t_10);
                                  {
                                    t = length_0(t);
                                    {
                                      i_11 = t;
                                      if(((h_11 != NULL) && (h_11 != i_11)))
                                        _fail(i_11);
                                      else
                                        h_11 = i_11;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_11), not_null(h_11));
                                    {
                                      t = eq_0(t);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_10), not_null(t_10));
                                        {
                                          t = zip_1(t, s_12);
                                          {
                                            ATerm w_11 = NULL;
                                            ATerm d_12 = t;
                                            int j_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), term_k_12);
                                                {
                                                  t = eq_0(t);
                                                  t = Cons_2(t, _id, Nil_0);
                                                }
                                                LocalPopChoice(j_12);
                                              }
                                            else
                                              {
                                                t = d_12;
                                                {
                                                  ATerm f_1 (ATerm t)
                                                  {
                                                    ATerm o_12 = t;
                                                    int p_12 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm j_11 = NULL;
                                                        ATerm h_1 (ATerm t)
                                                        {
                                                          ATerm j_1 (ATerm t)
                                                          {
                                                            ATerm k_11 = NULL;
                                                            k_11 = t;
                                                            if(((j_11 != NULL) && (j_11 != k_11)))
                                                              _fail(k_11);
                                                            else
                                                              j_11 = k_11;
                                                            return(t);
                                                          }
                                                          t = Cons_2(t, is_diff_0, j_1);
                                                          return(t);
                                                        }
                                                        t = _2(t, is_diff_0, h_1);
                                                        t = (ATerm) ATinsert(CheckATermList(not_null(j_11)), term_v_10);
                                                        LocalPopChoice(p_12);
                                                      }
                                                    else
                                                      {
                                                        t = o_12;
                                                        {
                                                          ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
                                                          ATerm c_13 (ATerm t)
                                                          {
                                                            t = (ATerm) ATinsert(CheckATermList(not_null(n_11)), not_null(m_11));
                                                            return(t);
                                                          }
                                                          l_11 = t;
                                                          p_9 :
                                                          if(match_cons(l_11, sym__2))
                                                            {
                                                              m_11 = ATgetArgument(l_11, 0);
                                                              n_11 = ATgetArgument(l_11, 1);
                                                              q_9 :
                                                              if(((ATermList) n_11 == ATempty))
                                                                {
                                                                  {
                                                                    ATerm q_12 = t;
                                                                    int r_12 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = not_null(m_11);
                                                                        t = is_list_0(t);
                                                                        t = not_null(m_11);
                                                                        LocalPopChoice(r_12);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_12;
                                                                        t = c_13(t);
                                                                      }
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  t = c_13(t);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      }
                                                    return(t);
                                                  }
                                                  t = foldr_2(t, _id, f_1);
                                                }
                                              }
                                            {
                                              r_11 = t;
                                              {
                                                if(((k_10 != NULL) && (k_10 != r_11)))
                                                  _fail(r_11);
                                                else
                                                  k_10 = r_11;
                                                {
                                                  ATerm t_12 = t;
                                                  int u_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), term_k_12);
                                                      {
                                                        t = eq_0(t);
                                                        {
                                                          t = not_null(k_10);
                                                          {
                                                            ATerm k_1 (ATerm t)
                                                            {
                                                              ATerm l_1 (ATerm t)
                                                              {
                                                                ATerm s_11 = NULL;
                                                                ATerm v_12 = t;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = is_list_0(t);
                                                                    PopChoice();
                                                                    _fail(t);
                                                                  }
                                                                else
                                                                  {
                                                                    t = v_12;
                                                                  }
                                                                {
                                                                  s_11 = t;
                                                                  t = (ATerm) ATinsert(ATempty, not_null(s_11));
                                                                }
                                                                return(t);
                                                              }
                                                              t = try_1(t, l_1);
                                                              return(t);
                                                            }
                                                            t = Cons_2(t, _id, k_1);
                                                          }
                                                        }
                                                      }
                                                      LocalPopChoice(u_12);
                                                    }
                                                  else
                                                    {
                                                      t = t_12;
                                                      {
                                                        ATerm w_12 = t;
                                                        int x_12 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Cons_2(t, is_diff_0, Nil_0);
                                                            t = term_v_10;
                                                            LocalPopChoice(x_12);
                                                          }
                                                        else
                                                          {
                                                            t = w_12;
                                                            {
                                                              ATerm u_11 = NULL;
                                                              t = SSL_mkterm(not_null(s_10), not_null(k_10));
                                                              {
                                                                u_11 = t;
                                                                t = not_null(u_11);
                                                              }
                                                            }
                                                          }
                                                      }
                                                    }
                                                  {
                                                    w_11 = t;
                                                    if(((m_10 != NULL) && (m_10 != w_11)))
                                                      _fail(w_11);
                                                    else
                                                      m_10 = w_11;
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
                                t = not_null(m_10);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      LocalPopChoice(q_11);
                    }
                  else
                    {
                      t = p_11;
                      {
                        ATerm y_12 = t;
                        int z_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL;
                            t = s_86(t);
                            {
                              x_11 = t;
                              x_9 :
                              if(match_cons(x_11, sym__2))
                                {
                                  y_11 = ATgetArgument(x_11, 0);
                                  b_12 = ATgetArgument(x_11, 1);
                                  y_9 :
                                  if(match_cons(y_11, sym_Label_2))
                                    {
                                      z_11 = ATgetArgument(y_11, 0);
                                      a_12 = ATgetArgument(y_11, 1);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_12), not_null(b_12));
                                        t = s_12(t);
                                      }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                            LocalPopChoice(z_12);
                          }
                        else
                          {
                            t = y_12;
                            {
                              ATerm a_13 = t;
                              int b_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
                                  t = s_86(t);
                                  {
                                    e_12 = t;
                                    a_10 :
                                    if(match_cons(e_12, sym__2))
                                      {
                                        f_12 = ATgetArgument(e_12, 0);
                                        g_12 = ATgetArgument(e_12, 1);
                                        b_10 :
                                        if(match_cons(g_12, sym_Label_2))
                                          {
                                            h_12 = ATgetArgument(g_12, 0);
                                            i_12 = ATgetArgument(g_12, 1);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(f_12), not_null(i_12));
                                              t = s_12(t);
                                            }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                  LocalPopChoice(b_13);
                                }
                              else
                                {
                                  t = a_13;
                                  {
                                    ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
                                    l_12 = t;
                                    e_10 :
                                    if(match_cons(l_12, sym__2))
                                      {
                                        m_12 = ATgetArgument(l_12, 0);
                                        n_12 = ATgetArgument(l_12, 1);
                                        {
                                          ATerm d_13 = t;
                                          int e_13 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = r_86(t);
                                              t = (ATerm) ATmakeAppl(sym_amb_2, (ATerm)ATmakeAppl(sym_amb1_1, not_null(m_12)), (ATerm) ATmakeAppl(sym_amb2_1, not_null(n_12)));
                                              LocalPopChoice(e_13);
                                            }
                                          else
                                            {
                                              t = d_13;
                                              t = (ATerm) ATmakeAppl(sym_amb_2, not_null(m_12), not_null(n_12));
                                            }
                                        }
                                      }
                                    else
                                      {
                                        _fail(t);
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
  t = s_12(t);
  return(t);
}
ATerm laydiff_squash_1 (ATerm t, ATerm q_86 (ATerm))
{
  t = laydiff_squash_2(t, q_86, _fail);
  return(t);
}
ATerm printtopdiff_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
  t_13 = t;
  s_13 :
  if(match_cons(t_13, sym__2))
    {
      u_13 = ATgetArgument(t_13, 0);
      v_13 = ATgetArgument(t_13, 1);
      {
        ATerm y_13 = NULL,e_14 = NULL;
        ATerm f_13;
        f_13 = t;
        {
          ATerm z_13 = NULL;
          ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
          t = not_null(v_13);
          {
            z_13 = t;
            {
              t = SSL_explode_term(not_null(z_13));
              {
                b_14 = t;
                o_13 :
                if(match_cons(b_14, sym__2))
                  {
                    c_14 = ATgetArgument(b_14, 0);
                    d_14 = ATgetArgument(b_14, 1);
                    if(((y_13 != NULL) && (y_13 != c_14)))
                      _fail(c_14);
                    else
                      y_13 = c_14;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            }
          }
        }
        t = f_13;
        {
          ATerm g_13;
          g_13 = t;
          {
            ATerm f_14 = NULL;
            ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
            t = not_null(u_13);
            {
              f_14 = t;
              {
                t = SSL_explode_term(not_null(f_14));
                {
                  h_14 = t;
                  r_13 :
                  if(match_cons(h_14, sym__2))
                    {
                      i_14 = ATgetArgument(h_14, 0);
                      j_14 = ATgetArgument(h_14, 1);
                      if(((e_14 != NULL) && (e_14 != i_14)))
                        _fail(i_14);
                      else
                        e_14 = i_14;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              }
            }
          }
          t = g_13;
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_13)), not_null(e_14));
            {
              ATerm m_1 (ATerm t)
              {
                t = term_h_13;
                return(t);
              }
              t = try_echo_1(t, m_1);
              {
                t = term_j_13;
                t = table_put_0(t);
              }
            }
            t = term_b_7;
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
  r_14 = t;
  q_14 :
  if(match_cons(r_14, sym__2))
    {
      s_14 = ATgetArgument(r_14, 0);
      t_14 = ATgetArgument(r_14, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_14)), not_null(s_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  b_15 = t;
  y_14 :
  if(match_cons(b_15, sym__2))
    {
      c_15 = ATgetArgument(b_15, 0);
      f_15 = ATgetArgument(b_15, 1);
      z_14 :
      if(((ATgetType(c_15) == AT_LIST) && ((ATermList) c_15 != ATempty)))
        {
          d_15 = ATgetFirst((ATermList) c_15);
          e_15 = (ATerm) ATgetNext((ATermList) c_15);
          a_15 :
          if(((ATgetType(f_15) == AT_LIST) && ((ATermList) f_15 != ATempty)))
            {
              g_15 = ATgetFirst((ATermList) f_15);
              h_15 = (ATerm) ATgetNext((ATermList) f_15);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(d_15), not_null(g_15)), (ATerm) ATmakeAppl(sym__2, not_null(e_15), not_null(h_15)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip1_0 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
  r_15 = t;
  o_15 :
  if(match_cons(r_15, sym__2))
    {
      s_15 = ATgetArgument(r_15, 0);
      t_15 = ATgetArgument(r_15, 1);
      p_15 :
      if(((ATermList) s_15 == ATempty))
        {
          q_15 :
          if(((ATermList) t_15 == ATempty))
            {
              t = (ATerm) ATempty;
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm e_74 (ATerm))
{
  ATerm v_15 (ATerm t)
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_74(t);
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        {
          t = c_74(t);
          {
            t = _2(t, e_74, v_15);
            t = d_74(t);
          }
        }
      }
    return(t);
  }
  t = v_15(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm g_74 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, g_74);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
  y_15 = t;
  x_15 :
  if(match_cons(y_15, sym__2))
    {
      z_15 = ATgetArgument(y_15, 0);
      a_16 = ATgetArgument(y_15, 1);
      if(((z_15 != NULL) && (z_15 != a_16)))
        _fail(a_16);
      else
        z_15 = a_16;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm d_70 (ATerm))
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_70(t);
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL;
        h_16 = t;
        g_16 :
        if(((ATgetType(h_16) == AT_LIST) && ((ATermList) h_16 != ATempty)))
          {
            i_16 = ATgetFirst((ATermList) h_16);
            j_16 = (ATerm) ATgetNext((ATermList) h_16);
            {
              ATerm m_16 = NULL,o_16 = NULL;
              ATerm p_13;
              p_13 = t;
              {
                ATerm n_16 = NULL;
                t = not_null(i_16);
                {
                  t = d_70(t);
                  {
                    n_16 = t;
                    if(((m_16 != NULL) && (m_16 != n_16)))
                      _fail(n_16);
                    else
                      m_16 = n_16;
                  }
                }
              }
              t = p_13;
              {
                ATerm p_16 = NULL;
                t = not_null(j_16);
                {
                  t = foldr_3(t, b_70, c_70, d_70);
                  {
                    p_16 = t;
                    if(((o_16 != NULL) && (o_16 != p_16)))
                      _fail(p_16);
                    else
                      o_16 = p_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), not_null(o_16));
                  t = c_70(t);
                }
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = term_q_13;
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = term_l_7;
    return(t);
  }
  t = foldr_3(t, n_1, add_0, o_1);
  return(t);
}
ATerm L_1 (ATerm t, ATerm j_57 (ATerm))
{
  ATerm y_16 = NULL,z_16 = NULL;
  y_16 = t;
  x_16 :
  if(match_cons(y_16, sym_L_1))
    {
      z_16 = ATgetArgument(y_16, 0);
      {
        ATerm c_17 = NULL,e_17 = NULL;
        ATerm d_17 = NULL;
        t = SSLgetAnnotations(not_null(y_16));
        {
          d_17 = t;
          if(((c_17 != NULL) && (c_17 != d_17)))
            _fail(d_17);
          else
            c_17 = d_17;
        }
        {
          t = not_null(z_16);
          {
            ATerm g_17 = NULL;
            t = j_57(t);
            {
              e_17 = t;
              {
                ATerm h_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_1, not_null(e_17)), not_null(c_17));
                {
                  h_17 = t;
                  if(((g_17 != NULL) && (g_17 != h_17)))
                    _fail(h_17);
                  else
                    g_17 = h_17;
                }
                t = not_null(g_17);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UL_0 (ATerm t)
{
  ATerm q_17 = NULL;
  q_17 = t;
  p_17 :
  if(match_cons(q_17, sym_UL_0))
    {
      ATerm s_17 = NULL,u_17 = NULL;
      ATerm w_13;
      w_13 = t;
      {
        ATerm t_17 = NULL;
        t = SSLgetAnnotations(not_null(q_17));
        {
          t_17 = t;
          if(((s_17 != NULL) && (s_17 != t_17)))
            _fail(t_17);
          else
            s_17 = t_17;
        }
      }
      t = w_13;
      {
        ATerm v_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_UL_0), not_null(s_17));
        {
          v_17 = t;
          if(((u_17 != NULL) && (u_17 != v_17)))
            _fail(v_17);
          else
            u_17 = v_17;
        }
        t = not_null(u_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NL_0 (ATerm t)
{
  ATerm d_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym_NL_0))
    {
      ATerm f_18 = NULL,h_18 = NULL;
      ATerm x_13;
      x_13 = t;
      {
        ATerm g_18 = NULL;
        t = SSLgetAnnotations(not_null(d_18));
        {
          g_18 = t;
          if(((f_18 != NULL) && (f_18 != g_18)))
            _fail(g_18);
          else
            f_18 = g_18;
        }
      }
      t = x_13;
      {
        ATerm i_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NL_0), not_null(f_18));
        {
          i_18 = t;
          if(((h_18 != NULL) && (h_18 != i_18)))
            _fail(i_18);
          else
            h_18 = i_18;
        }
        t = not_null(h_18);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_layout_0 (ATerm t)
{
  ATerm a_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = NL_0(t);
      LocalPopChoice(g_14);
    }
  else
    {
      t = a_14;
      {
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = UL_0(t);
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            t = L_1(t, _id);
          }
      }
    }
  return(t);
}
ATerm layeq_2 (ATerm t, ATerm j_86 (ATerm), ATerm k_86 (ATerm))
{
  ATerm s_20 (ATerm t)
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = eq_0(t);
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        {
          ATerm o_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2(t, is_layout_0, is_layout_0);
              LocalPopChoice(p_14);
            }
          else
            {
              t = o_14;
              {
                ATerm u_14 = t;
                int v_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
                    h_19 = t;
                    v_18 :
                    if(match_cons(h_19, sym__2))
                      {
                        i_19 = ATgetArgument(h_19, 0);
                        j_19 = ATgetArgument(h_19, 1);
                        {
                          ATerm n_19 = NULL,o_19 = NULL,u_19 = NULL;
                          ATerm w_14;
                          w_14 = t;
                          {
                            ATerm p_19 = NULL;
                            ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
                            t = not_null(j_19);
                            {
                              p_19 = t;
                              {
                                t = SSL_explode_term(not_null(p_19));
                                {
                                  r_19 = t;
                                  p_18 :
                                  if(match_cons(r_19, sym__2))
                                    {
                                      s_19 = ATgetArgument(r_19, 0);
                                      t_19 = ATgetArgument(r_19, 1);
                                      {
                                        if(((n_19 != NULL) && (n_19 != s_19)))
                                          _fail(s_19);
                                        else
                                          n_19 = s_19;
                                        if(((o_19 != NULL) && (o_19 != t_19)))
                                          _fail(t_19);
                                        else
                                          o_19 = t_19;
                                      }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              }
                            }
                          }
                          t = w_14;
                          {
                            ATerm x_14;
                            x_14 = t;
                            {
                              ATerm v_19 = NULL;
                              ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
                              t = not_null(i_19);
                              {
                                v_19 = t;
                                {
                                  t = SSL_explode_term(not_null(v_19));
                                  {
                                    x_19 = t;
                                    s_18 :
                                    if(match_cons(x_19, sym__2))
                                      {
                                        y_19 = ATgetArgument(x_19, 0);
                                        z_19 = ATgetArgument(x_19, 1);
                                        {
                                          if(((n_19 != NULL) && (n_19 != y_19)))
                                            _fail(y_19);
                                          else
                                            n_19 = y_19;
                                          if(((u_19 != NULL) && (u_19 != z_19)))
                                            _fail(z_19);
                                          else
                                            u_19 = z_19;
                                        }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                }
                              }
                            }
                            t = x_14;
                            {
                              ATerm a_20 = NULL,c_20 = NULL;
                              ATerm i_15;
                              i_15 = t;
                              {
                                ATerm b_20 = NULL;
                                t = not_null(u_19);
                                {
                                  t = length_0(t);
                                  {
                                    b_20 = t;
                                    if(((a_20 != NULL) && (a_20 != b_20)))
                                      _fail(b_20);
                                    else
                                      a_20 = b_20;
                                  }
                                }
                              }
                              t = i_15;
                              {
                                ATerm d_20 = NULL;
                                t = not_null(o_19);
                                {
                                  t = length_0(t);
                                  {
                                    d_20 = t;
                                    if(((c_20 != NULL) && (c_20 != d_20)))
                                      _fail(d_20);
                                    else
                                      c_20 = d_20;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_20), not_null(c_20));
                                  {
                                    t = eq_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_19), not_null(o_19));
                                      t = zip_1(t, s_20);
                                    }
                                  }
                                }
                              }
                              t = not_null(h_19);
                            }
                          }
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                    LocalPopChoice(v_14);
                  }
                else
                  {
                    t = u_14;
                    {
                      ATerm j_15 = t;
                      int k_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
                          t = k_86(t);
                          {
                            e_20 = t;
                            x_18 :
                            if(match_cons(e_20, sym__2))
                              {
                                f_20 = ATgetArgument(e_20, 0);
                                i_20 = ATgetArgument(e_20, 1);
                                y_18 :
                                if(match_cons(f_20, sym_Label_2))
                                  {
                                    g_20 = ATgetArgument(f_20, 0);
                                    h_20 = ATgetArgument(f_20, 1);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_20), not_null(i_20));
                                      t = s_20(t);
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                          LocalPopChoice(k_15);
                        }
                      else
                        {
                          t = j_15;
                          {
                            ATerm l_15 = t;
                            int m_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
                                t = k_86(t);
                                {
                                  l_20 = t;
                                  a_19 :
                                  if(match_cons(l_20, sym__2))
                                    {
                                      m_20 = ATgetArgument(l_20, 0);
                                      n_20 = ATgetArgument(l_20, 1);
                                      b_19 :
                                      if(match_cons(n_20, sym_Label_2))
                                        {
                                          o_20 = ATgetArgument(n_20, 0);
                                          p_20 = ATgetArgument(n_20, 1);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), not_null(p_20));
                                            t = s_20(t);
                                          }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                                LocalPopChoice(m_15);
                              }
                            else
                              {
                                t = l_15;
                                t = j_86(t);
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
  t = s_20(t);
  return(t);
}
ATerm printdiff_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
  l_21 = t;
  k_21 :
  if(match_cons(l_21, sym__2))
    {
      m_21 = ATgetArgument(l_21, 0);
      n_21 = ATgetArgument(l_21, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_21)), not_null(m_21));
        {
          ATerm p_1 (ATerm t)
          {
            t = term_h_13;
            return(t);
          }
          t = try_echo_1(t, p_1);
          {
            t = term_j_13;
            t = table_put_0(t);
          }
        }
        t = term_b_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm w_21 = NULL;
  ATerm y_21 = NULL;
  w_21 = t;
  {
    ATerm n_15;
    n_15 = t;
    {
      ATerm z_21 = NULL;
      t = term_u_15;
      {
        z_21 = t;
        if(((y_21 != NULL) && (y_21 != z_21)))
          _fail(z_21);
        else
          y_21 = z_21;
      }
    }
    t = n_15;
    {
      t = SSL_open_file(not_null(w_21), not_null(y_21));
      t = SSL_close_file(not_null(w_21));
    }
  }
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm z_75 (ATerm))
{
  ATerm d_22 = NULL;
  ATerm q_1 (ATerm t)
  {
    ATerm e_22 = NULL;
    t = z_75(t);
    {
      e_22 = t;
      if(((d_22 != NULL) && (d_22 != e_22)))
        _fail(e_22);
      else
        d_22 = e_22;
    }
    return(t);
  }
  t = fetch_1(t, q_1);
  t = not_null(d_22);
  return(t);
}
ATerm get_options_0 (ATerm t)
{
  t = term_c_16;
  t = table_get_0(t);
  return(t);
}
ATerm option_value_2 (ATerm t, ATerm i_65 (ATerm), ATerm j_65 (ATerm))
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = get_options_0(t);
      t = fetch_elem_1(t, i_65);
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      t = j_65(t);
    }
  return(t);
}
ATerm ldiff_0 (ATerm t)
{
  ATerm k_22 = NULL;
  ATerm q_22 = NULL;
  k_22 = t;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm n_22 = NULL,o_22 = NULL;
      n_22 = t;
      i_22 :
      if(match_cons(n_22, sym_Input2_1))
        {
          o_22 = ATgetArgument(n_22, 0);
          t = not_null(o_22);
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_value_2(t, r_1, _fail);
    {
      t = file_exists_0(t);
      {
        t = ReadFromFile_0(t);
        {
          q_22 = t;
          {
            ATerm f_16 = t;
            int k_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_1 (ATerm t)
                {
                  t = term_n_8;
                  return(t);
                }
                t = has_option_1(t, s_1);
                {
                  t = term_i_13;
                  {
                    t = table_create_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_22), not_null(q_22));
                      {
                        t = layeq_2(t, printdiff_0, _id);
                        {
                          ATerm l_16 = t;
                          int q_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = term_r_16;
                              {
                                ATerm s_16 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = table_get_0(t);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  {
                                    t = s_16;
                                  }
                              }
                              LocalPopChoice(q_16);
                            }
                          else
                            {
                              t = l_16;
                              {
                                t = term_l_7;
                                t = exit_0(t);
                              }
                            }
                        }
                      }
                    }
                  }
                }
                LocalPopChoice(k_16);
              }
            else
              {
                t = f_16;
                {
                  ATerm t_16 = t;
                  int u_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_1 (ATerm t)
                      {
                        t = term_q_8;
                        return(t);
                      }
                      t = has_option_1(t, t_1);
                      {
                        t = term_i_13;
                        {
                          t = table_create_0(t);
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(k_22), not_null(q_22));
                            {
                              t = layeq_2(t, printtopdiff_0, _id);
                              {
                                ATerm v_16 = t;
                                int w_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_r_16;
                                    {
                                      ATerm a_17 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = table_get_0(t);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = a_17;
                                        }
                                    }
                                    LocalPopChoice(w_16);
                                  }
                                else
                                  {
                                    t = v_16;
                                    {
                                      t = term_l_7;
                                      t = exit_0(t);
                                    }
                                  }
                              }
                            }
                          }
                        }
                      }
                      LocalPopChoice(u_16);
                    }
                  else
                    {
                      t = t_16;
                      {
                        ATerm b_17 = t;
                        int f_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm u_1 (ATerm t)
                            {
                              t = term_c_8;
                              return(t);
                            }
                            t = has_option_1(t, u_1);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(k_22), not_null(q_22));
                              {
                                ATerm v_1 (ATerm t)
                                {
                                  ATerm y_1 (ATerm t)
                                  {
                                    t = term_w_8;
                                    return(t);
                                  }
                                  t = has_option_1(t, y_1);
                                  return(t);
                                }
                                t = laydiff_squash_1(t, v_1);
                                {
                                  ATerm z_1 (ATerm t)
                                  {
                                    ATerm i_17 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = is_diff_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = i_17;
                                      }
                                    {
                                      ATerm a_2 (ATerm t)
                                      {
                                        t = term_h_13;
                                        return(t);
                                      }
                                      t = try_echo_1(t, a_2);
                                      {
                                        t = term_l_7;
                                        t = exit_0(t);
                                      }
                                    }
                                    return(t);
                                  }
                                  t = try_1(t, z_1);
                                }
                              }
                            }
                            LocalPopChoice(f_17);
                          }
                        else
                          {
                            t = b_17;
                            {
                              ATerm b_2 (ATerm t)
                              {
                                t = term_v_7;
                                return(t);
                              }
                              t = has_option_1(t, b_2);
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_22), not_null(q_22));
                                {
                                  ATerm c_2 (ATerm t)
                                  {
                                    ATerm d_2 (ATerm t)
                                    {
                                      t = term_w_8;
                                      return(t);
                                    }
                                    t = has_option_1(t, d_2);
                                    return(t);
                                  }
                                  t = laydiff_1(t, c_2);
                                  {
                                    ATerm e_2 (ATerm t)
                                    {
                                      ATerm j_17 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = is_diff_0(t);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = j_17;
                                        }
                                      {
                                        ATerm f_2 (ATerm t)
                                        {
                                          t = term_h_13;
                                          return(t);
                                        }
                                        t = try_echo_1(t, f_2);
                                        {
                                          t = term_l_7;
                                          t = exit_0(t);
                                        }
                                      }
                                      return(t);
                                    }
                                    t = try_1(t, e_2);
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
ATerm _2 (ATerm t, ATerm y_50 (ATerm), ATerm z_50 (ATerm))
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
  b_23 = t;
  a_23 :
  if(match_cons(b_23, sym__2))
    {
      c_23 = ATgetArgument(b_23, 0);
      d_23 = ATgetArgument(b_23, 1);
      {
        ATerm h_23 = NULL,j_23 = NULL;
        ATerm i_23 = NULL;
        t = SSLgetAnnotations(not_null(b_23));
        {
          i_23 = t;
          if(((h_23 != NULL) && (h_23 != i_23)))
            _fail(i_23);
          else
            h_23 = i_23;
        }
        {
          t = not_null(c_23);
          {
            ATerm l_23 = NULL;
            t = y_50(t);
            {
              j_23 = t;
              {
                t = not_null(d_23);
                {
                  ATerm n_23 = NULL;
                  t = z_50(t);
                  {
                    l_23 = t;
                    {
                      ATerm o_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(j_23), not_null(l_23)), not_null(h_23));
                      {
                        o_23 = t;
                        if(((n_23 != NULL) && (n_23 != o_23)))
                          _fail(o_23);
                        else
                          n_23 = o_23;
                      }
                      t = not_null(n_23);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, term_k_17));
  {
    t = printnl_0(t);
    {
      t = term_l_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,g_24 = NULL;
  w_23 = t;
  v_23 :
  if(match_cons(w_23, sym__2))
    {
      x_23 = ATgetArgument(w_23, 0);
      g_24 = ATgetArgument(w_23, 1);
      {
        t = not_null(x_23);
        {
          ATerm g_2 (ATerm t)
          {
            t = not_null(g_24);
            return(t);
          }
          t = at_end_1(t, g_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_66 (ATerm))
{
  ATerm l_17;
  l_17 = t;
  {
    ATerm o_24 = NULL,q_24 = NULL;
    ATerm m_17;
    m_17 = t;
    {
      ATerm p_24 = NULL;
      t = c_66(t);
      {
        p_24 = t;
        if(((o_24 != NULL) && (o_24 != p_24)))
          _fail(p_24);
        else
          o_24 = p_24;
      }
    }
    t = m_17;
    {
      ATerm r_24 = NULL;
      r_24 = t;
      if(((q_24 != NULL) && (q_24 != r_24)))
        _fail(r_24);
      else
        q_24 = r_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_24)), not_null(o_24)));
        t = printnl_0(t);
      }
    }
  }
  t = l_17;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm x_24 = NULL;
  x_24 = t;
  t = SSL_is_string(not_null(x_24));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      {
        ATerm r_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, h_2);
            LocalPopChoice(w_17);
          }
        else
          {
            t = r_17;
            {
              ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
              s_25 = t;
              r_25 :
              if(match_cons(s_25, sym_Path_1))
                {
                  t_25 = ATgetArgument(s_25, 0);
                  t = not_null(t_25);
                }
              else
                {
                  if(match_cons(s_25, sym_Var_1))
                    {
                      t_25 = ATgetArgument(s_25, 0);
                      {
                        t = not_null(t_25);
                        {
                          ATerm x_17 = t;
                          int y_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(y_17);
                            }
                          else
                            {
                              t = x_17;
                              {
                                ATerm i_2 (ATerm t)
                                {
                                  t = term_z_17;
                                  return(t);
                                }
                                t = debug_1(t, i_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(s_25, sym_Prefix_2))
                        {
                          t_25 = ATgetArgument(s_25, 0);
                          u_25 = ATgetArgument(s_25, 1);
                          {
                            ATerm z_25 = NULL,c_26 = NULL;
                            ATerm a_18;
                            a_18 = t;
                            {
                              ATerm b_26 = NULL;
                              t = not_null(t_25);
                              {
                                t = eval_config_0(t);
                                {
                                  b_26 = t;
                                  if(((z_25 != NULL) && (z_25 != b_26)))
                                    _fail(b_26);
                                  else
                                    z_25 = b_26;
                                }
                              }
                            }
                            t = a_18;
                            {
                              ATerm d_26 = NULL;
                              t = not_null(u_25);
                              {
                                t = eval_config_0(t);
                                {
                                  d_26 = t;
                                  if(((c_26 != NULL) && (c_26 != d_26)))
                                    _fail(d_26);
                                  else
                                    c_26 = d_26;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_25), not_null(c_26));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm l_26 = NULL;
  l_26 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_18, not_null(l_26));
    {
      t = table_get_0(t);
      {
        ATerm j_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_18;
            e_18 = t;
            {
              ATerm n_26 = NULL;
              ATerm o_26 = NULL;
              o_26 = t;
              if(((n_26 != NULL) && (n_26 != o_26)))
                _fail(o_26);
              else
                n_26 = o_26;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_b_18, not_null(l_26), not_null(n_26));
                t = table_put_0(t);
              }
            }
            t = e_18;
          }
          return(t);
        }
        t = try_1(t, j_2);
      }
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_26 = NULL;
  s_26 = t;
  t = SSL_TicksToSeconds(not_null(s_26));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  x_26 = t;
  w_26 :
  if(match_cons(x_26, sym__2))
    {
      y_26 = ATgetArgument(x_26, 0);
      z_26 = ATgetArgument(x_26, 1);
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_26), not_null(z_26));
            LocalPopChoice(k_18);
          }
        else
          {
            t = j_18;
            t = SSL_addr(not_null(y_26), not_null(z_26));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm z_69 (ATerm), ATerm a_70 (ATerm))
{
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_69(t);
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
      {
        ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
        g_27 = t;
        f_27 :
        if(((ATgetType(g_27) == AT_LIST) && ((ATermList) g_27 != ATempty)))
          {
            h_27 = ATgetFirst((ATermList) g_27);
            i_27 = (ATerm) ATgetNext((ATermList) g_27);
            {
              ATerm l_27 = NULL;
              ATerm m_27 = NULL;
              t = not_null(i_27);
              {
                t = foldr_2(t, z_69, a_70);
                {
                  m_27 = t;
                  if(((l_27 != NULL) && (l_27 != m_27)))
                    _fail(m_27);
                  else
                    l_27 = m_27;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_27), not_null(l_27));
                t = a_70(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm r_71 (ATerm), ATerm s_71 (ATerm))
{
  ATerm t_27 = NULL;
  ATerm w_27 = NULL;
  t_27 = t;
  {
    ATerm x_27 = NULL;
    ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
    t = not_null(t_27);
    {
      x_27 = t;
      {
        t = SSL_explode_term(not_null(x_27));
        {
          z_27 = t;
          s_27 :
          if(match_cons(z_27, sym__2))
            {
              a_28 = ATgetArgument(z_27, 0);
              b_28 = ATgetArgument(z_27, 1);
              if(((w_27 != NULL) && (w_27 != b_28)))
                _fail(b_28);
              else
                w_27 = b_28;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_27);
      t = foldr_2(t, r_71, s_71);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm k_2 (ATerm t)
    {
      t = term_q_13;
      return(t);
    }
    t = crush_2(t, k_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  k_28 = t;
  j_28 :
  if(match_cons(k_28, sym__2))
    {
      l_28 = ATgetArgument(k_28, 0);
      m_28 = ATgetArgument(k_28, 1);
      {
        ATerm n_18;
        n_18 = t;
        {
          ATerm o_18 = t;
          int q_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_28), not_null(m_28));
              LocalPopChoice(q_18);
            }
          else
            {
              t = o_18;
              t = SSL_gtr(not_null(l_28), not_null(m_28));
            }
        }
        t = n_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm s_28 = NULL;
  ATerm r_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
      t_28 = t;
      r_28 :
      if(match_cons(t_28, sym__2))
        {
          u_28 = ATgetArgument(t_28, 0);
          v_28 = ATgetArgument(t_28, 1);
          {
            if(((s_28 != NULL) && (s_28 != u_28)))
              _fail(u_28);
            else
              s_28 = u_28;
            if(((s_28 != NULL) && (s_28 != v_28)))
              _fail(v_28);
            else
              s_28 = v_28;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(t_18);
    }
  else
    {
      t = r_18;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_63 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    ATerm u_18;
    u_18 = t;
    {
      ATerm y_28 = NULL;
      ATerm z_28 = NULL;
      t = term_w_18;
      {
        t = get_config_0(t);
        {
          z_28 = t;
          if(((y_28 != NULL) && (y_28 != z_28)))
            _fail(z_28);
          else
            y_28 = z_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_28), term_l_7);
        t = geq_0(t);
      }
    }
    t = u_18;
    t = l_63(t);
    return(t);
  }
  t = try_1(t, m_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm d_29 = NULL,f_29 = NULL;
    ATerm z_18;
    z_18 = t;
    {
      ATerm e_29 = NULL;
      t = run_time_0(t);
      {
        e_29 = t;
        if(((d_29 != NULL) && (d_29 != e_29)))
          _fail(e_29);
        else
          d_29 = e_29;
      }
    }
    t = z_18;
    {
      ATerm g_29 = NULL;
      t = term_c_19;
      {
        t = get_config_0(t);
        {
          g_29 = t;
          if(((f_29 != NULL) && (f_29 != g_29)))
            _fail(g_29);
          else
            f_29 = g_29;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_19), not_null(d_29)), term_d_19), not_null(f_29)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_2);
  {
    t = term_q_13;
    t = exit_0(t);
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm m_65 (ATerm))
{
  ATerm o_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL;
  ATerm f_19;
  f_19 = t;
  t = dtime_0(t);
  t = f_19;
  {
    t = m_65(t);
    {
      ATerm g_19;
      g_19 = t;
      {
        ATerm p_29 = NULL;
        t = dtime_0(t);
        {
          p_29 = t;
          if(((o_29 != NULL) && (o_29 != p_29)))
            _fail(p_29);
          else
            o_29 = p_29;
        }
      }
      t = g_19;
      {
        q_29 = t;
        l_29 :
        if(match_cons(q_29, sym__2))
          {
            r_29 = ATgetArgument(q_29, 0);
            s_29 = ATgetArgument(q_29, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_29)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(o_29))), not_null(s_29));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  t = SSL_ReadFromFile(not_null(y_29));
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_68 (ATerm), ATerm o_68 (ATerm))
{
  ATerm d_30 = NULL,f_30 = NULL;
  ATerm k_19;
  k_19 = t;
  {
    ATerm e_30 = NULL;
    t = n_68(t);
    {
      e_30 = t;
      if(((d_30 != NULL) && (d_30 != e_30)))
        _fail(e_30);
      else
        d_30 = e_30;
    }
  }
  t = k_19;
  {
    ATerm g_30 = NULL;
    t = o_68(t);
    {
      g_30 = t;
      if(((f_30 != NULL) && (f_30 != g_30)))
        _fail(g_30);
      else
        f_30 = g_30;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_30), not_null(f_30));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm o_30 = NULL;
  ATerm l_19;
  l_19 = t;
  {
    ATerm m_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_2 (ATerm t)
        {
          ATerm p_30 = NULL,q_30 = NULL;
          p_30 = t;
          k_30 :
          if(match_cons(p_30, sym_Input_1))
            {
              q_30 = ATgetArgument(p_30, 0);
              if(((o_30 != NULL) && (o_30 != q_30)))
                _fail(q_30);
              else
                o_30 = q_30;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, o_2);
        LocalPopChoice(q_19);
      }
    else
      {
        t = m_19;
        {
          ATerm r_30 = NULL;
          t = term_w_19;
          {
            r_30 = t;
            if(((o_30 != NULL) && (o_30 != r_30)))
              _fail(r_30);
            else
              o_30 = r_30;
          }
        }
      }
  }
  t = l_19;
  {
    ATerm p_2 (ATerm t)
    {
      t = not_null(o_30);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, p_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_31 = NULL;
  a_31 = t;
  z_30 :
  if(match_cons(a_31, sym_Version_0))
    {
      ATerm c_31 = NULL,e_31 = NULL;
      ATerm j_20;
      j_20 = t;
      {
        ATerm d_31 = NULL;
        t = SSLgetAnnotations(not_null(a_31));
        {
          d_31 = t;
          if(((c_31 != NULL) && (c_31 != d_31)))
            _fail(d_31);
          else
            c_31 = d_31;
        }
      }
      t = j_20;
      {
        ATerm f_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(c_31));
        {
          f_31 = t;
          if(((e_31 != NULL) && (e_31 != f_31)))
            _fail(f_31);
          else
            e_31 = f_31;
        }
        t = not_null(e_31);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_65 (ATerm))
{
  ATerm x_2 (ATerm t)
  {
    ATerm k_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(q_20);
      }
    else
      {
        t = k_20;
        {
          ATerm r_20 = t;
          int t_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(t_20);
            }
          else
            {
              t = r_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, x_2);
  t = k_65(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm k_31 = NULL;
  k_31 = t;
  t = SSL_table_create(not_null(k_31));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm o_31 = NULL;
  o_31 = t;
  {
    ATerm u_20;
    u_20 = t;
    {
      t = term_w_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_15, term_b_16, not_null(o_31));
          t = table_put_0(t);
        }
      }
    }
    t = u_20;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm s_31 = NULL;
  s_31 = t;
  t = SSL_string_to_int(not_null(s_31));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL;
  a_32 = t;
  y_31 :
  if(match_string(a_32, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(a_32) == AT_LIST) && ((ATermList) a_32 != ATempty)))
        {
          b_32 = ATgetFirst((ATermList) a_32);
          c_32 = (ATerm) ATgetNext((ATermList) a_32);
          z_31 :
          if(((ATgetType(c_32) == AT_LIST) && ((ATermList) c_32 != ATempty)))
            {
              d_32 = ATgetFirst((ATermList) c_32);
              e_32 = (ATerm) ATgetNext((ATermList) c_32);
              {
                ATerm l_32 = NULL;
                ATerm v_20;
                v_20 = t;
                {
                  t = not_null(b_32);
                  t = j_0(t);
                }
                t = v_20;
                {
                  ATerm m_32 = NULL;
                  t = not_null(d_32);
                  {
                    t = k_0(t);
                    {
                      m_32 = t;
                      if(((l_32 != NULL) && (l_32 != m_32)))
                        _fail(m_32);
                      else
                        l_32 = m_32;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_32)), not_null(l_32));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_3 (ATerm t)
      {
        ATerm d_33 = NULL;
        d_33 = t;
        q_32 :
        if(!(match_string(d_33, "-i")))
          {
            if(!(match_string(d_33, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        ATerm g_33 = NULL;
        ATerm y_20;
        y_20 = t;
        {
          ATerm e_33 = NULL;
          ATerm f_33 = NULL;
          f_33 = t;
          if(((e_33 != NULL) && (e_33 != f_33)))
            _fail(f_33);
          else
            e_33 = f_33;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_z_20, not_null(e_33));
            t = set_config_0(t);
          }
        }
        t = y_20;
        {
          ATerm h_33 = NULL;
          h_33 = t;
          if(((g_33 != NULL) && (g_33 != h_33)))
            _fail(h_33);
          else
            g_33 = h_33;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_33));
        }
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        t = term_a_21;
        return(t);
      }
      t = ArgOption_3(t, d_3, e_3, f_3);
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 (ATerm t)
            {
              ATerm i_33 = NULL;
              i_33 = t;
              t_32 :
              if(!(match_string(i_33, "-o")))
                {
                  if(!(match_string(i_33, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm l_3 (ATerm t)
            {
              ATerm l_33 = NULL;
              ATerm d_21;
              d_21 = t;
              {
                ATerm j_33 = NULL;
                ATerm k_33 = NULL;
                k_33 = t;
                if(((j_33 != NULL) && (j_33 != k_33)))
                  _fail(k_33);
                else
                  j_33 = k_33;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_21, not_null(j_33));
                  t = set_config_0(t);
                }
              }
              t = d_21;
              {
                ATerm m_33 = NULL;
                m_33 = t;
                if(((l_33 != NULL) && (l_33 != m_33)))
                  _fail(m_33);
                else
                  l_33 = m_33;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_33));
              }
              return(t);
            }
            ATerm p_3 (ATerm t)
            {
              t = term_f_21;
              return(t);
            }
            t = ArgOption_3(t, k_3, l_3, p_3);
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            {
              ATerm g_21 = t;
              int h_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_3 (ATerm t)
                  {
                    ATerm n_33 = NULL;
                    n_33 = t;
                    w_32 :
                    if(!(match_string(n_33, "-S")))
                      {
                        if(!(match_string(n_33, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm v_3 (ATerm t)
                  {
                    t = term_i_21;
                    t = set_config_0(t);
                    t = term_j_21;
                    return(t);
                  }
                  ATerm w_3 (ATerm t)
                  {
                    t = term_o_21;
                    return(t);
                  }
                  t = Option_3(t, q_3, v_3, w_3);
                  LocalPopChoice(h_21);
                }
              else
                {
                  t = g_21;
                  {
                    ATerm p_21 = t;
                    int q_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_3 (ATerm t)
                        {
                          ATerm o_33 = NULL;
                          o_33 = t;
                          x_32 :
                          if(!(match_string(o_33, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm z_3 (ATerm t)
                        {
                          ATerm r_33 = NULL;
                          ATerm r_21;
                          r_21 = t;
                          {
                            ATerm p_33 = NULL;
                            ATerm q_33 = NULL;
                            t = string_to_int_0(t);
                            {
                              q_33 = t;
                              if(((p_33 != NULL) && (p_33 != q_33)))
                                _fail(q_33);
                              else
                                p_33 = q_33;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_w_18, not_null(p_33));
                              t = set_config_0(t);
                            }
                          }
                          t = r_21;
                          {
                            ATerm s_33 = NULL;
                            s_33 = t;
                            if(((r_33 != NULL) && (r_33 != s_33)))
                              _fail(s_33);
                            else
                              r_33 = s_33;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_33));
                          }
                          return(t);
                        }
                        ATerm a_4 (ATerm t)
                        {
                          t = term_s_21;
                          return(t);
                        }
                        t = ArgOption_3(t, y_3, z_3, a_4);
                        LocalPopChoice(q_21);
                      }
                    else
                      {
                        t = p_21;
                        {
                          ATerm t_21 = t;
                          int u_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_4 (ATerm t)
                              {
                                ATerm t_33 = NULL;
                                t_33 = t;
                                a_33 :
                                if(!(match_string(t_33, "-v")))
                                  {
                                    if(!(match_string(t_33, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm d_4 (ATerm t)
                              {
                                t = term_x_21;
                                t = set_config_0(t);
                                t = term_a_22;
                                return(t);
                              }
                              ATerm g_4 (ATerm t)
                              {
                                t = term_b_22;
                                return(t);
                              }
                              t = Option_3(t, b_4, d_4, g_4);
                              LocalPopChoice(u_21);
                            }
                          else
                            {
                              t = t_21;
                              {
                                ATerm c_22 = t;
                                int f_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm h_4 (ATerm t)
                                    {
                                      ATerm u_33 = NULL;
                                      u_33 = t;
                                      b_33 :
                                      if(!(match_string(u_33, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm i_4 (ATerm t)
                                    {
                                      t = term_h_22;
                                      t = set_config_0(t);
                                      t = term_j_22;
                                      return(t);
                                    }
                                    ATerm j_4 (ATerm t)
                                    {
                                      t = term_l_22;
                                      return(t);
                                    }
                                    t = Option_3(t, h_4, i_4, j_4);
                                    LocalPopChoice(f_22);
                                  }
                                else
                                  {
                                    t = c_22;
                                    {
                                      ATerm k_4 (ATerm t)
                                      {
                                        ATerm v_33 = NULL;
                                        v_33 = t;
                                        c_33 :
                                        if(!(match_string(v_33, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm m_4 (ATerm t)
                                      {
                                        t = term_p_22;
                                        t = set_config_0(t);
                                        t = term_r_22;
                                        return(t);
                                      }
                                      ATerm n_4 (ATerm t)
                                      {
                                        t = term_s_22;
                                        return(t);
                                      }
                                      t = Option_3(t, k_4, m_4, n_4);
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_34 = NULL;
  d_34 = t;
  t = SSL_table_destroy(not_null(d_34));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_34 = NULL;
  h_34 = t;
  t = SSL_exit(not_null(h_34));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm l_34 = NULL;
  l_34 = t;
  t = SSL_implode_string(not_null(l_34));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_76 (ATerm))
{
  ATerm o_34 (ATerm t)
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_34);
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        {
          t = Nil_0(t);
          t = d_76(t);
        }
      }
    return(t);
  }
  t = o_34(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      {
        ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
        r_34 = t;
        q_34 :
        if(((ATgetType(r_34) == AT_LIST) && ((ATermList) r_34 != ATempty)))
          {
            s_34 = ATgetFirst((ATermList) r_34);
            t_34 = (ATerm) ATgetNext((ATermList) r_34);
            {
              t = not_null(s_34);
              {
                ATerm p_4 (ATerm t)
                {
                  t = not_null(t_34);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_4);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm z_34 = NULL;
  z_34 = t;
  t = SSL_explode_string(not_null(z_34));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_62 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_75 (ATerm))
{
  ATerm c_35 (ATerm t)
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        t = Cons_2(t, o_75, c_35);
      }
    return(t);
  }
  t = c_35(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
  l_35 = t;
  i_35 :
  if(((ATgetType(l_35) == AT_LIST) && ((ATermList) l_35 != ATempty)))
    {
      j_35 = ATgetFirst((ATermList) l_35);
      k_35 = (ATerm) ATgetNext((ATermList) l_35);
      {
        ATerm o_35 = NULL;
        t = not_null(k_35);
        {
          ATerm z_22;
          z_22 = t;
          {
            ATerm p_35 = NULL,r_35 = NULL,t_35 = NULL;
            ATerm e_23;
            e_23 = t;
            {
              ATerm q_35 = NULL;
              t = i_0(t);
              {
                q_35 = t;
                if(((p_35 != NULL) && (p_35 != q_35)))
                  _fail(q_35);
                else
                  p_35 = q_35;
              }
            }
            t = e_23;
            {
              ATerm s_35 = NULL;
              t = not_null(j_35);
              {
                t = f_0(t);
                {
                  s_35 = t;
                  if(((r_35 != NULL) && (r_35 != s_35)))
                    _fail(s_35);
                  else
                    r_35 = s_35;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(p_35)), not_null(r_35));
                {
                  t_35 = t;
                  if(((o_35 != NULL) && (o_35 != t_35)))
                    _fail(t_35);
                  else
                    o_35 = t_35;
                }
              }
            }
          }
          t = z_22;
          {
            ATerm q_4 (ATerm t)
            {
              t = not_null(o_35);
              return(t);
            }
            t = reverse_acc_2(t, f_0, q_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) l_35 == ATempty))
        {
          {
            t = term_b_7;
            t = i_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, r_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_62 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_52 (ATerm))
{
  ATerm g_36 = NULL,h_36 = NULL;
  g_36 = t;
  f_36 :
  if(match_cons(g_36, sym_Program_1))
    {
      h_36 = ATgetArgument(g_36, 0);
      {
        ATerm k_36 = NULL,m_36 = NULL;
        ATerm l_36 = NULL;
        t = SSLgetAnnotations(not_null(g_36));
        {
          l_36 = t;
          if(((k_36 != NULL) && (k_36 != l_36)))
            _fail(l_36);
          else
            k_36 = l_36;
        }
        {
          t = not_null(h_36);
          {
            ATerm o_36 = NULL;
            t = m_52(t);
            {
              m_36 = t;
              {
                ATerm p_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_36)), not_null(k_36));
                {
                  p_36 = t;
                  if(((o_36 != NULL) && (o_36 != p_36)))
                    _fail(p_36);
                  else
                    o_36 = p_36;
                }
                t = not_null(o_36);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm y_36 = NULL;
  ATerm s_4 (ATerm t)
  {
    ATerm u_4 (ATerm t)
    {
      ATerm z_36 = NULL;
      z_36 = t;
      if(((y_36 != NULL) && (y_36 != z_36)))
        _fail(z_36);
      else
        y_36 = z_36;
      return(t);
    }
    t = Program_1(t, u_4);
    return(t);
  }
  t = option_defined_1(t, s_4);
  {
    ATerm x_4 (ATerm t)
    {
      ATerm a_37 = NULL;
      ATerm b_37 = NULL;
      t = term_b_7;
      {
        ATerm a_5 (ATerm t)
        {
          t = not_null(y_36);
          return(t);
        }
        t = short_description_1(t, a_5);
        {
          t = concat_strings_0(t);
          {
            b_37 = t;
            if(((a_37 != NULL) && (a_37 != b_37)))
              _fail(b_37);
            else
              a_37 = b_37;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, not_null(a_37)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, x_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, term_f_23));
      {
        t = printnl_0(t);
        {
          t = term_m_23;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm b_5 (ATerm t)
                {
                  ATerm g_37 = NULL;
                  g_37 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_37)), term_p_23));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, b_5);
                {
                  ATerm d_5 (ATerm t)
                  {
                    ATerm i_37 = NULL;
                    ATerm j_37 = NULL;
                    t = term_b_7;
                    {
                      ATerm e_5 (ATerm t)
                      {
                        t = not_null(y_36);
                        return(t);
                      }
                      t = long_description_1(t, e_5);
                      {
                        t = concat_strings_0(t);
                        {
                          j_37 = t;
                          if(((i_37 != NULL) && (i_37 != j_37)))
                            _fail(j_37);
                          else
                            i_37 = j_37;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_37)), term_q_23));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, d_5);
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
ATerm printnl_0 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL;
  q_37 = t;
  p_37 :
  if(match_cons(q_37, sym__2))
    {
      r_37 = ATgetArgument(q_37, 0);
      s_37 = ATgetArgument(q_37, 1);
      {
        ATerm r_23;
        r_23 = t;
        t = SSL_printnl(not_null(r_37), not_null(s_37));
        t = r_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_52 (ATerm))
{
  ATerm b_38 = NULL,c_38 = NULL;
  b_38 = t;
  a_38 :
  if(match_cons(b_38, sym_Undefined_1))
    {
      c_38 = ATgetArgument(b_38, 0);
      {
        ATerm f_38 = NULL,h_38 = NULL;
        ATerm g_38 = NULL;
        t = SSLgetAnnotations(not_null(b_38));
        {
          g_38 = t;
          if(((f_38 != NULL) && (f_38 != g_38)))
            _fail(g_38);
          else
            f_38 = g_38;
        }
        {
          t = not_null(c_38);
          {
            ATerm j_38 = NULL;
            t = n_52(t);
            {
              h_38 = t;
              {
                ATerm k_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(h_38)), not_null(f_38));
                {
                  k_38 = t;
                  if(((j_38 != NULL) && (j_38 != k_38)))
                    _fail(k_38);
                  else
                    j_38 = k_38;
                }
                t = not_null(j_38);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm x_75 (ATerm))
{
  ATerm p_38 (ATerm t)
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_75, _id);
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
        t = Cons_2(t, _id, p_38);
      }
    return(t);
  }
  t = p_38(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_63 (ATerm))
{
  t = fetch_1(t, j_63);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_38 = NULL;
  v_38 = t;
  t_38 :
  if(match_cons(v_38, sym_Help_0))
    {
      ATerm x_38 = NULL,z_38 = NULL;
      ATerm u_23;
      u_23 = t;
      {
        ATerm y_38 = NULL;
        t = SSLgetAnnotations(not_null(v_38));
        {
          y_38 = t;
          if(((x_38 != NULL) && (x_38 != y_38)))
            _fail(y_38);
          else
            x_38 = y_38;
        }
      }
      t = u_23;
      {
        ATerm a_39 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_38));
        {
          a_39 = t;
          if(((z_38 != NULL) && (z_38 != a_39)))
            _fail(a_39);
          else
            z_38 = a_39;
        }
        t = not_null(z_38);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_84 (ATerm))
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_84(t);
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
  g_39 = t;
  f_39 :
  if(match_cons(g_39, sym__2))
    {
      h_39 = ATgetArgument(g_39, 0);
      i_39 = ATgetArgument(g_39, 1);
      t = SSL_table_get(not_null(h_39), not_null(i_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  p_39 = t;
  o_39 :
  if(match_cons(p_39, sym__3))
    {
      q_39 = ATgetArgument(p_39, 0);
      r_39 = ATgetArgument(p_39, 1);
      s_39 = ATgetArgument(p_39, 2);
      {
        ATerm a_24;
        a_24 = t;
        {
          ATerm w_39 = NULL;
          ATerm x_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_39), not_null(r_39));
          {
            ATerm b_24 = t;
            int c_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_24);
              }
            else
              {
                t = b_24;
                t = (ATerm) ATempty;
              }
            {
              x_39 = t;
              if(((w_39 != NULL) && (w_39 != x_39)))
                _fail(x_39);
              else
                w_39 = x_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_39), not_null(r_39), (ATerm) ATinsert(CheckATermList(not_null(w_39)), not_null(s_39)));
            t = table_put_0(t);
          }
        }
        t = a_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_62 (ATerm))
{
  ATerm f_40 = NULL;
  ATerm g_40 = NULL;
  t = term_b_7;
  {
    t = p_62(t);
    {
      g_40 = t;
      if(((f_40 != NULL) && (f_40 != g_40)))
        _fail(g_40);
      else
        f_40 = g_40;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_23, term_k_23, not_null(f_40));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
  o_40 = t;
  n_40 :
  if(match_string(o_40, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(o_40) == AT_LIST) && ((ATermList) o_40 != ATempty)))
        {
          p_40 = ATgetFirst((ATermList) o_40);
          q_40 = (ATerm) ATgetNext((ATermList) o_40);
          {
            ATerm t_40 = NULL;
            ATerm d_24;
            d_24 = t;
            {
              t = not_null(p_40);
              t = a_0(t);
            }
            t = d_24;
            {
              ATerm u_40 = NULL;
              t = term_b_7;
              {
                t = b_0(t);
                {
                  u_40 = t;
                  if(((t_40 != NULL) && (t_40 != u_40)))
                    _fail(u_40);
                  else
                    t_40 = u_40;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_40)), not_null(t_40));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm z_40 = NULL;
    z_40 = t;
    y_40 :
    if(!(match_string(z_40, "--help")))
      {
        if(!(match_string(z_40, "-h")))
          {
            if(!(match_string(z_40, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = term_e_24;
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = term_f_24;
    return(t);
  }
  t = Option_3(t, f_5, g_5, i_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL;
  c_41 = t;
  b_41 :
  if(((ATgetType(c_41) == AT_LIST) && ((ATermList) c_41 != ATempty)))
    {
      d_41 = ATgetFirst((ATermList) c_41);
      e_41 = (ATerm) ATgetNext((ATermList) c_41);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_41)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_41)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm w_57 (ATerm), ATerm x_57 (ATerm))
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL;
  o_41 = t;
  n_41 :
  if(((ATgetType(o_41) == AT_LIST) && ((ATermList) o_41 != ATempty)))
    {
      p_41 = ATgetFirst((ATermList) o_41);
      q_41 = (ATerm) ATgetNext((ATermList) o_41);
      {
        ATerm u_41 = NULL,w_41 = NULL;
        ATerm v_41 = NULL;
        t = SSLgetAnnotations(not_null(o_41));
        {
          v_41 = t;
          if(((u_41 != NULL) && (u_41 != v_41)))
            _fail(v_41);
          else
            u_41 = v_41;
        }
        {
          t = not_null(p_41);
          {
            ATerm y_41 = NULL;
            t = w_57(t);
            {
              w_41 = t;
              {
                t = not_null(q_41);
                {
                  ATerm a_42 = NULL;
                  t = x_57(t);
                  {
                    y_41 = t;
                    {
                      ATerm b_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_41)), not_null(w_41)), not_null(u_41));
                      {
                        b_42 = t;
                        if(((a_42 != NULL) && (a_42 != b_42)))
                          _fail(b_42);
                        else
                          a_42 = b_42;
                      }
                      t = not_null(a_42);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm l_42 = NULL;
  l_42 = t;
  k_42 :
  if(((ATermList) l_42 == ATempty))
    {
      {
        ATerm n_42 = NULL,p_42 = NULL;
        ATerm h_24;
        h_24 = t;
        {
          ATerm o_42 = NULL;
          t = SSLgetAnnotations(not_null(l_42));
          {
            o_42 = t;
            if(((n_42 != NULL) && (n_42 != o_42)))
              _fail(o_42);
            else
              n_42 = o_42;
          }
        }
        t = h_24;
        {
          ATerm q_42 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_42));
          {
            q_42 = t;
            if(((p_42 != NULL) && (p_42 != q_42)))
              _fail(q_42);
            else
              p_42 = q_42;
          }
          t = not_null(p_42);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
  w_42 = t;
  v_42 :
  if(match_cons(w_42, sym__2))
    {
      x_42 = ATgetArgument(w_42, 0);
      y_42 = ATgetArgument(w_42, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_18, not_null(x_42), not_null(y_42));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_62 (ATerm))
{
  ATerm i_24;
  i_24 = t;
  {
    ATerm m_5 (ATerm t)
    {
      t = term_j_24;
      t = n_62(t);
      return(t);
    }
    t = try_1(t, m_5);
  }
  t = i_24;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm h_43 = NULL;
      ATerm k_24;
      k_24 = t;
      {
        ATerm e_43 = NULL;
        ATerm f_43 = NULL;
        f_43 = t;
        if(((e_43 != NULL) && (e_43 != f_43)))
          _fail(f_43);
        else
          e_43 = f_43;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_19, not_null(e_43));
          t = set_config_0(t);
        }
      }
      t = k_24;
      {
        ATerm i_43 = NULL;
        i_43 = t;
        if(((h_43 != NULL) && (h_43 != i_43)))
          _fail(i_43);
        else
          h_43 = i_43;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_43));
      }
      return(t);
    }
    ATerm r_5 (ATerm t)
    {
      ATerm l_24 = t;
      int m_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_24 = t;
          int s_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(s_24);
            }
          else
            {
              t = n_24;
              {
                t = n_62(t);
                t = Cons_2(t, _id, r_5);
              }
            }
          LocalPopChoice(m_24);
        }
      else
        {
          t = l_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_5, r_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
  ATerm t_24;
  t_24 = t;
  {
    ATerm u_43 = NULL,v_43 = NULL,a_44 = NULL,b_44 = NULL;
    u_43 = t;
    n_43 :
    if(match_cons(u_43, sym__3))
      {
        v_43 = ATgetArgument(u_43, 0);
        a_44 = ATgetArgument(u_43, 1);
        b_44 = ATgetArgument(u_43, 2);
        {
          if(((r_43 != NULL) && (r_43 != v_43)))
            _fail(v_43);
          else
            r_43 = v_43;
          {
            if(((s_43 != NULL) && (s_43 != a_44)))
              _fail(a_44);
            else
              s_43 = a_44;
            {
              if(((t_43 != NULL) && (t_43 != b_44)))
                _fail(b_44);
              else
                t_43 = b_44;
              t = SSL_table_put(not_null(r_43), not_null(s_43), not_null(t_43));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_62 (ATerm))
{
  ATerm e_44 = NULL;
  ATerm u_24;
  u_24 = t;
  {
    t = term_v_24;
    t = table_put_0(t);
  }
  t = u_24;
  {
    ATerm x_5 (ATerm t)
    {
      ATerm w_24 = t;
      int y_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_62(t);
          LocalPopChoice(y_24);
        }
      else
        {
          t = w_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, x_5);
    {
      ATerm h_6 (ATerm t)
      {
        ATerm z_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_q_13;
                t = exit_0(t);
              }
            }
            LocalPopChoice(a_25);
          }
        else
          {
            t = z_24;
            {
              ATerm n_6 (ATerm t)
              {
                ATerm o_6 (ATerm t)
                {
                  ATerm f_44 = NULL;
                  f_44 = t;
                  if(((e_44 != NULL) && (e_44 != f_44)))
                    _fail(f_44);
                  else
                    e_44 = f_44;
                  return(t);
                }
                t = Undefined_1(t, o_6);
                return(t);
              }
              t = option_defined_1(t, n_6);
              {
                ATerm b_25;
                b_25 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_44)), term_c_25));
                  t = printnl_0(t);
                }
                t = b_25;
                {
                  t = system_usage_0(t);
                  {
                    t = term_l_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, h_6);
      {
        ATerm d_25;
        d_25 = t;
        {
          t = term_g_23;
          t = table_destroy_0(t);
        }
        t = d_25;
      }
    }
  }
  return(t);
}
ATerm iowrapNoOutput_3 (ATerm t, ATerm e_65 (ATerm), ATerm f_65 (ATerm), ATerm g_65 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_65(t);
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, u_6);
  {
    t = store_options_0(t);
    {
      ATerm g_25 = t;
      int h_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, g_65);
          LocalPopChoice(h_25);
        }
      else
        {
          t = g_25;
          {
            ATerm i_25 = t;
            int j_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, e_65);
                  t = report_success_0(t);
                }
                LocalPopChoice(j_25);
              }
            else
              {
                t = i_25;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    t = _2(t, _id, ldiff_0);
    return(t);
  }
  t = iowrapNoOutput_3(t, v_6, ops_0, my_usage_0);
  return(t);
}
