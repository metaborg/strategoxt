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
Symbol sym_Call_2;
Symbol sym_SVar_1;
Symbol sym_SDef_3;
Symbol sym_Build_1;
Symbol sym_Str_1;
Symbol sym_ObsoleteWarning_1;
Symbol sym_DebugWarning_1;
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
Symbol sym_Pipe_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_W__OK_0;
Symbol sym_X__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
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
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_ObsoleteWarning_1 = ATmakeSymbol("ObsoleteWarning", 1, ATfalse);
  ATprotectSymbol(sym_ObsoleteWarning_1);
  sym_DebugWarning_1 = ATmakeSymbol("DebugWarning", 1, ATfalse);
  ATprotectSymbol(sym_DebugWarning_1);
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
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
  ATprotectSymbol(sym_W__OK_0);
  sym_X__OK_0 = ATmakeSymbol("X_OK", 0, ATfalse);
  ATprotectSymbol(sym_X__OK_0);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  init_constant_terms();
}
ATerm term_o_21;
ATerm term_f_21;
ATerm term_k_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_v_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_m_17;
ATerm term_j_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_x_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_v_11;
ATerm term_w_10;
ATerm term_s_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_z_8;
ATerm term_j_7;
ATerm term_g_7;
ATerm term_e_7;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_i_6;
ATerm term_d_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
void init_constant_terms (void)
{
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: possibly missing build operator in debug strategy in \"", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\"\n", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("  debug(", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol(")\n", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: obsolete strategy or rule invoked from \"", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\":\n  ", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol(": \"", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" warning(s)\n", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING incorrect parameter passed to -W switch: ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("debug-arguments", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete-strategy-calls", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym__2, term_c_14, term_z_5);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__2, term_z_11, term_i_6);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_6);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_z_5);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym__2, term_p_16, term_z_5);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_s_19, term_t_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__2, term_v_18, term_z_5);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__3, term_s_19, term_t_19, (ATerm) ATempty);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm extend_config_0 (ATerm);
ATerm stratego_warnings_options_0 (ATerm);
ATerm print_0 (ATerm);
ATerm length_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm quote_chars_0 (ATerm);
ATerm double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm j_78 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm mk_warning_0 (ATerm);
ATerm print_warnings_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm f_55 (ATerm));
ATerm Call_2 (ATerm, ATerm d_55 (ATerm), ATerm e_55 (ATerm));
ATerm caller_1 (ATerm, ATerm l_61 (ATerm));
ATerm get_strategy_callers_0 (ATerm);
ATerm map_apply_1 (ATerm, ATerm n_61 (ATerm));
ATerm strategy_invokation_warning_1 (ATerm, ATerm j_61 (ATerm));
ATerm obsolete_def_0 (ATerm);
ATerm Str_1 (ATerm, ATerm k_55 (ATerm));
ATerm oncetd_1 (ATerm, ATerm n_64 (ATerm));
ATerm Build_1 (ATerm, ATerm j_55 (ATerm));
ATerm SDef_3 (ATerm, ATerm g_55 (ATerm), ATerm h_55 (ATerm), ATerm i_55 (ATerm));
ATerm sdef_with_property_1 (ATerm, ATerm m_61 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm d_73 (ATerm), ATerm e_73 (ATerm));
ATerm union_1 (ATerm, ATerm z_72 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm));
ATerm crush_3 (ATerm, ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm));
ATerm collect_om_1 (ATerm, ATerm v_73 (ATerm));
ATerm collect_1 (ATerm, ATerm w_73 (ATerm));
ATerm strategy_argument_warning_1 (ATerm, ATerm k_61 (ATerm));
ATerm debug_with_incorrect_string_0 (ATerm);
ATerm Warning_1 (ATerm, ATerm i_61 (ATerm));
ATerm filter_1 (ATerm, ATerm a_76 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm l_69 (ATerm));
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm h_70 (ATerm));
ATerm uniq_0 (ATerm);
ATerm Stratego_warnings_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm p_69 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm l_82 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm h_81 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm j_84 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_80 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm _2 (ATerm, ATerm s_53 (ATerm), ATerm t_53 (ATerm));
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_76 (ATerm), ATerm n_76 (ATerm));
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
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm x_74 (ATerm), ATerm y_74 (ATerm));
ATerm crush_2 (ATerm, ATerm q_78 (ATerm), ATerm r_78 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_82 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_85 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_87 (ATerm));
ATerm map_1 (ATerm, ATerm a_69 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_87 (ATerm));
ATerm Program_1 (ATerm, ATerm c_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm d_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm j_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm h_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_61 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_55 (ATerm), ATerm c_55 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_87 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm m_85 (ATerm));
ATerm iowrap_4 (ATerm, ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm));
ATerm iowrap_3 (ATerm, ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm u_84 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_84 (ATerm), ATerm r_84 (ATerm));
ATerm stratego_warnings_0 (ATerm);
ATerm main_0 (ATerm);
ATerm extend_config_0 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,x_2 = NULL;
  l_2 = t;
  k_2 :
  if(match_cons(l_2, sym__2))
    {
      m_2 = ATgetArgument(l_2, 0);
      x_2 = ATgetArgument(l_2, 1);
      {
        ATerm d_3 = NULL;
        ATerm e_3 = NULL,g_3 = NULL;
        ATerm f_3 = NULL;
        t = not_null(m_2);
        {
          ATerm v_5 = t;
          int w_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(w_5);
            }
          else
            {
              t = v_5;
              t = (ATerm) ATempty;
            }
          {
            f_3 = t;
            if(((e_3 != NULL) && (e_3 != f_3)))
              _fail(f_3);
            else
              e_3 = f_3;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_2), not_null(e_3));
          {
            t = conc_0(t);
            {
              g_3 = t;
              if(((d_3 != NULL) && (d_3 != g_3)))
                _fail(g_3);
              else
                d_3 = g_3;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_5, not_null(m_2), not_null(d_3));
          t = table_put_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stratego_warnings_options_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm m_3 = NULL;
    m_3 = t;
    k_3 :
    if(!(match_string(m_3, "--warning")))
      {
        if(!(match_string(m_3, "-W")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    ATerm n_3 = NULL;
    ATerm o_3 = NULL;
    o_3 = t;
    if(((n_3 != NULL) && (n_3 != o_3)))
      _fail(o_3);
    else
      n_3 = o_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATempty, not_null(n_3)));
      t = extend_config_0(t);
    }
    t = term_z_5;
    return(t);
  }
  ATerm f_0 (ATerm t)
  {
    t = term_d_6;
    return(t);
  }
  t = ArgOption_3(t, c_0, e_0, f_0);
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
  s_3 = t;
  r_3 :
  if(match_cons(s_3, sym__2))
    {
      t_3 = ATgetArgument(s_3, 0);
      u_3 = ATgetArgument(s_3, 1);
      {
        ATerm e_6;
        e_6 = t;
        t = SSL_print(not_null(t_3), not_null(u_3));
        t = e_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    t = term_i_6;
    return(t);
  }
  ATerm m_0 (ATerm t)
  {
    t = term_l_6;
    return(t);
  }
  t = foldr_3(t, h_0, add_0, m_0);
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
ATerm quote_chars_0 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL;
  a_4 = t;
  z_3 :
  if(match_cons(a_4, sym__2))
    {
      b_4 = ATgetArgument(a_4, 0);
      c_4 = ATgetArgument(a_4, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_4)), not_null(b_4)), (ATerm) ATinsert(ATempty, not_null(b_4)));
        t = conc_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm double_quote_chars_0 (ATerm t)
{
  ATerm h_4 = NULL;
  ATerm i_4 = NULL;
  i_4 = t;
  if(((h_4 != NULL) && (h_4 != i_4)))
    _fail(i_4);
  else
    h_4 = i_4;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_6, not_null(h_4));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm j_78 (ATerm))
{
  t = explode_string_0(t);
  {
    t = j_78(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, double_quote_chars_0);
  return(t);
}
ATerm mk_warning_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
  t_4 = t;
  p_4 :
  if(match_cons(t_4, sym__2))
    {
      u_4 = ATgetArgument(t_4, 0);
      v_4 = ATgetArgument(t_4, 1);
      q_4 :
      if(match_cons(v_4, sym_DebugWarning_1))
        {
          s_4 = ATgetArgument(v_4, 0);
          {
            ATerm a_5 = NULL;
            ATerm b_5 = NULL,d_5 = NULL;
            ATerm c_5 = NULL;
            t = not_null(s_4);
            {
              t = double_quote_0(t);
              {
                c_5 = t;
                if(((b_5 != NULL) && (b_5 != c_5)))
                  _fail(c_5);
                else
                  b_5 = c_5;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_6), not_null(b_5)), term_p_6), term_o_6), not_null(u_4)), term_n_6);
              {
                t = concat_strings_0(t);
                {
                  d_5 = t;
                  if(((a_5 != NULL) && (a_5 != d_5)))
                    _fail(d_5);
                  else
                    a_5 = d_5;
                }
              }
            }
            t = not_null(a_5);
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(t_4, sym__3))
        {
          u_4 = ATgetArgument(t_4, 0);
          v_4 = ATgetArgument(t_4, 1);
          w_4 = ATgetArgument(t_4, 2);
          r_4 :
          if(match_cons(w_4, sym_ObsoleteWarning_1))
            {
              x_4 = ATgetArgument(w_4, 0);
              {
                ATerm h_5 = NULL;
                ATerm i_5 = NULL;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_6), not_null(x_4)), term_t_6), not_null(v_4)), term_s_6), not_null(u_4)), term_r_6);
                {
                  t = concat_strings_0(t);
                  {
                    i_5 = t;
                    if(((h_5 != NULL) && (h_5 != i_5)))
                      _fail(i_5);
                    else
                      h_5 = i_5;
                  }
                }
                t = not_null(h_5);
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
ATerm print_warnings_0 (ATerm t)
{
  ATerm q_5 = NULL;
  ATerm y_6 = t;
  int z_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(z_6);
    }
  else
    {
      t = y_6;
      {
        ATerm s_5 = NULL;
        t = map_1(t, mk_warning_0);
        {
          ATerm a_7;
          a_7 = t;
          {
            ATerm r_5 = NULL;
            t = length_0(t);
            {
              r_5 = t;
              if(((q_5 != NULL) && (q_5 != r_5)))
                _fail(r_5);
              else
                q_5 = r_5;
            }
          }
          t = a_7;
          {
            ATerm t_5 = NULL;
            t_5 = t;
            if(((s_5 != NULL) && (s_5 != t_5)))
              _fail(t_5);
            else
              s_5 = t_5;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_e_7, not_null(s_5));
              {
                t = print_0(t);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_7), not_null(q_5)), term_g_7));
                  t = print_0(t);
                }
              }
            }
          }
        }
      }
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm f_55 (ATerm))
{
  ATerm b_6 = NULL,c_6 = NULL;
  b_6 = t;
  a_6 :
  if(match_cons(b_6, sym_SVar_1))
    {
      c_6 = ATgetArgument(b_6, 0);
      {
        ATerm f_6 = NULL,h_6 = NULL;
        ATerm g_6 = NULL;
        t = SSLgetAnnotations(not_null(b_6));
        {
          g_6 = t;
          if(((f_6 != NULL) && (f_6 != g_6)))
            _fail(g_6);
          else
            f_6 = g_6;
        }
        {
          t = not_null(c_6);
          {
            ATerm j_6 = NULL;
            t = f_55(t);
            {
              h_6 = t;
              {
                ATerm k_6 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(h_6)), not_null(f_6));
                {
                  k_6 = t;
                  if(((j_6 != NULL) && (j_6 != k_6)))
                    _fail(k_6);
                  else
                    j_6 = k_6;
                }
                t = not_null(j_6);
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
ATerm Call_2 (ATerm t, ATerm d_55 (ATerm), ATerm e_55 (ATerm))
{
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
  v_6 = t;
  u_6 :
  if(match_cons(v_6, sym_Call_2))
    {
      w_6 = ATgetArgument(v_6, 0);
      x_6 = ATgetArgument(v_6, 1);
      {
        ATerm b_7 = NULL,d_7 = NULL;
        ATerm c_7 = NULL;
        t = SSLgetAnnotations(not_null(v_6));
        {
          c_7 = t;
          if(((b_7 != NULL) && (b_7 != c_7)))
            _fail(c_7);
          else
            b_7 = c_7;
        }
        {
          t = not_null(w_6);
          {
            ATerm f_7 = NULL;
            t = d_55(t);
            {
              d_7 = t;
              {
                t = not_null(x_6);
                {
                  ATerm h_7 = NULL;
                  t = e_55(t);
                  {
                    f_7 = t;
                    {
                      ATerm i_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(d_7), not_null(f_7)), not_null(b_7));
                      {
                        i_7 = t;
                        if(((h_7 != NULL) && (h_7 != i_7)))
                          _fail(i_7);
                        else
                          h_7 = i_7;
                      }
                      t = not_null(h_7);
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
ATerm caller_1 (ATerm t, ATerm l_61 (ATerm))
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL;
  s_7 = t;
  r_7 :
  if(match_cons(s_7, sym_SDef_3))
    {
      t_7 = ATgetArgument(s_7, 0);
      u_7 = ATgetArgument(s_7, 1);
      v_7 = ATgetArgument(s_7, 2);
      {
        ATerm y_7 = NULL;
        t = l_61(t);
        {
          y_7 = t;
          {
            t = not_null(v_7);
            {
              ATerm n_0 (ATerm t)
              {
                ATerm o_0 (ATerm t)
                {
                  ATerm p_0 (ATerm t)
                  {
                    ATerm a_8 = NULL;
                    a_8 = t;
                    if(((y_7 != NULL) && (y_7 != a_8)))
                      _fail(a_8);
                    else
                      y_7 = a_8;
                    return(t);
                  }
                  t = SVar_1(t, p_0);
                  return(t);
                }
                t = Call_2(t, o_0, _id);
                t = not_null(y_7);
                return(t);
              }
              t = collect_1(t, n_0);
              {
                ATerm k_7 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_7;
                  }
                t = not_null(t_7);
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
ATerm get_strategy_callers_0 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
  k_8 = t;
  i_8 :
  if(match_cons(k_8, sym__2))
    {
      l_8 = ATgetArgument(k_8, 0);
      m_8 = ATgetArgument(k_8, 1);
      j_8 :
      if(match_cons(m_8, sym__2))
        {
          n_8 = ATgetArgument(m_8, 0);
          o_8 = ATgetArgument(m_8, 1);
          {
            ATerm s_8 = NULL;
            ATerm w_8 = NULL;
            t = not_null(l_8);
            {
              ATerm q_0 (ATerm t)
              {
                ATerm u_8 = NULL;
                ATerm r_0 (ATerm t)
                {
                  t = not_null(n_8);
                  return(t);
                }
                t = caller_1(t, r_0);
                {
                  ATerm l_7 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm t_8 = NULL;
                      t_8 = t;
                      if(((n_8 != NULL) && (n_8 != t_8)))
                        _fail(t_8);
                      else
                        n_8 = t_8;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = l_7;
                    }
                  {
                    ATerm v_8 = NULL;
                    v_8 = t;
                    if(((u_8 != NULL) && (u_8 != v_8)))
                      _fail(v_8);
                    else
                      u_8 = v_8;
                    t = (ATerm) ATmakeAppl(sym__3, not_null(u_8), not_null(n_8), not_null(o_8));
                  }
                }
                return(t);
              }
              t = collect_1(t, q_0);
              {
                w_8 = t;
                if(((s_8 != NULL) && (s_8 != w_8)))
                  _fail(w_8);
                else
                  s_8 = w_8;
              }
            }
            t = not_null(s_8);
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
ATerm map_apply_1 (ATerm t, ATerm n_61 (ATerm))
{
  ATerm p_9 (ATerm t)
  {
    ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
    ATerm m_7 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2(t, _id, Nil_0);
        t = Fst_0(t);
        ;
        LocalPopChoice(n_7);
      }
    else
      {
        t = m_7;
        {
          ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL;
          i_9 = t;
          d_9 :
          if(match_cons(i_9, sym__2))
            {
              j_9 = ATgetArgument(i_9, 0);
              k_9 = ATgetArgument(i_9, 1);
              e_9 :
              if(((ATgetType(k_9) == AT_LIST) && !(ATisEmpty(k_9))))
                {
                  l_9 = ATgetFirst((ATermList) k_9);
                  m_9 = (ATerm) ATgetNext((ATermList) k_9);
                  {
                    ATerm n_9 = NULL;
                    if(((h_9 != NULL) && (h_9 != j_9)))
                      _fail(j_9);
                    else
                      h_9 = j_9;
                    {
                      if(((f_9 != NULL) && (f_9 != l_9)))
                        _fail(l_9);
                      else
                        f_9 = l_9;
                      {
                        if(((g_9 != NULL) && (g_9 != m_9)))
                          _fail(m_9);
                        else
                          g_9 = m_9;
                        {
                          ATerm o_9 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_9), not_null(f_9));
                          {
                            t = n_61(t);
                            {
                              o_9 = t;
                              if(((n_9 != NULL) && (n_9 != o_9)))
                                _fail(o_9);
                              else
                                n_9 = o_9;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(n_9), not_null(g_9));
                            t = p_9(t);
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
            }
          else
            {
              _fail(t);
            }
        }
      }
    return(t);
  }
  t = p_9(t);
  return(t);
}
ATerm strategy_invokation_warning_1 (ATerm t, ATerm j_61 (ATerm))
{
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_0 (ATerm t)
      {
        t = collect_1(t, j_61);
        {
          t = concat_0(t);
          {
            ATerm q_7 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_7;
              }
          }
        }
        return(t);
      }
      t = split_2(t, _id, s_0);
      t = map_apply_1(t, get_strategy_callers_0);
      ;
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm obsolete_def_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
      a_10 = t;
      t_9 :
      if(match_cons(a_10, sym_Call_2))
        {
          b_10 = ATgetArgument(a_10, 0);
          d_10 = ATgetArgument(a_10, 1);
          u_9 :
          if(match_cons(b_10, sym_SVar_1))
            {
              c_10 = ATgetArgument(b_10, 0);
              v_9 :
              if(match_string(c_10, "obsolete"))
                {
                  w_9 :
                  if(((ATgetType(d_10) == AT_LIST) && !(ATisEmpty(d_10))))
                    {
                      e_10 = ATgetFirst((ATermList) d_10);
                      h_10 = (ATerm) ATgetNext((ATermList) d_10);
                      x_9 :
                      if(match_cons(e_10, sym_Build_1))
                        {
                          f_10 = ATgetArgument(e_10, 0);
                          y_9 :
                          if(match_cons(f_10, sym_Str_1))
                            {
                              g_10 = ATgetArgument(f_10, 0);
                              z_9 :
                              if(((ATgetType(h_10) == AT_LIST) && ATisEmpty(h_10)))
                                {
                                  t = (ATerm) ATmakeAppl(sym_ObsoleteWarning_1, not_null(g_10));
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
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = sdef_with_property_1(t, u_0);
    return(t);
  }
  t = strategy_invokation_warning_1(t, t_0);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm k_55 (ATerm))
{
  ATerm p_10 = NULL,q_10 = NULL;
  p_10 = t;
  o_10 :
  if(match_cons(p_10, sym_Str_1))
    {
      q_10 = ATgetArgument(p_10, 0);
      {
        ATerm t_10 = NULL,v_10 = NULL;
        ATerm u_10 = NULL;
        t = SSLgetAnnotations(not_null(p_10));
        {
          u_10 = t;
          if(((t_10 != NULL) && (t_10 != u_10)))
            _fail(u_10);
          else
            t_10 = u_10;
        }
        {
          t = not_null(q_10);
          {
            ATerm x_10 = NULL;
            t = k_55(t);
            {
              v_10 = t;
              {
                ATerm y_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(v_10)), not_null(t_10));
                {
                  y_10 = t;
                  if(((x_10 != NULL) && (x_10 != y_10)))
                    _fail(y_10);
                  else
                    x_10 = y_10;
                }
                t = not_null(x_10);
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
ATerm oncetd_1 (ATerm t, ATerm n_64 (ATerm))
{
  ATerm d_11 (ATerm t)
  {
    ATerm w_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_64(t);
        ;
        LocalPopChoice(x_7);
      }
    else
      {
        t = w_7;
        t = _one(t, d_11);
      }
    return(t);
  }
  t = d_11(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm j_55 (ATerm))
{
  ATerm j_11 = NULL,k_11 = NULL;
  j_11 = t;
  i_11 :
  if(match_cons(j_11, sym_Build_1))
    {
      k_11 = ATgetArgument(j_11, 0);
      {
        ATerm n_11 = NULL,p_11 = NULL;
        ATerm o_11 = NULL;
        t = SSLgetAnnotations(not_null(j_11));
        {
          o_11 = t;
          if(((n_11 != NULL) && (n_11 != o_11)))
            _fail(o_11);
          else
            n_11 = o_11;
        }
        {
          t = not_null(k_11);
          {
            ATerm r_11 = NULL;
            t = j_55(t);
            {
              p_11 = t;
              {
                ATerm s_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(p_11)), not_null(n_11));
                {
                  s_11 = t;
                  if(((r_11 != NULL) && (r_11 != s_11)))
                    _fail(s_11);
                  else
                    r_11 = s_11;
                }
                t = not_null(r_11);
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
ATerm SDef_3 (ATerm t, ATerm g_55 (ATerm), ATerm h_55 (ATerm), ATerm i_55 (ATerm))
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym_SDef_3))
    {
      f_12 = ATgetArgument(e_12, 0);
      g_12 = ATgetArgument(e_12, 1);
      h_12 = ATgetArgument(e_12, 2);
      {
        ATerm m_12 = NULL,o_12 = NULL;
        ATerm n_12 = NULL;
        t = SSLgetAnnotations(not_null(e_12));
        {
          n_12 = t;
          if(((m_12 != NULL) && (m_12 != n_12)))
            _fail(n_12);
          else
            m_12 = n_12;
        }
        {
          t = not_null(f_12);
          {
            ATerm q_12 = NULL;
            t = g_55(t);
            {
              o_12 = t;
              {
                t = not_null(g_12);
                {
                  ATerm s_12 = NULL;
                  t = h_55(t);
                  {
                    q_12 = t;
                    {
                      t = not_null(h_12);
                      {
                        ATerm u_12 = NULL;
                        t = i_55(t);
                        {
                          s_12 = t;
                          {
                            ATerm v_12 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(o_12), not_null(q_12), not_null(s_12)), not_null(m_12));
                            {
                              v_12 = t;
                              if(((u_12 != NULL) && (u_12 != v_12)))
                                _fail(v_12);
                              else
                                u_12 = v_12;
                            }
                            t = not_null(u_12);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sdef_with_property_1 (ATerm t, ATerm m_61 (ATerm))
{
  ATerm f_13 = NULL,g_13 = NULL;
  ATerm v_0 (ATerm t)
  {
    ATerm h_13 = NULL;
    h_13 = t;
    if(((g_13 != NULL) && (g_13 != h_13)))
      _fail(h_13);
    else
      g_13 = h_13;
    return(t);
  }
  ATerm w_0 (ATerm t)
  {
    ATerm i_13 = NULL;
    i_13 = t;
    if(((f_13 != NULL) && (f_13 != i_13)))
      _fail(i_13);
    else
      f_13 = i_13;
    return(t);
  }
  t = SDef_3(t, v_0, _id, w_0);
  {
    t = not_null(f_13);
    {
      t = collect_1(t, m_61);
      {
        ATerm z_7 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_7;
          }
        {
          ATerm x_0 (ATerm t)
          {
            ATerm j_13 = NULL;
            j_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_13), not_null(j_13));
            return(t);
          }
          t = map_1(t, x_0);
        }
      }
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL;
  q_13 = t;
  p_13 :
  if(match_cons(q_13, sym__2))
    {
      r_13 = ATgetArgument(q_13, 0);
      s_13 = ATgetArgument(q_13, 1);
      if(((r_13 != NULL) && (r_13 != s_13)))
        _fail(s_13);
      else
        r_13 = s_13;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm d_73 (ATerm), ATerm e_73 (ATerm))
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
  y_13 = t;
  x_13 :
  if(((ATgetType(y_13) == AT_LIST) && !(ATisEmpty(y_13))))
    {
      z_13 = ATgetFirst((ATermList) y_13);
      a_14 = (ATerm) ATgetNext((ATermList) y_13);
      {
        t = e_73(t);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm d_14 = NULL;
            d_14 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_13), not_null(d_14));
              t = d_73(t);
            }
            return(t);
          }
          t = fetch_1(t, y_0);
        }
        t = not_null(a_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm z_72 (ATerm))
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  j_14 = t;
  i_14 :
  if(match_cons(j_14, sym__2))
    {
      k_14 = ATgetArgument(j_14, 0);
      l_14 = ATgetArgument(j_14, 1);
      {
        t = not_null(k_14);
        {
          ATerm p_14 (ATerm t)
          {
            ATerm b_8 = t;
            int c_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(l_14);
                ;
                LocalPopChoice(c_8);
              }
            else
              {
                t = b_8;
                {
                  ATerm d_8 = t;
                  int e_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_0 (ATerm t)
                      {
                        t = not_null(l_14);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_72, z_0);
                      t = p_14(t);
                      ;
                      LocalPopChoice(e_8);
                    }
                  else
                    {
                      t = d_8;
                      t = Cons_2(t, _id, p_14);
                    }
                }
              }
            return(t);
          }
          t = p_14(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm))
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_74(t);
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
        ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
        u_14 = t;
        t_14 :
        if(((ATgetType(u_14) == AT_LIST) && !(ATisEmpty(u_14))))
          {
            v_14 = ATgetFirst((ATermList) u_14);
            w_14 = (ATerm) ATgetNext((ATermList) u_14);
            {
              ATerm z_14 = NULL,b_15 = NULL;
              ATerm h_8;
              h_8 = t;
              {
                ATerm a_15 = NULL;
                t = not_null(v_14);
                {
                  t = b_75(t);
                  {
                    a_15 = t;
                    if(((z_14 != NULL) && (z_14 != a_15)))
                      _fail(a_15);
                    else
                      z_14 = a_15;
                  }
                }
              }
              t = h_8;
              {
                ATerm c_15 = NULL;
                t = not_null(w_14);
                {
                  t = foldr_3(t, z_74, a_75, b_75);
                  {
                    c_15 = t;
                    if(((b_15 != NULL) && (b_15 != c_15)))
                      _fail(c_15);
                    else
                      b_15 = c_15;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_14), not_null(b_15));
                  t = a_75(t);
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
ATerm crush_3 (ATerm t, ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm))
{
  ATerm k_15 = NULL;
  ATerm m_15 = NULL;
  k_15 = t;
  {
    ATerm n_15 = NULL;
    ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
    t = not_null(k_15);
    {
      n_15 = t;
      {
        t = SSL_explode_term(not_null(n_15));
        {
          p_15 = t;
          j_15 :
          if(match_cons(p_15, sym__2))
            {
              q_15 = ATgetArgument(p_15, 0);
              r_15 = ATgetArgument(p_15, 1);
              if(((m_15 != NULL) && (m_15 != r_15)))
                _fail(r_15);
              else
                m_15 = r_15;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(m_15);
      t = foldr_3(t, s_78, t_78, u_78);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm v_73 (ATerm))
{
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_15 = NULL;
      ATerm x_15 = NULL;
      t = v_73(t);
      {
        x_15 = t;
        if(((w_15 != NULL) && (w_15 != x_15)))
          _fail(x_15);
        else
          w_15 = x_15;
      }
      t = (ATerm) ATinsert(ATempty, not_null(w_15));
      ;
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        ATerm a_1 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm b_1 (ATerm t)
        {
          t = collect_om_1(t, v_73);
          return(t);
        }
        t = crush_3(t, a_1, union_0, b_1);
      }
    }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm w_73 (ATerm))
{
  t = collect_om_1(t, w_73);
  return(t);
}
ATerm strategy_argument_warning_1 (ATerm t, ATerm k_61 (ATerm))
{
  t = collect_1(t, k_61);
  t = concat_0(t);
  return(t);
}
ATerm debug_with_incorrect_string_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
      g_16 = t;
      b_16 :
      if(match_cons(g_16, sym_Call_2))
        {
          h_16 = ATgetArgument(g_16, 0);
          j_16 = ATgetArgument(g_16, 1);
          c_16 :
          if(match_cons(h_16, sym_SVar_1))
            {
              i_16 = ATgetArgument(h_16, 0);
              d_16 :
              if(match_string(i_16, "debug"))
                {
                  e_16 :
                  if(((ATgetType(j_16) == AT_LIST) && !(ATisEmpty(j_16))))
                    {
                      k_16 = ATgetFirst((ATermList) j_16);
                      l_16 = (ATerm) ATgetNext((ATermList) j_16);
                      f_16 :
                      if(((ATgetType(l_16) == AT_LIST) && ATisEmpty(l_16)))
                        {
                          {
                            ATerm n_16 = NULL;
                            t = not_null(k_16);
                            {
                              ATerm r_8 = t;
                              if((PushChoice() == 0))
                                {
                                  ATerm e_1 (ATerm t)
                                  {
                                    t = Str_1(t, _id);
                                    return(t);
                                  }
                                  t = Build_1(t, e_1);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                {
                                  t = r_8;
                                }
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm g_1 (ATerm t)
                                  {
                                    ATerm o_16 = NULL;
                                    o_16 = t;
                                    if(((n_16 != NULL) && (n_16 != o_16)))
                                      _fail(o_16);
                                    else
                                      n_16 = o_16;
                                    return(t);
                                  }
                                  t = Str_1(t, g_1);
                                  return(t);
                                }
                                t = oncetd_1(t, f_1);
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_DebugWarning_1, not_null(n_16));
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
    t = sdef_with_property_1(t, d_1);
    return(t);
  }
  t = strategy_argument_warning_1(t, c_1);
  return(t);
}
ATerm Warning_1 (ATerm t, ATerm i_61 (ATerm))
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_16 = NULL;
      w_16 = t;
      u_16 :
      if(match_string(w_16, "debug-arguments"))
        {
          t = i_61(t);
          t = debug_with_incorrect_string_0(t);
        }
      else
        {
          if(match_string(w_16, "obsolete-strategy-calls"))
            {
              t = i_61(t);
              t = obsolete_def_0(t);
            }
          else
            {
              _fail(t);
            }
        }
      ;
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      {
        ATerm x_16 = NULL;
        ATerm y_16 = NULL;
        y_16 = t;
        if(((x_16 != NULL) && (x_16 != y_16)))
          _fail(y_16);
        else
          x_16 = y_16;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_16)), term_z_8));
          {
            t = printnl_0(t);
            t = (ATerm) ATempty;
          }
        }
      }
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm a_76 (ATerm))
{
  ATerm a_9 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(b_9);
    }
  else
    {
      t = a_9;
      {
        ATerm c_9 = t;
        int q_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              t = filter_1(t, a_76);
              return(t);
            }
            t = Cons_2(t, a_76, h_1);
            ;
            LocalPopChoice(q_9);
          }
        else
          {
            t = c_9;
            {
              ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
              e_17 = t;
              d_17 :
              if(((ATgetType(e_17) == AT_LIST) && !(ATisEmpty(e_17))))
                {
                  f_17 = ATgetFirst((ATermList) e_17);
                  g_17 = (ATerm) ATgetNext((ATermList) e_17);
                  {
                    t = not_null(g_17);
                    t = filter_1(t, a_76);
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
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm l_69 (ATerm))
{
  ATerm k_17 = NULL;
  ATerm i_1 (ATerm t)
  {
    ATerm l_17 = NULL;
    t = l_69(t);
    {
      l_17 = t;
      if(((k_17 != NULL) && (k_17 != l_17)))
        _fail(l_17);
      else
        k_17 = l_17;
    }
    return(t);
  }
  t = fetch_1(t, i_1);
  t = not_null(k_17);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  r_17 = t;
  q_17 :
  if(((ATgetType(r_17) == AT_LIST) && !(ATisEmpty(r_17))))
    {
      s_17 = ATgetFirst((ATermList) r_17);
      t_17 = (ATerm) ATgetNext((ATermList) r_17);
      {
        ATerm w_17 = NULL;
        ATerm y_17 = NULL;
        t = not_null(t_17);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm r_9 = t;
            if((PushChoice() == 0))
              {
                ATerm x_17 = NULL;
                x_17 = t;
                if(((s_17 != NULL) && (s_17 != x_17)))
                  _fail(x_17);
                else
                  s_17 = x_17;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_9;
              }
            return(t);
          }
          t = filter_1(t, j_1);
          {
            y_17 = t;
            if(((w_17 != NULL) && (w_17 != y_17)))
              _fail(y_17);
            else
              w_17 = y_17;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(w_17)), not_null(s_17));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm h_70 (ATerm))
{
  ATerm c_18 (ATerm t)
  {
    t = h_70(t);
    {
      ATerm s_9 = t;
      int i_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          ;
          LocalPopChoice(i_10);
        }
      else
        {
          t = s_9;
          t = Cons_2(t, _id, c_18);
        }
    }
    return(t);
  }
  t = c_18(t);
  return(t);
}
ATerm uniq_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    t = try_1(t, Uniq_0);
    return(t);
  }
  t = listtd_1(t, k_1);
  return(t);
}
ATerm Stratego_warnings_0 (ATerm t)
{
  ATerm f_18 = NULL;
  ATerm l_1 (ATerm t)
  {
    ATerm j_10;
    j_10 = t;
    {
      ATerm g_18 = NULL;
      g_18 = t;
      {
        if(((f_18 != NULL) && (f_18 != g_18)))
          _fail(g_18);
        else
          f_18 = g_18;
        {
          ATerm k_10 = t;
          int l_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_y_5;
              {
                t = get_config_0(t);
                t = uniq_0(t);
              }
              ;
              LocalPopChoice(l_10);
            }
          else
            {
              t = k_10;
              t = (ATerm) ATempty;
            }
          {
            ATerm m_1 (ATerm t)
            {
              ATerm n_1 (ATerm t)
              {
                ATerm h_18 = NULL;
                h_18 = t;
                e_18 :
                if(!(match_string(h_18, "all")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = fetch_elem_1(t, n_1);
              t = (ATerm) ATinsert(ATinsert(ATempty, term_n_10), term_m_10);
              return(t);
            }
            t = try_1(t, m_1);
            {
              ATerm o_1 (ATerm t)
              {
                ATerm p_1 (ATerm t)
                {
                  t = not_null(f_18);
                  return(t);
                }
                t = Warning_1(t, p_1);
                return(t);
              }
              t = filter_1(t, o_1);
              {
                t = concat_0(t);
                t = print_warnings_0(t);
              }
            }
          }
        }
      }
    }
    t = j_10;
    return(t);
  }
  t = _2(t, _id, l_1);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm r_10;
  r_10 = t;
  {
    ATerm k_18 = NULL;
    ATerm l_18 = NULL;
    t = term_z_5;
    {
      t = whoami_0(t);
      {
        l_18 = t;
        if(((k_18 != NULL) && (k_18 != l_18)))
          _fail(l_18);
        else
          k_18 = l_18;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_10), not_null(k_18)), term_s_10));
      {
        t = printnl_0(t);
        {
          t = term_l_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = r_10;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  p_18 = t;
  o_18 :
  if(match_cons(p_18, sym__2))
    {
      q_18 = ATgetArgument(p_18, 0);
      r_18 = ATgetArgument(p_18, 1);
      {
        ATerm z_10;
        z_10 = t;
        t = SSL_printnl(not_null(q_18), not_null(r_18));
        t = z_10;
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
  ATerm w_18 = NULL;
  w_18 = t;
  t = SSL_implode_string(not_null(w_18));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(b_11);
    }
  else
    {
      t = a_11;
      {
        ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
        b_19 = t;
        a_19 :
        if(((ATgetType(b_19) == AT_LIST) && !(ATisEmpty(b_19))))
          {
            c_19 = ATgetFirst((ATermList) b_19);
            d_19 = (ATerm) ATgetNext((ATermList) b_19);
            {
              t = not_null(c_19);
              {
                ATerm q_1 (ATerm t)
                {
                  t = not_null(d_19);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, q_1);
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
  ATerm o_20 = NULL;
  ATerm q_20 = NULL;
  o_20 = t;
  {
    ATerm r_20 = NULL;
    ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
    t = not_null(o_20);
    {
      r_20 = t;
      {
        t = SSL_explode_term(not_null(r_20));
        {
          t_20 = t;
          m_20 :
          if(match_cons(t_20, sym__2))
            {
              u_20 = ATgetArgument(t_20, 0);
              v_20 = ATgetArgument(t_20, 1);
              n_20 :
              if(match_string(u_20, ""))
                {
                  if(((q_20 != NULL) && (q_20 != v_20)))
                    _fail(v_20);
                  else
                    q_20 = v_20;
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
      t = not_null(q_20);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm p_69 (ATerm))
{
  ATerm z_20 (ATerm t)
  {
    ATerm c_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_20);
        ;
        LocalPopChoice(e_11);
      }
    else
      {
        t = c_11;
        {
          t = Nil_0(t);
          t = p_69(t);
        }
      }
    return(t);
  }
  t = z_20(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
  c_21 = t;
  b_21 :
  if(match_cons(c_21, sym__2))
    {
      d_21 = ATgetArgument(c_21, 0);
      e_21 = ATgetArgument(c_21, 1);
      {
        t = not_null(d_21);
        {
          ATerm r_1 (ATerm t)
          {
            t = not_null(e_21);
            return(t);
          }
          t = at_end_1(t, r_1);
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
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm j_21 = NULL;
  j_21 = t;
  t = SSL_explode_string(not_null(j_21));
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
ATerm eval_config_0 (ATerm t)
{
  ATerm h_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = h_11;
      {
        ATerm m_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, s_1);
            ;
            LocalPopChoice(q_11);
          }
        else
          {
            t = m_11;
            {
              ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
              x_21 = t;
              r_21 :
              if(match_cons(x_21, sym_Path_1))
                {
                  y_21 = ATgetArgument(x_21, 0);
                  t = not_null(y_21);
                }
              else
                {
                  if(match_cons(x_21, sym_Var_1))
                    {
                      y_21 = ATgetArgument(x_21, 0);
                      {
                        t = not_null(y_21);
                        {
                          ATerm t_11 = t;
                          int u_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(u_11);
                            }
                          else
                            {
                              t = t_11;
                              {
                                ATerm t_1 (ATerm t)
                                {
                                  t = term_v_11;
                                  return(t);
                                }
                                t = debug_1(t, t_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(x_21, sym_Prefix_2))
                        {
                          y_21 = ATgetArgument(x_21, 0);
                          z_21 = ATgetArgument(x_21, 1);
                          {
                            ATerm f_22 = NULL,h_22 = NULL;
                            ATerm w_11;
                            w_11 = t;
                            {
                              ATerm g_22 = NULL;
                              t = not_null(y_21);
                              {
                                t = eval_config_0(t);
                                {
                                  g_22 = t;
                                  if(((f_22 != NULL) && (f_22 != g_22)))
                                    _fail(g_22);
                                  else
                                    f_22 = g_22;
                                }
                              }
                            }
                            t = w_11;
                            {
                              ATerm i_22 = NULL;
                              t = not_null(z_21);
                              {
                                t = eval_config_0(t);
                                {
                                  i_22 = t;
                                  if(((h_22 != NULL) && (h_22 != i_22)))
                                    _fail(i_22);
                                  else
                                    h_22 = i_22;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_22), not_null(h_22));
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
  ATerm t_22 = NULL;
  t_22 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_5, not_null(t_22));
    {
      t = table_get_0(t);
      {
        ATerm u_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm x_11;
            x_11 = t;
            {
              ATerm v_22 = NULL;
              ATerm w_22 = NULL;
              w_22 = t;
              if(((v_22 != NULL) && (v_22 != w_22)))
                _fail(w_22);
              else
                v_22 = w_22;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_x_5, not_null(t_22), not_null(v_22));
                t = table_put_0(t);
              }
            }
            t = x_11;
          }
          return(t);
        }
        t = try_1(t, u_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm l_82 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    ATerm y_11;
    y_11 = t;
    {
      ATerm a_23 = NULL;
      ATerm b_23 = NULL;
      t = term_z_11;
      {
        t = get_config_0(t);
        {
          b_23 = t;
          if(((a_23 != NULL) && (a_23 != b_23)))
            _fail(b_23);
          else
            a_23 = b_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_23), term_a_12);
        t = geq_0(t);
      }
    }
    t = y_11;
    t = l_82(t);
    return(t);
  }
  t = try_1(t, v_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
  h_23 = t;
  f_23 :
  if(match_cons(h_23, sym__2))
    {
      i_23 = ATgetArgument(h_23, 0);
      j_23 = ATgetArgument(h_23, 1);
      g_23 :
      if(match_cons(j_23, sym_Stream_1))
        {
          k_23 = ATgetArgument(j_23, 0);
          {
            ATerm n_23 = NULL;
            t = SSL_fputc(not_null(i_23), not_null(k_23));
            {
              ATerm o_23 = NULL;
              o_23 = t;
              if(((n_23 != NULL) && (n_23 != o_23)))
                _fail(o_23);
              else
                n_23 = o_23;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_23));
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
  return(t);
}
ATerm write_in_text_to_stream_0 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  v_23 = t;
  t_23 :
  if(match_cons(v_23, sym__2))
    {
      w_23 = ATgetArgument(v_23, 0);
      y_23 = ATgetArgument(v_23, 1);
      u_23 :
      if(match_cons(w_23, sym_Stream_1))
        {
          x_23 = ATgetArgument(w_23, 0);
          {
            ATerm b_24 = NULL;
            t = SSL_write_term_to_stream_text(not_null(x_23), not_null(y_23));
            {
              ATerm c_24 = NULL;
              c_24 = t;
              if(((b_24 != NULL) && (b_24 != c_24)))
                _fail(c_24);
              else
                b_24 = c_24;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_24));
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
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm g_24 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm h_24 = NULL;
      h_24 = t;
      if(((g_24 != NULL) && (g_24 != h_24)))
        _fail(h_24);
      else
        g_24 = h_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(g_24));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, w_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
  n_24 = t;
  l_24 :
  if(match_cons(n_24, sym__2))
    {
      o_24 = ATgetArgument(n_24, 0);
      q_24 = ATgetArgument(n_24, 1);
      m_24 :
      if(match_cons(o_24, sym_Stream_1))
        {
          p_24 = ATgetArgument(o_24, 0);
          {
            ATerm t_24 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(p_24), not_null(q_24));
            {
              ATerm u_24 = NULL;
              u_24 = t;
              if(((t_24 != NULL) && (t_24 != u_24)))
                _fail(u_24);
              else
                t_24 = u_24;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_24));
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
  return(t);
}
ATerm WriteToFile_1 (ATerm t, ATerm h_81 (ATerm))
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
  b_25 = t;
  a_25 :
  if(match_cons(b_25, sym__2))
    {
      c_25 = ATgetArgument(b_25, 0);
      d_25 = ATgetArgument(b_25, 1);
      {
        ATerm g_25 = NULL,i_25 = NULL;
        t = not_null(c_25);
        {
          ATerm h_25 = NULL;
          h_25 = t;
          if(((g_25 != NULL) && (g_25 != h_25)))
            _fail(h_25);
          else
            g_25 = h_25;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_25), term_c_12);
            {
              t = open_stream_0(t);
              {
                ATerm j_25 = NULL;
                j_25 = t;
                if(((i_25 != NULL) && (i_25 != j_25)))
                  _fail(j_25);
                else
                  i_25 = j_25;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_25), not_null(d_25));
                  {
                    t = h_81(t);
                    {
                      t = fclose_0(t);
                      t = not_null(d_25);
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  t = WriteToFile_1(t, write_in_baf_to_stream_0);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm r_25 = NULL;
  ATerm i_12;
  i_12 = t;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm j_12 = t;
      int k_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_1 (ATerm t)
          {
            ATerm s_25 = NULL,t_25 = NULL;
            s_25 = t;
            o_25 :
            if(match_cons(s_25, sym_Output_1))
              {
                t_25 = ATgetArgument(s_25, 0);
                if(((r_25 != NULL) && (r_25 != t_25)))
                  _fail(t_25);
                else
                  r_25 = t_25;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, y_1);
          ;
          LocalPopChoice(k_12);
        }
      else
        {
          t = j_12;
          {
            ATerm u_25 = NULL;
            t = term_l_12;
            {
              u_25 = t;
              if(((r_25 != NULL) && (r_25 != u_25)))
                _fail(u_25);
              else
                r_25 = u_25;
            }
          }
        }
      return(t);
    }
    t = _2(t, x_1, _id);
  }
  t = i_12;
  {
    ATerm z_1 (ATerm t)
    {
      ATerm a_2 (ATerm t)
      {
        t = not_null(r_25);
        return(t);
      }
      t = split_2(t, a_2, _id);
      return(t);
    }
    t = _2(t, _id, z_1);
    {
      ATerm p_12 = t;
      int r_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_2 (ATerm t)
          {
            ATerm c_2 (ATerm t)
            {
              ATerm v_25 = NULL;
              v_25 = t;
              q_25 :
              if(!(match_cons(v_25, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, c_2);
            return(t);
          }
          t = _2(t, b_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(r_12);
        }
      else
        {
          t = p_12;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm j_84 (ATerm))
{
  ATerm e_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
  ATerm t_12;
  t_12 = t;
  t = dtime_0(t);
  t = t_12;
  {
    t = j_84(t);
    {
      ATerm w_12;
      w_12 = t;
      {
        ATerm f_26 = NULL;
        t = dtime_0(t);
        {
          f_26 = t;
          if(((e_26 != NULL) && (e_26 != f_26)))
            _fail(f_26);
          else
            e_26 = f_26;
        }
      }
      t = w_12;
      {
        g_26 = t;
        d_26 :
        if(match_cons(g_26, sym__2))
          {
            h_26 = ATgetArgument(g_26, 0);
            i_26 = ATgetArgument(g_26, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_26)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(e_26))), not_null(i_26));
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
ATerm fclose_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL;
  ATerm c_27 (ATerm t)
  {
    t = SSL_fclose(not_null(r_26));
    return(t);
  }
  r_26 = t;
  p_26 :
  if(match_cons(r_26, sym_Stream_1))
    {
      q_26 = ATgetArgument(r_26, 0);
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(q_26));
            ;
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            t = c_27(t);
          }
      }
    }
  else
    {
      t = c_27(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL;
  f_27 = t;
  e_27 :
  if(match_cons(f_27, sym_Stream_1))
    {
      g_27 = ATgetArgument(f_27, 0);
      t = SSL_read_term_from_stream(not_null(g_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm t_80 (ATerm))
{
  ATerm z_12;
  z_12 = t;
  {
    ATerm l_27 = NULL,n_27 = NULL;
    ATerm a_13;
    a_13 = t;
    {
      ATerm m_27 = NULL;
      t = t_80(t);
      {
        m_27 = t;
        if(((l_27 != NULL) && (l_27 != m_27)))
          _fail(m_27);
        else
          l_27 = m_27;
      }
    }
    t = a_13;
    {
      ATerm o_27 = NULL;
      o_27 = t;
      if(((n_27 != NULL) && (n_27 != o_27)))
        _fail(o_27);
      else
        n_27 = o_27;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_27)), not_null(l_27)));
        t = printnl_0(t);
      }
    }
  }
  t = z_12;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm u_27 = NULL,z_27 = NULL,a_28 = NULL;
  u_27 = t;
  t_27 :
  if(match_cons(u_27, sym__2))
    {
      z_27 = ATgetArgument(u_27, 0);
      a_28 = ATgetArgument(u_27, 1);
      {
        ATerm d_28 = NULL;
        t = SSL_fopen(not_null(z_27), not_null(a_28));
        {
          ATerm e_28 = NULL;
          e_28 = t;
          if(((d_28 != NULL) && (d_28 != e_28)))
            _fail(e_28);
          else
            d_28 = e_28;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_28));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  t = SSL_is_string(not_null(i_28));
  return(t);
}
ATerm _2 (ATerm t, ATerm s_53 (ATerm), ATerm t_53 (ATerm))
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
  r_28 = t;
  q_28 :
  if(match_cons(r_28, sym__2))
    {
      s_28 = ATgetArgument(r_28, 0);
      t_28 = ATgetArgument(r_28, 1);
      {
        ATerm x_28 = NULL,z_28 = NULL;
        ATerm y_28 = NULL;
        t = SSLgetAnnotations(not_null(r_28));
        {
          y_28 = t;
          if(((x_28 != NULL) && (x_28 != y_28)))
            _fail(y_28);
          else
            x_28 = y_28;
        }
        {
          t = not_null(s_28);
          {
            ATerm b_29 = NULL;
            t = s_53(t);
            {
              z_28 = t;
              {
                t = not_null(t_28);
                {
                  ATerm d_29 = NULL;
                  t = t_53(t);
                  {
                    b_29 = t;
                    {
                      ATerm e_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_28), not_null(b_29)), not_null(x_28));
                      {
                        e_29 = t;
                        if(((d_29 != NULL) && (d_29 != e_29)))
                          _fail(e_29);
                        else
                          d_29 = e_29;
                      }
                      t = not_null(d_29);
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
ATerm stdin_stream_0 (ATerm t)
{
  ATerm n_29 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm o_29 = NULL;
    o_29 = t;
    if(((n_29 != NULL) && (n_29 != o_29)))
      _fail(o_29);
    else
      n_29 = o_29;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_29));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm r_29 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm s_29 = NULL;
    s_29 = t;
    if(((r_29 != NULL) && (r_29 != s_29)))
      _fail(s_29);
    else
      r_29 = s_29;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_29));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm v_29 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm w_29 = NULL;
    w_29 = t;
    if(((v_29 != NULL) && (v_29 != w_29)))
      _fail(w_29);
    else
      v_29 = w_29;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_29));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm c_30 = NULL;
  c_30 = t;
  b_30 :
  if(match_cons(c_30, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(c_30, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(c_30, sym_stdin_0))
            {
              t = stdin_stream_0(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm m_30 = NULL;
  ATerm o_30 = NULL,p_30 = NULL;
  m_30 = t;
  {
    ATerm q_30 = NULL;
    ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL;
    t = not_null(m_30);
    {
      q_30 = t;
      {
        t = SSL_explode_term(not_null(q_30));
        {
          s_30 = t;
          j_30 :
          if(match_cons(s_30, sym__2))
            {
              t_30 = ATgetArgument(s_30, 0);
              u_30 = ATgetArgument(s_30, 1);
              k_30 :
              if(match_string(t_30, ""))
                {
                  l_30 :
                  if(((ATgetType(u_30) == AT_LIST) && !(ATisEmpty(u_30))))
                    {
                      v_30 = ATgetFirst((ATermList) u_30);
                      w_30 = (ATerm) ATgetNext((ATermList) u_30);
                      {
                        if(((p_30 != NULL) && (p_30 != v_30)))
                          _fail(v_30);
                        else
                          p_30 = v_30;
                        if(((o_30 != NULL) && (o_30 != w_30)))
                          _fail(w_30);
                        else
                          o_30 = w_30;
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
    t = not_null(p_30);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  e_31 = t;
  d_31 :
  if(match_cons(e_31, sym__2))
    {
      f_31 = ATgetArgument(e_31, 0);
      g_31 = ATgetArgument(e_31, 1);
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
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
                  ATerm d_2 (ATerm t)
                  {
                    ATerm h_31 = NULL,i_31 = NULL;
                    h_31 = t;
                    c_31 :
                    if(match_cons(h_31, sym_Path_1))
                      {
                        i_31 = ATgetArgument(h_31, 0);
                        t = not_null(i_31);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, d_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(e_13);
                }
              else
                {
                  t = d_13;
                  {
                    t = _2(t, is_string_0, _id);
                    t = fopen_0(t);
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm q_31 = NULL;
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_31 = NULL;
      ATerm p_31 = NULL;
      p_31 = t;
      if(((o_31 != NULL) && (o_31 != p_31)))
        _fail(p_31);
      else
        o_31 = p_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_31), term_m_13);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      {
        ATerm e_2 (ATerm t)
        {
          t = term_n_13;
          return(t);
        }
        t = debug_1(t, e_2);
        _fail(t);
      }
    }
  {
    ATerm o_13;
    o_13 = t;
    {
      ATerm r_31 = NULL;
      t = read_from_stream_0(t);
      {
        r_31 = t;
        if(((q_31 != NULL) && (q_31 != r_31)))
          _fail(r_31);
        else
          q_31 = r_31;
      }
    }
    t = o_13;
    {
      t = fclose_0(t);
      t = not_null(q_31);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_76 (ATerm), ATerm n_76 (ATerm))
{
  ATerm w_31 = NULL,y_31 = NULL;
  ATerm t_13;
  t_13 = t;
  {
    ATerm x_31 = NULL;
    t = m_76(t);
    {
      x_31 = t;
      if(((w_31 != NULL) && (w_31 != x_31)))
        _fail(x_31);
      else
        w_31 = x_31;
    }
  }
  t = t_13;
  {
    ATerm z_31 = NULL;
    t = n_76(t);
    {
      z_31 = t;
      if(((y_31 != NULL) && (y_31 != z_31)))
        _fail(z_31);
      else
        y_31 = z_31;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_31), not_null(y_31));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_32 = NULL;
  ATerm u_13;
  u_13 = t;
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 (ATerm t)
        {
          ATerm g_32 = NULL,h_32 = NULL;
          g_32 = t;
          d_32 :
          if(match_cons(g_32, sym_Input_1))
            {
              h_32 = ATgetArgument(g_32, 0);
              if(((f_32 != NULL) && (f_32 != h_32)))
                _fail(h_32);
              else
                f_32 = h_32;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, f_2);
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        {
          ATerm i_32 = NULL;
          t = term_b_14;
          {
            i_32 = t;
            if(((f_32 != NULL) && (f_32 != i_32)))
              _fail(i_32);
            else
              f_32 = i_32;
          }
        }
      }
  }
  t = u_13;
  {
    ATerm g_2 (ATerm t)
    {
      t = not_null(f_32);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, g_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm m_32 = NULL;
    m_32 = t;
    l_32 :
    if(!(match_string(m_32, "-v")))
      {
        if(!(match_string(m_32, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_e_14;
    t = set_config_0(t);
    t = term_f_14;
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_g_14;
    return(t);
  }
  t = Option_3(t, h_2, i_2, j_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm p_32 = NULL;
    p_32 = t;
    n_32 :
    if(!(match_string(p_32, "-k")))
      {
        if(!(match_string(p_32, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm h_14;
    h_14 = t;
    {
      ATerm q_32 = NULL;
      ATerm r_32 = NULL;
      t = string_to_int_0(t);
      {
        r_32 = t;
        if(((q_32 != NULL) && (q_32 != r_32)))
          _fail(r_32);
        else
          q_32 = r_32;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_14, not_null(q_32));
        t = set_config_0(t);
      }
    }
    t = h_14;
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_n_14;
    return(t);
  }
  t = ArgOption_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm u_32 = NULL;
  u_32 = t;
  t = SSL_string_to_int(not_null(u_32));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm o_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        ATerm c_33 = NULL;
        c_33 = t;
        x_32 :
        if(!(match_string(c_33, "-S")))
          {
            if(!(match_string(c_33, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        t = term_r_14;
        t = set_config_0(t);
        t = term_s_14;
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        t = term_x_14;
        return(t);
      }
      t = Option_3(t, q_2, r_2, s_2);
      ;
      LocalPopChoice(q_14);
    }
  else
    {
      t = o_14;
      {
        ATerm y_14 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              ATerm d_33 = NULL;
              d_33 = t;
              y_32 :
              if(!(match_string(d_33, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm u_2 (ATerm t)
            {
              ATerm g_33 = NULL;
              ATerm e_15;
              e_15 = t;
              {
                ATerm e_33 = NULL;
                ATerm f_33 = NULL;
                t = string_to_int_0(t);
                {
                  f_33 = t;
                  if(((e_33 != NULL) && (e_33 != f_33)))
                    _fail(f_33);
                  else
                    e_33 = f_33;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_11, not_null(e_33));
                  t = set_config_0(t);
                }
              }
              t = e_15;
              {
                ATerm h_33 = NULL;
                h_33 = t;
                if(((g_33 != NULL) && (g_33 != h_33)))
                  _fail(h_33);
                else
                  g_33 = h_33;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(g_33));
              }
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              t = term_f_15;
              return(t);
            }
            t = ArgOption_3(t, t_2, u_2, v_2);
            ;
            LocalPopChoice(d_15);
          }
        else
          {
            t = y_14;
            {
              ATerm w_2 (ATerm t)
              {
                ATerm i_33 = NULL;
                i_33 = t;
                b_33 :
                if(!(match_string(i_33, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm y_2 (ATerm t)
              {
                t = term_h_15;
                t = set_config_0(t);
                t = term_i_15;
                return(t);
              }
              ATerm z_2 (ATerm t)
              {
                t = term_l_15;
                return(t);
              }
              t = Option_3(t, w_2, y_2, z_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm o_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(s_15);
    }
  else
    {
      t = o_15;
      {
        ATerm t_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(u_15);
          }
        else
          {
            t = t_15;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm o_33 = NULL;
    o_33 = t;
    l_33 :
    if(!(match_string(o_33, "-o")))
      {
        if(!(match_string(o_33, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm r_33 = NULL;
    ATerm v_15;
    v_15 = t;
    {
      ATerm p_33 = NULL;
      ATerm q_33 = NULL;
      q_33 = t;
      if(((p_33 != NULL) && (p_33 != q_33)))
        _fail(q_33);
      else
        p_33 = q_33;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_15, not_null(p_33));
        t = set_config_0(t);
      }
    }
    t = v_15;
    {
      ATerm s_33 = NULL;
      s_33 = t;
      if(((r_33 != NULL) && (r_33 != s_33)))
        _fail(s_33);
      else
        r_33 = s_33;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(r_33));
    }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_z_15;
    return(t);
  }
  t = ArgOption_3(t, a_3, b_3, c_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm a_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(m_16);
    }
  else
    {
      t = a_16;
      {
        ATerm h_3 (ATerm t)
        {
          ATerm y_33 = NULL;
          y_33 = t;
          x_33 :
          if(!(match_string(y_33, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm i_3 (ATerm t)
        {
          t = term_q_16;
          t = set_config_0(t);
          t = term_r_16;
          return(t);
        }
        ATerm j_3 (ATerm t)
        {
          t = term_s_16;
          return(t);
        }
        t = Option_3(t, h_3, i_3, j_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL;
  e_34 = t;
  c_34 :
  if(match_string(e_34, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(e_34) == AT_LIST) && !(ATisEmpty(e_34))))
        {
          f_34 = ATgetFirst((ATermList) e_34);
          g_34 = (ATerm) ATgetNext((ATermList) e_34);
          d_34 :
          if(((ATgetType(g_34) == AT_LIST) && !(ATisEmpty(g_34))))
            {
              h_34 = ATgetFirst((ATermList) g_34);
              i_34 = (ATerm) ATgetNext((ATermList) g_34);
              {
                ATerm r_34 = NULL;
                ATerm t_16;
                t_16 = t;
                {
                  t = not_null(f_34);
                  t = j_0(t);
                }
                t = t_16;
                {
                  ATerm s_34 = NULL;
                  t = not_null(h_34);
                  {
                    t = k_0(t);
                    {
                      s_34 = t;
                      if(((r_34 != NULL) && (r_34 != s_34)))
                        _fail(s_34);
                      else
                        r_34 = s_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_34)), not_null(r_34));
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
  ATerm l_3 (ATerm t)
  {
    ATerm z_34 = NULL;
    z_34 = t;
    w_34 :
    if(!(match_string(z_34, "-i")))
      {
        if(!(match_string(z_34, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm c_35 = NULL;
    ATerm v_16;
    v_16 = t;
    {
      ATerm a_35 = NULL;
      ATerm b_35 = NULL;
      b_35 = t;
      if(((a_35 != NULL) && (a_35 != b_35)))
        _fail(b_35);
      else
        a_35 = b_35;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_16, not_null(a_35));
        t = set_config_0(t);
      }
    }
    t = v_16;
    {
      ATerm d_35 = NULL;
      d_35 = t;
      if(((c_35 != NULL) && (c_35 != d_35)))
        _fail(d_35);
      else
        c_35 = d_35;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_35));
    }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_a_17;
    return(t);
  }
  t = ArgOption_3(t, l_3, p_3, q_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm h_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(i_17);
          }
        else
          {
            t = h_17;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm h_35 = NULL;
  t = report_run_time_0(t);
  {
    ATerm i_35 = NULL;
    t = term_z_5;
    {
      t = whoami_0(t);
      {
        i_35 = t;
        if(((h_35 != NULL) && (h_35 != i_35)))
          _fail(i_35);
        else
          h_35 = i_35;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, term_j_17), not_null(h_35)));
      {
        t = printnl_0(t);
        {
          t = term_l_6;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_m_17;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm l_35 = NULL;
  l_35 = t;
  t = SSL_TicksToSeconds(not_null(l_35));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
  q_35 = t;
  p_35 :
  if(match_cons(q_35, sym__2))
    {
      r_35 = ATgetArgument(q_35, 0);
      s_35 = ATgetArgument(q_35, 1);
      {
        ATerm n_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_35), not_null(s_35));
            ;
            LocalPopChoice(o_17);
          }
        else
          {
            t = n_17;
            t = SSL_addr(not_null(r_35), not_null(s_35));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_74 (ATerm), ATerm y_74 (ATerm))
{
  ATerm p_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_74(t);
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = p_17;
      {
        ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
        z_35 = t;
        y_35 :
        if(((ATgetType(z_35) == AT_LIST) && !(ATisEmpty(z_35))))
          {
            a_36 = ATgetFirst((ATermList) z_35);
            b_36 = (ATerm) ATgetNext((ATermList) z_35);
            {
              ATerm e_36 = NULL;
              ATerm f_36 = NULL;
              t = not_null(b_36);
              {
                t = foldr_2(t, x_74, y_74);
                {
                  f_36 = t;
                  if(((e_36 != NULL) && (e_36 != f_36)))
                    _fail(f_36);
                  else
                    e_36 = f_36;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_36), not_null(e_36));
                t = y_74(t);
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
ATerm crush_2 (ATerm t, ATerm q_78 (ATerm), ATerm r_78 (ATerm))
{
  ATerm p_36 = NULL;
  ATerm r_36 = NULL;
  p_36 = t;
  {
    ATerm s_36 = NULL;
    ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
    t = not_null(p_36);
    {
      s_36 = t;
      {
        t = SSL_explode_term(not_null(s_36));
        {
          u_36 = t;
          o_36 :
          if(match_cons(u_36, sym__2))
            {
              v_36 = ATgetArgument(u_36, 0);
              w_36 = ATgetArgument(u_36, 1);
              if(((r_36 != NULL) && (r_36 != w_36)))
                _fail(w_36);
              else
                r_36 = w_36;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_36);
      t = foldr_2(t, q_78, r_78);
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
    ATerm v_3 (ATerm t)
    {
      t = term_i_6;
      return(t);
    }
    t = crush_2(t, v_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
  c_37 = t;
  b_37 :
  if(match_cons(c_37, sym__2))
    {
      d_37 = ATgetArgument(c_37, 0);
      e_37 = ATgetArgument(c_37, 1);
      {
        ATerm v_17;
        v_17 = t;
        {
          ATerm z_17 = t;
          int a_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_37), not_null(e_37));
              ;
              LocalPopChoice(a_18);
            }
          else
            {
              t = z_17;
              t = SSL_gtr(not_null(d_37), not_null(e_37));
            }
        }
        t = v_17;
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
  ATerm k_37 = NULL;
  ATerm b_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
      n_37 = t;
      j_37 :
      if(match_cons(n_37, sym__2))
        {
          o_37 = ATgetArgument(n_37, 0);
          p_37 = ATgetArgument(n_37, 1);
          {
            if(((k_37 != NULL) && (k_37 != o_37)))
              _fail(o_37);
            else
              k_37 = o_37;
            if(((k_37 != NULL) && (k_37 != p_37)))
              _fail(p_37);
            else
              k_37 = p_37;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(d_18);
    }
  else
    {
      t = b_18;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_82 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm i_18;
    i_18 = t;
    {
      ATerm t_37 = NULL;
      ATerm u_37 = NULL;
      t = term_z_11;
      {
        t = get_config_0(t);
        {
          u_37 = t;
          if(((t_37 != NULL) && (t_37 != u_37)))
            _fail(u_37);
          else
            t_37 = u_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_37), term_l_6);
        t = geq_0(t);
      }
    }
    t = i_18;
    t = k_82(t);
    return(t);
  }
  t = try_1(t, w_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm y_37 = NULL,a_38 = NULL;
    ATerm j_18;
    j_18 = t;
    {
      ATerm z_37 = NULL;
      t = run_time_0(t);
      {
        z_37 = t;
        if(((y_37 != NULL) && (y_37 != z_37)))
          _fail(z_37);
        else
          y_37 = z_37;
      }
    }
    t = j_18;
    {
      ATerm b_38 = NULL;
      t = term_z_5;
      {
        t = whoami_0(t);
        {
          b_38 = t;
          if(((a_38 != NULL) && (a_38 != b_38)))
            _fail(b_38);
          else
            a_38 = b_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_18), not_null(y_37)), term_m_18), not_null(a_38)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_i_6;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym_Version_0))
    {
      ATerm k_38 = NULL,m_38 = NULL;
      ATerm s_18;
      s_18 = t;
      {
        ATerm l_38 = NULL;
        t = SSLgetAnnotations(not_null(i_38));
        {
          l_38 = t;
          if(((k_38 != NULL) && (k_38 != l_38)))
            _fail(l_38);
          else
            k_38 = l_38;
        }
      }
      t = s_18;
      {
        ATerm n_38 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_38));
        {
          n_38 = t;
          if(((m_38 != NULL) && (m_38 != n_38)))
            _fail(n_38);
          else
            m_38 = n_38;
        }
        t = not_null(m_38);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_85 (ATerm))
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_18;
      t = get_config_0(t);
      ;
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      {
        ATerm y_3 (ATerm t)
        {
          ATerm x_18 = t;
          int y_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(y_18);
            }
          else
            {
              t = x_18;
              {
                ATerm z_18 = t;
                int e_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(e_19);
                  }
                else
                  {
                    t = z_18;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, y_3);
      }
    }
  t = h_85(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_38 = NULL;
  s_38 = t;
  t = SSL_table_create(not_null(s_38));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_38 = NULL;
  w_38 = t;
  {
    ATerm f_19;
    f_19 = t;
    {
      t = term_g_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_19, term_h_19, not_null(w_38));
          t = table_put_0(t);
        }
      }
    }
    t = f_19;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_39 = NULL;
  a_39 = t;
  t = SSL_table_destroy(not_null(a_39));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_39 = NULL;
  e_39 = t;
  t = SSL_exit(not_null(e_39));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
  i_39 = t;
  h_39 :
  if(((ATgetType(i_39) == AT_LIST) && ATisEmpty(i_39)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(i_39) == AT_LIST) && !(ATisEmpty(i_39))))
        {
          j_39 = ATgetFirst((ATermList) i_39);
          k_39 = (ATerm) ATgetNext((ATermList) i_39);
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
  ATerm i_19;
  i_19 = t;
  {
    ATerm n_39 = NULL;
    ATerm w_39 = NULL;
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        {
          ATerm o_39 = NULL;
          ATerm v_39 = NULL;
          v_39 = t;
          if(((o_39 != NULL) && (o_39 != v_39)))
            _fail(v_39);
          else
            o_39 = v_39;
          t = (ATerm) ATinsert(ATempty, not_null(o_39));
        }
      }
    {
      w_39 = t;
      if(((n_39 != NULL) && (n_39 != w_39)))
        _fail(w_39);
      else
        n_39 = w_39;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_12, not_null(n_39));
      t = printnl_0(t);
    }
  }
  t = i_19;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm i_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_69 (ATerm))
{
  ATerm z_39 (ATerm t)
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = Cons_2(t, a_69, z_39);
      }
    return(t);
  }
  t = z_39(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
  i_40 = t;
  f_40 :
  if(((ATgetType(i_40) == AT_LIST) && !(ATisEmpty(i_40))))
    {
      g_40 = ATgetFirst((ATermList) i_40);
      h_40 = (ATerm) ATgetNext((ATermList) i_40);
      {
        ATerm l_40 = NULL;
        t = not_null(h_40);
        {
          ATerm n_19;
          n_19 = t;
          {
            ATerm m_40 = NULL,o_40 = NULL,q_40 = NULL;
            ATerm o_19;
            o_19 = t;
            {
              ATerm n_40 = NULL;
              t = i_0(t);
              {
                n_40 = t;
                if(((m_40 != NULL) && (m_40 != n_40)))
                  _fail(n_40);
                else
                  m_40 = n_40;
              }
            }
            t = o_19;
            {
              ATerm p_40 = NULL;
              t = not_null(g_40);
              {
                t = g_0(t);
                {
                  p_40 = t;
                  if(((o_40 != NULL) && (o_40 != p_40)))
                    _fail(p_40);
                  else
                    o_40 = p_40;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_40)), not_null(o_40));
                {
                  q_40 = t;
                  if(((l_40 != NULL) && (l_40 != q_40)))
                    _fail(q_40);
                  else
                    l_40 = q_40;
                }
              }
            }
          }
          t = n_19;
          {
            ATerm d_4 (ATerm t)
            {
              t = not_null(l_40);
              return(t);
            }
            t = reverse_acc_2(t, g_0, d_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_40) == AT_LIST) && ATisEmpty(i_40)))
        {
          {
            t = term_z_5;
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
  ATerm e_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm c_61 (ATerm))
{
  ATerm b_41 = NULL,c_41 = NULL;
  b_41 = t;
  a_41 :
  if(match_cons(b_41, sym_Program_1))
    {
      c_41 = ATgetArgument(b_41, 0);
      {
        ATerm f_41 = NULL,h_41 = NULL;
        ATerm g_41 = NULL;
        t = SSLgetAnnotations(not_null(b_41));
        {
          g_41 = t;
          if(((f_41 != NULL) && (f_41 != g_41)))
            _fail(g_41);
          else
            f_41 = g_41;
        }
        {
          t = not_null(c_41);
          {
            ATerm j_41 = NULL;
            t = c_61(t);
            {
              h_41 = t;
              {
                ATerm k_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(h_41)), not_null(f_41));
                {
                  k_41 = t;
                  if(((j_41 != NULL) && (j_41 != k_41)))
                    _fail(k_41);
                  else
                    j_41 = k_41;
                }
                t = not_null(j_41);
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
  ATerm t_41 = NULL;
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_41 = NULL;
      t = term_m_17;
      {
        t = get_config_0(t);
        {
          u_41 = t;
          if(((t_41 != NULL) && (t_41 != u_41)))
            _fail(u_41);
          else
            t_41 = u_41;
        }
      }
      ;
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      {
        ATerm f_4 (ATerm t)
        {
          ATerm g_4 (ATerm t)
          {
            ATerm v_41 = NULL;
            v_41 = t;
            if(((t_41 != NULL) && (t_41 != v_41)))
              _fail(v_41);
            else
              t_41 = v_41;
            return(t);
          }
          t = Program_1(t, g_4);
          return(t);
        }
        t = option_defined_1(t, f_4);
      }
    }
  {
    ATerm j_4 (ATerm t)
    {
      ATerm k_4 (ATerm t)
      {
        t = not_null(t_41);
        return(t);
      }
      t = short_description_1(t, k_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, j_4);
    {
      t = term_r_19;
      {
        t = echo_0(t);
        {
          t = term_u_19;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_4 (ATerm t)
                {
                  ATerm w_41 = NULL;
                  ATerm x_41 = NULL;
                  x_41 = t;
                  if(((w_41 != NULL) && (w_41 != x_41)))
                    _fail(x_41);
                  else
                    w_41 = x_41;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_41)), term_v_19);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_4);
                {
                  ATerm m_4 (ATerm t)
                  {
                    ATerm y_41 = NULL;
                    ATerm z_41 = NULL;
                    ATerm n_4 (ATerm t)
                    {
                      t = not_null(t_41);
                      return(t);
                    }
                    t = long_description_1(t, n_4);
                    {
                      z_41 = t;
                      if(((y_41 != NULL) && (y_41 != z_41)))
                        _fail(z_41);
                      else
                        y_41 = z_41;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(y_41)), term_g_7);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_4);
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
ATerm Undefined_1 (ATerm t, ATerm d_61 (ATerm))
{
  ATerm j_42 = NULL,k_42 = NULL;
  j_42 = t;
  i_42 :
  if(match_cons(j_42, sym_Undefined_1))
    {
      k_42 = ATgetArgument(j_42, 0);
      {
        ATerm n_42 = NULL,p_42 = NULL;
        ATerm o_42 = NULL;
        t = SSLgetAnnotations(not_null(j_42));
        {
          o_42 = t;
          if(((n_42 != NULL) && (n_42 != o_42)))
            _fail(o_42);
          else
            n_42 = o_42;
        }
        {
          t = not_null(k_42);
          {
            ATerm r_42 = NULL;
            t = d_61(t);
            {
              p_42 = t;
              {
                ATerm y_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_42)), not_null(n_42));
                {
                  y_42 = t;
                  if(((r_42 != NULL) && (r_42 != y_42)))
                    _fail(y_42);
                  else
                    r_42 = y_42;
                }
                t = not_null(r_42);
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
ATerm fetch_1 (ATerm t, ATerm j_69 (ATerm))
{
  ATerm i_43 (ATerm t)
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, j_69, _id);
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        t = Cons_2(t, _id, i_43);
      }
    return(t);
  }
  t = i_43(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm h_86 (ATerm))
{
  t = fetch_1(t, h_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_43 = NULL;
  n_43 = t;
  m_43 :
  if(match_cons(n_43, sym_Help_0))
    {
      ATerm p_43 = NULL,r_43 = NULL;
      ATerm y_19;
      y_19 = t;
      {
        ATerm q_43 = NULL;
        t = SSLgetAnnotations(not_null(n_43));
        {
          q_43 = t;
          if(((p_43 != NULL) && (p_43 != q_43)))
            _fail(q_43);
          else
            p_43 = q_43;
        }
      }
      t = y_19;
      {
        ATerm s_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_43));
        {
          s_43 = t;
          if(((r_43 != NULL) && (r_43 != s_43)))
            _fail(s_43);
          else
            r_43 = s_43;
        }
        t = not_null(r_43);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_61 (ATerm))
{
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_61(t);
      ;
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
  y_43 = t;
  x_43 :
  if(match_cons(y_43, sym__2))
    {
      z_43 = ATgetArgument(y_43, 0);
      a_44 = ATgetArgument(y_43, 1);
      t = SSL_table_get(not_null(z_43), not_null(a_44));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL;
  l_44 = t;
  k_44 :
  if(match_cons(l_44, sym__3))
    {
      r_44 = ATgetArgument(l_44, 0);
      s_44 = ATgetArgument(l_44, 1);
      t_44 = ATgetArgument(l_44, 2);
      {
        ATerm b_20;
        b_20 = t;
        {
          ATerm x_44 = NULL;
          ATerm y_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_44), not_null(s_44));
          {
            ATerm c_20 = t;
            int d_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(d_20);
              }
            else
              {
                t = c_20;
                t = (ATerm) ATempty;
              }
            {
              y_44 = t;
              if(((x_44 != NULL) && (x_44 != y_44)))
                _fail(y_44);
              else
                x_44 = y_44;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_44), not_null(s_44), (ATerm) ATinsert(CheckATermList(not_null(x_44)), not_null(t_44)));
            t = table_put_0(t);
          }
        }
        t = b_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm m_87 (ATerm))
{
  ATerm c_45 = NULL;
  ATerm d_45 = NULL;
  t = term_z_5;
  {
    t = m_87(t);
    {
      d_45 = t;
      if(((c_45 != NULL) && (c_45 != d_45)))
        _fail(d_45);
      else
        c_45 = d_45;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_19, term_t_19, not_null(c_45));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  j_45 :
  if(match_string(k_45, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(k_45) == AT_LIST) && !(ATisEmpty(k_45))))
        {
          l_45 = ATgetFirst((ATermList) k_45);
          m_45 = (ATerm) ATgetNext((ATermList) k_45);
          {
            ATerm p_45 = NULL;
            ATerm e_20;
            e_20 = t;
            {
              t = not_null(l_45);
              t = a_0(t);
            }
            t = e_20;
            {
              ATerm q_45 = NULL;
              t = term_z_5;
              {
                t = b_0(t);
                {
                  q_45 = t;
                  if(((p_45 != NULL) && (p_45 != q_45)))
                    _fail(q_45);
                  else
                    p_45 = q_45;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(m_45)), not_null(p_45));
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
  ATerm o_4 (ATerm t)
  {
    ATerm b_46 = NULL;
    b_46 = t;
    u_45 :
    if(!(match_string(b_46, "--help")))
      {
        if(!(match_string(b_46, "-h")))
          {
            if(!(match_string(b_46, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = term_f_20;
    {
      t = set_config_0(t);
      t = term_g_20;
    }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = term_h_20;
    return(t);
  }
  t = Option_3(t, o_4, y_4, z_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
  f_46 = t;
  d_46 :
  if(((ATgetType(f_46) == AT_LIST) && !(ATisEmpty(f_46))))
    {
      g_46 = ATgetFirst((ATermList) f_46);
      h_46 = (ATerm) ATgetNext((ATermList) f_46);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_46)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_46)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_55 (ATerm), ATerm c_55 (ATerm))
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
  r_46 = t;
  q_46 :
  if(((ATgetType(r_46) == AT_LIST) && !(ATisEmpty(r_46))))
    {
      s_46 = ATgetFirst((ATermList) r_46);
      t_46 = (ATerm) ATgetNext((ATermList) r_46);
      {
        ATerm x_46 = NULL,z_46 = NULL;
        ATerm y_46 = NULL;
        t = SSLgetAnnotations(not_null(r_46));
        {
          y_46 = t;
          if(((x_46 != NULL) && (x_46 != y_46)))
            _fail(y_46);
          else
            x_46 = y_46;
        }
        {
          t = not_null(s_46);
          {
            ATerm b_47 = NULL;
            t = b_55(t);
            {
              z_46 = t;
              {
                t = not_null(t_46);
                {
                  ATerm d_47 = NULL;
                  t = c_55(t);
                  {
                    b_47 = t;
                    {
                      ATerm e_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_47)), not_null(z_46)), not_null(x_46));
                      {
                        e_47 = t;
                        if(((d_47 != NULL) && (d_47 != e_47)))
                          _fail(e_47);
                        else
                          d_47 = e_47;
                      }
                      t = not_null(d_47);
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
  ATerm o_47 = NULL;
  o_47 = t;
  n_47 :
  if(((ATgetType(o_47) == AT_LIST) && ATisEmpty(o_47)))
    {
      {
        ATerm q_47 = NULL,s_47 = NULL;
        ATerm i_20;
        i_20 = t;
        {
          ATerm r_47 = NULL;
          t = SSLgetAnnotations(not_null(o_47));
          {
            r_47 = t;
            if(((q_47 != NULL) && (q_47 != r_47)))
              _fail(r_47);
            else
              q_47 = r_47;
          }
        }
        t = i_20;
        {
          ATerm t_47 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_47));
          {
            t_47 = t;
            if(((s_47 != NULL) && (s_47 != t_47)))
              _fail(t_47);
            else
              s_47 = t_47;
          }
          t = not_null(s_47);
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
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL;
  z_47 = t;
  y_47 :
  if(match_cons(z_47, sym__2))
    {
      a_48 = ATgetArgument(z_47, 0);
      b_48 = ATgetArgument(z_47, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_5, not_null(a_48), not_null(b_48));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_87 (ATerm))
{
  ATerm j_20;
  j_20 = t;
  {
    ATerm e_5 (ATerm t)
    {
      t = term_k_20;
      t = k_87(t);
      return(t);
    }
    t = try_1(t, e_5);
  }
  t = j_20;
  {
    ATerm f_5 (ATerm t)
    {
      ATerm j_48 = NULL;
      ATerm l_20;
      l_20 = t;
      {
        ATerm h_48 = NULL;
        ATerm i_48 = NULL;
        i_48 = t;
        if(((h_48 != NULL) && (h_48 != i_48)))
          _fail(i_48);
        else
          h_48 = i_48;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_17, not_null(h_48));
          t = set_config_0(t);
        }
      }
      t = l_20;
      {
        ATerm k_48 = NULL;
        k_48 = t;
        if(((j_48 != NULL) && (j_48 != k_48)))
          _fail(k_48);
        else
          j_48 = k_48;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_48));
      }
      return(t);
    }
    ATerm g_5 (ATerm t)
    {
      ATerm p_20 = t;
      int s_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_20 = t;
          int x_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(x_20);
            }
          else
            {
              t = w_20;
              {
                t = k_87(t);
                t = Cons_2(t, _id, g_5);
              }
            }
          ;
          LocalPopChoice(s_20);
        }
      else
        {
          t = p_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, f_5, g_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
  ATerm y_20;
  y_20 = t;
  {
    ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL;
    f_49 = t;
    u_48 :
    if(match_cons(f_49, sym__3))
      {
        g_49 = ATgetArgument(f_49, 0);
        h_49 = ATgetArgument(f_49, 1);
        i_49 = ATgetArgument(f_49, 2);
        {
          if(((v_48 != NULL) && (v_48 != g_49)))
            _fail(g_49);
          else
            v_48 = g_49;
          {
            if(((w_48 != NULL) && (w_48 != h_49)))
              _fail(h_49);
            else
              w_48 = h_49;
            {
              if(((x_48 != NULL) && (x_48 != i_49)))
                _fail(i_49);
              else
                x_48 = i_49;
              t = SSL_table_put(not_null(v_48), not_null(w_48), not_null(x_48));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_87 (ATerm))
{
  ATerm l_49 = NULL;
  ATerm a_21;
  a_21 = t;
  {
    t = term_f_21;
    t = table_put_0(t);
  }
  t = a_21;
  {
    ATerm j_5 (ATerm t)
    {
      ATerm g_21 = t;
      int h_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_87(t);
          ;
          LocalPopChoice(h_21);
        }
      else
        {
          t = g_21;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_5);
    {
      ATerm k_5 (ATerm t)
      {
        ATerm i_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_21;
            l_21 = t;
            {
              ATerm m_21 = t;
              int n_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_v_18;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(n_21);
                }
              else
                {
                  t = m_21;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = l_21;
            {
              t = system_usage_0(t);
              {
                t = term_i_6;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(k_21);
          }
        else
          {
            t = i_21;
            {
              ATerm l_5 (ATerm t)
              {
                ATerm m_5 (ATerm t)
                {
                  ATerm m_49 = NULL;
                  m_49 = t;
                  if(((l_49 != NULL) && (l_49 != m_49)))
                    _fail(m_49);
                  else
                    l_49 = m_49;
                  return(t);
                }
                t = Undefined_1(t, m_5);
                return(t);
              }
              t = option_defined_1(t, l_5);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_49)), term_o_21));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_l_6;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_5);
      {
        ATerm p_21;
        p_21 = t;
        {
          t = term_s_19;
          t = table_destroy_0(t);
        }
        t = p_21;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm m_85 (ATerm))
{
  t = parse_options_1(t, j_85);
  {
    t = store_options_0(t);
    {
      t = l_85(t);
      {
        ATerm q_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, k_85);
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = q_21;
            {
              ATerm t_21 = t;
              int u_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_85(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(u_21);
                }
              else
                {
                  t = t_21;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_84(t);
        ;
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, y_84);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, n_5, a_85, b_85, o_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm u_84 (ATerm))
{
  ATerm p_5 (ATerm t)
  {
    ATerm u_5 (ATerm t)
    {
      ATerm a_22;
      a_22 = t;
      {
        ATerm p_49 = NULL;
        ATerm q_49 = NULL;
        t = term_m_17;
        {
          t = get_config_0(t);
          {
            q_49 = t;
            if(((p_49 != NULL) && (p_49 != q_49)))
              _fail(q_49);
            else
              p_49 = q_49;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, not_null(p_49)));
          t = printnl_0(t);
        }
      }
      t = a_22;
      return(t);
    }
    t = if_verbose2_1(t, u_5);
    return(t);
  }
  t = iowrap_4(t, s_84, t_84, u_84, p_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_84 (ATerm), ATerm r_84 (ATerm))
{
  t = iowrap_3(t, q_84, r_84, default_usage_0);
  return(t);
}
ATerm stratego_warnings_0 (ATerm t)
{
  t = iowrap_2(t, Stratego_warnings_0, stratego_warnings_options_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = stratego_warnings_0(t);
  return(t);
}
