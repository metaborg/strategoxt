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
ATerm term_p_41;
ATerm term_h_41;
ATerm term_v_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_o_40;
ATerm term_c_40;
ATerm term_y_39;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_g_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_y_36;
ATerm term_l_36;
ATerm term_b_36;
ATerm term_o_35;
ATerm term_o_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_b_34;
ATerm term_y_33;
ATerm term_m_33;
ATerm term_c_33;
ATerm term_u_32;
ATerm term_b_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_n_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_s_30;
ATerm term_o_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_t_29;
ATerm term_m_29;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_t_26;
ATerm term_q_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_r_25;
ATerm term_o_25;
ATerm term_m_25;
ATerm term_g_25;
ATerm term_e_25;
ATerm term_a_25;
ATerm term_o_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_r_23;
ATerm term_l_23;
ATerm term_f_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_p_22;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_t_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_a_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_t_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_d_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_o_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_v_8;
void init_constant_terms (void)
{
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_c_9, term_r_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_9, term_u_9, term_x_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_9, term_d_10, term_l_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_o_10, term_u_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_b_11, term_c_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_11, term_k_11, term_n_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_v_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_d_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_k_12, term_m_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_p_12, term_u_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_y_12, term_z_12);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_13, term_h_13, term_i_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_p_13, term_q_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_c_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_g_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_r_14, term_v_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_d_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_q_15, term_r_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_d_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_o_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_v_16, term_w_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_b_17, term_c_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_j_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_n_17, term_q_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_x_17, term_y_17);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__2, term_t_18, term_k_19);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_t_18, term_l_21);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--old", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--new", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym__2, term_w_23, term_f_23);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Pptable-diff", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym__2, term_a_30, term_v_23);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__2, term_v_8, term_o_30);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_30);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym__2, term_a_31, term_v_23);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym__2, term_u_31, term_v_23);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch            Bring old table up-to-date", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("This program writes to standard error a list of\n", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print rules that are contained in\n", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print table \"old\" but not in \"new\"\n", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("and, vice versa.\n\n", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--patch\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is updated by adding pretty-print\n", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("rules that are in \"new\" but not in\n", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\".\n\n", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--prune\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is returned from which obsolete entries\n", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("have been removed\n", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym__2, term_j_38, term_k_38);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym__2, term_b_36, term_v_23);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym__3, term_j_38, term_k_38, (ATerm) ATempty);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm h_65 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm l_83 (ATerm), ATerm m_83 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm signal_to_descr_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm l_69 (ATerm));
ATerm signal_from_number_0 (ATerm);
ATerm warn_ifsignaled_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_2 (ATerm, ATerm v_63 (ATerm), ATerm w_63 (ATerm));
ATerm fork_and_wait_1 (ATerm, ATerm x_63 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm o_80 (ATerm));
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm p_76 (ATerm));
ATerm repeat_1 (ATerm, ATerm j_78 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm x_64 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm n_80 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm p_80 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm d_73 (ATerm), ATerm e_73 (ATerm));
ATerm union_1 (ATerm, ATerm z_72 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm y_80 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm fopen_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
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
ATerm xtc_command_1 (ATerm, ATerm c_83 (ATerm));
ATerm assert_1 (ATerm, ATerm n_79 (ATerm));
ATerm obsolete_1 (ATerm, ATerm a_65 (ATerm));
ATerm open_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm q_61 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm e_83 (ATerm), ATerm f_83 (ATerm));
ATerm pass__old_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm p_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm d_83 (ATerm));
ATerm xtc_parse_pp_table_0 (ATerm);
ATerm parse_to_temp_file_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm l_80 (ATerm));
ATerm Fst_0 (ATerm);
ATerm modification_time_0 (ATerm);
ATerm access_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm lookup_pp_af_0 (ATerm);
ATerm lookup_or_parse_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm must_be_pp_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm t_69 (ATerm));
ATerm has_extension_1 (ATerm, ATerm s_77 (ATerm));
ATerm ensure_pp_table_parsed_0 (ATerm);
ATerm pass__new_0 (ATerm);
ATerm pass__prune_0 (ATerm);
ATerm pass__patch_0 (ATerm);
ATerm build_impl_args_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm o_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm k_79 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm f_80 (ATerm), ATerm g_80 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm j_79 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm o_82 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm p_82 (ATerm));
ATerm pptable_diff_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm pptable_diff_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm m_75 (ATerm), ATerm n_75 (ATerm));
ATerm crush_2 (ATerm, ATerm k_73 (ATerm), ATerm l_73 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_80 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_84 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_0 (ATerm));
ATerm Program_1 (ATerm, ATerm x_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm y_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm j_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_85 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm p_69 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm h_55 (ATerm), ATerm i_55 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_64 (ATerm));
ATerm map_1 (ATerm, ATerm a_69 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_86 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_56 (ATerm), ATerm r_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_86 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_86 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm c_85 (ATerm), ATerm d_85 (ATerm));
ATerm io_pptable_diff_0 (ATerm);
ATerm main_0 (ATerm);
ATerm subt_0 (ATerm t)
{
  ATerm f_0 = NULL,a_1 = NULL,b_1 = NULL;
  f_0 = t;
  e_0 :
  if(match_cons(f_0, sym__2))
    {
      a_1 = ATgetArgument(f_0, 0);
      b_1 = ATgetArgument(f_0, 1);
      {
        ATerm p_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(a_1), not_null(b_1));
            ;
            LocalPopChoice(u_8);
          }
        else
          {
            t = p_8;
            t = SSL_subtr(not_null(a_1), not_null(b_1));
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
  ATerm n_1 = NULL;
  ATerm b_2 = NULL,d_2 = NULL;
  ATerm c_2 = NULL;
  t = term_v_8;
  {
    ATerm w_8 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(b_9);
      }
    else
      {
        t = w_8;
        t = term_c_9;
      }
    {
      c_2 = t;
      if(((b_2 != NULL) && (b_2 != c_2)))
        _fail(c_2);
      else
        b_2 = c_2;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_2), term_c_9);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          d_2 = t;
          if(((n_1 != NULL) && (n_1 != d_2)))
            _fail(d_2);
          else
            n_1 = d_2;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_1)), term_v_8);
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
      t = term_d_9;
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
ATerm WriteToFile_1 (ATerm t, ATerm h_65 (ATerm))
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
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_4), term_e_9);
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
                    t = h_65(t);
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
ATerm xtc_transform_term_2 (ATerm t, ATerm l_83 (ATerm), ATerm m_83 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, l_83, m_83);
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_9), not_null(c_6)), term_g_9);
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_6)), term_j_9), not_null(h_6)), term_i_9), not_null(y_5));
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
ATerm fetch_elem_1 (ATerm t, ATerm l_69 (ATerm))
{
  ATerm o_6 = NULL;
  ATerm c_0 (ATerm t)
  {
    ATerm p_6 = NULL;
    t = l_69(t);
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
    ATerm k_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_17), term_r_17), term_l_17), term_e_17), term_x_16), term_p_16), term_e_16), term_a_16), term_u_15), term_m_15), term_e_15), term_w_14), term_o_14), term_h_14), term_d_14), term_r_13), term_n_13), term_a_13), term_v_12), term_n_12), term_e_12), term_w_11), term_o_11), term_h_11), term_v_10), term_m_10), term_y_9), term_s_9);
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
        LocalPopChoice(m_9);
      }
    else
      {
        t = k_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(u_6));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm a_18;
  a_18 = t;
  {
    ATerm s_0 (ATerm t)
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
              ATerm b_18 = t;
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
                  t = b_18;
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
                      t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_7)), term_i_18));
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
    t = try_1(t, s_0);
  }
  t = a_18;
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
ATerm fork_2 (ATerm t, ATerm v_63 (ATerm), ATerm w_63 (ATerm))
{
  ATerm y_7 = NULL;
  ATerm a_8 = NULL;
  y_7 = t;
  {
    t = fork_0(t);
    {
      a_8 = t;
      {
        ATerm q_18 = t;
        int r_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_8 = NULL;
            c_8 = t;
            x_7 :
            if(match_int(c_8, 0))
              {
                t = not_null(y_7);
                t = v_63(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(r_18);
          }
        else
          {
            t = q_18;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_8), not_null(y_7));
              t = w_63(t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm x_63 (ATerm))
{
  ATerm l_8 = NULL;
  ATerm t_0 (ATerm t)
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
  t = fork_2(t, x_63, t_0);
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
        ATerm u_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_8), not_null(a_9));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, u_0);
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
      ATerm v_0 (ATerm t)
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
      t = map_1(t, v_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm o_80 (ATerm))
{
  ATerm w_0 (ATerm t)
  {
    ATerm s_18;
    s_18 = t;
    {
      ATerm v_9 = NULL;
      ATerm w_9 = NULL;
      t = term_v_8;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), term_b_17);
        t = geq_0(t);
      }
    }
    t = s_18;
    t = o_80(t);
    return(t);
  }
  t = try_1(t, w_0);
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm c_10 = NULL;
  ATerm e_10 = NULL,f_10 = NULL;
  c_10 = t;
  {
    ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATmakeAppl(sym_Tool_1, not_null(c_10)));
    {
      t = table_get_0(t);
      {
        g_10 = t;
        a_10 :
        if(((ATgetType(g_10) == AT_LIST) && !(ATisEmpty(g_10))))
          {
            h_10 = ATgetFirst((ATermList) g_10);
            k_10 = (ATerm) ATgetNext((ATermList) g_10);
            b_10 :
            if(match_cons(h_10, sym__2))
              {
                i_10 = ATgetArgument(h_10, 0);
                j_10 = ATgetArgument(h_10, 1);
                {
                  if(((e_10 != NULL) && (e_10 != i_10)))
                    _fail(i_10);
                  else
                    e_10 = i_10;
                  if(((f_10 != NULL) && (f_10 != j_10)))
                    _fail(j_10);
                  else
                    f_10 = j_10;
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
    t = not_null(f_10);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
  r_10 = t;
  q_10 :
  if(match_cons(r_10, sym__2))
    {
      s_10 = ATgetArgument(r_10, 0);
      t_10 = ATgetArgument(r_10, 1);
      {
        ATerm w_10 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATmakeAppl(sym_Tool_1, not_null(s_10)));
        {
          t = table_get_0(t);
          {
            ATerm x_0 (ATerm t)
            {
              ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
              x_10 = t;
              p_10 :
              if(match_cons(x_10, sym__2))
                {
                  y_10 = ATgetArgument(x_10, 0);
                  z_10 = ATgetArgument(x_10, 1);
                  {
                    if(((t_10 != NULL) && (t_10 != y_10)))
                      _fail(y_10);
                    else
                      t_10 = y_10;
                    if(((w_10 != NULL) && (w_10 != z_10)))
                      _fail(z_10);
                    else
                      w_10 = z_10;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, x_0);
          }
        }
        t = not_null(w_10);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm p_76 (ATerm))
{
  ATerm u_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(a_19);
    }
  else
    {
      t = u_18;
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = filter_1(t, p_76);
              return(t);
            }
            t = Cons_2(t, p_76, y_0);
            ;
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            {
              ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
              e_11 = t;
              d_11 :
              if(((ATgetType(e_11) == AT_LIST) && !(ATisEmpty(e_11))))
                {
                  f_11 = ATgetFirst((ATermList) e_11);
                  g_11 = (ATerm) ATgetNext((ATermList) e_11);
                  {
                    t = not_null(g_11);
                    t = filter_1(t, p_76);
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
ATerm repeat_1 (ATerm t, ATerm j_78 (ATerm))
{
  ATerm j_11 (ATerm t)
  {
    ATerm z_0 (ATerm t)
    {
      t = j_78(t);
      t = j_11(t);
      return(t);
    }
    t = try_1(t, z_0);
    return(t);
  }
  t = j_11(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm i_19;
  i_19 = t;
  {
    ATerm c_1 (ATerm t)
    {
      t = term_l_19;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm m_19 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_19;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, c_1);
  }
  t = i_19;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm n_19;
  n_19 = t;
  {
    ATerm l_11 = NULL;
    ATerm m_11 = NULL;
    m_11 = t;
    if(((l_11 != NULL) && (l_11 != m_11)))
      _fail(m_11);
    else
      l_11 = m_11;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATempty, not_null(l_11)));
      t = printnl_0(t);
    }
  }
  t = n_19;
  return(t);
}
ATerm say_1 (ATerm t, ATerm x_64 (ATerm))
{
  ATerm o_19;
  o_19 = t;
  {
    t = x_64(t);
    t = debug_0(t);
  }
  t = o_19;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm d_1 (ATerm t)
  {
    ATerm p_19;
    p_19 = t;
    {
      ATerm p_11 = NULL;
      ATerm q_11 = NULL;
      t = term_v_8;
      {
        t = get_config_0(t);
        {
          q_11 = t;
          if(((p_11 != NULL) && (p_11 != q_11)))
            _fail(q_11);
          else
            p_11 = q_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_11), term_h_13);
        t = geq_0(t);
      }
    }
    t = p_19;
    t = n_80(t);
    return(t);
  }
  t = try_1(t, d_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm p_80 (ATerm))
{
  ATerm e_1 (ATerm t)
  {
    ATerm q_19;
    q_19 = t;
    {
      ATerm t_11 = NULL;
      ATerm u_11 = NULL;
      t = term_v_8;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_11), term_o_10);
        t = geq_0(t);
      }
    }
    t = q_19;
    t = p_80(t);
    return(t);
  }
  t = try_1(t, e_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  x_11 :
  if(match_cons(y_11, sym__2))
    {
      z_11 = ATgetArgument(y_11, 0);
      a_12 = ATgetArgument(y_11, 1);
      if(((z_11 != NULL) && (z_11 != a_12)))
        _fail(a_12);
      else
        z_11 = a_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm d_73 (ATerm), ATerm e_73 (ATerm))
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
  g_12 = t;
  f_12 :
  if(((ATgetType(g_12) == AT_LIST) && !(ATisEmpty(g_12))))
    {
      h_12 = ATgetFirst((ATermList) g_12);
      i_12 = (ATerm) ATgetNext((ATermList) g_12);
      {
        t = e_73(t);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm l_12 = NULL;
            l_12 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_12), not_null(l_12));
              t = d_73(t);
            }
            return(t);
          }
          t = fetch_1(t, f_1);
        }
        t = not_null(i_12);
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
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  r_12 = t;
  q_12 :
  if(match_cons(r_12, sym__2))
    {
      s_12 = ATgetArgument(r_12, 0);
      t_12 = ATgetArgument(r_12, 1);
      {
        t = not_null(s_12);
        {
          ATerm x_12 (ATerm t)
          {
            ATerm r_19 = t;
            int t_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(t_12);
                ;
                LocalPopChoice(t_19);
              }
            else
              {
                t = r_19;
                {
                  ATerm a_20 = t;
                  int f_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = not_null(t_12);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_72, g_1);
                      t = x_12(t);
                      ;
                      LocalPopChoice(f_20);
                    }
                  else
                    {
                      t = a_20;
                      t = Cons_2(t, _id, x_12);
                    }
                }
              }
            return(t);
          }
          t = x_12(t);
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
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
  c_13 = t;
  b_13 :
  if(match_cons(c_13, sym__3))
    {
      d_13 = ATgetArgument(c_13, 0);
      e_13 = ATgetArgument(c_13, 1);
      f_13 = ATgetArgument(c_13, 2);
      {
        ATerm g_20;
        g_20 = t;
        {
          ATerm j_13 = NULL;
          ATerm k_13 = NULL,m_13 = NULL;
          ATerm l_13 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), not_null(e_13));
          {
            ATerm h_20 = t;
            int i_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(i_20);
              }
            else
              {
                t = h_20;
                t = (ATerm) ATempty;
              }
            {
              l_13 = t;
              if(((k_13 != NULL) && (k_13 != l_13)))
                _fail(l_13);
              else
                k_13 = l_13;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_13), not_null(f_13));
            {
              t = union_0(t);
              {
                m_13 = t;
                if(((j_13 != NULL) && (j_13 != m_13)))
                  _fail(m_13);
                else
                  j_13 = m_13;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_13), not_null(e_13), not_null(j_13));
            t = set_0(t);
          }
        }
        t = g_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm y_80 (ATerm))
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  u_13 = t;
  t_13 :
  if(match_cons(u_13, sym__2))
    {
      v_13 = ATgetArgument(u_13, 0);
      w_13 = ATgetArgument(u_13, 1);
      {
        t = not_null(w_13);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
            z_13 = t;
            s_13 :
            if(match_cons(z_13, sym__2))
              {
                a_14 = ATgetArgument(z_13, 0);
                b_14 = ATgetArgument(z_13, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(v_13), not_null(a_14), not_null(b_14));
                  t = y_80(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, h_1);
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
  ATerm j_14 = NULL,k_14 = NULL;
  ATerm q_14 (ATerm t)
  {
    t = SSL_fclose(not_null(k_14));
    return(t);
  }
  k_14 = t;
  i_14 :
  if(match_cons(k_14, sym_Stream_1))
    {
      j_14 = ATgetArgument(k_14, 0);
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(j_14));
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            t = q_14(t);
          }
      }
    }
  else
    {
      t = q_14(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL;
  t_14 = t;
  s_14 :
  if(match_cons(t_14, sym_Stream_1))
    {
      u_14 = ATgetArgument(t_14, 0);
      t = SSL_read_term_from_stream(not_null(u_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
  a_15 = t;
  z_14 :
  if(match_cons(a_15, sym__2))
    {
      b_15 = ATgetArgument(a_15, 0);
      c_15 = ATgetArgument(a_15, 1);
      {
        ATerm f_15 = NULL;
        t = SSL_fopen(not_null(b_15), not_null(c_15));
        {
          ATerm g_15 = NULL;
          g_15 = t;
          if(((f_15 != NULL) && (f_15 != g_15)))
            _fail(g_15);
          else
            f_15 = g_15;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_15));
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
  ATerm k_15 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm l_15 = NULL;
    l_15 = t;
    if(((k_15 != NULL) && (k_15 != l_15)))
      _fail(l_15);
    else
      k_15 = l_15;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_15));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm o_15 = NULL;
  t = SSL_stdout_stream();
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
ATerm stderr_stream_0 (ATerm t)
{
  ATerm s_15 = NULL;
  t = SSL_stderr_stream();
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
ATerm stdio_stream_0 (ATerm t)
{
  ATerm z_15 = NULL;
  z_15 = t;
  y_15 :
  if(match_cons(z_15, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(z_15, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(z_15, sym_stdin_0))
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
ATerm open_stream_0 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL;
  h_16 = t;
  g_16 :
  if(match_cons(h_16, sym__2))
    {
      i_16 = ATgetArgument(h_16, 0);
      j_16 = ATgetArgument(h_16, 1);
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            {
              ATerm n_20 = t;
              int q_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_1 (ATerm t)
                  {
                    ATerm k_16 = NULL,l_16 = NULL;
                    k_16 = t;
                    f_16 :
                    if(match_cons(k_16, sym_Path_1))
                      {
                        l_16 = ATgetArgument(k_16, 0);
                        t = not_null(l_16);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, i_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(q_20);
                }
              else
                {
                  t = n_20;
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
  ATerm t_16 = NULL;
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_16 = NULL;
      ATerm s_16 = NULL;
      s_16 = t;
      if(((r_16 != NULL) && (r_16 != s_16)))
        _fail(s_16);
      else
        r_16 = s_16;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), term_x_20);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      {
        ATerm j_1 (ATerm t)
        {
          t = term_y_20;
          return(t);
        }
        t = debug_1(t, j_1);
        _fail(t);
      }
    }
  {
    ATerm z_20;
    z_20 = t;
    {
      ATerm u_16 = NULL;
      t = read_from_stream_0(t);
      {
        u_16 = t;
        if(((t_16 != NULL) && (t_16 != u_16)))
          _fail(u_16);
        else
          t_16 = u_16;
      }
    }
    t = z_20;
    {
      t = fclose_0(t);
      t = not_null(t_16);
    }
  }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm y_16 = NULL;
  ATerm z_16 = NULL;
  z_16 = t;
  if(((y_16 != NULL) && (y_16 != z_16)))
    _fail(z_16);
  else
    y_16 = z_16;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_16), (ATerm) ATinsert(ATempty, term_a_21));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(c_21);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = b_21;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_21 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_21;
              }
            {
              ATerm k_1 (ATerm t)
              {
                t = term_g_21;
                return(t);
              }
              t = debug_1(t, k_1);
            }
            ;
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            {
              ATerm l_1 (ATerm t)
              {
                t = term_h_21;
                return(t);
              }
              t = debug_1(t, l_1);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm d_17 = NULL;
  ATerm f_17 = NULL;
  d_17 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm o_1 (ATerm t)
      {
        t = term_i_21;
        return(t);
      }
      t = debug_1(t, o_1);
      return(t);
    }
    t = if_verbose5_1(t, m_1);
    {
      ATerm j_21 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATmakeAppl(sym_Imported_1, not_null(d_17)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = j_21;
        }
      {
        ATerm k_21;
        k_21 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_18, term_l_21, (ATerm) ATinsert(ATempty, not_null(d_17)));
          t = table_put_0(t);
        }
        t = k_21;
        {
          ATerm p_1 (ATerm t)
          {
            ATerm q_1 (ATerm t)
            {
              t = term_m_21;
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
                  t = term_n_21;
                  return(t);
                }
                t = say_1(t, s_1);
                return(t);
              }
              t = if_verbose6_1(t, r_1);
              {
                ATerm g_17 = NULL;
                g_17 = t;
                if(((f_17 != NULL) && (f_17 != g_17)))
                  _fail(g_17);
                else
                  f_17 = g_17;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_18, not_null(f_17));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm t_1 (ATerm t)
                      {
                        ATerm u_1 (ATerm t)
                        {
                          t = term_o_21;
                          return(t);
                        }
                        t = say_1(t, u_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, t_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_t_18, (ATerm)ATmakeAppl(sym_Imported_1, not_null(d_17)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm v_1 (ATerm t)
                            {
                              ATerm w_1 (ATerm t)
                              {
                                t = term_n_21;
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
  ATerm k_17 = NULL;
  k_17 = t;
  t = SSL_getenv(not_null(k_17));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm p_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_21;
      t = get_config_0(t);
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = p_21;
      {
        ATerm v_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_a_22;
            t = getenv_0(t);
            ;
            LocalPopChoice(w_21);
          }
        else
          {
            t = v_21;
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
      t = term_d_22;
      return(t);
    }
    t = debug_1(t, y_1);
    return(t);
  }
  t = if_verbose5_1(t, x_1);
  {
    ATerm e_22;
    e_22 = t;
    {
      ATerm f_22 = t;
      int g_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_h_22;
          t = table_get_0(t);
          ;
          LocalPopChoice(g_22);
        }
      else
        {
          t = f_22;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = e_22;
    {
      ATerm z_1 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          t = term_k_22;
          return(t);
        }
        t = debug_1(t, a_2);
        return(t);
      }
      t = if_verbose5_1(t, z_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm l_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm f_2 (ATerm t)
        {
          t = term_p_22;
          return(t);
        }
        t = debug_1(t, f_2);
        return(t);
      }
      t = if_verbose5_1(t, e_2);
      {
        t = xtc_load_0(t);
        {
          ATerm q_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(v_22);
            }
          else
            {
              t = q_22;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm g_2 (ATerm t)
            {
              ATerm h_2 (ATerm t)
              {
                t = term_p_22;
                return(t);
              }
              t = debug_1(t, h_2);
              return(t);
            }
            t = if_verbose5_1(t, g_2);
          }
        }
      }
      ;
      LocalPopChoice(o_22);
    }
  else
    {
      t = l_22;
      {
        ATerm o_17 = NULL;
        ATerm p_17 = NULL;
        p_17 = t;
        if(((o_17 != NULL) && (o_17 != p_17)))
          _fail(p_17);
        else
          o_17 = p_17;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_22), not_null(o_17)), term_w_22);
          {
            t = error_0(t);
            {
              ATerm i_2 (ATerm t)
              {
                t = term_t_18;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm j_2 (ATerm t)
                    {
                      t = term_y_22;
                      return(t);
                    }
                    t = debug_1(t, j_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, i_2);
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
ATerm xtc_command_1 (ATerm t, ATerm c_83 (ATerm))
{
  ATerm t_17 = NULL;
  ATerm z_22;
  z_22 = t;
  {
    ATerm u_17 = NULL;
    t = c_83(t);
    {
      t = xtc_find_warning_0(t);
      {
        u_17 = t;
        if(((t_17 != NULL) && (t_17 != u_17)))
          _fail(u_17);
        else
          t_17 = u_17;
      }
    }
  }
  t = z_22;
  {
    ATerm a_23;
    a_23 = t;
    {
      ATerm v_17 = NULL;
      ATerm w_17 = NULL;
      w_17 = t;
      if(((v_17 != NULL) && (v_17 != w_17)))
        _fail(w_17);
      else
        v_17 = w_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_17), not_null(v_17));
        t = call_0(t);
      }
    }
    t = a_23;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm n_79 (ATerm))
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym__2))
    {
      f_18 = ATgetArgument(e_18, 0);
      g_18 = ATgetArgument(e_18, 1);
      {
        ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
        ATerm b_23;
        b_23 = t;
        {
          ATerm m_18 = NULL;
          ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
          t = n_79(t);
          {
            m_18 = t;
            {
              if(((j_18 != NULL) && (j_18 != m_18)))
                _fail(m_18);
              else
                j_18 = m_18;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(j_18), not_null(f_18), not_null(g_18));
                {
                  t = table_push_0(t);
                  {
                    ATerm d_23 = t;
                    int e_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), term_f_23);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(e_23);
                      }
                    else
                      {
                        t = d_23;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      n_18 = t;
                      c_18 :
                      if(((ATgetType(n_18) == AT_LIST) && !(ATisEmpty(n_18))))
                        {
                          o_18 = ATgetFirst((ATermList) n_18);
                          p_18 = (ATerm) ATgetNext((ATermList) n_18);
                          {
                            if(((k_18 != NULL) && (k_18 != o_18)))
                              _fail(o_18);
                            else
                              k_18 = o_18;
                            {
                              if(((l_18 != NULL) && (l_18 != p_18)))
                                _fail(p_18);
                              else
                                l_18 = p_18;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(j_18), term_f_23, (ATerm) ATinsert(CheckATermList(not_null(l_18)), (ATerm) ATinsert(CheckATermList(not_null(k_18)), not_null(f_18))));
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
        t = b_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm a_65 (ATerm))
{
  ATerm j_23;
  j_23 = t;
  {
    t = a_65(t);
    {
      ATerm k_2 (ATerm t)
      {
        t = term_l_23;
        return(t);
      }
      t = debug_1(t, k_2);
    }
  }
  t = j_23;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  ATerm g_19 (ATerm t)
  {
    ATerm p_23 = t;
    if((PushChoice() == 0))
      {
        ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
        b_19 = t;
        v_18 :
        if(match_cons(b_19, sym__2))
          {
            c_19 = ATgetArgument(b_19, 0);
            d_19 = ATgetArgument(b_19, 1);
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
        t = p_23;
      }
    {
      ATerm l_2 (ATerm t)
      {
        t = term_r_23;
        return(t);
      }
      t = obsolete_1(t, l_2);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_18), term_e_9);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm h_19 (ATerm t)
  {
    t = SSL_open_file(not_null(y_18), not_null(z_18));
    return(t);
  }
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym__2))
    {
      y_18 = ATgetArgument(x_18, 0);
      z_18 = ATgetArgument(x_18, 1);
      {
        ATerm s_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_19(t);
            ;
            LocalPopChoice(t_23);
          }
        else
          {
            t = s_23;
            t = h_19(t);
          }
      }
    }
  else
    {
      t = g_19(t);
    }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm j_19 = NULL;
  t = new_file_0(t);
  {
    j_19 = t;
    {
      ATerm u_23;
      u_23 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), term_e_9);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), term_v_23);
            {
              ATerm m_2 (ATerm t)
              {
                t = term_w_23;
                return(t);
              }
              t = assert_1(t, m_2);
            }
          }
        }
      }
      t = u_23;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm u_19 = NULL,v_19 = NULL;
  u_19 = t;
  s_19 :
  if(match_cons(u_19, sym_stdin_0))
    {
      ATerm w_19 = NULL;
      ATerm x_19 = NULL;
      ATerm y_19 = NULL;
      t = xtc_new_file_0(t);
      {
        x_19 = t;
        {
          if(((w_19 != NULL) && (w_19 != x_19)))
            _fail(x_19);
          else
            w_19 = x_19;
          {
            ATerm z_19 = NULL;
            t = r_0(t);
            {
              z_19 = t;
              if(((y_19 != NULL) && (y_19 != z_19)))
                _fail(z_19);
              else
                y_19 = z_19;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_19), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_19)), term_x_23));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, q_0);
                  {
                    t = not_null(w_19);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_19));
    }
  else
    {
      if(match_cons(u_19, sym_FILE_1))
        {
          v_19 = ATgetArgument(u_19, 0);
          {
            ATerm b_20 = NULL;
            ATerm c_20 = NULL;
            t = not_null(v_19);
            {
              ATerm d_20 = NULL;
              t = xtc_new_file_0(t);
              {
                c_20 = t;
                {
                  if(((b_20 != NULL) && (b_20 != c_20)))
                    _fail(c_20);
                  else
                    b_20 = c_20;
                  {
                    ATerm e_20 = NULL;
                    t = r_0(t);
                    {
                      e_20 = t;
                      if(((d_20 != NULL) && (d_20 != e_20)))
                        _fail(e_20);
                      else
                        d_20 = e_20;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_20)), term_x_23), not_null(v_19)), term_y_23));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, q_0);
                          {
                            t = not_null(b_20);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_20));
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
  ATerm p_20 = NULL;
  p_20 = t;
  o_20 :
  if(match_cons(p_20, sym_stdin_0))
    {
      ATerm r_20 = NULL,v_20 = NULL;
      ATerm z_23;
      z_23 = t;
      {
        ATerm s_20 = NULL;
        t = SSLgetAnnotations(not_null(p_20));
        {
          s_20 = t;
          if(((r_20 != NULL) && (r_20 != s_20)))
            _fail(s_20);
          else
            r_20 = s_20;
        }
      }
      t = z_23;
      {
        ATerm w_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(r_20));
        {
          w_20 = t;
          if(((v_20 != NULL) && (v_20 != w_20)))
            _fail(w_20);
          else
            v_20 = w_20;
        }
        t = not_null(v_20);
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
  ATerm r_21 = NULL,u_21 = NULL;
  r_21 = t;
  q_21 :
  if(match_cons(r_21, sym_FILE_1))
    {
      u_21 = ATgetArgument(r_21, 0);
      {
        ATerm x_21 = NULL,z_21 = NULL;
        ATerm y_21 = NULL;
        t = SSLgetAnnotations(not_null(r_21));
        {
          y_21 = t;
          if(((x_21 != NULL) && (x_21 != y_21)))
            _fail(y_21);
          else
            x_21 = y_21;
        }
        {
          t = not_null(u_21);
          {
            ATerm b_22 = NULL;
            t = q_61(t);
            {
              z_21 = t;
              {
                ATerm c_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(z_21)), not_null(x_21));
                {
                  c_22 = t;
                  if(((b_22 != NULL) && (b_22 != c_22)))
                    _fail(c_22);
                  else
                    b_22 = c_22;
                }
                t = not_null(b_22);
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
ATerm xtc_transform_2 (ATerm t, ATerm e_83 (ATerm), ATerm f_83 (ATerm))
{
  ATerm c_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_24 = t;
      int h_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(h_24);
        }
      else
        {
          t = g_24;
          t = stdin_0(t);
        }
      LocalPopChoice(f_24);
      t = xtc_transform_file_2(t, e_83, f_83);
    }
  else
    {
      t = c_24;
      t = xtc_transform_term_2(t, e_83, f_83);
    }
  return(t);
}
ATerm pass__old_0 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_24;
      t = get_config_0(t);
      LocalPopChoice(j_24);
      {
        ATerm i_22 = NULL;
        t = ensure_pp_table_parsed_0(t);
        {
          ATerm j_22 = NULL;
          j_22 = t;
          if(((i_22 != NULL) && (i_22 != j_22)))
            _fail(j_22);
          else
            i_22 = j_22;
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_22)), term_k_24);
        }
      }
    }
  else
    {
      t = i_24;
      t = (ATerm) ATempty;
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
  ATerm m_22 = NULL;
  ATerm n_22 = NULL;
  t = term_v_23;
  {
    t = new_0(t);
    {
      n_22 = t;
      if(((m_22 != NULL) && (m_22 != n_22)))
        _fail(n_22);
      else
        m_22 = n_22;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_22), term_l_24);
    {
      t = conc_strings_0(t);
      {
        ATerm n_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, n_2);
      }
    }
  }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  r_22 :
  if(match_cons(s_22, sym__2))
    {
      t_22 = ATgetArgument(s_22, 0);
      u_22 = ATgetArgument(s_22, 1);
      t = SSL_rename(not_null(t_22), not_null(u_22));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm h_23 = NULL,i_23 = NULL;
  h_23 = t;
  g_23 :
  if(match_cons(h_23, sym_FILE_1))
    {
      i_23 = ATgetArgument(h_23, 0);
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_23 = NULL;
            t = p_0(t);
            {
              k_23 = t;
              c_23 :
              if(match_cons(k_23, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_23), term_o_24);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(i_23);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_o_24;
            ;
            LocalPopChoice(n_24);
          }
        else
          {
            t = m_24;
            {
              ATerm p_24 = t;
              int s_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_23 = NULL;
                  ATerm n_23 = NULL;
                  t = p_0(t);
                  {
                    n_23 = t;
                    {
                      if(((m_23 != NULL) && (m_23 != n_23)))
                        _fail(n_23);
                      else
                        m_23 = n_23;
                      {
                        ATerm t_24 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm u_24 = t;
                            int v_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(v_24);
                              }
                            else
                              {
                                t = u_24;
                                {
                                  ATerm o_23 = NULL;
                                  o_23 = t;
                                  if(((i_23 != NULL) && (i_23 != o_23)))
                                    _fail(o_23);
                                  else
                                    i_23 = o_23;
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = t_24;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_23), not_null(m_23));
                          t = rename_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_23));
                  ;
                  LocalPopChoice(s_24);
                }
              else
                {
                  t = p_24;
                  {
                    ATerm q_23 = NULL;
                    t = p_0(t);
                    {
                      q_23 = t;
                      if(((i_23 != NULL) && (i_23 != q_23)))
                        _fail(q_23);
                      else
                        i_23 = q_23;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_23));
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
ATerm xtc_transform_1 (ATerm t, ATerm d_83 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, d_83, o_2);
  return(t);
}
ATerm xtc_parse_pp_table_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = term_a_25;
    return(t);
  }
  t = xtc_transform_1(t, p_2);
  return(t);
}
ATerm parse_to_temp_file_0 (ATerm t)
{
  ATerm b_24 = NULL;
  ATerm d_24 = NULL,e_24 = NULL;
  b_24 = t;
  {
    ATerm q_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_24));
      {
        t = xtc_parse_pp_table_0(t);
        t = rename_to_1(t, new_file_0);
      }
      return(t);
    }
    t = xtc_temp_files_1(t, q_2);
    {
      d_24 = t;
      a_24 :
      if(match_cons(d_24, sym_FILE_1))
        {
          e_24 = ATgetArgument(d_24, 0);
          {
            t = not_null(e_24);
            {
              ATerm r_2 (ATerm t)
              {
                ATerm s_2 (ATerm t)
                {
                  t = term_e_25;
                  return(t);
                }
                t = debug_1(t, s_2);
                return(t);
              }
              t = if_verbose2_1(t, r_2);
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
ATerm if_verbose2_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm f_25;
    f_25 = t;
    {
      ATerm q_24 = NULL;
      ATerm r_24 = NULL;
      t = term_v_8;
      {
        t = get_config_0(t);
        {
          r_24 = t;
          if(((q_24 != NULL) && (q_24 != r_24)))
            _fail(r_24);
          else
            q_24 = r_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_24), term_u_9);
        t = geq_0(t);
      }
    }
    t = f_25;
    t = l_80(t);
    return(t);
  }
  t = try_1(t, t_2);
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm z_24 = NULL;
  ATerm b_25 = NULL,c_25 = NULL;
  z_24 = t;
  {
    ATerm d_25 = NULL;
    ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
    t = not_null(z_24);
    {
      d_25 = t;
      {
        t = SSL_explode_term(not_null(d_25));
        {
          h_25 = t;
          w_24 :
          if(match_cons(h_25, sym__2))
            {
              i_25 = ATgetArgument(h_25, 0);
              j_25 = ATgetArgument(h_25, 1);
              x_24 :
              if(match_string(i_25, ""))
                {
                  y_24 :
                  if(((ATgetType(j_25) == AT_LIST) && !(ATisEmpty(j_25))))
                    {
                      k_25 = ATgetFirst((ATermList) j_25);
                      l_25 = (ATerm) ATgetNext((ATermList) j_25);
                      {
                        if(((c_25 != NULL) && (c_25 != k_25)))
                          _fail(k_25);
                        else
                          c_25 = k_25;
                        if(((b_25 != NULL) && (b_25 != l_25)))
                          _fail(l_25);
                        else
                          b_25 = l_25;
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
    t = not_null(c_25);
  }
  return(t);
}
ATerm modification_time_0 (ATerm t)
{
  ATerm q_25 = NULL;
  q_25 = t;
  t = SSL_modification_time(not_null(q_25));
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym__2))
    {
      w_25 = ATgetArgument(v_25, 0);
      x_25 = ATgetArgument(v_25, 1);
      t = SSL_access(not_null(w_25), not_null(x_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm h_26 = NULL;
  ATerm i_26 = NULL;
  i_26 = t;
  if(((h_26 != NULL) && (h_26 != i_26)))
    _fail(i_26);
  else
    h_26 = i_26;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_26), (ATerm) ATinsert(ATempty, term_g_25));
    t = access_0(t);
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
ATerm add_extension_0 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
  n_26 = t;
  m_26 :
  if(match_cons(n_26, sym__2))
    {
      o_26 = ATgetArgument(n_26, 0);
      p_26 = ATgetArgument(n_26, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_26)), term_m_25), not_null(o_26));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm lookup_pp_af_0 (ATerm t)
{
  ATerm a_27 = NULL,c_27 = NULL;
  ATerm n_25;
  n_25 = t;
  {
    ATerm b_27 = NULL;
    b_27 = t;
    if(((a_27 != NULL) && (a_27 != b_27)))
      _fail(b_27);
    else
      a_27 = b_27;
  }
  t = n_25;
  {
    ATerm d_27 = NULL,f_27 = NULL;
    ATerm e_27 = NULL;
    e_27 = t;
    if(((d_27 != NULL) && (d_27 != e_27)))
      _fail(e_27);
    else
      d_27 = e_27;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_27), term_o_25);
      {
        t = add_extension_0(t);
        {
          t = file_exists_0(t);
          {
            f_27 = t;
            if(((c_27 != NULL) && (c_27 != f_27)))
              _fail(f_27);
            else
              c_27 = f_27;
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_27), not_null(a_27));
      {
        ATerm p_25;
        p_25 = t;
        {
          t = _2(t, modification_time_0, modification_time_0);
          t = geq_0(t);
        }
        t = p_25;
        {
          t = Fst_0(t);
          {
            ATerm u_2 (ATerm t)
            {
              ATerm v_2 (ATerm t)
              {
                t = term_r_25;
                return(t);
              }
              t = debug_1(t, v_2);
              return(t);
            }
            t = if_verbose2_1(t, u_2);
          }
        }
      }
    }
  }
  return(t);
}
ATerm lookup_or_parse_0 (ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = lookup_pp_af_0(t);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      t = parse_to_temp_file_0(t);
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm y_25;
  y_25 = t;
  {
    ATerm k_27 = NULL;
    ATerm l_27 = NULL;
    l_27 = t;
    if(((k_27 != NULL) && (k_27 != l_27)))
      _fail(l_27);
    else
      k_27 = l_27;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_18, not_null(k_27));
      t = printnl_0(t);
    }
  }
  t = y_25;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm z_25;
  z_25 = t;
  {
    t = error_0(t);
    {
      t = term_c_9;
      t = exit_0(t);
    }
  }
  t = z_25;
  return(t);
}
ATerm must_be_pp_0 (ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_2 (ATerm t)
      {
        t = term_c_26;
        return(t);
      }
      t = has_extension_1(t, w_2);
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
      {
        ATerm o_27 = NULL;
        ATerm p_27 = NULL;
        p_27 = t;
        if(((o_27 != NULL) && (o_27 != p_27)))
          _fail(p_27);
        else
          o_27 = p_27;
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_27)), term_d_26);
          t = fatal_error_0(t);
        }
      }
    }
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm t_69 (ATerm))
{
  ATerm r_27 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_69(t);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = Cons_2(t, _id, r_27);
      }
    return(t);
  }
  t = r_27(t);
  return(t);
}
ATerm has_extension_1 (ATerm t, ATerm s_77 (ATerm))
{
  ATerm u_27 = NULL;
  ATerm g_26;
  g_26 = t;
  {
    ATerm v_27 = NULL;
    t = s_77(t);
    {
      t = explode_string_0(t);
      {
        v_27 = t;
        if(((u_27 != NULL) && (u_27 != v_27)))
          _fail(v_27);
        else
          u_27 = v_27;
      }
    }
  }
  t = g_26;
  {
    ATerm j_26;
    j_26 = t;
    {
      t = explode_string_0(t);
      {
        ATerm x_2 (ATerm t)
        {
          ATerm w_27 = NULL;
          w_27 = t;
          if(((u_27 != NULL) && (u_27 != w_27)))
            _fail(w_27);
          else
            u_27 = w_27;
          return(t);
        }
        t = at_suffix_1(t, x_2);
      }
    }
    t = j_26;
  }
  return(t);
}
ATerm ensure_pp_table_parsed_0 (ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_2 (ATerm t)
      {
        t = term_q_26;
        return(t);
      }
      t = has_extension_1(t, y_2);
      ;
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      {
        t = must_be_pp_0(t);
        t = lookup_or_parse_0(t);
      }
    }
  return(t);
}
ATerm pass__new_0 (ATerm t)
{
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_26;
      t = get_config_0(t);
      LocalPopChoice(s_26);
      {
        ATerm a_28 = NULL;
        t = ensure_pp_table_parsed_0(t);
        {
          ATerm b_28 = NULL;
          b_28 = t;
          if(((a_28 != NULL) && (a_28 != b_28)))
            _fail(b_28);
          else
            a_28 = b_28;
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_28)), term_t_26);
        }
      }
    }
  else
    {
      t = r_26;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__prune_0 (ATerm t)
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_26;
      t = get_config_0(t);
      LocalPopChoice(v_26);
      t = (ATerm) ATinsert(ATempty, term_w_26);
    }
  else
    {
      t = u_26;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__patch_0 (ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_26;
      t = get_config_0(t);
      LocalPopChoice(y_26);
      t = (ATerm) ATinsert(ATempty, term_z_26);
    }
  else
    {
      t = x_26;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm build_impl_args_0 (ATerm t)
{
  ATerm h_28 = NULL,j_28 = NULL,l_28 = NULL,n_28 = NULL;
  ATerm g_27;
  g_27 = t;
  {
    ATerm i_28 = NULL;
    t = term_v_23;
    {
      t = pass__patch_0(t);
      {
        i_28 = t;
        if(((h_28 != NULL) && (h_28 != i_28)))
          _fail(i_28);
        else
          h_28 = i_28;
      }
    }
  }
  t = g_27;
  {
    ATerm h_27;
    h_27 = t;
    {
      ATerm k_28 = NULL;
      t = term_v_23;
      {
        t = pass__prune_0(t);
        {
          k_28 = t;
          if(((j_28 != NULL) && (j_28 != k_28)))
            _fail(k_28);
          else
            j_28 = k_28;
        }
      }
    }
    t = h_27;
    {
      ATerm i_27;
      i_27 = t;
      {
        ATerm m_28 = NULL;
        t = term_v_23;
        {
          t = pass__new_0(t);
          {
            m_28 = t;
            if(((l_28 != NULL) && (l_28 != m_28)))
              _fail(m_28);
            else
              l_28 = m_28;
          }
        }
      }
      t = i_27;
      {
        ATerm o_28 = NULL;
        t = term_v_23;
        {
          t = pass__old_0(t);
          {
            o_28 = t;
            if(((n_28 != NULL) && (n_28 != o_28)))
              _fail(o_28);
            else
              n_28 = o_28;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(n_28)), not_null(l_28)), not_null(j_28)), not_null(h_28));
          t = concat_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  u_28 :
  if(match_cons(v_28, sym__2))
    {
      w_28 = ATgetArgument(v_28, 0);
      x_28 = ATgetArgument(v_28, 1);
      t = SSL_copy(not_null(w_28), not_null(x_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm f_29 = NULL;
  f_29 = t;
  e_29 :
  if(match_cons(f_29, sym_stderr_0))
    {
      ATerm h_29 = NULL,j_29 = NULL;
      ATerm j_27;
      j_27 = t;
      {
        ATerm i_29 = NULL;
        t = SSLgetAnnotations(not_null(f_29));
        {
          i_29 = t;
          if(((h_29 != NULL) && (h_29 != i_29)))
            _fail(i_29);
          else
            h_29 = i_29;
        }
      }
      t = j_27;
      {
        ATerm k_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(h_29));
        {
          k_29 = t;
          if(((j_29 != NULL) && (j_29 != k_29)))
            _fail(k_29);
          else
            j_29 = k_29;
        }
        t = not_null(j_29);
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
  ATerm s_29 = NULL;
  s_29 = t;
  r_29 :
  if(match_cons(s_29, sym_stdout_0))
    {
      ATerm u_29 = NULL,w_29 = NULL;
      ATerm m_27;
      m_27 = t;
      {
        ATerm v_29 = NULL;
        t = SSLgetAnnotations(not_null(s_29));
        {
          v_29 = t;
          if(((u_29 != NULL) && (u_29 != v_29)))
            _fail(v_29);
          else
            u_29 = v_29;
        }
      }
      t = m_27;
      {
        ATerm x_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(u_29));
        {
          x_29 = t;
          if(((w_29 != NULL) && (w_29 != x_29)))
            _fail(x_29);
          else
            w_29 = x_29;
        }
        t = not_null(w_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm j_30 = NULL,k_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_cons(j_30, sym_FILE_1))
    {
      k_30 = ATgetArgument(j_30, 0);
      {
        ATerm n_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_30 = NULL;
            ATerm n_30 = NULL;
            t = o_0(t);
            {
              n_30 = t;
              {
                if(((m_30 != NULL) && (m_30 != n_30)))
                  _fail(n_30);
                else
                  m_30 = n_30;
                {
                  ATerm s_27 = t;
                  int t_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(t_27);
                    }
                  else
                    {
                      t = s_27;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_30), not_null(m_30));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_30));
            ;
            LocalPopChoice(q_27);
          }
        else
          {
            t = n_27;
            {
              ATerm x_27 = t;
              int y_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_30 = NULL;
                  ATerm q_30 = NULL;
                  t = o_0(t);
                  {
                    q_30 = t;
                    {
                      if(((p_30 != NULL) && (p_30 != q_30)))
                        _fail(q_30);
                      else
                        p_30 = q_30;
                      {
                        ATerm z_27 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm c_28 = t;
                            int d_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(d_28);
                              }
                            else
                              {
                                t = c_28;
                                {
                                  ATerm e_28 = t;
                                  int f_28 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(f_28);
                                    }
                                  else
                                    {
                                      t = e_28;
                                      {
                                        ATerm r_30 = NULL;
                                        r_30 = t;
                                        if(((k_30 != NULL) && (k_30 != r_30)))
                                          _fail(r_30);
                                        else
                                          k_30 = r_30;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = z_27;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(k_30), not_null(p_30));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_30));
                  ;
                  LocalPopChoice(y_27);
                }
              else
                {
                  t = x_27;
                  {
                    ATerm t_30 = NULL;
                    t = o_0(t);
                    {
                      t_30 = t;
                      if(((k_30 != NULL) && (k_30 != t_30)))
                        _fail(t_30);
                      else
                        k_30 = t_30;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_30));
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
  ATerm i_31 = NULL,k_31 = NULL,l_31 = NULL;
  i_31 = t;
  e_31 :
  if(((ATgetType(i_31) == AT_LIST) && !(ATisEmpty(i_31))))
    {
      k_31 = ATgetFirst((ATermList) i_31);
      l_31 = (ATerm) ATgetNext((ATermList) i_31);
      t = not_null(l_31);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  q_31 :
  if(match_cons(r_31, sym__2))
    {
      s_31 = ATgetArgument(r_31, 0);
      t_31 = ATgetArgument(r_31, 1);
      {
        ATerm g_28;
        g_28 = t;
        {
          ATerm w_31 = NULL;
          ATerm x_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_31), not_null(t_31));
          {
            ATerm p_28 = t;
            int q_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(q_28);
              }
            else
              {
                t = p_28;
                t = (ATerm) ATempty;
              }
            {
              x_31 = t;
              if(((w_31 != NULL) && (w_31 != x_31)))
                _fail(x_31);
              else
                w_31 = x_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_31), not_null(t_31), not_null(w_31));
            t = table_put_0(t);
          }
        }
        t = g_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm k_79 (ATerm))
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
  ATerm r_28;
  r_28 = t;
  {
    ATerm h_32 = NULL;
    ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
    t = k_79(t);
    {
      h_32 = t;
      {
        if(((g_32 != NULL) && (g_32 != h_32)))
          _fail(h_32);
        else
          g_32 = h_32;
        {
          ATerm s_28 = t;
          int t_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_32), term_f_23);
              t = table_get_0(t);
              ;
              LocalPopChoice(t_28);
            }
          else
            {
              t = s_28;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            i_32 = t;
            d_32 :
            if(((ATgetType(i_32) == AT_LIST) && !(ATisEmpty(i_32))))
              {
                j_32 = ATgetFirst((ATermList) i_32);
                k_32 = (ATerm) ATgetNext((ATermList) i_32);
                {
                  if(((f_32 != NULL) && (f_32 != j_32)))
                    _fail(j_32);
                  else
                    f_32 = j_32;
                  {
                    if(((e_32 != NULL) && (e_32 != k_32)))
                      _fail(k_32);
                    else
                      e_32 = k_32;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_32), term_f_23, not_null(e_32));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(f_32);
                          {
                            ATerm z_2 (ATerm t)
                            {
                              ATerm n_32 = NULL;
                              n_32 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_32), not_null(n_32));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, z_2);
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
  t = r_28;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm t_32 = NULL;
  t_32 = t;
  t = SSL_remove(not_null(t_32));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm f_80 (ATerm), ATerm g_80 (ATerm))
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_80(t);
      t = g_80(t);
      ;
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      {
        t = g_80(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm j_79 (ATerm))
{
  ATerm y_32 = NULL;
  ATerm a_29;
  a_29 = t;
  {
    ATerm z_32 = NULL;
    ATerm a_33 = NULL;
    t = j_79(t);
    {
      z_32 = t;
      {
        if(((y_32 != NULL) && (y_32 != z_32)))
          _fail(z_32);
        else
          y_32 = z_32;
        {
          ATerm b_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_32), term_f_23);
          {
            ATerm b_29 = t;
            int c_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(c_29);
              }
            else
              {
                t = b_29;
                t = (ATerm) ATempty;
              }
            {
              b_33 = t;
              if(((a_33 != NULL) && (a_33 != b_33)))
                _fail(b_33);
              else
                a_33 = b_33;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_32), term_f_23, (ATerm) ATinsert(CheckATermList(not_null(a_33)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = a_29;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm o_82 (ATerm))
{
  ATerm g_33 = NULL,h_33 = NULL;
  ATerm a_3 (ATerm t)
  {
    t = term_w_23;
    return(t);
  }
  t = begin_scope_1(t, a_3);
  {
    ATerm b_3 (ATerm t)
    {
      ATerm d_29;
      d_29 = t;
      {
        ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
        ATerm g_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_m_29;
            t = table_get_0(t);
            ;
            LocalPopChoice(l_29);
          }
        else
          {
            t = g_29;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          i_33 = t;
          f_33 :
          if(((ATgetType(i_33) == AT_LIST) && !(ATisEmpty(i_33))))
            {
              j_33 = ATgetFirst((ATermList) i_33);
              k_33 = (ATerm) ATgetNext((ATermList) i_33);
              {
                if(((h_33 != NULL) && (h_33 != j_33)))
                  _fail(j_33);
                else
                  h_33 = j_33;
                {
                  if(((g_33 != NULL) && (g_33 != k_33)))
                    _fail(k_33);
                  else
                    g_33 = k_33;
                  {
                    t = not_null(h_33);
                    {
                      ATerm c_3 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, c_3);
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
      t = d_29;
      {
        ATerm d_3 (ATerm t)
        {
          t = term_w_23;
          return(t);
        }
        t = end_scope_1(t, d_3);
      }
      return(t);
    }
    t = restore_always_2(t, o_82, b_3);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm p_82 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_33 = NULL;
        ATerm o_33 = NULL;
        t = term_y_23;
        {
          t = get_config_0(t);
          {
            o_33 = t;
            if(((n_33 != NULL) && (n_33 != o_33)))
              _fail(o_33);
            else
              n_33 = o_33;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_33));
        ;
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
        t = term_d_9;
      }
    {
      t = p_82(t);
      {
        ATerm m_3 (ATerm t)
        {
          ATerm p_29 = t;
          int q_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_x_23;
              t = get_config_0(t);
              ;
              LocalPopChoice(q_29);
            }
          else
            {
              t = p_29;
              t = term_o_24;
            }
          return(t);
        }
        t = copy_to_1(t, m_3);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, j_3);
  return(t);
}
ATerm pptable_diff_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm o_3 (ATerm t)
    {
      t = term_t_29;
      return(t);
    }
    ATerm p_3 (ATerm t)
    {
      t = term_v_23;
      t = build_impl_args_0(t);
      return(t);
    }
    t = xtc_transform_2(t, o_3, p_3);
    {
      ATerm q_3 (ATerm t)
      {
        ATerm y_29;
        y_29 = t;
        {
          t = term_z_26;
          t = get_config_0(t);
        }
        t = y_29;
        {
          ATerm r_3 (ATerm t)
          {
            t = term_z_29;
            return(t);
          }
          t = xtc_transform_2(t, r_3, pass_verbose_0);
        }
        return(t);
      }
      t = try_1(t, q_3);
    }
    return(t);
  }
  t = xtc_io_1(t, n_3);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm r_33 = NULL;
    r_33 = t;
    q_33 :
    if(!(match_string(r_33, "-v")))
      {
        if(!(match_string(r_33, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_b_30;
    t = set_config_0(t);
    t = term_c_30;
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_d_30;
    return(t);
  }
  t = Option_3(t, y_3, z_3, c_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm u_33 = NULL;
    u_33 = t;
    s_33 :
    if(!(match_string(u_33, "-k")))
      {
        if(!(match_string(u_33, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    ATerm e_30;
    e_30 = t;
    {
      ATerm v_33 = NULL;
      ATerm w_33 = NULL;
      t = string_to_int_0(t);
      {
        w_33 = t;
        if(((v_33 != NULL) && (v_33 != w_33)))
          _fail(w_33);
        else
          v_33 = w_33;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_30, not_null(v_33));
        t = set_config_0(t);
      }
    }
    t = e_30;
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_g_30;
    return(t);
  }
  t = ArgOption_3(t, d_4, e_4, f_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm z_33 = NULL;
  z_33 = t;
  t = SSL_string_to_int(not_null(z_33));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_4 (ATerm t)
      {
        ATerm h_34 = NULL;
        h_34 = t;
        c_34 :
        if(!(match_string(h_34, "-S")))
          {
            if(!(match_string(h_34, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = term_s_30;
        t = set_config_0(t);
        t = term_u_30;
        return(t);
      }
      ATerm m_4 (ATerm t)
      {
        t = term_v_30;
        return(t);
      }
      t = Option_3(t, g_4, l_4, m_4);
      ;
      LocalPopChoice(l_30);
    }
  else
    {
      t = h_30;
      {
        ATerm w_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_4 (ATerm t)
            {
              ATerm i_34 = NULL;
              i_34 = t;
              d_34 :
              if(!(match_string(i_34, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm s_4 (ATerm t)
            {
              ATerm l_34 = NULL;
              ATerm y_30;
              y_30 = t;
              {
                ATerm j_34 = NULL;
                ATerm k_34 = NULL;
                t = string_to_int_0(t);
                {
                  k_34 = t;
                  if(((j_34 != NULL) && (j_34 != k_34)))
                    _fail(k_34);
                  else
                    j_34 = k_34;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_8, not_null(j_34));
                  t = set_config_0(t);
                }
              }
              t = y_30;
              {
                ATerm m_34 = NULL;
                m_34 = t;
                if(((l_34 != NULL) && (l_34 != m_34)))
                  _fail(m_34);
                else
                  l_34 = m_34;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(l_34));
              }
              return(t);
            }
            ATerm t_4 (ATerm t)
            {
              t = term_z_30;
              return(t);
            }
            t = ArgOption_3(t, r_4, s_4, t_4);
            ;
            LocalPopChoice(x_30);
          }
        else
          {
            t = w_30;
            {
              ATerm u_4 (ATerm t)
              {
                ATerm n_34 = NULL;
                n_34 = t;
                g_34 :
                if(!(match_string(n_34, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm v_4 (ATerm t)
              {
                t = term_b_31;
                t = set_config_0(t);
                t = term_c_31;
                return(t);
              }
              ATerm x_4 (ATerm t)
              {
                t = term_d_31;
                return(t);
              }
              t = Option_3(t, u_4, v_4, x_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
      {
        ATerm h_31 = t;
        int j_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(j_31);
          }
        else
          {
            t = h_31;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm t_34 = NULL;
    t_34 = t;
    q_34 :
    if(!(match_string(t_34, "-o")))
      {
        if(!(match_string(t_34, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    ATerm w_34 = NULL;
    ATerm m_31;
    m_31 = t;
    {
      ATerm u_34 = NULL;
      ATerm v_34 = NULL;
      v_34 = t;
      if(((u_34 != NULL) && (u_34 != v_34)))
        _fail(v_34);
      else
        u_34 = v_34;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_23, not_null(u_34));
        t = set_config_0(t);
      }
    }
    t = m_31;
    {
      ATerm x_34 = NULL;
      x_34 = t;
      if(((w_34 != NULL) && (w_34 != x_34)))
        _fail(x_34);
      else
        w_34 = x_34;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_34));
    }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = term_n_31;
    return(t);
  }
  t = ArgOption_3(t, a_5, b_5, c_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      {
        ATerm e_5 (ATerm t)
        {
          ATerm b_35 = NULL;
          b_35 = t;
          a_35 :
          if(!(match_string(b_35, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm f_5 (ATerm t)
        {
          t = term_v_31;
          t = set_config_0(t);
          t = term_y_31;
          return(t);
        }
        ATerm g_5 (ATerm t)
        {
          t = term_z_31;
          return(t);
        }
        t = Option_3(t, e_5, f_5, g_5);
      }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm f_35 = NULL;
    f_35 = t;
    c_35 :
    if(!(match_string(f_35, "-i")))
      {
        if(!(match_string(f_35, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    ATerm i_35 = NULL;
    ATerm a_32;
    a_32 = t;
    {
      ATerm g_35 = NULL;
      ATerm h_35 = NULL;
      h_35 = t;
      if(((g_35 != NULL) && (g_35 != h_35)))
        _fail(h_35);
      else
        g_35 = h_35;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_23, not_null(g_35));
        t = set_config_0(t);
      }
    }
    t = a_32;
    {
      ATerm j_35 = NULL;
      j_35 = t;
      if(((i_35 != NULL) && (i_35 != j_35)))
        _fail(j_35);
      else
        i_35 = j_35;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_35));
    }
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_b_32;
    return(t);
  }
  t = ArgOption_3(t, l_5, m_5, n_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm c_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(l_32);
    }
  else
    {
      t = c_32;
      {
        ATerm m_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(o_32);
          }
        else
          {
            t = m_32;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL;
  r_35 = t;
  p_35 :
  if(match_string(r_35, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(r_35) == AT_LIST) && !(ATisEmpty(r_35))))
        {
          s_35 = ATgetFirst((ATermList) r_35);
          t_35 = (ATerm) ATgetNext((ATermList) r_35);
          q_35 :
          if(((ATgetType(t_35) == AT_LIST) && !(ATisEmpty(t_35))))
            {
              u_35 = ATgetFirst((ATermList) t_35);
              v_35 = (ATerm) ATgetNext((ATermList) t_35);
              {
                ATerm z_35 = NULL;
                ATerm p_32;
                p_32 = t;
                {
                  t = not_null(s_35);
                  t = l_0(t);
                }
                t = p_32;
                {
                  ATerm a_36 = NULL;
                  t = not_null(u_35);
                  {
                    t = m_0(t);
                    {
                      a_36 = t;
                      if(((z_35 != NULL) && (z_35 != a_36)))
                        _fail(a_36);
                      else
                        z_35 = a_36;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_35)), not_null(z_35));
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
ATerm pptable_diff_options_0 (ATerm t)
{
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_5 (ATerm t)
      {
        ATerm m_36 = NULL;
        m_36 = t;
        e_36 :
        if(!(match_string(m_36, "--patch")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm q_5 (ATerm t)
      {
        ATerm s_32;
        s_32 = t;
        {
          ATerm n_36 = NULL;
          ATerm o_36 = NULL;
          o_36 = t;
          if(((n_36 != NULL) && (n_36 != o_36)))
            _fail(o_36);
          else
            n_36 = o_36;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_z_26, not_null(n_36));
            t = set_config_0(t);
          }
        }
        t = s_32;
        return(t);
      }
      ATerm r_5 (ATerm t)
      {
        t = term_u_32;
        return(t);
      }
      t = Option_3(t, o_5, q_5, r_5);
      ;
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
      {
        ATerm v_32 = t;
        int w_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 (ATerm t)
            {
              ATerm p_36 = NULL;
              p_36 = t;
              g_36 :
              if(!(match_string(p_36, "--prune")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm t_5 (ATerm t)
            {
              ATerm x_32;
              x_32 = t;
              {
                ATerm q_36 = NULL;
                ATerm r_36 = NULL;
                r_36 = t;
                if(((q_36 != NULL) && (q_36 != r_36)))
                  _fail(r_36);
                else
                  q_36 = r_36;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_26, not_null(q_36));
                  t = set_config_0(t);
                }
              }
              t = x_32;
              return(t);
            }
            ATerm u_5 (ATerm t)
            {
              t = term_c_33;
              return(t);
            }
            t = Option_3(t, s_5, t_5, u_5);
            ;
            LocalPopChoice(w_32);
          }
        else
          {
            t = v_32;
            {
              ATerm d_33 = t;
              int e_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_5 (ATerm t)
                  {
                    ATerm s_36 = NULL;
                    s_36 = t;
                    i_36 :
                    if(!(match_string(s_36, "--old")))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  ATerm b_6 (ATerm t)
                  {
                    ATerm l_33;
                    l_33 = t;
                    {
                      ATerm t_36 = NULL;
                      ATerm u_36 = NULL;
                      u_36 = t;
                      if(((t_36 != NULL) && (t_36 != u_36)))
                        _fail(u_36);
                      else
                        t_36 = u_36;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_k_24, not_null(t_36));
                        t = set_config_0(t);
                      }
                    }
                    t = l_33;
                    return(t);
                  }
                  ATerm e_6 (ATerm t)
                  {
                    t = term_m_33;
                    return(t);
                  }
                  t = ArgOption_3(t, v_5, b_6, e_6);
                  ;
                  LocalPopChoice(e_33);
                }
              else
                {
                  t = d_33;
                  {
                    ATerm p_33 = t;
                    int t_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_6 (ATerm t)
                        {
                          ATerm v_36 = NULL;
                          v_36 = t;
                          k_36 :
                          if(!(match_string(v_36, "--new")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm g_6 (ATerm t)
                        {
                          ATerm x_33;
                          x_33 = t;
                          {
                            ATerm w_36 = NULL;
                            ATerm x_36 = NULL;
                            x_36 = t;
                            if(((w_36 != NULL) && (w_36 != x_36)))
                              _fail(x_36);
                            else
                              w_36 = x_36;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_t_26, not_null(w_36));
                              t = set_config_0(t);
                            }
                          }
                          t = x_33;
                          return(t);
                        }
                        ATerm j_6 (ATerm t)
                        {
                          t = term_y_33;
                          return(t);
                        }
                        t = ArgOption_3(t, f_6, g_6, j_6);
                        ;
                        LocalPopChoice(t_33);
                      }
                    else
                      {
                        t = p_33;
                        t = io_options_0(t);
                      }
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
  ATerm a_34;
  a_34 = t;
  {
    ATerm e_37 = NULL;
    ATerm h_37 = NULL;
    t = term_v_23;
    {
      t = whoami_0(t);
      {
        h_37 = t;
        if(((e_37 != NULL) && (e_37 != h_37)))
          _fail(h_37);
        else
          e_37 = h_37;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_34), not_null(e_37)), term_b_34));
      {
        t = printnl_0(t);
        {
          t = term_c_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = a_34;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm k_37 = NULL;
  t = report_run_time_0(t);
  {
    ATerm l_37 = NULL;
    t = term_v_23;
    {
      t = whoami_0(t);
      {
        l_37 = t;
        if(((k_37 != NULL) && (k_37 != l_37)))
          _fail(l_37);
        else
          k_37 = l_37;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, term_f_34), not_null(k_37)));
      {
        t = printnl_0(t);
        {
          t = term_c_9;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_o_34;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_37 = NULL;
  o_37 = t;
  t = SSL_TicksToSeconds(not_null(o_37));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
  t_37 = t;
  s_37 :
  if(match_cons(t_37, sym__2))
    {
      u_37 = ATgetArgument(t_37, 0);
      v_37 = ATgetArgument(t_37, 1);
      {
        ATerm p_34 = t;
        int r_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_37), not_null(v_37));
            ;
            LocalPopChoice(r_34);
          }
        else
          {
            t = p_34;
            t = SSL_addr(not_null(u_37), not_null(v_37));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_75 (ATerm), ATerm n_75 (ATerm))
{
  ATerm s_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_75(t);
      ;
      LocalPopChoice(y_34);
    }
  else
    {
      t = s_34;
      {
        ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL;
        c_38 = t;
        b_38 :
        if(((ATgetType(c_38) == AT_LIST) && !(ATisEmpty(c_38))))
          {
            d_38 = ATgetFirst((ATermList) c_38);
            e_38 = (ATerm) ATgetNext((ATermList) c_38);
            {
              ATerm h_38 = NULL;
              ATerm i_38 = NULL;
              t = not_null(e_38);
              {
                t = foldr_2(t, m_75, n_75);
                {
                  i_38 = t;
                  if(((h_38 != NULL) && (h_38 != i_38)))
                    _fail(i_38);
                  else
                    h_38 = i_38;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_38), not_null(h_38));
                t = n_75(t);
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
ATerm crush_2 (ATerm t, ATerm k_73 (ATerm), ATerm l_73 (ATerm))
{
  ATerm s_38 = NULL;
  ATerm u_38 = NULL;
  s_38 = t;
  {
    ATerm v_38 = NULL;
    ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
    t = not_null(s_38);
    {
      v_38 = t;
      {
        t = SSL_explode_term(not_null(v_38));
        {
          x_38 = t;
          r_38 :
          if(match_cons(x_38, sym__2))
            {
              y_38 = ATgetArgument(x_38, 0);
              z_38 = ATgetArgument(x_38, 1);
              if(((u_38 != NULL) && (u_38 != z_38)))
                _fail(z_38);
              else
                u_38 = z_38;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_38);
      t = foldr_2(t, k_73, l_73);
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
    ATerm k_6 (ATerm t)
    {
      t = term_o_30;
      return(t);
    }
    t = crush_2(t, k_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  h_39 = t;
  e_39 :
  if(match_cons(h_39, sym__2))
    {
      i_39 = ATgetArgument(h_39, 0);
      j_39 = ATgetArgument(h_39, 1);
      {
        ATerm z_34;
        z_34 = t;
        {
          ATerm d_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(i_39), not_null(j_39));
              ;
              LocalPopChoice(e_35);
            }
          else
            {
              t = d_35;
              t = SSL_gtr(not_null(i_39), not_null(j_39));
            }
        }
        t = z_34;
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
  ATerm t_39 = NULL;
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL;
      u_39 = t;
      q_39 :
      if(match_cons(u_39, sym__2))
        {
          v_39 = ATgetArgument(u_39, 0);
          w_39 = ATgetArgument(u_39, 1);
          {
            if(((t_39 != NULL) && (t_39 != v_39)))
              _fail(v_39);
            else
              t_39 = v_39;
            if(((t_39 != NULL) && (t_39 != w_39)))
              _fail(w_39);
            else
              t_39 = w_39;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_80 (ATerm))
{
  ATerm l_6 (ATerm t)
  {
    ATerm m_35;
    m_35 = t;
    {
      ATerm z_39 = NULL;
      ATerm a_40 = NULL;
      t = term_v_8;
      {
        t = get_config_0(t);
        {
          a_40 = t;
          if(((z_39 != NULL) && (z_39 != a_40)))
            _fail(a_40);
          else
            z_39 = a_40;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_39), term_c_9);
        t = geq_0(t);
      }
    }
    t = m_35;
    t = k_80(t);
    return(t);
  }
  t = try_1(t, l_6);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm e_40 = NULL,g_40 = NULL;
    ATerm n_35;
    n_35 = t;
    {
      ATerm f_40 = NULL;
      t = run_time_0(t);
      {
        f_40 = t;
        if(((e_40 != NULL) && (e_40 != f_40)))
          _fail(f_40);
        else
          e_40 = f_40;
      }
    }
    t = n_35;
    {
      ATerm h_40 = NULL;
      t = term_v_23;
      {
        t = whoami_0(t);
        {
          h_40 = t;
          if(((g_40 != NULL) && (g_40 != h_40)))
            _fail(h_40);
          else
            g_40 = h_40;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_35), not_null(e_40)), term_i_9), not_null(g_40)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, m_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_o_30;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_40 = NULL;
  q_40 = t;
  p_40 :
  if(match_cons(q_40, sym_Version_0))
    {
      ATerm d_41 = NULL,f_41 = NULL;
      ATerm w_35;
      w_35 = t;
      {
        ATerm e_41 = NULL;
        t = SSLgetAnnotations(not_null(q_40));
        {
          e_41 = t;
          if(((d_41 != NULL) && (d_41 != e_41)))
            _fail(e_41);
          else
            d_41 = e_41;
        }
      }
      t = w_35;
      {
        ATerm g_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(d_41));
        {
          g_41 = t;
          if(((f_41 != NULL) && (f_41 != g_41)))
            _fail(g_41);
          else
            f_41 = g_41;
        }
        t = not_null(f_41);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_84 (ATerm))
{
  ATerm x_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_36;
      t = get_config_0(t);
      ;
      LocalPopChoice(y_35);
    }
  else
    {
      t = x_35;
      {
        ATerm n_6 (ATerm t)
        {
          ATerm c_36 = t;
          int d_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(d_36);
            }
          else
            {
              t = c_36;
              {
                ATerm f_36 = t;
                int h_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(h_36);
                  }
                else
                  {
                    t = f_36;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, n_6);
      }
    }
  t = w_84(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_41 = NULL;
  w_41 = t;
  t = SSL_table_create(not_null(w_41));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_42 = NULL;
  a_42 = t;
  {
    ATerm j_36;
    j_36 = t;
    {
      t = term_l_36;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_36, term_y_36, not_null(a_42));
          t = table_put_0(t);
        }
      }
    }
    t = j_36;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm e_42 = NULL;
  e_42 = t;
  t = SSL_table_destroy(not_null(e_42));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_42 = NULL;
  i_42 = t;
  t = SSL_exit(not_null(i_42));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,x_42 = NULL;
  r_42 = t;
  q_42 :
  if(((ATgetType(r_42) == AT_LIST) && ATisEmpty(r_42)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(r_42) == AT_LIST) && !(ATisEmpty(r_42))))
        {
          s_42 = ATgetFirst((ATermList) r_42);
          x_42 = (ATerm) ATgetNext((ATermList) r_42);
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
  ATerm z_36;
  z_36 = t;
  {
    ATerm h_43 = NULL;
    ATerm l_43 = NULL;
    ATerm a_37 = t;
    int b_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(b_37);
      }
    else
      {
        t = a_37;
        {
          ATerm j_43 = NULL;
          ATerm k_43 = NULL;
          k_43 = t;
          if(((j_43 != NULL) && (j_43 != k_43)))
            _fail(k_43);
          else
            j_43 = k_43;
          t = (ATerm) ATinsert(ATempty, not_null(j_43));
        }
      }
    {
      l_43 = t;
      if(((h_43 != NULL) && (h_43 != l_43)))
        _fail(l_43);
      else
        h_43 = l_43;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_24, not_null(h_43));
      t = printnl_0(t);
    }
  }
  t = z_36;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_37), term_q_37), term_p_37), term_n_37), term_m_37), term_j_37), term_i_37), term_g_37), term_f_37), term_d_37), term_c_37);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm b_44 = NULL,c_44 = NULL,h_44 = NULL;
  h_44 = t;
  v_43 :
  if(((ATgetType(h_44) == AT_LIST) && !(ATisEmpty(h_44))))
    {
      b_44 = ATgetFirst((ATermList) h_44);
      c_44 = (ATerm) ATgetNext((ATermList) h_44);
      {
        ATerm k_44 = NULL;
        t = not_null(c_44);
        {
          ATerm w_37;
          w_37 = t;
          {
            ATerm l_44 = NULL,n_44 = NULL,p_44 = NULL;
            ATerm x_37;
            x_37 = t;
            {
              ATerm m_44 = NULL;
              t = j_0(t);
              {
                m_44 = t;
                if(((l_44 != NULL) && (l_44 != m_44)))
                  _fail(m_44);
                else
                  l_44 = m_44;
              }
            }
            t = x_37;
            {
              ATerm o_44 = NULL;
              t = not_null(b_44);
              {
                t = i_0(t);
                {
                  o_44 = t;
                  if(((n_44 != NULL) && (n_44 != o_44)))
                    _fail(o_44);
                  else
                    n_44 = o_44;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_44)), not_null(n_44));
                {
                  p_44 = t;
                  if(((k_44 != NULL) && (k_44 != p_44)))
                    _fail(p_44);
                  else
                    k_44 = p_44;
                }
              }
            }
          }
          t = w_37;
          {
            ATerm q_6 (ATerm t)
            {
              t = not_null(k_44);
              return(t);
            }
            t = reverse_acc_2(t, i_0, q_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(h_44) == AT_LIST) && ATisEmpty(h_44)))
        {
          {
            t = term_v_23;
            t = j_0(t);
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
  ATerm r_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, r_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm y_44 = NULL;
  ATerm z_44 = NULL;
  t = term_v_23;
  {
    t = g_0(t);
    {
      z_44 = t;
      if(((y_44 != NULL) && (y_44 != z_44)))
        _fail(z_44);
      else
        y_44 = z_44;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_37), not_null(y_44)), term_y_37);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_61 (ATerm))
{
  ATerm k_45 = NULL,l_45 = NULL;
  k_45 = t;
  j_45 :
  if(match_cons(k_45, sym_Program_1))
    {
      l_45 = ATgetArgument(k_45, 0);
      {
        ATerm o_45 = NULL,e_46 = NULL;
        ATerm d_46 = NULL;
        t = SSLgetAnnotations(not_null(k_45));
        {
          d_46 = t;
          if(((o_45 != NULL) && (o_45 != d_46)))
            _fail(d_46);
          else
            o_45 = d_46;
        }
        {
          t = not_null(l_45);
          {
            ATerm g_46 = NULL;
            t = x_61(t);
            {
              e_46 = t;
              {
                ATerm i_46 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_46)), not_null(o_45));
                {
                  i_46 = t;
                  if(((g_46 != NULL) && (g_46 != i_46)))
                    _fail(i_46);
                  else
                    g_46 = i_46;
                }
                t = not_null(g_46);
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
  ATerm d_47 = NULL;
  ATerm a_38 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_47 = NULL;
      t = term_o_34;
      {
        t = get_config_0(t);
        {
          e_47 = t;
          if(((d_47 != NULL) && (d_47 != e_47)))
            _fail(e_47);
          else
            d_47 = e_47;
        }
      }
      ;
      LocalPopChoice(f_38);
    }
  else
    {
      t = a_38;
      {
        ATerm s_6 (ATerm t)
        {
          ATerm v_6 (ATerm t)
          {
            ATerm f_47 = NULL;
            f_47 = t;
            if(((d_47 != NULL) && (d_47 != f_47)))
              _fail(f_47);
            else
              d_47 = f_47;
            return(t);
          }
          t = Program_1(t, v_6);
          return(t);
        }
        t = option_defined_1(t, s_6);
      }
    }
  {
    ATerm a_7 (ATerm t)
    {
      ATerm b_7 (ATerm t)
      {
        t = not_null(d_47);
        return(t);
      }
      t = short_description_1(t, b_7);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, a_7);
    {
      t = term_g_38;
      {
        t = echo_0(t);
        {
          t = term_l_38;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm c_7 (ATerm t)
                {
                  ATerm g_47 = NULL;
                  ATerm i_47 = NULL;
                  i_47 = t;
                  if(((g_47 != NULL) && (g_47 != i_47)))
                    _fail(i_47);
                  else
                    g_47 = i_47;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_47)), term_m_38);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, c_7);
                {
                  ATerm e_7 (ATerm t)
                  {
                    ATerm j_47 = NULL;
                    ATerm k_47 = NULL;
                    ATerm k_7 (ATerm t)
                    {
                      t = not_null(d_47);
                      return(t);
                    }
                    t = long_description_1(t, k_7);
                    {
                      k_47 = t;
                      if(((j_47 != NULL) && (j_47 != k_47)))
                        _fail(k_47);
                      else
                        j_47 = k_47;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(j_47)), term_n_38);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_7);
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
  ATerm s_47 = NULL,y_47 = NULL,z_47 = NULL;
  s_47 = t;
  r_47 :
  if(match_cons(s_47, sym__2))
    {
      y_47 = ATgetArgument(s_47, 0);
      z_47 = ATgetArgument(s_47, 1);
      {
        ATerm o_38;
        o_38 = t;
        t = SSL_printnl(not_null(y_47), not_null(z_47));
        t = o_38;
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
  ATerm m_48 = NULL,n_48 = NULL;
  m_48 = t;
  l_48 :
  if(match_cons(m_48, sym_Undefined_1))
    {
      n_48 = ATgetArgument(m_48, 0);
      {
        ATerm q_48 = NULL,s_48 = NULL;
        ATerm r_48 = NULL;
        t = SSLgetAnnotations(not_null(m_48));
        {
          r_48 = t;
          if(((q_48 != NULL) && (q_48 != r_48)))
            _fail(r_48);
          else
            q_48 = r_48;
        }
        {
          t = not_null(n_48);
          {
            ATerm u_48 = NULL;
            t = y_61(t);
            {
              s_48 = t;
              {
                ATerm v_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_48)), not_null(q_48));
                {
                  v_48 = t;
                  if(((u_48 != NULL) && (u_48 != v_48)))
                    _fail(v_48);
                  else
                    u_48 = v_48;
                }
                t = not_null(u_48);
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
  ATerm a_49 (ATerm t)
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, j_69, _id);
        ;
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        t = Cons_2(t, _id, a_49);
      }
    return(t);
  }
  t = a_49(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_85 (ATerm))
{
  t = fetch_1(t, r_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_49 = NULL;
  f_49 = t;
  e_49 :
  if(match_cons(f_49, sym_Help_0))
    {
      ATerm h_49 = NULL,j_49 = NULL;
      ATerm t_38;
      t_38 = t;
      {
        ATerm i_49 = NULL;
        t = SSLgetAnnotations(not_null(f_49));
        {
          i_49 = t;
          if(((h_49 != NULL) && (h_49 != i_49)))
            _fail(i_49);
          else
            h_49 = i_49;
        }
      }
      t = t_38;
      {
        ATerm k_49 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(h_49));
        {
          k_49 = t;
          if(((j_49 != NULL) && (j_49 != k_49)))
            _fail(k_49);
          else
            j_49 = k_49;
        }
        t = not_null(j_49);
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
  ATerm p_49 = NULL;
  p_49 = t;
  t = SSL_implode_string(not_null(p_49));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm w_38 = t;
  int a_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(a_39);
    }
  else
    {
      t = w_38;
      {
        ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
        u_49 = t;
        t_49 :
        if(((ATgetType(u_49) == AT_LIST) && !(ATisEmpty(u_49))))
          {
            v_49 = ATgetFirst((ATermList) u_49);
            w_49 = (ATerm) ATgetNext((ATermList) u_49);
            {
              t = not_null(v_49);
              {
                ATerm o_7 (ATerm t)
                {
                  t = not_null(w_49);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, o_7);
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
  ATerm g_50 = NULL;
  ATerm i_50 = NULL;
  g_50 = t;
  {
    ATerm j_50 = NULL;
    ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
    t = not_null(g_50);
    {
      j_50 = t;
      {
        t = SSL_explode_term(not_null(j_50));
        {
          l_50 = t;
          e_50 :
          if(match_cons(l_50, sym__2))
            {
              m_50 = ATgetArgument(l_50, 0);
              n_50 = ATgetArgument(l_50, 1);
              f_50 :
              if(match_string(m_50, ""))
                {
                  if(((i_50 != NULL) && (i_50 != n_50)))
                    _fail(n_50);
                  else
                    i_50 = n_50;
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
      t = not_null(i_50);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm p_69 (ATerm))
{
  ATerm r_50 (ATerm t)
  {
    ATerm b_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_50);
        ;
        LocalPopChoice(c_39);
      }
    else
      {
        t = b_39;
        {
          t = Nil_0(t);
          t = p_69(t);
        }
      }
    return(t);
  }
  t = r_50(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
  u_50 = t;
  t_50 :
  if(match_cons(u_50, sym__2))
    {
      v_50 = ATgetArgument(u_50, 0);
      w_50 = ATgetArgument(u_50, 1);
      {
        t = not_null(v_50);
        {
          ATerm p_7 (ATerm t)
          {
            t = not_null(w_50);
            return(t);
          }
          t = at_end_1(t, p_7);
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
  ATerm d_39 = t;
  int f_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(f_39);
    }
  else
    {
      t = d_39;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm b_51 = NULL;
  b_51 = t;
  t = SSL_explode_string(not_null(b_51));
  return(t);
}
ATerm _2 (ATerm t, ATerm h_55 (ATerm), ATerm i_55 (ATerm))
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL;
  k_51 = t;
  j_51 :
  if(match_cons(k_51, sym__2))
    {
      l_51 = ATgetArgument(k_51, 0);
      m_51 = ATgetArgument(k_51, 1);
      {
        ATerm q_51 = NULL,s_51 = NULL;
        ATerm r_51 = NULL;
        t = SSLgetAnnotations(not_null(k_51));
        {
          r_51 = t;
          if(((q_51 != NULL) && (q_51 != r_51)))
            _fail(r_51);
          else
            q_51 = r_51;
        }
        {
          t = not_null(l_51);
          {
            ATerm u_51 = NULL;
            t = h_55(t);
            {
              s_51 = t;
              {
                t = not_null(m_51);
                {
                  ATerm w_51 = NULL;
                  t = i_55(t);
                  {
                    u_51 = t;
                    {
                      ATerm x_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(s_51), not_null(u_51)), not_null(q_51));
                      {
                        x_51 = t;
                        if(((w_51 != NULL) && (w_51 != x_51)))
                          _fail(x_51);
                        else
                          w_51 = x_51;
                      }
                      t = not_null(w_51);
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
ATerm debug_1 (ATerm t, ATerm t_64 (ATerm))
{
  ATerm g_39;
  g_39 = t;
  {
    ATerm f_52 = NULL,h_52 = NULL;
    ATerm k_39;
    k_39 = t;
    {
      ATerm g_52 = NULL;
      t = t_64(t);
      {
        g_52 = t;
        if(((f_52 != NULL) && (f_52 != g_52)))
          _fail(g_52);
        else
          f_52 = g_52;
      }
    }
    t = k_39;
    {
      ATerm i_52 = NULL;
      i_52 = t;
      if(((h_52 != NULL) && (h_52 != i_52)))
        _fail(i_52);
      else
        h_52 = i_52;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_52)), not_null(f_52)));
        t = printnl_0(t);
      }
    }
  }
  t = g_39;
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_69 (ATerm))
{
  ATerm l_52 (ATerm t)
  {
    ATerm l_39 = t;
    int m_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(m_39);
      }
    else
      {
        t = l_39;
        t = Cons_2(t, a_69, l_52);
      }
    return(t);
  }
  t = l_52(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_52 = NULL;
  n_52 = t;
  t = SSL_is_string(not_null(n_52));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm n_39 = t;
  int o_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(o_39);
    }
  else
    {
      t = n_39;
      {
        ATerm p_39 = t;
        int r_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_7 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, q_7);
            ;
            LocalPopChoice(r_39);
          }
        else
          {
            t = p_39;
            {
              ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
              w_52 = t;
              v_52 :
              if(match_cons(w_52, sym_Path_1))
                {
                  x_52 = ATgetArgument(w_52, 0);
                  t = not_null(x_52);
                }
              else
                {
                  if(match_cons(w_52, sym_Var_1))
                    {
                      x_52 = ATgetArgument(w_52, 0);
                      {
                        t = not_null(x_52);
                        {
                          ATerm s_39 = t;
                          int x_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(x_39);
                            }
                          else
                            {
                              t = s_39;
                              {
                                ATerm s_7 (ATerm t)
                                {
                                  t = term_y_39;
                                  return(t);
                                }
                                t = debug_1(t, s_7);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(w_52, sym_Prefix_2))
                        {
                          x_52 = ATgetArgument(w_52, 0);
                          y_52 = ATgetArgument(w_52, 1);
                          {
                            ATerm e_53 = NULL,g_53 = NULL;
                            ATerm b_40;
                            b_40 = t;
                            {
                              ATerm f_53 = NULL;
                              t = not_null(x_52);
                              {
                                t = eval_config_0(t);
                                {
                                  f_53 = t;
                                  if(((e_53 != NULL) && (e_53 != f_53)))
                                    _fail(f_53);
                                  else
                                    e_53 = f_53;
                                }
                              }
                            }
                            t = b_40;
                            {
                              ATerm h_53 = NULL;
                              t = not_null(y_52);
                              {
                                t = eval_config_0(t);
                                {
                                  h_53 = t;
                                  if(((g_53 != NULL) && (g_53 != h_53)))
                                    _fail(h_53);
                                  else
                                    g_53 = h_53;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_53), not_null(g_53));
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
  ATerm p_53 = NULL;
  p_53 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_40, not_null(p_53));
    {
      t = table_get_0(t);
      {
        ATerm t_7 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm d_40;
            d_40 = t;
            {
              ATerm r_53 = NULL;
              ATerm s_53 = NULL;
              s_53 = t;
              if(((r_53 != NULL) && (r_53 != s_53)))
                _fail(s_53);
              else
                r_53 = s_53;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_c_40, not_null(p_53), not_null(r_53));
                t = table_put_0(t);
              }
            }
            t = d_40;
          }
          return(t);
        }
        t = try_1(t, t_7);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_79 (ATerm))
{
  ATerm i_40 = t;
  int j_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_79(t);
      ;
      LocalPopChoice(j_40);
    }
  else
    {
      t = i_40;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
  x_53 = t;
  w_53 :
  if(match_cons(x_53, sym__2))
    {
      y_53 = ATgetArgument(x_53, 0);
      z_53 = ATgetArgument(x_53, 1);
      t = SSL_table_get(not_null(y_53), not_null(z_53));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL;
  g_54 = t;
  f_54 :
  if(match_cons(g_54, sym__3))
    {
      h_54 = ATgetArgument(g_54, 0);
      i_54 = ATgetArgument(g_54, 1);
      j_54 = ATgetArgument(g_54, 2);
      {
        ATerm k_40;
        k_40 = t;
        {
          ATerm n_54 = NULL;
          ATerm o_54 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_54), not_null(i_54));
          {
            ATerm l_40 = t;
            int m_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(m_40);
              }
            else
              {
                t = l_40;
                t = (ATerm) ATempty;
              }
            {
              o_54 = t;
              if(((n_54 != NULL) && (n_54 != o_54)))
                _fail(o_54);
              else
                n_54 = o_54;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_54), not_null(i_54), (ATerm) ATinsert(CheckATermList(not_null(n_54)), not_null(j_54)));
            t = table_put_0(t);
          }
        }
        t = k_40;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_86 (ATerm))
{
  ATerm s_54 = NULL;
  ATerm t_54 = NULL;
  t = term_v_23;
  {
    t = w_86(t);
    {
      t_54 = t;
      if(((s_54 != NULL) && (s_54 != t_54)))
        _fail(t_54);
      else
        s_54 = t_54;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_38, term_k_38, not_null(s_54));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL;
  z_54 = t;
  y_54 :
  if(match_string(z_54, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(z_54) == AT_LIST) && !(ATisEmpty(z_54))))
        {
          a_55 = ATgetFirst((ATermList) z_54);
          b_55 = (ATerm) ATgetNext((ATermList) z_54);
          {
            ATerm e_55 = NULL;
            ATerm n_40;
            n_40 = t;
            {
              t = not_null(a_55);
              t = a_0(t);
            }
            t = n_40;
            {
              ATerm f_55 = NULL;
              t = term_v_23;
              {
                t = b_0(t);
                {
                  f_55 = t;
                  if(((e_55 != NULL) && (e_55 != f_55)))
                    _fail(f_55);
                  else
                    e_55 = f_55;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(b_55)), not_null(e_55));
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
  ATerm u_7 (ATerm t)
  {
    ATerm m_55 = NULL;
    m_55 = t;
    l_55 :
    if(!(match_string(m_55, "--help")))
      {
        if(!(match_string(m_55, "-h")))
          {
            if(!(match_string(m_55, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm v_7 (ATerm t)
  {
    t = term_o_40;
    {
      t = set_config_0(t);
      t = term_r_40;
    }
    return(t);
  }
  ATerm w_7 (ATerm t)
  {
    t = term_s_40;
    return(t);
  }
  t = Option_3(t, u_7, v_7, w_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL;
  p_55 = t;
  o_55 :
  if(((ATgetType(p_55) == AT_LIST) && !(ATisEmpty(p_55))))
    {
      q_55 = ATgetFirst((ATermList) p_55);
      r_55 = (ATerm) ATgetNext((ATermList) p_55);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_55)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_55)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_56 (ATerm), ATerm r_56 (ATerm))
{
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL;
  b_56 = t;
  a_56 :
  if(((ATgetType(b_56) == AT_LIST) && !(ATisEmpty(b_56))))
    {
      c_56 = ATgetFirst((ATermList) b_56);
      d_56 = (ATerm) ATgetNext((ATermList) b_56);
      {
        ATerm h_56 = NULL,j_56 = NULL;
        ATerm i_56 = NULL;
        t = SSLgetAnnotations(not_null(b_56));
        {
          i_56 = t;
          if(((h_56 != NULL) && (h_56 != i_56)))
            _fail(i_56);
          else
            h_56 = i_56;
        }
        {
          t = not_null(c_56);
          {
            ATerm l_56 = NULL;
            t = q_56(t);
            {
              j_56 = t;
              {
                t = not_null(d_56);
                {
                  ATerm n_56 = NULL;
                  t = r_56(t);
                  {
                    l_56 = t;
                    {
                      ATerm o_56 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_56)), not_null(j_56)), not_null(h_56));
                      {
                        o_56 = t;
                        if(((n_56 != NULL) && (n_56 != o_56)))
                          _fail(o_56);
                        else
                          n_56 = o_56;
                      }
                      t = not_null(n_56);
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
  ATerm a_57 = NULL;
  a_57 = t;
  z_56 :
  if(((ATgetType(a_57) == AT_LIST) && ATisEmpty(a_57)))
    {
      {
        ATerm c_57 = NULL,e_57 = NULL;
        ATerm t_40;
        t_40 = t;
        {
          ATerm d_57 = NULL;
          t = SSLgetAnnotations(not_null(a_57));
          {
            d_57 = t;
            if(((c_57 != NULL) && (c_57 != d_57)))
              _fail(d_57);
            else
              c_57 = d_57;
          }
        }
        t = t_40;
        {
          ATerm f_57 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(c_57));
          {
            f_57 = t;
            if(((e_57 != NULL) && (e_57 != f_57)))
              _fail(f_57);
            else
              e_57 = f_57;
          }
          t = not_null(e_57);
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
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL;
  l_57 = t;
  k_57 :
  if(match_cons(l_57, sym__2))
    {
      m_57 = ATgetArgument(l_57, 0);
      n_57 = ATgetArgument(l_57, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_40, not_null(m_57), not_null(n_57));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_86 (ATerm))
{
  ATerm u_40;
  u_40 = t;
  {
    ATerm z_7 (ATerm t)
    {
      t = term_v_40;
      t = u_86(t);
      return(t);
    }
    t = try_1(t, z_7);
  }
  t = u_40;
  {
    ATerm b_8 (ATerm t)
    {
      ATerm v_57 = NULL;
      ATerm w_40;
      w_40 = t;
      {
        ATerm t_57 = NULL;
        ATerm u_57 = NULL;
        u_57 = t;
        if(((t_57 != NULL) && (t_57 != u_57)))
          _fail(u_57);
        else
          t_57 = u_57;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_34, not_null(t_57));
          t = set_config_0(t);
        }
      }
      t = w_40;
      {
        ATerm w_57 = NULL;
        w_57 = t;
        if(((v_57 != NULL) && (v_57 != w_57)))
          _fail(w_57);
        else
          v_57 = w_57;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_57));
      }
      return(t);
    }
    ATerm d_8 (ATerm t)
    {
      ATerm x_40 = t;
      int y_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_40 = t;
          int a_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(a_41);
            }
          else
            {
              t = z_40;
              {
                t = u_86(t);
                t = Cons_2(t, _id, d_8);
              }
            }
          ;
          LocalPopChoice(y_40);
        }
      else
        {
          t = x_40;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_8, d_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL;
  ATerm b_41;
  b_41 = t;
  {
    ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL;
    f_58 = t;
    b_58 :
    if(match_cons(f_58, sym__3))
      {
        g_58 = ATgetArgument(f_58, 0);
        h_58 = ATgetArgument(f_58, 1);
        i_58 = ATgetArgument(f_58, 2);
        {
          if(((c_58 != NULL) && (c_58 != g_58)))
            _fail(g_58);
          else
            c_58 = g_58;
          {
            if(((d_58 != NULL) && (d_58 != h_58)))
              _fail(h_58);
            else
              d_58 = h_58;
            {
              if(((e_58 != NULL) && (e_58 != i_58)))
                _fail(i_58);
              else
                e_58 = i_58;
              t = SSL_table_put(not_null(c_58), not_null(d_58), not_null(e_58));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_41;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_86 (ATerm))
{
  ATerm l_58 = NULL;
  ATerm c_41;
  c_41 = t;
  {
    t = term_h_41;
    t = table_put_0(t);
  }
  t = c_41;
  {
    ATerm e_8 (ATerm t)
    {
      ATerm i_41 = t;
      int j_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_86(t);
          ;
          LocalPopChoice(j_41);
        }
      else
        {
          t = i_41;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_8);
    {
      ATerm f_8 (ATerm t)
      {
        ATerm k_41 = t;
        int l_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_41;
            m_41 = t;
            {
              ATerm n_41 = t;
              int o_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_b_36;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(o_41);
                }
              else
                {
                  t = n_41;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = m_41;
            {
              t = system_usage_0(t);
              {
                t = term_o_30;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(l_41);
          }
        else
          {
            t = k_41;
            {
              ATerm g_8 (ATerm t)
              {
                ATerm h_8 (ATerm t)
                {
                  ATerm m_58 = NULL;
                  m_58 = t;
                  if(((l_58 != NULL) && (l_58 != m_58)))
                    _fail(m_58);
                  else
                    l_58 = m_58;
                  return(t);
                }
                t = Undefined_1(t, h_8);
                return(t);
              }
              t = option_defined_1(t, g_8);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_58)), term_p_41));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_c_9;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, f_8);
      {
        ATerm q_41;
        q_41 = t;
        {
          t = term_j_38;
          t = table_destroy_0(t);
        }
        t = q_41;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm))
{
  t = parse_options_1(t, y_84);
  {
    t = store_options_0(t);
    {
      t = a_85(t);
      {
        ATerm r_41 = t;
        int s_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, z_84);
            ;
            LocalPopChoice(s_41);
          }
        else
          {
            t = r_41;
            {
              ATerm t_41 = t;
              int u_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_85(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(u_41);
                }
              else
                {
                  t = t_41;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm c_85 (ATerm), ATerm d_85 (ATerm))
{
  t = option_wrap_4(t, c_85, default_usage_0, _id, d_85);
  return(t);
}
ATerm io_pptable_diff_0 (ATerm t)
{
  t = option_wrap_2(t, pptable_diff_options_0, pptable_diff_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_pptable_diff_0(t);
  return(t);
}
