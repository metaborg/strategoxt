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
ATerm term_f_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_j_35;
ATerm term_y_34;
ATerm term_j_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_a_34;
ATerm term_l_33;
ATerm term_f_33;
ATerm term_q_31;
ATerm term_o_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_u_30;
ATerm term_s_30;
ATerm term_d_30;
ATerm term_x_29;
ATerm term_o_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_d_28;
ATerm term_t_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_p_25;
ATerm term_l_25;
ATerm term_b_25;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_a_23;
ATerm term_v_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_d_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_o_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_h_20;
ATerm term_v_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_i_17;
ATerm term_c_17;
ATerm term_y_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_g_16;
ATerm term_c_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_d_8;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_n_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
void init_constant_terms (void)
{
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("visamb.pp.af", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.pp.af", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_7, term_t_7, term_u_7);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_8, term_i_8, term_j_8);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_8, term_q_8, term_r_8);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_8, term_v_8, term_w_8);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_8, term_a_9, term_c_9);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_9, term_h_9, term_i_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_9, term_p_9, term_q_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_d_10, term_e_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_m_10, term_n_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_u_10, term_z_10);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_11, term_f_11, term_g_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_n_11, term_o_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_v_11, term_w_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_e_12, term_f_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_m_12, term_n_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_f_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_i_13, term_j_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_u_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_z_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_g_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_n_14, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_v_14, term_w_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_e_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_j_15, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_g_16, term_m_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym__2, term_i_17, term_t_17);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_i_17, term_p_20);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym__2, term_a_23, term_d_22);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_r_22);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_c_17, term_a_26);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_26);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym__2, term_l_26, term_r_22);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym__2, term_d_27, term_r_22);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__2, term_k_31, term_l_31);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__2, term_d_30, term_r_22);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym__3, term_k_31, term_l_31, (ATerm) ATempty);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Vis-amb", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm xtc_transform_1 (ATerm, ATerm f_83 (ATerm));
ATerm build_pp_tables_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm h_65 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm n_83 (ATerm), ATerm o_83 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm signal_to_descr_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm l_69 (ATerm));
ATerm signal_from_number_0 (ATerm);
ATerm warn_ifsignaled_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_2 (ATerm, ATerm u_63 (ATerm), ATerm v_63 (ATerm));
ATerm fork_and_wait_1 (ATerm, ATerm w_63 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm q_80 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm r_76 (ATerm));
ATerm repeat_1 (ATerm, ATerm l_78 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm x_64 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm p_80 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm r_80 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm f_73 (ATerm), ATerm g_73 (ATerm));
ATerm union_1 (ATerm, ATerm b_73 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm a_81 (ATerm));
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
ATerm xtc_command_1 (ATerm, ATerm e_83 (ATerm));
ATerm assert_1 (ATerm, ATerm p_79 (ATerm));
ATerm obsolete_1 (ATerm, ATerm a_65 (ATerm));
ATerm open_file_0 (ATerm);
ATerm access_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm r_61 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm g_83 (ATerm), ATerm h_83 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm m_79 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm h_80 (ATerm), ATerm i_80 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm l_79 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm q_82 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm r_82 (ATerm));
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
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm o_75 (ATerm), ATerm p_75 (ATerm));
ATerm crush_2 (ATerm, ATerm m_73 (ATerm), ATerm n_73 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_80 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_84 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_86 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_86 (ATerm));
ATerm Program_1 (ATerm, ATerm y_61 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm j_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_85 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm p_69 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm i_55 (ATerm), ATerm j_55 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_64 (ATerm));
ATerm map_1 (ATerm, ATerm a_69 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_86 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_56 (ATerm), ATerm s_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_86 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_86 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm y_84 (ATerm), ATerm z_84 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm v_82 (ATerm), ATerm w_82 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm u_82 (ATerm));
ATerm main_visamb_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_transform_1 (ATerm t, ATerm f_83 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, f_83, c_0);
  return(t);
}
ATerm build_pp_tables_0 (ATerm t)
{
  ATerm f_0 = NULL,x_0 = NULL;
  ATerm y_6;
  y_6 = t;
  {
    ATerm w_0 = NULL;
    t = term_c_7;
    {
      t = xtc_find_0(t);
      {
        w_0 = t;
        if(((f_0 != NULL) && (f_0 != w_0)))
          _fail(w_0);
        else
          f_0 = w_0;
      }
    }
  }
  t = y_6;
  {
    ATerm y_0 = NULL;
    t = term_d_7;
    {
      t = xtc_find_0(t);
      {
        y_0 = t;
        if(((x_0 != NULL) && (x_0 != y_0)))
          _fail(y_0);
        else
          x_0 = y_0;
      }
    }
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_0)), term_e_7), not_null(f_0)), term_e_7);
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL;
  z_1 = t;
  y_1 :
  if(match_cons(z_1, sym_stdin_0))
    {
      ATerm s_2 = NULL;
      ATerm t_2 = NULL;
      t = term_g_7;
      {
        t = ReadFromFile_0(t);
        {
          t_2 = t;
          if(((s_2 != NULL) && (s_2 != t_2)))
            _fail(t_2);
          else
            s_2 = t_2;
        }
      }
      t = not_null(s_2);
    }
  else
    {
      if(match_cons(z_1, sym_FILE_1))
        {
          a_2 = ATgetArgument(z_1, 0);
          {
            ATerm y_2 = NULL;
            ATerm z_2 = NULL;
            t = not_null(a_2);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  z_2 = t;
                  if(((y_2 != NULL) && (y_2 != z_2)))
                    _fail(z_2);
                  else
                    y_2 = z_2;
                }
              }
            }
            t = not_null(y_2);
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
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL;
  i_3 = t;
  g_3 :
  if(match_cons(i_3, sym__2))
    {
      j_3 = ATgetArgument(i_3, 0);
      l_3 = ATgetArgument(i_3, 1);
      h_3 :
      if(match_cons(j_3, sym_Stream_1))
        {
          k_3 = ATgetArgument(j_3, 0);
          {
            ATerm o_3 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(k_3), not_null(l_3));
            {
              ATerm p_3 = NULL;
              p_3 = t;
              if(((o_3 != NULL) && (o_3 != p_3)))
                _fail(p_3);
              else
                o_3 = p_3;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_3));
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
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
  w_3 = t;
  v_3 :
  if(match_cons(w_3, sym__2))
    {
      x_3 = ATgetArgument(w_3, 0);
      y_3 = ATgetArgument(w_3, 1);
      {
        ATerm b_4 = NULL,d_4 = NULL;
        t = not_null(x_3);
        {
          ATerm c_4 = NULL;
          c_4 = t;
          if(((b_4 != NULL) && (b_4 != c_4)))
            _fail(c_4);
          else
            b_4 = c_4;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_4), term_h_7);
            {
              t = open_stream_0(t);
              {
                ATerm e_4 = NULL;
                e_4 = t;
                if(((d_4 != NULL) && (d_4 != e_4)))
                  _fail(e_4);
                else
                  d_4 = e_4;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_4), not_null(y_3));
                  {
                    t = h_65(t);
                    {
                      t = fclose_0(t);
                      t = not_null(y_3);
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
  ATerm k_4 = NULL;
  ATerm m_4 = NULL;
  k_4 = t;
  {
    ATerm n_4 = NULL;
    t = xtc_new_file_0(t);
    {
      n_4 = t;
      {
        if(((m_4 != NULL) && (m_4 != n_4)))
          _fail(n_4);
        else
          m_4 = n_4;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_4), not_null(k_4));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(m_4);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_4));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm n_83 (ATerm), ATerm o_83 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, n_83, o_83);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm r_4 = NULL;
  r_4 = t;
  t = SSL_close_file(not_null(r_4));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  v_4 :
  if(match_cons(w_4, sym__2))
    {
      x_4 = ATgetArgument(w_4, 0);
      y_4 = ATgetArgument(w_4, 1);
      t = SSL_execvp(not_null(x_4), not_null(y_4));
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
  ATerm d_5 = NULL;
  d_5 = t;
  t = SSL_int_to_string(not_null(d_5));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
  l_5 = t;
  k_5 :
  if(match_cons(l_5, sym_UnknownSignal_1))
    {
      m_5 = ATgetArgument(l_5, 0);
      {
        ATerm q_5 = NULL;
        ATerm r_5 = NULL;
        t = not_null(m_5);
        {
          t = int_to_string_0(t);
          {
            r_5 = t;
            if(((q_5 != NULL) && (q_5 != r_5)))
              _fail(r_5);
            else
              q_5 = r_5;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_7), not_null(q_5)), term_i_7);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(l_5, sym_Signal_3))
        {
          m_5 = ATgetArgument(l_5, 0);
          n_5 = ATgetArgument(l_5, 1);
          o_5 = ATgetArgument(l_5, 2);
          {
            ATerm v_5 = NULL;
            ATerm w_5 = NULL;
            t = not_null(n_5);
            {
              t = int_to_string_0(t);
              {
                w_5 = t;
                if(((v_5 != NULL) && (v_5 != w_5)))
                  _fail(w_5);
                else
                  v_5 = w_5;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_5)), term_n_7), not_null(v_5)), term_k_7), not_null(m_5));
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
  ATerm c_6 = NULL;
  ATerm e_0 (ATerm t)
  {
    ATerm d_6 = NULL;
    t = l_69(t);
    {
      d_6 = t;
      if(((c_6 != NULL) && (c_6 != d_6)))
        _fail(d_6);
      else
        c_6 = d_6;
    }
    return(t);
  }
  t = fetch_1(t, e_0);
  t = not_null(c_6);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm i_6 = NULL;
  i_6 = t;
  {
    ATerm p_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_16), term_x_15), term_t_15), term_n_15), term_f_15), term_z_14), term_p_14), term_h_14), term_d_14), term_w_13), term_p_13), term_g_13), term_y_12), term_o_12), term_g_12), term_b_12), term_t_11), term_j_11), term_a_11), term_s_10), term_f_10), term_r_9), term_l_9), term_f_9), term_x_8), term_s_8), term_k_8), term_v_7);
        {
          ATerm h_0 (ATerm t)
          {
            ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
            k_6 = t;
            h_6 :
            if(match_cons(k_6, sym_Signal_3))
              {
                l_6 = ATgetArgument(k_6, 0);
                m_6 = ATgetArgument(k_6, 1);
                n_6 = ATgetArgument(k_6, 2);
                if(((i_6 != NULL) && (i_6 != m_6)))
                  _fail(m_6);
                else
                  i_6 = m_6;
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
        LocalPopChoice(r_7);
      }
    else
      {
        t = p_7;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(i_6));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm o_16;
  o_16 = t;
  {
    ATerm p_0 (ATerm t)
    {
      ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL;
      u_6 = t;
      t_6 :
      if(match_cons(u_6, sym_WaitStatus_3))
        {
          v_6 = ATgetArgument(u_6, 0);
          w_6 = ATgetArgument(u_6, 1);
          x_6 = ATgetArgument(u_6, 2);
          {
            ATerm a_7 = NULL;
            t = not_null(w_6);
            {
              ATerm p_16 = t;
              if((PushChoice() == 0))
                {
                  ATerm z_6 = NULL;
                  z_6 = t;
                  r_6 :
                  if(!(match_int(z_6, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = p_16;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm b_7 = NULL;
                    b_7 = t;
                    if(((a_7 != NULL) && (a_7 != b_7)))
                      _fail(b_7);
                    else
                      a_7 = b_7;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_7)), term_y_16));
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
  t = o_16;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm f_7 = NULL;
  f_7 = t;
  t = SSL_waitpid(not_null(f_7));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm u_63 (ATerm), ATerm v_63 (ATerm))
{
  ATerm m_7 = NULL;
  ATerm o_7 = NULL;
  m_7 = t;
  {
    t = fork_0(t);
    {
      o_7 = t;
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_7 = NULL;
            q_7 = t;
            l_7 :
            if(match_int(q_7, 0))
              {
                t = not_null(m_7);
                t = u_63(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_7), not_null(m_7));
              t = v_63(t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm w_63 (ATerm))
{
  ATerm z_7 = NULL;
  ATerm q_0 (ATerm t)
  {
    ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
    a_8 = t;
    y_7 :
    if(match_cons(a_8, sym__2))
      {
        b_8 = ATgetArgument(a_8, 0);
        c_8 = ATgetArgument(a_8, 1);
        {
          ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
          if(((z_7 != NULL) && (z_7 != c_8)))
            _fail(c_8);
          else
            z_7 = c_8;
          {
            t = not_null(b_8);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  e_8 = t;
                  w_7 :
                  if(match_cons(e_8, sym_WaitStatus_3))
                    {
                      f_8 = ATgetArgument(e_8, 0);
                      g_8 = ATgetArgument(e_8, 1);
                      h_8 = ATgetArgument(e_8, 2);
                      x_7 :
                      if(match_int(f_8, 0))
                        {
                          t = not_null(z_7);
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
  t = fork_2(t, w_63, q_0);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
  m_8 = t;
  l_8 :
  if(match_cons(m_8, sym__2))
    {
      n_8 = ATgetArgument(m_8, 0);
      o_8 = ATgetArgument(m_8, 1);
      {
        ATerm r_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_8), not_null(o_8));
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
  ATerm t_8 = NULL;
  t_8 = t;
  t = SSL_table_keys(not_null(t_8));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm z_8 = NULL;
  z_8 = t;
  {
    t = table_keys_0(t);
    {
      ATerm s_0 (ATerm t)
      {
        ATerm b_9 = NULL;
        ATerm d_9 = NULL;
        b_9 = t;
        {
          ATerm e_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_8), not_null(b_9));
          {
            t = table_get_0(t);
            {
              e_9 = t;
              if(((d_9 != NULL) && (d_9 != e_9)))
                _fail(e_9);
              else
                d_9 = e_9;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_9), not_null(d_9));
        }
        return(t);
      }
      t = map_1(t, s_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm q_80 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm b_17;
    b_17 = t;
    {
      ATerm j_9 = NULL;
      ATerm k_9 = NULL;
      t = term_c_17;
      {
        t = get_config_0(t);
        {
          k_9 = t;
          if(((j_9 != NULL) && (j_9 != k_9)))
            _fail(k_9);
          else
            j_9 = k_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_9), term_j_15);
        t = geq_0(t);
      }
    }
    t = b_17;
    t = q_80(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm h_17;
  h_17 = t;
  {
    ATerm n_9 = NULL;
    ATerm o_9 = NULL;
    o_9 = t;
    if(((n_9 != NULL) && (n_9 != o_9)))
      _fail(o_9);
    else
      n_9 = o_9;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_16, not_null(n_9));
      t = printnl_0(t);
    }
  }
  t = h_17;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm u_9 = NULL;
  ATerm w_9 = NULL,x_9 = NULL;
  u_9 = t;
  {
    ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATmakeAppl(sym_Tool_1, not_null(u_9)));
    {
      t = table_get_0(t);
      {
        y_9 = t;
        s_9 :
        if(((ATgetType(y_9) == AT_LIST) && !(ATisEmpty(y_9))))
          {
            z_9 = ATgetFirst((ATermList) y_9);
            c_10 = (ATerm) ATgetNext((ATermList) y_9);
            t_9 :
            if(match_cons(z_9, sym__2))
              {
                a_10 = ATgetArgument(z_9, 0);
                b_10 = ATgetArgument(z_9, 1);
                {
                  if(((w_9 != NULL) && (w_9 != a_10)))
                    _fail(a_10);
                  else
                    w_9 = a_10;
                  if(((x_9 != NULL) && (x_9 != b_10)))
                    _fail(b_10);
                  else
                    x_9 = b_10;
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
    t = not_null(x_9);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
  j_10 = t;
  i_10 :
  if(match_cons(j_10, sym__2))
    {
      k_10 = ATgetArgument(j_10, 0);
      l_10 = ATgetArgument(j_10, 1);
      {
        ATerm o_10 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_10)));
        {
          t = table_get_0(t);
          {
            ATerm u_0 (ATerm t)
            {
              ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
              p_10 = t;
              h_10 :
              if(match_cons(p_10, sym__2))
                {
                  q_10 = ATgetArgument(p_10, 0);
                  r_10 = ATgetArgument(p_10, 1);
                  {
                    if(((l_10 != NULL) && (l_10 != q_10)))
                      _fail(q_10);
                    else
                      l_10 = q_10;
                    if(((o_10 != NULL) && (o_10 != r_10)))
                      _fail(r_10);
                    else
                      o_10 = r_10;
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
        t = not_null(o_10);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm r_76 (ATerm))
{
  ATerm j_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(m_17);
    }
  else
    {
      t = j_17;
      {
        ATerm n_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = filter_1(t, r_76);
              return(t);
            }
            t = Cons_2(t, r_76, v_0);
            ;
            LocalPopChoice(o_17);
          }
        else
          {
            t = n_17;
            {
              ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
              w_10 = t;
              v_10 :
              if(((ATgetType(w_10) == AT_LIST) && !(ATisEmpty(w_10))))
                {
                  x_10 = ATgetFirst((ATermList) w_10);
                  y_10 = (ATerm) ATgetNext((ATermList) w_10);
                  {
                    t = not_null(y_10);
                    t = filter_1(t, r_76);
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
ATerm repeat_1 (ATerm t, ATerm l_78 (ATerm))
{
  ATerm b_11 (ATerm t)
  {
    ATerm z_0 (ATerm t)
    {
      t = l_78(t);
      t = b_11(t);
      return(t);
    }
    t = try_1(t, z_0);
    return(t);
  }
  t = b_11(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm q_17;
  q_17 = t;
  {
    ATerm a_1 (ATerm t)
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
    t = repeat_1(t, a_1);
  }
  t = q_17;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm x_17;
  x_17 = t;
  {
    ATerm d_11 = NULL;
    ATerm e_11 = NULL;
    e_11 = t;
    if(((d_11 != NULL) && (d_11 != e_11)))
      _fail(e_11);
    else
      d_11 = e_11;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATempty, not_null(d_11)));
      t = printnl_0(t);
    }
  }
  t = x_17;
  return(t);
}
ATerm say_1 (ATerm t, ATerm x_64 (ATerm))
{
  ATerm y_17;
  y_17 = t;
  {
    t = x_64(t);
    t = debug_0(t);
  }
  t = y_17;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm p_80 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm z_17;
    z_17 = t;
    {
      ATerm h_11 = NULL;
      ATerm i_11 = NULL;
      t = term_c_17;
      {
        t = get_config_0(t);
        {
          i_11 = t;
          if(((h_11 != NULL) && (h_11 != i_11)))
            _fail(i_11);
          else
            h_11 = i_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_11), term_n_11);
        t = geq_0(t);
      }
    }
    t = z_17;
    t = p_80(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm r_80 (ATerm))
{
  ATerm c_1 (ATerm t)
  {
    ATerm c_18;
    c_18 = t;
    {
      ATerm l_11 = NULL;
      ATerm m_11 = NULL;
      t = term_c_17;
      {
        t = get_config_0(t);
        {
          m_11 = t;
          if(((l_11 != NULL) && (l_11 != m_11)))
            _fail(m_11);
          else
            l_11 = m_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_11), term_v_8);
        t = geq_0(t);
      }
    }
    t = c_18;
    t = r_80(t);
    return(t);
  }
  t = try_1(t, c_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
  q_11 = t;
  p_11 :
  if(match_cons(q_11, sym__2))
    {
      r_11 = ATgetArgument(q_11, 0);
      s_11 = ATgetArgument(q_11, 1);
      if(((r_11 != NULL) && (r_11 != s_11)))
        _fail(s_11);
      else
        r_11 = s_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm f_73 (ATerm), ATerm g_73 (ATerm))
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  x_11 :
  if(((ATgetType(y_11) == AT_LIST) && !(ATisEmpty(y_11))))
    {
      z_11 = ATgetFirst((ATermList) y_11);
      a_12 = (ATerm) ATgetNext((ATermList) y_11);
      {
        t = g_73(t);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm d_12 = NULL;
            d_12 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_11), not_null(d_12));
              t = f_73(t);
            }
            return(t);
          }
          t = fetch_1(t, d_1);
        }
        t = not_null(a_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm b_73 (ATerm))
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym__2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      {
        t = not_null(k_12);
        {
          ATerm p_12 (ATerm t)
          {
            ATerm d_18 = t;
            int e_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(l_12);
                ;
                LocalPopChoice(e_18);
              }
            else
              {
                t = d_18;
                {
                  ATerm j_18 = t;
                  int k_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_1 (ATerm t)
                      {
                        t = not_null(l_12);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_73, e_1);
                      t = p_12(t);
                      ;
                      LocalPopChoice(k_18);
                    }
                  else
                    {
                      t = j_18;
                      t = Cons_2(t, _id, p_12);
                    }
                }
              }
            return(t);
          }
          t = p_12(t);
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
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
  u_12 = t;
  t_12 :
  if(match_cons(u_12, sym__3))
    {
      v_12 = ATgetArgument(u_12, 0);
      w_12 = ATgetArgument(u_12, 1);
      x_12 = ATgetArgument(u_12, 2);
      {
        ATerm l_18;
        l_18 = t;
        {
          ATerm b_13 = NULL;
          ATerm c_13 = NULL,e_13 = NULL;
          ATerm d_13 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_12), not_null(w_12));
          {
            ATerm m_18 = t;
            int n_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(n_18);
              }
            else
              {
                t = m_18;
                t = (ATerm) ATempty;
              }
            {
              d_13 = t;
              if(((c_13 != NULL) && (c_13 != d_13)))
                _fail(d_13);
              else
                c_13 = d_13;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_13), not_null(x_12));
            {
              t = union_0(t);
              {
                e_13 = t;
                if(((b_13 != NULL) && (b_13 != e_13)))
                  _fail(e_13);
                else
                  b_13 = e_13;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_12), not_null(w_12), not_null(b_13));
            t = set_0(t);
          }
        }
        t = l_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm a_81 (ATerm))
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  m_13 = t;
  l_13 :
  if(match_cons(m_13, sym__2))
    {
      n_13 = ATgetArgument(m_13, 0);
      o_13 = ATgetArgument(m_13, 1);
      {
        t = not_null(o_13);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
            r_13 = t;
            k_13 :
            if(match_cons(r_13, sym__2))
              {
                s_13 = ATgetArgument(r_13, 0);
                t_13 = ATgetArgument(r_13, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(n_13), not_null(s_13), not_null(t_13));
                  t = a_81(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, f_1);
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
  ATerm b_14 = NULL,c_14 = NULL;
  ATerm i_14 (ATerm t)
  {
    t = SSL_fclose(not_null(c_14));
    return(t);
  }
  c_14 = t;
  a_14 :
  if(match_cons(c_14, sym_Stream_1))
    {
      b_14 = ATgetArgument(c_14, 0);
      {
        ATerm t_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(b_14));
            ;
            LocalPopChoice(u_18);
          }
        else
          {
            t = t_18;
            t = i_14(t);
          }
      }
    }
  else
    {
      t = i_14(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL;
  l_14 = t;
  k_14 :
  if(match_cons(l_14, sym_Stream_1))
    {
      m_14 = ATgetArgument(l_14, 0);
      t = SSL_read_term_from_stream(not_null(m_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
  s_14 = t;
  r_14 :
  if(match_cons(s_14, sym__2))
    {
      t_14 = ATgetArgument(s_14, 0);
      u_14 = ATgetArgument(s_14, 1);
      {
        ATerm x_14 = NULL;
        t = SSL_fopen(not_null(t_14), not_null(u_14));
        {
          ATerm y_14 = NULL;
          y_14 = t;
          if(((x_14 != NULL) && (x_14 != y_14)))
            _fail(y_14);
          else
            x_14 = y_14;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_14));
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
  ATerm c_15 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm d_15 = NULL;
    d_15 = t;
    if(((c_15 != NULL) && (c_15 != d_15)))
      _fail(d_15);
    else
      c_15 = d_15;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_15));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm g_15 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm h_15 = NULL;
    h_15 = t;
    if(((g_15 != NULL) && (g_15 != h_15)))
      _fail(h_15);
    else
      g_15 = h_15;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_15));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm k_15 = NULL;
  t = SSL_stderr_stream();
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
ATerm stdio_stream_0 (ATerm t)
{
  ATerm r_15 = NULL;
  r_15 = t;
  q_15 :
  if(match_cons(r_15, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(r_15, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(r_15, sym_stdin_0))
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
  ATerm b_16 = NULL;
  ATerm d_16 = NULL,e_16 = NULL;
  b_16 = t;
  {
    ATerm f_16 = NULL;
    ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
    t = not_null(b_16);
    {
      f_16 = t;
      {
        t = SSL_explode_term(not_null(f_16));
        {
          h_16 = t;
          y_15 :
          if(match_cons(h_16, sym__2))
            {
              i_16 = ATgetArgument(h_16, 0);
              j_16 = ATgetArgument(h_16, 1);
              z_15 :
              if(match_string(i_16, ""))
                {
                  a_16 :
                  if(((ATgetType(j_16) == AT_LIST) && !(ATisEmpty(j_16))))
                    {
                      k_16 = ATgetFirst((ATermList) j_16);
                      l_16 = (ATerm) ATgetNext((ATermList) j_16);
                      {
                        if(((e_16 != NULL) && (e_16 != k_16)))
                          _fail(k_16);
                        else
                          e_16 = k_16;
                        if(((d_16 != NULL) && (d_16 != l_16)))
                          _fail(l_16);
                        else
                          d_16 = l_16;
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
    t = not_null(e_16);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
  t_16 = t;
  s_16 :
  if(match_cons(t_16, sym__2))
    {
      u_16 = ATgetArgument(t_16, 0);
      v_16 = ATgetArgument(t_16, 1);
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            {
              ATerm e_19 = t;
              int f_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_1 (ATerm t)
                  {
                    ATerm w_16 = NULL,x_16 = NULL;
                    w_16 = t;
                    r_16 :
                    if(match_cons(w_16, sym_Path_1))
                      {
                        x_16 = ATgetArgument(w_16, 0);
                        t = not_null(x_16);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, g_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(f_19);
                }
              else
                {
                  t = e_19;
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
  ATerm f_17 = NULL;
  ATerm g_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_17 = NULL;
      ATerm e_17 = NULL;
      e_17 = t;
      if(((d_17 != NULL) && (d_17 != e_17)))
        _fail(e_17);
      else
        d_17 = e_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_17), term_q_19);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = g_19;
      {
        ATerm h_1 (ATerm t)
        {
          t = term_r_19;
          return(t);
        }
        t = debug_1(t, h_1);
        _fail(t);
      }
    }
  {
    ATerm s_19;
    s_19 = t;
    {
      ATerm g_17 = NULL;
      t = read_from_stream_0(t);
      {
        g_17 = t;
        if(((f_17 != NULL) && (f_17 != g_17)))
          _fail(g_17);
        else
          f_17 = g_17;
      }
    }
    t = s_19;
    {
      t = fclose_0(t);
      t = not_null(f_17);
    }
  }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm k_17 = NULL;
  ATerm l_17 = NULL;
  l_17 = t;
  if(((k_17 != NULL) && (k_17 != l_17)))
    _fail(l_17);
  else
    k_17 = l_17;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), (ATerm) ATinsert(ATempty, term_v_19));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(b_20);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = a_20;
      {
        ATerm c_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_20 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_20;
              }
            {
              ATerm i_1 (ATerm t)
              {
                t = term_h_20;
                return(t);
              }
              t = debug_1(t, i_1);
            }
            ;
            LocalPopChoice(d_20);
          }
        else
          {
            t = c_20;
            {
              ATerm j_1 (ATerm t)
              {
                t = term_k_20;
                return(t);
              }
              t = debug_1(t, j_1);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm p_17 = NULL;
  ATerm r_17 = NULL;
  p_17 = t;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm l_1 (ATerm t)
      {
        t = term_l_20;
        return(t);
      }
      t = debug_1(t, l_1);
      return(t);
    }
    t = if_verbose5_1(t, k_1);
    {
      ATerm m_20 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATmakeAppl(sym_Imported_1, not_null(p_17)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_20;
        }
      {
        ATerm o_20;
        o_20 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_17, term_p_20, (ATerm) ATinsert(ATempty, not_null(p_17)));
          t = table_put_0(t);
        }
        t = o_20;
        {
          ATerm m_1 (ATerm t)
          {
            ATerm n_1 (ATerm t)
            {
              t = term_q_20;
              return(t);
            }
            t = debug_1(t, n_1);
            return(t);
          }
          t = if_verbose4_1(t, m_1);
          {
            t = read_repository_file_0(t);
            {
              ATerm o_1 (ATerm t)
              {
                ATerm p_1 (ATerm t)
                {
                  t = term_r_20;
                  return(t);
                }
                t = say_1(t, p_1);
                return(t);
              }
              t = if_verbose6_1(t, o_1);
              {
                ATerm s_17 = NULL;
                s_17 = t;
                if(((r_17 != NULL) && (r_17 != s_17)))
                  _fail(s_17);
                else
                  r_17 = s_17;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_17, not_null(r_17));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm q_1 (ATerm t)
                      {
                        ATerm r_1 (ATerm t)
                        {
                          t = term_s_20;
                          return(t);
                        }
                        t = say_1(t, r_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, q_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_i_17, (ATerm)ATmakeAppl(sym_Imported_1, not_null(p_17)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm s_1 (ATerm t)
                            {
                              ATerm t_1 (ATerm t)
                              {
                                t = term_r_20;
                                return(t);
                              }
                              t = say_1(t, t_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, s_1);
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
  ATerm w_17 = NULL;
  w_17 = t;
  t = SSL_getenv(not_null(w_17));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_20;
      t = get_config_0(t);
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_20;
            t = getenv_0(t);
            ;
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm v_1 (ATerm t)
    {
      t = term_z_20;
      return(t);
    }
    t = debug_1(t, v_1);
    return(t);
  }
  t = if_verbose5_1(t, u_1);
  {
    ATerm a_21;
    a_21 = t;
    {
      ATerm c_21 = t;
      int d_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_e_21;
          t = table_get_0(t);
          ;
          LocalPopChoice(d_21);
        }
      else
        {
          t = c_21;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = a_21;
    {
      ATerm w_1 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          t = term_f_21;
          return(t);
        }
        t = debug_1(t, x_1);
        return(t);
      }
      t = if_verbose5_1(t, w_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm c_2 (ATerm t)
        {
          t = term_o_21;
          return(t);
        }
        t = debug_1(t, c_2);
        return(t);
      }
      t = if_verbose5_1(t, b_2);
      {
        t = xtc_load_0(t);
        {
          ATerm q_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(r_21);
            }
          else
            {
              t = q_21;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm d_2 (ATerm t)
            {
              ATerm e_2 (ATerm t)
              {
                t = term_o_21;
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
      t = k_21;
      {
        ATerm a_18 = NULL;
        ATerm b_18 = NULL;
        b_18 = t;
        if(((a_18 != NULL) && (a_18 != b_18)))
          _fail(b_18);
        else
          a_18 = b_18;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_21), not_null(a_18)), term_v_21);
          {
            t = error_0(t);
            {
              ATerm f_2 (ATerm t)
              {
                t = term_i_17;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm g_2 (ATerm t)
                    {
                      t = term_x_21;
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
ATerm xtc_command_1 (ATerm t, ATerm e_83 (ATerm))
{
  ATerm f_18 = NULL;
  ATerm y_21;
  y_21 = t;
  {
    ATerm g_18 = NULL;
    t = e_83(t);
    {
      t = xtc_find_warning_0(t);
      {
        g_18 = t;
        if(((f_18 != NULL) && (f_18 != g_18)))
          _fail(g_18);
        else
          f_18 = g_18;
      }
    }
  }
  t = y_21;
  {
    ATerm z_21;
    z_21 = t;
    {
      ATerm h_18 = NULL;
      ATerm i_18 = NULL;
      i_18 = t;
      if(((h_18 != NULL) && (h_18 != i_18)))
        _fail(i_18);
      else
        h_18 = i_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_18), not_null(h_18));
        t = call_0(t);
      }
    }
    t = z_21;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm p_79 (ATerm))
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  p_18 :
  if(match_cons(q_18, sym__2))
    {
      r_18 = ATgetArgument(q_18, 0);
      s_18 = ATgetArgument(q_18, 1);
      {
        ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
        ATerm a_22;
        a_22 = t;
        {
          ATerm y_18 = NULL;
          ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
          t = p_79(t);
          {
            y_18 = t;
            {
              if(((v_18 != NULL) && (v_18 != y_18)))
                _fail(y_18);
              else
                v_18 = y_18;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(v_18), not_null(r_18), not_null(s_18));
                {
                  t = table_push_0(t);
                  {
                    ATerm b_22 = t;
                    int c_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_18), term_d_22);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(c_22);
                      }
                    else
                      {
                        t = b_22;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      z_18 = t;
                      o_18 :
                      if(((ATgetType(z_18) == AT_LIST) && !(ATisEmpty(z_18))))
                        {
                          a_19 = ATgetFirst((ATermList) z_18);
                          b_19 = (ATerm) ATgetNext((ATermList) z_18);
                          {
                            if(((w_18 != NULL) && (w_18 != a_19)))
                              _fail(a_19);
                            else
                              w_18 = a_19;
                            {
                              if(((x_18 != NULL) && (x_18 != b_19)))
                                _fail(b_19);
                              else
                                x_18 = b_19;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(v_18), term_d_22, (ATerm) ATinsert(CheckATermList(not_null(x_18)), (ATerm) ATinsert(CheckATermList(not_null(w_18)), not_null(r_18))));
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
        t = a_22;
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
  ATerm g_22;
  g_22 = t;
  {
    t = a_65(t);
    {
      ATerm h_2 (ATerm t)
      {
        t = term_l_22;
        return(t);
      }
      t = debug_1(t, h_2);
    }
  }
  t = g_22;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
  ATerm t_19 (ATerm t)
  {
    ATerm m_22 = t;
    if((PushChoice() == 0))
      {
        ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
        n_19 = t;
        h_19 :
        if(match_cons(n_19, sym__2))
          {
            o_19 = ATgetArgument(n_19, 0);
            p_19 = ATgetArgument(n_19, 1);
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
        t = m_22;
      }
    {
      ATerm i_2 (ATerm t)
      {
        t = term_n_22;
        return(t);
      }
      t = obsolete_1(t, i_2);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), term_h_7);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm u_19 (ATerm t)
  {
    t = SSL_open_file(not_null(k_19), not_null(l_19));
    return(t);
  }
  j_19 = t;
  i_19 :
  if(match_cons(j_19, sym__2))
    {
      k_19 = ATgetArgument(j_19, 0);
      l_19 = ATgetArgument(j_19, 1);
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_19(t);
            ;
            LocalPopChoice(p_22);
          }
        else
          {
            t = o_22;
            t = u_19(t);
          }
      }
    }
  else
    {
      t = t_19(t);
    }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  x_19 = t;
  w_19 :
  if(match_cons(x_19, sym__2))
    {
      y_19 = ATgetArgument(x_19, 0);
      z_19 = ATgetArgument(x_19, 1);
      t = SSL_access(not_null(y_19), not_null(z_19));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm e_20 = NULL;
  ATerm f_20 = NULL;
  f_20 = t;
  if(((e_20 != NULL) && (e_20 != f_20)))
    _fail(f_20);
  else
    e_20 = f_20;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_20), (ATerm) ATinsert(ATempty, term_q_22));
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
  ATerm i_20 = NULL;
  ATerm j_20 = NULL;
  t = term_r_22;
  {
    t = new_0(t);
    {
      j_20 = t;
      if(((i_20 != NULL) && (i_20 != j_20)))
        _fail(j_20);
      else
        i_20 = j_20;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), term_v_22);
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
  ATerm n_20 = NULL;
  t = new_file_0(t);
  {
    n_20 = t;
    {
      ATerm w_22;
      w_22 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_20), term_h_7);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_20), term_r_22);
            {
              ATerm k_2 (ATerm t)
              {
                t = term_a_23;
                return(t);
              }
              t = assert_1(t, k_2);
            }
          }
        }
      }
      t = w_22;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm g_21 = NULL,h_21 = NULL;
  g_21 = t;
  b_21 :
  if(match_cons(g_21, sym_stdin_0))
    {
      ATerm i_21 = NULL;
      ATerm j_21 = NULL;
      ATerm m_21 = NULL;
      t = xtc_new_file_0(t);
      {
        j_21 = t;
        {
          if(((i_21 != NULL) && (i_21 != j_21)))
            _fail(j_21);
          else
            i_21 = j_21;
          {
            ATerm n_21 = NULL;
            t = o_0(t);
            {
              n_21 = t;
              if(((m_21 != NULL) && (m_21 != n_21)))
                _fail(n_21);
              else
                m_21 = n_21;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_21), (ATerm) ATinsert(ATinsert(ATempty, not_null(i_21)), term_d_23));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(i_21);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_21));
    }
  else
    {
      if(match_cons(g_21, sym_FILE_1))
        {
          h_21 = ATgetArgument(g_21, 0);
          {
            ATerm p_21 = NULL;
            ATerm s_21 = NULL;
            t = not_null(h_21);
            {
              ATerm t_21 = NULL;
              t = xtc_new_file_0(t);
              {
                s_21 = t;
                {
                  if(((p_21 != NULL) && (p_21 != s_21)))
                    _fail(s_21);
                  else
                    p_21 = s_21;
                  {
                    ATerm u_21 = NULL;
                    t = o_0(t);
                    {
                      u_21 = t;
                      if(((t_21 != NULL) && (t_21 != u_21)))
                        _fail(u_21);
                      else
                        t_21 = u_21;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_21), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(p_21)), term_d_23), not_null(h_21)), term_e_23));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(p_21);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_21));
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
  ATerm f_22 = NULL;
  f_22 = t;
  e_22 :
  if(match_cons(f_22, sym_stdin_0))
    {
      ATerm h_22 = NULL,j_22 = NULL;
      ATerm f_23;
      f_23 = t;
      {
        ATerm i_22 = NULL;
        t = SSLgetAnnotations(not_null(f_22));
        {
          i_22 = t;
          if(((h_22 != NULL) && (h_22 != i_22)))
            _fail(i_22);
          else
            h_22 = i_22;
        }
      }
      t = f_23;
      {
        ATerm k_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(h_22));
        {
          k_22 = t;
          if(((j_22 != NULL) && (j_22 != k_22)))
            _fail(k_22);
          else
            j_22 = k_22;
        }
        t = not_null(j_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm r_61 (ATerm))
{
  ATerm t_22 = NULL,u_22 = NULL;
  t_22 = t;
  s_22 :
  if(match_cons(t_22, sym_FILE_1))
    {
      u_22 = ATgetArgument(t_22, 0);
      {
        ATerm x_22 = NULL,z_22 = NULL;
        ATerm y_22 = NULL;
        t = SSLgetAnnotations(not_null(t_22));
        {
          y_22 = t;
          if(((x_22 != NULL) && (x_22 != y_22)))
            _fail(y_22);
          else
            x_22 = y_22;
        }
        {
          t = not_null(u_22);
          {
            ATerm b_23 = NULL;
            t = r_61(t);
            {
              z_22 = t;
              {
                ATerm c_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(z_22)), not_null(x_22));
                {
                  c_23 = t;
                  if(((b_23 != NULL) && (b_23 != c_23)))
                    _fail(c_23);
                  else
                    b_23 = c_23;
                }
                t = not_null(b_23);
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
ATerm xtc_transform_2 (ATerm t, ATerm g_83 (ATerm), ATerm h_83 (ATerm))
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_23 = t;
      int n_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(n_23);
        }
      else
        {
          t = m_23;
          t = stdin_0(t);
        }
      LocalPopChoice(h_23);
      t = xtc_transform_file_2(t, g_83, h_83);
    }
  else
    {
      t = g_23;
      t = xtc_transform_term_2(t, g_83, h_83);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
  j_23 = t;
  i_23 :
  if(match_cons(j_23, sym__2))
    {
      k_23 = ATgetArgument(j_23, 0);
      l_23 = ATgetArgument(j_23, 1);
      t = SSL_copy(not_null(k_23), not_null(l_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm t_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym_stderr_0))
    {
      ATerm v_23 = NULL,x_23 = NULL;
      ATerm o_23;
      o_23 = t;
      {
        ATerm w_23 = NULL;
        t = SSLgetAnnotations(not_null(t_23));
        {
          w_23 = t;
          if(((v_23 != NULL) && (v_23 != w_23)))
            _fail(w_23);
          else
            v_23 = w_23;
        }
      }
      t = o_23;
      {
        ATerm y_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(v_23));
        {
          y_23 = t;
          if(((x_23 != NULL) && (x_23 != y_23)))
            _fail(y_23);
          else
            x_23 = y_23;
        }
        t = not_null(x_23);
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
  ATerm k_24 = NULL;
  k_24 = t;
  f_24 :
  if(match_cons(k_24, sym_stdout_0))
    {
      ATerm m_24 = NULL,r_24 = NULL;
      ATerm p_23;
      p_23 = t;
      {
        ATerm n_24 = NULL;
        t = SSLgetAnnotations(not_null(k_24));
        {
          n_24 = t;
          if(((m_24 != NULL) && (m_24 != n_24)))
            _fail(n_24);
          else
            m_24 = n_24;
        }
      }
      t = p_23;
      {
        ATerm s_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(m_24));
        {
          s_24 = t;
          if(((r_24 != NULL) && (r_24 != s_24)))
            _fail(s_24);
          else
            r_24 = s_24;
        }
        t = not_null(r_24);
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
  ATerm e_25 = NULL,h_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym_FILE_1))
    {
      h_25 = ATgetArgument(e_25, 0);
      {
        ATerm q_23 = t;
        int r_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_25 = NULL;
            ATerm k_25 = NULL;
            t = m_0(t);
            {
              k_25 = t;
              {
                if(((j_25 != NULL) && (j_25 != k_25)))
                  _fail(k_25);
                else
                  j_25 = k_25;
                {
                  ATerm u_23 = t;
                  int z_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(z_23);
                    }
                  else
                    {
                      t = u_23;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_25), not_null(j_25));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_25));
            ;
            LocalPopChoice(r_23);
          }
        else
          {
            t = q_23;
            {
              ATerm a_24 = t;
              int b_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_25 = NULL;
                  ATerm n_25 = NULL;
                  t = m_0(t);
                  {
                    n_25 = t;
                    {
                      if(((m_25 != NULL) && (m_25 != n_25)))
                        _fail(n_25);
                      else
                        m_25 = n_25;
                      {
                        ATerm c_24 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm d_24 = t;
                            int e_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(e_24);
                              }
                            else
                              {
                                t = d_24;
                                {
                                  ATerm g_24 = t;
                                  int h_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(h_24);
                                    }
                                  else
                                    {
                                      t = g_24;
                                      {
                                        ATerm o_25 = NULL;
                                        o_25 = t;
                                        if(((h_25 != NULL) && (h_25 != o_25)))
                                          _fail(o_25);
                                        else
                                          h_25 = o_25;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = c_24;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_25), not_null(m_25));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_25));
                  ;
                  LocalPopChoice(b_24);
                }
              else
                {
                  t = a_24;
                  {
                    ATerm q_25 = NULL;
                    t = m_0(t);
                    {
                      q_25 = t;
                      if(((h_25 != NULL) && (h_25 != q_25)))
                        _fail(q_25);
                      else
                        h_25 = q_25;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_25));
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
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  z_25 :
  if(((ATgetType(f_26) == AT_LIST) && !(ATisEmpty(f_26))))
    {
      g_26 = ATgetFirst((ATermList) f_26);
      h_26 = (ATerm) ATgetNext((ATermList) f_26);
      t = not_null(h_26);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  o_26 = t;
  n_26 :
  if(match_cons(o_26, sym__2))
    {
      p_26 = ATgetArgument(o_26, 0);
      q_26 = ATgetArgument(o_26, 1);
      {
        ATerm i_24;
        i_24 = t;
        {
          ATerm w_26 = NULL;
          ATerm y_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), not_null(q_26));
          {
            ATerm j_24 = t;
            int l_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(l_24);
              }
            else
              {
                t = j_24;
                t = (ATerm) ATempty;
              }
            {
              y_26 = t;
              if(((w_26 != NULL) && (w_26 != y_26)))
                _fail(y_26);
              else
                w_26 = y_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_26), not_null(q_26), not_null(w_26));
            t = table_put_0(t);
          }
        }
        t = i_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm m_79 (ATerm))
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
  ATerm o_24;
  o_24 = t;
  {
    ATerm i_27 = NULL;
    ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
    t = m_79(t);
    {
      i_27 = t;
      {
        if(((h_27 != NULL) && (h_27 != i_27)))
          _fail(i_27);
        else
          h_27 = i_27;
        {
          ATerm p_24 = t;
          int q_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_27), term_d_22);
              t = table_get_0(t);
              ;
              LocalPopChoice(q_24);
            }
          else
            {
              t = p_24;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            j_27 = t;
            e_27 :
            if(((ATgetType(j_27) == AT_LIST) && !(ATisEmpty(j_27))))
              {
                k_27 = ATgetFirst((ATermList) j_27);
                l_27 = (ATerm) ATgetNext((ATermList) j_27);
                {
                  if(((g_27 != NULL) && (g_27 != k_27)))
                    _fail(k_27);
                  else
                    g_27 = k_27;
                  {
                    if(((f_27 != NULL) && (f_27 != l_27)))
                      _fail(l_27);
                    else
                      f_27 = l_27;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(h_27), term_d_22, not_null(f_27));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(g_27);
                          {
                            ATerm l_2 (ATerm t)
                            {
                              ATerm m_27 = NULL;
                              m_27 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_27), not_null(m_27));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, l_2);
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
  t = o_24;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm s_27 = NULL;
  s_27 = t;
  t = SSL_remove(not_null(s_27));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm h_80 (ATerm), ATerm i_80 (ATerm))
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_80(t);
      t = i_80(t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        t = i_80(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm l_79 (ATerm))
{
  ATerm x_27 = NULL;
  ATerm v_24;
  v_24 = t;
  {
    ATerm y_27 = NULL;
    ATerm z_27 = NULL;
    t = l_79(t);
    {
      y_27 = t;
      {
        if(((x_27 != NULL) && (x_27 != y_27)))
          _fail(y_27);
        else
          x_27 = y_27;
        {
          ATerm a_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_27), term_d_22);
          {
            ATerm w_24 = t;
            int x_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(x_24);
              }
            else
              {
                t = w_24;
                t = (ATerm) ATempty;
              }
            {
              a_28 = t;
              if(((z_27 != NULL) && (z_27 != a_28)))
                _fail(a_28);
              else
                z_27 = a_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_27), term_d_22, (ATerm) ATinsert(CheckATermList(not_null(z_27)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = v_24;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm q_82 (ATerm))
{
  ATerm f_28 = NULL,g_28 = NULL;
  ATerm m_2 (ATerm t)
  {
    t = term_a_23;
    return(t);
  }
  t = begin_scope_1(t, m_2);
  {
    ATerm n_2 (ATerm t)
    {
      ATerm y_24;
      y_24 = t;
      {
        ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
        ATerm z_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_b_25;
            t = table_get_0(t);
            ;
            LocalPopChoice(a_25);
          }
        else
          {
            t = z_24;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          h_28 = t;
          e_28 :
          if(((ATgetType(h_28) == AT_LIST) && !(ATisEmpty(h_28))))
            {
              i_28 = ATgetFirst((ATermList) h_28);
              j_28 = (ATerm) ATgetNext((ATermList) h_28);
              {
                if(((g_28 != NULL) && (g_28 != i_28)))
                  _fail(i_28);
                else
                  g_28 = i_28;
                {
                  if(((f_28 != NULL) && (f_28 != j_28)))
                    _fail(j_28);
                  else
                    f_28 = j_28;
                  {
                    t = not_null(g_28);
                    {
                      ATerm o_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, o_2);
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
      t = y_24;
      {
        ATerm p_2 (ATerm t)
        {
          t = term_a_23;
          return(t);
        }
        t = end_scope_1(t, p_2);
      }
      return(t);
    }
    t = restore_always_2(t, q_82, n_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm r_82 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    ATerm c_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_28 = NULL;
        ATerm n_28 = NULL;
        t = term_e_23;
        {
          t = get_config_0(t);
          {
            n_28 = t;
            if(((m_28 != NULL) && (m_28 != n_28)))
              _fail(n_28);
            else
              m_28 = n_28;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_28));
        ;
        LocalPopChoice(f_25);
      }
    else
      {
        t = c_25;
        t = term_g_7;
      }
    {
      t = r_82(t);
      {
        ATerm r_2 (ATerm t)
        {
          ATerm g_25 = t;
          int i_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_d_23;
              t = get_config_0(t);
              ;
              LocalPopChoice(i_25);
            }
          else
            {
              t = g_25;
              t = term_l_25;
            }
          return(t);
        }
        t = copy_to_1(t, r_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, q_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm q_28 = NULL;
    q_28 = t;
    p_28 :
    if(!(match_string(q_28, "-v")))
      {
        if(!(match_string(q_28, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_r_25;
    t = set_config_0(t);
    t = term_s_25;
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_t_25;
    return(t);
  }
  t = Option_3(t, u_2, v_2, w_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm t_28 = NULL;
    t_28 = t;
    r_28 :
    if(!(match_string(t_28, "-k")))
      {
        if(!(match_string(t_28, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm u_25;
    u_25 = t;
    {
      ATerm u_28 = NULL;
      ATerm v_28 = NULL;
      t = string_to_int_0(t);
      {
        v_28 = t;
        if(((u_28 != NULL) && (u_28 != v_28)))
          _fail(v_28);
        else
          u_28 = v_28;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_25, not_null(u_28));
        t = set_config_0(t);
      }
    }
    t = u_25;
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_w_25;
    return(t);
  }
  t = ArgOption_3(t, x_2, a_3, b_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm y_28 = NULL;
  y_28 = t;
  t = SSL_string_to_int(not_null(y_28));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_3 (ATerm t)
      {
        ATerm g_29 = NULL;
        g_29 = t;
        b_29 :
        if(!(match_string(g_29, "-S")))
          {
            if(!(match_string(g_29, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_b_26;
        t = set_config_0(t);
        t = term_c_26;
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_d_26;
        return(t);
      }
      t = Option_3(t, c_3, d_3, e_3);
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm e_26 = t;
        int i_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_3 (ATerm t)
            {
              ATerm h_29 = NULL;
              h_29 = t;
              c_29 :
              if(!(match_string(h_29, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_3 (ATerm t)
            {
              ATerm k_29 = NULL;
              ATerm j_26;
              j_26 = t;
              {
                ATerm i_29 = NULL;
                ATerm j_29 = NULL;
                t = string_to_int_0(t);
                {
                  j_29 = t;
                  if(((i_29 != NULL) && (i_29 != j_29)))
                    _fail(j_29);
                  else
                    i_29 = j_29;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_17, not_null(i_29));
                  t = set_config_0(t);
                }
              }
              t = j_26;
              {
                ATerm l_29 = NULL;
                l_29 = t;
                if(((k_29 != NULL) && (k_29 != l_29)))
                  _fail(l_29);
                else
                  k_29 = l_29;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(k_29));
              }
              return(t);
            }
            ATerm n_3 (ATerm t)
            {
              t = term_k_26;
              return(t);
            }
            t = ArgOption_3(t, f_3, m_3, n_3);
            ;
            LocalPopChoice(i_26);
          }
        else
          {
            t = e_26;
            {
              ATerm q_3 (ATerm t)
              {
                ATerm m_29 = NULL;
                m_29 = t;
                f_29 :
                if(!(match_string(m_29, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm r_3 (ATerm t)
              {
                t = term_m_26;
                t = set_config_0(t);
                t = term_r_26;
                return(t);
              }
              ATerm s_3 (ATerm t)
              {
                t = term_s_26;
                return(t);
              }
              t = Option_3(t, q_3, r_3, s_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      {
        ATerm v_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(x_26);
          }
        else
          {
            t = v_26;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm s_29 = NULL;
    s_29 = t;
    p_29 :
    if(!(match_string(s_29, "-o")))
      {
        if(!(match_string(s_29, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm v_29 = NULL;
    ATerm z_26;
    z_26 = t;
    {
      ATerm t_29 = NULL;
      ATerm u_29 = NULL;
      u_29 = t;
      if(((t_29 != NULL) && (t_29 != u_29)))
        _fail(u_29);
      else
        t_29 = u_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_23, not_null(t_29));
        t = set_config_0(t);
      }
    }
    t = z_26;
    {
      ATerm w_29 = NULL;
      w_29 = t;
      if(((v_29 != NULL) && (v_29 != w_29)))
        _fail(w_29);
      else
        v_29 = w_29;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_29));
    }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_a_27;
    return(t);
  }
  t = ArgOption_3(t, t_3, u_3, z_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(c_27);
    }
  else
    {
      t = b_27;
      {
        ATerm a_4 (ATerm t)
        {
          ATerm a_30 = NULL;
          a_30 = t;
          z_29 :
          if(!(match_string(a_30, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm f_4 (ATerm t)
        {
          t = term_n_27;
          t = set_config_0(t);
          t = term_o_27;
          return(t);
        }
        ATerm g_4 (ATerm t)
        {
          t = term_p_27;
          return(t);
        }
        t = Option_3(t, a_4, f_4, g_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
  g_30 = t;
  e_30 :
  if(match_string(g_30, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(g_30) == AT_LIST) && !(ATisEmpty(g_30))))
        {
          h_30 = ATgetFirst((ATermList) g_30);
          i_30 = (ATerm) ATgetNext((ATermList) g_30);
          f_30 :
          if(((ATgetType(i_30) == AT_LIST) && !(ATisEmpty(i_30))))
            {
              j_30 = ATgetFirst((ATermList) i_30);
              k_30 = (ATerm) ATgetNext((ATermList) i_30);
              {
                ATerm o_30 = NULL;
                ATerm q_27;
                q_27 = t;
                {
                  t = not_null(h_30);
                  t = j_0(t);
                }
                t = q_27;
                {
                  ATerm p_30 = NULL;
                  t = not_null(j_30);
                  {
                    t = k_0(t);
                    {
                      p_30 = t;
                      if(((o_30 != NULL) && (o_30 != p_30)))
                        _fail(p_30);
                      else
                        o_30 = p_30;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_30)), not_null(o_30));
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
  ATerm h_4 (ATerm t)
  {
    ATerm w_30 = NULL;
    w_30 = t;
    t_30 :
    if(!(match_string(w_30, "-i")))
      {
        if(!(match_string(w_30, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    ATerm z_30 = NULL;
    ATerm r_27;
    r_27 = t;
    {
      ATerm x_30 = NULL;
      ATerm y_30 = NULL;
      y_30 = t;
      if(((x_30 != NULL) && (x_30 != y_30)))
        _fail(y_30);
      else
        x_30 = y_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_23, not_null(x_30));
        t = set_config_0(t);
      }
    }
    t = r_27;
    {
      ATerm a_31 = NULL;
      a_31 = t;
      if(((z_30 != NULL) && (z_30 != a_31)))
        _fail(a_31);
      else
        z_30 = a_31;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_30));
    }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = term_t_27;
    return(t);
  }
  t = ArgOption_3(t, h_4, i_4, j_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
      {
        ATerm w_27 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(b_28);
          }
        else
          {
            t = w_27;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm c_28;
  c_28 = t;
  {
    ATerm e_31 = NULL;
    ATerm f_31 = NULL;
    t = term_r_22;
    {
      t = whoami_0(t);
      {
        f_31 = t;
        if(((e_31 != NULL) && (e_31 != f_31)))
          _fail(f_31);
        else
          e_31 = f_31;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_28), not_null(e_31)), term_d_28));
      {
        t = printnl_0(t);
        {
          t = term_t_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = c_28;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm n_31 = NULL;
  t = report_run_time_0(t);
  {
    ATerm p_31 = NULL;
    t = term_r_22;
    {
      t = whoami_0(t);
      {
        p_31 = t;
        if(((n_31 != NULL) && (n_31 != p_31)))
          _fail(p_31);
        else
          n_31 = p_31;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATinsert(ATempty, term_l_28), not_null(n_31)));
      {
        t = printnl_0(t);
        {
          t = term_t_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_o_28;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_31 = NULL;
  s_31 = t;
  t = SSL_TicksToSeconds(not_null(s_31));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
  x_31 = t;
  w_31 :
  if(match_cons(x_31, sym__2))
    {
      y_31 = ATgetArgument(x_31, 0);
      z_31 = ATgetArgument(x_31, 1);
      {
        ATerm s_28 = t;
        int w_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_31), not_null(z_31));
            ;
            LocalPopChoice(w_28);
          }
        else
          {
            t = s_28;
            t = SSL_addr(not_null(y_31), not_null(z_31));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm o_75 (ATerm), ATerm p_75 (ATerm))
{
  ATerm x_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_75(t);
      ;
      LocalPopChoice(z_28);
    }
  else
    {
      t = x_28;
      {
        ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
        g_32 = t;
        f_32 :
        if(((ATgetType(g_32) == AT_LIST) && !(ATisEmpty(g_32))))
          {
            h_32 = ATgetFirst((ATermList) g_32);
            i_32 = (ATerm) ATgetNext((ATermList) g_32);
            {
              ATerm l_32 = NULL;
              ATerm m_32 = NULL;
              t = not_null(i_32);
              {
                t = foldr_2(t, o_75, p_75);
                {
                  m_32 = t;
                  if(((l_32 != NULL) && (l_32 != m_32)))
                    _fail(m_32);
                  else
                    l_32 = m_32;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_32), not_null(l_32));
                t = p_75(t);
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
ATerm crush_2 (ATerm t, ATerm m_73 (ATerm), ATerm n_73 (ATerm))
{
  ATerm v_32 = NULL;
  ATerm x_32 = NULL;
  v_32 = t;
  {
    ATerm y_32 = NULL;
    ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
    t = not_null(v_32);
    {
      y_32 = t;
      {
        t = SSL_explode_term(not_null(y_32));
        {
          a_33 = t;
          u_32 :
          if(match_cons(a_33, sym__2))
            {
              b_33 = ATgetArgument(a_33, 0);
              c_33 = ATgetArgument(a_33, 1);
              if(((x_32 != NULL) && (x_32 != c_33)))
                _fail(c_33);
              else
                x_32 = c_33;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_32);
      t = foldr_2(t, m_73, n_73);
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
    ATerm l_4 (ATerm t)
    {
      t = term_a_26;
      return(t);
    }
    t = crush_2(t, l_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  i_33 = t;
  h_33 :
  if(match_cons(i_33, sym__2))
    {
      j_33 = ATgetArgument(i_33, 0);
      k_33 = ATgetArgument(i_33, 1);
      {
        ATerm a_29;
        a_29 = t;
        {
          ATerm d_29 = t;
          int e_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_33), not_null(k_33));
              ;
              LocalPopChoice(e_29);
            }
          else
            {
              t = d_29;
              t = SSL_gtr(not_null(j_33), not_null(k_33));
            }
        }
        t = a_29;
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
  ATerm q_33 = NULL;
  ATerm n_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
      r_33 = t;
      p_33 :
      if(match_cons(r_33, sym__2))
        {
          s_33 = ATgetArgument(r_33, 0);
          t_33 = ATgetArgument(r_33, 1);
          {
            if(((q_33 != NULL) && (q_33 != s_33)))
              _fail(s_33);
            else
              q_33 = s_33;
            if(((q_33 != NULL) && (q_33 != t_33)))
              _fail(t_33);
            else
              q_33 = t_33;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(o_29);
    }
  else
    {
      t = n_29;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_80 (ATerm))
{
  ATerm o_4 (ATerm t)
  {
    ATerm q_29;
    q_29 = t;
    {
      ATerm w_33 = NULL;
      ATerm x_33 = NULL;
      t = term_c_17;
      {
        t = get_config_0(t);
        {
          x_33 = t;
          if(((w_33 != NULL) && (w_33 != x_33)))
            _fail(x_33);
          else
            w_33 = x_33;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_33), term_t_7);
        t = geq_0(t);
      }
    }
    t = q_29;
    t = m_80(t);
    return(t);
  }
  t = try_1(t, o_4);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    ATerm b_34 = NULL,d_34 = NULL;
    ATerm r_29;
    r_29 = t;
    {
      ATerm c_34 = NULL;
      t = run_time_0(t);
      {
        c_34 = t;
        if(((b_34 != NULL) && (b_34 != c_34)))
          _fail(c_34);
        else
          b_34 = c_34;
      }
    }
    t = r_29;
    {
      ATerm e_34 = NULL;
      t = term_r_22;
      {
        t = whoami_0(t);
        {
          e_34 = t;
          if(((d_34 != NULL) && (d_34 != e_34)))
            _fail(e_34);
          else
            d_34 = e_34;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_29), not_null(b_34)), term_k_7), not_null(d_34)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, p_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_a_26;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_34 = NULL;
  l_34 = t;
  k_34 :
  if(match_cons(l_34, sym_Version_0))
    {
      ATerm n_34 = NULL,p_34 = NULL;
      ATerm y_29;
      y_29 = t;
      {
        ATerm o_34 = NULL;
        t = SSLgetAnnotations(not_null(l_34));
        {
          o_34 = t;
          if(((n_34 != NULL) && (n_34 != o_34)))
            _fail(o_34);
          else
            n_34 = o_34;
        }
      }
      t = y_29;
      {
        ATerm q_34 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_34));
        {
          q_34 = t;
          if(((p_34 != NULL) && (p_34 != q_34)))
            _fail(q_34);
          else
            p_34 = q_34;
        }
        t = not_null(p_34);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_84 (ATerm))
{
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_30;
      t = get_config_0(t);
      ;
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
      {
        ATerm q_4 (ATerm t)
        {
          ATerm l_30 = t;
          int m_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(m_30);
            }
          else
            {
              t = l_30;
              {
                ATerm n_30 = t;
                int q_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(q_30);
                  }
                else
                  {
                    t = n_30;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, q_4);
      }
    }
  t = s_84(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_34 = NULL;
  v_34 = t;
  t = SSL_table_create(not_null(v_34));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_34 = NULL;
  z_34 = t;
  {
    ATerm r_30;
    r_30 = t;
    {
      t = term_s_30;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_30, term_u_30, not_null(z_34));
          t = table_put_0(t);
        }
      }
    }
    t = r_30;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_35 = NULL;
  d_35 = t;
  t = SSL_table_destroy(not_null(d_35));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_35 = NULL;
  h_35 = t;
  t = SSL_exit(not_null(h_35));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
  l_35 = t;
  k_35 :
  if(((ATgetType(l_35) == AT_LIST) && ATisEmpty(l_35)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(l_35) == AT_LIST) && !(ATisEmpty(l_35))))
        {
          m_35 = ATgetFirst((ATermList) l_35);
          n_35 = (ATerm) ATgetNext((ATermList) l_35);
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
  ATerm v_30;
  v_30 = t;
  {
    ATerm q_35 = NULL;
    ATerm t_35 = NULL;
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        {
          ATerm r_35 = NULL;
          ATerm s_35 = NULL;
          s_35 = t;
          if(((r_35 != NULL) && (r_35 != s_35)))
            _fail(s_35);
          else
            r_35 = s_35;
          t = (ATerm) ATinsert(ATempty, not_null(r_35));
        }
      }
    {
      t_35 = t;
      if(((q_35 != NULL) && (q_35 != t_35)))
        _fail(t_35);
      else
        q_35 = t_35;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_25, not_null(q_35));
      t = printnl_0(t);
    }
  }
  t = v_30;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  e_36 = t;
  b_36 :
  if(((ATgetType(e_36) == AT_LIST) && !(ATisEmpty(e_36))))
    {
      c_36 = ATgetFirst((ATermList) e_36);
      d_36 = (ATerm) ATgetNext((ATermList) e_36);
      {
        ATerm h_36 = NULL;
        t = not_null(d_36);
        {
          ATerm d_31;
          d_31 = t;
          {
            ATerm i_36 = NULL,k_36 = NULL,m_36 = NULL;
            ATerm g_31;
            g_31 = t;
            {
              ATerm j_36 = NULL;
              t = i_0(t);
              {
                j_36 = t;
                if(((i_36 != NULL) && (i_36 != j_36)))
                  _fail(j_36);
                else
                  i_36 = j_36;
              }
            }
            t = g_31;
            {
              ATerm l_36 = NULL;
              t = not_null(c_36);
              {
                t = g_0(t);
                {
                  l_36 = t;
                  if(((k_36 != NULL) && (k_36 != l_36)))
                    _fail(l_36);
                  else
                    k_36 = l_36;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(i_36)), not_null(k_36));
                {
                  m_36 = t;
                  if(((h_36 != NULL) && (h_36 != m_36)))
                    _fail(m_36);
                  else
                    h_36 = m_36;
                }
              }
            }
          }
          t = d_31;
          {
            ATerm s_4 (ATerm t)
            {
              t = not_null(h_36);
              return(t);
            }
            t = reverse_acc_2(t, g_0, s_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(e_36) == AT_LIST) && ATisEmpty(e_36)))
        {
          {
            t = term_r_22;
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
  ATerm t_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, t_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_61 (ATerm))
{
  ATerm x_36 = NULL,y_36 = NULL;
  x_36 = t;
  w_36 :
  if(match_cons(x_36, sym_Program_1))
    {
      y_36 = ATgetArgument(x_36, 0);
      {
        ATerm b_37 = NULL,d_37 = NULL;
        ATerm c_37 = NULL;
        t = SSLgetAnnotations(not_null(x_36));
        {
          c_37 = t;
          if(((b_37 != NULL) && (b_37 != c_37)))
            _fail(c_37);
          else
            b_37 = c_37;
        }
        {
          t = not_null(y_36);
          {
            ATerm f_37 = NULL;
            t = y_61(t);
            {
              d_37 = t;
              {
                ATerm g_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_37)), not_null(b_37));
                {
                  g_37 = t;
                  if(((f_37 != NULL) && (f_37 != g_37)))
                    _fail(g_37);
                  else
                    f_37 = g_37;
                }
                t = not_null(f_37);
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
ATerm default_system_usage_0 (ATerm t)
{
  ATerm p_37 = NULL;
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_37 = NULL;
      t = term_o_28;
      {
        t = get_config_0(t);
        {
          q_37 = t;
          if(((p_37 != NULL) && (p_37 != q_37)))
            _fail(q_37);
          else
            p_37 = q_37;
        }
      }
      ;
      LocalPopChoice(i_31);
    }
  else
    {
      t = h_31;
      {
        ATerm u_4 (ATerm t)
        {
          ATerm z_4 (ATerm t)
          {
            ATerm r_37 = NULL;
            r_37 = t;
            if(((p_37 != NULL) && (p_37 != r_37)))
              _fail(r_37);
            else
              p_37 = r_37;
            return(t);
          }
          t = Program_1(t, z_4);
          return(t);
        }
        t = option_defined_1(t, u_4);
      }
    }
  {
    ATerm a_5 (ATerm t)
    {
      ATerm b_5 (ATerm t)
      {
        t = not_null(p_37);
        return(t);
      }
      t = short_description_1(t, b_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, a_5);
    {
      t = term_j_31;
      {
        t = echo_0(t);
        {
          t = term_m_31;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm c_5 (ATerm t)
                {
                  ATerm s_37 = NULL;
                  ATerm t_37 = NULL;
                  t_37 = t;
                  if(((s_37 != NULL) && (s_37 != t_37)))
                    _fail(t_37);
                  else
                    s_37 = t_37;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_37)), term_o_31);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, c_5);
                {
                  ATerm e_5 (ATerm t)
                  {
                    ATerm u_37 = NULL;
                    ATerm v_37 = NULL;
                    ATerm f_5 (ATerm t)
                    {
                      t = not_null(p_37);
                      return(t);
                    }
                    t = long_description_1(t, f_5);
                    {
                      v_37 = t;
                      if(((u_37 != NULL) && (u_37 != v_37)))
                        _fail(v_37);
                      else
                        u_37 = v_37;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(u_37)), term_q_31);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_5);
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
ATerm override_system_usage_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm r_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(t_31);
    }
  else
    {
      t = r_31;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL;
  c_38 = t;
  b_38 :
  if(match_cons(c_38, sym__2))
    {
      d_38 = ATgetArgument(c_38, 0);
      e_38 = ATgetArgument(c_38, 1);
      {
        ATerm u_31;
        u_31 = t;
        t = SSL_printnl(not_null(d_38), not_null(e_38));
        t = u_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_61 (ATerm))
{
  ATerm n_38 = NULL,o_38 = NULL;
  n_38 = t;
  m_38 :
  if(match_cons(n_38, sym_Undefined_1))
    {
      o_38 = ATgetArgument(n_38, 0);
      {
        ATerm u_38 = NULL,w_38 = NULL;
        ATerm v_38 = NULL;
        t = SSLgetAnnotations(not_null(n_38));
        {
          v_38 = t;
          if(((u_38 != NULL) && (u_38 != v_38)))
            _fail(v_38);
          else
            u_38 = v_38;
        }
        {
          t = not_null(o_38);
          {
            ATerm y_38 = NULL;
            t = z_61(t);
            {
              w_38 = t;
              {
                ATerm z_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_38)), not_null(u_38));
                {
                  z_38 = t;
                  if(((y_38 != NULL) && (y_38 != z_38)))
                    _fail(z_38);
                  else
                    y_38 = z_38;
                }
                t = not_null(y_38);
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
  ATerm e_39 (ATerm t)
  {
    ATerm v_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, j_69, _id);
        ;
        LocalPopChoice(a_32);
      }
    else
      {
        t = v_31;
        t = Cons_2(t, _id, e_39);
      }
    return(t);
  }
  t = e_39(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_85 (ATerm))
{
  t = fetch_1(t, n_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_39 = NULL;
  j_39 = t;
  i_39 :
  if(match_cons(j_39, sym_Help_0))
    {
      ATerm n_39 = NULL,p_39 = NULL;
      ATerm b_32;
      b_32 = t;
      {
        ATerm o_39 = NULL;
        t = SSLgetAnnotations(not_null(j_39));
        {
          o_39 = t;
          if(((n_39 != NULL) && (n_39 != o_39)))
            _fail(o_39);
          else
            n_39 = o_39;
        }
      }
      t = b_32;
      {
        ATerm s_39 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_39));
        {
          s_39 = t;
          if(((p_39 != NULL) && (p_39 != s_39)))
            _fail(s_39);
          else
            p_39 = s_39;
        }
        t = not_null(p_39);
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
  ATerm x_39 = NULL;
  x_39 = t;
  t = SSL_implode_string(not_null(x_39));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(d_32);
    }
  else
    {
      t = c_32;
      {
        ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
        c_40 = t;
        b_40 :
        if(((ATgetType(c_40) == AT_LIST) && !(ATisEmpty(c_40))))
          {
            d_40 = ATgetFirst((ATermList) c_40);
            e_40 = (ATerm) ATgetNext((ATermList) c_40);
            {
              t = not_null(d_40);
              {
                ATerm g_5 (ATerm t)
                {
                  t = not_null(e_40);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_5);
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
  ATerm o_40 = NULL;
  ATerm s_40 = NULL;
  o_40 = t;
  {
    ATerm t_40 = NULL;
    ATerm v_40 = NULL,h_41 = NULL,i_41 = NULL;
    t = not_null(o_40);
    {
      t_40 = t;
      {
        t = SSL_explode_term(not_null(t_40));
        {
          v_40 = t;
          m_40 :
          if(match_cons(v_40, sym__2))
            {
              h_41 = ATgetArgument(v_40, 0);
              i_41 = ATgetArgument(v_40, 1);
              n_40 :
              if(match_string(h_41, ""))
                {
                  if(((s_40 != NULL) && (s_40 != i_41)))
                    _fail(i_41);
                  else
                    s_40 = i_41;
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
      t = not_null(s_40);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm p_69 (ATerm))
{
  ATerm o_41 (ATerm t)
  {
    ATerm e_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_41);
        ;
        LocalPopChoice(j_32);
      }
    else
      {
        t = e_32;
        {
          t = Nil_0(t);
          t = p_69(t);
        }
      }
    return(t);
  }
  t = o_41(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL;
  a_42 = t;
  z_41 :
  if(match_cons(a_42, sym__2))
    {
      b_42 = ATgetArgument(a_42, 0);
      c_42 = ATgetArgument(a_42, 1);
      {
        t = not_null(b_42);
        {
          ATerm h_5 (ATerm t)
          {
            t = not_null(c_42);
            return(t);
          }
          t = at_end_1(t, h_5);
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
  ATerm k_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(n_32);
    }
  else
    {
      t = k_32;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_42 = NULL;
  h_42 = t;
  t = SSL_explode_string(not_null(h_42));
  return(t);
}
ATerm _2 (ATerm t, ATerm i_55 (ATerm), ATerm j_55 (ATerm))
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  v_42 = t;
  u_42 :
  if(match_cons(v_42, sym__2))
    {
      w_42 = ATgetArgument(v_42, 0);
      x_42 = ATgetArgument(v_42, 1);
      {
        ATerm m_43 = NULL,p_43 = NULL;
        ATerm o_43 = NULL;
        t = SSLgetAnnotations(not_null(v_42));
        {
          o_43 = t;
          if(((m_43 != NULL) && (m_43 != o_43)))
            _fail(o_43);
          else
            m_43 = o_43;
        }
        {
          t = not_null(w_42);
          {
            ATerm r_43 = NULL;
            t = i_55(t);
            {
              p_43 = t;
              {
                t = not_null(x_42);
                {
                  ATerm v_43 = NULL;
                  t = j_55(t);
                  {
                    r_43 = t;
                    {
                      ATerm w_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_43), not_null(r_43)), not_null(m_43));
                      {
                        w_43 = t;
                        if(((v_43 != NULL) && (v_43 != w_43)))
                          _fail(w_43);
                        else
                          v_43 = w_43;
                      }
                      t = not_null(v_43);
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
  ATerm o_32;
  o_32 = t;
  {
    ATerm n_44 = NULL,p_44 = NULL;
    ATerm p_32;
    p_32 = t;
    {
      ATerm o_44 = NULL;
      t = t_64(t);
      {
        o_44 = t;
        if(((n_44 != NULL) && (n_44 != o_44)))
          _fail(o_44);
        else
          n_44 = o_44;
      }
    }
    t = p_32;
    {
      ATerm q_44 = NULL;
      q_44 = t;
      if(((p_44 != NULL) && (p_44 != q_44)))
        _fail(q_44);
      else
        p_44 = q_44;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_44)), not_null(n_44)));
        t = printnl_0(t);
      }
    }
  }
  t = o_32;
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_69 (ATerm))
{
  ATerm t_44 (ATerm t)
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(r_32);
      }
    else
      {
        t = q_32;
        t = Cons_2(t, a_69, t_44);
      }
    return(t);
  }
  t = t_44(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm v_44 = NULL;
  v_44 = t;
  t = SSL_is_string(not_null(v_44));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      {
        ATerm w_32 = t;
        int z_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, i_5);
            ;
            LocalPopChoice(z_32);
          }
        else
          {
            t = w_32;
            {
              ATerm g_45 = NULL,h_45 = NULL,m_45 = NULL;
              g_45 = t;
              f_45 :
              if(match_cons(g_45, sym_Path_1))
                {
                  h_45 = ATgetArgument(g_45, 0);
                  t = not_null(h_45);
                }
              else
                {
                  if(match_cons(g_45, sym_Var_1))
                    {
                      h_45 = ATgetArgument(g_45, 0);
                      {
                        t = not_null(h_45);
                        {
                          ATerm d_33 = t;
                          int e_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(e_33);
                            }
                          else
                            {
                              t = d_33;
                              {
                                ATerm j_5 (ATerm t)
                                {
                                  t = term_f_33;
                                  return(t);
                                }
                                t = debug_1(t, j_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(g_45, sym_Prefix_2))
                        {
                          h_45 = ATgetArgument(g_45, 0);
                          m_45 = ATgetArgument(g_45, 1);
                          {
                            ATerm r_45 = NULL,t_45 = NULL;
                            ATerm g_33;
                            g_33 = t;
                            {
                              ATerm s_45 = NULL;
                              t = not_null(h_45);
                              {
                                t = eval_config_0(t);
                                {
                                  s_45 = t;
                                  if(((r_45 != NULL) && (r_45 != s_45)))
                                    _fail(s_45);
                                  else
                                    r_45 = s_45;
                                }
                              }
                            }
                            t = g_33;
                            {
                              ATerm u_45 = NULL;
                              t = not_null(m_45);
                              {
                                t = eval_config_0(t);
                                {
                                  u_45 = t;
                                  if(((t_45 != NULL) && (t_45 != u_45)))
                                    _fail(u_45);
                                  else
                                    t_45 = u_45;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_45), not_null(t_45));
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
  ATerm n_46 = NULL;
  n_46 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_33, not_null(n_46));
    {
      t = table_get_0(t);
      {
        ATerm p_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm m_33;
            m_33 = t;
            {
              ATerm r_46 = NULL;
              ATerm s_46 = NULL;
              s_46 = t;
              if(((r_46 != NULL) && (r_46 != s_46)))
                _fail(s_46);
              else
                r_46 = s_46;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_l_33, not_null(n_46), not_null(r_46));
                t = table_put_0(t);
              }
            }
            t = m_33;
          }
          return(t);
        }
        t = try_1(t, p_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_79 (ATerm))
{
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_79(t);
      ;
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
  b_47 = t;
  a_47 :
  if(match_cons(b_47, sym__2))
    {
      c_47 = ATgetArgument(b_47, 0);
      d_47 = ATgetArgument(b_47, 1);
      t = SSL_table_get(not_null(c_47), not_null(d_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL;
  q_47 = t;
  p_47 :
  if(match_cons(q_47, sym__3))
    {
      r_47 = ATgetArgument(q_47, 0);
      s_47 = ATgetArgument(q_47, 1);
      t_47 = ATgetArgument(q_47, 2);
      {
        ATerm u_33;
        u_33 = t;
        {
          ATerm b_48 = NULL;
          ATerm c_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_47), not_null(s_47));
          {
            ATerm v_33 = t;
            int y_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(y_33);
              }
            else
              {
                t = v_33;
                t = (ATerm) ATempty;
              }
            {
              c_48 = t;
              if(((b_48 != NULL) && (b_48 != c_48)))
                _fail(c_48);
              else
                b_48 = c_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_47), not_null(s_47), (ATerm) ATinsert(CheckATermList(not_null(b_48)), not_null(t_47)));
            t = table_put_0(t);
          }
        }
        t = u_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_86 (ATerm))
{
  ATerm g_48 = NULL;
  ATerm h_48 = NULL;
  t = term_r_22;
  {
    t = s_86(t);
    {
      h_48 = t;
      if(((g_48 != NULL) && (g_48 != h_48)))
        _fail(h_48);
      else
        g_48 = h_48;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_31, term_l_31, not_null(g_48));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL;
  n_48 = t;
  m_48 :
  if(match_string(n_48, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(n_48) == AT_LIST) && !(ATisEmpty(n_48))))
        {
          o_48 = ATgetFirst((ATermList) n_48);
          p_48 = (ATerm) ATgetNext((ATermList) n_48);
          {
            ATerm s_48 = NULL;
            ATerm z_33;
            z_33 = t;
            {
              t = not_null(o_48);
              t = a_0(t);
            }
            t = z_33;
            {
              ATerm t_48 = NULL;
              t = term_r_22;
              {
                t = b_0(t);
                {
                  t_48 = t;
                  if(((s_48 != NULL) && (s_48 != t_48)))
                    _fail(t_48);
                  else
                    s_48 = t_48;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_48)), not_null(s_48));
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
    ATerm y_48 = NULL;
    y_48 = t;
    x_48 :
    if(!(match_string(y_48, "--help")))
      {
        if(!(match_string(y_48, "-h")))
          {
            if(!(match_string(y_48, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_a_34;
    {
      t = set_config_0(t);
      t = term_f_34;
    }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_g_34;
    return(t);
  }
  t = Option_3(t, s_5, t_5, u_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL;
  b_49 = t;
  a_49 :
  if(((ATgetType(b_49) == AT_LIST) && !(ATisEmpty(b_49))))
    {
      c_49 = ATgetFirst((ATermList) b_49);
      d_49 = (ATerm) ATgetNext((ATermList) b_49);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_49)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_49)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_56 (ATerm), ATerm s_56 (ATerm))
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL;
  n_49 = t;
  m_49 :
  if(((ATgetType(n_49) == AT_LIST) && !(ATisEmpty(n_49))))
    {
      o_49 = ATgetFirst((ATermList) n_49);
      p_49 = (ATerm) ATgetNext((ATermList) n_49);
      {
        ATerm t_49 = NULL,v_49 = NULL;
        ATerm u_49 = NULL;
        t = SSLgetAnnotations(not_null(n_49));
        {
          u_49 = t;
          if(((t_49 != NULL) && (t_49 != u_49)))
            _fail(u_49);
          else
            t_49 = u_49;
        }
        {
          t = not_null(o_49);
          {
            ATerm x_49 = NULL;
            t = r_56(t);
            {
              v_49 = t;
              {
                t = not_null(p_49);
                {
                  ATerm z_49 = NULL;
                  t = s_56(t);
                  {
                    x_49 = t;
                    {
                      ATerm a_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_49)), not_null(v_49)), not_null(t_49));
                      {
                        a_50 = t;
                        if(((z_49 != NULL) && (z_49 != a_50)))
                          _fail(a_50);
                        else
                          z_49 = a_50;
                      }
                      t = not_null(z_49);
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
  ATerm k_50 = NULL;
  k_50 = t;
  j_50 :
  if(((ATgetType(k_50) == AT_LIST) && ATisEmpty(k_50)))
    {
      {
        ATerm m_50 = NULL,o_50 = NULL;
        ATerm h_34;
        h_34 = t;
        {
          ATerm n_50 = NULL;
          t = SSLgetAnnotations(not_null(k_50));
          {
            n_50 = t;
            if(((m_50 != NULL) && (m_50 != n_50)))
              _fail(n_50);
            else
              m_50 = n_50;
          }
        }
        t = h_34;
        {
          ATerm p_50 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(m_50));
          {
            p_50 = t;
            if(((o_50 != NULL) && (o_50 != p_50)))
              _fail(p_50);
            else
              o_50 = p_50;
          }
          t = not_null(o_50);
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
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
  v_50 = t;
  u_50 :
  if(match_cons(v_50, sym__2))
    {
      w_50 = ATgetArgument(v_50, 0);
      x_50 = ATgetArgument(v_50, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_l_33, not_null(w_50), not_null(x_50));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm i_34;
  i_34 = t;
  {
    ATerm x_5 (ATerm t)
    {
      t = term_j_34;
      t = q_86(t);
      return(t);
    }
    t = try_1(t, x_5);
  }
  t = i_34;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm f_51 = NULL;
      ATerm m_34;
      m_34 = t;
      {
        ATerm d_51 = NULL;
        ATerm e_51 = NULL;
        e_51 = t;
        if(((d_51 != NULL) && (d_51 != e_51)))
          _fail(e_51);
        else
          d_51 = e_51;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_28, not_null(d_51));
          t = set_config_0(t);
        }
      }
      t = m_34;
      {
        ATerm g_51 = NULL;
        g_51 = t;
        if(((f_51 != NULL) && (f_51 != g_51)))
          _fail(g_51);
        else
          f_51 = g_51;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_51));
      }
      return(t);
    }
    ATerm z_5 (ATerm t)
    {
      ATerm r_34 = t;
      int s_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_34 = t;
          int u_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(u_34);
            }
          else
            {
              t = t_34;
              {
                t = q_86(t);
                t = Cons_2(t, _id, z_5);
              }
            }
          ;
          LocalPopChoice(s_34);
        }
      else
        {
          t = r_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_5, z_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
  ATerm w_34;
  w_34 = t;
  {
    ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL;
    p_51 = t;
    l_51 :
    if(match_cons(p_51, sym__3))
      {
        q_51 = ATgetArgument(p_51, 0);
        r_51 = ATgetArgument(p_51, 1);
        s_51 = ATgetArgument(p_51, 2);
        {
          if(((m_51 != NULL) && (m_51 != q_51)))
            _fail(q_51);
          else
            m_51 = q_51;
          {
            if(((n_51 != NULL) && (n_51 != r_51)))
              _fail(r_51);
            else
              n_51 = r_51;
            {
              if(((o_51 != NULL) && (o_51 != s_51)))
                _fail(s_51);
              else
                o_51 = s_51;
              t = SSL_table_put(not_null(m_51), not_null(n_51), not_null(o_51));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_86 (ATerm))
{
  ATerm v_51 = NULL;
  ATerm x_34;
  x_34 = t;
  {
    t = term_y_34;
    t = table_put_0(t);
  }
  t = x_34;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm a_35 = t;
      int b_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_86(t);
          ;
          LocalPopChoice(b_35);
        }
      else
        {
          t = a_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_6);
    {
      ATerm b_6 (ATerm t)
      {
        ATerm c_35 = t;
        int e_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_35;
            f_35 = t;
            {
              ATerm g_35 = t;
              int i_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_d_30;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(i_35);
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
                t = term_a_26;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(e_35);
          }
        else
          {
            t = c_35;
            {
              ATerm e_6 (ATerm t)
              {
                ATerm f_6 (ATerm t)
                {
                  ATerm w_51 = NULL;
                  w_51 = t;
                  if(((v_51 != NULL) && (v_51 != w_51)))
                    _fail(w_51);
                  else
                    v_51 = w_51;
                  return(t);
                }
                t = Undefined_1(t, f_6);
                return(t);
              }
              t = option_defined_1(t, e_6);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_51)), term_j_35));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_t_7;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, b_6);
      {
        ATerm o_35;
        o_35 = t;
        {
          t = term_k_31;
          t = table_destroy_0(t);
        }
        t = o_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm))
{
  t = parse_options_1(t, u_84);
  {
    t = store_options_0(t);
    {
      t = w_84(t);
      {
        ATerm p_35 = t;
        int u_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, v_84);
            ;
            LocalPopChoice(u_35);
          }
        else
          {
            t = p_35;
            {
              ATerm v_35 = t;
              int w_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_84(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(w_35);
                }
              else
                {
                  t = v_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm y_84 (ATerm), ATerm z_84 (ATerm))
{
  t = option_wrap_4(t, y_84, default_usage_0, _id, z_84);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm v_82 (ATerm), ATerm w_82 (ATerm))
{
  ATerm g_6 (ATerm t)
  {
    ATerm x_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_82(t);
        ;
        LocalPopChoice(y_35);
      }
    else
      {
        t = x_35;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    t = xtc_io_1(t, w_82);
    return(t);
  }
  t = option_wrap_2(t, g_6, j_6);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm u_82 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, u_82);
  return(t);
}
ATerm main_visamb_0 (ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    ATerm p_6 (ATerm t)
    {
      t = term_z_35;
      return(t);
    }
    t = xtc_transform_1(t, p_6);
    {
      ATerm q_6 (ATerm t)
      {
        t = term_a_36;
        return(t);
      }
      t = xtc_transform_2(t, q_6, build_pp_tables_0);
      {
        ATerm s_6 (ATerm t)
        {
          t = term_f_36;
          return(t);
        }
        t = xtc_transform_1(t, s_6);
      }
    }
    return(t);
  }
  t = xtc_io_wrap_1(t, o_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = main_visamb_0(t);
  return(t);
}
