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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Input2_1;
Symbol sym_Path_0;
Symbol sym_SquashedPath_0;
Symbol sym_NoPath_0;
Symbol sym_TopMost_0;
Symbol sym_UseAmbMark_0;
Symbol sym_NL_0;
Symbol sym_L_1;
Symbol sym_UL_0;
Symbol sym_US_0;
Symbol sym_Label_2;
Symbol sym_Bracket_5;
Symbol sym_amb_2;
Symbol sym_amb1_1;
Symbol sym_amb2_1;
Symbol sym_LNil_0;
Symbol sym_LCons_3;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
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
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Fail_0;
Symbol sym_Success_0;
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
  sym_LNil_0 = ATmakeSymbol("LNil", 0, ATfalse);
  ATprotectSymbol(sym_LNil_0);
  sym_LCons_3 = ATmakeSymbol("LCons", 3, ATfalse);
  ATprotectSymbol(sym_LCons_3);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Success_0 = ATmakeSymbol("Success", 0, ATfalse);
  ATprotectSymbol(sym_Success_0);
  init_constant_terms();
}
ATerm term_h_26;
ATerm term_t_25;
ATerm term_h_25;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_b_24;
ATerm term_z_23;
ATerm term_n_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_d_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_k_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_w_16;
ATerm term_h_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_t_15;
ATerm term_v_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_i_12;
ATerm term_o_10;
ATerm term_x_8;
ATerm term_o_8;
ATerm term_c_8;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_r_7;
ATerm term_o_7;
ATerm term_l_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_l_6;
ATerm term_b_6;
ATerm term_v_5;
ATerm term_q_5;
void init_constant_terms (void)
{
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("0.2", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" version ", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] -i file -i2 file [-o file] [-b]", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n		{--path|--nopath|--squashedpath|--topmost}", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [--useambmark]", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n		[--help|-h|-?] [--version]\n", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Path_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_SquashedPath_0);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_NoPath_0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_TopMost_0);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_UseAmbMark_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("..", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("diff: ", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__3, term_n_13, term_n_13, term_e_7);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__2, term_a_16, term_c_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_n_13);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym__2, term_g_18, term_x_8);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__2, term_w_18, term_v_13);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_13);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__2, term_e_19, term_x_8);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_x_8);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_k_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_q_24, term_x_8);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym__3, term_j_21, term_k_21, (ATerm) ATempty);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm version_0 (ATerm);
ATerm my_usage_0 (ATerm);
ATerm Option_2 (ATerm, ATerm b_86 (ATerm), ATerm c_86 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm p_86 (ATerm), ATerm q_86 (ATerm));
ATerm ops_0 (ATerm);
ATerm echo_1 (ATerm, ATerm z_81 (ATerm));
ATerm try_echo_1 (ATerm, ATerm k_61 (ATerm));
ATerm is_diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm m_66 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm c_83 (ATerm));
ATerm laydiff_2 (ATerm, ATerm q_61 (ATerm), ATerm r_61 (ATerm));
ATerm laydiff_1 (ATerm, ATerm p_61 (ATerm));
ATerm Fst_0 (ATerm);
ATerm LConstoCons_0 (ATerm);
ATerm laydiff_squash_2 (ATerm, ATerm u_61 (ATerm), ATerm v_61 (ATerm));
ATerm laydiff_squash_1 (ATerm, ATerm t_61 (ATerm));
ATerm printtopdiff_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm d_73 (ATerm));
ATerm zip_1 (ATerm, ATerm f_73 (ATerm));
ATerm eq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm));
ATerm length_0 (ATerm);
ATerm L_1 (ATerm, ATerm o_55 (ATerm));
ATerm UL_0 (ATerm);
ATerm NL_0 (ATerm);
ATerm is_layout_0 (ATerm);
ATerm layeq_2 (ATerm, ATerm m_61 (ATerm), ATerm n_61 (ATerm));
ATerm printdiff_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm k_71 (ATerm));
ATerm get_options_0 (ATerm);
ATerm option_value_2 (ATerm, ATerm d_83 (ATerm), ATerm e_83 (ATerm));
ATerm ldiff_0 (ATerm);
ATerm _2 (ATerm, ATerm c_54 (ATerm), ATerm d_54 (ATerm));
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm b_83 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm c_79 (ATerm), ATerm d_79 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_77 (ATerm), ATerm o_77 (ATerm));
ATerm crush_2 (ATerm, ATerm l_76 (ATerm), ATerm m_76 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm t_84 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_82 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_86 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_86 (ATerm));
ATerm Program_1 (ATerm, ATerm v_60 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm y_81 (ATerm));
ATerm Undefined_1 (ATerm, ATerm w_60 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_71 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_85 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_71 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm x_81 (ATerm));
ATerm map_1 (ATerm, ATerm z_70 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_55 (ATerm), ATerm m_55 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_86 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_86 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm));
ATerm iowrapNoOutput_3 (ATerm, ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm));
ATerm main_0 (ATerm);
ATerm version_0 (ATerm t)
{
  t = term_q_5;
  return(t);
}
ATerm my_usage_0 (ATerm t)
{
  ATerm u_0 = NULL;
  ATerm r_5;
  r_5 = t;
  {
    ATerm w_1 = NULL;
    ATerm x_1 = NULL;
    ATerm b_0 (ATerm t)
    {
      ATerm g_1 = NULL,h_1 = NULL;
      g_1 = t;
      o_0 :
      if(match_cons(g_1, sym_Program_1))
        {
          h_1 = ATgetArgument(g_1, 0);
          t = not_null(h_1);
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_value_2(t, b_0, _fail);
    {
      w_1 = t;
      {
        if(((u_0 != NULL) && (u_0 != w_1)))
          _fail(w_1);
        else
          u_0 = w_1;
        {
          ATerm y_1 = NULL;
          t = term_q_5;
          {
            y_1 = t;
            if(((x_1 != NULL) && (x_1 != y_1)))
              _fail(y_1);
            else
              x_1 = y_1;
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_7), term_z_6), term_y_6), term_s_6), not_null(u_0)), term_r_6), term_l_6), not_null(x_1)), term_b_6), not_null(u_0)));
            {
              t = printnl_0(t);
              {
                t = term_e_7;
                t = exit_0(t);
              }
            }
          }
        }
      }
    }
  }
  t = r_5;
  return(t);
}
ATerm Option_2 (ATerm t, ATerm b_86 (ATerm), ATerm c_86 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = term_f_7;
    return(t);
  }
  t = Option_3(t, b_86, c_86, c_0);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm p_86 (ATerm), ATerm q_86 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    t = term_f_7;
    return(t);
  }
  t = ArgOption_3(t, p_86, q_86, e_0);
  return(t);
}
ATerm ops_0 (ATerm t)
{
  ATerm g_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_0 (ATerm t)
      {
        ATerm z_2 = NULL;
        z_2 = t;
        q_2 :
        if(!(match_string(z_2, "-i2")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm m_0 (ATerm t)
      {
        ATerm a_3 = NULL;
        a_3 = t;
        t = (ATerm) ATmakeAppl(sym_Input2_1, not_null(a_3));
        return(t);
      }
      t = ArgOption_2(t, f_0, m_0);
      LocalPopChoice(i_7);
    }
  else
    {
      t = g_7;
      {
        ATerm j_7 = t;
        int k_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_0 (ATerm t)
            {
              ATerm c_3 = NULL;
              c_3 = t;
              t_2 :
              if(!(match_string(c_3, "--path")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm p_0 (ATerm t)
            {
              t = term_l_7;
              return(t);
            }
            t = Option_2(t, n_0, p_0);
            LocalPopChoice(k_7);
          }
        else
          {
            t = j_7;
            {
              ATerm m_7 = t;
              int n_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_0 (ATerm t)
                  {
                    ATerm d_3 = NULL;
                    d_3 = t;
                    u_2 :
                    if(!(match_string(d_3, "--squashedpath")))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  ATerm r_0 (ATerm t)
                  {
                    t = term_o_7;
                    return(t);
                  }
                  t = Option_2(t, q_0, r_0);
                  LocalPopChoice(n_7);
                }
              else
                {
                  t = m_7;
                  {
                    ATerm p_7 = t;
                    int q_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_0 (ATerm t)
                        {
                          ATerm e_3 = NULL;
                          e_3 = t;
                          v_2 :
                          if(!(match_string(e_3, "--nopath")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm t_0 (ATerm t)
                        {
                          t = term_r_7;
                          return(t);
                        }
                        t = Option_2(t, s_0, t_0);
                        LocalPopChoice(q_7);
                      }
                    else
                      {
                        t = p_7;
                        {
                          ATerm s_7 = t;
                          int t_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm v_0 (ATerm t)
                              {
                                ATerm f_3 = NULL;
                                f_3 = t;
                                x_2 :
                                if(!(match_string(f_3, "--topmost")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm w_0 (ATerm t)
                              {
                                t = term_u_7;
                                return(t);
                              }
                              t = Option_2(t, v_0, w_0);
                              LocalPopChoice(t_7);
                            }
                          else
                            {
                              t = s_7;
                              {
                                ATerm x_0 (ATerm t)
                                {
                                  ATerm g_3 = NULL;
                                  g_3 = t;
                                  y_2 :
                                  if(!(match_string(g_3, "--useambmark")))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                ATerm y_0 (ATerm t)
                                {
                                  t = term_v_7;
                                  return(t);
                                }
                                t = Option_2(t, x_0, y_0);
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
ATerm echo_1 (ATerm t, ATerm z_81 (ATerm))
{
  ATerm w_7;
  w_7 = t;
  {
    ATerm k_3 = NULL,m_3 = NULL;
    ATerm x_7;
    x_7 = t;
    {
      ATerm l_3 = NULL;
      t = z_81(t);
      {
        l_3 = t;
        if(((k_3 != NULL) && (k_3 != l_3)))
          _fail(l_3);
        else
          k_3 = l_3;
      }
    }
    t = x_7;
    {
      ATerm n_3 = NULL;
      n_3 = t;
      if(((m_3 != NULL) && (m_3 != n_3)))
        _fail(n_3);
      else
        m_3 = n_3;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_3)), not_null(k_3)));
        t = printnl_0(t);
      }
    }
  }
  t = w_7;
  return(t);
}
ATerm try_echo_1 (ATerm t, ATerm k_61 (ATerm))
{
  ATerm g_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_8 = t;
      if((PushChoice() == 0))
        {
          ATerm z_0 (ATerm t)
          {
            t = term_o_8;
            return(t);
          }
          t = has_option_1(t, z_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_8;
        }
      t = echo_1(t, k_61);
      LocalPopChoice(m_8);
    }
  else
    {
      t = g_8;
      {
      }
    }
  return(t);
}
ATerm is_diff_0 (ATerm t)
{
  ATerm r_3 = NULL;
  r_3 = t;
  q_3 :
  if(!(match_string(r_3, "..")))
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm m_66 (ATerm))
{
  ATerm s_3 (ATerm t)
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_66(t);
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        t = _one(t, s_3);
      }
    return(t);
  }
  t = s_3(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
  w_3 = t;
  v_3 :
  if(match_cons(w_3, sym__2))
    {
      x_3 = ATgetArgument(w_3, 0);
      y_3 = ATgetArgument(w_3, 1);
      {
        ATerm w_8;
        w_8 = t;
        {
          t = not_null(y_3);
          {
            ATerm a_1 (ATerm t)
            {
              ATerm b_4 = NULL;
              b_4 = t;
              if(((x_3 != NULL) && (x_3 != b_4)))
                _fail(b_4);
              else
                x_3 = b_4;
              return(t);
            }
            t = oncetd_1(t, a_1);
          }
        }
        t = w_8;
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
  ATerm g_4 = NULL;
  ATerm i_4 = NULL;
  g_4 = t;
  {
    ATerm j_4 = NULL;
    t = get_options_0(t);
    {
      j_4 = t;
      {
        if(((i_4 != NULL) && (i_4 != j_4)))
          _fail(j_4);
        else
          i_4 = j_4;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_4), not_null(i_4));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_x_8;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm c_83 (ATerm))
{
  ATerm a_9;
  a_9 = t;
  {
    t = term_x_8;
    {
      t = c_83(t);
      t = check_option_0(t);
    }
  }
  t = a_9;
  return(t);
}
ATerm laydiff_2 (ATerm t, ATerm q_61 (ATerm), ATerm r_61 (ATerm))
{
  ATerm h_7 (ATerm t)
  {
    ATerm l_5 = NULL;
    ATerm b_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = eq_0(t);
        t = Fst_0(t);
        LocalPopChoice(c_9);
      }
    else
      {
        t = b_9;
        {
          ATerm d_9 = t;
          int e_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2(t, is_layout_0, is_layout_0);
              t = Fst_0(t);
              LocalPopChoice(e_9);
            }
          else
            {
              t = d_9;
              {
                ATerm f_9 = t;
                int h_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL;
                    n_5 = t;
                    x_4 :
                    if(match_cons(n_5, sym__2))
                      {
                        o_5 = ATgetArgument(n_5, 0);
                        p_5 = ATgetArgument(n_5, 1);
                        {
                          ATerm s_5 = NULL,t_5 = NULL,z_5 = NULL,k_6 = NULL;
                          ATerm i_9;
                          i_9 = t;
                          {
                            ATerm u_5 = NULL;
                            ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
                            t = not_null(p_5);
                            {
                              u_5 = t;
                              {
                                t = SSL_explode_term(not_null(u_5));
                                {
                                  w_5 = t;
                                  p_4 :
                                  if(match_cons(w_5, sym__2))
                                    {
                                      x_5 = ATgetArgument(w_5, 0);
                                      y_5 = ATgetArgument(w_5, 1);
                                      {
                                        if(((s_5 != NULL) && (s_5 != x_5)))
                                          _fail(x_5);
                                        else
                                          s_5 = x_5;
                                        if(((t_5 != NULL) && (t_5 != y_5)))
                                          _fail(y_5);
                                        else
                                          t_5 = y_5;
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
                          t = i_9;
                          {
                            ATerm k_9;
                            k_9 = t;
                            {
                              ATerm a_6 = NULL;
                              ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
                              t = not_null(o_5);
                              {
                                a_6 = t;
                                {
                                  t = SSL_explode_term(not_null(a_6));
                                  {
                                    c_6 = t;
                                    s_4 :
                                    if(match_cons(c_6, sym__2))
                                      {
                                        d_6 = ATgetArgument(c_6, 0);
                                        e_6 = ATgetArgument(c_6, 1);
                                        {
                                          if(((s_5 != NULL) && (s_5 != d_6)))
                                            _fail(d_6);
                                          else
                                            s_5 = d_6;
                                          if(((z_5 != NULL) && (z_5 != e_6)))
                                            _fail(e_6);
                                          else
                                            z_5 = e_6;
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
                            t = k_9;
                            {
                              ATerm l_9;
                              l_9 = t;
                              {
                                ATerm f_6 = NULL,h_6 = NULL,j_6 = NULL;
                                ATerm o_9;
                                o_9 = t;
                                {
                                  ATerm g_6 = NULL;
                                  t = not_null(z_5);
                                  {
                                    t = length_0(t);
                                    {
                                      g_6 = t;
                                      if(((f_6 != NULL) && (f_6 != g_6)))
                                        _fail(g_6);
                                      else
                                        f_6 = g_6;
                                    }
                                  }
                                }
                                t = o_9;
                                {
                                  ATerm i_6 = NULL;
                                  t = not_null(t_5);
                                  {
                                    t = length_0(t);
                                    {
                                      i_6 = t;
                                      if(((h_6 != NULL) && (h_6 != i_6)))
                                        _fail(i_6);
                                      else
                                        h_6 = i_6;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_6), not_null(h_6));
                                    {
                                      t = eq_0(t);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_5), not_null(t_5));
                                        {
                                          t = zip_1(t, h_7);
                                          {
                                            j_6 = t;
                                            if(((l_5 != NULL) && (l_5 != j_6)))
                                              _fail(j_6);
                                            else
                                              l_5 = j_6;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              t = l_9;
                              {
                                t = SSL_mkterm(not_null(s_5), not_null(l_5));
                                {
                                  k_6 = t;
                                  t = not_null(k_6);
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
                    LocalPopChoice(h_9);
                  }
                else
                  {
                    t = f_9;
                    {
                      ATerm p_9 = t;
                      int q_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL;
                          t = r_61(t);
                          {
                            m_6 = t;
                            z_4 :
                            if(match_cons(m_6, sym__2))
                              {
                                n_6 = ATgetArgument(m_6, 0);
                                q_6 = ATgetArgument(m_6, 1);
                                a_5 :
                                if(match_cons(n_6, sym_Label_2))
                                  {
                                    o_6 = ATgetArgument(n_6, 0);
                                    p_6 = ATgetArgument(n_6, 1);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_6), not_null(q_6));
                                      t = h_7(t);
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
                          LocalPopChoice(q_9);
                        }
                      else
                        {
                          t = p_9;
                          {
                            ATerm t_9 = t;
                            int u_9 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL;
                                t = r_61(t);
                                {
                                  t_6 = t;
                                  c_5 :
                                  if(match_cons(t_6, sym__2))
                                    {
                                      u_6 = ATgetArgument(t_6, 0);
                                      v_6 = ATgetArgument(t_6, 1);
                                      d_5 :
                                      if(match_cons(v_6, sym_Label_2))
                                        {
                                          w_6 = ATgetArgument(v_6, 0);
                                          x_6 = ATgetArgument(v_6, 1);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(u_6), not_null(x_6));
                                            t = h_7(t);
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
                                LocalPopChoice(u_9);
                              }
                            else
                              {
                                t = t_9;
                                {
                                  ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
                                  a_7 = t;
                                  g_5 :
                                  if(match_cons(a_7, sym__2))
                                    {
                                      b_7 = ATgetArgument(a_7, 0);
                                      c_7 = ATgetArgument(a_7, 1);
                                      {
                                        ATerm w_9 = t;
                                        int x_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = q_61(t);
                                            t = (ATerm) ATmakeAppl(sym_amb_2, (ATerm)ATmakeAppl(sym_amb1_1, not_null(b_7)), (ATerm) ATmakeAppl(sym_amb2_1, not_null(c_7)));
                                            LocalPopChoice(x_9);
                                          }
                                        else
                                          {
                                            t = w_9;
                                            t = (ATerm) ATmakeAppl(sym_amb_2, not_null(b_7), not_null(c_7));
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
  t = h_7(t);
  return(t);
}
ATerm laydiff_1 (ATerm t, ATerm p_61 (ATerm))
{
  t = laydiff_2(t, p_61, _fail);
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
                  if(((ATgetType(j_8) == AT_LIST) && !(ATisEmpty(j_8))))
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
  ATerm z_9 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_10);
    }
  else
    {
      t = z_9;
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
ATerm laydiff_squash_2 (ATerm t, ATerm u_61 (ATerm), ATerm v_61 (ATerm))
{
  ATerm y_12 (ATerm t)
  {
    ATerm n_10 = NULL,p_10 = NULL;
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2(t, LConstoCons_0, LConstoCons_0);
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        {
        }
      }
    {
      ATerm i_10 = t;
      int j_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = eq_0(t);
          {
            t = Fst_0(t);
            {
              ATerm k_10 = t;
              int l_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_10 = t;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = m_10;
                    }
                  t = term_o_10;
                  LocalPopChoice(l_10);
                }
              else
                {
                  t = k_10;
                  {
                  }
                }
            }
          }
          LocalPopChoice(j_10);
        }
      else
        {
          t = i_10;
          {
            ATerm t_10 = t;
            int u_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2(t, is_layout_0, is_layout_0);
                t = term_o_10;
                LocalPopChoice(u_10);
              }
            else
              {
                t = t_10;
                {
                  ATerm y_10 = t;
                  int e_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
                      q_10 = t;
                      y_9 :
                      if(match_cons(q_10, sym__2))
                        {
                          r_10 = ATgetArgument(q_10, 0);
                          s_10 = ATgetArgument(q_10, 1);
                          {
                            ATerm v_10 = NULL,w_10 = NULL,c_11 = NULL;
                            ATerm t_11;
                            t_11 = t;
                            {
                              ATerm x_10 = NULL;
                              ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
                              t = not_null(s_10);
                              {
                                x_10 = t;
                                {
                                  t = SSL_explode_term(not_null(x_10));
                                  {
                                    z_10 = t;
                                    g_9 :
                                    if(match_cons(z_10, sym__2))
                                      {
                                        a_11 = ATgetArgument(z_10, 0);
                                        b_11 = ATgetArgument(z_10, 1);
                                        {
                                          if(((v_10 != NULL) && (v_10 != a_11)))
                                            _fail(a_11);
                                          else
                                            v_10 = a_11;
                                          if(((w_10 != NULL) && (w_10 != b_11)))
                                            _fail(b_11);
                                          else
                                            w_10 = b_11;
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
                              ATerm u_11;
                              u_11 = t;
                              {
                                ATerm d_11 = NULL;
                                ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
                                t = not_null(r_10);
                                {
                                  d_11 = t;
                                  {
                                    t = SSL_explode_term(not_null(d_11));
                                    {
                                      f_11 = t;
                                      j_9 :
                                      if(match_cons(f_11, sym__2))
                                        {
                                          g_11 = ATgetArgument(f_11, 0);
                                          h_11 = ATgetArgument(f_11, 1);
                                          {
                                            if(((v_10 != NULL) && (v_10 != g_11)))
                                              _fail(g_11);
                                            else
                                              v_10 = g_11;
                                            if(((c_11 != NULL) && (c_11 != h_11)))
                                              _fail(h_11);
                                            else
                                              c_11 = h_11;
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
                              t = u_11;
                              {
                                ATerm i_11 = NULL,k_11 = NULL,w_11 = NULL;
                                ATerm v_11;
                                v_11 = t;
                                {
                                  ATerm j_11 = NULL;
                                  t = not_null(c_11);
                                  {
                                    t = length_0(t);
                                    {
                                      j_11 = t;
                                      if(((i_11 != NULL) && (i_11 != j_11)))
                                        _fail(j_11);
                                      else
                                        i_11 = j_11;
                                    }
                                  }
                                }
                                t = v_11;
                                {
                                  ATerm l_11 = NULL;
                                  t = not_null(w_10);
                                  {
                                    t = length_0(t);
                                    {
                                      l_11 = t;
                                      if(((k_11 != NULL) && (k_11 != l_11)))
                                        _fail(l_11);
                                      else
                                        k_11 = l_11;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_11), not_null(k_11));
                                    {
                                      t = eq_0(t);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), not_null(w_10));
                                        {
                                          t = zip_1(t, y_12);
                                          {
                                            ATerm c_12 = NULL;
                                            ATerm y_11 = t;
                                            int b_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), term_i_12);
                                                {
                                                  t = eq_0(t);
                                                  t = Cons_2(t, _id, Nil_0);
                                                }
                                                LocalPopChoice(b_12);
                                              }
                                            else
                                              {
                                                t = y_11;
                                                {
                                                  ATerm b_1 (ATerm t)
                                                  {
                                                    ATerm j_12 = t;
                                                    int p_12 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm m_11 = NULL;
                                                        ATerm c_1 (ATerm t)
                                                        {
                                                          ATerm n_11 = NULL;
                                                          n_11 = t;
                                                          m_9 :
                                                          if(!(match_string(n_11, "..")))
                                                            {
                                                              _fail(t);
                                                            }
                                                          return(t);
                                                        }
                                                        ATerm d_1 (ATerm t)
                                                        {
                                                          ATerm e_1 (ATerm t)
                                                          {
                                                            ATerm o_11 = NULL;
                                                            o_11 = t;
                                                            n_9 :
                                                            if(!(match_string(o_11, "..")))
                                                              {
                                                                _fail(t);
                                                              }
                                                            return(t);
                                                          }
                                                          ATerm f_1 (ATerm t)
                                                          {
                                                            ATerm p_11 = NULL;
                                                            p_11 = t;
                                                            if(((m_11 != NULL) && (m_11 != p_11)))
                                                              _fail(p_11);
                                                            else
                                                              m_11 = p_11;
                                                            return(t);
                                                          }
                                                          t = Cons_2(t, e_1, f_1);
                                                          return(t);
                                                        }
                                                        t = _2(t, c_1, d_1);
                                                        t = (ATerm) ATinsert(CheckATermList(not_null(m_11)), term_o_10);
                                                        LocalPopChoice(p_12);
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
                                                        {
                                                          ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
                                                          ATerm i_13 (ATerm t)
                                                          {
                                                            t = (ATerm) ATinsert(CheckATermList(not_null(s_11)), not_null(r_11));
                                                            return(t);
                                                          }
                                                          q_11 = t;
                                                          r_9 :
                                                          if(match_cons(q_11, sym__2))
                                                            {
                                                              r_11 = ATgetArgument(q_11, 0);
                                                              s_11 = ATgetArgument(q_11, 1);
                                                              s_9 :
                                                              if(((ATgetType(s_11) == AT_LIST) && ATisEmpty(s_11)))
                                                                {
                                                                  {
                                                                    ATerm q_12 = t;
                                                                    int u_12 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = not_null(r_11);
                                                                        t = is_list_0(t);
                                                                        t = not_null(r_11);
                                                                        LocalPopChoice(u_12);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_12;
                                                                        t = i_13(t);
                                                                      }
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  t = i_13(t);
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
                                                  t = foldr_2(t, _id, b_1);
                                                }
                                              }
                                            {
                                              w_11 = t;
                                              {
                                                if(((n_10 != NULL) && (n_10 != w_11)))
                                                  _fail(w_11);
                                                else
                                                  n_10 = w_11;
                                                {
                                                  ATerm v_12 = t;
                                                  int w_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), term_i_12);
                                                      {
                                                        t = eq_0(t);
                                                        {
                                                          t = not_null(n_10);
                                                          {
                                                            ATerm i_1 (ATerm t)
                                                            {
                                                              ATerm x_12 = t;
                                                              int z_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_11 = NULL;
                                                                  ATerm a_13 = t;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = is_list_0(t);
                                                                      PopChoice();
                                                                      _fail(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = a_13;
                                                                    }
                                                                  {
                                                                    x_11 = t;
                                                                    t = (ATerm) ATinsert(ATempty, not_null(x_11));
                                                                  }
                                                                  LocalPopChoice(z_12);
                                                                }
                                                              else
                                                                {
                                                                  t = x_12;
                                                                  {
                                                                  }
                                                                }
                                                              return(t);
                                                            }
                                                            t = Cons_2(t, _id, i_1);
                                                          }
                                                        }
                                                      }
                                                      LocalPopChoice(w_12);
                                                    }
                                                  else
                                                    {
                                                      t = v_12;
                                                      {
                                                        ATerm b_13 = t;
                                                        int c_13 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm j_1 (ATerm t)
                                                            {
                                                              ATerm z_11 = NULL;
                                                              z_11 = t;
                                                              v_9 :
                                                              if(!(match_string(z_11, "..")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            t = Cons_2(t, j_1, Nil_0);
                                                            t = term_o_10;
                                                            LocalPopChoice(c_13);
                                                          }
                                                        else
                                                          {
                                                            t = b_13;
                                                            {
                                                              ATerm a_12 = NULL;
                                                              t = SSL_mkterm(not_null(v_10), not_null(n_10));
                                                              {
                                                                a_12 = t;
                                                                t = not_null(a_12);
                                                              }
                                                            }
                                                          }
                                                      }
                                                    }
                                                  {
                                                    c_12 = t;
                                                    if(((p_10 != NULL) && (p_10 != c_12)))
                                                      _fail(c_12);
                                                    else
                                                      p_10 = c_12;
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
                                t = not_null(p_10);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      LocalPopChoice(e_11);
                    }
                  else
                    {
                      t = y_10;
                      {
                        ATerm d_13 = t;
                        int e_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL;
                            t = v_61(t);
                            {
                              d_12 = t;
                              a_10 :
                              if(match_cons(d_12, sym__2))
                                {
                                  e_12 = ATgetArgument(d_12, 0);
                                  h_12 = ATgetArgument(d_12, 1);
                                  b_10 :
                                  if(match_cons(e_12, sym_Label_2))
                                    {
                                      f_12 = ATgetArgument(e_12, 0);
                                      g_12 = ATgetArgument(e_12, 1);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_12), not_null(h_12));
                                        t = y_12(t);
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
                            LocalPopChoice(e_13);
                          }
                        else
                          {
                            t = d_13;
                            {
                              ATerm f_13 = t;
                              int g_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
                                  t = v_61(t);
                                  {
                                    k_12 = t;
                                    d_10 :
                                    if(match_cons(k_12, sym__2))
                                      {
                                        l_12 = ATgetArgument(k_12, 0);
                                        m_12 = ATgetArgument(k_12, 1);
                                        e_10 :
                                        if(match_cons(m_12, sym_Label_2))
                                          {
                                            n_12 = ATgetArgument(m_12, 0);
                                            o_12 = ATgetArgument(m_12, 1);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(l_12), not_null(o_12));
                                              t = y_12(t);
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
                                  LocalPopChoice(g_13);
                                }
                              else
                                {
                                  t = f_13;
                                  {
                                    ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
                                    r_12 = t;
                                    h_10 :
                                    if(match_cons(r_12, sym__2))
                                      {
                                        s_12 = ATgetArgument(r_12, 0);
                                        t_12 = ATgetArgument(r_12, 1);
                                        {
                                          ATerm h_13 = t;
                                          int j_13 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = u_61(t);
                                              t = (ATerm) ATmakeAppl(sym_amb_2, (ATerm)ATmakeAppl(sym_amb1_1, not_null(s_12)), (ATerm) ATmakeAppl(sym_amb2_1, not_null(t_12)));
                                              LocalPopChoice(j_13);
                                            }
                                          else
                                            {
                                              t = h_13;
                                              t = (ATerm) ATmakeAppl(sym_amb_2, not_null(s_12), not_null(t_12));
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
  t = y_12(t);
  return(t);
}
ATerm laydiff_squash_1 (ATerm t, ATerm t_61 (ATerm))
{
  t = laydiff_squash_2(t, t_61, _fail);
  return(t);
}
ATerm printtopdiff_0 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
  z_13 = t;
  y_13 :
  if(match_cons(z_13, sym__2))
    {
      a_14 = ATgetArgument(z_13, 0);
      b_14 = ATgetArgument(z_13, 1);
      {
        ATerm e_14 = NULL,k_14 = NULL;
        ATerm k_13;
        k_13 = t;
        {
          ATerm f_14 = NULL;
          ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
          t = not_null(b_14);
          {
            f_14 = t;
            {
              t = SSL_explode_term(not_null(f_14));
              {
                h_14 = t;
                u_13 :
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
        t = k_13;
        {
          ATerm l_13;
          l_13 = t;
          {
            ATerm l_14 = NULL;
            ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
            t = not_null(a_14);
            {
              l_14 = t;
              {
                t = SSL_explode_term(not_null(l_14));
                {
                  n_14 = t;
                  x_13 :
                  if(match_cons(n_14, sym__2))
                    {
                      o_14 = ATgetArgument(n_14, 0);
                      p_14 = ATgetArgument(n_14, 1);
                      if(((k_14 != NULL) && (k_14 != o_14)))
                        _fail(o_14);
                      else
                        k_14 = o_14;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              }
            }
          }
          t = l_13;
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_14)), not_null(k_14));
            {
              ATerm k_1 (ATerm t)
              {
                t = term_m_13;
                return(t);
              }
              t = try_echo_1(t, k_1);
              {
                t = term_o_13;
                t = table_put_0(t);
              }
            }
            t = term_x_8;
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
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
  x_14 = t;
  w_14 :
  if(match_cons(x_14, sym__2))
    {
      y_14 = ATgetArgument(x_14, 0);
      z_14 = ATgetArgument(x_14, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_14)), not_null(y_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
  h_15 = t;
  e_15 :
  if(match_cons(h_15, sym__2))
    {
      i_15 = ATgetArgument(h_15, 0);
      l_15 = ATgetArgument(h_15, 1);
      f_15 :
      if(((ATgetType(i_15) == AT_LIST) && !(ATisEmpty(i_15))))
        {
          j_15 = ATgetFirst((ATermList) i_15);
          k_15 = (ATerm) ATgetNext((ATermList) i_15);
          g_15 :
          if(((ATgetType(l_15) == AT_LIST) && !(ATisEmpty(l_15))))
            {
              m_15 = ATgetFirst((ATermList) l_15);
              n_15 = (ATerm) ATgetNext((ATermList) l_15);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(j_15), not_null(m_15)), (ATerm) ATmakeAppl(sym__2, not_null(k_15), not_null(n_15)));
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
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
  x_15 = t;
  u_15 :
  if(match_cons(x_15, sym__2))
    {
      y_15 = ATgetArgument(x_15, 0);
      z_15 = ATgetArgument(x_15, 1);
      v_15 :
      if(((ATgetType(y_15) == AT_LIST) && ATisEmpty(y_15)))
        {
          w_15 :
          if(((ATgetType(z_15) == AT_LIST) && ATisEmpty(z_15)))
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
ATerm genzip_4 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm d_73 (ATerm))
{
  ATerm b_16 (ATerm t)
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_73(t);
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        {
          t = b_73(t);
          {
            t = _2(t, d_73, b_16);
            t = c_73(t);
          }
        }
      }
    return(t);
  }
  t = b_16(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm f_73 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, f_73);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  d_16 :
  if(match_cons(e_16, sym__2))
    {
      f_16 = ATgetArgument(e_16, 0);
      g_16 = ATgetArgument(e_16, 1);
      if(((f_16 != NULL) && (f_16 != g_16)))
        _fail(g_16);
      else
        f_16 = g_16;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm))
{
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_77(t);
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      {
        ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
        n_16 = t;
        m_16 :
        if(((ATgetType(n_16) == AT_LIST) && !(ATisEmpty(n_16))))
          {
            o_16 = ATgetFirst((ATermList) n_16);
            p_16 = (ATerm) ATgetNext((ATermList) n_16);
            {
              ATerm s_16 = NULL,u_16 = NULL;
              ATerm t_13;
              t_13 = t;
              {
                ATerm t_16 = NULL;
                t = not_null(o_16);
                {
                  t = r_77(t);
                  {
                    t_16 = t;
                    if(((s_16 != NULL) && (s_16 != t_16)))
                      _fail(t_16);
                    else
                      s_16 = t_16;
                  }
                }
              }
              t = t_13;
              {
                ATerm v_16 = NULL;
                t = not_null(p_16);
                {
                  t = foldr_3(t, p_77, q_77, r_77);
                  {
                    v_16 = t;
                    if(((u_16 != NULL) && (u_16 != v_16)))
                      _fail(v_16);
                    else
                      u_16 = v_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_16), not_null(u_16));
                  t = q_77(t);
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
  ATerm l_1 (ATerm t)
  {
    t = term_v_13;
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    t = term_e_7;
    return(t);
  }
  t = foldr_3(t, l_1, add_0, m_1);
  return(t);
}
ATerm L_1 (ATerm t, ATerm o_55 (ATerm))
{
  ATerm e_17 = NULL,f_17 = NULL;
  e_17 = t;
  d_17 :
  if(match_cons(e_17, sym_L_1))
    {
      f_17 = ATgetArgument(e_17, 0);
      {
        ATerm i_17 = NULL,k_17 = NULL;
        ATerm j_17 = NULL;
        t = SSLgetAnnotations(not_null(e_17));
        {
          j_17 = t;
          if(((i_17 != NULL) && (i_17 != j_17)))
            _fail(j_17);
          else
            i_17 = j_17;
        }
        {
          t = not_null(f_17);
          {
            ATerm m_17 = NULL;
            t = o_55(t);
            {
              k_17 = t;
              {
                ATerm n_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_1, not_null(k_17)), not_null(i_17));
                {
                  n_17 = t;
                  if(((m_17 != NULL) && (m_17 != n_17)))
                    _fail(n_17);
                  else
                    m_17 = n_17;
                }
                t = not_null(m_17);
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
  ATerm w_17 = NULL;
  w_17 = t;
  v_17 :
  if(match_cons(w_17, sym_UL_0))
    {
      ATerm y_17 = NULL,a_18 = NULL;
      ATerm w_13;
      w_13 = t;
      {
        ATerm z_17 = NULL;
        t = SSLgetAnnotations(not_null(w_17));
        {
          z_17 = t;
          if(((y_17 != NULL) && (y_17 != z_17)))
            _fail(z_17);
          else
            y_17 = z_17;
        }
      }
      t = w_13;
      {
        ATerm b_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_UL_0), not_null(y_17));
        {
          b_18 = t;
          if(((a_18 != NULL) && (a_18 != b_18)))
            _fail(b_18);
          else
            a_18 = b_18;
        }
        t = not_null(a_18);
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
  ATerm j_18 = NULL;
  j_18 = t;
  i_18 :
  if(match_cons(j_18, sym_NL_0))
    {
      ATerm l_18 = NULL,n_18 = NULL;
      ATerm c_14;
      c_14 = t;
      {
        ATerm m_18 = NULL;
        t = SSLgetAnnotations(not_null(j_18));
        {
          m_18 = t;
          if(((l_18 != NULL) && (l_18 != m_18)))
            _fail(m_18);
          else
            l_18 = m_18;
        }
      }
      t = c_14;
      {
        ATerm o_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NL_0), not_null(l_18));
        {
          o_18 = t;
          if(((n_18 != NULL) && (n_18 != o_18)))
            _fail(o_18);
          else
            n_18 = o_18;
        }
        t = not_null(n_18);
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
  ATerm d_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = NL_0(t);
      LocalPopChoice(g_14);
    }
  else
    {
      t = d_14;
      {
        ATerm m_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = UL_0(t);
            LocalPopChoice(q_14);
          }
        else
          {
            t = m_14;
            t = L_1(t, _id);
          }
      }
    }
  return(t);
}
ATerm layeq_2 (ATerm t, ATerm m_61 (ATerm), ATerm n_61 (ATerm))
{
  ATerm j_23 (ATerm t)
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = eq_0(t);
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        {
          ATerm t_14 = t;
          int u_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2(t, is_layout_0, is_layout_0);
              LocalPopChoice(u_14);
            }
          else
            {
              t = t_14;
              {
                ATerm v_14 = t;
                int a_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
                    y_21 = t;
                    m_21 :
                    if(match_cons(y_21, sym__2))
                      {
                        z_21 = ATgetArgument(y_21, 0);
                        a_22 = ATgetArgument(y_21, 1);
                        {
                          ATerm e_22 = NULL,f_22 = NULL,l_22 = NULL;
                          ATerm b_15;
                          b_15 = t;
                          {
                            ATerm g_22 = NULL;
                            ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL;
                            t = not_null(a_22);
                            {
                              g_22 = t;
                              {
                                t = SSL_explode_term(not_null(g_22));
                                {
                                  i_22 = t;
                                  v_18 :
                                  if(match_cons(i_22, sym__2))
                                    {
                                      j_22 = ATgetArgument(i_22, 0);
                                      k_22 = ATgetArgument(i_22, 1);
                                      {
                                        if(((e_22 != NULL) && (e_22 != j_22)))
                                          _fail(j_22);
                                        else
                                          e_22 = j_22;
                                        if(((f_22 != NULL) && (f_22 != k_22)))
                                          _fail(k_22);
                                        else
                                          f_22 = k_22;
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
                          t = b_15;
                          {
                            ATerm c_15;
                            c_15 = t;
                            {
                              ATerm m_22 = NULL;
                              ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
                              t = not_null(z_21);
                              {
                                m_22 = t;
                                {
                                  t = SSL_explode_term(not_null(m_22));
                                  {
                                    o_22 = t;
                                    b_21 :
                                    if(match_cons(o_22, sym__2))
                                      {
                                        p_22 = ATgetArgument(o_22, 0);
                                        q_22 = ATgetArgument(o_22, 1);
                                        {
                                          if(((e_22 != NULL) && (e_22 != p_22)))
                                            _fail(p_22);
                                          else
                                            e_22 = p_22;
                                          if(((l_22 != NULL) && (l_22 != q_22)))
                                            _fail(q_22);
                                          else
                                            l_22 = q_22;
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
                            t = c_15;
                            {
                              ATerm r_22 = NULL,t_22 = NULL;
                              ATerm d_15;
                              d_15 = t;
                              {
                                ATerm s_22 = NULL;
                                t = not_null(l_22);
                                {
                                  t = length_0(t);
                                  {
                                    s_22 = t;
                                    if(((r_22 != NULL) && (r_22 != s_22)))
                                      _fail(s_22);
                                    else
                                      r_22 = s_22;
                                  }
                                }
                              }
                              t = d_15;
                              {
                                ATerm u_22 = NULL;
                                t = not_null(f_22);
                                {
                                  t = length_0(t);
                                  {
                                    u_22 = t;
                                    if(((t_22 != NULL) && (t_22 != u_22)))
                                      _fail(u_22);
                                    else
                                      t_22 = u_22;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_22), not_null(t_22));
                                  {
                                    t = eq_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(l_22), not_null(f_22));
                                      t = zip_1(t, j_23);
                                    }
                                  }
                                }
                              }
                              t = not_null(y_21);
                            }
                          }
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                    LocalPopChoice(a_15);
                  }
                else
                  {
                    t = v_14;
                    {
                      ATerm o_15 = t;
                      int p_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
                          t = n_61(t);
                          {
                            v_22 = t;
                            o_21 :
                            if(match_cons(v_22, sym__2))
                              {
                                w_22 = ATgetArgument(v_22, 0);
                                z_22 = ATgetArgument(v_22, 1);
                                p_21 :
                                if(match_cons(w_22, sym_Label_2))
                                  {
                                    x_22 = ATgetArgument(w_22, 0);
                                    y_22 = ATgetArgument(w_22, 1);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_22), not_null(z_22));
                                      t = j_23(t);
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
                          LocalPopChoice(p_15);
                        }
                      else
                        {
                          t = o_15;
                          {
                            ATerm q_15 = t;
                            int r_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
                                t = n_61(t);
                                {
                                  c_23 = t;
                                  r_21 :
                                  if(match_cons(c_23, sym__2))
                                    {
                                      d_23 = ATgetArgument(c_23, 0);
                                      e_23 = ATgetArgument(c_23, 1);
                                      s_21 :
                                      if(match_cons(e_23, sym_Label_2))
                                        {
                                          f_23 = ATgetArgument(e_23, 0);
                                          g_23 = ATgetArgument(e_23, 1);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(d_23), not_null(g_23));
                                            t = j_23(t);
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
                                LocalPopChoice(r_15);
                              }
                            else
                              {
                                t = q_15;
                                t = m_61(t);
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
  t = j_23(t);
  return(t);
}
ATerm printdiff_0 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  u_23 :
  if(match_cons(v_23, sym__2))
    {
      w_23 = ATgetArgument(v_23, 0);
      x_23 = ATgetArgument(v_23, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_23)), not_null(w_23));
        {
          ATerm n_1 (ATerm t)
          {
            t = term_m_13;
            return(t);
          }
          t = try_echo_1(t, n_1);
          {
            t = term_o_13;
            t = table_put_0(t);
          }
        }
        t = term_x_8;
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
  ATerm d_24 = NULL;
  ATerm f_24 = NULL;
  d_24 = t;
  {
    ATerm s_15;
    s_15 = t;
    {
      ATerm i_24 = NULL;
      t = term_t_15;
      {
        i_24 = t;
        if(((f_24 != NULL) && (f_24 != i_24)))
          _fail(i_24);
        else
          f_24 = i_24;
      }
    }
    t = s_15;
    {
      t = SSL_open_file(not_null(d_24), not_null(f_24));
      t = SSL_close_file(not_null(d_24));
    }
  }
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm k_71 (ATerm))
{
  ATerm m_24 = NULL;
  ATerm o_1 (ATerm t)
  {
    ATerm n_24 = NULL;
    t = k_71(t);
    {
      n_24 = t;
      if(((m_24 != NULL) && (m_24 != n_24)))
        _fail(n_24);
      else
        m_24 = n_24;
    }
    return(t);
  }
  t = fetch_1(t, o_1);
  t = not_null(m_24);
  return(t);
}
ATerm get_options_0 (ATerm t)
{
  t = term_h_16;
  t = table_get_0(t);
  return(t);
}
ATerm option_value_2 (ATerm t, ATerm d_83 (ATerm), ATerm e_83 (ATerm))
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = get_options_0(t);
      t = fetch_elem_1(t, d_83);
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
      t = e_83(t);
    }
  return(t);
}
ATerm ldiff_0 (ATerm t)
{
  ATerm y_24 = NULL;
  ATerm d_25 = NULL;
  y_24 = t;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm a_25 = NULL,b_25 = NULL;
      a_25 = t;
      u_24 :
      if(match_cons(a_25, sym_Input2_1))
        {
          b_25 = ATgetArgument(a_25, 0);
          t = not_null(b_25);
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_value_2(t, p_1, _fail);
    {
      t = file_exists_0(t);
      {
        t = ReadFromFile_0(t);
        {
          d_25 = t;
          {
            ATerm k_16 = t;
            int l_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_1 (ATerm t)
                {
                  t = term_r_7;
                  return(t);
                }
                t = has_option_1(t, q_1);
                {
                  t = term_n_13;
                  {
                    t = table_create_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_24), not_null(d_25));
                      {
                        t = layeq_2(t, printdiff_0, _id);
                        {
                          ATerm q_16 = t;
                          int r_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = term_w_16;
                              {
                                ATerm x_16 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = table_get_0(t);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  {
                                    t = x_16;
                                  }
                              }
                              LocalPopChoice(r_16);
                            }
                          else
                            {
                              t = q_16;
                              {
                                t = term_e_7;
                                t = exit_0(t);
                              }
                            }
                        }
                      }
                    }
                  }
                }
                LocalPopChoice(l_16);
              }
            else
              {
                t = k_16;
                {
                  ATerm y_16 = t;
                  int z_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_1 (ATerm t)
                      {
                        t = term_u_7;
                        return(t);
                      }
                      t = has_option_1(t, r_1);
                      {
                        t = term_n_13;
                        {
                          t = table_create_0(t);
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(y_24), not_null(d_25));
                            {
                              t = layeq_2(t, printtopdiff_0, _id);
                              {
                                ATerm a_17 = t;
                                int b_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_w_16;
                                    {
                                      ATerm c_17 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = table_get_0(t);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = c_17;
                                        }
                                    }
                                    LocalPopChoice(b_17);
                                  }
                                else
                                  {
                                    t = a_17;
                                    {
                                      t = term_e_7;
                                      t = exit_0(t);
                                    }
                                  }
                              }
                            }
                          }
                        }
                      }
                      LocalPopChoice(z_16);
                    }
                  else
                    {
                      t = y_16;
                      {
                        ATerm g_17 = t;
                        int h_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_1 (ATerm t)
                            {
                              t = term_o_7;
                              return(t);
                            }
                            t = has_option_1(t, s_1);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(y_24), not_null(d_25));
                              {
                                ATerm t_1 (ATerm t)
                                {
                                  ATerm u_1 (ATerm t)
                                  {
                                    t = term_v_7;
                                    return(t);
                                  }
                                  t = has_option_1(t, u_1);
                                  return(t);
                                }
                                t = laydiff_squash_2(t, t_1, _fail);
                                {
                                  ATerm l_17 = t;
                                  int o_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm p_17 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm f_25 = NULL;
                                          f_25 = t;
                                          w_24 :
                                          if(!(match_string(f_25, "..")))
                                            {
                                              _fail(t);
                                            }
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = p_17;
                                        }
                                      {
                                        ATerm v_1 (ATerm t)
                                        {
                                          t = term_m_13;
                                          return(t);
                                        }
                                        t = try_echo_1(t, v_1);
                                        {
                                          t = term_e_7;
                                          t = exit_0(t);
                                        }
                                      }
                                      LocalPopChoice(o_17);
                                    }
                                  else
                                    {
                                      t = l_17;
                                      {
                                      }
                                    }
                                }
                              }
                            }
                            LocalPopChoice(h_17);
                          }
                        else
                          {
                            t = g_17;
                            {
                              ATerm z_1 (ATerm t)
                              {
                                t = term_l_7;
                                return(t);
                              }
                              t = has_option_1(t, z_1);
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_24), not_null(d_25));
                                {
                                  ATerm a_2 (ATerm t)
                                  {
                                    ATerm b_2 (ATerm t)
                                    {
                                      t = term_v_7;
                                      return(t);
                                    }
                                    t = has_option_1(t, b_2);
                                    return(t);
                                  }
                                  t = laydiff_2(t, a_2, _fail);
                                  {
                                    ATerm q_17 = t;
                                    int r_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm s_17 = t;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm g_25 = NULL;
                                            g_25 = t;
                                            x_24 :
                                            if(!(match_string(g_25, "..")))
                                              {
                                                _fail(t);
                                              }
                                            PopChoice();
                                            _fail(t);
                                          }
                                        else
                                          {
                                            t = s_17;
                                          }
                                        {
                                          ATerm c_2 (ATerm t)
                                          {
                                            t = term_m_13;
                                            return(t);
                                          }
                                          t = try_echo_1(t, c_2);
                                          {
                                            t = term_e_7;
                                            t = exit_0(t);
                                          }
                                        }
                                        LocalPopChoice(r_17);
                                      }
                                    else
                                      {
                                        t = q_17;
                                        {
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
ATerm _2 (ATerm t, ATerm c_54 (ATerm), ATerm d_54 (ATerm))
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  q_25 = t;
  p_25 :
  if(match_cons(q_25, sym__2))
    {
      r_25 = ATgetArgument(q_25, 0);
      s_25 = ATgetArgument(q_25, 1);
      {
        ATerm b_26 = NULL,d_26 = NULL;
        ATerm c_26 = NULL;
        t = SSLgetAnnotations(not_null(q_25));
        {
          c_26 = t;
          if(((b_26 != NULL) && (b_26 != c_26)))
            _fail(c_26);
          else
            b_26 = c_26;
        }
        {
          t = not_null(r_25);
          {
            ATerm f_26 = NULL;
            t = c_54(t);
            {
              d_26 = t;
              {
                t = not_null(s_25);
                {
                  ATerm i_26 = NULL;
                  t = d_54(t);
                  {
                    f_26 = t;
                    {
                      ATerm j_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_26), not_null(f_26)), not_null(b_26));
                      {
                        j_26 = t;
                        if(((i_26 != NULL) && (i_26 != j_26)))
                          _fail(j_26);
                        else
                          i_26 = j_26;
                      }
                      t = not_null(i_26);
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
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm b_83 (ATerm))
{
  ATerm v_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL;
  ATerm t_17;
  t_17 = t;
  t = dtime_0(t);
  t = t_17;
  {
    t = b_83(t);
    {
      ATerm u_17;
      u_17 = t;
      {
        ATerm w_26 = NULL;
        t = dtime_0(t);
        {
          w_26 = t;
          if(((v_26 != NULL) && (v_26 != w_26)))
            _fail(w_26);
          else
            v_26 = w_26;
        }
      }
      t = u_17;
      {
        x_26 = t;
        u_26 :
        if(match_cons(x_26, sym__2))
          {
            y_26 = ATgetArgument(x_26, 0);
            z_26 = ATgetArgument(x_26, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_26)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(v_26))), not_null(z_26));
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
  ATerm f_27 = NULL;
  f_27 = t;
  t = SSL_ReadFromFile(not_null(f_27));
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_79 (ATerm), ATerm d_79 (ATerm))
{
  ATerm k_27 = NULL,m_27 = NULL;
  ATerm x_17;
  x_17 = t;
  {
    ATerm l_27 = NULL;
    t = c_79(t);
    {
      l_27 = t;
      if(((k_27 != NULL) && (k_27 != l_27)))
        _fail(l_27);
      else
        k_27 = l_27;
    }
  }
  t = x_17;
  {
    ATerm n_27 = NULL;
    t = d_79(t);
    {
      n_27 = t;
      if(((m_27 != NULL) && (m_27 != n_27)))
        _fail(n_27);
      else
        m_27 = n_27;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_27), not_null(m_27));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_27 = NULL;
  ATerm c_18;
  c_18 = t;
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 (ATerm t)
        {
          ATerm u_27 = NULL,v_27 = NULL;
          u_27 = t;
          r_27 :
          if(match_cons(u_27, sym_Input_1))
            {
              v_27 = ATgetArgument(u_27, 0);
              if(((t_27 != NULL) && (t_27 != v_27)))
                _fail(v_27);
              else
                t_27 = v_27;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, d_2);
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        {
          ATerm w_27 = NULL;
          t = term_f_18;
          {
            w_27 = t;
            if(((t_27 != NULL) && (t_27 != w_27)))
              _fail(w_27);
            else
              t_27 = w_27;
          }
        }
      }
  }
  t = c_18;
  {
    ATerm e_2 (ATerm t)
    {
      t = not_null(t_27);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, e_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm a_28 = NULL;
    a_28 = t;
    z_27 :
    if(!(match_string(a_28, "-v")))
      {
        if(!(match_string(a_28, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = term_h_18;
    t = set_config_0(t);
    t = term_k_18;
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_p_18;
    return(t);
  }
  t = Option_3(t, f_2, g_2, h_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm d_28 = NULL;
    d_28 = t;
    b_28 :
    if(!(match_string(d_28, "-k")))
      {
        if(!(match_string(d_28, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    ATerm q_18;
    q_18 = t;
    {
      ATerm e_28 = NULL;
      ATerm f_28 = NULL;
      t = string_to_int_0(t);
      {
        f_28 = t;
        if(((e_28 != NULL) && (e_28 != f_28)))
          _fail(f_28);
        else
          e_28 = f_28;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_18, not_null(e_28));
        t = set_config_0(t);
      }
    }
    t = q_18;
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_s_18;
    return(t);
  }
  t = ArgOption_3(t, i_2, j_2, k_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  t = SSL_string_to_int(not_null(i_28));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 (ATerm t)
      {
        ATerm q_28 = NULL;
        q_28 = t;
        l_28 :
        if(!(match_string(q_28, "-S")))
          {
            if(!(match_string(q_28, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = term_x_18;
        t = set_config_0(t);
        t = term_y_18;
        return(t);
      }
      ATerm n_2 (ATerm t)
      {
        t = term_z_18;
        return(t);
      }
      t = Option_3(t, l_2, m_2, n_2);
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      {
        ATerm a_19 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              ATerm r_28 = NULL;
              r_28 = t;
              m_28 :
              if(!(match_string(r_28, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm p_2 (ATerm t)
            {
              ATerm y_28 = NULL;
              ATerm c_19;
              c_19 = t;
              {
                ATerm w_28 = NULL;
                ATerm x_28 = NULL;
                t = string_to_int_0(t);
                {
                  x_28 = t;
                  if(((w_28 != NULL) && (w_28 != x_28)))
                    _fail(x_28);
                  else
                    w_28 = x_28;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_18, not_null(w_28));
                  t = set_config_0(t);
                }
              }
              t = c_19;
              {
                ATerm z_28 = NULL;
                z_28 = t;
                if(((y_28 != NULL) && (y_28 != z_28)))
                  _fail(z_28);
                else
                  y_28 = z_28;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_28));
              }
              return(t);
            }
            ATerm r_2 (ATerm t)
            {
              t = term_d_19;
              return(t);
            }
            t = ArgOption_3(t, o_2, p_2, r_2);
            LocalPopChoice(b_19);
          }
        else
          {
            t = a_19;
            {
              ATerm s_2 (ATerm t)
              {
                ATerm a_29 = NULL;
                a_29 = t;
                p_28 :
                if(!(match_string(a_29, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm w_2 (ATerm t)
              {
                t = term_f_19;
                t = set_config_0(t);
                t = term_g_19;
                return(t);
              }
              ATerm b_3 (ATerm t)
              {
                t = term_h_19;
                return(t);
              }
              t = Option_3(t, s_2, w_2, b_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm i_29 = NULL;
    i_29 = t;
    f_29 :
    if(!(match_string(i_29, "-o")))
      {
        if(!(match_string(i_29, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm l_29 = NULL;
    ATerm m_19;
    m_19 = t;
    {
      ATerm j_29 = NULL;
      ATerm k_29 = NULL;
      k_29 = t;
      if(((j_29 != NULL) && (j_29 != k_29)))
        _fail(k_29);
      else
        j_29 = k_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_19, not_null(j_29));
        t = set_config_0(t);
      }
    }
    t = m_19;
    {
      ATerm m_29 = NULL;
      m_29 = t;
      if(((l_29 != NULL) && (l_29 != m_29)))
        _fail(m_29);
      else
        l_29 = m_29;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_29));
    }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_o_19;
    return(t);
  }
  t = ArgOption_3(t, h_3, i_3, j_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      {
        ATerm o_3 (ATerm t)
        {
          ATerm q_29 = NULL;
          q_29 = t;
          p_29 :
          if(!(match_string(q_29, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm p_3 (ATerm t)
        {
          t = term_s_19;
          t = set_config_0(t);
          t = term_t_19;
          return(t);
        }
        ATerm t_3 (ATerm t)
        {
          t = term_u_19;
          return(t);
        }
        t = Option_3(t, o_3, p_3, t_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL;
  w_29 = t;
  u_29 :
  if(match_string(w_29, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(w_29) == AT_LIST) && !(ATisEmpty(w_29))))
        {
          x_29 = ATgetFirst((ATermList) w_29);
          y_29 = (ATerm) ATgetNext((ATermList) w_29);
          v_29 :
          if(((ATgetType(y_29) == AT_LIST) && !(ATisEmpty(y_29))))
            {
              z_29 = ATgetFirst((ATermList) y_29);
              a_30 = (ATerm) ATgetNext((ATermList) y_29);
              {
                ATerm e_30 = NULL;
                ATerm v_19;
                v_19 = t;
                {
                  t = not_null(x_29);
                  t = j_0(t);
                }
                t = v_19;
                {
                  ATerm f_30 = NULL;
                  t = not_null(z_29);
                  {
                    t = k_0(t);
                    {
                      f_30 = t;
                      if(((e_30 != NULL) && (e_30 != f_30)))
                        _fail(f_30);
                      else
                        e_30 = f_30;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_30)), not_null(e_30));
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
ATerm input_option_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm m_30 = NULL;
    m_30 = t;
    j_30 :
    if(!(match_string(m_30, "-i")))
      {
        if(!(match_string(m_30, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    ATerm p_30 = NULL;
    ATerm w_19;
    w_19 = t;
    {
      ATerm n_30 = NULL;
      ATerm o_30 = NULL;
      o_30 = t;
      if(((n_30 != NULL) && (n_30 != o_30)))
        _fail(o_30);
      else
        n_30 = o_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_19, not_null(n_30));
        t = set_config_0(t);
      }
    }
    t = w_19;
    {
      ATerm q_30 = NULL;
      q_30 = t;
      if(((p_30 != NULL) && (p_30 != q_30)))
        _fail(q_30);
      else
        p_30 = q_30;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_30));
    }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_y_19;
    return(t);
  }
  t = ArgOption_3(t, u_3, z_3, a_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATempty, term_d_20));
  {
    t = printnl_0(t);
    {
      t = term_e_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_30 = NULL;
  u_30 = t;
  t = SSL_TicksToSeconds(not_null(u_30));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  z_30 = t;
  y_30 :
  if(match_cons(z_30, sym__2))
    {
      a_31 = ATgetArgument(z_30, 0);
      b_31 = ATgetArgument(z_30, 1);
      {
        ATerm e_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_31), not_null(b_31));
            LocalPopChoice(f_20);
          }
        else
          {
            t = e_20;
            t = SSL_addr(not_null(a_31), not_null(b_31));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_77 (ATerm), ATerm o_77 (ATerm))
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_77(t);
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      {
        ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
        j_31 = t;
        i_31 :
        if(((ATgetType(j_31) == AT_LIST) && !(ATisEmpty(j_31))))
          {
            k_31 = ATgetFirst((ATermList) j_31);
            l_31 = (ATerm) ATgetNext((ATermList) j_31);
            {
              ATerm o_31 = NULL;
              ATerm p_31 = NULL;
              t = not_null(l_31);
              {
                t = foldr_2(t, n_77, o_77);
                {
                  p_31 = t;
                  if(((o_31 != NULL) && (o_31 != p_31)))
                    _fail(p_31);
                  else
                    o_31 = p_31;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_31), not_null(o_31));
                t = o_77(t);
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
ATerm crush_2 (ATerm t, ATerm l_76 (ATerm), ATerm m_76 (ATerm))
{
  ATerm w_31 = NULL;
  ATerm y_31 = NULL;
  w_31 = t;
  {
    ATerm z_31 = NULL;
    ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
    t = not_null(w_31);
    {
      z_31 = t;
      {
        t = SSL_explode_term(not_null(z_31));
        {
          f_32 = t;
          v_31 :
          if(match_cons(f_32, sym__2))
            {
              g_32 = ATgetArgument(f_32, 0);
              h_32 = ATgetArgument(f_32, 1);
              if(((y_31 != NULL) && (y_31 != h_32)))
                _fail(h_32);
              else
                y_31 = h_32;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_31);
      t = foldr_2(t, l_76, m_76);
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
    ATerm c_4 (ATerm t)
    {
      t = term_v_13;
      return(t);
    }
    t = crush_2(t, c_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  m_32 :
  if(match_cons(n_32, sym__2))
    {
      o_32 = ATgetArgument(n_32, 0);
      p_32 = ATgetArgument(n_32, 1);
      {
        ATerm i_20;
        i_20 = t;
        {
          ATerm j_20 = t;
          int k_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_32), not_null(p_32));
              LocalPopChoice(k_20);
            }
          else
            {
              t = j_20;
              t = SSL_gtr(not_null(o_32), not_null(p_32));
            }
        }
        t = i_20;
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
  ATerm v_32 = NULL;
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
      w_32 = t;
      u_32 :
      if(match_cons(w_32, sym__2))
        {
          x_32 = ATgetArgument(w_32, 0);
          y_32 = ATgetArgument(w_32, 1);
          {
            if(((v_32 != NULL) && (v_32 != x_32)))
              _fail(x_32);
            else
              v_32 = x_32;
            if(((v_32 != NULL) && (v_32 != y_32)))
              _fail(y_32);
            else
              v_32 = y_32;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm t_84 (ATerm))
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_20;
      p_20 = t;
      {
        ATerm b_33 = NULL;
        ATerm c_33 = NULL;
        t = term_w_18;
        {
          t = get_config_0(t);
          {
            c_33 = t;
            if(((b_33 != NULL) && (b_33 != c_33)))
              _fail(c_33);
            else
              b_33 = c_33;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_33), term_e_7);
          t = geq_0(t);
        }
      }
      t = p_20;
      t = t_84(t);
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm g_33 = NULL,i_33 = NULL;
    ATerm q_20;
    q_20 = t;
    {
      ATerm h_33 = NULL;
      t = run_time_0(t);
      {
        h_33 = t;
        if(((g_33 != NULL) && (g_33 != h_33)))
          _fail(h_33);
        else
          g_33 = h_33;
      }
    }
    t = q_20;
    {
      ATerm j_33 = NULL;
      t = term_r_20;
      {
        t = get_config_0(t);
        {
          j_33 = t;
          if(((i_33 != NULL) && (i_33 != j_33)))
            _fail(j_33);
          else
            i_33 = j_33;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_20), not_null(g_33)), term_s_20), not_null(i_33)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, d_4);
  {
    t = term_v_13;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_33 = NULL;
  s_33 = t;
  p_33 :
  if(match_cons(s_33, sym_Version_0))
    {
      ATerm u_33 = NULL,w_33 = NULL;
      ATerm u_20;
      u_20 = t;
      {
        ATerm v_33 = NULL;
        t = SSLgetAnnotations(not_null(s_33));
        {
          v_33 = t;
          if(((u_33 != NULL) && (u_33 != v_33)))
            _fail(v_33);
          else
            u_33 = v_33;
        }
      }
      t = u_20;
      {
        ATerm x_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(u_33));
        {
          x_33 = t;
          if(((w_33 != NULL) && (w_33 != x_33)))
            _fail(x_33);
          else
            w_33 = x_33;
        }
        t = not_null(w_33);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_82 (ATerm))
{
  ATerm e_4 (ATerm t)
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        {
          ATerm x_20 = t;
          int y_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(y_20);
            }
          else
            {
              t = x_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, e_4);
  t = z_82(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_34 = NULL;
  c_34 = t;
  t = SSL_table_create(not_null(c_34));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_34 = NULL;
  g_34 = t;
  {
    ATerm z_20;
    z_20 = t;
    {
      t = term_a_16;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_16, term_c_16, not_null(g_34));
          t = table_put_0(t);
        }
      }
    }
    t = z_20;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm k_34 = NULL;
  k_34 = t;
  t = SSL_table_destroy(not_null(k_34));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm o_34 = NULL;
  o_34 = t;
  t = SSL_exit(not_null(o_34));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
  s_34 = t;
  r_34 :
  if(((ATgetType(s_34) == AT_LIST) && ATisEmpty(s_34)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(s_34) == AT_LIST) && !(ATisEmpty(s_34))))
        {
          t_34 = ATgetFirst((ATermList) s_34);
          u_34 = (ATerm) ATgetNext((ATermList) s_34);
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
ATerm echo_0 (ATerm t)
{
  ATerm a_21;
  a_21 = t;
  {
    ATerm x_34 = NULL;
    ATerm a_35 = NULL;
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        {
          ATerm y_34 = NULL;
          ATerm z_34 = NULL;
          z_34 = t;
          if(((y_34 != NULL) && (y_34 != z_34)))
            _fail(z_34);
          else
            y_34 = z_34;
          t = (ATerm) ATinsert(ATempty, not_null(y_34));
        }
      }
    {
      a_35 = t;
      if(((x_34 != NULL) && (x_34 != a_35)))
        _fail(a_35);
      else
        x_34 = a_35;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_8, not_null(x_34));
      t = printnl_0(t);
    }
  }
  t = a_21;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm x_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
  l_35 = t;
  i_35 :
  if(((ATgetType(l_35) == AT_LIST) && !(ATisEmpty(l_35))))
    {
      j_35 = ATgetFirst((ATermList) l_35);
      k_35 = (ATerm) ATgetNext((ATermList) l_35);
      {
        ATerm o_35 = NULL;
        t = not_null(k_35);
        {
          ATerm e_21;
          e_21 = t;
          {
            ATerm p_35 = NULL,r_35 = NULL,t_35 = NULL;
            ATerm f_21;
            f_21 = t;
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
            t = f_21;
            {
              ATerm s_35 = NULL;
              t = not_null(j_35);
              {
                t = h_0(t);
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
          t = e_21;
          {
            ATerm f_4 (ATerm t)
            {
              t = not_null(o_35);
              return(t);
            }
            t = reverse_acc_2(t, h_0, f_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(l_35) == AT_LIST) && ATisEmpty(l_35)))
        {
          {
            t = term_x_8;
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
  ATerm h_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, h_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm v_60 (ATerm))
{
  ATerm e_36 = NULL,f_36 = NULL;
  e_36 = t;
  d_36 :
  if(match_cons(e_36, sym_Program_1))
    {
      f_36 = ATgetArgument(e_36, 0);
      {
        ATerm i_36 = NULL,k_36 = NULL;
        ATerm j_36 = NULL;
        t = SSLgetAnnotations(not_null(e_36));
        {
          j_36 = t;
          if(((i_36 != NULL) && (i_36 != j_36)))
            _fail(j_36);
          else
            i_36 = j_36;
        }
        {
          t = not_null(f_36);
          {
            ATerm m_36 = NULL;
            t = v_60(t);
            {
              k_36 = t;
              {
                ATerm n_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_36)), not_null(i_36));
                {
                  n_36 = t;
                  if(((m_36 != NULL) && (m_36 != n_36)))
                    _fail(n_36);
                  else
                    m_36 = n_36;
                }
                t = not_null(m_36);
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
  ATerm v_36 = NULL;
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_36 = NULL;
      t = term_r_20;
      {
        t = get_config_0(t);
        {
          w_36 = t;
          if(((v_36 != NULL) && (v_36 != w_36)))
            _fail(w_36);
          else
            v_36 = w_36;
        }
      }
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      {
        ATerm k_4 (ATerm t)
        {
          ATerm l_4 (ATerm t)
          {
            ATerm x_36 = NULL;
            x_36 = t;
            if(((v_36 != NULL) && (v_36 != x_36)))
              _fail(x_36);
            else
              v_36 = x_36;
            return(t);
          }
          t = Program_1(t, l_4);
          return(t);
        }
        t = fetch_1(t, k_4);
      }
    }
  {
    t = term_i_21;
    {
      t = echo_0(t);
      {
        t = term_l_21;
        {
          t = table_get_0(t);
          {
            ATerm m_4 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, m_4);
            {
              ATerm n_4 (ATerm t)
              {
                ATerm y_36 = NULL;
                ATerm z_36 = NULL;
                z_36 = t;
                if(((y_36 != NULL) && (y_36 != z_36)))
                  _fail(z_36);
                else
                  y_36 = z_36;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_36)), term_n_21);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, n_4);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm q_21;
  q_21 = t;
  {
    ATerm e_37 = NULL;
    ATerm f_37 = NULL;
    f_37 = t;
    if(((e_37 != NULL) && (e_37 != f_37)))
      _fail(f_37);
    else
      e_37 = f_37;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATempty, not_null(e_37)));
      t = printnl_0(t);
    }
  }
  t = q_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm y_81 (ATerm))
{
  ATerm t_21;
  t_21 = t;
  {
    t = y_81(t);
    t = debug_0(t);
  }
  t = t_21;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm w_60 (ATerm))
{
  ATerm m_37 = NULL,n_37 = NULL;
  m_37 = t;
  l_37 :
  if(match_cons(m_37, sym_Undefined_1))
    {
      n_37 = ATgetArgument(m_37, 0);
      {
        ATerm q_37 = NULL,s_37 = NULL;
        ATerm r_37 = NULL;
        t = SSLgetAnnotations(not_null(m_37));
        {
          r_37 = t;
          if(((q_37 != NULL) && (q_37 != r_37)))
            _fail(r_37);
          else
            q_37 = r_37;
        }
        {
          t = not_null(n_37);
          {
            ATerm u_37 = NULL;
            t = w_60(t);
            {
              s_37 = t;
              {
                ATerm v_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_37)), not_null(q_37));
                {
                  v_37 = t;
                  if(((u_37 != NULL) && (u_37 != v_37)))
                    _fail(v_37);
                  else
                    u_37 = v_37;
                }
                t = not_null(u_37);
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
ATerm fetch_1 (ATerm t, ATerm i_71 (ATerm))
{
  ATerm a_38 (ATerm t)
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_71, _id);
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = Cons_2(t, _id, a_38);
      }
    return(t);
  }
  t = a_38(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_85 (ATerm))
{
  t = fetch_1(t, w_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_38 = NULL;
  f_38 = t;
  e_38 :
  if(match_cons(f_38, sym_Help_0))
    {
      ATerm h_38 = NULL,j_38 = NULL;
      ATerm w_21;
      w_21 = t;
      {
        ATerm i_38 = NULL;
        t = SSLgetAnnotations(not_null(f_38));
        {
          i_38 = t;
          if(((h_38 != NULL) && (h_38 != i_38)))
            _fail(i_38);
          else
            h_38 = i_38;
        }
      }
      t = w_21;
      {
        ATerm k_38 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(h_38));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm p_38 = NULL;
  p_38 = t;
  t = SSL_implode_string(not_null(p_38));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm x_21 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_22);
    }
  else
    {
      t = x_21;
      {
        ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
        x_38 = t;
        w_38 :
        if(((ATgetType(x_38) == AT_LIST) && !(ATisEmpty(x_38))))
          {
            y_38 = ATgetFirst((ATermList) x_38);
            z_38 = (ATerm) ATgetNext((ATermList) x_38);
            {
              t = not_null(y_38);
              {
                ATerm o_4 (ATerm t)
                {
                  t = not_null(z_38);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, o_4);
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
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm j_39 = NULL;
  ATerm l_39 = NULL;
  j_39 = t;
  {
    ATerm m_39 = NULL;
    ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
    t = not_null(j_39);
    {
      m_39 = t;
      {
        t = SSL_explode_term(not_null(m_39));
        {
          o_39 = t;
          h_39 :
          if(match_cons(o_39, sym__2))
            {
              p_39 = ATgetArgument(o_39, 0);
              q_39 = ATgetArgument(o_39, 1);
              i_39 :
              if(match_string(p_39, ""))
                {
                  if(((l_39 != NULL) && (l_39 != q_39)))
                    _fail(q_39);
                  else
                    l_39 = q_39;
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
    {
      t = not_null(l_39);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_71 (ATerm))
{
  ATerm u_39 (ATerm t)
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_39);
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        {
          t = Nil_0(t);
          t = o_71(t);
        }
      }
    return(t);
  }
  t = u_39(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
  x_39 = t;
  w_39 :
  if(match_cons(x_39, sym__2))
    {
      y_39 = ATgetArgument(x_39, 0);
      z_39 = ATgetArgument(x_39, 1);
      {
        t = not_null(y_39);
        {
          ATerm q_4 (ATerm t)
          {
            t = not_null(z_39);
            return(t);
          }
          t = at_end_1(t, q_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm h_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(n_22);
    }
  else
    {
      t = h_22;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm e_40 = NULL;
  e_40 = t;
  t = SSL_explode_string(not_null(e_40));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
  k_40 = t;
  i_40 :
  if(match_cons(k_40, sym__2))
    {
      l_40 = ATgetArgument(k_40, 0);
      m_40 = ATgetArgument(k_40, 1);
      {
        ATerm h_23;
        h_23 = t;
        t = SSL_printnl(not_null(l_40), not_null(m_40));
        t = h_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm x_81 (ATerm))
{
  ATerm i_23;
  i_23 = t;
  {
    ATerm u_40 = NULL,w_40 = NULL;
    ATerm k_23;
    k_23 = t;
    {
      ATerm v_40 = NULL;
      t = x_81(t);
      {
        v_40 = t;
        if(((u_40 != NULL) && (u_40 != v_40)))
          _fail(v_40);
        else
          u_40 = v_40;
      }
    }
    t = k_23;
    {
      ATerm x_40 = NULL;
      x_40 = t;
      if(((w_40 != NULL) && (w_40 != x_40)))
        _fail(x_40);
      else
        w_40 = x_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_40)), not_null(u_40)));
        t = printnl_0(t);
      }
    }
  }
  t = i_23;
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_70 (ATerm))
{
  ATerm a_41 (ATerm t)
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = Cons_2(t, z_70, a_41);
      }
    return(t);
  }
  t = a_41(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm c_41 = NULL;
  c_41 = t;
  t = SSL_is_string(not_null(c_41));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      {
        ATerm p_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_4 (ATerm t)
            {
              ATerm r_23 = t;
              int s_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(s_23);
                }
              else
                {
                  t = r_23;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, r_4);
            LocalPopChoice(q_23);
          }
        else
          {
            t = p_23;
            {
              ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
              l_41 = t;
              k_41 :
              if(match_cons(l_41, sym_Path_1))
                {
                  m_41 = ATgetArgument(l_41, 0);
                  t = not_null(m_41);
                }
              else
                {
                  if(match_cons(l_41, sym_Var_1))
                    {
                      m_41 = ATgetArgument(l_41, 0);
                      {
                        t = not_null(m_41);
                        {
                          ATerm t_23 = t;
                          int y_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(y_23);
                            }
                          else
                            {
                              t = t_23;
                              {
                                ATerm t_4 (ATerm t)
                                {
                                  t = term_z_23;
                                  return(t);
                                }
                                t = debug_1(t, t_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(l_41, sym_Prefix_2))
                        {
                          m_41 = ATgetArgument(l_41, 0);
                          n_41 = ATgetArgument(l_41, 1);
                          {
                            ATerm v_41 = NULL,x_41 = NULL;
                            ATerm a_24;
                            a_24 = t;
                            {
                              ATerm w_41 = NULL;
                              t = not_null(m_41);
                              {
                                t = eval_config_0(t);
                                {
                                  w_41 = t;
                                  if(((v_41 != NULL) && (v_41 != w_41)))
                                    _fail(w_41);
                                  else
                                    v_41 = w_41;
                                }
                              }
                            }
                            t = a_24;
                            {
                              ATerm y_41 = NULL;
                              t = not_null(n_41);
                              {
                                t = eval_config_0(t);
                                {
                                  y_41 = t;
                                  if(((x_41 != NULL) && (x_41 != y_41)))
                                    _fail(y_41);
                                  else
                                    x_41 = y_41;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_41), not_null(x_41));
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
  ATerm g_42 = NULL;
  g_42 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_24, not_null(g_42));
    {
      t = table_get_0(t);
      {
        ATerm c_24 = t;
        int e_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm g_24;
              g_24 = t;
              {
                ATerm i_42 = NULL;
                ATerm j_42 = NULL;
                j_42 = t;
                if(((i_42 != NULL) && (i_42 != j_42)))
                  _fail(j_42);
                else
                  i_42 = j_42;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_b_24, not_null(g_42), not_null(i_42));
                  t = table_put_0(t);
                }
              }
              t = g_24;
            }
            LocalPopChoice(e_24);
          }
        else
          {
            t = c_24;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_63 (ATerm))
{
  ATerm h_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_63(t);
      LocalPopChoice(j_24);
    }
  else
    {
      t = h_24;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
  o_42 = t;
  n_42 :
  if(match_cons(o_42, sym__2))
    {
      p_42 = ATgetArgument(o_42, 0);
      q_42 = ATgetArgument(o_42, 1);
      t = SSL_table_get(not_null(p_42), not_null(q_42));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,c_43 = NULL,d_43 = NULL;
  y_42 = t;
  x_42 :
  if(match_cons(y_42, sym__3))
    {
      z_42 = ATgetArgument(y_42, 0);
      c_43 = ATgetArgument(y_42, 1);
      d_43 = ATgetArgument(y_42, 2);
      {
        ATerm k_24;
        k_24 = t;
        {
          ATerm i_43 = NULL;
          ATerm j_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_42), not_null(c_43));
          {
            ATerm l_24 = t;
            int o_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_24);
              }
            else
              {
                t = l_24;
                t = (ATerm) ATempty;
              }
            {
              j_43 = t;
              if(((i_43 != NULL) && (i_43 != j_43)))
                _fail(j_43);
              else
                i_43 = j_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_42), not_null(c_43), (ATerm) ATinsert(CheckATermList(not_null(i_43)), not_null(d_43)));
            t = table_put_0(t);
          }
        }
        t = k_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_87 (ATerm))
{
  ATerm o_43 = NULL;
  ATerm p_43 = NULL;
  t = term_x_8;
  {
    t = b_87(t);
    {
      p_43 = t;
      if(((o_43 != NULL) && (o_43 != p_43)))
        _fail(p_43);
      else
        o_43 = p_43;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_21, term_k_21, not_null(o_43));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  u_43 :
  if(match_string(v_43, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(v_43) == AT_LIST) && !(ATisEmpty(v_43))))
        {
          w_43 = ATgetFirst((ATermList) v_43);
          x_43 = (ATerm) ATgetNext((ATermList) v_43);
          {
            ATerm a_44 = NULL;
            ATerm p_24;
            p_24 = t;
            {
              t = not_null(w_43);
              t = a_0(t);
            }
            t = p_24;
            {
              ATerm b_44 = NULL;
              t = term_x_8;
              {
                t = d_0(t);
                {
                  b_44 = t;
                  if(((a_44 != NULL) && (a_44 != b_44)))
                    _fail(b_44);
                  else
                    a_44 = b_44;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_43)), not_null(a_44));
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
  ATerm u_4 (ATerm t)
  {
    ATerm g_44 = NULL;
    g_44 = t;
    f_44 :
    if(!(match_string(g_44, "--help")))
      {
        if(!(match_string(g_44, "-h")))
          {
            if(!(match_string(g_44, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_r_24;
    {
      t = set_config_0(t);
      t = term_s_24;
    }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_t_24;
    return(t);
  }
  t = Option_3(t, u_4, v_4, w_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
  j_44 = t;
  i_44 :
  if(((ATgetType(j_44) == AT_LIST) && !(ATisEmpty(j_44))))
    {
      k_44 = ATgetFirst((ATermList) j_44);
      l_44 = (ATerm) ATgetNext((ATermList) j_44);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_44)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_44)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_55 (ATerm), ATerm m_55 (ATerm))
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL;
  v_44 = t;
  u_44 :
  if(((ATgetType(v_44) == AT_LIST) && !(ATisEmpty(v_44))))
    {
      w_44 = ATgetFirst((ATermList) v_44);
      x_44 = (ATerm) ATgetNext((ATermList) v_44);
      {
        ATerm b_45 = NULL,d_45 = NULL;
        ATerm c_45 = NULL;
        t = SSLgetAnnotations(not_null(v_44));
        {
          c_45 = t;
          if(((b_45 != NULL) && (b_45 != c_45)))
            _fail(c_45);
          else
            b_45 = c_45;
        }
        {
          t = not_null(w_44);
          {
            ATerm f_45 = NULL;
            t = l_55(t);
            {
              d_45 = t;
              {
                t = not_null(x_44);
                {
                  ATerm h_45 = NULL;
                  t = m_55(t);
                  {
                    f_45 = t;
                    {
                      ATerm i_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_45)), not_null(d_45)), not_null(b_45));
                      {
                        i_45 = t;
                        if(((h_45 != NULL) && (h_45 != i_45)))
                          _fail(i_45);
                        else
                          h_45 = i_45;
                      }
                      t = not_null(h_45);
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
  ATerm s_45 = NULL;
  s_45 = t;
  r_45 :
  if(((ATgetType(s_45) == AT_LIST) && ATisEmpty(s_45)))
    {
      {
        ATerm u_45 = NULL,w_45 = NULL;
        ATerm v_24;
        v_24 = t;
        {
          ATerm v_45 = NULL;
          t = SSLgetAnnotations(not_null(s_45));
          {
            v_45 = t;
            if(((u_45 != NULL) && (u_45 != v_45)))
              _fail(v_45);
            else
              u_45 = v_45;
          }
        }
        t = v_24;
        {
          ATerm x_45 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(u_45));
          {
            x_45 = t;
            if(((w_45 != NULL) && (w_45 != x_45)))
              _fail(x_45);
            else
              w_45 = x_45;
          }
          t = not_null(w_45);
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
  ATerm h_46 = NULL,l_46 = NULL,m_46 = NULL;
  h_46 = t;
  c_46 :
  if(match_cons(h_46, sym__2))
    {
      l_46 = ATgetArgument(h_46, 0);
      m_46 = ATgetArgument(h_46, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_24, not_null(l_46), not_null(m_46));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_86 (ATerm))
{
  ATerm z_24;
  z_24 = t;
  {
    ATerm c_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_25;
        t = z_86(t);
        LocalPopChoice(e_25);
      }
    else
      {
        t = c_25;
        {
        }
      }
  }
  t = z_24;
  {
    ATerm y_4 (ATerm t)
    {
      ATerm g_47 = NULL;
      ATerm i_25;
      i_25 = t;
      {
        ATerm u_46 = NULL;
        ATerm v_46 = NULL;
        v_46 = t;
        if(((u_46 != NULL) && (u_46 != v_46)))
          _fail(v_46);
        else
          u_46 = v_46;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_20, not_null(u_46));
          t = set_config_0(t);
        }
      }
      t = i_25;
      {
        ATerm h_47 = NULL;
        h_47 = t;
        if(((g_47 != NULL) && (g_47 != h_47)))
          _fail(h_47);
        else
          g_47 = h_47;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_47));
      }
      return(t);
    }
    ATerm b_5 (ATerm t)
    {
      ATerm j_25 = t;
      int k_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_25 = t;
          int m_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(m_25);
            }
          else
            {
              t = l_25;
              {
                t = z_86(t);
                t = Cons_2(t, _id, b_5);
              }
            }
          LocalPopChoice(k_25);
        }
      else
        {
          t = j_25;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_4, b_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm n_47 = NULL,s_47 = NULL,t_47 = NULL;
  ATerm n_25;
  n_25 = t;
  {
    ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL;
    u_47 = t;
    m_47 :
    if(match_cons(u_47, sym__3))
      {
        v_47 = ATgetArgument(u_47, 0);
        w_47 = ATgetArgument(u_47, 1);
        x_47 = ATgetArgument(u_47, 2);
        {
          if(((n_47 != NULL) && (n_47 != v_47)))
            _fail(v_47);
          else
            n_47 = v_47;
          {
            if(((s_47 != NULL) && (s_47 != w_47)))
              _fail(w_47);
            else
              s_47 = w_47;
            {
              if(((t_47 != NULL) && (t_47 != x_47)))
                _fail(x_47);
              else
                t_47 = x_47;
              t = SSL_table_put(not_null(n_47), not_null(s_47), not_null(t_47));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = n_25;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm a_48 = NULL;
  ATerm o_25;
  o_25 = t;
  {
    t = term_t_25;
    t = table_put_0(t);
  }
  t = o_25;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm u_25 = t;
      int v_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_86(t);
          LocalPopChoice(v_25);
        }
      else
        {
          t = u_25;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_5);
    {
      ATerm w_25 = t;
      int x_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_25;
          y_25 = t;
          {
            ATerm z_25 = t;
            int a_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_q_24;
                t = get_config_0(t);
                LocalPopChoice(a_26);
              }
            else
              {
                t = z_25;
                t = fetch_1(t, Help_0);
              }
          }
          t = y_25;
          {
            t = system_usage_0(t);
            {
              t = term_v_13;
              t = exit_0(t);
            }
          }
          LocalPopChoice(x_25);
        }
      else
        {
          t = w_25;
          {
            ATerm e_26 = t;
            int g_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_5 (ATerm t)
                {
                  ATerm h_5 (ATerm t)
                  {
                    ATerm b_48 = NULL;
                    b_48 = t;
                    if(((a_48 != NULL) && (a_48 != b_48)))
                      _fail(b_48);
                    else
                      a_48 = b_48;
                    return(t);
                  }
                  t = Undefined_1(t, h_5);
                  return(t);
                }
                t = fetch_1(t, f_5);
                {
                  ATerm i_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_48)), term_h_26);
                    return(t);
                  }
                  t = say_1(t, i_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_e_7;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(g_26);
              }
            else
              {
                t = e_26;
                {
                }
              }
          }
        }
      {
        ATerm k_26;
        k_26 = t;
        {
          t = term_j_21;
          t = table_destroy_0(t);
        }
        t = k_26;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm))
{
  t = parse_options_1(t, f_83);
  {
    t = store_options_0(t);
    {
      t = h_83(t);
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, g_83);
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            {
              ATerm n_26 = t;
              int o_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_83(t);
                  t = report_success_0(t);
                  LocalPopChoice(o_26);
                }
              else
                {
                  t = n_26;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrapNoOutput_3 (ATerm t, ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_84(t);
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = input_file_0(t);
    t = apply_strategy_1(t, c_84);
    return(t);
  }
  t = option_wrap_4(t, j_5, e_84, _id, k_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    t = _2(t, _id, ldiff_0);
    return(t);
  }
  t = iowrapNoOutput_3(t, m_5, ops_0, my_usage_0);
  return(t);
}
