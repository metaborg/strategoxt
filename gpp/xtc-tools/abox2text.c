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
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Anno_2;
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
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  init_constant_terms();
}
ATerm term_k_35;
ATerm term_w_34;
ATerm term_d_34;
ATerm term_x_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_d_33;
ATerm term_b_33;
ATerm term_i_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_u_29;
ATerm term_j_29;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_w_27;
ATerm term_i_27;
ATerm term_c_27;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_q_26;
ATerm term_i_26;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_r_25;
ATerm term_g_25;
ATerm term_p_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_x_22;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_m_22;
ATerm term_k_22;
ATerm term_i_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_e_20;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_g_19;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_c_17;
ATerm term_s_16;
ATerm term_o_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_h_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_p_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_b_8;
ATerm term_z_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_s_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_k_7;
ATerm term_e_7;
ATerm term_c_7;
ATerm term_v_6;
ATerm term_q_6;
void init_constant_terms (void)
{
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_7, term_v_6, term_w_7);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_8, term_d_8, term_e_8);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_8, term_h_8, term_p_8);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_8, term_w_8, term_b_9);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_9, term_e_9, term_g_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_9, term_j_9, term_k_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_r_9, term_s_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_x_9, term_y_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_d_10, term_h_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_10, term_r_10, term_s_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_e_11, term_f_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_11, term_m_11, term_o_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_v_11, term_w_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_12, term_f_12, term_g_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_n_12, term_o_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_s_12, term_t_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_c_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_k_13, term_l_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_s_13, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_b_14, term_c_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_p_14, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_v_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_c_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_l_15, term_m_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_r_15, term_u_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_z_15, term_a_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_f_16, term_g_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym__2, term_c_17, term_t_17);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_c_17, term_p_20);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_z_22, term_i_22);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym__2, term_t_25, term_s_22);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_c_26);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_26);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__2, term_s_26, term_s_22);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_d_31, term_e_31);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym__2, term_u_29, term_s_22);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym__3, term_d_31, term_e_31, (ATerm) ATempty);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm pass_width_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm x_64 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm b_83 (ATerm), ATerm c_83 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm signal_to_descr_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm b_69 (ATerm));
ATerm signal_from_number_0 (ATerm);
ATerm warn_ifsignaled_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_2 (ATerm, ATerm l_63 (ATerm), ATerm m_63 (ATerm));
ATerm fork_and_wait_1 (ATerm, ATerm n_63 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm e_80 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm f_76 (ATerm));
ATerm repeat_1 (ATerm, ATerm z_77 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_64 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm d_80 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm f_80 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm t_72 (ATerm), ATerm u_72 (ATerm));
ATerm union_1 (ATerm, ATerm p_72 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm o_80 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm fopen_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm can_read_file_0 (ATerm);
ATerm read_repository_file_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm s_82 (ATerm));
ATerm assert_1 (ATerm, ATerm d_79 (ATerm));
ATerm obsolete_1 (ATerm, ATerm q_64 (ATerm));
ATerm open_file_0 (ATerm);
ATerm access_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm i_61 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm u_82 (ATerm), ATerm v_82 (ATerm));
ATerm abox2text_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm a_79 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm v_79 (ATerm), ATerm w_79 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm z_78 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm e_82 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm f_82 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm input_option_0 (ATerm);
ATerm abox2text_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm c_75 (ATerm), ATerm d_75 (ATerm));
ATerm crush_2 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm a_80 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_84 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_86 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_86 (ATerm));
ATerm Program_1 (ATerm, ATerm p_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm q_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_68 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_85 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_69 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm z_54 (ATerm), ATerm a_55 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_64 (ATerm));
ATerm map_1 (ATerm, ATerm q_68 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_86 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm i_56 (ATerm), ATerm j_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_86 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_86 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm l_84 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm m_84 (ATerm), ATerm n_84 (ATerm));
ATerm io_abox2text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm subt_0 (ATerm t)
{
  ATerm f_0 = NULL,w_0 = NULL,x_0 = NULL;
  f_0 = t;
  e_0 :
  if(match_cons(f_0, sym__2))
    {
      w_0 = ATgetArgument(f_0, 0);
      x_0 = ATgetArgument(f_0, 1);
      {
        ATerm m_6 = t;
        int n_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(w_0), not_null(x_0));
            ;
            LocalPopChoice(n_6);
          }
        else
          {
            t = m_6;
            t = SSL_subtr(not_null(w_0), not_null(x_0));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm j_1 = NULL;
  ATerm k_1 = NULL,z_1 = NULL;
  ATerm y_1 = NULL;
  t = term_q_6;
  {
    ATerm r_6 = t;
    int s_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(s_6);
      }
    else
      {
        t = r_6;
        t = term_v_6;
      }
    {
      y_1 = t;
      if(((k_1 != NULL) && (k_1 != y_1)))
        _fail(y_1);
      else
        k_1 = y_1;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_1), term_v_6);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          z_1 = t;
          if(((j_1 != NULL) && (j_1 != z_1)))
            _fail(z_1);
          else
            j_1 = z_1;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_1)), term_q_6);
  return(t);
}
ATerm pass_width_0 (ATerm t)
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_7;
      t = get_config_0(t);
      LocalPopChoice(b_7);
      {
        ATerm u_2 = NULL;
        ATerm y_2 = NULL;
        y_2 = t;
        if(((u_2 != NULL) && (u_2 != y_2)))
          _fail(y_2);
        else
          u_2 = y_2;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_2)), term_c_7);
      }
    }
  else
    {
      t = a_7;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL;
  f_3 = t;
  e_3 :
  if(match_cons(f_3, sym_stdin_0))
    {
      ATerm h_3 = NULL;
      ATerm i_3 = NULL;
      t = term_e_7;
      {
        t = ReadFromFile_0(t);
        {
          i_3 = t;
          if(((h_3 != NULL) && (h_3 != i_3)))
            _fail(i_3);
          else
            h_3 = i_3;
        }
      }
      t = not_null(h_3);
    }
  else
    {
      if(match_cons(f_3, sym_FILE_1))
        {
          g_3 = ATgetArgument(f_3, 0);
          {
            ATerm k_3 = NULL;
            ATerm l_3 = NULL;
            t = not_null(g_3);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  l_3 = t;
                  if(((k_3 != NULL) && (k_3 != l_3)))
                    _fail(l_3);
                  else
                    k_3 = l_3;
                }
              }
            }
            t = not_null(k_3);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
  u_3 = t;
  s_3 :
  if(match_cons(u_3, sym__2))
    {
      v_3 = ATgetArgument(u_3, 0);
      x_3 = ATgetArgument(u_3, 1);
      t_3 :
      if(match_cons(v_3, sym_Stream_1))
        {
          w_3 = ATgetArgument(v_3, 0);
          {
            ATerm a_4 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(w_3), not_null(x_3));
            {
              ATerm b_4 = NULL;
              b_4 = t;
              if(((a_4 != NULL) && (a_4 != b_4)))
                _fail(b_4);
              else
                a_4 = b_4;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_4));
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
ATerm WriteToFile_1 (ATerm t, ATerm x_64 (ATerm))
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL;
  i_4 = t;
  h_4 :
  if(match_cons(i_4, sym__2))
    {
      j_4 = ATgetArgument(i_4, 0);
      k_4 = ATgetArgument(i_4, 1);
      {
        ATerm n_4 = NULL,p_4 = NULL;
        t = not_null(j_4);
        {
          ATerm o_4 = NULL;
          o_4 = t;
          if(((n_4 != NULL) && (n_4 != o_4)))
            _fail(o_4);
          else
            n_4 = o_4;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_4), term_k_7);
            {
              t = open_stream_0(t);
              {
                ATerm q_4 = NULL;
                q_4 = t;
                if(((p_4 != NULL) && (p_4 != q_4)))
                  _fail(q_4);
                else
                  p_4 = q_4;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_4), not_null(k_4));
                  {
                    t = x_64(t);
                    {
                      t = fclose_0(t);
                      t = not_null(k_4);
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
ATerm write_to_0 (ATerm t)
{
  ATerm w_4 = NULL;
  ATerm y_4 = NULL;
  w_4 = t;
  {
    ATerm z_4 = NULL;
    t = xtc_new_file_0(t);
    {
      z_4 = t;
      {
        if(((y_4 != NULL) && (y_4 != z_4)))
          _fail(z_4);
        else
          y_4 = z_4;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_4), not_null(w_4));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(y_4);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_4));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm b_83 (ATerm), ATerm c_83 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, b_83, c_83);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm d_5 = NULL;
  d_5 = t;
  t = SSL_close_file(not_null(d_5));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL;
  i_5 = t;
  h_5 :
  if(match_cons(i_5, sym__2))
    {
      j_5 = ATgetArgument(i_5, 0);
      k_5 = ATgetArgument(i_5, 1);
      t = SSL_execvp(not_null(j_5), not_null(k_5));
    }
  else
    {
      _fail(t);
    }
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
ATerm int_to_string_0 (ATerm t)
{
  ATerm p_5 = NULL;
  p_5 = t;
  t = SSL_int_to_string(not_null(p_5));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL;
  x_5 = t;
  w_5 :
  if(match_cons(x_5, sym_UnknownSignal_1))
    {
      y_5 = ATgetArgument(x_5, 0);
      {
        ATerm c_6 = NULL;
        ATerm d_6 = NULL;
        t = not_null(y_5);
        {
          t = int_to_string_0(t);
          {
            d_6 = t;
            if(((c_6 != NULL) && (c_6 != d_6)))
              _fail(d_6);
            else
              c_6 = d_6;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_7), not_null(c_6)), term_o_7);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(x_5, sym_Signal_3))
        {
          y_5 = ATgetArgument(x_5, 0);
          z_5 = ATgetArgument(x_5, 1);
          a_6 = ATgetArgument(x_5, 2);
          {
            ATerm h_6 = NULL;
            ATerm i_6 = NULL;
            t = not_null(z_5);
            {
              t = int_to_string_0(t);
              {
                i_6 = t;
                if(((h_6 != NULL) && (h_6 != i_6)))
                  _fail(i_6);
                else
                  h_6 = i_6;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_6)), term_s_7), not_null(h_6)), term_q_7), not_null(y_5));
              t = concat_strings_0(t);
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
ATerm fetch_elem_1 (ATerm t, ATerm b_69 (ATerm))
{
  ATerm o_6 = NULL;
  ATerm c_0 (ATerm t)
  {
    ATerm p_6 = NULL;
    t = b_69(t);
    {
      p_6 = t;
      if(((o_6 != NULL) && (o_6 != p_6)))
        _fail(p_6);
      else
        o_6 = p_6;
    }
    return(t);
  }
  t = fetch_1(t, c_0);
  t = not_null(o_6);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm u_6 = NULL;
  u_6 = t;
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_16), term_b_16), term_v_15), term_n_15), term_h_15), term_z_14), term_r_14), term_k_14), term_g_14), term_u_13), term_m_13), term_d_13), term_y_12), term_q_12), term_h_12), term_z_11), term_r_11), term_g_11), term_y_10), term_p_10), term_b_10), term_t_9), term_m_9), term_h_9), term_c_9), term_u_8), term_f_8), term_z_7);
        {
          ATerm h_0 (ATerm t)
          {
            ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL;
            w_6 = t;
            t_6 :
            if(match_cons(w_6, sym_Signal_3))
              {
                x_6 = ATgetArgument(w_6, 0);
                y_6 = ATgetArgument(w_6, 1);
                z_6 = ATgetArgument(w_6, 2);
                if(((u_6 != NULL) && (u_6 != y_6)))
                  _fail(y_6);
                else
                  u_6 = y_6;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, h_0);
        }
        ;
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(u_6));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm i_16;
  i_16 = t;
  {
    ATerm p_0 (ATerm t)
    {
      ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
      g_7 = t;
      f_7 :
      if(match_cons(g_7, sym_WaitStatus_3))
        {
          h_7 = ATgetArgument(g_7, 0);
          i_7 = ATgetArgument(g_7, 1);
          j_7 = ATgetArgument(g_7, 2);
          {
            ATerm m_7 = NULL;
            t = not_null(i_7);
            {
              ATerm j_16 = t;
              if((PushChoice() == 0))
                {
                  ATerm l_7 = NULL;
                  l_7 = t;
                  d_7 :
                  if(!(match_int(l_7, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = j_16;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm n_7 = NULL;
                    n_7 = t;
                    if(((m_7 != NULL) && (m_7 != n_7)))
                      _fail(n_7);
                    else
                      m_7 = n_7;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_o_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_7)), term_s_16));
                      t = printnl_0(t);
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
    t = try_1(t, p_0);
  }
  t = i_16;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm r_7 = NULL;
  r_7 = t;
  t = SSL_waitpid(not_null(r_7));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm l_63 (ATerm), ATerm m_63 (ATerm))
{
  ATerm y_7 = NULL;
  ATerm a_8 = NULL;
  y_7 = t;
  {
    t = fork_0(t);
    {
      a_8 = t;
      {
        ATerm y_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_8 = NULL;
            c_8 = t;
            x_7 :
            if(match_int(c_8, 0))
              {
                t = not_null(y_7);
                t = l_63(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(z_16);
          }
        else
          {
            t = y_16;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_8), not_null(y_7));
              t = m_63(t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm n_63 (ATerm))
{
  ATerm l_8 = NULL;
  ATerm q_0 (ATerm t)
  {
    ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
    m_8 = t;
    k_8 :
    if(match_cons(m_8, sym__2))
      {
        n_8 = ATgetArgument(m_8, 0);
        o_8 = ATgetArgument(m_8, 1);
        {
          ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
          if(((l_8 != NULL) && (l_8 != o_8)))
            _fail(o_8);
          else
            l_8 = o_8;
          {
            t = not_null(n_8);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  q_8 = t;
                  i_8 :
                  if(match_cons(q_8, sym_WaitStatus_3))
                    {
                      r_8 = ATgetArgument(q_8, 0);
                      s_8 = ATgetArgument(q_8, 1);
                      t_8 = ATgetArgument(q_8, 2);
                      j_8 :
                      if(match_int(r_8, 0))
                        {
                          t = not_null(l_8);
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
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = fork_2(t, n_63, q_0);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
  y_8 = t;
  x_8 :
  if(match_cons(y_8, sym__2))
    {
      z_8 = ATgetArgument(y_8, 0);
      a_9 = ATgetArgument(y_8, 1);
      {
        ATerm r_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_8), not_null(a_9));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, r_0);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm f_9 = NULL;
  f_9 = t;
  t = SSL_table_keys(not_null(f_9));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm l_9 = NULL;
  l_9 = t;
  {
    t = table_keys_0(t);
    {
      ATerm s_0 (ATerm t)
      {
        ATerm n_9 = NULL;
        ATerm p_9 = NULL;
        n_9 = t;
        {
          ATerm q_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), not_null(n_9));
          {
            t = table_get_0(t);
            {
              q_9 = t;
              if(((p_9 != NULL) && (p_9 != q_9)))
                _fail(q_9);
              else
                p_9 = q_9;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_9), not_null(p_9));
        }
        return(t);
      }
      t = map_1(t, s_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm e_80 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm a_17;
    a_17 = t;
    {
      ATerm v_9 = NULL;
      ATerm w_9 = NULL;
      t = term_q_6;
      {
        t = get_config_0(t);
        {
          w_9 = t;
          if(((v_9 != NULL) && (v_9 != w_9)))
            _fail(w_9);
          else
            v_9 = w_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), term_l_15);
        t = geq_0(t);
      }
    }
    t = a_17;
    t = e_80(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm b_17;
  b_17 = t;
  {
    ATerm z_9 = NULL;
    ATerm a_10 = NULL;
    a_10 = t;
    if(((z_9 != NULL) && (z_9 != a_10)))
      _fail(a_10);
    else
      z_9 = a_10;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_16, not_null(z_9));
      t = printnl_0(t);
    }
  }
  t = b_17;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm g_10 = NULL;
  ATerm i_10 = NULL,j_10 = NULL;
  g_10 = t;
  {
    ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATmakeAppl(sym_Tool_1, not_null(g_10)));
    {
      t = table_get_0(t);
      {
        k_10 = t;
        e_10 :
        if(((ATgetType(k_10) == AT_LIST) && !(ATisEmpty(k_10))))
          {
            l_10 = ATgetFirst((ATermList) k_10);
            o_10 = (ATerm) ATgetNext((ATermList) k_10);
            f_10 :
            if(match_cons(l_10, sym__2))
              {
                m_10 = ATgetArgument(l_10, 0);
                n_10 = ATgetArgument(l_10, 1);
                {
                  if(((i_10 != NULL) && (i_10 != m_10)))
                    _fail(m_10);
                  else
                    i_10 = m_10;
                  if(((j_10 != NULL) && (j_10 != n_10)))
                    _fail(n_10);
                  else
                    j_10 = n_10;
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
    t = not_null(j_10);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym__2))
    {
      w_10 = ATgetArgument(v_10, 0);
      x_10 = ATgetArgument(v_10, 1);
      {
        ATerm a_11 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATmakeAppl(sym_Tool_1, not_null(w_10)));
        {
          t = table_get_0(t);
          {
            ATerm u_0 (ATerm t)
            {
              ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
              b_11 = t;
              t_10 :
              if(match_cons(b_11, sym__2))
                {
                  c_11 = ATgetArgument(b_11, 0);
                  d_11 = ATgetArgument(b_11, 1);
                  {
                    if(((x_10 != NULL) && (x_10 != c_11)))
                      _fail(c_11);
                    else
                      x_10 = c_11;
                    if(((a_11 != NULL) && (a_11 != d_11)))
                      _fail(d_11);
                    else
                      a_11 = d_11;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, u_0);
          }
        }
        t = not_null(a_11);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm f_76 (ATerm))
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      {
        ATerm m_17 = t;
        int n_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = filter_1(t, f_76);
              return(t);
            }
            t = Cons_2(t, f_76, v_0);
            ;
            LocalPopChoice(n_17);
          }
        else
          {
            t = m_17;
            {
              ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
              i_11 = t;
              h_11 :
              if(((ATgetType(i_11) == AT_LIST) && !(ATisEmpty(i_11))))
                {
                  j_11 = ATgetFirst((ATermList) i_11);
                  k_11 = (ATerm) ATgetNext((ATermList) i_11);
                  {
                    t = not_null(k_11);
                    t = filter_1(t, f_76);
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
ATerm repeat_1 (ATerm t, ATerm z_77 (ATerm))
{
  ATerm n_11 (ATerm t)
  {
    ATerm y_0 (ATerm t)
    {
      t = z_77(t);
      t = n_11(t);
      return(t);
    }
    t = try_1(t, y_0);
    return(t);
  }
  t = n_11(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm o_17;
  o_17 = t;
  {
    ATerm z_0 (ATerm t)
    {
      t = term_u_17;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm v_17 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_17;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, z_0);
  }
  t = o_17;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm y_17;
  y_17 = t;
  {
    ATerm p_11 = NULL;
    ATerm q_11 = NULL;
    q_11 = t;
    if(((p_11 != NULL) && (p_11 != q_11)))
      _fail(q_11);
    else
      p_11 = q_11;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_16, (ATerm) ATinsert(ATempty, not_null(p_11)));
      t = printnl_0(t);
    }
  }
  t = y_17;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_64 (ATerm))
{
  ATerm z_17;
  z_17 = t;
  {
    t = n_64(t);
    t = debug_0(t);
  }
  t = z_17;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm d_80 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm a_18;
    a_18 = t;
    {
      ATerm t_11 = NULL;
      ATerm u_11 = NULL;
      t = term_q_6;
      {
        t = get_config_0(t);
        {
          u_11 = t;
          if(((t_11 != NULL) && (t_11 != u_11)))
            _fail(u_11);
          else
            t_11 = u_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_11), term_m_11);
        t = geq_0(t);
      }
    }
    t = a_18;
    t = d_80(t);
    return(t);
  }
  t = try_1(t, a_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm f_80 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm c_18;
    c_18 = t;
    {
      ATerm x_11 = NULL;
      ATerm y_11 = NULL;
      t = term_q_6;
      {
        t = get_config_0(t);
        {
          y_11 = t;
          if(((x_11 != NULL) && (x_11 != y_11)))
            _fail(y_11);
          else
            x_11 = y_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_11), term_w_8);
        t = geq_0(t);
      }
    }
    t = c_18;
    t = f_80(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  c_12 = t;
  b_12 :
  if(match_cons(c_12, sym__2))
    {
      d_12 = ATgetArgument(c_12, 0);
      e_12 = ATgetArgument(c_12, 1);
      if(((d_12 != NULL) && (d_12 != e_12)))
        _fail(e_12);
      else
        d_12 = e_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm t_72 (ATerm), ATerm u_72 (ATerm))
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
  k_12 = t;
  j_12 :
  if(((ATgetType(k_12) == AT_LIST) && !(ATisEmpty(k_12))))
    {
      l_12 = ATgetFirst((ATermList) k_12);
      m_12 = (ATerm) ATgetNext((ATermList) k_12);
      {
        t = u_72(t);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm p_12 = NULL;
            p_12 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_12), not_null(p_12));
              t = t_72(t);
            }
            return(t);
          }
          t = fetch_1(t, c_1);
        }
        t = not_null(m_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm p_72 (ATerm))
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym__2))
    {
      w_12 = ATgetArgument(v_12, 0);
      x_12 = ATgetArgument(v_12, 1);
      {
        t = not_null(w_12);
        {
          ATerm b_13 (ATerm t)
          {
            ATerm f_18 = t;
            int g_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(x_12);
                ;
                LocalPopChoice(g_18);
              }
            else
              {
                t = f_18;
                {
                  ATerm h_18 = t;
                  int j_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_1 (ATerm t)
                      {
                        t = not_null(x_12);
                        return(t);
                      }
                      t = HdMember_p__2(t, p_72, d_1);
                      t = b_13(t);
                      ;
                      LocalPopChoice(j_18);
                    }
                  else
                    {
                      t = h_18;
                      t = Cons_2(t, _id, b_13);
                    }
                }
              }
            return(t);
          }
          t = b_13(t);
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
ATerm get_0 (ATerm t)
{
  t = table_get_0(t);
  return(t);
}
ATerm table_append_0 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
  g_13 = t;
  f_13 :
  if(match_cons(g_13, sym__3))
    {
      h_13 = ATgetArgument(g_13, 0);
      i_13 = ATgetArgument(g_13, 1);
      j_13 = ATgetArgument(g_13, 2);
      {
        ATerm k_18;
        k_18 = t;
        {
          ATerm n_13 = NULL;
          ATerm o_13 = NULL,q_13 = NULL;
          ATerm p_13 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), not_null(i_13));
          {
            ATerm l_18 = t;
            int o_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(o_18);
              }
            else
              {
                t = l_18;
                t = (ATerm) ATempty;
              }
            {
              p_13 = t;
              if(((o_13 != NULL) && (o_13 != p_13)))
                _fail(p_13);
              else
                o_13 = p_13;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_13), not_null(j_13));
            {
              t = union_0(t);
              {
                q_13 = t;
                if(((n_13 != NULL) && (n_13 != q_13)))
                  _fail(q_13);
                else
                  n_13 = q_13;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_13), not_null(i_13), not_null(n_13));
            t = set_0(t);
          }
        }
        t = k_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm o_80 (ATerm))
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
  y_13 = t;
  x_13 :
  if(match_cons(y_13, sym__2))
    {
      z_13 = ATgetArgument(y_13, 0);
      a_14 = ATgetArgument(y_13, 1);
      {
        t = not_null(a_14);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
            d_14 = t;
            w_13 :
            if(match_cons(d_14, sym__2))
              {
                e_14 = ATgetArgument(d_14, 0);
                f_14 = ATgetArgument(d_14, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(z_13), not_null(e_14), not_null(f_14));
                  t = o_80(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, e_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL;
  ATerm u_14 (ATerm t)
  {
    t = SSL_fclose(not_null(o_14));
    return(t);
  }
  o_14 = t;
  m_14 :
  if(match_cons(o_14, sym_Stream_1))
    {
      n_14 = ATgetArgument(o_14, 0);
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(n_14));
            ;
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            t = u_14(t);
          }
      }
    }
  else
    {
      t = u_14(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL;
  x_14 = t;
  w_14 :
  if(match_cons(x_14, sym_Stream_1))
    {
      y_14 = ATgetArgument(x_14, 0);
      t = SSL_read_term_from_stream(not_null(y_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
  e_15 = t;
  d_15 :
  if(match_cons(e_15, sym__2))
    {
      f_15 = ATgetArgument(e_15, 0);
      g_15 = ATgetArgument(e_15, 1);
      {
        ATerm j_15 = NULL;
        t = SSL_fopen(not_null(f_15), not_null(g_15));
        {
          ATerm k_15 = NULL;
          k_15 = t;
          if(((j_15 != NULL) && (j_15 != k_15)))
            _fail(k_15);
          else
            j_15 = k_15;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_15));
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
  ATerm o_15 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm p_15 = NULL;
    p_15 = t;
    if(((o_15 != NULL) && (o_15 != p_15)))
      _fail(p_15);
    else
      o_15 = p_15;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_15));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm s_15 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm t_15 = NULL;
    t_15 = t;
    if(((s_15 != NULL) && (s_15 != t_15)))
      _fail(t_15);
    else
      s_15 = t_15;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_15));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm w_15 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm x_15 = NULL;
    x_15 = t;
    if(((w_15 != NULL) && (w_15 != x_15)))
      _fail(x_15);
    else
      w_15 = x_15;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_15));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm d_16 = NULL;
  d_16 = t;
  c_16 :
  if(match_cons(d_16, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(d_16, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(d_16, sym_stdin_0))
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
  ATerm n_16 = NULL;
  ATerm p_16 = NULL,q_16 = NULL;
  n_16 = t;
  {
    ATerm r_16 = NULL;
    ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
    t = not_null(n_16);
    {
      r_16 = t;
      {
        t = SSL_explode_term(not_null(r_16));
        {
          t_16 = t;
          k_16 :
          if(match_cons(t_16, sym__2))
            {
              u_16 = ATgetArgument(t_16, 0);
              v_16 = ATgetArgument(t_16, 1);
              l_16 :
              if(match_string(u_16, ""))
                {
                  m_16 :
                  if(((ATgetType(v_16) == AT_LIST) && !(ATisEmpty(v_16))))
                    {
                      w_16 = ATgetFirst((ATermList) v_16);
                      x_16 = (ATerm) ATgetNext((ATermList) v_16);
                      {
                        if(((q_16 != NULL) && (q_16 != w_16)))
                          _fail(w_16);
                        else
                          q_16 = w_16;
                        if(((p_16 != NULL) && (p_16 != x_16)))
                          _fail(x_16);
                        else
                          p_16 = x_16;
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
    t = not_null(q_16);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL;
  f_17 = t;
  e_17 :
  if(match_cons(f_17, sym__2))
    {
      g_17 = ATgetArgument(f_17, 0);
      h_17 = ATgetArgument(f_17, 1);
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            {
              ATerm x_18 = t;
              int y_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_1 (ATerm t)
                  {
                    ATerm i_17 = NULL,j_17 = NULL;
                    i_17 = t;
                    d_17 :
                    if(match_cons(i_17, sym_Path_1))
                      {
                        j_17 = ATgetArgument(i_17, 0);
                        t = not_null(j_17);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, f_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(y_18);
                }
              else
                {
                  t = x_18;
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
  ATerm r_17 = NULL;
  ATerm z_18 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_17 = NULL;
      ATerm q_17 = NULL;
      q_17 = t;
      if(((p_17 != NULL) && (p_17 != q_17)))
        _fail(q_17);
      else
        p_17 = q_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_17), term_g_19);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(f_19);
    }
  else
    {
      t = z_18;
      {
        ATerm g_1 (ATerm t)
        {
          t = term_o_19;
          return(t);
        }
        t = debug_1(t, g_1);
        _fail(t);
      }
    }
  {
    ATerm p_19;
    p_19 = t;
    {
      ATerm s_17 = NULL;
      t = read_from_stream_0(t);
      {
        s_17 = t;
        if(((r_17 != NULL) && (r_17 != s_17)))
          _fail(s_17);
        else
          r_17 = s_17;
      }
    }
    t = p_19;
    {
      t = fclose_0(t);
      t = not_null(r_17);
    }
  }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm w_17 = NULL;
  ATerm x_17 = NULL;
  x_17 = t;
  if(((w_17 != NULL) && (w_17 != x_17)))
    _fail(x_17);
  else
    w_17 = x_17;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_17), (ATerm) ATinsert(ATempty, term_q_19));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm r_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(s_19);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = r_19;
      {
        ATerm t_19 = t;
        int z_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_20 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_20;
              }
            {
              ATerm h_1 (ATerm t)
              {
                t = term_e_20;
                return(t);
              }
              t = debug_1(t, h_1);
            }
            ;
            LocalPopChoice(z_19);
          }
        else
          {
            t = t_19;
            {
              ATerm i_1 (ATerm t)
              {
                t = term_h_20;
                return(t);
              }
              t = debug_1(t, i_1);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm b_18 = NULL;
  ATerm d_18 = NULL;
  b_18 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm m_1 (ATerm t)
      {
        t = term_m_20;
        return(t);
      }
      t = debug_1(t, m_1);
      return(t);
    }
    t = if_verbose5_1(t, l_1);
    {
      ATerm n_20 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATmakeAppl(sym_Imported_1, not_null(b_18)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_20;
        }
      {
        ATerm o_20;
        o_20 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_c_17, term_p_20, (ATerm) ATinsert(ATempty, not_null(b_18)));
          t = table_put_0(t);
        }
        t = o_20;
        {
          ATerm n_1 (ATerm t)
          {
            ATerm o_1 (ATerm t)
            {
              t = term_q_20;
              return(t);
            }
            t = debug_1(t, o_1);
            return(t);
          }
          t = if_verbose4_1(t, n_1);
          {
            t = read_repository_file_0(t);
            {
              ATerm p_1 (ATerm t)
              {
                ATerm q_1 (ATerm t)
                {
                  t = term_r_20;
                  return(t);
                }
                t = say_1(t, q_1);
                return(t);
              }
              t = if_verbose6_1(t, p_1);
              {
                ATerm e_18 = NULL;
                e_18 = t;
                if(((d_18 != NULL) && (d_18 != e_18)))
                  _fail(e_18);
                else
                  d_18 = e_18;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_17, not_null(d_18));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm r_1 (ATerm t)
                      {
                        ATerm s_1 (ATerm t)
                        {
                          t = term_u_20;
                          return(t);
                        }
                        t = say_1(t, s_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, r_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_c_17, (ATerm)ATmakeAppl(sym_Imported_1, not_null(b_18)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm t_1 (ATerm t)
                            {
                              ATerm u_1 (ATerm t)
                              {
                                t = term_r_20;
                                return(t);
                              }
                              t = say_1(t, u_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, t_1);
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
ATerm getenv_0 (ATerm t)
{
  ATerm i_18 = NULL;
  i_18 = t;
  t = SSL_getenv(not_null(i_18));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_20;
      t = get_config_0(t);
      ;
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      {
        ATerm y_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_b_21;
            t = getenv_0(t);
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = y_20;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm w_1 (ATerm t)
    {
      t = term_c_21;
      return(t);
    }
    t = debug_1(t, w_1);
    return(t);
  }
  t = if_verbose5_1(t, v_1);
  {
    ATerm d_21;
    d_21 = t;
    {
      ATerm f_21 = t;
      int g_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_h_21;
          t = table_get_0(t);
          ;
          LocalPopChoice(g_21);
        }
      else
        {
          t = f_21;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = d_21;
    {
      ATerm x_1 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          t = term_i_21;
          return(t);
        }
        t = debug_1(t, a_2);
        return(t);
      }
      t = if_verbose5_1(t, x_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm j_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm c_2 (ATerm t)
        {
          t = term_m_21;
          return(t);
        }
        t = debug_1(t, c_2);
        return(t);
      }
      t = if_verbose5_1(t, b_2);
      {
        t = xtc_load_0(t);
        {
          ATerm n_21 = t;
          int o_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(o_21);
            }
          else
            {
              t = n_21;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm d_2 (ATerm t)
            {
              ATerm e_2 (ATerm t)
              {
                t = term_m_21;
                return(t);
              }
              t = debug_1(t, e_2);
              return(t);
            }
            t = if_verbose5_1(t, d_2);
          }
        }
      }
      ;
      LocalPopChoice(l_21);
    }
  else
    {
      t = j_21;
      {
        ATerm m_18 = NULL;
        ATerm n_18 = NULL;
        n_18 = t;
        if(((m_18 != NULL) && (m_18 != n_18)))
          _fail(n_18);
        else
          m_18 = n_18;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_21), not_null(m_18)), term_p_21);
          {
            t = error_0(t);
            {
              ATerm f_2 (ATerm t)
              {
                t = term_c_17;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm g_2 (ATerm t)
                    {
                      t = term_r_21;
                      return(t);
                    }
                    t = debug_1(t, g_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, f_2);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm s_82 (ATerm))
{
  ATerm r_18 = NULL;
  ATerm s_21;
  s_21 = t;
  {
    ATerm s_18 = NULL;
    t = s_82(t);
    {
      t = xtc_find_warning_0(t);
      {
        s_18 = t;
        if(((r_18 != NULL) && (r_18 != s_18)))
          _fail(s_18);
        else
          r_18 = s_18;
      }
    }
  }
  t = s_21;
  {
    ATerm t_21;
    t_21 = t;
    {
      ATerm t_18 = NULL;
      ATerm u_18 = NULL;
      u_18 = t;
      if(((t_18 != NULL) && (t_18 != u_18)))
        _fail(u_18);
      else
        t_18 = u_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_18), not_null(t_18));
        t = call_0(t);
      }
    }
    t = t_21;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm d_79 (ATerm))
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym__2))
    {
      d_19 = ATgetArgument(c_19, 0);
      e_19 = ATgetArgument(c_19, 1);
      {
        ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
        ATerm u_21;
        u_21 = t;
        {
          ATerm k_19 = NULL;
          ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
          t = d_79(t);
          {
            k_19 = t;
            {
              if(((h_19 != NULL) && (h_19 != k_19)))
                _fail(k_19);
              else
                h_19 = k_19;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(h_19), not_null(d_19), not_null(e_19));
                {
                  t = table_push_0(t);
                  {
                    ATerm c_22 = t;
                    int h_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_19), term_i_22);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(h_22);
                      }
                    else
                      {
                        t = c_22;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      l_19 = t;
                      a_19 :
                      if(((ATgetType(l_19) == AT_LIST) && !(ATisEmpty(l_19))))
                        {
                          m_19 = ATgetFirst((ATermList) l_19);
                          n_19 = (ATerm) ATgetNext((ATermList) l_19);
                          {
                            if(((i_19 != NULL) && (i_19 != m_19)))
                              _fail(m_19);
                            else
                              i_19 = m_19;
                            {
                              if(((j_19 != NULL) && (j_19 != n_19)))
                                _fail(n_19);
                              else
                                j_19 = n_19;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(h_19), term_i_22, (ATerm) ATinsert(CheckATermList(not_null(j_19)), (ATerm) ATinsert(CheckATermList(not_null(i_19)), not_null(d_19))));
                                t = table_put_0(t);
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
        }
        t = u_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm q_64 (ATerm))
{
  ATerm j_22;
  j_22 = t;
  {
    t = q_64(t);
    {
      ATerm h_2 (ATerm t)
      {
        t = term_k_22;
        return(t);
      }
      t = debug_1(t, h_2);
    }
  }
  t = j_22;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  ATerm f_20 (ATerm t)
  {
    ATerm l_22 = t;
    if((PushChoice() == 0))
      {
        ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
        a_20 = t;
        u_19 :
        if(match_cons(a_20, sym__2))
          {
            b_20 = ATgetArgument(a_20, 0);
            c_20 = ATgetArgument(a_20, 1);
            {
            }
          }
        else
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_22;
      }
    {
      ATerm i_2 (ATerm t)
      {
        t = term_m_22;
        return(t);
      }
      t = obsolete_1(t, i_2);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), term_k_7);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm g_20 (ATerm t)
  {
    t = SSL_open_file(not_null(x_19), not_null(y_19));
    return(t);
  }
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym__2))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      {
        ATerm n_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_20(t);
            ;
            LocalPopChoice(o_22);
          }
        else
          {
            t = n_22;
            t = g_20(t);
          }
      }
    }
  else
    {
      t = f_20(t);
    }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym__2))
    {
      k_20 = ATgetArgument(j_20, 0);
      l_20 = ATgetArgument(j_20, 1);
      t = SSL_access(not_null(k_20), not_null(l_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm s_20 = NULL;
  ATerm t_20 = NULL;
  t_20 = t;
  if(((s_20 != NULL) && (s_20 != t_20)))
    _fail(t_20);
  else
    s_20 = t_20;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_20), (ATerm) ATinsert(ATempty, term_p_22));
    t = access_0(t);
  }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm z_20 = NULL;
  ATerm e_21 = NULL;
  t = term_s_22;
  {
    t = new_0(t);
    {
      e_21 = t;
      if(((z_20 != NULL) && (z_20 != e_21)))
        _fail(e_21);
      else
        z_20 = e_21;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_20), term_x_22);
    {
      t = conc_strings_0(t);
      {
        ATerm j_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, j_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm k_21 = NULL;
  t = new_file_0(t);
  {
    k_21 = t;
    {
      ATerm y_22;
      y_22 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_21), term_k_7);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_21), term_s_22);
            {
              ATerm k_2 (ATerm t)
              {
                t = term_z_22;
                return(t);
              }
              t = assert_1(t, k_2);
            }
          }
        }
      }
      t = y_22;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm w_21 = NULL,x_21 = NULL;
  w_21 = t;
  v_21 :
  if(match_cons(w_21, sym_stdin_0))
    {
      ATerm y_21 = NULL;
      ATerm z_21 = NULL;
      ATerm a_22 = NULL;
      t = xtc_new_file_0(t);
      {
        z_21 = t;
        {
          if(((y_21 != NULL) && (y_21 != z_21)))
            _fail(z_21);
          else
            y_21 = z_21;
          {
            ATerm b_22 = NULL;
            t = o_0(t);
            {
              b_22 = t;
              if(((a_22 != NULL) && (a_22 != b_22)))
                _fail(b_22);
              else
                a_22 = b_22;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_22), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_21)), term_a_23));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(y_21);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_21));
    }
  else
    {
      if(match_cons(w_21, sym_FILE_1))
        {
          x_21 = ATgetArgument(w_21, 0);
          {
            ATerm d_22 = NULL;
            ATerm e_22 = NULL;
            t = not_null(x_21);
            {
              ATerm f_22 = NULL;
              t = xtc_new_file_0(t);
              {
                e_22 = t;
                {
                  if(((d_22 != NULL) && (d_22 != e_22)))
                    _fail(e_22);
                  else
                    d_22 = e_22;
                  {
                    ATerm g_22 = NULL;
                    t = o_0(t);
                    {
                      g_22 = t;
                      if(((f_22 != NULL) && (f_22 != g_22)))
                        _fail(g_22);
                      else
                        f_22 = g_22;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_22), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_22)), term_a_23), not_null(x_21)), term_b_23));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(d_22);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_22));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm stdin_0 (ATerm t)
{
  ATerm r_22 = NULL;
  r_22 = t;
  q_22 :
  if(match_cons(r_22, sym_stdin_0))
    {
      ATerm t_22 = NULL,v_22 = NULL;
      ATerm c_23;
      c_23 = t;
      {
        ATerm u_22 = NULL;
        t = SSLgetAnnotations(not_null(r_22));
        {
          u_22 = t;
          if(((t_22 != NULL) && (t_22 != u_22)))
            _fail(u_22);
          else
            t_22 = u_22;
        }
      }
      t = c_23;
      {
        ATerm w_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(t_22));
        {
          w_22 = t;
          if(((v_22 != NULL) && (v_22 != w_22)))
            _fail(w_22);
          else
            v_22 = w_22;
        }
        t = not_null(v_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm i_61 (ATerm))
{
  ATerm f_23 = NULL,g_23 = NULL;
  f_23 = t;
  e_23 :
  if(match_cons(f_23, sym_FILE_1))
    {
      g_23 = ATgetArgument(f_23, 0);
      {
        ATerm j_23 = NULL,l_23 = NULL;
        ATerm k_23 = NULL;
        t = SSLgetAnnotations(not_null(f_23));
        {
          k_23 = t;
          if(((j_23 != NULL) && (j_23 != k_23)))
            _fail(k_23);
          else
            j_23 = k_23;
        }
        {
          t = not_null(g_23);
          {
            ATerm n_23 = NULL;
            t = i_61(t);
            {
              l_23 = t;
              {
                ATerm o_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(l_23)), not_null(j_23));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm u_82 (ATerm), ATerm v_82 (ATerm))
{
  ATerm d_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_23 = t;
      int m_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(m_23);
        }
      else
        {
          t = i_23;
          t = stdin_0(t);
        }
      LocalPopChoice(h_23);
      t = xtc_transform_file_2(t, u_82, v_82);
    }
  else
    {
      t = d_23;
      t = xtc_transform_term_2(t, u_82, v_82);
    }
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    t = term_p_23;
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm v_23 = NULL,x_23 = NULL;
    ATerm q_23;
    q_23 = t;
    {
      ATerm w_23 = NULL;
      t = term_s_22;
      {
        t = pass_width_0(t);
        {
          w_23 = t;
          if(((v_23 != NULL) && (v_23 != w_23)))
            _fail(w_23);
          else
            v_23 = w_23;
        }
      }
    }
    t = q_23;
    {
      ATerm y_23 = NULL;
      t = term_s_22;
      {
        t = pass_verbose_0(t);
        {
          y_23 = t;
          if(((x_23 != NULL) && (x_23 != y_23)))
            _fail(y_23);
          else
            x_23 = y_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_23), not_null(x_23));
        t = conc_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, l_2, m_2);
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,m_24 = NULL;
  h_24 = t;
  g_24 :
  if(match_cons(h_24, sym__2))
    {
      i_24 = ATgetArgument(h_24, 0);
      m_24 = ATgetArgument(h_24, 1);
      t = SSL_copy(not_null(i_24), not_null(m_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm u_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_stderr_0))
    {
      ATerm w_24 = NULL,y_24 = NULL;
      ATerm r_23;
      r_23 = t;
      {
        ATerm x_24 = NULL;
        t = SSLgetAnnotations(not_null(u_24));
        {
          x_24 = t;
          if(((w_24 != NULL) && (w_24 != x_24)))
            _fail(x_24);
          else
            w_24 = x_24;
        }
      }
      t = r_23;
      {
        ATerm z_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(w_24));
        {
          z_24 = t;
          if(((y_24 != NULL) && (y_24 != z_24)))
            _fail(z_24);
          else
            y_24 = z_24;
        }
        t = not_null(y_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm j_25 = NULL;
  j_25 = t;
  i_25 :
  if(match_cons(j_25, sym_stdout_0))
    {
      ATerm l_25 = NULL,n_25 = NULL;
      ATerm s_23;
      s_23 = t;
      {
        ATerm m_25 = NULL;
        t = SSLgetAnnotations(not_null(j_25));
        {
          m_25 = t;
          if(((l_25 != NULL) && (l_25 != m_25)))
            _fail(m_25);
          else
            l_25 = m_25;
        }
      }
      t = s_23;
      {
        ATerm o_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(l_25));
        {
          o_25 = t;
          if(((n_25 != NULL) && (n_25 != o_25)))
            _fail(o_25);
          else
            n_25 = o_25;
        }
        t = not_null(n_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm f_26 = NULL,h_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym_FILE_1))
    {
      h_26 = ATgetArgument(f_26, 0);
      {
        ATerm t_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_26 = NULL;
            ATerm k_26 = NULL;
            t = m_0(t);
            {
              k_26 = t;
              {
                if(((j_26 != NULL) && (j_26 != k_26)))
                  _fail(k_26);
                else
                  j_26 = k_26;
                {
                  ATerm z_23 = t;
                  int a_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(a_24);
                    }
                  else
                    {
                      t = z_23;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_26), not_null(j_26));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_26));
            ;
            LocalPopChoice(u_23);
          }
        else
          {
            t = t_23;
            {
              ATerm b_24 = t;
              int c_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_26 = NULL;
                  ATerm n_26 = NULL;
                  t = m_0(t);
                  {
                    n_26 = t;
                    {
                      if(((m_26 != NULL) && (m_26 != n_26)))
                        _fail(n_26);
                      else
                        m_26 = n_26;
                      {
                        ATerm d_24 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm e_24 = t;
                            int f_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(f_24);
                              }
                            else
                              {
                                t = e_24;
                                {
                                  ATerm j_24 = t;
                                  int k_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(k_24);
                                    }
                                  else
                                    {
                                      t = j_24;
                                      {
                                        ATerm r_26 = NULL;
                                        r_26 = t;
                                        if(((h_26 != NULL) && (h_26 != r_26)))
                                          _fail(r_26);
                                        else
                                          h_26 = r_26;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = d_24;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_26), not_null(m_26));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_26));
                  ;
                  LocalPopChoice(c_24);
                }
              else
                {
                  t = b_24;
                  {
                    ATerm u_26 = NULL;
                    t = m_0(t);
                    {
                      u_26 = t;
                      if(((h_26 != NULL) && (h_26 != u_26)))
                        _fail(u_26);
                      else
                        h_26 = u_26;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_26));
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
ATerm Tl_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  e_27 = t;
  d_27 :
  if(((ATgetType(e_27) == AT_LIST) && !(ATisEmpty(e_27))))
    {
      f_27 = ATgetFirst((ATermList) e_27);
      g_27 = (ATerm) ATgetNext((ATermList) e_27);
      t = not_null(g_27);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
  m_27 = t;
  l_27 :
  if(match_cons(m_27, sym__2))
    {
      n_27 = ATgetArgument(m_27, 0);
      o_27 = ATgetArgument(m_27, 1);
      {
        ATerm l_24;
        l_24 = t;
        {
          ATerm r_27 = NULL;
          ATerm s_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_27), not_null(o_27));
          {
            ATerm n_24 = t;
            int o_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(o_24);
              }
            else
              {
                t = n_24;
                t = (ATerm) ATempty;
              }
            {
              s_27 = t;
              if(((r_27 != NULL) && (r_27 != s_27)))
                _fail(s_27);
              else
                r_27 = s_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_27), not_null(o_27), not_null(r_27));
            t = table_put_0(t);
          }
        }
        t = l_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm a_79 (ATerm))
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
  ATerm p_24;
  p_24 = t;
  {
    ATerm c_28 = NULL;
    ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
    t = a_79(t);
    {
      c_28 = t;
      {
        if(((b_28 != NULL) && (b_28 != c_28)))
          _fail(c_28);
        else
          b_28 = c_28;
        {
          ATerm q_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), term_i_22);
              t = table_get_0(t);
              ;
              LocalPopChoice(r_24);
            }
          else
            {
              t = q_24;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            d_28 = t;
            y_27 :
            if(((ATgetType(d_28) == AT_LIST) && !(ATisEmpty(d_28))))
              {
                e_28 = ATgetFirst((ATermList) d_28);
                f_28 = (ATerm) ATgetNext((ATermList) d_28);
                {
                  if(((a_28 != NULL) && (a_28 != e_28)))
                    _fail(e_28);
                  else
                    a_28 = e_28;
                  {
                    if(((z_27 != NULL) && (z_27 != f_28)))
                      _fail(f_28);
                    else
                      z_27 = f_28;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(b_28), term_i_22, not_null(z_27));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(a_28);
                          {
                            ATerm n_2 (ATerm t)
                            {
                              ATerm g_28 = NULL;
                              g_28 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), not_null(g_28));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, n_2);
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
          }
        }
      }
    }
  }
  t = p_24;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  t = SSL_remove(not_null(m_28));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm v_79 (ATerm), ATerm w_79 (ATerm))
{
  ATerm s_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_79(t);
      t = w_79(t);
      ;
      LocalPopChoice(v_24);
    }
  else
    {
      t = s_24;
      {
        t = w_79(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm z_78 (ATerm))
{
  ATerm r_28 = NULL;
  ATerm a_25;
  a_25 = t;
  {
    ATerm s_28 = NULL;
    ATerm t_28 = NULL;
    t = z_78(t);
    {
      s_28 = t;
      {
        if(((r_28 != NULL) && (r_28 != s_28)))
          _fail(s_28);
        else
          r_28 = s_28;
        {
          ATerm u_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), term_i_22);
          {
            ATerm b_25 = t;
            int c_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(c_25);
              }
            else
              {
                t = b_25;
                t = (ATerm) ATempty;
              }
            {
              u_28 = t;
              if(((t_28 != NULL) && (t_28 != u_28)))
                _fail(u_28);
              else
                t_28 = u_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_28), term_i_22, (ATerm) ATinsert(CheckATermList(not_null(t_28)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = a_25;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm e_82 (ATerm))
{
  ATerm z_28 = NULL,a_29 = NULL;
  ATerm o_2 (ATerm t)
  {
    t = term_z_22;
    return(t);
  }
  t = begin_scope_1(t, o_2);
  {
    ATerm p_2 (ATerm t)
    {
      ATerm d_25;
      d_25 = t;
      {
        ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
        ATerm e_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_25;
            t = table_get_0(t);
            ;
            LocalPopChoice(f_25);
          }
        else
          {
            t = e_25;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          b_29 = t;
          y_28 :
          if(((ATgetType(b_29) == AT_LIST) && !(ATisEmpty(b_29))))
            {
              c_29 = ATgetFirst((ATermList) b_29);
              d_29 = (ATerm) ATgetNext((ATermList) b_29);
              {
                if(((a_29 != NULL) && (a_29 != c_29)))
                  _fail(c_29);
                else
                  a_29 = c_29;
                {
                  if(((z_28 != NULL) && (z_28 != d_29)))
                    _fail(d_29);
                  else
                    z_28 = d_29;
                  {
                    t = not_null(a_29);
                    {
                      ATerm q_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, q_2);
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
      }
      t = d_25;
      {
        ATerm r_2 (ATerm t)
        {
          t = term_z_22;
          return(t);
        }
        t = end_scope_1(t, r_2);
      }
      return(t);
    }
    t = restore_always_2(t, e_82, p_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm f_82 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm h_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_29 = NULL;
        ATerm h_29 = NULL;
        t = term_b_23;
        {
          t = get_config_0(t);
          {
            h_29 = t;
            if(((g_29 != NULL) && (g_29 != h_29)))
              _fail(h_29);
            else
              g_29 = h_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_29));
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = h_25;
        t = term_e_7;
      }
    {
      t = f_82(t);
      {
        ATerm t_2 (ATerm t)
        {
          ATerm p_25 = t;
          int q_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_a_23;
              t = get_config_0(t);
              ;
              LocalPopChoice(q_25);
            }
          else
            {
              t = p_25;
              t = term_r_25;
            }
          return(t);
        }
        t = copy_to_1(t, t_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, s_2);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL;
  o_29 = t;
  m_29 :
  if(match_string(o_29, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(o_29) == AT_LIST) && !(ATisEmpty(o_29))))
        {
          p_29 = ATgetFirst((ATermList) o_29);
          q_29 = (ATerm) ATgetNext((ATermList) o_29);
          n_29 :
          if(((ATgetType(q_29) == AT_LIST) && !(ATisEmpty(q_29))))
            {
              r_29 = ATgetFirst((ATermList) q_29);
              s_29 = (ATerm) ATgetNext((ATermList) q_29);
              {
                ATerm w_29 = NULL;
                ATerm s_25;
                s_25 = t;
                {
                  t = not_null(p_29);
                  t = j_0(t);
                }
                t = s_25;
                {
                  ATerm x_29 = NULL;
                  t = not_null(r_29);
                  {
                    t = k_0(t);
                    {
                      x_29 = t;
                      if(((w_29 != NULL) && (w_29 != x_29)))
                        _fail(x_29);
                      else
                        w_29 = x_29;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_29)), not_null(w_29));
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
ATerm version_option_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm c_30 = NULL;
    c_30 = t;
    b_30 :
    if(!(match_string(c_30, "-v")))
      {
        if(!(match_string(c_30, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_u_25;
    t = set_config_0(t);
    t = term_v_25;
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_w_25;
    return(t);
  }
  t = Option_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm f_30 = NULL;
    f_30 = t;
    d_30 :
    if(!(match_string(f_30, "-k")))
      {
        if(!(match_string(f_30, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm x_25;
    x_25 = t;
    {
      ATerm g_30 = NULL;
      ATerm h_30 = NULL;
      t = string_to_int_0(t);
      {
        h_30 = t;
        if(((g_30 != NULL) && (g_30 != h_30)))
          _fail(h_30);
        else
          g_30 = h_30;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_25, not_null(g_30));
        t = set_config_0(t);
      }
    }
    t = x_25;
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_z_25;
    return(t);
  }
  t = ArgOption_3(t, z_2, a_3, b_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_30 = NULL;
  k_30 = t;
  t = SSL_string_to_int(not_null(k_30));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_3 (ATerm t)
      {
        ATerm s_30 = NULL;
        s_30 = t;
        n_30 :
        if(!(match_string(s_30, "-S")))
          {
            if(!(match_string(s_30, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_d_26;
        t = set_config_0(t);
        t = term_g_26;
        return(t);
      }
      ATerm j_3 (ATerm t)
      {
        t = term_i_26;
        return(t);
      }
      t = Option_3(t, c_3, d_3, j_3);
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
      {
        ATerm l_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_3 (ATerm t)
            {
              ATerm t_30 = NULL;
              t_30 = t;
              o_30 :
              if(!(match_string(t_30, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm n_3 (ATerm t)
            {
              ATerm w_30 = NULL;
              ATerm p_26;
              p_26 = t;
              {
                ATerm u_30 = NULL;
                ATerm v_30 = NULL;
                t = string_to_int_0(t);
                {
                  v_30 = t;
                  if(((u_30 != NULL) && (u_30 != v_30)))
                    _fail(v_30);
                  else
                    u_30 = v_30;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_6, not_null(u_30));
                  t = set_config_0(t);
                }
              }
              t = p_26;
              {
                ATerm z_30 = NULL;
                z_30 = t;
                if(((w_30 != NULL) && (w_30 != z_30)))
                  _fail(z_30);
                else
                  w_30 = z_30;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_30));
              }
              return(t);
            }
            ATerm o_3 (ATerm t)
            {
              t = term_q_26;
              return(t);
            }
            t = ArgOption_3(t, m_3, n_3, o_3);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = l_26;
            {
              ATerm p_3 (ATerm t)
              {
                ATerm a_31 = NULL;
                a_31 = t;
                r_30 :
                if(!(match_string(a_31, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_3 (ATerm t)
              {
                t = term_t_26;
                t = set_config_0(t);
                t = term_v_26;
                return(t);
              }
              ATerm r_3 (ATerm t)
              {
                t = term_w_26;
                return(t);
              }
              t = Option_3(t, p_3, q_3, r_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm k_31 = NULL;
    k_31 = t;
    h_31 :
    if(!(match_string(k_31, "-o")))
      {
        if(!(match_string(k_31, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    ATerm n_31 = NULL;
    ATerm b_27;
    b_27 = t;
    {
      ATerm l_31 = NULL;
      ATerm m_31 = NULL;
      m_31 = t;
      if(((l_31 != NULL) && (l_31 != m_31)))
        _fail(m_31);
      else
        l_31 = m_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_23, not_null(l_31));
        t = set_config_0(t);
      }
    }
    t = b_27;
    {
      ATerm o_31 = NULL;
      o_31 = t;
      if(((n_31 != NULL) && (n_31 != o_31)))
        _fail(o_31);
      else
        n_31 = o_31;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_31));
    }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_c_27;
    return(t);
  }
  t = ArgOption_3(t, y_3, z_3, c_4);
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm u_31 = NULL;
    u_31 = t;
    r_31 :
    if(!(match_string(u_31, "-i")))
      {
        if(!(match_string(u_31, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    ATerm x_31 = NULL;
    ATerm h_27;
    h_27 = t;
    {
      ATerm v_31 = NULL;
      ATerm w_31 = NULL;
      w_31 = t;
      if(((v_31 != NULL) && (v_31 != w_31)))
        _fail(w_31);
      else
        v_31 = w_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_23, not_null(v_31));
        t = set_config_0(t);
      }
    }
    t = h_27;
    {
      ATerm y_31 = NULL;
      y_31 = t;
      if(((x_31 != NULL) && (x_31 != y_31)))
        _fail(y_31);
      else
        x_31 = y_31;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_31));
    }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_i_27;
    return(t);
  }
  t = ArgOption_3(t, d_4, e_4, f_4);
  return(t);
}
ATerm abox2text_options_0 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      {
        ATerm p_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0(t);
            ;
            LocalPopChoice(q_27);
          }
        else
          {
            t = p_27;
            {
              ATerm t_27 = t;
              int u_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0(t);
                  ;
                  LocalPopChoice(u_27);
                }
              else
                {
                  t = t_27;
                  {
                    ATerm g_4 (ATerm t)
                    {
                      ATerm d_32 = NULL;
                      d_32 = t;
                      b_32 :
                      if(!(match_string(d_32, "-w")))
                        {
                          if(!(match_string(d_32, "--width")))
                            {
                              _fail(t);
                            }
                        }
                      return(t);
                    }
                    ATerm l_4 (ATerm t)
                    {
                      ATerm v_27;
                      v_27 = t;
                      {
                        ATerm e_32 = NULL;
                        ATerm f_32 = NULL;
                        f_32 = t;
                        if(((e_32 != NULL) && (e_32 != f_32)))
                          _fail(f_32);
                        else
                          e_32 = f_32;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_c_7, not_null(e_32));
                          t = set_config_0(t);
                        }
                      }
                      t = v_27;
                      return(t);
                    }
                    ATerm m_4 (ATerm t)
                    {
                      t = term_w_27;
                      return(t);
                    }
                    t = ArgOption_3(t, g_4, l_4, m_4);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm x_27;
  x_27 = t;
  {
    ATerm k_32 = NULL;
    ATerm l_32 = NULL;
    t = term_s_22;
    {
      t = whoami_0(t);
      {
        l_32 = t;
        if(((k_32 != NULL) && (k_32 != l_32)))
          _fail(l_32);
        else
          k_32 = l_32;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_28), not_null(k_32)), term_h_28));
      {
        t = printnl_0(t);
        {
          t = term_v_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_27;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm o_32 = NULL;
  t = report_run_time_0(t);
  {
    ATerm p_32 = NULL;
    t = term_s_22;
    {
      t = whoami_0(t);
      {
        p_32 = t;
        if(((o_32 != NULL) && (o_32 != p_32)))
          _fail(p_32);
        else
          o_32 = p_32;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_16, (ATerm) ATinsert(ATinsert(ATempty, term_j_28), not_null(o_32)));
      {
        t = printnl_0(t);
        {
          t = term_v_6;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_k_28;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_32 = NULL;
  s_32 = t;
  t = SSL_TicksToSeconds(not_null(s_32));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  w_32 :
  if(match_cons(x_32, sym__2))
    {
      y_32 = ATgetArgument(x_32, 0);
      z_32 = ATgetArgument(x_32, 1);
      {
        ATerm l_28 = t;
        int n_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_32), not_null(z_32));
            ;
            LocalPopChoice(n_28);
          }
        else
          {
            t = l_28;
            t = SSL_addr(not_null(y_32), not_null(z_32));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_75 (ATerm), ATerm d_75 (ATerm))
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_75(t);
      ;
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      {
        ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
        g_33 = t;
        f_33 :
        if(((ATgetType(g_33) == AT_LIST) && !(ATisEmpty(g_33))))
          {
            h_33 = ATgetFirst((ATermList) g_33);
            i_33 = (ATerm) ATgetNext((ATermList) g_33);
            {
              ATerm l_33 = NULL;
              ATerm m_33 = NULL;
              t = not_null(i_33);
              {
                t = foldr_2(t, c_75, d_75);
                {
                  m_33 = t;
                  if(((l_33 != NULL) && (l_33 != m_33)))
                    _fail(m_33);
                  else
                    l_33 = m_33;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_33), not_null(l_33));
                t = d_75(t);
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
ATerm crush_2 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm))
{
  ATerm t_33 = NULL;
  ATerm v_33 = NULL;
  t_33 = t;
  {
    ATerm w_33 = NULL;
    ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL;
    t = not_null(t_33);
    {
      w_33 = t;
      {
        t = SSL_explode_term(not_null(w_33));
        {
          y_33 = t;
          s_33 :
          if(match_cons(y_33, sym__2))
            {
              z_33 = ATgetArgument(y_33, 0);
              a_34 = ATgetArgument(y_33, 1);
              if(((v_33 != NULL) && (v_33 != a_34)))
                _fail(a_34);
              else
                v_33 = a_34;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_33);
      t = foldr_2(t, a_73, b_73);
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
    ATerm r_4 (ATerm t)
    {
      t = term_c_26;
      return(t);
    }
    t = crush_2(t, r_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  f_34 :
  if(match_cons(g_34, sym__2))
    {
      h_34 = ATgetArgument(g_34, 0);
      i_34 = ATgetArgument(g_34, 1);
      {
        ATerm q_28;
        q_28 = t;
        {
          ATerm v_28 = t;
          int w_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(h_34), not_null(i_34));
              ;
              LocalPopChoice(w_28);
            }
          else
            {
              t = v_28;
              t = SSL_gtr(not_null(h_34), not_null(i_34));
            }
        }
        t = q_28;
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
  ATerm o_34 = NULL;
  ATerm x_28 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
      p_34 = t;
      n_34 :
      if(match_cons(p_34, sym__2))
        {
          q_34 = ATgetArgument(p_34, 0);
          r_34 = ATgetArgument(p_34, 1);
          {
            if(((o_34 != NULL) && (o_34 != q_34)))
              _fail(q_34);
            else
              o_34 = q_34;
            if(((o_34 != NULL) && (o_34 != r_34)))
              _fail(r_34);
            else
              o_34 = r_34;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = x_28;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm a_80 (ATerm))
{
  ATerm s_4 (ATerm t)
  {
    ATerm f_29;
    f_29 = t;
    {
      ATerm u_34 = NULL;
      ATerm v_34 = NULL;
      t = term_q_6;
      {
        t = get_config_0(t);
        {
          v_34 = t;
          if(((u_34 != NULL) && (u_34 != v_34)))
            _fail(v_34);
          else
            u_34 = v_34;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_34), term_v_6);
        t = geq_0(t);
      }
    }
    t = f_29;
    t = a_80(t);
    return(t);
  }
  t = try_1(t, s_4);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    ATerm z_34 = NULL,b_35 = NULL;
    ATerm i_29;
    i_29 = t;
    {
      ATerm a_35 = NULL;
      t = run_time_0(t);
      {
        a_35 = t;
        if(((z_34 != NULL) && (z_34 != a_35)))
          _fail(a_35);
        else
          z_34 = a_35;
      }
    }
    t = i_29;
    {
      ATerm c_35 = NULL;
      t = term_s_22;
      {
        t = whoami_0(t);
        {
          c_35 = t;
          if(((b_35 != NULL) && (b_35 != c_35)))
            _fail(c_35);
          else
            b_35 = c_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_29), not_null(z_34)), term_q_7), not_null(b_35)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, t_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_c_26;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_35 = NULL;
  j_35 = t;
  i_35 :
  if(match_cons(j_35, sym_Version_0))
    {
      ATerm l_35 = NULL,n_35 = NULL;
      ATerm k_29;
      k_29 = t;
      {
        ATerm m_35 = NULL;
        t = SSLgetAnnotations(not_null(j_35));
        {
          m_35 = t;
          if(((l_35 != NULL) && (l_35 != m_35)))
            _fail(m_35);
          else
            l_35 = m_35;
        }
      }
      t = k_29;
      {
        ATerm o_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_35));
        {
          o_35 = t;
          if(((n_35 != NULL) && (n_35 != o_35)))
            _fail(o_35);
          else
            n_35 = o_35;
        }
        t = not_null(n_35);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_84 (ATerm))
{
  ATerm l_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_29;
      t = get_config_0(t);
      ;
      LocalPopChoice(t_29);
    }
  else
    {
      t = l_29;
      {
        ATerm u_4 (ATerm t)
        {
          ATerm v_29 = t;
          int y_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(y_29);
            }
          else
            {
              t = v_29;
              {
                ATerm z_29 = t;
                int a_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(a_30);
                  }
                else
                  {
                    t = z_29;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, u_4);
      }
    }
  t = g_84(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_35 = NULL;
  t_35 = t;
  t = SSL_table_create(not_null(t_35));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_35 = NULL;
  x_35 = t;
  {
    ATerm e_30;
    e_30 = t;
    {
      t = term_i_30;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_30, term_j_30, not_null(x_35));
          t = table_put_0(t);
        }
      }
    }
    t = e_30;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_36 = NULL;
  b_36 = t;
  t = SSL_table_destroy(not_null(b_36));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_36 = NULL;
  f_36 = t;
  t = SSL_exit(not_null(f_36));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
  j_36 = t;
  i_36 :
  if(((ATgetType(j_36) == AT_LIST) && ATisEmpty(j_36)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_36) == AT_LIST) && !(ATisEmpty(j_36))))
        {
          k_36 = ATgetFirst((ATermList) j_36);
          l_36 = (ATerm) ATgetNext((ATermList) j_36);
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
  ATerm l_30;
  l_30 = t;
  {
    ATerm o_36 = NULL;
    ATerm r_36 = NULL;
    ATerm m_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(p_30);
      }
    else
      {
        t = m_30;
        {
          ATerm p_36 = NULL;
          ATerm q_36 = NULL;
          q_36 = t;
          if(((p_36 != NULL) && (p_36 != q_36)))
            _fail(q_36);
          else
            p_36 = q_36;
          t = (ATerm) ATinsert(ATempty, not_null(p_36));
        }
      }
    {
      r_36 = t;
      if(((o_36 != NULL) && (o_36 != r_36)))
        _fail(r_36);
      else
        o_36 = r_36;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_25, not_null(o_36));
      t = printnl_0(t);
    }
  }
  t = l_30;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
  c_37 = t;
  z_36 :
  if(((ATgetType(c_37) == AT_LIST) && !(ATisEmpty(c_37))))
    {
      a_37 = ATgetFirst((ATermList) c_37);
      b_37 = (ATerm) ATgetNext((ATermList) c_37);
      {
        ATerm f_37 = NULL;
        t = not_null(b_37);
        {
          ATerm q_30;
          q_30 = t;
          {
            ATerm g_37 = NULL,i_37 = NULL,k_37 = NULL;
            ATerm x_30;
            x_30 = t;
            {
              ATerm h_37 = NULL;
              t = i_0(t);
              {
                h_37 = t;
                if(((g_37 != NULL) && (g_37 != h_37)))
                  _fail(h_37);
                else
                  g_37 = h_37;
              }
            }
            t = x_30;
            {
              ATerm j_37 = NULL;
              t = not_null(a_37);
              {
                t = g_0(t);
                {
                  j_37 = t;
                  if(((i_37 != NULL) && (i_37 != j_37)))
                    _fail(j_37);
                  else
                    i_37 = j_37;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_37)), not_null(i_37));
                {
                  k_37 = t;
                  if(((f_37 != NULL) && (f_37 != k_37)))
                    _fail(k_37);
                  else
                    f_37 = k_37;
                }
              }
            }
          }
          t = q_30;
          {
            ATerm v_4 (ATerm t)
            {
              t = not_null(f_37);
              return(t);
            }
            t = reverse_acc_2(t, g_0, v_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(c_37) == AT_LIST) && ATisEmpty(c_37)))
        {
          {
            t = term_s_22;
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
  ATerm x_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, x_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm p_61 (ATerm))
{
  ATerm v_37 = NULL,w_37 = NULL;
  v_37 = t;
  u_37 :
  if(match_cons(v_37, sym_Program_1))
    {
      w_37 = ATgetArgument(v_37, 0);
      {
        ATerm z_37 = NULL,b_38 = NULL;
        ATerm a_38 = NULL;
        t = SSLgetAnnotations(not_null(v_37));
        {
          a_38 = t;
          if(((z_37 != NULL) && (z_37 != a_38)))
            _fail(a_38);
          else
            z_37 = a_38;
        }
        {
          t = not_null(w_37);
          {
            ATerm d_38 = NULL;
            t = p_61(t);
            {
              b_38 = t;
              {
                ATerm e_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_38)), not_null(z_37));
                {
                  e_38 = t;
                  if(((d_38 != NULL) && (d_38 != e_38)))
                    _fail(e_38);
                  else
                    d_38 = e_38;
                }
                t = not_null(d_38);
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
  ATerm q_38 = NULL;
  ATerm y_30 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_38 = NULL;
      t = term_k_28;
      {
        t = get_config_0(t);
        {
          r_38 = t;
          if(((q_38 != NULL) && (q_38 != r_38)))
            _fail(r_38);
          else
            q_38 = r_38;
        }
      }
      ;
      LocalPopChoice(b_31);
    }
  else
    {
      t = y_30;
      {
        ATerm a_5 (ATerm t)
        {
          ATerm b_5 (ATerm t)
          {
            ATerm s_38 = NULL;
            s_38 = t;
            if(((q_38 != NULL) && (q_38 != s_38)))
              _fail(s_38);
            else
              q_38 = s_38;
            return(t);
          }
          t = Program_1(t, b_5);
          return(t);
        }
        t = option_defined_1(t, a_5);
      }
    }
  {
    ATerm c_5 (ATerm t)
    {
      ATerm e_5 (ATerm t)
      {
        t = not_null(q_38);
        return(t);
      }
      t = short_description_1(t, e_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, c_5);
    {
      t = term_c_31;
      {
        t = echo_0(t);
        {
          t = term_f_31;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm f_5 (ATerm t)
                {
                  ATerm t_38 = NULL;
                  ATerm u_38 = NULL;
                  u_38 = t;
                  if(((t_38 != NULL) && (t_38 != u_38)))
                    _fail(u_38);
                  else
                    t_38 = u_38;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_38)), term_g_31);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, f_5);
                {
                  ATerm g_5 (ATerm t)
                  {
                    ATerm v_38 = NULL;
                    ATerm w_38 = NULL;
                    ATerm l_5 (ATerm t)
                    {
                      t = not_null(q_38);
                      return(t);
                    }
                    t = long_description_1(t, l_5);
                    {
                      w_38 = t;
                      if(((v_38 != NULL) && (v_38 != w_38)))
                        _fail(w_38);
                      else
                        v_38 = w_38;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(v_38)), term_i_31);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, g_5);
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
  ATerm f_39 = NULL,g_39 = NULL,j_39 = NULL;
  f_39 = t;
  e_39 :
  if(match_cons(f_39, sym__2))
    {
      g_39 = ATgetArgument(f_39, 0);
      j_39 = ATgetArgument(f_39, 1);
      {
        ATerm j_31;
        j_31 = t;
        t = SSL_printnl(not_null(g_39), not_null(j_39));
        t = j_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm q_61 (ATerm))
{
  ATerm u_39 = NULL,v_39 = NULL;
  u_39 = t;
  t_39 :
  if(match_cons(u_39, sym_Undefined_1))
    {
      v_39 = ATgetArgument(u_39, 0);
      {
        ATerm y_39 = NULL,a_40 = NULL;
        ATerm z_39 = NULL;
        t = SSLgetAnnotations(not_null(u_39));
        {
          z_39 = t;
          if(((y_39 != NULL) && (y_39 != z_39)))
            _fail(z_39);
          else
            y_39 = z_39;
        }
        {
          t = not_null(v_39);
          {
            ATerm c_40 = NULL;
            t = q_61(t);
            {
              a_40 = t;
              {
                ATerm d_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_40)), not_null(y_39));
                {
                  d_40 = t;
                  if(((c_40 != NULL) && (c_40 != d_40)))
                    _fail(d_40);
                  else
                    c_40 = d_40;
                }
                t = not_null(c_40);
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
ATerm fetch_1 (ATerm t, ATerm z_68 (ATerm))
{
  ATerm k_40 (ATerm t)
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_68, _id);
        ;
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        t = Cons_2(t, _id, k_40);
      }
    return(t);
  }
  t = k_40(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_85 (ATerm))
{
  t = fetch_1(t, b_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_41 = NULL;
  a_41 = t;
  z_40 :
  if(match_cons(a_41, sym_Help_0))
    {
      ATerm c_41 = NULL,g_41 = NULL;
      ATerm s_31;
      s_31 = t;
      {
        ATerm f_41 = NULL;
        t = SSLgetAnnotations(not_null(a_41));
        {
          f_41 = t;
          if(((c_41 != NULL) && (c_41 != f_41)))
            _fail(f_41);
          else
            c_41 = f_41;
        }
      }
      t = s_31;
      {
        ATerm q_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_41));
        {
          q_41 = t;
          if(((g_41 != NULL) && (g_41 != q_41)))
            _fail(q_41);
          else
            g_41 = q_41;
        }
        t = not_null(g_41);
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
  ATerm v_41 = NULL;
  v_41 = t;
  t = SSL_implode_string(not_null(v_41));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(z_31);
    }
  else
    {
      t = t_31;
      {
        ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL;
        a_42 = t;
        z_41 :
        if(((ATgetType(a_42) == AT_LIST) && !(ATisEmpty(a_42))))
          {
            b_42 = ATgetFirst((ATermList) a_42);
            c_42 = (ATerm) ATgetNext((ATermList) a_42);
            {
              t = not_null(b_42);
              {
                ATerm m_5 (ATerm t)
                {
                  t = not_null(c_42);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, m_5);
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
  ATerm c_43 = NULL;
  ATerm f_43 = NULL;
  c_43 = t;
  {
    ATerm g_43 = NULL;
    ATerm i_43 = NULL,l_43 = NULL,m_43 = NULL;
    t = not_null(c_43);
    {
      g_43 = t;
      {
        t = SSL_explode_term(not_null(g_43));
        {
          i_43 = t;
          t_42 :
          if(match_cons(i_43, sym__2))
            {
              l_43 = ATgetArgument(i_43, 0);
              m_43 = ATgetArgument(i_43, 1);
              u_42 :
              if(match_string(l_43, ""))
                {
                  if(((f_43 != NULL) && (f_43 != m_43)))
                    _fail(m_43);
                  else
                    f_43 = m_43;
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
      t = not_null(f_43);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_69 (ATerm))
{
  ATerm q_43 (ATerm t)
  {
    ATerm a_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_43);
        ;
        LocalPopChoice(c_32);
      }
    else
      {
        t = a_32;
        {
          t = Nil_0(t);
          t = f_69(t);
        }
      }
    return(t);
  }
  t = q_43(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm y_43 = NULL,d_44 = NULL,e_44 = NULL;
  y_43 = t;
  x_43 :
  if(match_cons(y_43, sym__2))
    {
      d_44 = ATgetArgument(y_43, 0);
      e_44 = ATgetArgument(y_43, 1);
      {
        t = not_null(d_44);
        {
          ATerm n_5 (ATerm t)
          {
            t = not_null(e_44);
            return(t);
          }
          t = at_end_1(t, n_5);
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
  ATerm g_32 = t;
  int h_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(h_32);
    }
  else
    {
      t = g_32;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm j_44 = NULL;
  j_44 = t;
  t = SSL_explode_string(not_null(j_44));
  return(t);
}
ATerm _2 (ATerm t, ATerm z_54 (ATerm), ATerm a_55 (ATerm))
{
  ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL;
  u_44 = t;
  t_44 :
  if(match_cons(u_44, sym__2))
    {
      v_44 = ATgetArgument(u_44, 0);
      w_44 = ATgetArgument(u_44, 1);
      {
        ATerm e_45 = NULL,g_45 = NULL;
        ATerm f_45 = NULL;
        t = SSLgetAnnotations(not_null(u_44));
        {
          f_45 = t;
          if(((e_45 != NULL) && (e_45 != f_45)))
            _fail(f_45);
          else
            e_45 = f_45;
        }
        {
          t = not_null(v_44);
          {
            ATerm i_45 = NULL;
            t = z_54(t);
            {
              g_45 = t;
              {
                t = not_null(w_44);
                {
                  ATerm k_45 = NULL;
                  t = a_55(t);
                  {
                    i_45 = t;
                    {
                      ATerm l_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_45), not_null(i_45)), not_null(e_45));
                      {
                        l_45 = t;
                        if(((k_45 != NULL) && (k_45 != l_45)))
                          _fail(l_45);
                        else
                          k_45 = l_45;
                      }
                      t = not_null(k_45);
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
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm j_64 (ATerm))
{
  ATerm i_32;
  i_32 = t;
  {
    ATerm e_46 = NULL,i_46 = NULL;
    ATerm j_32;
    j_32 = t;
    {
      ATerm h_46 = NULL;
      t = j_64(t);
      {
        h_46 = t;
        if(((e_46 != NULL) && (e_46 != h_46)))
          _fail(h_46);
        else
          e_46 = h_46;
      }
    }
    t = j_32;
    {
      ATerm j_46 = NULL;
      j_46 = t;
      if(((i_46 != NULL) && (i_46 != j_46)))
        _fail(j_46);
      else
        i_46 = j_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_46)), not_null(e_46)));
        t = printnl_0(t);
      }
    }
  }
  t = i_32;
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_68 (ATerm))
{
  ATerm n_46 (ATerm t)
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
        t = Cons_2(t, q_68, n_46);
      }
    return(t);
  }
  t = n_46(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm y_46 = NULL;
  y_46 = t;
  t = SSL_is_string(not_null(y_46));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
      {
        ATerm t_32 = t;
        int u_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, o_5);
            ;
            LocalPopChoice(u_32);
          }
        else
          {
            t = t_32;
            {
              ATerm h_47 = NULL,j_47 = NULL,k_47 = NULL;
              h_47 = t;
              g_47 :
              if(match_cons(h_47, sym_Path_1))
                {
                  j_47 = ATgetArgument(h_47, 0);
                  t = not_null(j_47);
                }
              else
                {
                  if(match_cons(h_47, sym_Var_1))
                    {
                      j_47 = ATgetArgument(h_47, 0);
                      {
                        t = not_null(j_47);
                        {
                          ATerm v_32 = t;
                          int a_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(a_33);
                            }
                          else
                            {
                              t = v_32;
                              {
                                ATerm q_5 (ATerm t)
                                {
                                  t = term_b_33;
                                  return(t);
                                }
                                t = debug_1(t, q_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(h_47, sym_Prefix_2))
                        {
                          j_47 = ATgetArgument(h_47, 0);
                          k_47 = ATgetArgument(h_47, 1);
                          {
                            ATerm u_47 = NULL,w_47 = NULL;
                            ATerm c_33;
                            c_33 = t;
                            {
                              ATerm v_47 = NULL;
                              t = not_null(j_47);
                              {
                                t = eval_config_0(t);
                                {
                                  v_47 = t;
                                  if(((u_47 != NULL) && (u_47 != v_47)))
                                    _fail(v_47);
                                  else
                                    u_47 = v_47;
                                }
                              }
                            }
                            t = c_33;
                            {
                              ATerm x_47 = NULL;
                              t = not_null(k_47);
                              {
                                t = eval_config_0(t);
                                {
                                  x_47 = t;
                                  if(((w_47 != NULL) && (w_47 != x_47)))
                                    _fail(x_47);
                                  else
                                    w_47 = x_47;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_47), not_null(w_47));
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
  ATerm j_48 = NULL;
  j_48 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_33, not_null(j_48));
    {
      t = table_get_0(t);
      {
        ATerm r_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_33;
            e_33 = t;
            {
              ATerm l_48 = NULL;
              ATerm m_48 = NULL;
              m_48 = t;
              if(((l_48 != NULL) && (l_48 != m_48)))
                _fail(m_48);
              else
                l_48 = m_48;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_d_33, not_null(j_48), not_null(l_48));
                t = table_put_0(t);
              }
            }
            t = e_33;
          }
          return(t);
        }
        t = try_1(t, r_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_79 (ATerm))
{
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_79(t);
      ;
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
  r_48 = t;
  q_48 :
  if(match_cons(r_48, sym__2))
    {
      s_48 = ATgetArgument(r_48, 0);
      t_48 = ATgetArgument(r_48, 1);
      t = SSL_table_get(not_null(s_48), not_null(t_48));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL;
  a_49 = t;
  z_48 :
  if(match_cons(a_49, sym__3))
    {
      b_49 = ATgetArgument(a_49, 0);
      c_49 = ATgetArgument(a_49, 1);
      d_49 = ATgetArgument(a_49, 2);
      {
        ATerm n_33;
        n_33 = t;
        {
          ATerm h_49 = NULL;
          ATerm i_49 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_49), not_null(c_49));
          {
            ATerm o_33 = t;
            int p_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(p_33);
              }
            else
              {
                t = o_33;
                t = (ATerm) ATempty;
              }
            {
              i_49 = t;
              if(((h_49 != NULL) && (h_49 != i_49)))
                _fail(i_49);
              else
                h_49 = i_49;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_49), not_null(c_49), (ATerm) ATinsert(CheckATermList(not_null(h_49)), not_null(d_49)));
            t = table_put_0(t);
          }
        }
        t = n_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_86 (ATerm))
{
  ATerm m_49 = NULL;
  ATerm n_49 = NULL;
  t = term_s_22;
  {
    t = g_86(t);
    {
      n_49 = t;
      if(((m_49 != NULL) && (m_49 != n_49)))
        _fail(n_49);
      else
        m_49 = n_49;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_d_31, term_e_31, not_null(m_49));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
  t_49 = t;
  s_49 :
  if(match_string(t_49, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(t_49) == AT_LIST) && !(ATisEmpty(t_49))))
        {
          u_49 = ATgetFirst((ATermList) t_49);
          v_49 = (ATerm) ATgetNext((ATermList) t_49);
          {
            ATerm y_49 = NULL;
            ATerm q_33;
            q_33 = t;
            {
              t = not_null(u_49);
              t = a_0(t);
            }
            t = q_33;
            {
              ATerm z_49 = NULL;
              t = term_s_22;
              {
                t = b_0(t);
                {
                  z_49 = t;
                  if(((y_49 != NULL) && (y_49 != z_49)))
                    _fail(z_49);
                  else
                    y_49 = z_49;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_49)), not_null(y_49));
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
  ATerm s_5 (ATerm t)
  {
    ATerm e_50 = NULL;
    e_50 = t;
    d_50 :
    if(!(match_string(e_50, "--help")))
      {
        if(!(match_string(e_50, "-h")))
          {
            if(!(match_string(e_50, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_r_33;
    {
      t = set_config_0(t);
      t = term_u_33;
    }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_x_33;
    return(t);
  }
  t = Option_3(t, s_5, t_5, u_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
  h_50 = t;
  g_50 :
  if(((ATgetType(h_50) == AT_LIST) && !(ATisEmpty(h_50))))
    {
      i_50 = ATgetFirst((ATermList) h_50);
      j_50 = (ATerm) ATgetNext((ATermList) h_50);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_50)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_50)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm i_56 (ATerm), ATerm j_56 (ATerm))
{
  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
  t_50 = t;
  s_50 :
  if(((ATgetType(t_50) == AT_LIST) && !(ATisEmpty(t_50))))
    {
      u_50 = ATgetFirst((ATermList) t_50);
      v_50 = (ATerm) ATgetNext((ATermList) t_50);
      {
        ATerm z_50 = NULL,b_51 = NULL;
        ATerm a_51 = NULL;
        t = SSLgetAnnotations(not_null(t_50));
        {
          a_51 = t;
          if(((z_50 != NULL) && (z_50 != a_51)))
            _fail(a_51);
          else
            z_50 = a_51;
        }
        {
          t = not_null(u_50);
          {
            ATerm d_51 = NULL;
            t = i_56(t);
            {
              b_51 = t;
              {
                t = not_null(v_50);
                {
                  ATerm f_51 = NULL;
                  t = j_56(t);
                  {
                    d_51 = t;
                    {
                      ATerm g_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(d_51)), not_null(b_51)), not_null(z_50));
                      {
                        g_51 = t;
                        if(((f_51 != NULL) && (f_51 != g_51)))
                          _fail(g_51);
                        else
                          f_51 = g_51;
                      }
                      t = not_null(f_51);
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
  ATerm q_51 = NULL;
  q_51 = t;
  p_51 :
  if(((ATgetType(q_51) == AT_LIST) && ATisEmpty(q_51)))
    {
      {
        ATerm s_51 = NULL,u_51 = NULL;
        ATerm b_34;
        b_34 = t;
        {
          ATerm t_51 = NULL;
          t = SSLgetAnnotations(not_null(q_51));
          {
            t_51 = t;
            if(((s_51 != NULL) && (s_51 != t_51)))
              _fail(t_51);
            else
              s_51 = t_51;
          }
        }
        t = b_34;
        {
          ATerm v_51 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(s_51));
          {
            v_51 = t;
            if(((u_51 != NULL) && (u_51 != v_51)))
              _fail(v_51);
            else
              u_51 = v_51;
          }
          t = not_null(u_51);
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
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
  b_52 = t;
  a_52 :
  if(match_cons(b_52, sym__2))
    {
      c_52 = ATgetArgument(b_52, 0);
      d_52 = ATgetArgument(b_52, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_33, not_null(c_52), not_null(d_52));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_86 (ATerm))
{
  ATerm c_34;
  c_34 = t;
  {
    ATerm v_5 (ATerm t)
    {
      t = term_d_34;
      t = e_86(t);
      return(t);
    }
    t = try_1(t, v_5);
  }
  t = c_34;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm l_52 = NULL;
      ATerm e_34;
      e_34 = t;
      {
        ATerm j_52 = NULL;
        ATerm k_52 = NULL;
        k_52 = t;
        if(((j_52 != NULL) && (j_52 != k_52)))
          _fail(k_52);
        else
          j_52 = k_52;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_28, not_null(j_52));
          t = set_config_0(t);
        }
      }
      t = e_34;
      {
        ATerm m_52 = NULL;
        m_52 = t;
        if(((l_52 != NULL) && (l_52 != m_52)))
          _fail(m_52);
        else
          l_52 = m_52;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_52));
      }
      return(t);
    }
    ATerm e_6 (ATerm t)
    {
      ATerm j_34 = t;
      int k_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_34 = t;
          int m_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(m_34);
            }
          else
            {
              t = l_34;
              {
                t = e_86(t);
                t = Cons_2(t, _id, e_6);
              }
            }
          ;
          LocalPopChoice(k_34);
        }
      else
        {
          t = j_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_6, e_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL;
  ATerm s_34;
  s_34 = t;
  {
    ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL;
    w_52 = t;
    s_52 :
    if(match_cons(w_52, sym__3))
      {
        x_52 = ATgetArgument(w_52, 0);
        y_52 = ATgetArgument(w_52, 1);
        z_52 = ATgetArgument(w_52, 2);
        {
          if(((t_52 != NULL) && (t_52 != x_52)))
            _fail(x_52);
          else
            t_52 = x_52;
          {
            if(((u_52 != NULL) && (u_52 != y_52)))
              _fail(y_52);
            else
              u_52 = y_52;
            {
              if(((v_52 != NULL) && (v_52 != z_52)))
                _fail(z_52);
              else
                v_52 = z_52;
              t = SSL_table_put(not_null(t_52), not_null(u_52), not_null(v_52));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_86 (ATerm))
{
  ATerm c_53 = NULL;
  ATerm t_34;
  t_34 = t;
  {
    t = term_w_34;
    t = table_put_0(t);
  }
  t = t_34;
  {
    ATerm f_6 (ATerm t)
    {
      ATerm x_34 = t;
      int y_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_86(t);
          ;
          LocalPopChoice(y_34);
        }
      else
        {
          t = x_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_6);
    {
      ATerm g_6 (ATerm t)
      {
        ATerm d_35 = t;
        int e_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_35;
            f_35 = t;
            {
              ATerm g_35 = t;
              int h_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_u_29;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(h_35);
                }
              else
                {
                  t = g_35;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = f_35;
            {
              t = system_usage_0(t);
              {
                t = term_c_26;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(e_35);
          }
        else
          {
            t = d_35;
            {
              ATerm j_6 (ATerm t)
              {
                ATerm k_6 (ATerm t)
                {
                  ATerm d_53 = NULL;
                  d_53 = t;
                  if(((c_53 != NULL) && (c_53 != d_53)))
                    _fail(d_53);
                  else
                    c_53 = d_53;
                  return(t);
                }
                t = Undefined_1(t, k_6);
                return(t);
              }
              t = option_defined_1(t, j_6);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_o_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_53)), term_k_35));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_v_6;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, g_6);
      {
        ATerm p_35;
        p_35 = t;
        {
          t = term_d_31;
          t = table_destroy_0(t);
        }
        t = p_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm l_84 (ATerm))
{
  t = parse_options_1(t, i_84);
  {
    t = store_options_0(t);
    {
      t = k_84(t);
      {
        ATerm q_35 = t;
        int r_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_84);
            ;
            LocalPopChoice(r_35);
          }
        else
          {
            t = q_35;
            {
              ATerm s_35 = t;
              int u_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_84(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(u_35);
                }
              else
                {
                  t = s_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm m_84 (ATerm), ATerm n_84 (ATerm))
{
  t = option_wrap_4(t, m_84, default_usage_0, _id, n_84);
  return(t);
}
ATerm io_abox2text_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    t = xtc_io_1(t, abox2text_0);
    return(t);
  }
  t = option_wrap_2(t, abox2text_options_0, l_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_abox2text_0(t);
  return(t);
}
