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
ATerm term_q_36;
ATerm term_y_35;
ATerm term_j_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_x_34;
ATerm term_e_34;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_j_31;
ATerm term_h_31;
ATerm term_z_30;
ATerm term_t_30;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_j_29;
ATerm term_x_28;
ATerm term_k_28;
ATerm term_i_28;
ATerm term_t_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_p_26;
ATerm term_l_26;
ATerm term_h_26;
ATerm term_c_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_s_25;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_l_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_x_22;
ATerm term_v_22;
ATerm term_p_22;
ATerm term_k_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_k_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_l_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_w_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_a_17;
ATerm term_w_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_p_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_x_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_h_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_s_7;
ATerm term_j_7;
ATerm term_a_7;
void init_constant_terms (void)
{
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_8, term_s_7, term_n_8);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_8, term_x_8, term_c_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_9, term_j_9, term_k_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_9, term_o_9, term_p_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_9, term_s_9, term_u_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_9, term_a_10, term_b_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_10, term_g_10, term_j_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_p_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_a_11, term_g_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_o_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_w_11, term_z_11);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_e_12, term_h_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_o_12, term_p_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_y_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_b_13, term_g_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_k_13, term_l_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_u_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_c_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_d_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_p_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_v_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_c_16, term_d_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_w_16, term_a_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__2, term_w_17, term_i_18);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym__2, term_w_17, term_c_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym__2, term_l_23, term_v_22);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_l_26, term_y_7);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym__2, term_j_7, term_y_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym__2, term_k_27, term_y_7);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_i_32);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym__2, term_z_30, term_y_7);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym__3, term_g_32, term_i_32, (ATerm) ATempty);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm pass_width_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_abox2text_1 (ATerm, ATerm d_83 (ATerm));
ATerm read_from_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm f_65 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm v_82 (ATerm), ATerm w_82 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm signal_to_descr_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm j_69 (ATerm));
ATerm signal_from_number_0 (ATerm);
ATerm warn_ifsignaled_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_2 (ATerm, ATerm t_63 (ATerm), ATerm u_63 (ATerm));
ATerm fork_and_wait_1 (ATerm, ATerm v_63 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm n_92 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm n_76 (ATerm));
ATerm repeat_1 (ATerm, ATerm h_78 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm v_64 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm m_92 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm o_92 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm b_73 (ATerm), ATerm c_73 (ATerm));
ATerm union_1 (ATerm, ATerm x_72 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm i_80 (ATerm));
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
ATerm xtc_command_1 (ATerm, ATerm m_82 (ATerm));
ATerm assert_1 (ATerm, ATerm l_79 (ATerm));
ATerm obsolete_1 (ATerm, ATerm y_64 (ATerm));
ATerm open_file_0 (ATerm);
ATerm access_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm q_61 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm o_82 (ATerm), ATerm p_82 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm i_79 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm d_80 (ATerm), ATerm e_80 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm h_79 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm y_81 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm z_81 (ATerm));
ATerm ast2text_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm pp_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm input_option_0 (ATerm);
ATerm abox2text_options_0 (ATerm);
ATerm ast2text_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm k_75 (ATerm), ATerm l_75 (ATerm));
ATerm crush_2 (ATerm, ATerm i_73 (ATerm), ATerm j_73 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm j_92 (ATerm));
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
ATerm Program_1 (ATerm, ATerm x_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm y_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_85 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_69 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm h_55 (ATerm), ATerm i_55 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm r_64 (ATerm));
ATerm map_1 (ATerm, ATerm y_68 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm o_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_86 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_56 (ATerm), ATerm r_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_86 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_86 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm l_84 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm m_84 (ATerm), ATerm n_84 (ATerm));
ATerm io_ast2text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm pass_width_0 (ATerm t)
{
  ATerm y_6 = t;
  int z_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_7;
      t = get_config_0(t);
      LocalPopChoice(z_6);
      {
        ATerm e_0 = NULL;
        ATerm f_0 = NULL;
        f_0 = t;
        if(((e_0 != NULL) && (e_0 != f_0)))
          _fail(f_0);
        else
          e_0 = f_0;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_0)), term_a_7);
      }
    }
  else
    {
      t = y_6;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL;
  c_1 = t;
  y_0 :
  if(match_cons(c_1, sym__2))
    {
      d_1 = ATgetArgument(c_1, 0);
      e_1 = ATgetArgument(c_1, 1);
      {
        ATerm d_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_1), not_null(e_1));
            ;
            LocalPopChoice(i_7);
          }
        else
          {
            t = d_7;
            t = SSL_subtr(not_null(d_1), not_null(e_1));
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
  ATerm a_2 = NULL;
  ATerm s_2 = NULL,u_2 = NULL;
  ATerm t_2 = NULL;
  t = term_j_7;
  {
    ATerm k_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(m_7);
      }
    else
      {
        t = k_7;
        t = term_s_7;
      }
    {
      t_2 = t;
      if(((s_2 != NULL) && (s_2 != t_2)))
        _fail(t_2);
      else
        s_2 = t_2;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_2), term_s_7);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          u_2 = t;
          if(((a_2 != NULL) && (a_2 != u_2)))
            _fail(u_2);
          else
            a_2 = u_2;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_2)), term_j_7);
  return(t);
}
ATerm xtc_abox2text_1 (ATerm t, ATerm d_83 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = term_w_7;
    return(t);
  }
  ATerm h_0 (ATerm t)
  {
    ATerm c_3 = NULL,e_3 = NULL;
    ATerm x_7;
    x_7 = t;
    {
      ATerm d_3 = NULL;
      t = term_y_7;
      {
        t = d_83(t);
        {
          d_3 = t;
          if(((c_3 != NULL) && (c_3 != d_3)))
            _fail(d_3);
          else
            c_3 = d_3;
        }
      }
    }
    t = x_7;
    {
      ATerm f_3 = NULL;
      t = term_y_7;
      {
        t = pass_verbose_0(t);
        {
          f_3 = t;
          if(((e_3 != NULL) && (e_3 != f_3)))
            _fail(f_3);
          else
            e_3 = f_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_3), not_null(e_3));
        t = conc_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, c_0, h_0);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL;
  n_3 = t;
  m_3 :
  if(match_cons(n_3, sym_stdin_0))
    {
      ATerm p_3 = NULL;
      ATerm q_3 = NULL;
      t = term_a_8;
      {
        t = ReadFromFile_0(t);
        {
          q_3 = t;
          if(((p_3 != NULL) && (p_3 != q_3)))
            _fail(q_3);
          else
            p_3 = q_3;
        }
      }
      t = not_null(p_3);
    }
  else
    {
      if(match_cons(n_3, sym_FILE_1))
        {
          o_3 = ATgetArgument(n_3, 0);
          {
            ATerm s_3 = NULL;
            ATerm t_3 = NULL;
            t = not_null(o_3);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  t_3 = t;
                  if(((s_3 != NULL) && (s_3 != t_3)))
                    _fail(t_3);
                  else
                    s_3 = t_3;
                }
              }
            }
            t = not_null(s_3);
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
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL;
  c_4 = t;
  a_4 :
  if(match_cons(c_4, sym__2))
    {
      d_4 = ATgetArgument(c_4, 0);
      f_4 = ATgetArgument(c_4, 1);
      b_4 :
      if(match_cons(d_4, sym_Stream_1))
        {
          e_4 = ATgetArgument(d_4, 0);
          {
            ATerm i_4 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(e_4), not_null(f_4));
            {
              ATerm j_4 = NULL;
              j_4 = t;
              if(((i_4 != NULL) && (i_4 != j_4)))
                _fail(j_4);
              else
                i_4 = j_4;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_4));
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
ATerm WriteToFile_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
  q_4 = t;
  p_4 :
  if(match_cons(q_4, sym__2))
    {
      r_4 = ATgetArgument(q_4, 0);
      s_4 = ATgetArgument(q_4, 1);
      {
        ATerm v_4 = NULL,x_4 = NULL;
        t = not_null(r_4);
        {
          ATerm w_4 = NULL;
          w_4 = t;
          if(((v_4 != NULL) && (v_4 != w_4)))
            _fail(w_4);
          else
            v_4 = w_4;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_4), term_b_8);
            {
              t = open_stream_0(t);
              {
                ATerm y_4 = NULL;
                y_4 = t;
                if(((x_4 != NULL) && (x_4 != y_4)))
                  _fail(y_4);
                else
                  x_4 = y_4;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_4), not_null(s_4));
                  {
                    t = f_65(t);
                    {
                      t = fclose_0(t);
                      t = not_null(s_4);
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
  ATerm e_5 = NULL;
  ATerm g_5 = NULL;
  e_5 = t;
  {
    ATerm h_5 = NULL;
    t = xtc_new_file_0(t);
    {
      h_5 = t;
      {
        if(((g_5 != NULL) && (g_5 != h_5)))
          _fail(h_5);
        else
          g_5 = h_5;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_5), not_null(e_5));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(g_5);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_5));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm v_82 (ATerm), ATerm w_82 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, v_82, w_82);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm l_5 = NULL;
  l_5 = t;
  t = SSL_close_file(not_null(l_5));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL;
  q_5 = t;
  p_5 :
  if(match_cons(q_5, sym__2))
    {
      r_5 = ATgetArgument(q_5, 0);
      s_5 = ATgetArgument(q_5, 1);
      t = SSL_execvp(not_null(r_5), not_null(s_5));
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
  ATerm x_5 = NULL;
  x_5 = t;
  t = SSL_int_to_string(not_null(x_5));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL;
  f_6 = t;
  e_6 :
  if(match_cons(f_6, sym_UnknownSignal_1))
    {
      g_6 = ATgetArgument(f_6, 0);
      {
        ATerm k_6 = NULL;
        ATerm l_6 = NULL;
        t = not_null(g_6);
        {
          t = int_to_string_0(t);
          {
            l_6 = t;
            if(((k_6 != NULL) && (k_6 != l_6)))
              _fail(l_6);
            else
              k_6 = l_6;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), not_null(k_6)), term_c_8);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(f_6, sym_Signal_3))
        {
          g_6 = ATgetArgument(f_6, 0);
          h_6 = ATgetArgument(f_6, 1);
          i_6 = ATgetArgument(f_6, 2);
          {
            ATerm p_6 = NULL;
            ATerm q_6 = NULL;
            t = not_null(h_6);
            {
              t = int_to_string_0(t);
              {
                q_6 = t;
                if(((p_6 != NULL) && (p_6 != q_6)))
                  _fail(q_6);
                else
                  p_6 = q_6;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_6)), term_h_8), not_null(p_6)), term_e_8), not_null(g_6));
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
ATerm fetch_elem_1 (ATerm t, ATerm j_69 (ATerm))
{
  ATerm w_6 = NULL;
  ATerm p_0 (ATerm t)
  {
    ATerm x_6 = NULL;
    t = j_69(t);
    {
      x_6 = t;
      if(((w_6 != NULL) && (w_6 != x_6)))
        _fail(x_6);
      else
        w_6 = x_6;
    }
    return(t);
  }
  t = fetch_1(t, p_0);
  t = not_null(w_6);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm c_7 = NULL;
  c_7 = t;
  {
    ATerm j_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_17), term_q_16), term_m_16), term_g_16), term_y_15), term_q_15), term_i_15), term_a_15), term_t_14), term_p_14), term_d_14), term_z_13), term_m_13), term_h_13), term_z_12), term_q_12), term_i_12), term_a_12), term_t_11), term_h_11), term_y_10), term_k_10), term_c_10), term_w_9), term_q_9), term_l_9), term_d_9), term_o_8);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
            e_7 = t;
            b_7 :
            if(match_cons(e_7, sym_Signal_3))
              {
                f_7 = ATgetArgument(e_7, 0);
                g_7 = ATgetArgument(e_7, 1);
                h_7 = ATgetArgument(e_7, 2);
                if(((c_7 != NULL) && (c_7 != g_7)))
                  _fail(g_7);
                else
                  c_7 = g_7;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, q_0);
        }
        ;
        LocalPopChoice(l_8);
      }
    else
      {
        t = j_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(c_7));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm h_17;
  h_17 = t;
  {
    ATerm r_0 (ATerm t)
    {
      ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
      o_7 = t;
      n_7 :
      if(match_cons(o_7, sym_WaitStatus_3))
        {
          p_7 = ATgetArgument(o_7, 0);
          q_7 = ATgetArgument(o_7, 1);
          r_7 = ATgetArgument(o_7, 2);
          {
            ATerm u_7 = NULL;
            t = not_null(q_7);
            {
              ATerm i_17 = t;
              if((PushChoice() == 0))
                {
                  ATerm t_7 = NULL;
                  t_7 = t;
                  l_7 :
                  if(!(match_int(t_7, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = i_17;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm v_7 = NULL;
                    v_7 = t;
                    if(((u_7 != NULL) && (u_7 != v_7)))
                      _fail(v_7);
                    else
                      u_7 = v_7;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_j_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_7)), term_k_17));
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
    t = try_1(t, r_0);
  }
  t = h_17;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm z_7 = NULL;
  z_7 = t;
  t = SSL_waitpid(not_null(z_7));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm t_63 (ATerm), ATerm u_63 (ATerm))
{
  ATerm g_8 = NULL;
  ATerm i_8 = NULL;
  g_8 = t;
  {
    t = fork_0(t);
    {
      i_8 = t;
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_8 = NULL;
            k_8 = t;
            f_8 :
            if(match_int(k_8, 0))
              {
                t = not_null(g_8);
                t = t_63(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_8), not_null(g_8));
              t = u_63(t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm v_63 (ATerm))
{
  ATerm t_8 = NULL;
  ATerm s_0 (ATerm t)
  {
    ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
    u_8 = t;
    s_8 :
    if(match_cons(u_8, sym__2))
      {
        v_8 = ATgetArgument(u_8, 0);
        w_8 = ATgetArgument(u_8, 1);
        {
          ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
          if(((t_8 != NULL) && (t_8 != w_8)))
            _fail(w_8);
          else
            t_8 = w_8;
          {
            t = not_null(v_8);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  y_8 = t;
                  q_8 :
                  if(match_cons(y_8, sym_WaitStatus_3))
                    {
                      z_8 = ATgetArgument(y_8, 0);
                      a_9 = ATgetArgument(y_8, 1);
                      b_9 = ATgetArgument(y_8, 2);
                      r_8 :
                      if(match_int(z_8, 0))
                        {
                          t = not_null(t_8);
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
  t = fork_2(t, v_63, s_0);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
  g_9 = t;
  f_9 :
  if(match_cons(g_9, sym__2))
    {
      h_9 = ATgetArgument(g_9, 0);
      i_9 = ATgetArgument(g_9, 1);
      {
        ATerm t_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_9), not_null(i_9));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, t_0);
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
  ATerm n_9 = NULL;
  n_9 = t;
  t = SSL_table_keys(not_null(n_9));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm t_9 = NULL;
  t_9 = t;
  {
    t = table_keys_0(t);
    {
      ATerm u_0 (ATerm t)
      {
        ATerm v_9 = NULL;
        ATerm x_9 = NULL;
        v_9 = t;
        {
          ATerm y_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_9), not_null(v_9));
          {
            t = table_get_0(t);
            {
              y_9 = t;
              if(((x_9 != NULL) && (x_9 != y_9)))
                _fail(y_9);
              else
                x_9 = y_9;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(x_9));
        }
        return(t);
      }
      t = map_1(t, u_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm n_92 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm u_17;
    u_17 = t;
    {
      ATerm d_10 = NULL;
      ATerm e_10 = NULL;
      t = term_j_7;
      {
        t = get_config_0(t);
        {
          e_10 = t;
          if(((d_10 != NULL) && (d_10 != e_10)))
            _fail(e_10);
          else
            d_10 = e_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_10), term_c_16);
        t = geq_0(t);
      }
    }
    t = u_17;
    t = n_92(t);
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm v_17;
  v_17 = t;
  {
    ATerm h_10 = NULL;
    ATerm i_10 = NULL;
    i_10 = t;
    if(((h_10 != NULL) && (h_10 != i_10)))
      _fail(i_10);
    else
      h_10 = i_10;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_17, not_null(h_10));
      t = printnl_0(t);
    }
  }
  t = v_17;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm o_10 = NULL;
  ATerm q_10 = NULL,r_10 = NULL;
  o_10 = t;
  {
    ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_10)));
    {
      t = table_get_0(t);
      {
        s_10 = t;
        m_10 :
        if(((ATgetType(s_10) == AT_LIST) && !(ATisEmpty(s_10))))
          {
            t_10 = ATgetFirst((ATermList) s_10);
            w_10 = (ATerm) ATgetNext((ATermList) s_10);
            n_10 :
            if(match_cons(t_10, sym__2))
              {
                u_10 = ATgetArgument(t_10, 0);
                v_10 = ATgetArgument(t_10, 1);
                {
                  if(((q_10 != NULL) && (q_10 != u_10)))
                    _fail(u_10);
                  else
                    q_10 = u_10;
                  if(((r_10 != NULL) && (r_10 != v_10)))
                    _fail(v_10);
                  else
                    r_10 = v_10;
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
    t = not_null(r_10);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
  d_11 = t;
  c_11 :
  if(match_cons(d_11, sym__2))
    {
      e_11 = ATgetArgument(d_11, 0);
      f_11 = ATgetArgument(d_11, 1);
      {
        ATerm i_11 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATmakeAppl(sym_Tool_1, not_null(e_11)));
        {
          t = table_get_0(t);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
              j_11 = t;
              b_11 :
              if(match_cons(j_11, sym__2))
                {
                  k_11 = ATgetArgument(j_11, 0);
                  l_11 = ATgetArgument(j_11, 1);
                  {
                    if(((f_11 != NULL) && (f_11 != k_11)))
                      _fail(k_11);
                    else
                      f_11 = k_11;
                    if(((i_11 != NULL) && (i_11 != l_11)))
                      _fail(l_11);
                    else
                      i_11 = l_11;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, w_0);
          }
        }
        t = not_null(i_11);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm n_76 (ATerm))
{
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
      {
        ATerm d_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              t = filter_1(t, n_76);
              return(t);
            }
            t = Cons_2(t, n_76, x_0);
            ;
            LocalPopChoice(g_18);
          }
        else
          {
            t = d_18;
            {
              ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
              q_11 = t;
              p_11 :
              if(((ATgetType(q_11) == AT_LIST) && !(ATisEmpty(q_11))))
                {
                  r_11 = ATgetFirst((ATermList) q_11);
                  s_11 = (ATerm) ATgetNext((ATermList) q_11);
                  {
                    t = not_null(s_11);
                    t = filter_1(t, n_76);
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
ATerm repeat_1 (ATerm t, ATerm h_78 (ATerm))
{
  ATerm v_11 (ATerm t)
  {
    ATerm z_0 (ATerm t)
    {
      t = h_78(t);
      t = v_11(t);
      return(t);
    }
    t = try_1(t, z_0);
    return(t);
  }
  t = v_11(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm h_18;
  h_18 = t;
  {
    ATerm a_1 (ATerm t)
    {
      t = term_k_18;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm n_18 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_18;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, a_1);
  }
  t = h_18;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm o_18;
  o_18 = t;
  {
    ATerm x_11 = NULL;
    ATerm y_11 = NULL;
    y_11 = t;
    if(((x_11 != NULL) && (x_11 != y_11)))
      _fail(y_11);
    else
      x_11 = y_11;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_17, (ATerm) ATinsert(ATempty, not_null(x_11)));
      t = printnl_0(t);
    }
  }
  t = o_18;
  return(t);
}
ATerm say_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm p_18;
  p_18 = t;
  {
    t = v_64(t);
    t = debug_0(t);
  }
  t = p_18;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm m_92 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm r_18;
    r_18 = t;
    {
      ATerm b_12 = NULL;
      ATerm c_12 = NULL;
      t = term_j_7;
      {
        t = get_config_0(t);
        {
          c_12 = t;
          if(((b_12 != NULL) && (b_12 != c_12)))
            _fail(c_12);
          else
            b_12 = c_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_12), term_e_12);
        t = geq_0(t);
      }
    }
    t = r_18;
    t = m_92(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm o_92 (ATerm))
{
  ATerm f_1 (ATerm t)
  {
    ATerm s_18;
    s_18 = t;
    {
      ATerm f_12 = NULL;
      ATerm g_12 = NULL;
      t = term_j_7;
      {
        t = get_config_0(t);
        {
          g_12 = t;
          if(((f_12 != NULL) && (f_12 != g_12)))
            _fail(g_12);
          else
            f_12 = g_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_12), term_o_9);
        t = geq_0(t);
      }
    }
    t = s_18;
    t = o_92(t);
    return(t);
  }
  t = try_1(t, f_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
  k_12 = t;
  j_12 :
  if(match_cons(k_12, sym__2))
    {
      l_12 = ATgetArgument(k_12, 0);
      m_12 = ATgetArgument(k_12, 1);
      if(((l_12 != NULL) && (l_12 != m_12)))
        _fail(m_12);
      else
        l_12 = m_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm b_73 (ATerm), ATerm c_73 (ATerm))
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  r_12 :
  if(((ATgetType(s_12) == AT_LIST) && !(ATisEmpty(s_12))))
    {
      t_12 = ATgetFirst((ATermList) s_12);
      u_12 = (ATerm) ATgetNext((ATermList) s_12);
      {
        t = c_73(t);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm x_12 = NULL;
            x_12 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_12), not_null(x_12));
              t = b_73(t);
            }
            return(t);
          }
          t = fetch_1(t, g_1);
        }
        t = not_null(u_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm x_72 (ATerm))
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  d_13 = t;
  c_13 :
  if(match_cons(d_13, sym__2))
    {
      e_13 = ATgetArgument(d_13, 0);
      f_13 = ATgetArgument(d_13, 1);
      {
        t = not_null(e_13);
        {
          ATerm j_13 (ATerm t)
          {
            ATerm t_18 = t;
            int w_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(f_13);
                ;
                LocalPopChoice(w_18);
              }
            else
              {
                t = t_18;
                {
                  ATerm x_18 = t;
                  int y_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_1 (ATerm t)
                      {
                        t = not_null(f_13);
                        return(t);
                      }
                      t = HdMember_p__2(t, x_72, h_1);
                      t = j_13(t);
                      ;
                      LocalPopChoice(y_18);
                    }
                  else
                    {
                      t = x_18;
                      t = Cons_2(t, _id, j_13);
                    }
                }
              }
            return(t);
          }
          t = j_13(t);
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
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL;
  o_13 = t;
  n_13 :
  if(match_cons(o_13, sym__3))
    {
      p_13 = ATgetArgument(o_13, 0);
      q_13 = ATgetArgument(o_13, 1);
      r_13 = ATgetArgument(o_13, 2);
      {
        ATerm d_19;
        d_19 = t;
        {
          ATerm v_13 = NULL;
          ATerm w_13 = NULL,y_13 = NULL;
          ATerm x_13 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), not_null(q_13));
          {
            ATerm e_19 = t;
            int f_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(f_19);
              }
            else
              {
                t = e_19;
                t = (ATerm) ATempty;
              }
            {
              x_13 = t;
              if(((w_13 != NULL) && (w_13 != x_13)))
                _fail(x_13);
              else
                w_13 = x_13;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_13), not_null(r_13));
            {
              t = union_0(t);
              {
                y_13 = t;
                if(((v_13 != NULL) && (v_13 != y_13)))
                  _fail(y_13);
                else
                  v_13 = y_13;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_13), not_null(q_13), not_null(v_13));
            t = set_0(t);
          }
        }
        t = d_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  g_14 = t;
  f_14 :
  if(match_cons(g_14, sym__2))
    {
      h_14 = ATgetArgument(g_14, 0);
      i_14 = ATgetArgument(g_14, 1);
      {
        t = not_null(i_14);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
            l_14 = t;
            e_14 :
            if(match_cons(l_14, sym__2))
              {
                m_14 = ATgetArgument(l_14, 0);
                n_14 = ATgetArgument(l_14, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(h_14), not_null(m_14), not_null(n_14));
                  t = i_80(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, i_1);
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
  ATerm v_14 = NULL,w_14 = NULL;
  ATerm c_15 (ATerm t)
  {
    t = SSL_fclose(not_null(w_14));
    return(t);
  }
  w_14 = t;
  u_14 :
  if(match_cons(w_14, sym_Stream_1))
    {
      v_14 = ATgetArgument(w_14, 0);
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(v_14));
            ;
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            t = c_15(t);
          }
      }
    }
  else
    {
      t = c_15(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL;
  f_15 = t;
  e_15 :
  if(match_cons(f_15, sym_Stream_1))
    {
      g_15 = ATgetArgument(f_15, 0);
      t = SSL_read_term_from_stream(not_null(g_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
  m_15 = t;
  l_15 :
  if(match_cons(m_15, sym__2))
    {
      n_15 = ATgetArgument(m_15, 0);
      o_15 = ATgetArgument(m_15, 1);
      {
        ATerm r_15 = NULL;
        t = SSL_fopen(not_null(n_15), not_null(o_15));
        {
          ATerm s_15 = NULL;
          s_15 = t;
          if(((r_15 != NULL) && (r_15 != s_15)))
            _fail(s_15);
          else
            r_15 = s_15;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_15));
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
  ATerm w_15 = NULL;
  t = SSL_stdin_stream();
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
ATerm stdout_stream_0 (ATerm t)
{
  ATerm a_16 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm b_16 = NULL;
    b_16 = t;
    if(((a_16 != NULL) && (a_16 != b_16)))
      _fail(b_16);
    else
      a_16 = b_16;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_16));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm e_16 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm f_16 = NULL;
    f_16 = t;
    if(((e_16 != NULL) && (e_16 != f_16)))
      _fail(f_16);
    else
      e_16 = f_16;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_16));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm l_16 = NULL;
  l_16 = t;
  k_16 :
  if(match_cons(l_16, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(l_16, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(l_16, sym_stdin_0))
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
  ATerm v_16 = NULL;
  ATerm x_16 = NULL,y_16 = NULL;
  v_16 = t;
  {
    ATerm z_16 = NULL;
    ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
    t = not_null(v_16);
    {
      z_16 = t;
      {
        t = SSL_explode_term(not_null(z_16));
        {
          b_17 = t;
          s_16 :
          if(match_cons(b_17, sym__2))
            {
              c_17 = ATgetArgument(b_17, 0);
              d_17 = ATgetArgument(b_17, 1);
              t_16 :
              if(match_string(c_17, ""))
                {
                  u_16 :
                  if(((ATgetType(d_17) == AT_LIST) && !(ATisEmpty(d_17))))
                    {
                      e_17 = ATgetFirst((ATermList) d_17);
                      f_17 = (ATerm) ATgetNext((ATermList) d_17);
                      {
                        if(((y_16 != NULL) && (y_16 != e_17)))
                          _fail(e_17);
                        else
                          y_16 = e_17;
                        if(((x_16 != NULL) && (x_16 != f_17)))
                          _fail(f_17);
                        else
                          x_16 = f_17;
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
    t = not_null(y_16);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
  n_17 = t;
  m_17 :
  if(match_cons(n_17, sym__2))
    {
      o_17 = ATgetArgument(n_17, 0);
      p_17 = ATgetArgument(n_17, 1);
      {
        ATerm n_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(o_19);
          }
        else
          {
            t = n_19;
            {
              ATerm t_19 = t;
              int x_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_1 (ATerm t)
                  {
                    ATerm q_17 = NULL,r_17 = NULL;
                    q_17 = t;
                    l_17 :
                    if(match_cons(q_17, sym_Path_1))
                      {
                        r_17 = ATgetArgument(q_17, 0);
                        t = not_null(r_17);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, j_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(x_19);
                }
              else
                {
                  t = t_19;
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
  ATerm z_17 = NULL;
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_17 = NULL;
      ATerm y_17 = NULL;
      y_17 = t;
      if(((x_17 != NULL) && (x_17 != y_17)))
        _fail(y_17);
      else
        x_17 = y_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_17), term_a_20);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        ATerm k_1 (ATerm t)
        {
          t = term_b_20;
          return(t);
        }
        t = debug_1(t, k_1);
        _fail(t);
      }
    }
  {
    ATerm h_20;
    h_20 = t;
    {
      ATerm a_18 = NULL;
      t = read_from_stream_0(t);
      {
        a_18 = t;
        if(((z_17 != NULL) && (z_17 != a_18)))
          _fail(a_18);
        else
          z_17 = a_18;
      }
    }
    t = h_20;
    {
      t = fclose_0(t);
      t = not_null(z_17);
    }
  }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm e_18 = NULL;
  ATerm f_18 = NULL;
  f_18 = t;
  if(((e_18 != NULL) && (e_18 != f_18)))
    _fail(f_18);
  else
    e_18 = f_18;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_18), (ATerm) ATinsert(ATempty, term_l_20));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm m_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(p_20);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = m_20;
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_20 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_20;
              }
            {
              ATerm l_1 (ATerm t)
              {
                t = term_x_20;
                return(t);
              }
              t = debug_1(t, l_1);
            }
            ;
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            {
              ATerm m_1 (ATerm t)
              {
                t = term_y_20;
                return(t);
              }
              t = debug_1(t, m_1);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm j_18 = NULL;
  ATerm l_18 = NULL;
  j_18 = t;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm o_1 (ATerm t)
      {
        t = term_z_20;
        return(t);
      }
      t = debug_1(t, o_1);
      return(t);
    }
    t = if_verbose5_1(t, n_1);
    {
      ATerm a_21 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATmakeAppl(sym_Imported_1, not_null(j_18)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_21;
        }
      {
        ATerm b_21;
        b_21 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_17, term_c_21, (ATerm) ATinsert(ATempty, not_null(j_18)));
          t = table_put_0(t);
        }
        t = b_21;
        {
          ATerm p_1 (ATerm t)
          {
            ATerm q_1 (ATerm t)
            {
              t = term_e_21;
              return(t);
            }
            t = debug_1(t, q_1);
            return(t);
          }
          t = if_verbose4_1(t, p_1);
          {
            t = read_repository_file_0(t);
            {
              ATerm r_1 (ATerm t)
              {
                ATerm s_1 (ATerm t)
                {
                  t = term_f_21;
                  return(t);
                }
                t = say_1(t, s_1);
                return(t);
              }
              t = if_verbose6_1(t, r_1);
              {
                ATerm m_18 = NULL;
                m_18 = t;
                if(((l_18 != NULL) && (l_18 != m_18)))
                  _fail(m_18);
                else
                  l_18 = m_18;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_17, not_null(l_18));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm t_1 (ATerm t)
                      {
                        ATerm u_1 (ATerm t)
                        {
                          t = term_g_21;
                          return(t);
                        }
                        t = say_1(t, u_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, t_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_w_17, (ATerm)ATmakeAppl(sym_Imported_1, not_null(j_18)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm v_1 (ATerm t)
                            {
                              ATerm w_1 (ATerm t)
                              {
                                t = term_f_21;
                                return(t);
                              }
                              t = say_1(t, w_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, v_1);
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
  ATerm q_18 = NULL;
  q_18 = t;
  t = SSL_getenv(not_null(q_18));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm h_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_21;
      t = get_config_0(t);
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = h_21;
      {
        ATerm m_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_p_21;
            t = getenv_0(t);
            ;
            LocalPopChoice(n_21);
          }
        else
          {
            t = m_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm y_1 (ATerm t)
    {
      t = term_q_21;
      return(t);
    }
    t = debug_1(t, y_1);
    return(t);
  }
  t = if_verbose5_1(t, x_1);
  {
    ATerm r_21;
    r_21 = t;
    {
      ATerm s_21 = t;
      int t_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_v_21;
          t = table_get_0(t);
          ;
          LocalPopChoice(t_21);
        }
      else
        {
          t = s_21;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = r_21;
    {
      ATerm z_1 (ATerm t)
      {
        ATerm b_2 (ATerm t)
        {
          t = term_w_21;
          return(t);
        }
        t = debug_1(t, b_2);
        return(t);
      }
      t = if_verbose5_1(t, z_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm d_2 (ATerm t)
        {
          t = term_z_21;
          return(t);
        }
        t = debug_1(t, d_2);
        return(t);
      }
      t = if_verbose5_1(t, c_2);
      {
        t = xtc_load_0(t);
        {
          ATerm a_22 = t;
          int b_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(b_22);
            }
          else
            {
              t = a_22;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm e_2 (ATerm t)
            {
              ATerm f_2 (ATerm t)
              {
                t = term_z_21;
                return(t);
              }
              t = debug_1(t, f_2);
              return(t);
            }
            t = if_verbose5_1(t, e_2);
          }
        }
      }
      ;
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      {
        ATerm u_18 = NULL;
        ATerm v_18 = NULL;
        v_18 = t;
        if(((u_18 != NULL) && (u_18 != v_18)))
          _fail(v_18);
        else
          u_18 = v_18;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_22), not_null(u_18)), term_c_22);
          {
            t = error_0(t);
            {
              ATerm g_2 (ATerm t)
              {
                t = term_w_17;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm h_2 (ATerm t)
                    {
                      t = term_p_22;
                      return(t);
                    }
                    t = debug_1(t, h_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, g_2);
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
ATerm xtc_command_1 (ATerm t, ATerm m_82 (ATerm))
{
  ATerm z_18 = NULL;
  ATerm q_22;
  q_22 = t;
  {
    ATerm a_19 = NULL;
    t = m_82(t);
    {
      t = xtc_find_warning_0(t);
      {
        a_19 = t;
        if(((z_18 != NULL) && (z_18 != a_19)))
          _fail(a_19);
        else
          z_18 = a_19;
      }
    }
  }
  t = q_22;
  {
    ATerm r_22;
    r_22 = t;
    {
      ATerm b_19 = NULL;
      ATerm c_19 = NULL;
      c_19 = t;
      if(((b_19 != NULL) && (b_19 != c_19)))
        _fail(c_19);
      else
        b_19 = c_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_18), not_null(b_19));
        t = call_0(t);
      }
    }
    t = r_22;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm l_79 (ATerm))
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  k_19 = t;
  j_19 :
  if(match_cons(k_19, sym__2))
    {
      l_19 = ATgetArgument(k_19, 0);
      m_19 = ATgetArgument(k_19, 1);
      {
        ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
        ATerm s_22;
        s_22 = t;
        {
          ATerm s_19 = NULL;
          ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
          t = l_79(t);
          {
            s_19 = t;
            {
              if(((p_19 != NULL) && (p_19 != s_19)))
                _fail(s_19);
              else
                p_19 = s_19;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(p_19), not_null(l_19), not_null(m_19));
                {
                  t = table_push_0(t);
                  {
                    ATerm t_22 = t;
                    int u_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_19), term_v_22);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(u_22);
                      }
                    else
                      {
                        t = t_22;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_19 = t;
                      i_19 :
                      if(((ATgetType(u_19) == AT_LIST) && !(ATisEmpty(u_19))))
                        {
                          v_19 = ATgetFirst((ATermList) u_19);
                          w_19 = (ATerm) ATgetNext((ATermList) u_19);
                          {
                            if(((q_19 != NULL) && (q_19 != v_19)))
                              _fail(v_19);
                            else
                              q_19 = v_19;
                            {
                              if(((r_19 != NULL) && (r_19 != w_19)))
                                _fail(w_19);
                              else
                                r_19 = w_19;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(p_19), term_v_22, (ATerm) ATinsert(CheckATermList(not_null(r_19)), (ATerm) ATinsert(CheckATermList(not_null(q_19)), not_null(l_19))));
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
        t = s_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm y_64 (ATerm))
{
  ATerm w_22;
  w_22 = t;
  {
    t = y_64(t);
    {
      ATerm i_2 (ATerm t)
      {
        t = term_x_22;
        return(t);
      }
      t = debug_1(t, i_2);
    }
  }
  t = w_22;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
  ATerm n_20 (ATerm t)
  {
    ATerm a_23 = t;
    if((PushChoice() == 0))
      {
        ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL;
        i_20 = t;
        c_20 :
        if(match_cons(i_20, sym__2))
          {
            j_20 = ATgetArgument(i_20, 0);
            k_20 = ATgetArgument(i_20, 1);
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
        t = a_23;
      }
    {
      ATerm j_2 (ATerm t)
      {
        t = term_f_23;
        return(t);
      }
      t = obsolete_1(t, j_2);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_20), term_b_8);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm o_20 (ATerm t)
  {
    t = SSL_open_file(not_null(f_20), not_null(g_20));
    return(t);
  }
  e_20 = t;
  d_20 :
  if(match_cons(e_20, sym__2))
    {
      f_20 = ATgetArgument(e_20, 0);
      g_20 = ATgetArgument(e_20, 1);
      {
        ATerm g_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_20(t);
            ;
            LocalPopChoice(h_23);
          }
        else
          {
            t = g_23;
            t = o_20(t);
          }
      }
    }
  else
    {
      t = n_20(t);
    }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,v_20 = NULL;
  r_20 = t;
  q_20 :
  if(match_cons(r_20, sym__2))
    {
      s_20 = ATgetArgument(r_20, 0);
      v_20 = ATgetArgument(r_20, 1);
      t = SSL_access(not_null(s_20), not_null(v_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm d_21 = NULL;
  ATerm i_21 = NULL;
  i_21 = t;
  if(((d_21 != NULL) && (d_21 != i_21)))
    _fail(i_21);
  else
    d_21 = i_21;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_21), (ATerm) ATinsert(ATempty, term_i_23));
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
  ATerm l_21 = NULL;
  ATerm o_21 = NULL;
  t = term_y_7;
  {
    t = new_0(t);
    {
      o_21 = t;
      if(((l_21 != NULL) && (l_21 != o_21)))
        _fail(o_21);
      else
        l_21 = o_21;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_21), term_j_23);
    {
      t = conc_strings_0(t);
      {
        ATerm k_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, k_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm u_21 = NULL;
  t = new_file_0(t);
  {
    u_21 = t;
    {
      ATerm k_23;
      k_23 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_21), term_b_8);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_21), term_y_7);
            {
              ATerm l_2 (ATerm t)
              {
                t = term_l_23;
                return(t);
              }
              t = assert_1(t, l_2);
            }
          }
        }
      }
      t = k_23;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm e_22 = NULL,f_22 = NULL;
  e_22 = t;
  d_22 :
  if(match_cons(e_22, sym_stdin_0))
    {
      ATerm g_22 = NULL;
      ATerm h_22 = NULL;
      ATerm i_22 = NULL;
      t = xtc_new_file_0(t);
      {
        h_22 = t;
        {
          if(((g_22 != NULL) && (g_22 != h_22)))
            _fail(h_22);
          else
            g_22 = h_22;
          {
            ATerm j_22 = NULL;
            t = o_0(t);
            {
              j_22 = t;
              if(((i_22 != NULL) && (i_22 != j_22)))
                _fail(j_22);
              else
                i_22 = j_22;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_22), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_22)), term_p_23));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(g_22);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_22));
    }
  else
    {
      if(match_cons(e_22, sym_FILE_1))
        {
          f_22 = ATgetArgument(e_22, 0);
          {
            ATerm l_22 = NULL;
            ATerm m_22 = NULL;
            t = not_null(f_22);
            {
              ATerm n_22 = NULL;
              t = xtc_new_file_0(t);
              {
                m_22 = t;
                {
                  if(((l_22 != NULL) && (l_22 != m_22)))
                    _fail(m_22);
                  else
                    l_22 = m_22;
                  {
                    ATerm o_22 = NULL;
                    t = o_0(t);
                    {
                      o_22 = t;
                      if(((n_22 != NULL) && (n_22 != o_22)))
                        _fail(o_22);
                      else
                        n_22 = o_22;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_22), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_22)), term_p_23), not_null(f_22)), term_q_23));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(l_22);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_22));
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
  ATerm z_22 = NULL;
  z_22 = t;
  y_22 :
  if(match_cons(z_22, sym_stdin_0))
    {
      ATerm b_23 = NULL,d_23 = NULL;
      ATerm u_23;
      u_23 = t;
      {
        ATerm c_23 = NULL;
        t = SSLgetAnnotations(not_null(z_22));
        {
          c_23 = t;
          if(((b_23 != NULL) && (b_23 != c_23)))
            _fail(c_23);
          else
            b_23 = c_23;
        }
      }
      t = u_23;
      {
        ATerm e_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(b_23));
        {
          e_23 = t;
          if(((d_23 != NULL) && (d_23 != e_23)))
            _fail(e_23);
          else
            d_23 = e_23;
        }
        t = not_null(d_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm q_61 (ATerm))
{
  ATerm n_23 = NULL,o_23 = NULL;
  n_23 = t;
  m_23 :
  if(match_cons(n_23, sym_FILE_1))
    {
      o_23 = ATgetArgument(n_23, 0);
      {
        ATerm r_23 = NULL,t_23 = NULL;
        ATerm s_23 = NULL;
        t = SSLgetAnnotations(not_null(n_23));
        {
          s_23 = t;
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
        }
        {
          t = not_null(o_23);
          {
            ATerm v_23 = NULL;
            t = q_61(t);
            {
              t_23 = t;
              {
                ATerm w_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(t_23)), not_null(r_23));
                {
                  w_23 = t;
                  if(((v_23 != NULL) && (v_23 != w_23)))
                    _fail(w_23);
                  else
                    v_23 = w_23;
                }
                t = not_null(v_23);
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
ATerm xtc_transform_2 (ATerm t, ATerm o_82 (ATerm), ATerm p_82 (ATerm))
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_23 = t;
      int a_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(a_24);
        }
      else
        {
          t = z_23;
          t = stdin_0(t);
        }
      LocalPopChoice(y_23);
      t = xtc_transform_file_2(t, o_82, p_82);
    }
  else
    {
      t = x_23;
      t = xtc_transform_term_2(t, o_82, p_82);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,j_24 = NULL;
  d_24 = t;
  c_24 :
  if(match_cons(d_24, sym__2))
    {
      e_24 = ATgetArgument(d_24, 0);
      j_24 = ATgetArgument(d_24, 1);
      t = SSL_copy(not_null(e_24), not_null(j_24));
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
      ATerm b_24;
      b_24 = t;
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
      t = b_24;
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
      ATerm f_24;
      f_24 = t;
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
      t = f_24;
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
  ATerm f_26 = NULL,g_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym_FILE_1))
    {
      g_26 = ATgetArgument(f_26, 0);
      {
        ATerm g_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_26 = NULL;
            ATerm j_26 = NULL;
            t = m_0(t);
            {
              j_26 = t;
              {
                if(((i_26 != NULL) && (i_26 != j_26)))
                  _fail(j_26);
                else
                  i_26 = j_26;
                {
                  ATerm i_24 = t;
                  int k_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(k_24);
                    }
                  else
                    {
                      t = i_24;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_26), not_null(i_26));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_26));
            ;
            LocalPopChoice(h_24);
          }
        else
          {
            t = g_24;
            {
              ATerm l_24 = t;
              int m_24 = stack_ptr;
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
                        ATerm n_24 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm o_24 = t;
                            int p_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(p_24);
                              }
                            else
                              {
                                t = o_24;
                                {
                                  ATerm q_24 = t;
                                  int r_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(r_24);
                                    }
                                  else
                                    {
                                      t = q_24;
                                      {
                                        ATerm o_26 = NULL;
                                        o_26 = t;
                                        if(((g_26 != NULL) && (g_26 != o_26)))
                                          _fail(o_26);
                                        else
                                          g_26 = o_26;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = n_24;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_26), not_null(m_26));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_26));
                  ;
                  LocalPopChoice(m_24);
                }
              else
                {
                  t = l_24;
                  {
                    ATerm q_26 = NULL;
                    t = m_0(t);
                    {
                      q_26 = t;
                      if(((g_26 != NULL) && (g_26 != q_26)))
                        _fail(q_26);
                      else
                        g_26 = q_26;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_26));
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
        ATerm s_24;
        s_24 = t;
        {
          ATerm r_27 = NULL;
          ATerm s_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_27), not_null(o_27));
          {
            ATerm v_24 = t;
            int a_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(a_25);
              }
            else
              {
                t = v_24;
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
        t = s_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm i_79 (ATerm))
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
  ATerm b_25;
  b_25 = t;
  {
    ATerm c_28 = NULL;
    ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
    t = i_79(t);
    {
      c_28 = t;
      {
        if(((b_28 != NULL) && (b_28 != c_28)))
          _fail(c_28);
        else
          b_28 = c_28;
        {
          ATerm c_25 = t;
          int d_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), term_v_22);
              t = table_get_0(t);
              ;
              LocalPopChoice(d_25);
            }
          else
            {
              t = c_25;
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
                      t = (ATerm) ATmakeAppl(sym__3, not_null(b_28), term_v_22, not_null(z_27));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(a_28);
                          {
                            ATerm m_2 (ATerm t)
                            {
                              ATerm g_28 = NULL;
                              g_28 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), not_null(g_28));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, m_2);
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
  t = b_25;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  t = SSL_remove(not_null(m_28));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm d_80 (ATerm), ATerm e_80 (ATerm))
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_80(t);
      t = e_80(t);
      ;
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      {
        t = e_80(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm h_79 (ATerm))
{
  ATerm r_28 = NULL;
  ATerm g_25;
  g_25 = t;
  {
    ATerm s_28 = NULL;
    ATerm t_28 = NULL;
    t = h_79(t);
    {
      s_28 = t;
      {
        if(((r_28 != NULL) && (r_28 != s_28)))
          _fail(s_28);
        else
          r_28 = s_28;
        {
          ATerm u_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), term_v_22);
          {
            ATerm h_25 = t;
            int k_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(k_25);
              }
            else
              {
                t = h_25;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_28), term_v_22, (ATerm) ATinsert(CheckATermList(not_null(t_28)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = g_25;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm y_81 (ATerm))
{
  ATerm z_28 = NULL,a_29 = NULL;
  ATerm n_2 (ATerm t)
  {
    t = term_l_23;
    return(t);
  }
  t = begin_scope_1(t, n_2);
  {
    ATerm o_2 (ATerm t)
    {
      ATerm p_25;
      p_25 = t;
      {
        ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_25;
            t = table_get_0(t);
            ;
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
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
                      ATerm p_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, p_2);
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
      t = p_25;
      {
        ATerm q_2 (ATerm t)
        {
          t = term_l_23;
          return(t);
        }
        t = end_scope_1(t, q_2);
      }
      return(t);
    }
    t = restore_always_2(t, y_81, o_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm z_81 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_29 = NULL;
        ATerm h_29 = NULL;
        t = term_q_23;
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
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        t = term_a_8;
      }
    {
      t = z_81(t);
      {
        ATerm v_2 (ATerm t)
        {
          ATerm v_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_p_23;
              t = get_config_0(t);
              ;
              LocalPopChoice(w_25);
            }
          else
            {
              t = v_25;
              t = term_x_25;
            }
          return(t);
        }
        t = copy_to_1(t, v_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, r_2);
  return(t);
}
ATerm ast2text_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm x_2 (ATerm t)
    {
      t = term_y_25;
      return(t);
    }
    ATerm y_2 (ATerm t)
    {
      t = term_z_25;
      {
        t = get_config_0(t);
        {
          ATerm z_2 (ATerm t)
          {
            ATerm k_29 = NULL;
            ATerm l_29 = NULL;
            l_29 = t;
            if(((k_29 != NULL) && (k_29 != l_29)))
              _fail(l_29);
            else
              k_29 = l_29;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_29)), term_z_25);
            return(t);
          }
          t = map_1(t, z_2);
          t = concat_0(t);
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, x_2, y_2);
    t = xtc_abox2text_1(t, pass_width_0);
    return(t);
  }
  t = xtc_io_1(t, w_2);
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
  r_29 = t;
  q_29 :
  if(match_cons(r_29, sym__2))
    {
      s_29 = ATgetArgument(r_29, 0);
      t_29 = ATgetArgument(r_29, 1);
      {
        ATerm w_29 = NULL;
        ATerm x_29 = NULL,z_29 = NULL;
        ATerm y_29 = NULL;
        t = not_null(s_29);
        {
          ATerm a_26 = t;
          int b_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(b_26);
            }
          else
            {
              t = a_26;
              t = (ATerm) ATempty;
            }
          {
            y_29 = t;
            if(((x_29 != NULL) && (x_29 != y_29)))
              _fail(y_29);
            else
              x_29 = y_29;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_29), not_null(x_29));
          {
            t = conc_0(t);
            {
              z_29 = t;
              if(((w_29 != NULL) && (w_29 != z_29)))
                _fail(z_29);
              else
                w_29 = z_29;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_c_26, not_null(s_29), not_null(w_29));
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
ATerm pp_options_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm f_30 = NULL;
    f_30 = t;
    d_30 :
    if(!(match_string(f_30, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm d_26;
    d_26 = t;
    {
      ATerm g_30 = NULL;
      ATerm h_30 = NULL;
      h_30 = t;
      if(((g_30 != NULL) && (g_30 != h_30)))
        _fail(h_30);
      else
        g_30 = h_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_25, (ATerm) ATinsert(ATempty, not_null(g_30)));
        t = extend_config_0(t);
      }
    }
    t = d_26;
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_h_26;
    return(t);
  }
  t = ArgOption_3(t, a_3, b_3, g_3);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
  o_30 = t;
  m_30 :
  if(match_string(o_30, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(o_30) == AT_LIST) && !(ATisEmpty(o_30))))
        {
          p_30 = ATgetFirst((ATermList) o_30);
          q_30 = (ATerm) ATgetNext((ATermList) o_30);
          n_30 :
          if(((ATgetType(q_30) == AT_LIST) && !(ATisEmpty(q_30))))
            {
              r_30 = ATgetFirst((ATermList) q_30);
              s_30 = (ATerm) ATgetNext((ATermList) q_30);
              {
                ATerm w_30 = NULL;
                ATerm k_26;
                k_26 = t;
                {
                  t = not_null(p_30);
                  t = j_0(t);
                }
                t = k_26;
                {
                  ATerm x_30 = NULL;
                  t = not_null(r_30);
                  {
                    t = k_0(t);
                    {
                      x_30 = t;
                      if(((w_30 != NULL) && (w_30 != x_30)))
                        _fail(x_30);
                      else
                        w_30 = x_30;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_30)), not_null(w_30));
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
  ATerm h_3 (ATerm t)
  {
    ATerm e_31 = NULL;
    e_31 = t;
    d_31 :
    if(!(match_string(e_31, "-v")))
      {
        if(!(match_string(e_31, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_p_26;
    t = set_config_0(t);
    t = term_r_26;
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_s_26;
    return(t);
  }
  t = Option_3(t, h_3, i_3, j_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm l_31 = NULL;
    l_31 = t;
    i_31 :
    if(!(match_string(l_31, "-k")))
      {
        if(!(match_string(l_31, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    ATerm t_26;
    t_26 = t;
    {
      ATerm m_31 = NULL;
      ATerm n_31 = NULL;
      t = string_to_int_0(t);
      {
        n_31 = t;
        if(((m_31 != NULL) && (m_31 != n_31)))
          _fail(n_31);
        else
          m_31 = n_31;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_26, not_null(m_31));
        t = set_config_0(t);
      }
    }
    t = t_26;
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = term_v_26;
    return(t);
  }
  t = ArgOption_3(t, k_3, l_3, r_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_31 = NULL;
  q_31 = t;
  t = SSL_string_to_int(not_null(q_31));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_3 (ATerm t)
      {
        ATerm y_31 = NULL;
        y_31 = t;
        t_31 :
        if(!(match_string(y_31, "-S")))
          {
            if(!(match_string(y_31, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        t = term_z_26;
        t = set_config_0(t);
        t = term_a_27;
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        t = term_b_27;
        return(t);
      }
      t = Option_3(t, u_3, v_3, w_3);
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      {
        ATerm c_27 = t;
        int h_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_3 (ATerm t)
            {
              ATerm z_31 = NULL;
              z_31 = t;
              u_31 :
              if(!(match_string(z_31, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm y_3 (ATerm t)
            {
              ATerm c_32 = NULL;
              ATerm i_27;
              i_27 = t;
              {
                ATerm a_32 = NULL;
                ATerm b_32 = NULL;
                t = string_to_int_0(t);
                {
                  b_32 = t;
                  if(((a_32 != NULL) && (a_32 != b_32)))
                    _fail(b_32);
                  else
                    a_32 = b_32;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_7, not_null(a_32));
                  t = set_config_0(t);
                }
              }
              t = i_27;
              {
                ATerm d_32 = NULL;
                d_32 = t;
                if(((c_32 != NULL) && (c_32 != d_32)))
                  _fail(d_32);
                else
                  c_32 = d_32;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_32));
              }
              return(t);
            }
            ATerm z_3 (ATerm t)
            {
              t = term_j_27;
              return(t);
            }
            t = ArgOption_3(t, x_3, y_3, z_3);
            ;
            LocalPopChoice(h_27);
          }
        else
          {
            t = c_27;
            {
              ATerm g_4 (ATerm t)
              {
                ATerm e_32 = NULL;
                e_32 = t;
                x_31 :
                if(!(match_string(e_32, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm h_4 (ATerm t)
              {
                t = term_p_27;
                t = set_config_0(t);
                t = term_q_27;
                return(t);
              }
              ATerm k_4 (ATerm t)
              {
                t = term_t_27;
                return(t);
              }
              t = Option_3(t, g_4, h_4, k_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
      {
        ATerm w_27 = t;
        int x_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(x_27);
          }
        else
          {
            t = w_27;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    ATerm k_32 = NULL;
    k_32 = t;
    h_32 :
    if(!(match_string(k_32, "-o")))
      {
        if(!(match_string(k_32, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    ATerm p_32 = NULL;
    ATerm h_28;
    h_28 = t;
    {
      ATerm n_32 = NULL;
      ATerm o_32 = NULL;
      o_32 = t;
      if(((n_32 != NULL) && (n_32 != o_32)))
        _fail(o_32);
      else
        n_32 = o_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_23, not_null(n_32));
        t = set_config_0(t);
      }
    }
    t = h_28;
    {
      ATerm q_32 = NULL;
      q_32 = t;
      if(((p_32 != NULL) && (p_32 != q_32)))
        _fail(q_32);
      else
        p_32 = q_32;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_32));
    }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    t = term_i_28;
    return(t);
  }
  t = ArgOption_3(t, l_4, m_4, n_4);
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm w_32 = NULL;
    w_32 = t;
    t_32 :
    if(!(match_string(w_32, "-i")))
      {
        if(!(match_string(w_32, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    ATerm z_32 = NULL;
    ATerm j_28;
    j_28 = t;
    {
      ATerm x_32 = NULL;
      ATerm y_32 = NULL;
      y_32 = t;
      if(((x_32 != NULL) && (x_32 != y_32)))
        _fail(y_32);
      else
        x_32 = y_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_23, not_null(x_32));
        t = set_config_0(t);
      }
    }
    t = j_28;
    {
      ATerm a_33 = NULL;
      a_33 = t;
      if(((z_32 != NULL) && (z_32 != a_33)))
        _fail(a_33);
      else
        z_32 = a_33;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_32));
    }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_k_28;
    return(t);
  }
  t = ArgOption_3(t, o_4, t_4, u_4);
  return(t);
}
ATerm abox2text_options_0 (ATerm t)
{
  ATerm l_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = l_28;
      {
        ATerm o_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0(t);
            ;
            LocalPopChoice(p_28);
          }
        else
          {
            t = o_28;
            {
              ATerm q_28 = t;
              int v_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0(t);
                  ;
                  LocalPopChoice(v_28);
                }
              else
                {
                  t = q_28;
                  {
                    ATerm z_4 (ATerm t)
                    {
                      ATerm f_33 = NULL;
                      f_33 = t;
                      d_33 :
                      if(!(match_string(f_33, "-w")))
                        {
                          if(!(match_string(f_33, "--width")))
                            {
                              _fail(t);
                            }
                        }
                      return(t);
                    }
                    ATerm a_5 (ATerm t)
                    {
                      ATerm w_28;
                      w_28 = t;
                      {
                        ATerm g_33 = NULL;
                        ATerm h_33 = NULL;
                        h_33 = t;
                        if(((g_33 != NULL) && (g_33 != h_33)))
                          _fail(h_33);
                        else
                          g_33 = h_33;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_a_7, not_null(g_33));
                          t = set_config_0(t);
                        }
                      }
                      t = w_28;
                      return(t);
                    }
                    ATerm b_5 (ATerm t)
                    {
                      t = term_x_28;
                      return(t);
                    }
                    t = ArgOption_3(t, z_4, a_5, b_5);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm ast2text_options_0 (ATerm t)
{
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_options_0(t);
      ;
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      t = pp_options_0(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm i_29;
  i_29 = t;
  {
    ATerm k_33 = NULL;
    ATerm l_33 = NULL;
    t = term_y_7;
    {
      t = whoami_0(t);
      {
        l_33 = t;
        if(((k_33 != NULL) && (k_33 != l_33)))
          _fail(l_33);
        else
          k_33 = l_33;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_29), not_null(k_33)), term_j_29));
      {
        t = printnl_0(t);
        {
          t = term_s_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_29;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm o_33 = NULL;
  t = report_run_time_0(t);
  {
    ATerm p_33 = NULL;
    t = term_y_7;
    {
      t = whoami_0(t);
      {
        p_33 = t;
        if(((o_33 != NULL) && (o_33 != p_33)))
          _fail(p_33);
        else
          o_33 = p_33;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_17, (ATerm) ATinsert(ATinsert(ATempty, term_n_29), not_null(o_33)));
      {
        t = printnl_0(t);
        {
          t = term_s_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_o_29;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_33 = NULL;
  s_33 = t;
  t = SSL_TicksToSeconds(not_null(s_33));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  w_33 :
  if(match_cons(x_33, sym__2))
    {
      y_33 = ATgetArgument(x_33, 0);
      z_33 = ATgetArgument(x_33, 1);
      {
        ATerm p_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_33), not_null(z_33));
            ;
            LocalPopChoice(u_29);
          }
        else
          {
            t = p_29;
            t = SSL_addr(not_null(y_33), not_null(z_33));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm k_75 (ATerm), ATerm l_75 (ATerm))
{
  ATerm v_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_75(t);
      ;
      LocalPopChoice(a_30);
    }
  else
    {
      t = v_29;
      {
        ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
        g_34 = t;
        f_34 :
        if(((ATgetType(g_34) == AT_LIST) && !(ATisEmpty(g_34))))
          {
            h_34 = ATgetFirst((ATermList) g_34);
            i_34 = (ATerm) ATgetNext((ATermList) g_34);
            {
              ATerm l_34 = NULL;
              ATerm m_34 = NULL;
              t = not_null(i_34);
              {
                t = foldr_2(t, k_75, l_75);
                {
                  m_34 = t;
                  if(((l_34 != NULL) && (l_34 != m_34)))
                    _fail(m_34);
                  else
                    l_34 = m_34;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_34), not_null(l_34));
                t = l_75(t);
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
ATerm crush_2 (ATerm t, ATerm i_73 (ATerm), ATerm j_73 (ATerm))
{
  ATerm t_34 = NULL;
  ATerm v_34 = NULL;
  t_34 = t;
  {
    ATerm w_34 = NULL;
    ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
    t = not_null(t_34);
    {
      w_34 = t;
      {
        t = SSL_explode_term(not_null(w_34));
        {
          y_34 = t;
          s_34 :
          if(match_cons(y_34, sym__2))
            {
              z_34 = ATgetArgument(y_34, 0);
              a_35 = ATgetArgument(y_34, 1);
              if(((v_34 != NULL) && (v_34 != a_35)))
                _fail(a_35);
              else
                v_34 = a_35;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_34);
      t = foldr_2(t, i_73, j_73);
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
    ATerm c_5 (ATerm t)
    {
      t = term_y_26;
      return(t);
    }
    t = crush_2(t, c_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
  g_35 = t;
  f_35 :
  if(match_cons(g_35, sym__2))
    {
      h_35 = ATgetArgument(g_35, 0);
      i_35 = ATgetArgument(g_35, 1);
      {
        ATerm b_30;
        b_30 = t;
        {
          ATerm c_30 = t;
          int e_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(h_35), not_null(i_35));
              ;
              LocalPopChoice(e_30);
            }
          else
            {
              t = c_30;
              t = SSL_gtr(not_null(h_35), not_null(i_35));
            }
        }
        t = b_30;
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
  ATerm o_35 = NULL;
  ATerm i_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
      p_35 = t;
      n_35 :
      if(match_cons(p_35, sym__2))
        {
          q_35 = ATgetArgument(p_35, 0);
          r_35 = ATgetArgument(p_35, 1);
          {
            if(((o_35 != NULL) && (o_35 != q_35)))
              _fail(q_35);
            else
              o_35 = q_35;
            if(((o_35 != NULL) && (o_35 != r_35)))
              _fail(r_35);
            else
              o_35 = r_35;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(j_30);
    }
  else
    {
      t = i_30;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm j_92 (ATerm))
{
  ATerm d_5 (ATerm t)
  {
    ATerm k_30;
    k_30 = t;
    {
      ATerm u_35 = NULL;
      ATerm v_35 = NULL;
      t = term_j_7;
      {
        t = get_config_0(t);
        {
          v_35 = t;
          if(((u_35 != NULL) && (u_35 != v_35)))
            _fail(v_35);
          else
            u_35 = v_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_35), term_s_7);
        t = geq_0(t);
      }
    }
    t = k_30;
    t = j_92(t);
    return(t);
  }
  t = try_1(t, d_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm z_35 = NULL,b_36 = NULL;
    ATerm l_30;
    l_30 = t;
    {
      ATerm a_36 = NULL;
      t = run_time_0(t);
      {
        a_36 = t;
        if(((z_35 != NULL) && (z_35 != a_36)))
          _fail(a_36);
        else
          z_35 = a_36;
      }
    }
    t = l_30;
    {
      ATerm c_36 = NULL;
      t = term_y_7;
      {
        t = whoami_0(t);
        {
          c_36 = t;
          if(((b_36 != NULL) && (b_36 != c_36)))
            _fail(c_36);
          else
            b_36 = c_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_30), not_null(z_35)), term_e_8), not_null(b_36)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, f_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_y_26;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_36 = NULL;
  j_36 = t;
  i_36 :
  if(match_cons(j_36, sym_Version_0))
    {
      ATerm l_36 = NULL,n_36 = NULL;
      ATerm u_30;
      u_30 = t;
      {
        ATerm m_36 = NULL;
        t = SSLgetAnnotations(not_null(j_36));
        {
          m_36 = t;
          if(((l_36 != NULL) && (l_36 != m_36)))
            _fail(m_36);
          else
            l_36 = m_36;
        }
      }
      t = u_30;
      {
        ATerm o_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_36));
        {
          o_36 = t;
          if(((n_36 != NULL) && (n_36 != o_36)))
            _fail(o_36);
          else
            n_36 = o_36;
        }
        t = not_null(n_36);
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
  ATerm v_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_30;
      t = get_config_0(t);
      ;
      LocalPopChoice(y_30);
    }
  else
    {
      t = v_30;
      {
        ATerm i_5 (ATerm t)
        {
          ATerm a_31 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(b_31);
            }
          else
            {
              t = a_31;
              {
                ATerm c_31 = t;
                int f_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(f_31);
                  }
                else
                  {
                    t = c_31;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, i_5);
      }
    }
  t = g_84(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  t = SSL_table_create(not_null(t_36));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_36 = NULL;
  x_36 = t;
  {
    ATerm g_31;
    g_31 = t;
    {
      t = term_h_31;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_31, term_j_31, not_null(x_36));
          t = table_put_0(t);
        }
      }
    }
    t = g_31;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_37 = NULL;
  b_37 = t;
  t = SSL_table_destroy(not_null(b_37));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_37 = NULL;
  f_37 = t;
  t = SSL_exit(not_null(f_37));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
  j_37 = t;
  i_37 :
  if(((ATgetType(j_37) == AT_LIST) && ATisEmpty(j_37)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_37) == AT_LIST) && !(ATisEmpty(j_37))))
        {
          k_37 = ATgetFirst((ATermList) j_37);
          l_37 = (ATerm) ATgetNext((ATermList) j_37);
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
  ATerm k_31;
  k_31 = t;
  {
    ATerm o_37 = NULL;
    ATerm r_37 = NULL;
    ATerm o_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(p_31);
      }
    else
      {
        t = o_31;
        {
          ATerm p_37 = NULL;
          ATerm q_37 = NULL;
          q_37 = t;
          if(((p_37 != NULL) && (p_37 != q_37)))
            _fail(q_37);
          else
            p_37 = q_37;
          t = (ATerm) ATinsert(ATempty, not_null(p_37));
        }
      }
    {
      r_37 = t;
      if(((o_37 != NULL) && (o_37 != r_37)))
        _fail(r_37);
      else
        o_37 = r_37;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_25, not_null(o_37));
      t = printnl_0(t);
    }
  }
  t = k_31;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL;
  c_38 = t;
  z_37 :
  if(((ATgetType(c_38) == AT_LIST) && !(ATisEmpty(c_38))))
    {
      a_38 = ATgetFirst((ATermList) c_38);
      b_38 = (ATerm) ATgetNext((ATermList) c_38);
      {
        ATerm f_38 = NULL;
        t = not_null(b_38);
        {
          ATerm r_31;
          r_31 = t;
          {
            ATerm g_38 = NULL,i_38 = NULL,n_38 = NULL;
            ATerm s_31;
            s_31 = t;
            {
              ATerm h_38 = NULL;
              t = i_0(t);
              {
                h_38 = t;
                if(((g_38 != NULL) && (g_38 != h_38)))
                  _fail(h_38);
                else
                  g_38 = h_38;
              }
            }
            t = s_31;
            {
              ATerm j_38 = NULL;
              t = not_null(a_38);
              {
                t = g_0(t);
                {
                  j_38 = t;
                  if(((i_38 != NULL) && (i_38 != j_38)))
                    _fail(j_38);
                  else
                    i_38 = j_38;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_38)), not_null(i_38));
                {
                  n_38 = t;
                  if(((f_38 != NULL) && (f_38 != n_38)))
                    _fail(n_38);
                  else
                    f_38 = n_38;
                }
              }
            }
          }
          t = r_31;
          {
            ATerm j_5 (ATerm t)
            {
              t = not_null(f_38);
              return(t);
            }
            t = reverse_acc_2(t, g_0, j_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(c_38) == AT_LIST) && ATisEmpty(c_38)))
        {
          {
            t = term_y_7;
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
  ATerm k_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, k_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_61 (ATerm))
{
  ATerm y_38 = NULL,z_38 = NULL;
  y_38 = t;
  x_38 :
  if(match_cons(y_38, sym_Program_1))
    {
      z_38 = ATgetArgument(y_38, 0);
      {
        ATerm c_39 = NULL,e_39 = NULL;
        ATerm d_39 = NULL;
        t = SSLgetAnnotations(not_null(y_38));
        {
          d_39 = t;
          if(((c_39 != NULL) && (c_39 != d_39)))
            _fail(d_39);
          else
            c_39 = d_39;
        }
        {
          t = not_null(z_38);
          {
            ATerm i_39 = NULL;
            t = x_61(t);
            {
              e_39 = t;
              {
                ATerm j_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_39)), not_null(c_39));
                {
                  j_39 = t;
                  if(((i_39 != NULL) && (i_39 != j_39)))
                    _fail(j_39);
                  else
                    i_39 = j_39;
                }
                t = not_null(i_39);
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
  ATerm w_39 = NULL;
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_39 = NULL;
      t = term_o_29;
      {
        t = get_config_0(t);
        {
          x_39 = t;
          if(((w_39 != NULL) && (w_39 != x_39)))
            _fail(x_39);
          else
            w_39 = x_39;
        }
      }
      ;
      LocalPopChoice(w_31);
    }
  else
    {
      t = v_31;
      {
        ATerm m_5 (ATerm t)
        {
          ATerm n_5 (ATerm t)
          {
            ATerm y_39 = NULL;
            y_39 = t;
            if(((w_39 != NULL) && (w_39 != y_39)))
              _fail(y_39);
            else
              w_39 = y_39;
            return(t);
          }
          t = Program_1(t, n_5);
          return(t);
        }
        t = option_defined_1(t, m_5);
      }
    }
  {
    ATerm o_5 (ATerm t)
    {
      ATerm t_5 (ATerm t)
      {
        t = not_null(w_39);
        return(t);
      }
      t = short_description_1(t, t_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, o_5);
    {
      t = term_f_32;
      {
        t = echo_0(t);
        {
          t = term_j_32;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm u_5 (ATerm t)
                {
                  ATerm z_39 = NULL;
                  ATerm a_40 = NULL;
                  a_40 = t;
                  if(((z_39 != NULL) && (z_39 != a_40)))
                    _fail(a_40);
                  else
                    z_39 = a_40;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_39)), term_l_32);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, u_5);
                {
                  ATerm v_5 (ATerm t)
                  {
                    ATerm b_40 = NULL;
                    ATerm c_40 = NULL;
                    ATerm w_5 (ATerm t)
                    {
                      t = not_null(w_39);
                      return(t);
                    }
                    t = long_description_1(t, w_5);
                    {
                      c_40 = t;
                      if(((b_40 != NULL) && (b_40 != c_40)))
                        _fail(c_40);
                      else
                        b_40 = c_40;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(b_40)), term_m_32);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, v_5);
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
  ATerm j_40 = NULL,k_40 = NULL,n_40 = NULL;
  j_40 = t;
  i_40 :
  if(match_cons(j_40, sym__2))
    {
      k_40 = ATgetArgument(j_40, 0);
      n_40 = ATgetArgument(j_40, 1);
      {
        ATerm r_32;
        r_32 = t;
        t = SSL_printnl(not_null(k_40), not_null(n_40));
        t = r_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm y_61 (ATerm))
{
  ATerm j_41 = NULL,k_41 = NULL;
  j_41 = t;
  g_41 :
  if(match_cons(j_41, sym_Undefined_1))
    {
      k_41 = ATgetArgument(j_41, 0);
      {
        ATerm w_41 = NULL,y_41 = NULL;
        ATerm x_41 = NULL;
        t = SSLgetAnnotations(not_null(j_41));
        {
          x_41 = t;
          if(((w_41 != NULL) && (w_41 != x_41)))
            _fail(x_41);
          else
            w_41 = x_41;
        }
        {
          t = not_null(k_41);
          {
            ATerm a_42 = NULL;
            t = y_61(t);
            {
              y_41 = t;
              {
                ATerm b_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_41)), not_null(w_41));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm h_69 (ATerm))
{
  ATerm g_42 (ATerm t)
  {
    ATerm s_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_69, _id);
        ;
        LocalPopChoice(u_32);
      }
    else
      {
        t = s_32;
        t = Cons_2(t, _id, g_42);
      }
    return(t);
  }
  t = g_42(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_85 (ATerm))
{
  t = fetch_1(t, b_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_42 = NULL;
  q_42 = t;
  p_42 :
  if(match_cons(q_42, sym_Help_0))
    {
      ATerm s_42 = NULL,y_42 = NULL;
      ATerm v_32;
      v_32 = t;
      {
        ATerm x_42 = NULL;
        t = SSLgetAnnotations(not_null(q_42));
        {
          x_42 = t;
          if(((s_42 != NULL) && (s_42 != x_42)))
            _fail(x_42);
          else
            s_42 = x_42;
        }
      }
      t = v_32;
      {
        ATerm g_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(s_42));
        {
          g_43 = t;
          if(((y_42 != NULL) && (y_42 != g_43)))
            _fail(g_43);
          else
            y_42 = g_43;
        }
        t = not_null(y_42);
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
  ATerm m_43 = NULL;
  m_43 = t;
  t = SSL_implode_string(not_null(m_43));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(c_33);
    }
  else
    {
      t = b_33;
      {
        ATerm v_43 = NULL,b_44 = NULL,c_44 = NULL;
        v_43 = t;
        u_43 :
        if(((ATgetType(v_43) == AT_LIST) && !(ATisEmpty(v_43))))
          {
            b_44 = ATgetFirst((ATermList) v_43);
            c_44 = (ATerm) ATgetNext((ATermList) v_43);
            {
              t = not_null(b_44);
              {
                ATerm y_5 (ATerm t)
                {
                  t = not_null(c_44);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_5);
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
  ATerm q_44 = NULL;
  ATerm s_44 = NULL;
  q_44 = t;
  {
    ATerm t_44 = NULL;
    ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
    t = not_null(q_44);
    {
      t_44 = t;
      {
        t = SSL_explode_term(not_null(t_44));
        {
          x_44 = t;
          o_44 :
          if(match_cons(x_44, sym__2))
            {
              y_44 = ATgetArgument(x_44, 0);
              z_44 = ATgetArgument(x_44, 1);
              p_44 :
              if(match_string(y_44, ""))
                {
                  if(((s_44 != NULL) && (s_44 != z_44)))
                    _fail(z_44);
                  else
                    s_44 = z_44;
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
      t = not_null(s_44);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_69 (ATerm))
{
  ATerm h_45 (ATerm t)
  {
    ATerm e_33 = t;
    int i_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_45);
        ;
        LocalPopChoice(i_33);
      }
    else
      {
        t = e_33;
        {
          t = Nil_0(t);
          t = n_69(t);
        }
      }
    return(t);
  }
  t = h_45(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  j_45 :
  if(match_cons(k_45, sym__2))
    {
      l_45 = ATgetArgument(k_45, 0);
      m_45 = ATgetArgument(k_45, 1);
      {
        t = not_null(l_45);
        {
          ATerm z_5 (ATerm t)
          {
            t = not_null(m_45);
            return(t);
          }
          t = at_end_1(t, z_5);
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
  ATerm j_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(m_33);
    }
  else
    {
      t = j_33;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm r_45 = NULL;
  r_45 = t;
  t = SSL_explode_string(not_null(r_45));
  return(t);
}
ATerm _2 (ATerm t, ATerm h_55 (ATerm), ATerm i_55 (ATerm))
{
  ATerm n_46 = NULL,p_46 = NULL,q_46 = NULL;
  n_46 = t;
  m_46 :
  if(match_cons(n_46, sym__2))
    {
      p_46 = ATgetArgument(n_46, 0);
      q_46 = ATgetArgument(n_46, 1);
      {
        ATerm d_47 = NULL,f_47 = NULL;
        ATerm e_47 = NULL;
        t = SSLgetAnnotations(not_null(n_46));
        {
          e_47 = t;
          if(((d_47 != NULL) && (d_47 != e_47)))
            _fail(e_47);
          else
            d_47 = e_47;
        }
        {
          t = not_null(p_46);
          {
            ATerm h_47 = NULL;
            t = h_55(t);
            {
              f_47 = t;
              {
                t = not_null(q_46);
                {
                  ATerm j_47 = NULL;
                  t = i_55(t);
                  {
                    h_47 = t;
                    {
                      ATerm k_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_47), not_null(h_47)), not_null(d_47));
                      {
                        k_47 = t;
                        if(((j_47 != NULL) && (j_47 != k_47)))
                          _fail(k_47);
                        else
                          j_47 = k_47;
                      }
                      t = not_null(j_47);
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
ATerm debug_1 (ATerm t, ATerm r_64 (ATerm))
{
  ATerm n_33;
  n_33 = t;
  {
    ATerm y_47 = NULL,a_48 = NULL;
    ATerm q_33;
    q_33 = t;
    {
      ATerm z_47 = NULL;
      t = r_64(t);
      {
        z_47 = t;
        if(((y_47 != NULL) && (y_47 != z_47)))
          _fail(z_47);
        else
          y_47 = z_47;
      }
    }
    t = q_33;
    {
      ATerm b_48 = NULL;
      b_48 = t;
      if(((a_48 != NULL) && (a_48 != b_48)))
        _fail(b_48);
      else
        a_48 = b_48;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_48)), not_null(y_47)));
        t = printnl_0(t);
      }
    }
  }
  t = n_33;
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_68 (ATerm))
{
  ATerm i_48 (ATerm t)
  {
    ATerm r_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(t_33);
      }
    else
      {
        t = r_33;
        t = Cons_2(t, y_68, i_48);
      }
    return(t);
  }
  t = i_48(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm k_48 = NULL;
  k_48 = t;
  t = SSL_is_string(not_null(k_48));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      {
        ATerm a_34 = t;
        int b_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, a_6);
            ;
            LocalPopChoice(b_34);
          }
        else
          {
            t = a_34;
            {
              ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL;
              t_48 = t;
              s_48 :
              if(match_cons(t_48, sym_Path_1))
                {
                  u_48 = ATgetArgument(t_48, 0);
                  t = not_null(u_48);
                }
              else
                {
                  if(match_cons(t_48, sym_Var_1))
                    {
                      u_48 = ATgetArgument(t_48, 0);
                      {
                        t = not_null(u_48);
                        {
                          ATerm c_34 = t;
                          int d_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(d_34);
                            }
                          else
                            {
                              t = c_34;
                              {
                                ATerm b_6 (ATerm t)
                                {
                                  t = term_e_34;
                                  return(t);
                                }
                                t = debug_1(t, b_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_48, sym_Prefix_2))
                        {
                          u_48 = ATgetArgument(t_48, 0);
                          v_48 = ATgetArgument(t_48, 1);
                          {
                            ATerm a_49 = NULL,c_49 = NULL;
                            ATerm j_34;
                            j_34 = t;
                            {
                              ATerm b_49 = NULL;
                              t = not_null(u_48);
                              {
                                t = eval_config_0(t);
                                {
                                  b_49 = t;
                                  if(((a_49 != NULL) && (a_49 != b_49)))
                                    _fail(b_49);
                                  else
                                    a_49 = b_49;
                                }
                              }
                            }
                            t = j_34;
                            {
                              ATerm d_49 = NULL;
                              t = not_null(v_48);
                              {
                                t = eval_config_0(t);
                                {
                                  d_49 = t;
                                  if(((c_49 != NULL) && (c_49 != d_49)))
                                    _fail(d_49);
                                  else
                                    c_49 = d_49;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_49), not_null(c_49));
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
  ATerm l_49 = NULL;
  l_49 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_26, not_null(l_49));
    {
      t = table_get_0(t);
      {
        ATerm c_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm k_34;
            k_34 = t;
            {
              ATerm n_49 = NULL;
              ATerm o_49 = NULL;
              o_49 = t;
              if(((n_49 != NULL) && (n_49 != o_49)))
                _fail(o_49);
              else
                n_49 = o_49;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_c_26, not_null(l_49), not_null(n_49));
                t = table_put_0(t);
              }
            }
            t = k_34;
          }
          return(t);
        }
        t = try_1(t, c_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm o_79 (ATerm))
{
  ATerm n_34 = t;
  int o_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_79(t);
      ;
      LocalPopChoice(o_34);
    }
  else
    {
      t = n_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
  t_49 = t;
  s_49 :
  if(match_cons(t_49, sym__2))
    {
      u_49 = ATgetArgument(t_49, 0);
      v_49 = ATgetArgument(t_49, 1);
      t = SSL_table_get(not_null(u_49), not_null(v_49));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL;
  c_50 = t;
  b_50 :
  if(match_cons(c_50, sym__3))
    {
      d_50 = ATgetArgument(c_50, 0);
      e_50 = ATgetArgument(c_50, 1);
      f_50 = ATgetArgument(c_50, 2);
      {
        ATerm p_34;
        p_34 = t;
        {
          ATerm j_50 = NULL;
          ATerm k_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_50), not_null(e_50));
          {
            ATerm q_34 = t;
            int r_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(r_34);
              }
            else
              {
                t = q_34;
                t = (ATerm) ATempty;
              }
            {
              k_50 = t;
              if(((j_50 != NULL) && (j_50 != k_50)))
                _fail(k_50);
              else
                j_50 = k_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_50), not_null(e_50), (ATerm) ATinsert(CheckATermList(not_null(j_50)), not_null(f_50)));
            t = table_put_0(t);
          }
        }
        t = p_34;
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
  ATerm o_50 = NULL;
  ATerm p_50 = NULL;
  t = term_y_7;
  {
    t = g_86(t);
    {
      p_50 = t;
      if(((o_50 != NULL) && (o_50 != p_50)))
        _fail(p_50);
      else
        o_50 = p_50;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_32, term_i_32, not_null(o_50));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
  v_50 = t;
  u_50 :
  if(match_string(v_50, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(v_50) == AT_LIST) && !(ATisEmpty(v_50))))
        {
          w_50 = ATgetFirst((ATermList) v_50);
          x_50 = (ATerm) ATgetNext((ATermList) v_50);
          {
            ATerm a_51 = NULL;
            ATerm u_34;
            u_34 = t;
            {
              t = not_null(w_50);
              t = a_0(t);
            }
            t = u_34;
            {
              ATerm b_51 = NULL;
              t = term_y_7;
              {
                t = b_0(t);
                {
                  b_51 = t;
                  if(((a_51 != NULL) && (a_51 != b_51)))
                    _fail(b_51);
                  else
                    a_51 = b_51;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_50)), not_null(a_51));
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
  ATerm d_6 (ATerm t)
  {
    ATerm g_51 = NULL;
    g_51 = t;
    f_51 :
    if(!(match_string(g_51, "--help")))
      {
        if(!(match_string(g_51, "-h")))
          {
            if(!(match_string(g_51, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    t = term_x_34;
    {
      t = set_config_0(t);
      t = term_b_35;
    }
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    t = term_c_35;
    return(t);
  }
  t = Option_3(t, d_6, j_6, m_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL;
  j_51 = t;
  i_51 :
  if(((ATgetType(j_51) == AT_LIST) && !(ATisEmpty(j_51))))
    {
      k_51 = ATgetFirst((ATermList) j_51);
      l_51 = (ATerm) ATgetNext((ATermList) j_51);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_51)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_51)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_56 (ATerm), ATerm r_56 (ATerm))
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL;
  v_51 = t;
  u_51 :
  if(((ATgetType(v_51) == AT_LIST) && !(ATisEmpty(v_51))))
    {
      w_51 = ATgetFirst((ATermList) v_51);
      x_51 = (ATerm) ATgetNext((ATermList) v_51);
      {
        ATerm b_52 = NULL,d_52 = NULL;
        ATerm c_52 = NULL;
        t = SSLgetAnnotations(not_null(v_51));
        {
          c_52 = t;
          if(((b_52 != NULL) && (b_52 != c_52)))
            _fail(c_52);
          else
            b_52 = c_52;
        }
        {
          t = not_null(w_51);
          {
            ATerm f_52 = NULL;
            t = q_56(t);
            {
              d_52 = t;
              {
                t = not_null(x_51);
                {
                  ATerm h_52 = NULL;
                  t = r_56(t);
                  {
                    f_52 = t;
                    {
                      ATerm i_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_52)), not_null(d_52)), not_null(b_52));
                      {
                        i_52 = t;
                        if(((h_52 != NULL) && (h_52 != i_52)))
                          _fail(i_52);
                        else
                          h_52 = i_52;
                      }
                      t = not_null(h_52);
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
  ATerm s_52 = NULL;
  s_52 = t;
  r_52 :
  if(((ATgetType(s_52) == AT_LIST) && ATisEmpty(s_52)))
    {
      {
        ATerm u_52 = NULL,w_52 = NULL;
        ATerm d_35;
        d_35 = t;
        {
          ATerm v_52 = NULL;
          t = SSLgetAnnotations(not_null(s_52));
          {
            v_52 = t;
            if(((u_52 != NULL) && (u_52 != v_52)))
              _fail(v_52);
            else
              u_52 = v_52;
          }
        }
        t = d_35;
        {
          ATerm y_52 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(u_52));
          {
            y_52 = t;
            if(((w_52 != NULL) && (w_52 != y_52)))
              _fail(y_52);
            else
              w_52 = y_52;
          }
          t = not_null(w_52);
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
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
  e_53 = t;
  d_53 :
  if(match_cons(e_53, sym__2))
    {
      f_53 = ATgetArgument(e_53, 0);
      g_53 = ATgetArgument(e_53, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_26, not_null(f_53), not_null(g_53));
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
  ATerm e_35;
  e_35 = t;
  {
    ATerm n_6 (ATerm t)
    {
      t = term_j_35;
      t = e_86(t);
      return(t);
    }
    t = try_1(t, n_6);
  }
  t = e_35;
  {
    ATerm o_6 (ATerm t)
    {
      ATerm o_53 = NULL;
      ATerm k_35;
      k_35 = t;
      {
        ATerm m_53 = NULL;
        ATerm n_53 = NULL;
        n_53 = t;
        if(((m_53 != NULL) && (m_53 != n_53)))
          _fail(n_53);
        else
          m_53 = n_53;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_29, not_null(m_53));
          t = set_config_0(t);
        }
      }
      t = k_35;
      {
        ATerm p_53 = NULL;
        p_53 = t;
        if(((o_53 != NULL) && (o_53 != p_53)))
          _fail(p_53);
        else
          o_53 = p_53;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_53));
      }
      return(t);
    }
    ATerm r_6 (ATerm t)
    {
      ATerm l_35 = t;
      int m_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_35 = t;
          int t_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(t_35);
            }
          else
            {
              t = s_35;
              {
                t = e_86(t);
                t = Cons_2(t, _id, r_6);
              }
            }
          ;
          LocalPopChoice(m_35);
        }
      else
        {
          t = l_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_6, r_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL;
  ATerm w_35;
  w_35 = t;
  {
    ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
    y_53 = t;
    u_53 :
    if(match_cons(y_53, sym__3))
      {
        z_53 = ATgetArgument(y_53, 0);
        a_54 = ATgetArgument(y_53, 1);
        b_54 = ATgetArgument(y_53, 2);
        {
          if(((v_53 != NULL) && (v_53 != z_53)))
            _fail(z_53);
          else
            v_53 = z_53;
          {
            if(((w_53 != NULL) && (w_53 != a_54)))
              _fail(a_54);
            else
              w_53 = a_54;
            {
              if(((x_53 != NULL) && (x_53 != b_54)))
                _fail(b_54);
              else
                x_53 = b_54;
              t = SSL_table_put(not_null(v_53), not_null(w_53), not_null(x_53));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_86 (ATerm))
{
  ATerm e_54 = NULL;
  ATerm x_35;
  x_35 = t;
  {
    t = term_y_35;
    t = table_put_0(t);
  }
  t = x_35;
  {
    ATerm s_6 (ATerm t)
    {
      ATerm d_36 = t;
      int e_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_86(t);
          ;
          LocalPopChoice(e_36);
        }
      else
        {
          t = d_36;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_6);
    {
      ATerm t_6 (ATerm t)
      {
        ATerm f_36 = t;
        int g_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_36;
            h_36 = t;
            {
              ATerm k_36 = t;
              int p_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_z_30;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(p_36);
                }
              else
                {
                  t = k_36;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = h_36;
            {
              t = system_usage_0(t);
              {
                t = term_y_26;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(g_36);
          }
        else
          {
            t = f_36;
            {
              ATerm u_6 (ATerm t)
              {
                ATerm v_6 (ATerm t)
                {
                  ATerm f_54 = NULL;
                  f_54 = t;
                  if(((e_54 != NULL) && (e_54 != f_54)))
                    _fail(f_54);
                  else
                    e_54 = f_54;
                  return(t);
                }
                t = Undefined_1(t, v_6);
                return(t);
              }
              t = option_defined_1(t, u_6);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_j_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_54)), term_q_36));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_s_7;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, t_6);
      {
        ATerm r_36;
        r_36 = t;
        {
          t = term_g_32;
          t = table_destroy_0(t);
        }
        t = r_36;
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
        ATerm s_36 = t;
        int u_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_84);
            ;
            LocalPopChoice(u_36);
          }
        else
          {
            t = s_36;
            {
              ATerm v_36 = t;
              int w_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_84(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(w_36);
                }
              else
                {
                  t = v_36;
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
ATerm io_ast2text_0 (ATerm t)
{
  t = option_wrap_2(t, ast2text_options_0, ast2text_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_ast2text_0(t);
  return(t);
}
