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
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
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
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
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
ATerm term_p_25;
ATerm term_b_25;
ATerm term_p_24;
ATerm term_j_24;
ATerm term_h_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_r_23;
ATerm term_p_23;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_j_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_a_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_s_19;
ATerm term_m_19;
ATerm term_i_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_w_17;
ATerm term_w_16;
ATerm term_m_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_b_16;
ATerm term_h_14;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_q_12;
ATerm term_r_11;
ATerm term_h_9;
ATerm term_e_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_w_8;
ATerm term_m_8;
ATerm term_j_8;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_g_7;
void init_constant_terms (void)
{
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("0.2", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" version ", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] -i file -i2 file [-o file] [-b]", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n		{--path|--nopath|--squashedpath|--topmost}", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [--useambmark]", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n		[--help|-h|-?] [--version]\n", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_Path_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_SquashedPath_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_NoPath_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_TopMost_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_UseAmbMark_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("..", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("diff: ", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("diff", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym__3, term_l_13, term_l_13, term_r_7);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_h_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_l_13, term_l_13);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_i_7);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_h_14);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_14);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__2, term_m_19, term_i_7);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_i_7);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym__2, term_n_22, term_o_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_e_24, term_i_7);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym__3, term_n_22, term_o_22, (ATerm) ATempty);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm version_0 (ATerm);
ATerm my_usage_0 (ATerm);
ATerm Option_2 (ATerm, ATerm y_88 (ATerm), ATerm z_88 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm m_89 (ATerm), ATerm n_89 (ATerm));
ATerm ops_0 (ATerm);
ATerm echo_1 (ATerm, ATerm v_84 (ATerm));
ATerm try_echo_1 (ATerm, ATerm p_64 (ATerm));
ATerm is_diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm l_69 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm z_85 (ATerm));
ATerm laydiff_2 (ATerm, ATerm v_64 (ATerm), ATerm w_64 (ATerm));
ATerm laydiff_1 (ATerm, ATerm u_64 (ATerm));
ATerm Fst_0 (ATerm);
ATerm LConstoCons_0 (ATerm);
ATerm laydiff_squash_2 (ATerm, ATerm z_64 (ATerm), ATerm a_65 (ATerm));
ATerm laydiff_squash_1 (ATerm, ATerm y_64 (ATerm));
ATerm printtopdiff_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm d_76 (ATerm));
ATerm zip_1 (ATerm, ATerm f_76 (ATerm));
ATerm eq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm));
ATerm length_0 (ATerm);
ATerm L_1 (ATerm, ATerm h_58 (ATerm));
ATerm UL_0 (ATerm);
ATerm NL_0 (ATerm);
ATerm is_layout_0 (ATerm);
ATerm layeq_2 (ATerm, ATerm r_64 (ATerm), ATerm s_64 (ATerm));
ATerm printdiff_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm k_74 (ATerm));
ATerm get_options_0 (ATerm);
ATerm option_value_2 (ATerm, ATerm a_86 (ATerm), ATerm b_86 (ATerm));
ATerm ldiff_0 (ATerm);
ATerm _2 (ATerm, ATerm v_56 (ATerm), ATerm w_56 (ATerm));
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm y_85 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm y_81 (ATerm), ATerm z_81 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm j_80 (ATerm), ATerm k_80 (ATerm));
ATerm crush_2 (ATerm, ATerm h_79 (ATerm), ATerm i_79 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm q_87 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_85 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm u_89 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm t_89 (ATerm));
ATerm Program_1 (ATerm, ATerm a_64 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm u_84 (ATerm));
ATerm Undefined_1 (ATerm, ATerm b_64 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_88 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_74 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_84 (ATerm));
ATerm map_1 (ATerm, ATerm z_73 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_89 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_58 (ATerm), ATerm f_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_89 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_89 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm f_86 (ATerm));
ATerm iowrapNoOutput_3 (ATerm, ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm b_87 (ATerm));
ATerm main_0 (ATerm);
ATerm version_0 (ATerm t)
{
  t = term_g_7;
  return(t);
}
ATerm my_usage_0 (ATerm t)
{
  ATerm u_0 = NULL;
  ATerm h_7;
  h_7 = t;
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
          t = term_i_7;
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
            t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_7), term_p_7), term_o_7), term_n_7), not_null(u_0)), term_m_7), term_l_7), not_null(w_1)), term_k_7), not_null(u_0)));
            {
              t = printnl_0(t);
              {
                t = term_r_7;
                t = exit_0(t);
              }
            }
          }
        }
      }
    }
  }
  t = h_7;
  return(t);
}
ATerm Option_2 (ATerm t, ATerm y_88 (ATerm), ATerm z_88 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    t = term_s_7;
    return(t);
  }
  t = Option_3(t, y_88, z_88, e_0);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm m_89 (ATerm), ATerm n_89 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    t = term_s_7;
    return(t);
  }
  t = ArgOption_3(t, m_89, n_89, f_0);
  return(t);
}
ATerm ops_0 (ATerm t)
{
  ATerm t_7 = t;
  int y_7 = stack_ptr;
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
      ;
      LocalPopChoice(y_7);
    }
  else
    {
      t = t_7;
      {
        ATerm c_8 = t;
        int i_8 = stack_ptr;
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
              t = term_j_8;
              return(t);
            }
            t = Option_2(t, n_0, p_0);
            ;
            LocalPopChoice(i_8);
          }
        else
          {
            t = c_8;
            {
              ATerm k_8 = t;
              int l_8 = stack_ptr;
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
                    t = term_m_8;
                    return(t);
                  }
                  t = Option_2(t, q_0, r_0);
                  ;
                  LocalPopChoice(l_8);
                }
              else
                {
                  t = k_8;
                  {
                    ATerm s_8 = t;
                    int t_8 = stack_ptr;
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
                          t = term_w_8;
                          return(t);
                        }
                        t = Option_2(t, s_0, t_0);
                        ;
                        LocalPopChoice(t_8);
                      }
                    else
                      {
                        t = s_8;
                        {
                          ATerm x_8 = t;
                          int y_8 = stack_ptr;
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
                                t = term_z_8;
                                return(t);
                              }
                              t = Option_2(t, w_0, x_0);
                              ;
                              LocalPopChoice(y_8);
                            }
                          else
                            {
                              t = x_8;
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
                                  t = term_a_9;
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
ATerm echo_1 (ATerm t, ATerm v_84 (ATerm))
{
  ATerm b_9;
  b_9 = t;
  {
    ATerm g_3 = NULL,i_3 = NULL;
    ATerm d_9;
    d_9 = t;
    {
      ATerm h_3 = NULL;
      t = v_84(t);
      {
        h_3 = t;
        if(((g_3 != NULL) && (g_3 != h_3)))
          _fail(h_3);
        else
          g_3 = h_3;
      }
    }
    t = d_9;
    {
      ATerm j_3 = NULL;
      j_3 = t;
      if(((i_3 != NULL) && (i_3 != j_3)))
        _fail(j_3);
      else
        i_3 = j_3;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_3)), not_null(g_3)));
        t = printnl_0(t);
      }
    }
  }
  t = b_9;
  return(t);
}
ATerm try_echo_1 (ATerm t, ATerm p_64 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm g_9 = t;
    if((PushChoice() == 0))
      {
        ATerm b_1 (ATerm t)
        {
          t = term_h_9;
          return(t);
        }
        t = has_option_1(t, b_1);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_9;
      }
    t = echo_1(t, p_64);
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
ATerm oncetd_1 (ATerm t, ATerm l_69 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm i_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_69(t);
        ;
        LocalPopChoice(j_9);
      }
    else
      {
        t = i_9;
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
        ATerm k_9;
        k_9 = t;
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
        t = k_9;
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
    t = term_i_7;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm z_85 (ATerm))
{
  ATerm n_9;
  n_9 = t;
  {
    t = term_i_7;
    {
      t = z_85(t);
      t = check_option_0(t);
    }
  }
  t = n_9;
  return(t);
}
ATerm laydiff_2 (ATerm t, ATerm v_64 (ATerm), ATerm w_64 (ATerm))
{
  ATerm d_7 (ATerm t)
  {
    ATerm h_5 = NULL;
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = eq_0(t);
        t = Fst_0(t);
        ;
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        {
          ATerm q_9 = t;
          int s_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2(t, is_layout_0, is_layout_0);
              t = Fst_0(t);
              ;
              LocalPopChoice(s_9);
            }
          else
            {
              t = q_9;
              {
                ATerm v_9 = t;
                int y_9 = stack_ptr;
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
                          ATerm z_9;
                          z_9 = t;
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
                          t = z_9;
                          {
                            ATerm b_10;
                            b_10 = t;
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
                            t = b_10;
                            {
                              ATerm c_10;
                              c_10 = t;
                              {
                                ATerm b_6 = NULL,d_6 = NULL,f_6 = NULL;
                                ATerm d_10;
                                d_10 = t;
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
                                t = d_10;
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
                              t = c_10;
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
                    ;
                    LocalPopChoice(y_9);
                  }
                else
                  {
                    t = v_9;
                    {
                      ATerm e_10 = t;
                      int f_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
                          t = w_64(t);
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
                          ;
                          LocalPopChoice(f_10);
                        }
                      else
                        {
                          t = e_10;
                          {
                            ATerm h_10 = t;
                            int m_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL;
                                t = w_64(t);
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
                                ;
                                LocalPopChoice(m_10);
                              }
                            else
                              {
                                t = h_10;
                                {
                                  ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL;
                                  w_6 = t;
                                  c_5 :
                                  if(match_cons(w_6, sym__2))
                                    {
                                      x_6 = ATgetArgument(w_6, 0);
                                      y_6 = ATgetArgument(w_6, 1);
                                      {
                                        ATerm n_10 = t;
                                        int r_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = v_64(t);
                                            t = (ATerm) ATmakeAppl(sym_amb_2, (ATerm)ATmakeAppl(sym_amb1_1, not_null(x_6)), (ATerm) ATmakeAppl(sym_amb2_1, not_null(y_6)));
                                            ;
                                            LocalPopChoice(r_10);
                                          }
                                        else
                                          {
                                            t = n_10;
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
ATerm laydiff_1 (ATerm t, ATerm u_64 (ATerm))
{
  t = laydiff_2(t, u_64, _fail);
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm x_7 = NULL;
  ATerm z_7 = NULL,a_8 = NULL;
  x_7 = t;
  {
    ATerm b_8 = NULL;
    ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
    t = not_null(x_7);
    {
      b_8 = t;
      {
        t = SSL_explode_term(not_null(b_8));
        {
          d_8 = t;
          u_7 :
          if(match_cons(d_8, sym__2))
            {
              e_8 = ATgetArgument(d_8, 0);
              f_8 = ATgetArgument(d_8, 1);
              v_7 :
              if(match_string(e_8, ""))
                {
                  w_7 :
                  if(((ATgetType(f_8) == AT_LIST) && !(ATisEmpty(f_8))))
                    {
                      g_8 = ATgetFirst((ATermList) f_8);
                      h_8 = (ATerm) ATgetNext((ATermList) f_8);
                      {
                        if(((a_8 != NULL) && (a_8 != g_8)))
                          _fail(g_8);
                        else
                          a_8 = g_8;
                        if(((z_7 != NULL) && (z_7 != h_8)))
                          _fail(h_8);
                        else
                          z_7 = h_8;
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
    t = not_null(a_8);
  }
  return(t);
}
ATerm LConstoCons_0 (ATerm t)
{
  ATerm x_10 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = x_10;
      {
        ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
        o_8 = t;
        n_8 :
        if(match_cons(o_8, sym_LCons_3))
          {
            p_8 = ATgetArgument(o_8, 0);
            q_8 = ATgetArgument(o_8, 1);
            r_8 = ATgetArgument(o_8, 2);
            {
              ATerm u_8 = NULL;
              ATerm v_8 = NULL;
              t = not_null(r_8);
              {
                t = LConstoCons_0(t);
                {
                  v_8 = t;
                  if(((u_8 != NULL) && (u_8 != v_8)))
                    _fail(v_8);
                  else
                    u_8 = v_8;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_8)), not_null(p_8));
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
ATerm laydiff_squash_2 (ATerm t, ATerm z_64 (ATerm), ATerm a_65 (ATerm))
{
  ATerm o_12 (ATerm t)
  {
    ATerm g_10 = NULL,i_10 = NULL;
    ATerm d_1 (ATerm t)
    {
      t = _2(t, LConstoCons_0, LConstoCons_0);
      return(t);
    }
    t = try_1(t, d_1);
    {
      ATerm l_11 = t;
      int m_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = eq_0(t);
          {
            t = Fst_0(t);
            {
              ATerm e_1 (ATerm t)
              {
                ATerm p_11 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_11;
                  }
                t = term_r_11;
                return(t);
              }
              t = try_1(t, e_1);
            }
          }
          ;
          LocalPopChoice(m_11);
        }
      else
        {
          t = l_11;
          {
            ATerm y_11 = t;
            int z_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2(t, is_layout_0, is_layout_0);
                t = term_r_11;
                ;
                LocalPopChoice(z_11);
              }
            else
              {
                t = y_11;
                {
                  ATerm f_12 = t;
                  int g_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
                      j_10 = t;
                      r_9 :
                      if(match_cons(j_10, sym__2))
                        {
                          k_10 = ATgetArgument(j_10, 0);
                          l_10 = ATgetArgument(j_10, 1);
                          {
                            ATerm o_10 = NULL,p_10 = NULL,v_10 = NULL;
                            ATerm k_12;
                            k_12 = t;
                            {
                              ATerm q_10 = NULL;
                              ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
                              t = not_null(l_10);
                              {
                                q_10 = t;
                                {
                                  t = SSL_explode_term(not_null(q_10));
                                  {
                                    s_10 = t;
                                    c_9 :
                                    if(match_cons(s_10, sym__2))
                                      {
                                        t_10 = ATgetArgument(s_10, 0);
                                        u_10 = ATgetArgument(s_10, 1);
                                        {
                                          if(((o_10 != NULL) && (o_10 != t_10)))
                                            _fail(t_10);
                                          else
                                            o_10 = t_10;
                                          if(((p_10 != NULL) && (p_10 != u_10)))
                                            _fail(u_10);
                                          else
                                            p_10 = u_10;
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
                            t = k_12;
                            {
                              ATerm l_12;
                              l_12 = t;
                              {
                                ATerm w_10 = NULL;
                                ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
                                t = not_null(k_10);
                                {
                                  w_10 = t;
                                  {
                                    t = SSL_explode_term(not_null(w_10));
                                    {
                                      y_10 = t;
                                      f_9 :
                                      if(match_cons(y_10, sym__2))
                                        {
                                          z_10 = ATgetArgument(y_10, 0);
                                          a_11 = ATgetArgument(y_10, 1);
                                          {
                                            if(((o_10 != NULL) && (o_10 != z_10)))
                                              _fail(z_10);
                                            else
                                              o_10 = z_10;
                                            if(((v_10 != NULL) && (v_10 != a_11)))
                                              _fail(a_11);
                                            else
                                              v_10 = a_11;
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
                              t = l_12;
                              {
                                ATerm b_11 = NULL,d_11 = NULL,n_11 = NULL;
                                ATerm m_12;
                                m_12 = t;
                                {
                                  ATerm c_11 = NULL;
                                  t = not_null(v_10);
                                  {
                                    t = length_0(t);
                                    {
                                      c_11 = t;
                                      if(((b_11 != NULL) && (b_11 != c_11)))
                                        _fail(c_11);
                                      else
                                        b_11 = c_11;
                                    }
                                  }
                                }
                                t = m_12;
                                {
                                  ATerm e_11 = NULL;
                                  t = not_null(p_10);
                                  {
                                    t = length_0(t);
                                    {
                                      e_11 = t;
                                      if(((d_11 != NULL) && (d_11 != e_11)))
                                        _fail(e_11);
                                      else
                                        d_11 = e_11;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(b_11), not_null(d_11));
                                    {
                                      t = eq_0(t);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), not_null(p_10));
                                        {
                                          t = zip_1(t, o_12);
                                          {
                                            ATerm s_11 = NULL;
                                            ATerm n_12 = t;
                                            int p_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_10), term_q_12);
                                                {
                                                  t = eq_0(t);
                                                  t = Cons_2(t, _id, Nil_0);
                                                }
                                                ;
                                                LocalPopChoice(p_12);
                                              }
                                            else
                                              {
                                                t = n_12;
                                                {
                                                  ATerm f_1 (ATerm t)
                                                  {
                                                    ATerm r_12 = t;
                                                    int s_12 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm f_11 = NULL;
                                                        ATerm h_1 (ATerm t)
                                                        {
                                                          ATerm j_1 (ATerm t)
                                                          {
                                                            ATerm g_11 = NULL;
                                                            g_11 = t;
                                                            if(((f_11 != NULL) && (f_11 != g_11)))
                                                              _fail(g_11);
                                                            else
                                                              f_11 = g_11;
                                                            return(t);
                                                          }
                                                          t = Cons_2(t, is_diff_0, j_1);
                                                          return(t);
                                                        }
                                                        t = _2(t, is_diff_0, h_1);
                                                        t = (ATerm) ATinsert(CheckATermList(not_null(f_11)), term_r_11);
                                                        ;
                                                        LocalPopChoice(s_12);
                                                      }
                                                    else
                                                      {
                                                        t = r_12;
                                                        {
                                                          ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
                                                          ATerm y_12 (ATerm t)
                                                          {
                                                            t = (ATerm) ATinsert(CheckATermList(not_null(j_11)), not_null(i_11));
                                                            return(t);
                                                          }
                                                          h_11 = t;
                                                          l_9 :
                                                          if(match_cons(h_11, sym__2))
                                                            {
                                                              i_11 = ATgetArgument(h_11, 0);
                                                              j_11 = ATgetArgument(h_11, 1);
                                                              m_9 :
                                                              if(((ATgetType(j_11) == AT_LIST) && ATisEmpty(j_11)))
                                                                {
                                                                  {
                                                                    ATerm t_12 = t;
                                                                    int u_12 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = not_null(i_11);
                                                                        t = is_list_0(t);
                                                                        t = not_null(i_11);
                                                                        ;
                                                                        LocalPopChoice(u_12);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_12;
                                                                        t = y_12(t);
                                                                      }
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  t = y_12(t);
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
                                              n_11 = t;
                                              {
                                                if(((g_10 != NULL) && (g_10 != n_11)))
                                                  _fail(n_11);
                                                else
                                                  g_10 = n_11;
                                                {
                                                  ATerm v_12 = t;
                                                  int w_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_10), term_q_12);
                                                      {
                                                        t = eq_0(t);
                                                        {
                                                          t = not_null(g_10);
                                                          {
                                                            ATerm k_1 (ATerm t)
                                                            {
                                                              ATerm l_1 (ATerm t)
                                                              {
                                                                ATerm o_11 = NULL;
                                                                ATerm x_12 = t;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = is_list_0(t);
                                                                    PopChoice();
                                                                    _fail(t);
                                                                  }
                                                                else
                                                                  {
                                                                    t = x_12;
                                                                  }
                                                                {
                                                                  o_11 = t;
                                                                  t = (ATerm) ATinsert(ATempty, not_null(o_11));
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
                                                      ;
                                                      LocalPopChoice(w_12);
                                                    }
                                                  else
                                                    {
                                                      t = v_12;
                                                      {
                                                        ATerm z_12 = t;
                                                        int a_13 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Cons_2(t, is_diff_0, Nil_0);
                                                            t = term_r_11;
                                                            ;
                                                            LocalPopChoice(a_13);
                                                          }
                                                        else
                                                          {
                                                            t = z_12;
                                                            {
                                                              ATerm q_11 = NULL;
                                                              t = SSL_mkterm(not_null(o_10), not_null(g_10));
                                                              {
                                                                q_11 = t;
                                                                t = not_null(q_11);
                                                              }
                                                            }
                                                          }
                                                      }
                                                    }
                                                  {
                                                    s_11 = t;
                                                    if(((i_10 != NULL) && (i_10 != s_11)))
                                                      _fail(s_11);
                                                    else
                                                      i_10 = s_11;
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
                                t = not_null(i_10);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      ;
                      LocalPopChoice(g_12);
                    }
                  else
                    {
                      t = f_12;
                      {
                        ATerm b_13 = t;
                        int c_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
                            t = a_65(t);
                            {
                              t_11 = t;
                              t_9 :
                              if(match_cons(t_11, sym__2))
                                {
                                  u_11 = ATgetArgument(t_11, 0);
                                  x_11 = ATgetArgument(t_11, 1);
                                  u_9 :
                                  if(match_cons(u_11, sym_Label_2))
                                    {
                                      v_11 = ATgetArgument(u_11, 0);
                                      w_11 = ATgetArgument(u_11, 1);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(w_11), not_null(x_11));
                                        t = o_12(t);
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
                            ;
                            LocalPopChoice(c_13);
                          }
                        else
                          {
                            t = b_13;
                            {
                              ATerm d_13 = t;
                              int e_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
                                  t = a_65(t);
                                  {
                                    a_12 = t;
                                    w_9 :
                                    if(match_cons(a_12, sym__2))
                                      {
                                        b_12 = ATgetArgument(a_12, 0);
                                        c_12 = ATgetArgument(a_12, 1);
                                        x_9 :
                                        if(match_cons(c_12, sym_Label_2))
                                          {
                                            d_12 = ATgetArgument(c_12, 0);
                                            e_12 = ATgetArgument(c_12, 1);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(b_12), not_null(e_12));
                                              t = o_12(t);
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
                                  ;
                                  LocalPopChoice(e_13);
                                }
                              else
                                {
                                  t = d_13;
                                  {
                                    ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
                                    h_12 = t;
                                    a_10 :
                                    if(match_cons(h_12, sym__2))
                                      {
                                        i_12 = ATgetArgument(h_12, 0);
                                        j_12 = ATgetArgument(h_12, 1);
                                        {
                                          ATerm f_13 = t;
                                          int g_13 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = z_64(t);
                                              t = (ATerm) ATmakeAppl(sym_amb_2, (ATerm)ATmakeAppl(sym_amb1_1, not_null(i_12)), (ATerm) ATmakeAppl(sym_amb2_1, not_null(j_12)));
                                              ;
                                              LocalPopChoice(g_13);
                                            }
                                          else
                                            {
                                              t = f_13;
                                              t = (ATerm) ATmakeAppl(sym_amb_2, not_null(i_12), not_null(j_12));
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
  t = o_12(t);
  return(t);
}
ATerm laydiff_squash_1 (ATerm t, ATerm y_64 (ATerm))
{
  t = laydiff_squash_2(t, y_64, _fail);
  return(t);
}
ATerm printtopdiff_0 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym__2))
    {
      q_13 = ATgetArgument(p_13, 0);
      r_13 = ATgetArgument(p_13, 1);
      {
        ATerm u_13 = NULL,a_14 = NULL;
        ATerm h_13;
        h_13 = t;
        {
          ATerm v_13 = NULL;
          ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
          t = not_null(r_13);
          {
            v_13 = t;
            {
              t = SSL_explode_term(not_null(v_13));
              {
                x_13 = t;
                k_13 :
                if(match_cons(x_13, sym__2))
                  {
                    y_13 = ATgetArgument(x_13, 0);
                    z_13 = ATgetArgument(x_13, 1);
                    if(((u_13 != NULL) && (u_13 != y_13)))
                      _fail(y_13);
                    else
                      u_13 = y_13;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            }
          }
        }
        t = h_13;
        {
          ATerm i_13;
          i_13 = t;
          {
            ATerm b_14 = NULL;
            ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
            t = not_null(q_13);
            {
              b_14 = t;
              {
                t = SSL_explode_term(not_null(b_14));
                {
                  d_14 = t;
                  n_13 :
                  if(match_cons(d_14, sym__2))
                    {
                      e_14 = ATgetArgument(d_14, 0);
                      f_14 = ATgetArgument(d_14, 1);
                      if(((a_14 != NULL) && (a_14 != e_14)))
                        _fail(e_14);
                      else
                        a_14 = e_14;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              }
            }
          }
          t = i_13;
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_13)), not_null(a_14));
            {
              ATerm m_1 (ATerm t)
              {
                t = term_j_13;
                return(t);
              }
              t = try_echo_1(t, m_1);
              {
                t = term_m_13;
                t = table_put_0(t);
              }
            }
            t = term_i_7;
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
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym__2))
    {
      o_14 = ATgetArgument(n_14, 0);
      p_14 = ATgetArgument(n_14, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_14)), not_null(o_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL;
  x_14 = t;
  u_14 :
  if(match_cons(x_14, sym__2))
    {
      y_14 = ATgetArgument(x_14, 0);
      b_15 = ATgetArgument(x_14, 1);
      v_14 :
      if(((ATgetType(y_14) == AT_LIST) && !(ATisEmpty(y_14))))
        {
          z_14 = ATgetFirst((ATermList) y_14);
          a_15 = (ATerm) ATgetNext((ATermList) y_14);
          w_14 :
          if(((ATgetType(b_15) == AT_LIST) && !(ATisEmpty(b_15))))
            {
              c_15 = ATgetFirst((ATermList) b_15);
              d_15 = (ATerm) ATgetNext((ATermList) b_15);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(z_14), not_null(c_15)), (ATerm) ATmakeAppl(sym__2, not_null(a_15), not_null(d_15)));
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
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
  n_15 = t;
  k_15 :
  if(match_cons(n_15, sym__2))
    {
      o_15 = ATgetArgument(n_15, 0);
      p_15 = ATgetArgument(n_15, 1);
      l_15 :
      if(((ATgetType(o_15) == AT_LIST) && ATisEmpty(o_15)))
        {
          m_15 :
          if(((ATgetType(p_15) == AT_LIST) && ATisEmpty(p_15)))
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
ATerm genzip_4 (ATerm t, ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm d_76 (ATerm))
{
  ATerm r_15 (ATerm t)
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_76(t);
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        {
          t = b_76(t);
          {
            t = _2(t, d_76, r_15);
            t = c_76(t);
          }
        }
      }
    return(t);
  }
  t = r_15(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm f_76 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, f_76);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  u_15 = t;
  t_15 :
  if(match_cons(u_15, sym__2))
    {
      v_15 = ATgetArgument(u_15, 0);
      w_15 = ATgetArgument(u_15, 1);
      if(((v_15 != NULL) && (v_15 != w_15)))
        _fail(w_15);
      else
        v_15 = w_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm))
{
  ATerm w_13 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_80(t);
      ;
      LocalPopChoice(c_14);
    }
  else
    {
      t = w_13;
      {
        ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
        d_16 = t;
        c_16 :
        if(((ATgetType(d_16) == AT_LIST) && !(ATisEmpty(d_16))))
          {
            e_16 = ATgetFirst((ATermList) d_16);
            f_16 = (ATerm) ATgetNext((ATermList) d_16);
            {
              ATerm i_16 = NULL,k_16 = NULL;
              ATerm g_14;
              g_14 = t;
              {
                ATerm j_16 = NULL;
                t = not_null(e_16);
                {
                  t = n_80(t);
                  {
                    j_16 = t;
                    if(((i_16 != NULL) && (i_16 != j_16)))
                      _fail(j_16);
                    else
                      i_16 = j_16;
                  }
                }
              }
              t = g_14;
              {
                ATerm l_16 = NULL;
                t = not_null(f_16);
                {
                  t = foldr_3(t, l_80, m_80, n_80);
                  {
                    l_16 = t;
                    if(((k_16 != NULL) && (k_16 != l_16)))
                      _fail(l_16);
                    else
                      k_16 = l_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_16), not_null(k_16));
                  t = m_80(t);
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
    t = term_h_14;
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = term_r_7;
    return(t);
  }
  t = foldr_3(t, n_1, add_0, o_1);
  return(t);
}
ATerm L_1 (ATerm t, ATerm h_58 (ATerm))
{
  ATerm u_16 = NULL,v_16 = NULL;
  u_16 = t;
  t_16 :
  if(match_cons(u_16, sym_L_1))
    {
      v_16 = ATgetArgument(u_16, 0);
      {
        ATerm y_16 = NULL,a_17 = NULL;
        ATerm z_16 = NULL;
        t = SSLgetAnnotations(not_null(u_16));
        {
          z_16 = t;
          if(((y_16 != NULL) && (y_16 != z_16)))
            _fail(z_16);
          else
            y_16 = z_16;
        }
        {
          t = not_null(v_16);
          {
            ATerm c_17 = NULL;
            t = h_58(t);
            {
              a_17 = t;
              {
                ATerm d_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_1, not_null(a_17)), not_null(y_16));
                {
                  d_17 = t;
                  if(((c_17 != NULL) && (c_17 != d_17)))
                    _fail(d_17);
                  else
                    c_17 = d_17;
                }
                t = not_null(c_17);
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
  ATerm m_17 = NULL;
  m_17 = t;
  l_17 :
  if(match_cons(m_17, sym_UL_0))
    {
      ATerm o_17 = NULL,q_17 = NULL;
      ATerm i_14;
      i_14 = t;
      {
        ATerm p_17 = NULL;
        t = SSLgetAnnotations(not_null(m_17));
        {
          p_17 = t;
          if(((o_17 != NULL) && (o_17 != p_17)))
            _fail(p_17);
          else
            o_17 = p_17;
        }
      }
      t = i_14;
      {
        ATerm r_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_UL_0), not_null(o_17));
        {
          r_17 = t;
          if(((q_17 != NULL) && (q_17 != r_17)))
            _fail(r_17);
          else
            q_17 = r_17;
        }
        t = not_null(q_17);
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
  ATerm z_17 = NULL;
  z_17 = t;
  y_17 :
  if(match_cons(z_17, sym_NL_0))
    {
      ATerm b_18 = NULL,d_18 = NULL;
      ATerm j_14;
      j_14 = t;
      {
        ATerm c_18 = NULL;
        t = SSLgetAnnotations(not_null(z_17));
        {
          c_18 = t;
          if(((b_18 != NULL) && (b_18 != c_18)))
            _fail(c_18);
          else
            b_18 = c_18;
        }
      }
      t = j_14;
      {
        ATerm e_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NL_0), not_null(b_18));
        {
          e_18 = t;
          if(((d_18 != NULL) && (d_18 != e_18)))
            _fail(e_18);
          else
            d_18 = e_18;
        }
        t = not_null(d_18);
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
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = NL_0(t);
      ;
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = UL_0(t);
            ;
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            t = L_1(t, _id);
          }
      }
    }
  return(t);
}
ATerm layeq_2 (ATerm t, ATerm r_64 (ATerm), ATerm s_64 (ATerm))
{
  ATerm o_20 (ATerm t)
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = eq_0(t);
        ;
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        {
          ATerm e_15 = t;
          int f_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2(t, is_layout_0, is_layout_0);
              ;
              LocalPopChoice(f_15);
            }
          else
            {
              t = e_15;
              {
                ATerm g_15 = t;
                int h_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
                    d_19 = t;
                    r_18 :
                    if(match_cons(d_19, sym__2))
                      {
                        e_19 = ATgetArgument(d_19, 0);
                        f_19 = ATgetArgument(d_19, 1);
                        {
                          ATerm j_19 = NULL,k_19 = NULL,q_19 = NULL;
                          ATerm i_15;
                          i_15 = t;
                          {
                            ATerm l_19 = NULL;
                            ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
                            t = not_null(f_19);
                            {
                              l_19 = t;
                              {
                                t = SSL_explode_term(not_null(l_19));
                                {
                                  n_19 = t;
                                  l_18 :
                                  if(match_cons(n_19, sym__2))
                                    {
                                      o_19 = ATgetArgument(n_19, 0);
                                      p_19 = ATgetArgument(n_19, 1);
                                      {
                                        if(((j_19 != NULL) && (j_19 != o_19)))
                                          _fail(o_19);
                                        else
                                          j_19 = o_19;
                                        if(((k_19 != NULL) && (k_19 != p_19)))
                                          _fail(p_19);
                                        else
                                          k_19 = p_19;
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
                          t = i_15;
                          {
                            ATerm j_15;
                            j_15 = t;
                            {
                              ATerm r_19 = NULL;
                              ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
                              t = not_null(e_19);
                              {
                                r_19 = t;
                                {
                                  t = SSL_explode_term(not_null(r_19));
                                  {
                                    t_19 = t;
                                    o_18 :
                                    if(match_cons(t_19, sym__2))
                                      {
                                        u_19 = ATgetArgument(t_19, 0);
                                        v_19 = ATgetArgument(t_19, 1);
                                        {
                                          if(((j_19 != NULL) && (j_19 != u_19)))
                                            _fail(u_19);
                                          else
                                            j_19 = u_19;
                                          if(((q_19 != NULL) && (q_19 != v_19)))
                                            _fail(v_19);
                                          else
                                            q_19 = v_19;
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
                            t = j_15;
                            {
                              ATerm w_19 = NULL,y_19 = NULL;
                              ATerm q_15;
                              q_15 = t;
                              {
                                ATerm x_19 = NULL;
                                t = not_null(q_19);
                                {
                                  t = length_0(t);
                                  {
                                    x_19 = t;
                                    if(((w_19 != NULL) && (w_19 != x_19)))
                                      _fail(x_19);
                                    else
                                      w_19 = x_19;
                                  }
                                }
                              }
                              t = q_15;
                              {
                                ATerm z_19 = NULL;
                                t = not_null(k_19);
                                {
                                  t = length_0(t);
                                  {
                                    z_19 = t;
                                    if(((y_19 != NULL) && (y_19 != z_19)))
                                      _fail(z_19);
                                    else
                                      y_19 = z_19;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), not_null(y_19));
                                  {
                                    t = eq_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_19), not_null(k_19));
                                      t = zip_1(t, o_20);
                                    }
                                  }
                                }
                              }
                              t = not_null(d_19);
                            }
                          }
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                    ;
                    LocalPopChoice(h_15);
                  }
                else
                  {
                    t = g_15;
                    {
                      ATerm s_15 = t;
                      int x_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
                          t = s_64(t);
                          {
                            a_20 = t;
                            t_18 :
                            if(match_cons(a_20, sym__2))
                              {
                                b_20 = ATgetArgument(a_20, 0);
                                e_20 = ATgetArgument(a_20, 1);
                                u_18 :
                                if(match_cons(b_20, sym_Label_2))
                                  {
                                    c_20 = ATgetArgument(b_20, 0);
                                    d_20 = ATgetArgument(b_20, 1);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), not_null(e_20));
                                      t = o_20(t);
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
                          ;
                          LocalPopChoice(x_15);
                        }
                      else
                        {
                          t = s_15;
                          {
                            ATerm y_15 = t;
                            int z_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
                                t = s_64(t);
                                {
                                  h_20 = t;
                                  w_18 :
                                  if(match_cons(h_20, sym__2))
                                    {
                                      i_20 = ATgetArgument(h_20, 0);
                                      j_20 = ATgetArgument(h_20, 1);
                                      x_18 :
                                      if(match_cons(j_20, sym_Label_2))
                                        {
                                          k_20 = ATgetArgument(j_20, 0);
                                          l_20 = ATgetArgument(j_20, 1);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), not_null(l_20));
                                            t = o_20(t);
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
                                ;
                                LocalPopChoice(z_15);
                              }
                            else
                              {
                                t = y_15;
                                t = r_64(t);
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
  t = o_20(t);
  return(t);
}
ATerm printdiff_0 (ATerm t)
{
  ATerm k_21 = NULL,n_23 = NULL,o_23 = NULL;
  k_21 = t;
  z_20 :
  if(match_cons(k_21, sym__2))
    {
      n_23 = ATgetArgument(k_21, 0);
      o_23 = ATgetArgument(k_21, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_23)), not_null(n_23));
        {
          ATerm p_1 (ATerm t)
          {
            t = term_j_13;
            return(t);
          }
          t = try_echo_1(t, p_1);
          {
            t = term_m_13;
            t = table_put_0(t);
          }
        }
        t = term_i_7;
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
  ATerm u_23 = NULL;
  ATerm w_23 = NULL;
  u_23 = t;
  {
    ATerm a_16;
    a_16 = t;
    {
      ATerm x_23 = NULL;
      t = term_b_16;
      {
        x_23 = t;
        if(((w_23 != NULL) && (w_23 != x_23)))
          _fail(x_23);
        else
          w_23 = x_23;
      }
    }
    t = a_16;
    {
      t = SSL_open_file(not_null(u_23), not_null(w_23));
      t = SSL_close_file(not_null(u_23));
    }
  }
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm k_74 (ATerm))
{
  ATerm b_24 = NULL;
  ATerm q_1 (ATerm t)
  {
    ATerm c_24 = NULL;
    t = k_74(t);
    {
      c_24 = t;
      if(((b_24 != NULL) && (b_24 != c_24)))
        _fail(c_24);
      else
        b_24 = c_24;
    }
    return(t);
  }
  t = fetch_1(t, q_1);
  t = not_null(b_24);
  return(t);
}
ATerm get_options_0 (ATerm t)
{
  t = term_m_16;
  t = table_get_0(t);
  return(t);
}
ATerm option_value_2 (ATerm t, ATerm a_86 (ATerm), ATerm b_86 (ATerm))
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = get_options_0(t);
      t = fetch_elem_1(t, a_86);
      ;
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
      t = b_86(t);
    }
  return(t);
}
ATerm ldiff_0 (ATerm t)
{
  ATerm i_24 = NULL;
  ATerm n_24 = NULL;
  i_24 = t;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm k_24 = NULL,l_24 = NULL;
      k_24 = t;
      g_24 :
      if(match_cons(k_24, sym_Input2_1))
        {
          l_24 = ATgetArgument(k_24, 0);
          t = not_null(l_24);
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
          n_24 = t;
          {
            ATerm p_16 = t;
            int q_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_1 (ATerm t)
                {
                  t = term_w_8;
                  return(t);
                }
                t = has_option_1(t, s_1);
                {
                  t = term_l_13;
                  {
                    t = table_create_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), not_null(n_24));
                      {
                        t = layeq_2(t, printdiff_0, _id);
                        {
                          ATerm r_16 = t;
                          int s_16 = stack_ptr;
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
                              ;
                              LocalPopChoice(s_16);
                            }
                          else
                            {
                              t = r_16;
                              {
                                t = term_r_7;
                                t = exit_0(t);
                              }
                            }
                        }
                      }
                    }
                  }
                }
                ;
                LocalPopChoice(q_16);
              }
            else
              {
                t = p_16;
                {
                  ATerm b_17 = t;
                  int e_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_1 (ATerm t)
                      {
                        t = term_z_8;
                        return(t);
                      }
                      t = has_option_1(t, t_1);
                      {
                        t = term_l_13;
                        {
                          t = table_create_0(t);
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), not_null(n_24));
                            {
                              t = layeq_2(t, printtopdiff_0, _id);
                              {
                                ATerm f_17 = t;
                                int g_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_w_16;
                                    {
                                      ATerm h_17 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = table_get_0(t);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = h_17;
                                        }
                                    }
                                    ;
                                    LocalPopChoice(g_17);
                                  }
                                else
                                  {
                                    t = f_17;
                                    {
                                      t = term_r_7;
                                      t = exit_0(t);
                                    }
                                  }
                              }
                            }
                          }
                        }
                      }
                      ;
                      LocalPopChoice(e_17);
                    }
                  else
                    {
                      t = b_17;
                      {
                        ATerm i_17 = t;
                        int j_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm u_1 (ATerm t)
                            {
                              t = term_m_8;
                              return(t);
                            }
                            t = has_option_1(t, u_1);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), not_null(n_24));
                              {
                                ATerm v_1 (ATerm t)
                                {
                                  ATerm y_1 (ATerm t)
                                  {
                                    t = term_a_9;
                                    return(t);
                                  }
                                  t = has_option_1(t, y_1);
                                  return(t);
                                }
                                t = laydiff_squash_1(t, v_1);
                                {
                                  ATerm z_1 (ATerm t)
                                  {
                                    ATerm k_17 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = is_diff_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = k_17;
                                      }
                                    {
                                      ATerm a_2 (ATerm t)
                                      {
                                        t = term_j_13;
                                        return(t);
                                      }
                                      t = try_echo_1(t, a_2);
                                      {
                                        t = term_r_7;
                                        t = exit_0(t);
                                      }
                                    }
                                    return(t);
                                  }
                                  t = try_1(t, z_1);
                                }
                              }
                            }
                            ;
                            LocalPopChoice(j_17);
                          }
                        else
                          {
                            t = i_17;
                            {
                              ATerm b_2 (ATerm t)
                              {
                                t = term_j_8;
                                return(t);
                              }
                              t = has_option_1(t, b_2);
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), not_null(n_24));
                                {
                                  ATerm c_2 (ATerm t)
                                  {
                                    ATerm d_2 (ATerm t)
                                    {
                                      t = term_a_9;
                                      return(t);
                                    }
                                    t = has_option_1(t, d_2);
                                    return(t);
                                  }
                                  t = laydiff_1(t, c_2);
                                  {
                                    ATerm e_2 (ATerm t)
                                    {
                                      ATerm n_17 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = is_diff_0(t);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = n_17;
                                        }
                                      {
                                        ATerm f_2 (ATerm t)
                                        {
                                          t = term_j_13;
                                          return(t);
                                        }
                                        t = try_echo_1(t, f_2);
                                        {
                                          t = term_r_7;
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
ATerm _2 (ATerm t, ATerm v_56 (ATerm), ATerm w_56 (ATerm))
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
  y_24 = t;
  x_24 :
  if(match_cons(y_24, sym__2))
    {
      z_24 = ATgetArgument(y_24, 0);
      a_25 = ATgetArgument(y_24, 1);
      {
        ATerm e_25 = NULL,g_25 = NULL;
        ATerm f_25 = NULL;
        t = SSLgetAnnotations(not_null(y_24));
        {
          f_25 = t;
          if(((e_25 != NULL) && (e_25 != f_25)))
            _fail(f_25);
          else
            e_25 = f_25;
        }
        {
          t = not_null(z_24);
          {
            ATerm i_25 = NULL;
            t = v_56(t);
            {
              g_25 = t;
              {
                t = not_null(a_25);
                {
                  ATerm k_25 = NULL;
                  t = w_56(t);
                  {
                    i_25 = t;
                    {
                      ATerm l_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_25), not_null(i_25)), not_null(e_25));
                      {
                        l_25 = t;
                        if(((k_25 != NULL) && (k_25 != l_25)))
                          _fail(l_25);
                        else
                          k_25 = l_25;
                      }
                      t = not_null(k_25);
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
ATerm apply_strategy_1 (ATerm t, ATerm y_85 (ATerm))
{
  ATerm u_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
  ATerm s_17;
  s_17 = t;
  t = dtime_0(t);
  t = s_17;
  {
    t = y_85(t);
    {
      ATerm t_17;
      t_17 = t;
      {
        ATerm v_25 = NULL;
        t = dtime_0(t);
        {
          v_25 = t;
          if(((u_25 != NULL) && (u_25 != v_25)))
            _fail(v_25);
          else
            u_25 = v_25;
        }
      }
      t = t_17;
      {
        w_25 = t;
        t_25 :
        if(match_cons(w_25, sym__2))
          {
            x_25 = ATgetArgument(w_25, 0);
            y_25 = ATgetArgument(w_25, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_25)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(u_25))), not_null(y_25));
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
  ATerm e_26 = NULL;
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_26 = NULL;
      f_26 = t;
      {
        if(((e_26 != NULL) && (e_26 != f_26)))
          _fail(f_26);
        else
          e_26 = f_26;
        t = SSL_ReadFromFile(not_null(e_26));
      }
      ;
      LocalPopChoice(v_17);
    }
  else
    {
      t = u_17;
      {
        ATerm g_2 (ATerm t)
        {
          t = term_w_17;
          return(t);
        }
        t = debug_1(t, g_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm y_81 (ATerm), ATerm z_81 (ATerm))
{
  ATerm l_26 = NULL,n_26 = NULL;
  ATerm x_17;
  x_17 = t;
  {
    ATerm m_26 = NULL;
    t = y_81(t);
    {
      m_26 = t;
      if(((l_26 != NULL) && (l_26 != m_26)))
        _fail(m_26);
      else
        l_26 = m_26;
    }
  }
  t = x_17;
  {
    ATerm o_26 = NULL;
    t = z_81(t);
    {
      o_26 = t;
      if(((n_26 != NULL) && (n_26 != o_26)))
        _fail(o_26);
      else
        n_26 = o_26;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_26), not_null(n_26));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_26 = NULL;
  ATerm a_18;
  a_18 = t;
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_2 (ATerm t)
        {
          ATerm y_26 = NULL,z_26 = NULL;
          y_26 = t;
          s_26 :
          if(match_cons(y_26, sym_Input_1))
            {
              z_26 = ATgetArgument(y_26, 0);
              if(((x_26 != NULL) && (x_26 != z_26)))
                _fail(z_26);
              else
                x_26 = z_26;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, h_2);
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        {
          ATerm a_27 = NULL;
          t = term_h_18;
          {
            a_27 = t;
            if(((x_26 != NULL) && (x_26 != a_27)))
              _fail(a_27);
            else
              x_26 = a_27;
          }
        }
      }
  }
  t = a_18;
  {
    ATerm i_2 (ATerm t)
    {
      t = not_null(x_26);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, i_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm e_27 = NULL;
    e_27 = t;
    d_27 :
    if(!(match_string(e_27, "-v")))
      {
        if(!(match_string(e_27, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_j_18;
    t = set_config_0(t);
    t = term_k_18;
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_m_18;
    return(t);
  }
  t = Option_3(t, j_2, k_2, m_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm h_27 = NULL;
    h_27 = t;
    f_27 :
    if(!(match_string(h_27, "-k")))
      {
        if(!(match_string(h_27, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm n_18;
    n_18 = t;
    {
      ATerm i_27 = NULL;
      ATerm j_27 = NULL;
      t = string_to_int_0(t);
      {
        j_27 = t;
        if(((i_27 != NULL) && (i_27 != j_27)))
          _fail(j_27);
        else
          i_27 = j_27;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_18, not_null(i_27));
        t = set_config_0(t);
      }
    }
    t = n_18;
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_q_18;
    return(t);
  }
  t = ArgOption_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  t = SSL_string_to_int(not_null(m_27));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm s_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 (ATerm t)
      {
        ATerm u_27 = NULL;
        u_27 = t;
        p_27 :
        if(!(match_string(u_27, "-S")))
          {
            if(!(match_string(u_27, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_z_18;
        t = set_config_0(t);
        t = term_a_19;
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_b_19;
        return(t);
      }
      t = Option_3(t, x_2, d_3, e_3);
      ;
      LocalPopChoice(v_18);
    }
  else
    {
      t = s_18;
      {
        ATerm c_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_3 (ATerm t)
            {
              ATerm v_27 = NULL;
              v_27 = t;
              q_27 :
              if(!(match_string(v_27, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm k_3 (ATerm t)
            {
              ATerm y_27 = NULL;
              ATerm h_19;
              h_19 = t;
              {
                ATerm w_27 = NULL;
                ATerm x_27 = NULL;
                t = string_to_int_0(t);
                {
                  x_27 = t;
                  if(((w_27 != NULL) && (w_27 != x_27)))
                    _fail(x_27);
                  else
                    w_27 = x_27;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_18, not_null(w_27));
                  t = set_config_0(t);
                }
              }
              t = h_19;
              {
                ATerm z_27 = NULL;
                z_27 = t;
                if(((y_27 != NULL) && (y_27 != z_27)))
                  _fail(z_27);
                else
                  y_27 = z_27;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_27));
              }
              return(t);
            }
            ATerm l_3 (ATerm t)
            {
              t = term_i_19;
              return(t);
            }
            t = ArgOption_3(t, f_3, k_3, l_3);
            ;
            LocalPopChoice(g_19);
          }
        else
          {
            t = c_19;
            {
              ATerm p_3 (ATerm t)
              {
                ATerm a_28 = NULL;
                a_28 = t;
                t_27 :
                if(!(match_string(a_28, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_3 (ATerm t)
              {
                t = term_s_19;
                t = set_config_0(t);
                t = term_f_20;
                return(t);
              }
              ATerm v_3 (ATerm t)
              {
                t = term_g_20;
                return(t);
              }
              t = Option_3(t, p_3, q_3, v_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm l_28 = NULL;
    l_28 = t;
    i_28 :
    if(!(match_string(l_28, "-o")))
      {
        if(!(match_string(l_28, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    ATerm p_28 = NULL;
    ATerm r_20;
    r_20 = t;
    {
      ATerm m_28 = NULL;
      ATerm n_28 = NULL;
      n_28 = t;
      if(((m_28 != NULL) && (m_28 != n_28)))
        _fail(n_28);
      else
        m_28 = n_28;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_20, not_null(m_28));
        t = set_config_0(t);
      }
    }
    t = r_20;
    {
      ATerm q_28 = NULL;
      q_28 = t;
      if(((p_28 != NULL) && (p_28 != q_28)))
        _fail(q_28);
      else
        p_28 = q_28;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_28));
    }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_t_20;
    return(t);
  }
  t = ArgOption_3(t, w_3, y_3, z_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm a_4 (ATerm t)
        {
          ATerm u_28 = NULL;
          u_28 = t;
          t_28 :
          if(!(match_string(u_28, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_4 (ATerm t)
        {
          t = term_x_20;
          t = set_config_0(t);
          t = term_y_20;
          return(t);
        }
        ATerm d_4 (ATerm t)
        {
          t = term_a_21;
          return(t);
        }
        t = Option_3(t, a_4, b_4, d_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  d_29 = t;
  b_29 :
  if(match_string(d_29, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(d_29) == AT_LIST) && !(ATisEmpty(d_29))))
        {
          e_29 = ATgetFirst((ATermList) d_29);
          f_29 = (ATerm) ATgetNext((ATermList) d_29);
          c_29 :
          if(((ATgetType(f_29) == AT_LIST) && !(ATisEmpty(f_29))))
            {
              g_29 = ATgetFirst((ATermList) f_29);
              h_29 = (ATerm) ATgetNext((ATermList) f_29);
              {
                ATerm l_29 = NULL;
                ATerm b_21;
                b_21 = t;
                {
                  t = not_null(e_29);
                  t = j_0(t);
                }
                t = b_21;
                {
                  ATerm m_29 = NULL;
                  t = not_null(g_29);
                  {
                    t = k_0(t);
                    {
                      m_29 = t;
                      if(((l_29 != NULL) && (l_29 != m_29)))
                        _fail(m_29);
                      else
                        l_29 = m_29;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_29)), not_null(l_29));
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
  ATerm g_4 (ATerm t)
  {
    ATerm t_29 = NULL;
    t_29 = t;
    q_29 :
    if(!(match_string(t_29, "-i")))
      {
        if(!(match_string(t_29, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm w_29 = NULL;
    ATerm c_21;
    c_21 = t;
    {
      ATerm u_29 = NULL;
      ATerm v_29 = NULL;
      v_29 = t;
      if(((u_29 != NULL) && (u_29 != v_29)))
        _fail(v_29);
      else
        u_29 = v_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_21, not_null(u_29));
        t = set_config_0(t);
      }
    }
    t = c_21;
    {
      ATerm x_29 = NULL;
      x_29 = t;
      if(((w_29 != NULL) && (w_29 != x_29)))
        _fail(x_29);
      else
        w_29 = x_29;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_29));
    }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_e_21;
    return(t);
  }
  t = ArgOption_3(t, g_4, h_4, i_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATinsert(ATempty, term_j_21));
  {
    t = printnl_0(t);
    {
      t = term_r_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm b_30 = NULL;
  b_30 = t;
  t = SSL_TicksToSeconds(not_null(b_30));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
  g_30 = t;
  f_30 :
  if(match_cons(g_30, sym__2))
    {
      h_30 = ATgetArgument(g_30, 0);
      i_30 = ATgetArgument(g_30, 1);
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(h_30), not_null(i_30));
            ;
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            t = SSL_addr(not_null(h_30), not_null(i_30));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm j_80 (ATerm), ATerm k_80 (ATerm))
{
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_80(t);
      ;
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      {
        ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
        p_30 = t;
        o_30 :
        if(((ATgetType(p_30) == AT_LIST) && !(ATisEmpty(p_30))))
          {
            q_30 = ATgetFirst((ATermList) p_30);
            r_30 = (ATerm) ATgetNext((ATermList) p_30);
            {
              ATerm u_30 = NULL;
              ATerm v_30 = NULL;
              t = not_null(r_30);
              {
                t = foldr_2(t, j_80, k_80);
                {
                  v_30 = t;
                  if(((u_30 != NULL) && (u_30 != v_30)))
                    _fail(v_30);
                  else
                    u_30 = v_30;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_30), not_null(u_30));
                t = k_80(t);
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
ATerm crush_2 (ATerm t, ATerm h_79 (ATerm), ATerm i_79 (ATerm))
{
  ATerm g_31 = NULL;
  ATerm i_31 = NULL;
  g_31 = t;
  {
    ATerm l_31 = NULL;
    ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
    t = not_null(g_31);
    {
      l_31 = t;
      {
        t = SSL_explode_term(not_null(l_31));
        {
          n_31 = t;
          f_31 :
          if(match_cons(n_31, sym__2))
            {
              o_31 = ATgetArgument(n_31, 0);
              p_31 = ATgetArgument(n_31, 1);
              if(((i_31 != NULL) && (i_31 != p_31)))
                _fail(p_31);
              else
                i_31 = p_31;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_31);
      t = foldr_2(t, h_79, i_79);
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
    ATerm j_4 (ATerm t)
    {
      t = term_h_14;
      return(t);
    }
    t = crush_2(t, j_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  v_31 = t;
  u_31 :
  if(match_cons(v_31, sym__2))
    {
      w_31 = ATgetArgument(v_31, 0);
      x_31 = ATgetArgument(v_31, 1);
      {
        ATerm p_21;
        p_21 = t;
        {
          ATerm q_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(w_31), not_null(x_31));
              ;
              LocalPopChoice(r_21);
            }
          else
            {
              t = q_21;
              t = SSL_gtr(not_null(w_31), not_null(x_31));
            }
        }
        t = p_21;
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
  ATerm d_32 = NULL;
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
      e_32 = t;
      c_32 :
      if(match_cons(e_32, sym__2))
        {
          f_32 = ATgetArgument(e_32, 0);
          g_32 = ATgetArgument(e_32, 1);
          {
            if(((d_32 != NULL) && (d_32 != f_32)))
              _fail(f_32);
            else
              d_32 = f_32;
            if(((d_32 != NULL) && (d_32 != g_32)))
              _fail(g_32);
            else
              d_32 = g_32;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm q_87 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm u_21;
    u_21 = t;
    {
      ATerm j_32 = NULL;
      ATerm k_32 = NULL;
      t = term_y_18;
      {
        t = get_config_0(t);
        {
          k_32 = t;
          if(((j_32 != NULL) && (j_32 != k_32)))
            _fail(k_32);
          else
            j_32 = k_32;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_32), term_r_7);
        t = geq_0(t);
      }
    }
    t = u_21;
    t = q_87(t);
    return(t);
  }
  t = try_1(t, k_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    ATerm o_32 = NULL,q_32 = NULL;
    ATerm v_21;
    v_21 = t;
    {
      ATerm p_32 = NULL;
      t = run_time_0(t);
      {
        p_32 = t;
        if(((o_32 != NULL) && (o_32 != p_32)))
          _fail(p_32);
        else
          o_32 = p_32;
      }
    }
    t = v_21;
    {
      ATerm r_32 = NULL;
      t = term_w_21;
      {
        t = get_config_0(t);
        {
          r_32 = t;
          if(((q_32 != NULL) && (q_32 != r_32)))
            _fail(r_32);
          else
            q_32 = r_32;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_21), not_null(o_32)), term_x_21), not_null(q_32)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, m_4);
  {
    t = term_h_14;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_32 = NULL;
  y_32 = t;
  x_32 :
  if(match_cons(y_32, sym_Version_0))
    {
      ATerm a_33 = NULL,c_33 = NULL;
      ATerm z_21;
      z_21 = t;
      {
        ATerm b_33 = NULL;
        t = SSLgetAnnotations(not_null(y_32));
        {
          b_33 = t;
          if(((a_33 != NULL) && (a_33 != b_33)))
            _fail(b_33);
          else
            a_33 = b_33;
        }
      }
      t = z_21;
      {
        ATerm d_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(a_33));
        {
          d_33 = t;
          if(((c_33 != NULL) && (c_33 != d_33)))
            _fail(d_33);
          else
            c_33 = d_33;
        }
        t = not_null(c_33);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_85 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        {
          ATerm c_22 = t;
          int d_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(d_22);
            }
          else
            {
              t = c_22;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, n_4);
  t = w_85(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_33 = NULL;
  i_33 = t;
  t = SSL_table_create(not_null(i_33));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_33 = NULL;
  n_33 = t;
  {
    ATerm e_22;
    e_22 = t;
    {
      t = term_g_16;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_16, term_h_16, not_null(n_33));
          t = table_put_0(t);
        }
      }
    }
    t = e_22;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm r_33 = NULL;
  r_33 = t;
  t = SSL_table_destroy(not_null(r_33));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm v_33 = NULL;
  v_33 = t;
  t = SSL_exit(not_null(v_33));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
  z_33 = t;
  y_33 :
  if(((ATgetType(z_33) == AT_LIST) && ATisEmpty(z_33)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(z_33) == AT_LIST) && !(ATisEmpty(z_33))))
        {
          a_34 = ATgetFirst((ATermList) z_33);
          b_34 = (ATerm) ATgetNext((ATermList) z_33);
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
  ATerm f_22;
  f_22 = t;
  {
    ATerm e_34 = NULL;
    ATerm h_34 = NULL;
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        {
          ATerm f_34 = NULL;
          ATerm g_34 = NULL;
          g_34 = t;
          if(((f_34 != NULL) && (f_34 != g_34)))
            _fail(g_34);
          else
            f_34 = g_34;
          t = (ATerm) ATinsert(ATempty, not_null(f_34));
        }
      }
    {
      h_34 = t;
      if(((e_34 != NULL) && (e_34 != h_34)))
        _fail(h_34);
      else
        e_34 = h_34;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_9, not_null(e_34));
      t = printnl_0(t);
    }
  }
  t = f_22;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm u_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL;
  w_34 = t;
  t_34 :
  if(((ATgetType(w_34) == AT_LIST) && !(ATisEmpty(w_34))))
    {
      u_34 = ATgetFirst((ATermList) w_34);
      v_34 = (ATerm) ATgetNext((ATermList) w_34);
      {
        ATerm z_34 = NULL;
        t = not_null(v_34);
        {
          ATerm i_22;
          i_22 = t;
          {
            ATerm a_35 = NULL,c_35 = NULL,e_35 = NULL;
            ATerm j_22;
            j_22 = t;
            {
              ATerm b_35 = NULL;
              t = i_0(t);
              {
                b_35 = t;
                if(((a_35 != NULL) && (a_35 != b_35)))
                  _fail(b_35);
                else
                  a_35 = b_35;
              }
            }
            t = j_22;
            {
              ATerm d_35 = NULL;
              t = not_null(u_34);
              {
                t = g_0(t);
                {
                  d_35 = t;
                  if(((c_35 != NULL) && (c_35 != d_35)))
                    _fail(d_35);
                  else
                    c_35 = d_35;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_35)), not_null(c_35));
                {
                  e_35 = t;
                  if(((z_34 != NULL) && (z_34 != e_35)))
                    _fail(e_35);
                  else
                    z_34 = e_35;
                }
              }
            }
          }
          t = i_22;
          {
            ATerm p_4 (ATerm t)
            {
              t = not_null(z_34);
              return(t);
            }
            t = reverse_acc_2(t, g_0, p_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(w_34) == AT_LIST) && ATisEmpty(w_34)))
        {
          {
            t = term_i_7;
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
  ATerm q_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm t_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_64 (ATerm))
{
  ATerm p_35 = NULL,q_35 = NULL;
  p_35 = t;
  o_35 :
  if(match_cons(p_35, sym_Program_1))
    {
      q_35 = ATgetArgument(p_35, 0);
      {
        ATerm t_35 = NULL,v_35 = NULL;
        ATerm u_35 = NULL;
        t = SSLgetAnnotations(not_null(p_35));
        {
          u_35 = t;
          if(((t_35 != NULL) && (t_35 != u_35)))
            _fail(u_35);
          else
            t_35 = u_35;
        }
        {
          t = not_null(q_35);
          {
            ATerm z_35 = NULL;
            t = a_64(t);
            {
              v_35 = t;
              {
                ATerm a_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_35)), not_null(t_35));
                {
                  a_36 = t;
                  if(((z_35 != NULL) && (z_35 != a_36)))
                    _fail(a_36);
                  else
                    z_35 = a_36;
                }
                t = not_null(z_35);
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
  ATerm j_36 = NULL;
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_36 = NULL;
      t = term_w_21;
      {
        t = get_config_0(t);
        {
          k_36 = t;
          if(((j_36 != NULL) && (j_36 != k_36)))
            _fail(k_36);
          else
            j_36 = k_36;
        }
      }
      ;
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm r_4 (ATerm t)
        {
          ATerm s_4 (ATerm t)
          {
            ATerm l_36 = NULL;
            l_36 = t;
            if(((j_36 != NULL) && (j_36 != l_36)))
              _fail(l_36);
            else
              j_36 = l_36;
            return(t);
          }
          t = Program_1(t, s_4);
          return(t);
        }
        t = option_defined_1(t, r_4);
      }
    }
  {
    ATerm u_4 (ATerm t)
    {
      ATerm x_4 (ATerm t)
      {
        t = not_null(j_36);
        return(t);
      }
      t = short_description_1(t, x_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, u_4);
    {
      t = term_m_22;
      {
        t = echo_0(t);
        {
          t = term_p_22;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_5 (ATerm t)
                {
                  ATerm m_36 = NULL;
                  ATerm n_36 = NULL;
                  n_36 = t;
                  if(((m_36 != NULL) && (m_36 != n_36)))
                    _fail(n_36);
                  else
                    m_36 = n_36;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_36)), term_q_22);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_5);
                {
                  ATerm b_5 (ATerm t)
                  {
                    ATerm o_36 = NULL;
                    ATerm p_36 = NULL;
                    ATerm d_5 (ATerm t)
                    {
                      t = not_null(j_36);
                      return(t);
                    }
                    t = long_description_1(t, d_5);
                    {
                      p_36 = t;
                      if(((o_36 != NULL) && (o_36 != p_36)))
                        _fail(p_36);
                      else
                        o_36 = p_36;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(o_36)), term_l_7);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_5);
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
ATerm debug_0 (ATerm t)
{
  ATerm r_22;
  r_22 = t;
  {
    ATerm v_36 = NULL;
    ATerm w_36 = NULL;
    w_36 = t;
    if(((v_36 != NULL) && (v_36 != w_36)))
      _fail(w_36);
    else
      v_36 = w_36;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATinsert(ATempty, not_null(v_36)));
      t = printnl_0(t);
    }
  }
  t = r_22;
  return(t);
}
ATerm say_1 (ATerm t, ATerm u_84 (ATerm))
{
  ATerm s_22;
  s_22 = t;
  {
    t = u_84(t);
    t = debug_0(t);
  }
  t = s_22;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_64 (ATerm))
{
  ATerm d_37 = NULL,e_37 = NULL;
  d_37 = t;
  c_37 :
  if(match_cons(d_37, sym_Undefined_1))
    {
      e_37 = ATgetArgument(d_37, 0);
      {
        ATerm h_37 = NULL,j_37 = NULL;
        ATerm i_37 = NULL;
        t = SSLgetAnnotations(not_null(d_37));
        {
          i_37 = t;
          if(((h_37 != NULL) && (h_37 != i_37)))
            _fail(i_37);
          else
            h_37 = i_37;
        }
        {
          t = not_null(e_37);
          {
            ATerm l_37 = NULL;
            t = b_64(t);
            {
              j_37 = t;
              {
                ATerm m_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_37)), not_null(h_37));
                {
                  m_37 = t;
                  if(((l_37 != NULL) && (l_37 != m_37)))
                    _fail(m_37);
                  else
                    l_37 = m_37;
                }
                t = not_null(l_37);
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
ATerm fetch_1 (ATerm t, ATerm i_74 (ATerm))
{
  ATerm r_37 (ATerm t)
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_74, _id);
        ;
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        t = Cons_2(t, _id, r_37);
      }
    return(t);
  }
  t = r_37(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_88 (ATerm))
{
  t = fetch_1(t, t_88);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_37 = NULL;
  w_37 = t;
  v_37 :
  if(match_cons(w_37, sym_Help_0))
    {
      ATerm y_37 = NULL,a_38 = NULL;
      ATerm v_22;
      v_22 = t;
      {
        ATerm z_37 = NULL;
        t = SSLgetAnnotations(not_null(w_37));
        {
          z_37 = t;
          if(((y_37 != NULL) && (y_37 != z_37)))
            _fail(z_37);
          else
            y_37 = z_37;
        }
      }
      t = v_22;
      {
        ATerm b_38 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_37));
        {
          b_38 = t;
          if(((a_38 != NULL) && (a_38 != b_38)))
            _fail(b_38);
          else
            a_38 = b_38;
        }
        t = not_null(a_38);
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
  ATerm g_38 = NULL;
  g_38 = t;
  t = SSL_implode_string(not_null(g_38));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      {
        ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
        l_38 = t;
        k_38 :
        if(((ATgetType(l_38) == AT_LIST) && !(ATisEmpty(l_38))))
          {
            m_38 = ATgetFirst((ATermList) l_38);
            n_38 = (ATerm) ATgetNext((ATermList) l_38);
            {
              t = not_null(m_38);
              {
                ATerm e_5 (ATerm t)
                {
                  t = not_null(n_38);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_5);
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
  ATerm x_38 = NULL;
  ATerm z_38 = NULL;
  x_38 = t;
  {
    ATerm a_39 = NULL;
    ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
    t = not_null(x_38);
    {
      a_39 = t;
      {
        t = SSL_explode_term(not_null(a_39));
        {
          c_39 = t;
          v_38 :
          if(match_cons(c_39, sym__2))
            {
              d_39 = ATgetArgument(c_39, 0);
              e_39 = ATgetArgument(c_39, 1);
              w_38 :
              if(match_string(d_39, ""))
                {
                  if(((z_38 != NULL) && (z_38 != e_39)))
                    _fail(e_39);
                  else
                    z_38 = e_39;
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
      t = not_null(z_38);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_74 (ATerm))
{
  ATerm i_39 (ATerm t)
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, i_39);
        ;
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        {
          t = Nil_0(t);
          t = o_74(t);
        }
      }
    return(t);
  }
  t = i_39(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
  l_39 = t;
  k_39 :
  if(match_cons(l_39, sym__2))
    {
      m_39 = ATgetArgument(l_39, 0);
      n_39 = ATgetArgument(l_39, 1);
      {
        t = not_null(m_39);
        {
          ATerm f_5 (ATerm t)
          {
            t = not_null(n_39);
            return(t);
          }
          t = at_end_1(t, f_5);
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
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm s_39 = NULL;
  s_39 = t;
  t = SSL_explode_string(not_null(s_39));
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
ATerm printnl_0 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
  x_39 = t;
  w_39 :
  if(match_cons(x_39, sym__2))
    {
      y_39 = ATgetArgument(x_39, 0);
      z_39 = ATgetArgument(x_39, 1);
      {
        ATerm c_23;
        c_23 = t;
        t = SSL_printnl(not_null(y_39), not_null(z_39));
        t = c_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm t_84 (ATerm))
{
  ATerm d_23;
  d_23 = t;
  {
    ATerm f_40 = NULL,h_40 = NULL;
    ATerm e_23;
    e_23 = t;
    {
      ATerm g_40 = NULL;
      t = t_84(t);
      {
        g_40 = t;
        if(((f_40 != NULL) && (f_40 != g_40)))
          _fail(g_40);
        else
          f_40 = g_40;
      }
    }
    t = e_23;
    {
      ATerm i_40 = NULL;
      i_40 = t;
      if(((h_40 != NULL) && (h_40 != i_40)))
        _fail(i_40);
      else
        h_40 = i_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_40)), not_null(f_40)));
        t = printnl_0(t);
      }
    }
  }
  t = d_23;
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_73 (ATerm))
{
  ATerm l_40 (ATerm t)
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        t = Cons_2(t, z_73, l_40);
      }
    return(t);
  }
  t = l_40(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_40 = NULL;
  n_40 = t;
  t = SSL_is_string(not_null(n_40));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, g_5);
            ;
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            {
              ATerm w_40 = NULL,a_41 = NULL,b_41 = NULL;
              w_40 = t;
              v_40 :
              if(match_cons(w_40, sym_Path_1))
                {
                  a_41 = ATgetArgument(w_40, 0);
                  t = not_null(a_41);
                }
              else
                {
                  if(match_cons(w_40, sym_Var_1))
                    {
                      a_41 = ATgetArgument(w_40, 0);
                      {
                        t = not_null(a_41);
                        {
                          ATerm l_23 = t;
                          int m_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(m_23);
                            }
                          else
                            {
                              t = l_23;
                              {
                                ATerm i_5 (ATerm t)
                                {
                                  t = term_p_23;
                                  return(t);
                                }
                                t = debug_1(t, i_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(w_40, sym_Prefix_2))
                        {
                          a_41 = ATgetArgument(w_40, 0);
                          b_41 = ATgetArgument(w_40, 1);
                          {
                            ATerm g_41 = NULL,i_41 = NULL;
                            ATerm q_23;
                            q_23 = t;
                            {
                              ATerm h_41 = NULL;
                              t = not_null(a_41);
                              {
                                t = eval_config_0(t);
                                {
                                  h_41 = t;
                                  if(((g_41 != NULL) && (g_41 != h_41)))
                                    _fail(h_41);
                                  else
                                    g_41 = h_41;
                                }
                              }
                            }
                            t = q_23;
                            {
                              ATerm j_41 = NULL;
                              t = not_null(b_41);
                              {
                                t = eval_config_0(t);
                                {
                                  j_41 = t;
                                  if(((i_41 != NULL) && (i_41 != j_41)))
                                    _fail(j_41);
                                  else
                                    i_41 = j_41;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_41), not_null(i_41));
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
  ATerm r_41 = NULL;
  r_41 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_r_23, not_null(r_41));
    {
      t = table_get_0(t);
      {
        ATerm m_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm s_23;
            s_23 = t;
            {
              ATerm t_41 = NULL;
              ATerm u_41 = NULL;
              u_41 = t;
              if(((t_41 != NULL) && (t_41 != u_41)))
                _fail(u_41);
              else
                t_41 = u_41;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_r_23, not_null(r_41), not_null(t_41));
                t = table_put_0(t);
              }
            }
            t = s_23;
          }
          return(t);
        }
        t = try_1(t, m_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_66 (ATerm))
{
  ATerm t_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_66(t);
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = t_23;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
  z_41 = t;
  y_41 :
  if(match_cons(z_41, sym__2))
    {
      a_42 = ATgetArgument(z_41, 0);
      b_42 = ATgetArgument(z_41, 1);
      t = SSL_table_get(not_null(a_42), not_null(b_42));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL;
  i_42 = t;
  h_42 :
  if(match_cons(i_42, sym__3))
    {
      j_42 = ATgetArgument(i_42, 0);
      k_42 = ATgetArgument(i_42, 1);
      l_42 = ATgetArgument(i_42, 2);
      {
        ATerm y_23;
        y_23 = t;
        {
          ATerm p_42 = NULL;
          ATerm r_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_42), not_null(k_42));
          {
            ATerm z_23 = t;
            int a_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(a_24);
              }
            else
              {
                t = z_23;
                t = (ATerm) ATempty;
              }
            {
              r_42 = t;
              if(((p_42 != NULL) && (p_42 != r_42)))
                _fail(r_42);
              else
                p_42 = r_42;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_42), not_null(k_42), (ATerm) ATinsert(CheckATermList(not_null(p_42)), not_null(l_42)));
            t = table_put_0(t);
          }
        }
        t = y_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm y_89 (ATerm))
{
  ATerm x_42 = NULL;
  ATerm y_42 = NULL;
  t = term_i_7;
  {
    t = y_89(t);
    {
      y_42 = t;
      if(((x_42 != NULL) && (x_42 != y_42)))
        _fail(y_42);
      else
        x_42 = y_42;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_n_22, term_o_22, not_null(x_42));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
  e_43 = t;
  d_43 :
  if(match_string(e_43, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(e_43) == AT_LIST) && !(ATisEmpty(e_43))))
        {
          f_43 = ATgetFirst((ATermList) e_43);
          g_43 = (ATerm) ATgetNext((ATermList) e_43);
          {
            ATerm j_43 = NULL;
            ATerm d_24;
            d_24 = t;
            {
              t = not_null(f_43);
              t = a_0(t);
            }
            t = d_24;
            {
              ATerm k_43 = NULL;
              t = term_i_7;
              {
                t = b_0(t);
                {
                  k_43 = t;
                  if(((j_43 != NULL) && (j_43 != k_43)))
                    _fail(k_43);
                  else
                    j_43 = k_43;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_43)), not_null(j_43));
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
  ATerm n_5 (ATerm t)
  {
    ATerm p_43 = NULL;
    p_43 = t;
    o_43 :
    if(!(match_string(p_43, "--help")))
      {
        if(!(match_string(p_43, "-h")))
          {
            if(!(match_string(p_43, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_f_24;
    {
      t = set_config_0(t);
      t = term_h_24;
    }
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    t = term_j_24;
    return(t);
  }
  t = Option_3(t, n_5, r_5, x_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
  s_43 = t;
  r_43 :
  if(((ATgetType(s_43) == AT_LIST) && !(ATisEmpty(s_43))))
    {
      t_43 = ATgetFirst((ATermList) s_43);
      u_43 = (ATerm) ATgetNext((ATermList) s_43);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_43)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_43)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_58 (ATerm), ATerm f_58 (ATerm))
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
  h_44 = t;
  g_44 :
  if(((ATgetType(h_44) == AT_LIST) && !(ATisEmpty(h_44))))
    {
      i_44 = ATgetFirst((ATermList) h_44);
      j_44 = (ATerm) ATgetNext((ATermList) h_44);
      {
        ATerm n_44 = NULL,p_44 = NULL;
        ATerm o_44 = NULL;
        t = SSLgetAnnotations(not_null(h_44));
        {
          o_44 = t;
          if(((n_44 != NULL) && (n_44 != o_44)))
            _fail(o_44);
          else
            n_44 = o_44;
        }
        {
          t = not_null(i_44);
          {
            ATerm r_44 = NULL;
            t = e_58(t);
            {
              p_44 = t;
              {
                t = not_null(j_44);
                {
                  ATerm t_44 = NULL;
                  t = f_58(t);
                  {
                    r_44 = t;
                    {
                      ATerm u_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_44)), not_null(p_44)), not_null(n_44));
                      {
                        u_44 = t;
                        if(((t_44 != NULL) && (t_44 != u_44)))
                          _fail(u_44);
                        else
                          t_44 = u_44;
                      }
                      t = not_null(t_44);
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
  ATerm f_45 = NULL;
  f_45 = t;
  e_45 :
  if(((ATgetType(f_45) == AT_LIST) && ATisEmpty(f_45)))
    {
      {
        ATerm j_45 = NULL,l_45 = NULL;
        ATerm m_24;
        m_24 = t;
        {
          ATerm k_45 = NULL;
          t = SSLgetAnnotations(not_null(f_45));
          {
            k_45 = t;
            if(((j_45 != NULL) && (j_45 != k_45)))
              _fail(k_45);
            else
              j_45 = k_45;
          }
        }
        t = m_24;
        {
          ATerm m_45 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(j_45));
          {
            m_45 = t;
            if(((l_45 != NULL) && (l_45 != m_45)))
              _fail(m_45);
            else
              l_45 = m_45;
          }
          t = not_null(l_45);
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
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL;
  u_45 = t;
  s_45 :
  if(match_cons(u_45, sym__2))
    {
      v_45 = ATgetArgument(u_45, 0);
      w_45 = ATgetArgument(u_45, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_r_23, not_null(v_45), not_null(w_45));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_89 (ATerm))
{
  ATerm o_24;
  o_24 = t;
  {
    ATerm h_6 (ATerm t)
    {
      t = term_p_24;
      t = w_89(t);
      return(t);
    }
    t = try_1(t, h_6);
  }
  t = o_24;
  {
    ATerm n_6 (ATerm t)
    {
      ATerm e_46 = NULL;
      ATerm q_24;
      q_24 = t;
      {
        ATerm c_46 = NULL;
        ATerm d_46 = NULL;
        d_46 = t;
        if(((c_46 != NULL) && (c_46 != d_46)))
          _fail(d_46);
        else
          c_46 = d_46;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_21, not_null(c_46));
          t = set_config_0(t);
        }
      }
      t = q_24;
      {
        ATerm f_46 = NULL;
        f_46 = t;
        if(((e_46 != NULL) && (e_46 != f_46)))
          _fail(f_46);
        else
          e_46 = f_46;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_46));
      }
      return(t);
    }
    ATerm o_6 (ATerm t)
    {
      ATerm r_24 = t;
      int s_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_24 = t;
          int u_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(u_24);
            }
          else
            {
              t = t_24;
              {
                t = w_89(t);
                t = Cons_2(t, _id, o_6);
              }
            }
          ;
          LocalPopChoice(s_24);
        }
      else
        {
          t = r_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_6, o_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL;
  ATerm v_24;
  v_24 = t;
  {
    ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
    o_46 = t;
    k_46 :
    if(match_cons(o_46, sym__3))
      {
        p_46 = ATgetArgument(o_46, 0);
        q_46 = ATgetArgument(o_46, 1);
        r_46 = ATgetArgument(o_46, 2);
        {
          if(((l_46 != NULL) && (l_46 != p_46)))
            _fail(p_46);
          else
            l_46 = p_46;
          {
            if(((m_46 != NULL) && (m_46 != q_46)))
              _fail(q_46);
            else
              m_46 = q_46;
            {
              if(((n_46 != NULL) && (n_46 != r_46)))
                _fail(r_46);
              else
                n_46 = r_46;
              t = SSL_table_put(not_null(l_46), not_null(m_46), not_null(n_46));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = v_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_89 (ATerm))
{
  ATerm u_46 = NULL;
  ATerm w_24;
  w_24 = t;
  {
    t = term_b_25;
    t = table_put_0(t);
  }
  t = w_24;
  {
    ATerm u_6 (ATerm t)
    {
      ATerm c_25 = t;
      int d_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_89(t);
          ;
          LocalPopChoice(d_25);
        }
      else
        {
          t = c_25;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_6);
    {
      ATerm v_6 (ATerm t)
      {
        ATerm h_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_25;
            m_25 = t;
            {
              ATerm n_25 = t;
              int o_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_e_24;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(o_25);
                }
              else
                {
                  t = n_25;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = m_25;
            {
              t = system_usage_0(t);
              {
                t = term_h_14;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(j_25);
          }
        else
          {
            t = h_25;
            {
              ATerm z_6 (ATerm t)
              {
                ATerm a_7 (ATerm t)
                {
                  ATerm v_46 = NULL;
                  v_46 = t;
                  if(((u_46 != NULL) && (u_46 != v_46)))
                    _fail(v_46);
                  else
                    u_46 = v_46;
                  return(t);
                }
                t = Undefined_1(t, a_7);
                return(t);
              }
              t = option_defined_1(t, z_6);
              {
                ATerm b_7 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_46)), term_p_25);
                  return(t);
                }
                t = say_1(t, b_7);
                {
                  t = system_usage_0(t);
                  {
                    t = term_r_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, v_6);
      {
        ATerm q_25;
        q_25 = t;
        {
          t = term_n_22;
          t = table_destroy_0(t);
        }
        t = q_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm f_86 (ATerm))
{
  t = parse_options_1(t, c_86);
  {
    t = store_options_0(t);
    {
      t = e_86(t);
      {
        ATerm r_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_86);
            ;
            LocalPopChoice(s_25);
          }
        else
          {
            t = r_25;
            {
              ATerm z_25 = t;
              int a_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_86(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(a_26);
                }
              else
                {
                  t = z_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrapNoOutput_3 (ATerm t, ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm b_87 (ATerm))
{
  ATerm c_7 (ATerm t)
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_87(t);
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    t = input_file_0(t);
    t = apply_strategy_1(t, z_86);
    return(t);
  }
  t = option_wrap_4(t, c_7, b_87, _id, e_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm f_7 (ATerm t)
  {
    t = _2(t, _id, ldiff_0);
    return(t);
  }
  t = iowrapNoOutput_3(t, f_7, ops_0, my_usage_0);
  return(t);
}
