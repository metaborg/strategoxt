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
ATerm term_m_38;
ATerm term_u_37;
ATerm term_g_37;
ATerm term_c_37;
ATerm term_z_36;
ATerm term_w_36;
ATerm term_h_36;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_s_32;
ATerm term_l_32;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_a_31;
ATerm term_w_30;
ATerm term_g_30;
ATerm term_c_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_o_29;
ATerm term_i_29;
ATerm term_g_29;
ATerm term_c_29;
ATerm term_z_28;
ATerm term_v_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_h_28;
ATerm term_e_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_u_27;
ATerm term_n_27;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_u_24;
ATerm term_s_24;
ATerm term_q_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_a_23;
ATerm term_x_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_i_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_z_21;
ATerm term_r_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_v_19;
ATerm term_q_19;
ATerm term_k_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_z_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_h_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_w_9;
ATerm term_s_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_x_8;
ATerm term_m_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_d_8;
ATerm term_y_7;
ATerm term_p_7;
void init_constant_terms (void)
{
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_10, term_x_8, term_t_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_g_8, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_h_11, term_m_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_11, term_t_11, term_u_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_y_11, term_z_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_e_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_k_12, term_l_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_q_12, term_t_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_z_12, term_h_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_k_13, term_q_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_y_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_g_14, term_j_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_o_14, term_r_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_z_14);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_u_15, term_v_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_d_16, term_e_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_l_16, term_m_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_y_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_b_17, term_c_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_n_17, term_r_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_17, term_u_17, term_z_17);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_e_18, term_f_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_18, term_m_18, term_n_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_18, term_s_18, term_t_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_18, term_y_18, term_z_18);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_m_20);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_i_22);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_q_24);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_z_27, term_f_25);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym__2, term_f_8, term_o_28);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_28);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_z_28, term_f_25);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym__2, term_v_29, term_f_25);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym__2, term_i_34, term_n_34);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym__2, term_s_32, term_f_25);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(sym__3, term_i_34, term_n_34, (ATerm) ATempty);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm p_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm b_83 (ATerm));
ATerm xtc_parse_pp_table_0 (ATerm);
ATerm parse_to_temp_file_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm j_80 (ATerm));
ATerm modification_time_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm lookup_pp_af_0 (ATerm);
ATerm lookup_or_parse_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm must_be_pp_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm r_69 (ATerm));
ATerm has_extension_1 (ATerm, ATerm q_77 (ATerm));
ATerm ensure_pp_table_parsed_0 (ATerm);
ATerm get_config_p_0 (ATerm);
ATerm create_pp_table_args_0 (ATerm);
ATerm build_impl_args_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm f_65 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm j_83 (ATerm), ATerm k_83 (ATerm));
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
ATerm if_verbose5_1 (ATerm, ATerm m_80 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm n_76 (ATerm));
ATerm repeat_1 (ATerm, ATerm h_78 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm v_64 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm l_80 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm n_80 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm b_73 (ATerm), ATerm c_73 (ATerm));
ATerm union_1 (ATerm, ATerm x_72 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm w_80 (ATerm));
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
ATerm xtc_command_1 (ATerm, ATerm a_83 (ATerm));
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
ATerm xtc_transform_2 (ATerm, ATerm c_83 (ATerm), ATerm d_83 (ATerm));
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
ATerm xtc_temp_files_1 (ATerm, ATerm m_82 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm n_82 (ATerm));
ATerm ast2abox_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm pp_options_0 (ATerm);
ATerm ast2abox_options_0 (ATerm);
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
ATerm if_verbose1_1 (ATerm, ATerm i_80 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_84 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_86 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_86 (ATerm));
ATerm Program_1 (ATerm, ATerm x_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm y_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_85 (ATerm));
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
ATerm register_usage_1 (ATerm, ATerm u_86 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_56 (ATerm), ATerm r_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_86 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_86 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm z_84 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm a_85 (ATerm), ATerm b_85 (ATerm));
ATerm io_ast2abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm rename_file_0 (ATerm t)
{
  ATerm f_0 = NULL,x_0 = NULL,y_0 = NULL;
  f_0 = t;
  e_0 :
  if(match_cons(f_0, sym__2))
    {
      x_0 = ATgetArgument(f_0, 0);
      y_0 = ATgetArgument(f_0, 1);
      t = SSL_rename(not_null(x_0), not_null(y_0));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm z_2 = NULL,a_3 = NULL;
  z_2 = t;
  v_2 :
  if(match_cons(z_2, sym_FILE_1))
    {
      a_3 = ATgetArgument(z_2, 0);
      {
        ATerm m_7 = t;
        int n_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_3 = NULL;
            t = p_0(t);
            {
              c_3 = t;
              a_2 :
              if(match_cons(c_3, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_3), term_p_7);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(a_3);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_p_7;
            ;
            LocalPopChoice(n_7);
          }
        else
          {
            t = m_7;
            {
              ATerm s_7 = t;
              int t_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_3 = NULL;
                  ATerm f_3 = NULL;
                  t = p_0(t);
                  {
                    f_3 = t;
                    {
                      if(((e_3 != NULL) && (e_3 != f_3)))
                        _fail(f_3);
                      else
                        e_3 = f_3;
                      {
                        ATerm u_7 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm w_7 = t;
                            int x_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(x_7);
                              }
                            else
                              {
                                t = w_7;
                                {
                                  ATerm g_3 = NULL;
                                  g_3 = t;
                                  if(((a_3 != NULL) && (a_3 != g_3)))
                                    _fail(g_3);
                                  else
                                    a_3 = g_3;
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = u_7;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_3), not_null(e_3));
                          t = rename_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_3));
                  ;
                  LocalPopChoice(t_7);
                }
              else
                {
                  t = s_7;
                  {
                    ATerm i_3 = NULL;
                    t = p_0(t);
                    {
                      i_3 = t;
                      if(((a_3 != NULL) && (a_3 != i_3)))
                        _fail(i_3);
                      else
                        a_3 = i_3;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_3));
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
ATerm xtc_transform_1 (ATerm t, ATerm b_83 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, b_83, c_0);
  return(t);
}
ATerm xtc_parse_pp_table_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    t = term_y_7;
    return(t);
  }
  t = xtc_transform_1(t, h_0);
  return(t);
}
ATerm parse_to_temp_file_0 (ATerm t)
{
  ATerm t_3 = NULL;
  ATerm v_3 = NULL,w_3 = NULL;
  t_3 = t;
  {
    ATerm q_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_3));
      {
        t = xtc_parse_pp_table_0(t);
        t = rename_to_1(t, new_file_0);
      }
      return(t);
    }
    t = xtc_temp_files_1(t, q_0);
    {
      v_3 = t;
      s_3 :
      if(match_cons(v_3, sym_FILE_1))
        {
          w_3 = ATgetArgument(v_3, 0);
          {
            t = not_null(w_3);
            {
              ATerm r_0 (ATerm t)
              {
                ATerm s_0 (ATerm t)
                {
                  t = term_d_8;
                  return(t);
                }
                t = debug_1(t, s_0);
                return(t);
              }
              t = if_verbose2_1(t, r_0);
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
ATerm if_verbose2_1 (ATerm t, ATerm j_80 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm e_8;
    e_8 = t;
    {
      ATerm b_4 = NULL;
      ATerm c_4 = NULL;
      t = term_f_8;
      {
        t = get_config_0(t);
        {
          c_4 = t;
          if(((b_4 != NULL) && (b_4 != c_4)))
            _fail(c_4);
          else
            b_4 = c_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_4), term_g_8);
        t = geq_0(t);
      }
    }
    t = e_8;
    t = j_80(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm modification_time_0 (ATerm t)
{
  ATerm f_4 = NULL;
  f_4 = t;
  t = SSL_modification_time(not_null(f_4));
  return(t);
}
ATerm add_extension_0 (ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
  k_4 = t;
  j_4 :
  if(match_cons(k_4, sym__2))
    {
      l_4 = ATgetArgument(k_4, 0);
      m_4 = ATgetArgument(k_4, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_4)), term_i_8), not_null(l_4));
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
  ATerm t_4 = NULL,v_4 = NULL;
  ATerm j_8;
  j_8 = t;
  {
    ATerm u_4 = NULL;
    u_4 = t;
    if(((t_4 != NULL) && (t_4 != u_4)))
      _fail(u_4);
    else
      t_4 = u_4;
  }
  t = j_8;
  {
    ATerm w_4 = NULL,y_4 = NULL;
    ATerm x_4 = NULL;
    x_4 = t;
    if(((w_4 != NULL) && (w_4 != x_4)))
      _fail(x_4);
    else
      w_4 = x_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_4), term_k_8);
      {
        t = add_extension_0(t);
        {
          t = file_exists_0(t);
          {
            y_4 = t;
            if(((v_4 != NULL) && (v_4 != y_4)))
              _fail(y_4);
            else
              v_4 = y_4;
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_4), not_null(t_4));
      {
        ATerm l_8;
        l_8 = t;
        {
          t = _2(t, modification_time_0, modification_time_0);
          t = geq_0(t);
        }
        t = l_8;
        {
          t = Fst_0(t);
          {
            ATerm u_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = term_m_8;
                return(t);
              }
              t = debug_1(t, v_0);
              return(t);
            }
            t = if_verbose2_1(t, u_0);
          }
        }
      }
    }
  }
  return(t);
}
ATerm lookup_or_parse_0 (ATerm t)
{
  ATerm n_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = lookup_pp_af_0(t);
      ;
      LocalPopChoice(t_8);
    }
  else
    {
      t = n_8;
      t = parse_to_temp_file_0(t);
    }
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm w_8;
  w_8 = t;
  {
    t = error_0(t);
    {
      t = term_x_8;
      t = exit_0(t);
    }
  }
  t = w_8;
  return(t);
}
ATerm must_be_pp_0 (ATerm t)
{
  ATerm y_8 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        t = term_c_9;
        return(t);
      }
      t = has_extension_1(t, w_0);
      ;
      LocalPopChoice(b_9);
    }
  else
    {
      t = y_8;
      {
        ATerm d_5 = NULL;
        ATerm e_5 = NULL;
        e_5 = t;
        if(((d_5 != NULL) && (d_5 != e_5)))
          _fail(e_5);
        else
          d_5 = e_5;
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_5)), term_d_9);
          t = fatal_error_0(t);
        }
      }
    }
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm r_69 (ATerm))
{
  ATerm g_5 (ATerm t)
  {
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_69(t);
        ;
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        t = Cons_2(t, _id, g_5);
      }
    return(t);
  }
  t = g_5(t);
  return(t);
}
ATerm has_extension_1 (ATerm t, ATerm q_77 (ATerm))
{
  ATerm j_5 = NULL;
  ATerm i_9;
  i_9 = t;
  {
    ATerm k_5 = NULL;
    t = q_77(t);
    {
      t = explode_string_0(t);
      {
        k_5 = t;
        if(((j_5 != NULL) && (j_5 != k_5)))
          _fail(k_5);
        else
          j_5 = k_5;
      }
    }
  }
  t = i_9;
  {
    ATerm j_9;
    j_9 = t;
    {
      t = explode_string_0(t);
      {
        ATerm z_0 (ATerm t)
        {
          ATerm l_5 = NULL;
          l_5 = t;
          if(((j_5 != NULL) && (j_5 != l_5)))
            _fail(l_5);
          else
            j_5 = l_5;
          return(t);
        }
        t = at_suffix_1(t, z_0);
      }
    }
    t = j_9;
  }
  return(t);
}
ATerm ensure_pp_table_parsed_0 (ATerm t)
{
  ATerm k_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        t = term_s_9;
        return(t);
      }
      t = has_extension_1(t, a_1);
      ;
      LocalPopChoice(n_9);
    }
  else
    {
      t = k_9;
      {
        t = must_be_pp_0(t);
        t = lookup_or_parse_0(t);
      }
    }
  return(t);
}
ATerm get_config_p_0 (ATerm t)
{
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_9;
      t = get_config_0(t);
      ;
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm create_pp_table_args_0 (ATerm t)
{
  t = get_config_p_0(t);
  {
    ATerm b_1 (ATerm t)
    {
      ATerm p_5 = NULL;
      t = ensure_pp_table_parsed_0(t);
      {
        p_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_5)), term_w_9);
      }
      return(t);
    }
    t = map_1(t, b_1);
    {
      t = concat_0(t);
      {
        ATerm c_1 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            t = term_c_10;
            return(t);
          }
          t = debug_1(t, d_1);
          return(t);
        }
        t = if_verbose5_1(t, c_1);
      }
    }
  }
  return(t);
}
ATerm build_impl_args_0 (ATerm t)
{
  t = create_pp_table_args_0(t);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL;
  x_5 = t;
  w_5 :
  if(match_cons(x_5, sym_stdin_0))
    {
      ATerm z_5 = NULL;
      ATerm a_6 = NULL;
      t = term_g_10;
      {
        t = ReadFromFile_0(t);
        {
          a_6 = t;
          if(((z_5 != NULL) && (z_5 != a_6)))
            _fail(a_6);
          else
            z_5 = a_6;
        }
      }
      t = not_null(z_5);
    }
  else
    {
      if(match_cons(x_5, sym_FILE_1))
        {
          y_5 = ATgetArgument(x_5, 0);
          {
            ATerm c_6 = NULL;
            ATerm d_6 = NULL;
            t = not_null(y_5);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  d_6 = t;
                  if(((c_6 != NULL) && (c_6 != d_6)))
                    _fail(d_6);
                  else
                    c_6 = d_6;
                }
              }
            }
            t = not_null(c_6);
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
  ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL;
  m_6 = t;
  k_6 :
  if(match_cons(m_6, sym__2))
    {
      n_6 = ATgetArgument(m_6, 0);
      p_6 = ATgetArgument(m_6, 1);
      l_6 :
      if(match_cons(n_6, sym_Stream_1))
        {
          o_6 = ATgetArgument(n_6, 0);
          {
            ATerm s_6 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(o_6), not_null(p_6));
            {
              ATerm t_6 = NULL;
              t_6 = t;
              if(((s_6 != NULL) && (s_6 != t_6)))
                _fail(t_6);
              else
                s_6 = t_6;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_6));
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
  ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
  a_7 = t;
  z_6 :
  if(match_cons(a_7, sym__2))
    {
      b_7 = ATgetArgument(a_7, 0);
      c_7 = ATgetArgument(a_7, 1);
      {
        ATerm f_7 = NULL,h_7 = NULL;
        t = not_null(b_7);
        {
          ATerm g_7 = NULL;
          g_7 = t;
          if(((f_7 != NULL) && (f_7 != g_7)))
            _fail(g_7);
          else
            f_7 = g_7;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_7), term_h_10);
            {
              t = open_stream_0(t);
              {
                ATerm i_7 = NULL;
                i_7 = t;
                if(((h_7 != NULL) && (h_7 != i_7)))
                  _fail(i_7);
                else
                  h_7 = i_7;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), not_null(c_7));
                  {
                    t = f_65(t);
                    {
                      t = fclose_0(t);
                      t = not_null(c_7);
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
  ATerm o_7 = NULL;
  ATerm q_7 = NULL;
  o_7 = t;
  {
    ATerm r_7 = NULL;
    t = xtc_new_file_0(t);
    {
      r_7 = t;
      {
        if(((q_7 != NULL) && (q_7 != r_7)))
          _fail(r_7);
        else
          q_7 = r_7;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_7), not_null(o_7));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(q_7);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_7));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm j_83 (ATerm), ATerm k_83 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, j_83, k_83);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm v_7 = NULL;
  v_7 = t;
  t = SSL_close_file(not_null(v_7));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
  a_8 = t;
  z_7 :
  if(match_cons(a_8, sym__2))
    {
      b_8 = ATgetArgument(a_8, 0);
      c_8 = ATgetArgument(a_8, 1);
      t = SSL_execvp(not_null(b_8), not_null(c_8));
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
  ATerm h_8 = NULL;
  h_8 = t;
  t = SSL_int_to_string(not_null(h_8));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL;
  p_8 = t;
  o_8 :
  if(match_cons(p_8, sym_UnknownSignal_1))
    {
      q_8 = ATgetArgument(p_8, 0);
      {
        ATerm u_8 = NULL;
        ATerm v_8 = NULL;
        t = not_null(q_8);
        {
          t = int_to_string_0(t);
          {
            v_8 = t;
            if(((u_8 != NULL) && (u_8 != v_8)))
              _fail(v_8);
            else
              u_8 = v_8;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), not_null(u_8)), term_i_10);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(p_8, sym_Signal_3))
        {
          q_8 = ATgetArgument(p_8, 0);
          r_8 = ATgetArgument(p_8, 1);
          s_8 = ATgetArgument(p_8, 2);
          {
            ATerm z_8 = NULL;
            ATerm a_9 = NULL;
            t = not_null(r_8);
            {
              t = int_to_string_0(t);
              {
                a_9 = t;
                if(((z_8 != NULL) && (z_8 != a_9)))
                  _fail(a_9);
                else
                  z_8 = a_9;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(s_8)), term_m_10), not_null(z_8)), term_l_10), not_null(q_8));
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
  ATerm g_9 = NULL;
  ATerm e_1 (ATerm t)
  {
    ATerm h_9 = NULL;
    t = j_69(t);
    {
      h_9 = t;
      if(((g_9 != NULL) && (g_9 != h_9)))
        _fail(h_9);
      else
        g_9 = h_9;
    }
    return(t);
  }
  t = fetch_1(t, e_1);
  t = not_null(g_9);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm m_9 = NULL;
  m_9 = t;
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_19), term_w_18), term_q_18), term_i_18), term_a_18), term_s_17), term_k_17), term_d_17), term_z_16), term_n_16), term_j_16), term_w_15), term_r_15), term_j_15), term_a_15), term_s_14), term_k_14), term_d_14), term_r_13), term_i_13), term_u_12), term_m_12), term_g_12), term_a_12), term_v_11), term_n_11), term_y_10), term_v_10);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
            o_9 = t;
            l_9 :
            if(match_cons(o_9, sym_Signal_3))
              {
                p_9 = ATgetArgument(o_9, 0);
                q_9 = ATgetArgument(o_9, 1);
                r_9 = ATgetArgument(o_9, 2);
                if(((m_9 != NULL) && (m_9 != q_9)))
                  _fail(q_9);
                else
                  m_9 = q_9;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, f_1);
        }
        ;
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(m_9));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm b_19;
  b_19 = t;
  {
    ATerm g_1 (ATerm t)
    {
      ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL;
      y_9 = t;
      x_9 :
      if(match_cons(y_9, sym_WaitStatus_3))
        {
          z_9 = ATgetArgument(y_9, 0);
          a_10 = ATgetArgument(y_9, 1);
          b_10 = ATgetArgument(y_9, 2);
          {
            ATerm e_10 = NULL;
            t = not_null(a_10);
            {
              ATerm g_19 = t;
              if((PushChoice() == 0))
                {
                  ATerm d_10 = NULL;
                  d_10 = t;
                  v_9 :
                  if(!(match_int(d_10, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = g_19;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm f_10 = NULL;
                    f_10 = t;
                    if(((e_10 != NULL) && (e_10 != f_10)))
                      _fail(f_10);
                    else
                      e_10 = f_10;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_10)), term_q_19));
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
    t = try_1(t, g_1);
  }
  t = b_19;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm j_10 = NULL;
  j_10 = t;
  t = SSL_waitpid(not_null(j_10));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm t_63 (ATerm), ATerm u_63 (ATerm))
{
  ATerm q_10 = NULL;
  ATerm s_10 = NULL;
  q_10 = t;
  {
    t = fork_0(t);
    {
      s_10 = t;
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_10 = NULL;
            u_10 = t;
            p_10 :
            if(match_int(u_10, 0))
              {
                t = not_null(q_10);
                t = t_63(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), not_null(q_10));
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
  ATerm d_11 = NULL;
  ATerm h_1 (ATerm t)
  {
    ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
    e_11 = t;
    c_11 :
    if(match_cons(e_11, sym__2))
      {
        f_11 = ATgetArgument(e_11, 0);
        g_11 = ATgetArgument(e_11, 1);
        {
          ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
          if(((d_11 != NULL) && (d_11 != g_11)))
            _fail(g_11);
          else
            d_11 = g_11;
          {
            t = not_null(f_11);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  i_11 = t;
                  a_11 :
                  if(match_cons(i_11, sym_WaitStatus_3))
                    {
                      j_11 = ATgetArgument(i_11, 0);
                      k_11 = ATgetArgument(i_11, 1);
                      l_11 = ATgetArgument(i_11, 2);
                      b_11 :
                      if(match_int(j_11, 0))
                        {
                          t = not_null(d_11);
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
  t = fork_2(t, v_63, h_1);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
  q_11 = t;
  p_11 :
  if(match_cons(q_11, sym__2))
    {
      r_11 = ATgetArgument(q_11, 0);
      s_11 = ATgetArgument(q_11, 1);
      {
        ATerm i_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_11), not_null(s_11));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, i_1);
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
  ATerm x_11 = NULL;
  x_11 = t;
  t = SSL_table_keys(not_null(x_11));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm d_12 = NULL;
  d_12 = t;
  {
    t = table_keys_0(t);
    {
      ATerm j_1 (ATerm t)
      {
        ATerm f_12 = NULL;
        ATerm h_12 = NULL;
        f_12 = t;
        {
          ATerm i_12 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_12), not_null(f_12));
          {
            t = table_get_0(t);
            {
              i_12 = t;
              if(((h_12 != NULL) && (h_12 != i_12)))
                _fail(i_12);
              else
                h_12 = i_12;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_12), not_null(h_12));
        }
        return(t);
      }
      t = map_1(t, j_1);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm m_80 (ATerm))
{
  ATerm k_1 (ATerm t)
  {
    ATerm t_19;
    t_19 = t;
    {
      ATerm n_12 = NULL;
      ATerm o_12 = NULL;
      t = term_f_8;
      {
        t = get_config_0(t);
        {
          o_12 = t;
          if(((n_12 != NULL) && (n_12 != o_12)))
            _fail(o_12);
          else
            n_12 = o_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_12), term_e_18);
        t = geq_0(t);
      }
    }
    t = t_19;
    t = m_80(t);
    return(t);
  }
  t = try_1(t, k_1);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm u_19;
  u_19 = t;
  {
    ATerm r_12 = NULL;
    ATerm s_12 = NULL;
    s_12 = t;
    if(((r_12 != NULL) && (r_12 != s_12)))
      _fail(s_12);
    else
      r_12 = s_12;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_19, not_null(r_12));
      t = printnl_0(t);
    }
  }
  t = u_19;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm y_12 = NULL;
  ATerm a_13 = NULL,b_13 = NULL;
  y_12 = t;
  {
    ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_v_19, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_12)));
    {
      t = table_get_0(t);
      {
        c_13 = t;
        w_12 :
        if(((ATgetType(c_13) == AT_LIST) && !(ATisEmpty(c_13))))
          {
            d_13 = ATgetFirst((ATermList) c_13);
            g_13 = (ATerm) ATgetNext((ATermList) c_13);
            x_12 :
            if(match_cons(d_13, sym__2))
              {
                e_13 = ATgetArgument(d_13, 0);
                f_13 = ATgetArgument(d_13, 1);
                {
                  if(((a_13 != NULL) && (a_13 != e_13)))
                    _fail(e_13);
                  else
                    a_13 = e_13;
                  if(((b_13 != NULL) && (b_13 != f_13)))
                    _fail(f_13);
                  else
                    b_13 = f_13;
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
    t = not_null(b_13);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
  n_13 = t;
  m_13 :
  if(match_cons(n_13, sym__2))
    {
      o_13 = ATgetArgument(n_13, 0);
      p_13 = ATgetArgument(n_13, 1);
      {
        ATerm s_13 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_v_19, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_13)));
        {
          t = table_get_0(t);
          {
            ATerm l_1 (ATerm t)
            {
              ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
              t_13 = t;
              l_13 :
              if(match_cons(t_13, sym__2))
                {
                  u_13 = ATgetArgument(t_13, 0);
                  v_13 = ATgetArgument(t_13, 1);
                  {
                    if(((p_13 != NULL) && (p_13 != u_13)))
                      _fail(u_13);
                    else
                      p_13 = u_13;
                    if(((s_13 != NULL) && (s_13 != v_13)))
                      _fail(v_13);
                    else
                      s_13 = v_13;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, l_1);
          }
        }
        t = not_null(s_13);
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
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      {
        ATerm f_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              t = filter_1(t, n_76);
              return(t);
            }
            t = Cons_2(t, n_76, m_1);
            ;
            LocalPopChoice(g_20);
          }
        else
          {
            t = f_20;
            {
              ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
              a_14 = t;
              z_13 :
              if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
                {
                  b_14 = ATgetFirst((ATermList) a_14);
                  c_14 = (ATerm) ATgetNext((ATermList) a_14);
                  {
                    t = not_null(c_14);
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
  ATerm f_14 (ATerm t)
  {
    ATerm n_1 (ATerm t)
    {
      t = h_78(t);
      t = f_14(t);
      return(t);
    }
    t = try_1(t, n_1);
    return(t);
  }
  t = f_14(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm h_20;
  h_20 = t;
  {
    ATerm o_1 (ATerm t)
    {
      t = term_n_20;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm o_20 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = o_20;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, o_1);
  }
  t = h_20;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm r_20;
  r_20 = t;
  {
    ATerm h_14 = NULL;
    ATerm i_14 = NULL;
    i_14 = t;
    if(((h_14 != NULL) && (h_14 != i_14)))
      _fail(i_14);
    else
      h_14 = i_14;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATinsert(ATempty, not_null(h_14)));
      t = printnl_0(t);
    }
  }
  t = r_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm s_20;
  s_20 = t;
  {
    t = v_64(t);
    t = debug_0(t);
  }
  t = s_20;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm p_1 (ATerm t)
  {
    ATerm t_20;
    t_20 = t;
    {
      ATerm l_14 = NULL;
      ATerm m_14 = NULL;
      t = term_f_8;
      {
        t = get_config_0(t);
        {
          m_14 = t;
          if(((l_14 != NULL) && (l_14 != m_14)))
            _fail(m_14);
          else
            l_14 = m_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), term_g_14);
        t = geq_0(t);
      }
    }
    t = t_20;
    t = l_80(t);
    return(t);
  }
  t = try_1(t, p_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    ATerm u_20;
    u_20 = t;
    {
      ATerm p_14 = NULL;
      ATerm q_14 = NULL;
      t = term_f_8;
      {
        t = get_config_0(t);
        {
          q_14 = t;
          if(((p_14 != NULL) && (p_14 != q_14)))
            _fail(q_14);
          else
            p_14 = q_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_14), term_t_11);
        t = geq_0(t);
      }
    }
    t = u_20;
    t = n_80(t);
    return(t);
  }
  t = try_1(t, q_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
  u_14 = t;
  t_14 :
  if(match_cons(u_14, sym__2))
    {
      v_14 = ATgetArgument(u_14, 0);
      w_14 = ATgetArgument(u_14, 1);
      if(((v_14 != NULL) && (v_14 != w_14)))
        _fail(w_14);
      else
        v_14 = w_14;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm b_73 (ATerm), ATerm c_73 (ATerm))
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
  c_15 = t;
  b_15 :
  if(((ATgetType(c_15) == AT_LIST) && !(ATisEmpty(c_15))))
    {
      d_15 = ATgetFirst((ATermList) c_15);
      e_15 = (ATerm) ATgetNext((ATermList) c_15);
      {
        t = c_73(t);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm h_15 = NULL;
            h_15 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_15), not_null(h_15));
              t = b_73(t);
            }
            return(t);
          }
          t = fetch_1(t, r_1);
        }
        t = not_null(e_15);
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
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
  n_15 = t;
  m_15 :
  if(match_cons(n_15, sym__2))
    {
      o_15 = ATgetArgument(n_15, 0);
      p_15 = ATgetArgument(n_15, 1);
      {
        t = not_null(o_15);
        {
          ATerm t_15 (ATerm t)
          {
            ATerm v_20 = t;
            int x_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(p_15);
                ;
                LocalPopChoice(x_20);
              }
            else
              {
                t = v_20;
                {
                  ATerm z_20 = t;
                  int a_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_1 (ATerm t)
                      {
                        t = not_null(p_15);
                        return(t);
                      }
                      t = HdMember_p__2(t, x_72, s_1);
                      t = t_15(t);
                      ;
                      LocalPopChoice(a_21);
                    }
                  else
                    {
                      t = z_20;
                      t = Cons_2(t, _id, t_15);
                    }
                }
              }
            return(t);
          }
          t = t_15(t);
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
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
  y_15 = t;
  x_15 :
  if(match_cons(y_15, sym__3))
    {
      z_15 = ATgetArgument(y_15, 0);
      a_16 = ATgetArgument(y_15, 1);
      b_16 = ATgetArgument(y_15, 2);
      {
        ATerm b_21;
        b_21 = t;
        {
          ATerm f_16 = NULL;
          ATerm g_16 = NULL,i_16 = NULL;
          ATerm h_16 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_15), not_null(a_16));
          {
            ATerm d_21 = t;
            int e_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(e_21);
              }
            else
              {
                t = d_21;
                t = (ATerm) ATempty;
              }
            {
              h_16 = t;
              if(((g_16 != NULL) && (g_16 != h_16)))
                _fail(h_16);
              else
                g_16 = h_16;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_16), not_null(b_16));
            {
              t = union_0(t);
              {
                i_16 = t;
                if(((f_16 != NULL) && (f_16 != i_16)))
                  _fail(i_16);
                else
                  f_16 = i_16;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_15), not_null(a_16), not_null(f_16));
            t = set_0(t);
          }
        }
        t = b_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm w_80 (ATerm))
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
  q_16 = t;
  p_16 :
  if(match_cons(q_16, sym__2))
    {
      r_16 = ATgetArgument(q_16, 0);
      s_16 = ATgetArgument(q_16, 1);
      {
        t = not_null(s_16);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
            v_16 = t;
            o_16 :
            if(match_cons(v_16, sym__2))
              {
                w_16 = ATgetArgument(v_16, 0);
                x_16 = ATgetArgument(v_16, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(r_16), not_null(w_16), not_null(x_16));
                  t = w_80(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, t_1);
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
  ATerm f_17 = NULL,g_17 = NULL;
  ATerm m_17 (ATerm t)
  {
    t = SSL_fclose(not_null(g_17));
    return(t);
  }
  g_17 = t;
  e_17 :
  if(match_cons(g_17, sym_Stream_1))
    {
      f_17 = ATgetArgument(g_17, 0);
      {
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(f_17));
            ;
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
            t = m_17(t);
          }
      }
    }
  else
    {
      t = m_17(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL;
  p_17 = t;
  o_17 :
  if(match_cons(p_17, sym_Stream_1))
    {
      q_17 = ATgetArgument(p_17, 0);
      t = SSL_read_term_from_stream(not_null(q_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
  w_17 = t;
  v_17 :
  if(match_cons(w_17, sym__2))
    {
      x_17 = ATgetArgument(w_17, 0);
      y_17 = ATgetArgument(w_17, 1);
      {
        ATerm b_18 = NULL;
        t = SSL_fopen(not_null(x_17), not_null(y_17));
        {
          ATerm c_18 = NULL;
          c_18 = t;
          if(((b_18 != NULL) && (b_18 != c_18)))
            _fail(c_18);
          else
            b_18 = c_18;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_18));
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
  ATerm g_18 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm h_18 = NULL;
    h_18 = t;
    if(((g_18 != NULL) && (g_18 != h_18)))
      _fail(h_18);
    else
      g_18 = h_18;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_18));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm k_18 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm l_18 = NULL;
    l_18 = t;
    if(((k_18 != NULL) && (k_18 != l_18)))
      _fail(l_18);
    else
      k_18 = l_18;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_18));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm o_18 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm p_18 = NULL;
    p_18 = t;
    if(((o_18 != NULL) && (o_18 != p_18)))
      _fail(p_18);
    else
      o_18 = p_18;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_18));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm v_18 = NULL;
  v_18 = t;
  u_18 :
  if(match_cons(v_18, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(v_18, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(v_18, sym_stdin_0))
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
  ATerm f_19 = NULL;
  ATerm h_19 = NULL,i_19 = NULL;
  f_19 = t;
  {
    ATerm j_19 = NULL;
    ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
    t = not_null(f_19);
    {
      j_19 = t;
      {
        t = SSL_explode_term(not_null(j_19));
        {
          l_19 = t;
          c_19 :
          if(match_cons(l_19, sym__2))
            {
              m_19 = ATgetArgument(l_19, 0);
              n_19 = ATgetArgument(l_19, 1);
              d_19 :
              if(match_string(m_19, ""))
                {
                  e_19 :
                  if(((ATgetType(n_19) == AT_LIST) && !(ATisEmpty(n_19))))
                    {
                      o_19 = ATgetFirst((ATermList) n_19);
                      p_19 = (ATerm) ATgetNext((ATermList) n_19);
                      {
                        if(((i_19 != NULL) && (i_19 != o_19)))
                          _fail(o_19);
                        else
                          i_19 = o_19;
                        if(((h_19 != NULL) && (h_19 != p_19)))
                          _fail(p_19);
                        else
                          h_19 = p_19;
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
    t = not_null(i_19);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  y_19 = t;
  x_19 :
  if(match_cons(y_19, sym__2))
    {
      z_19 = ATgetArgument(y_19, 0);
      a_20 = ATgetArgument(y_19, 1);
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            {
              ATerm j_21 = t;
              int k_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_1 (ATerm t)
                  {
                    ATerm b_20 = NULL,c_20 = NULL;
                    b_20 = t;
                    w_19 :
                    if(match_cons(b_20, sym_Path_1))
                      {
                        c_20 = ATgetArgument(b_20, 0);
                        t = not_null(c_20);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, u_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(k_21);
                }
              else
                {
                  t = j_21;
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
  ATerm k_20 = NULL;
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_20 = NULL;
      ATerm j_20 = NULL;
      j_20 = t;
      if(((i_20 != NULL) && (i_20 != j_20)))
        _fail(j_20);
      else
        i_20 = j_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), term_n_21);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      {
        ATerm v_1 (ATerm t)
        {
          t = term_o_21;
          return(t);
        }
        t = debug_1(t, v_1);
        _fail(t);
      }
    }
  {
    ATerm q_21;
    q_21 = t;
    {
      ATerm l_20 = NULL;
      t = read_from_stream_0(t);
      {
        l_20 = t;
        if(((k_20 != NULL) && (k_20 != l_20)))
          _fail(l_20);
        else
          k_20 = l_20;
      }
    }
    t = q_21;
    {
      t = fclose_0(t);
      t = not_null(k_20);
    }
  }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm p_20 = NULL;
  ATerm q_20 = NULL;
  q_20 = t;
  if(((p_20 != NULL) && (p_20 != q_20)))
    _fail(q_20);
  else
    p_20 = q_20;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_20), (ATerm) ATinsert(ATempty, term_r_21));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(t_21);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = s_21;
      {
        ATerm u_21 = t;
        int x_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_21 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_21;
              }
            {
              ATerm w_1 (ATerm t)
              {
                t = term_z_21;
                return(t);
              }
              t = debug_1(t, w_1);
            }
            ;
            LocalPopChoice(x_21);
          }
        else
          {
            t = u_21;
            {
              ATerm x_1 (ATerm t)
              {
                t = term_e_22;
                return(t);
              }
              t = debug_1(t, x_1);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm w_20 = NULL;
  ATerm y_20 = NULL;
  w_20 = t;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm z_1 (ATerm t)
      {
        t = term_f_22;
        return(t);
      }
      t = debug_1(t, z_1);
      return(t);
    }
    t = if_verbose5_1(t, y_1);
    {
      ATerm g_22 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_19, (ATerm) ATmakeAppl(sym_Imported_1, not_null(w_20)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = g_22;
        }
      {
        ATerm h_22;
        h_22 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_19, term_i_22, (ATerm) ATinsert(ATempty, not_null(w_20)));
          t = table_put_0(t);
        }
        t = h_22;
        {
          ATerm b_2 (ATerm t)
          {
            ATerm c_2 (ATerm t)
            {
              t = term_o_22;
              return(t);
            }
            t = debug_1(t, c_2);
            return(t);
          }
          t = if_verbose4_1(t, b_2);
          {
            t = read_repository_file_0(t);
            {
              ATerm d_2 (ATerm t)
              {
                ATerm e_2 (ATerm t)
                {
                  t = term_p_22;
                  return(t);
                }
                t = say_1(t, e_2);
                return(t);
              }
              t = if_verbose6_1(t, d_2);
              {
                ATerm c_21 = NULL;
                c_21 = t;
                if(((y_20 != NULL) && (y_20 != c_21)))
                  _fail(c_21);
                else
                  y_20 = c_21;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_19, not_null(y_20));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm f_2 (ATerm t)
                      {
                        ATerm g_2 (ATerm t)
                        {
                          t = term_x_22;
                          return(t);
                        }
                        t = say_1(t, g_2);
                        return(t);
                      }
                      t = if_verbose6_1(t, f_2);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_v_19, (ATerm)ATmakeAppl(sym_Imported_1, not_null(w_20)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm h_2 (ATerm t)
                            {
                              ATerm i_2 (ATerm t)
                              {
                                t = term_p_22;
                                return(t);
                              }
                              t = say_1(t, i_2);
                              return(t);
                            }
                            t = if_verbose4_1(t, h_2);
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
  ATerm p_21 = NULL;
  p_21 = t;
  t = SSL_getenv(not_null(p_21));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_23;
      t = get_config_0(t);
      ;
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
      {
        ATerm b_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_l_23;
            t = getenv_0(t);
            ;
            LocalPopChoice(h_23);
          }
        else
          {
            t = b_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm k_2 (ATerm t)
    {
      t = term_m_23;
      return(t);
    }
    t = debug_1(t, k_2);
    return(t);
  }
  t = if_verbose5_1(t, j_2);
  {
    ATerm p_23;
    p_23 = t;
    {
      ATerm u_23 = t;
      int v_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_w_23;
          t = table_get_0(t);
          ;
          LocalPopChoice(v_23);
        }
      else
        {
          t = u_23;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = p_23;
    {
      ATerm l_2 (ATerm t)
      {
        ATerm m_2 (ATerm t)
        {
          t = term_x_23;
          return(t);
        }
        t = debug_1(t, m_2);
        return(t);
      }
      t = if_verbose5_1(t, l_2);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 (ATerm t)
      {
        ATerm o_2 (ATerm t)
        {
          t = term_e_24;
          return(t);
        }
        t = debug_1(t, o_2);
        return(t);
      }
      t = if_verbose5_1(t, n_2);
      {
        t = xtc_load_0(t);
        {
          ATerm f_24 = t;
          int g_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(g_24);
            }
          else
            {
              t = f_24;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm p_2 (ATerm t)
            {
              ATerm q_2 (ATerm t)
              {
                t = term_e_24;
                return(t);
              }
              t = debug_1(t, q_2);
              return(t);
            }
            t = if_verbose5_1(t, p_2);
          }
        }
      }
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm v_21 = NULL;
        ATerm w_21 = NULL;
        w_21 = t;
        if(((v_21 != NULL) && (v_21 != w_21)))
          _fail(w_21);
        else
          v_21 = w_21;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_24), not_null(v_21)), term_h_24);
          {
            t = error_0(t);
            {
              ATerm r_2 (ATerm t)
              {
                t = term_v_19;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm s_2 (ATerm t)
                    {
                      t = term_j_24;
                      return(t);
                    }
                    t = debug_1(t, s_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, r_2);
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
ATerm xtc_command_1 (ATerm t, ATerm a_83 (ATerm))
{
  ATerm a_22 = NULL;
  ATerm k_24;
  k_24 = t;
  {
    ATerm b_22 = NULL;
    t = a_83(t);
    {
      t = xtc_find_warning_0(t);
      {
        b_22 = t;
        if(((a_22 != NULL) && (a_22 != b_22)))
          _fail(b_22);
        else
          a_22 = b_22;
      }
    }
  }
  t = k_24;
  {
    ATerm m_24;
    m_24 = t;
    {
      ATerm c_22 = NULL;
      ATerm d_22 = NULL;
      d_22 = t;
      if(((c_22 != NULL) && (c_22 != d_22)))
        _fail(d_22);
      else
        c_22 = d_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_22), not_null(c_22));
        t = call_0(t);
      }
    }
    t = m_24;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm l_79 (ATerm))
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym__2))
    {
      m_22 = ATgetArgument(l_22, 0);
      n_22 = ATgetArgument(l_22, 1);
      {
        ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
        ATerm n_24;
        n_24 = t;
        {
          ATerm t_22 = NULL;
          ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
          t = l_79(t);
          {
            t_22 = t;
            {
              if(((q_22 != NULL) && (q_22 != t_22)))
                _fail(t_22);
              else
                q_22 = t_22;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_22), not_null(m_22), not_null(n_22));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_24 = t;
                    int p_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_22), term_q_24);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(p_24);
                      }
                    else
                      {
                        t = o_24;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_22 = t;
                      j_22 :
                      if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
                        {
                          v_22 = ATgetFirst((ATermList) u_22);
                          w_22 = (ATerm) ATgetNext((ATermList) u_22);
                          {
                            if(((r_22 != NULL) && (r_22 != v_22)))
                              _fail(v_22);
                            else
                              r_22 = v_22;
                            {
                              if(((s_22 != NULL) && (s_22 != w_22)))
                                _fail(w_22);
                              else
                                s_22 = w_22;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_22), term_q_24, (ATerm) ATinsert(CheckATermList(not_null(s_22)), (ATerm) ATinsert(CheckATermList(not_null(r_22)), not_null(m_22))));
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
        t = n_24;
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
  ATerm r_24;
  r_24 = t;
  {
    t = y_64(t);
    {
      ATerm t_2 (ATerm t)
      {
        t = term_s_24;
        return(t);
      }
      t = debug_1(t, t_2);
    }
  }
  t = r_24;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
  ATerm n_23 (ATerm t)
  {
    ATerm t_24 = t;
    if((PushChoice() == 0))
      {
        ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
        i_23 = t;
        c_23 :
        if(match_cons(i_23, sym__2))
          {
            j_23 = ATgetArgument(i_23, 0);
            k_23 = ATgetArgument(i_23, 1);
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
        t = t_24;
      }
    {
      ATerm u_2 (ATerm t)
      {
        t = term_u_24;
        return(t);
      }
      t = obsolete_1(t, u_2);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_23), term_h_10);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm o_23 (ATerm t)
  {
    t = SSL_open_file(not_null(f_23), not_null(g_23));
    return(t);
  }
  e_23 = t;
  d_23 :
  if(match_cons(e_23, sym__2))
    {
      f_23 = ATgetArgument(e_23, 0);
      g_23 = ATgetArgument(e_23, 1);
      {
        ATerm v_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_23(t);
            ;
            LocalPopChoice(w_24);
          }
        else
          {
            t = v_24;
            t = o_23(t);
          }
      }
    }
  else
    {
      t = n_23(t);
    }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  r_23 = t;
  q_23 :
  if(match_cons(r_23, sym__2))
    {
      s_23 = ATgetArgument(r_23, 0);
      t_23 = ATgetArgument(r_23, 1);
      t = SSL_access(not_null(s_23), not_null(t_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm y_23 = NULL;
  ATerm z_23 = NULL;
  z_23 = t;
  if(((y_23 != NULL) && (y_23 != z_23)))
    _fail(z_23);
  else
    y_23 = z_23;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_23), (ATerm) ATinsert(ATempty, term_e_25));
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
  ATerm c_24 = NULL;
  ATerm d_24 = NULL;
  t = term_f_25;
  {
    t = new_0(t);
    {
      d_24 = t;
      if(((c_24 != NULL) && (c_24 != d_24)))
        _fail(d_24);
      else
        c_24 = d_24;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_24), term_g_25);
    {
      t = conc_strings_0(t);
      {
        ATerm w_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, w_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm l_24 = NULL;
  t = new_file_0(t);
  {
    l_24 = t;
    {
      ATerm l_25;
      l_25 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_24), term_h_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_24), term_f_25);
            {
              ATerm x_2 (ATerm t)
              {
                t = term_m_25;
                return(t);
              }
              t = assert_1(t, x_2);
            }
          }
        }
      }
      t = l_25;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm y_24 = NULL,z_24 = NULL;
  y_24 = t;
  x_24 :
  if(match_cons(y_24, sym_stdin_0))
    {
      ATerm a_25 = NULL;
      ATerm b_25 = NULL;
      ATerm c_25 = NULL;
      t = xtc_new_file_0(t);
      {
        b_25 = t;
        {
          if(((a_25 != NULL) && (a_25 != b_25)))
            _fail(b_25);
          else
            a_25 = b_25;
          {
            ATerm d_25 = NULL;
            t = o_0(t);
            {
              d_25 = t;
              if(((c_25 != NULL) && (c_25 != d_25)))
                _fail(d_25);
              else
                c_25 = d_25;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_25), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_25)), term_n_25));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(a_25);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_25));
    }
  else
    {
      if(match_cons(y_24, sym_FILE_1))
        {
          z_24 = ATgetArgument(y_24, 0);
          {
            ATerm h_25 = NULL;
            ATerm i_25 = NULL;
            t = not_null(z_24);
            {
              ATerm j_25 = NULL;
              t = xtc_new_file_0(t);
              {
                i_25 = t;
                {
                  if(((h_25 != NULL) && (h_25 != i_25)))
                    _fail(i_25);
                  else
                    h_25 = i_25;
                  {
                    ATerm k_25 = NULL;
                    t = o_0(t);
                    {
                      k_25 = t;
                      if(((j_25 != NULL) && (j_25 != k_25)))
                        _fail(k_25);
                      else
                        j_25 = k_25;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(j_25), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_25)), term_n_25), not_null(z_24)), term_o_25));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(h_25);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_25));
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
  ATerm v_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym_stdin_0))
    {
      ATerm x_25 = NULL,e_26 = NULL;
      ATerm p_25;
      p_25 = t;
      {
        ATerm y_25 = NULL;
        t = SSLgetAnnotations(not_null(v_25));
        {
          y_25 = t;
          if(((x_25 != NULL) && (x_25 != y_25)))
            _fail(y_25);
          else
            x_25 = y_25;
        }
      }
      t = p_25;
      {
        ATerm f_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(x_25));
        {
          f_26 = t;
          if(((e_26 != NULL) && (e_26 != f_26)))
            _fail(f_26);
          else
            e_26 = f_26;
        }
        t = not_null(e_26);
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
  ATerm p_26 = NULL,q_26 = NULL;
  p_26 = t;
  o_26 :
  if(match_cons(p_26, sym_FILE_1))
    {
      q_26 = ATgetArgument(p_26, 0);
      {
        ATerm x_26 = NULL,z_26 = NULL;
        ATerm y_26 = NULL;
        t = SSLgetAnnotations(not_null(p_26));
        {
          y_26 = t;
          if(((x_26 != NULL) && (x_26 != y_26)))
            _fail(y_26);
          else
            x_26 = y_26;
        }
        {
          t = not_null(q_26);
          {
            ATerm b_27 = NULL;
            t = q_61(t);
            {
              z_26 = t;
              {
                ATerm c_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(z_26)), not_null(x_26));
                {
                  c_27 = t;
                  if(((b_27 != NULL) && (b_27 != c_27)))
                    _fail(c_27);
                  else
                    b_27 = c_27;
                }
                t = not_null(b_27);
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
ATerm xtc_transform_2 (ATerm t, ATerm c_83 (ATerm), ATerm d_83 (ATerm))
{
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_25 = t;
      int t_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(t_25);
        }
      else
        {
          t = s_25;
          t = stdin_0(t);
        }
      LocalPopChoice(r_25);
      t = xtc_transform_file_2(t, c_83, d_83);
    }
  else
    {
      t = q_25;
      t = xtc_transform_term_2(t, c_83, d_83);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
  j_27 = t;
  i_27 :
  if(match_cons(j_27, sym__2))
    {
      k_27 = ATgetArgument(j_27, 0);
      l_27 = ATgetArgument(j_27, 1);
      t = SSL_copy(not_null(k_27), not_null(l_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  s_27 :
  if(match_cons(t_27, sym_stderr_0))
    {
      ATerm v_27 = NULL,x_27 = NULL;
      ATerm w_25;
      w_25 = t;
      {
        ATerm w_27 = NULL;
        t = SSLgetAnnotations(not_null(t_27));
        {
          w_27 = t;
          if(((v_27 != NULL) && (v_27 != w_27)))
            _fail(w_27);
          else
            v_27 = w_27;
        }
      }
      t = w_25;
      {
        ATerm y_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(v_27));
        {
          y_27 = t;
          if(((x_27 != NULL) && (x_27 != y_27)))
            _fail(y_27);
          else
            x_27 = y_27;
        }
        t = not_null(x_27);
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
  ATerm g_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym_stdout_0))
    {
      ATerm i_28 = NULL,k_28 = NULL;
      ATerm z_25;
      z_25 = t;
      {
        ATerm j_28 = NULL;
        t = SSLgetAnnotations(not_null(g_28));
        {
          j_28 = t;
          if(((i_28 != NULL) && (i_28 != j_28)))
            _fail(j_28);
          else
            i_28 = j_28;
        }
      }
      t = z_25;
      {
        ATerm l_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(i_28));
        {
          l_28 = t;
          if(((k_28 != NULL) && (k_28 != l_28)))
            _fail(l_28);
          else
            k_28 = l_28;
        }
        t = not_null(k_28);
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
  ATerm x_28 = NULL,y_28 = NULL;
  x_28 = t;
  w_28 :
  if(match_cons(x_28, sym_FILE_1))
    {
      y_28 = ATgetArgument(x_28, 0);
      {
        ATerm a_26 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_29 = NULL;
            ATerm b_29 = NULL;
            t = m_0(t);
            {
              b_29 = t;
              {
                if(((a_29 != NULL) && (a_29 != b_29)))
                  _fail(b_29);
                else
                  a_29 = b_29;
                {
                  ATerm c_26 = t;
                  int d_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(d_26);
                    }
                  else
                    {
                      t = c_26;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_28), not_null(a_29));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_28));
            ;
            LocalPopChoice(b_26);
          }
        else
          {
            t = a_26;
            {
              ATerm g_26 = t;
              int h_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_29 = NULL;
                  ATerm e_29 = NULL;
                  t = m_0(t);
                  {
                    e_29 = t;
                    {
                      if(((d_29 != NULL) && (d_29 != e_29)))
                        _fail(e_29);
                      else
                        d_29 = e_29;
                      {
                        ATerm i_26 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm j_26 = t;
                            int k_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(k_26);
                              }
                            else
                              {
                                t = j_26;
                                {
                                  ATerm l_26 = t;
                                  int m_26 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(m_26);
                                    }
                                  else
                                    {
                                      t = l_26;
                                      {
                                        ATerm f_29 = NULL;
                                        f_29 = t;
                                        if(((y_28 != NULL) && (y_28 != f_29)))
                                          _fail(f_29);
                                        else
                                          y_28 = f_29;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = i_26;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_28), not_null(d_29));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_28));
                  ;
                  LocalPopChoice(h_26);
                }
              else
                {
                  t = g_26;
                  {
                    ATerm h_29 = NULL;
                    t = m_0(t);
                    {
                      h_29 = t;
                      if(((y_28 != NULL) && (y_28 != h_29)))
                        _fail(h_29);
                      else
                        y_28 = h_29;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_28));
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
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
  r_29 = t;
  q_29 :
  if(((ATgetType(r_29) == AT_LIST) && !(ATisEmpty(r_29))))
    {
      s_29 = ATgetFirst((ATermList) r_29);
      t_29 = (ATerm) ATgetNext((ATermList) r_29);
      t = not_null(t_29);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
  z_29 = t;
  y_29 :
  if(match_cons(z_29, sym__2))
    {
      a_30 = ATgetArgument(z_29, 0);
      b_30 = ATgetArgument(z_29, 1);
      {
        ATerm n_26;
        n_26 = t;
        {
          ATerm e_30 = NULL;
          ATerm f_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_30), not_null(b_30));
          {
            ATerm r_26 = t;
            int s_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(s_26);
              }
            else
              {
                t = r_26;
                t = (ATerm) ATempty;
              }
            {
              f_30 = t;
              if(((e_30 != NULL) && (e_30 != f_30)))
                _fail(f_30);
              else
                e_30 = f_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_30), not_null(b_30), not_null(e_30));
            t = table_put_0(t);
          }
        }
        t = n_26;
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
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  ATerm t_26;
  t_26 = t;
  {
    ATerm p_30 = NULL;
    ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
    t = i_79(t);
    {
      p_30 = t;
      {
        if(((o_30 != NULL) && (o_30 != p_30)))
          _fail(p_30);
        else
          o_30 = p_30;
        {
          ATerm u_26 = t;
          int v_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_30), term_q_24);
              t = table_get_0(t);
              ;
              LocalPopChoice(v_26);
            }
          else
            {
              t = u_26;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            q_30 = t;
            l_30 :
            if(((ATgetType(q_30) == AT_LIST) && !(ATisEmpty(q_30))))
              {
                r_30 = ATgetFirst((ATermList) q_30);
                s_30 = (ATerm) ATgetNext((ATermList) q_30);
                {
                  if(((n_30 != NULL) && (n_30 != r_30)))
                    _fail(r_30);
                  else
                    n_30 = r_30;
                  {
                    if(((m_30 != NULL) && (m_30 != s_30)))
                      _fail(s_30);
                    else
                      m_30 = s_30;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(o_30), term_q_24, not_null(m_30));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(n_30);
                          {
                            ATerm y_2 (ATerm t)
                            {
                              ATerm t_30 = NULL;
                              t_30 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_30), not_null(t_30));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, y_2);
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
  t = t_26;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm z_30 = NULL;
  z_30 = t;
  t = SSL_remove(not_null(z_30));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm d_80 (ATerm), ATerm e_80 (ATerm))
{
  ATerm w_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_80(t);
      t = e_80(t);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = w_26;
      {
        t = e_80(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm h_79 (ATerm))
{
  ATerm k_31 = NULL;
  ATerm d_27;
  d_27 = t;
  {
    ATerm l_31 = NULL;
    ATerm m_31 = NULL;
    t = h_79(t);
    {
      l_31 = t;
      {
        if(((k_31 != NULL) && (k_31 != l_31)))
          _fail(l_31);
        else
          k_31 = l_31;
        {
          ATerm n_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_31), term_q_24);
          {
            ATerm e_27 = t;
            int f_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(f_27);
              }
            else
              {
                t = e_27;
                t = (ATerm) ATempty;
              }
            {
              n_31 = t;
              if(((m_31 != NULL) && (m_31 != n_31)))
                _fail(n_31);
              else
                m_31 = n_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_31), term_q_24, (ATerm) ATinsert(CheckATermList(not_null(m_31)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = d_27;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm m_82 (ATerm))
{
  ATerm s_31 = NULL,t_31 = NULL;
  ATerm b_3 (ATerm t)
  {
    t = term_m_25;
    return(t);
  }
  t = begin_scope_1(t, b_3);
  {
    ATerm d_3 (ATerm t)
    {
      ATerm g_27;
      g_27 = t;
      {
        ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
        ATerm h_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_n_27;
            t = table_get_0(t);
            ;
            LocalPopChoice(m_27);
          }
        else
          {
            t = h_27;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          u_31 = t;
          r_31 :
          if(((ATgetType(u_31) == AT_LIST) && !(ATisEmpty(u_31))))
            {
              v_31 = ATgetFirst((ATermList) u_31);
              w_31 = (ATerm) ATgetNext((ATermList) u_31);
              {
                if(((t_31 != NULL) && (t_31 != v_31)))
                  _fail(v_31);
                else
                  t_31 = v_31;
                {
                  if(((s_31 != NULL) && (s_31 != w_31)))
                    _fail(w_31);
                  else
                    s_31 = w_31;
                  {
                    t = not_null(t_31);
                    {
                      ATerm h_3 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, h_3);
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
      t = g_27;
      {
        ATerm j_3 (ATerm t)
        {
          t = term_m_25;
          return(t);
        }
        t = end_scope_1(t, j_3);
      }
      return(t);
    }
    t = restore_always_2(t, m_82, d_3);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm n_82 (ATerm))
{
  ATerm k_3 (ATerm t)
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_31 = NULL;
        ATerm a_32 = NULL;
        t = term_o_25;
        {
          t = get_config_0(t);
          {
            a_32 = t;
            if(((z_31 != NULL) && (z_31 != a_32)))
              _fail(a_32);
            else
              z_31 = a_32;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_31));
        ;
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        t = term_g_10;
      }
    {
      t = n_82(t);
      {
        ATerm l_3 (ATerm t)
        {
          ATerm q_27 = t;
          int r_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_n_25;
              t = get_config_0(t);
              ;
              LocalPopChoice(r_27);
            }
          else
            {
              t = q_27;
              t = term_p_7;
            }
          return(t);
        }
        t = copy_to_1(t, l_3);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, k_3);
  return(t);
}
ATerm ast2abox_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm n_3 (ATerm t)
    {
      t = term_u_27;
      return(t);
    }
    t = xtc_transform_2(t, n_3, build_impl_args_0);
    return(t);
  }
  t = xtc_io_1(t, m_3);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm d_32 = NULL;
    d_32 = t;
    c_32 :
    if(!(match_string(d_32, "-v")))
      {
        if(!(match_string(d_32, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_a_28;
    t = set_config_0(t);
    t = term_b_28;
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_c_28;
    return(t);
  }
  t = Option_3(t, o_3, p_3, q_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm g_32 = NULL;
    g_32 = t;
    e_32 :
    if(!(match_string(g_32, "-k")))
      {
        if(!(match_string(g_32, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm d_28;
    d_28 = t;
    {
      ATerm h_32 = NULL;
      ATerm i_32 = NULL;
      t = string_to_int_0(t);
      {
        i_32 = t;
        if(((h_32 != NULL) && (h_32 != i_32)))
          _fail(i_32);
        else
          h_32 = i_32;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_28, not_null(h_32));
        t = set_config_0(t);
      }
    }
    t = d_28;
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_h_28;
    return(t);
  }
  t = ArgOption_3(t, r_3, u_3, x_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm n_32 = NULL;
  n_32 = t;
  t = SSL_string_to_int(not_null(n_32));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_3 (ATerm t)
      {
        ATerm v_32 = NULL;
        v_32 = t;
        q_32 :
        if(!(match_string(v_32, "-S")))
          {
            if(!(match_string(v_32, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        t = term_p_28;
        t = set_config_0(t);
        t = term_q_28;
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        t = term_r_28;
        return(t);
      }
      t = Option_3(t, y_3, z_3, a_4);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      {
        ATerm s_28 = t;
        int t_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 (ATerm t)
            {
              ATerm w_32 = NULL;
              w_32 = t;
              r_32 :
              if(!(match_string(w_32, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm e_4 (ATerm t)
            {
              ATerm z_32 = NULL;
              ATerm u_28;
              u_28 = t;
              {
                ATerm x_32 = NULL;
                ATerm y_32 = NULL;
                t = string_to_int_0(t);
                {
                  y_32 = t;
                  if(((x_32 != NULL) && (x_32 != y_32)))
                    _fail(y_32);
                  else
                    x_32 = y_32;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_8, not_null(x_32));
                  t = set_config_0(t);
                }
              }
              t = u_28;
              {
                ATerm a_33 = NULL;
                a_33 = t;
                if(((z_32 != NULL) && (z_32 != a_33)))
                  _fail(a_33);
                else
                  z_32 = a_33;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(z_32));
              }
              return(t);
            }
            ATerm g_4 (ATerm t)
            {
              t = term_v_28;
              return(t);
            }
            t = ArgOption_3(t, d_4, e_4, g_4);
            ;
            LocalPopChoice(t_28);
          }
        else
          {
            t = s_28;
            {
              ATerm h_4 (ATerm t)
              {
                ATerm b_33 = NULL;
                b_33 = t;
                u_32 :
                if(!(match_string(b_33, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm i_4 (ATerm t)
              {
                t = term_c_29;
                t = set_config_0(t);
                t = term_g_29;
                return(t);
              }
              ATerm n_4 (ATerm t)
              {
                t = term_i_29;
                return(t);
              }
              t = Option_3(t, h_4, i_4, n_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(m_29);
          }
        else
          {
            t = l_29;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm h_33 = NULL;
    h_33 = t;
    e_33 :
    if(!(match_string(h_33, "-o")))
      {
        if(!(match_string(h_33, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    ATerm k_33 = NULL;
    ATerm n_29;
    n_29 = t;
    {
      ATerm i_33 = NULL;
      ATerm j_33 = NULL;
      j_33 = t;
      if(((i_33 != NULL) && (i_33 != j_33)))
        _fail(j_33);
      else
        i_33 = j_33;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_25, not_null(i_33));
        t = set_config_0(t);
      }
    }
    t = n_29;
    {
      ATerm l_33 = NULL;
      l_33 = t;
      if(((k_33 != NULL) && (k_33 != l_33)))
        _fail(l_33);
      else
        k_33 = l_33;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_33));
    }
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = term_o_29;
    return(t);
  }
  t = ArgOption_3(t, o_4, p_4, q_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm p_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(u_29);
    }
  else
    {
      t = p_29;
      {
        ATerm r_4 (ATerm t)
        {
          ATerm p_33 = NULL;
          p_33 = t;
          o_33 :
          if(!(match_string(p_33, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm s_4 (ATerm t)
        {
          t = term_w_29;
          t = set_config_0(t);
          t = term_x_29;
          return(t);
        }
        ATerm z_4 (ATerm t)
        {
          t = term_c_30;
          return(t);
        }
        t = Option_3(t, r_4, s_4, z_4);
      }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm t_33 = NULL;
    t_33 = t;
    q_33 :
    if(!(match_string(t_33, "-i")))
      {
        if(!(match_string(t_33, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    ATerm w_33 = NULL;
    ATerm d_30;
    d_30 = t;
    {
      ATerm u_33 = NULL;
      ATerm v_33 = NULL;
      v_33 = t;
      if(((u_33 != NULL) && (u_33 != v_33)))
        _fail(v_33);
      else
        u_33 = v_33;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_25, not_null(u_33));
        t = set_config_0(t);
      }
    }
    t = d_30;
    {
      ATerm x_33 = NULL;
      x_33 = t;
      if(((w_33 != NULL) && (w_33 != x_33)))
        _fail(x_33);
      else
        w_33 = x_33;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_33));
    }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = term_g_30;
    return(t);
  }
  t = ArgOption_3(t, a_5, b_5, c_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      {
        ATerm j_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(k_30);
          }
        else
          {
            t = j_30;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
  e_34 = t;
  d_34 :
  if(match_cons(e_34, sym__2))
    {
      f_34 = ATgetArgument(e_34, 0);
      g_34 = ATgetArgument(e_34, 1);
      {
        ATerm j_34 = NULL;
        ATerm k_34 = NULL,m_34 = NULL;
        ATerm l_34 = NULL;
        t = not_null(f_34);
        {
          ATerm u_30 = t;
          int v_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(v_30);
            }
          else
            {
              t = u_30;
              t = (ATerm) ATempty;
            }
          {
            l_34 = t;
            if(((k_34 != NULL) && (k_34 != l_34)))
              _fail(l_34);
            else
              k_34 = l_34;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_34), not_null(k_34));
          {
            t = conc_0(t);
            {
              m_34 = t;
              if(((j_34 != NULL) && (j_34 != m_34)))
                _fail(m_34);
              else
                j_34 = m_34;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_30, not_null(f_34), not_null(j_34));
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
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
  v_34 = t;
  t_34 :
  if(match_string(v_34, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(v_34) == AT_LIST) && !(ATisEmpty(v_34))))
        {
          w_34 = ATgetFirst((ATermList) v_34);
          x_34 = (ATerm) ATgetNext((ATermList) v_34);
          u_34 :
          if(((ATgetType(x_34) == AT_LIST) && !(ATisEmpty(x_34))))
            {
              y_34 = ATgetFirst((ATermList) x_34);
              z_34 = (ATerm) ATgetNext((ATermList) x_34);
              {
                ATerm d_35 = NULL;
                ATerm x_30;
                x_30 = t;
                {
                  t = not_null(w_34);
                  t = j_0(t);
                }
                t = x_30;
                {
                  ATerm e_35 = NULL;
                  t = not_null(y_34);
                  {
                    t = k_0(t);
                    {
                      e_35 = t;
                      if(((d_35 != NULL) && (d_35 != e_35)))
                        _fail(e_35);
                      else
                        d_35 = e_35;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_34)), not_null(d_35));
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
ATerm pp_options_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm k_35 = NULL;
    k_35 = t;
    i_35 :
    if(!(match_string(k_35, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    ATerm y_30;
    y_30 = t;
    {
      ATerm l_35 = NULL;
      ATerm m_35 = NULL;
      m_35 = t;
      if(((l_35 != NULL) && (l_35 != m_35)))
        _fail(m_35);
      else
        l_35 = m_35;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATempty, not_null(l_35)));
        t = extend_config_0(t);
      }
    }
    t = y_30;
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = term_a_31;
    return(t);
  }
  t = ArgOption_3(t, f_5, h_5, i_5);
  return(t);
}
ATerm ast2abox_options_0 (ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0(t);
      ;
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      t = io_options_0(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm d_31;
  d_31 = t;
  {
    ATerm p_35 = NULL;
    ATerm q_35 = NULL;
    t = term_f_25;
    {
      t = whoami_0(t);
      {
        q_35 = t;
        if(((p_35 != NULL) && (p_35 != q_35)))
          _fail(q_35);
        else
          p_35 = q_35;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_31), not_null(p_35)), term_e_31));
      {
        t = printnl_0(t);
        {
          t = term_x_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = d_31;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm t_35 = NULL;
  t = report_run_time_0(t);
  {
    ATerm u_35 = NULL;
    t = term_f_25;
    {
      t = whoami_0(t);
      {
        u_35 = t;
        if(((t_35 != NULL) && (t_35 != u_35)))
          _fail(u_35);
        else
          t_35 = u_35;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATinsert(ATinsert(ATempty, term_g_31), not_null(t_35)));
      {
        t = printnl_0(t);
        {
          t = term_x_8;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_h_31;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm x_35 = NULL;
  x_35 = t;
  t = SSL_TicksToSeconds(not_null(x_35));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  c_36 = t;
  b_36 :
  if(match_cons(c_36, sym__2))
    {
      d_36 = ATgetArgument(c_36, 0);
      e_36 = ATgetArgument(c_36, 1);
      {
        ATerm i_31 = t;
        int j_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(d_36), not_null(e_36));
            ;
            LocalPopChoice(j_31);
          }
        else
          {
            t = i_31;
            t = SSL_addr(not_null(d_36), not_null(e_36));
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
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_75(t);
      ;
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      {
        ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
        l_36 = t;
        k_36 :
        if(((ATgetType(l_36) == AT_LIST) && !(ATisEmpty(l_36))))
          {
            m_36 = ATgetFirst((ATermList) l_36);
            n_36 = (ATerm) ATgetNext((ATermList) l_36);
            {
              ATerm q_36 = NULL;
              ATerm r_36 = NULL;
              t = not_null(n_36);
              {
                t = foldr_2(t, k_75, l_75);
                {
                  r_36 = t;
                  if(((q_36 != NULL) && (q_36 != r_36)))
                    _fail(r_36);
                  else
                    q_36 = r_36;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_36), not_null(q_36));
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
  ATerm y_36 = NULL;
  ATerm a_37 = NULL;
  y_36 = t;
  {
    ATerm b_37 = NULL;
    ATerm e_37 = NULL,h_37 = NULL,i_37 = NULL;
    t = not_null(y_36);
    {
      b_37 = t;
      {
        t = SSL_explode_term(not_null(b_37));
        {
          e_37 = t;
          x_36 :
          if(match_cons(e_37, sym__2))
            {
              h_37 = ATgetArgument(e_37, 0);
              i_37 = ATgetArgument(e_37, 1);
              if(((a_37 != NULL) && (a_37 != i_37)))
                _fail(i_37);
              else
                a_37 = i_37;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_37);
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
    ATerm m_5 (ATerm t)
    {
      t = term_o_28;
      return(t);
    }
    t = crush_2(t, m_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
  o_37 = t;
  n_37 :
  if(match_cons(o_37, sym__2))
    {
      p_37 = ATgetArgument(o_37, 0);
      q_37 = ATgetArgument(o_37, 1);
      {
        ATerm q_31;
        q_31 = t;
        {
          ATerm x_31 = t;
          int y_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_37), not_null(q_37));
              ;
              LocalPopChoice(y_31);
            }
          else
            {
              t = x_31;
              t = SSL_gtr(not_null(p_37), not_null(q_37));
            }
        }
        t = q_31;
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
  ATerm w_37 = NULL;
  ATerm b_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
      x_37 = t;
      v_37 :
      if(match_cons(x_37, sym__2))
        {
          y_37 = ATgetArgument(x_37, 0);
          z_37 = ATgetArgument(x_37, 1);
          {
            if(((w_37 != NULL) && (w_37 != y_37)))
              _fail(y_37);
            else
              w_37 = y_37;
            if(((w_37 != NULL) && (w_37 != z_37)))
              _fail(z_37);
            else
              w_37 = z_37;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = b_32;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm j_32;
    j_32 = t;
    {
      ATerm c_38 = NULL;
      ATerm d_38 = NULL;
      t = term_f_8;
      {
        t = get_config_0(t);
        {
          d_38 = t;
          if(((c_38 != NULL) && (c_38 != d_38)))
            _fail(d_38);
          else
            c_38 = d_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_38), term_x_8);
        t = geq_0(t);
      }
    }
    t = j_32;
    t = i_80(t);
    return(t);
  }
  t = try_1(t, n_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm h_38 = NULL,j_38 = NULL;
    ATerm k_32;
    k_32 = t;
    {
      ATerm i_38 = NULL;
      t = run_time_0(t);
      {
        i_38 = t;
        if(((h_38 != NULL) && (h_38 != i_38)))
          _fail(i_38);
        else
          h_38 = i_38;
      }
    }
    t = k_32;
    {
      ATerm n_38 = NULL;
      t = term_f_25;
      {
        t = whoami_0(t);
        {
          n_38 = t;
          if(((j_38 != NULL) && (j_38 != n_38)))
            _fail(n_38);
          else
            j_38 = n_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_32), not_null(h_38)), term_l_10), not_null(j_38)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, o_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_o_28;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_38 = NULL;
  u_38 = t;
  t_38 :
  if(match_cons(u_38, sym_Version_0))
    {
      ATerm w_38 = NULL,y_38 = NULL;
      ATerm m_32;
      m_32 = t;
      {
        ATerm x_38 = NULL;
        t = SSLgetAnnotations(not_null(u_38));
        {
          x_38 = t;
          if(((w_38 != NULL) && (w_38 != x_38)))
            _fail(x_38);
          else
            w_38 = x_38;
        }
      }
      t = m_32;
      {
        ATerm z_38 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(w_38));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_84 (ATerm))
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_32;
      t = get_config_0(t);
      ;
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      {
        ATerm q_5 (ATerm t)
        {
          ATerm t_32 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(c_33);
            }
          else
            {
              t = t_32;
              {
                ATerm d_33 = t;
                int f_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(f_33);
                  }
                else
                  {
                    t = d_33;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, q_5);
      }
    }
  t = u_84(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_39 = NULL;
  e_39 = t;
  t = SSL_table_create(not_null(e_39));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_39 = NULL;
  k_39 = t;
  {
    ATerm g_33;
    g_33 = t;
    {
      t = term_m_33;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_33, term_n_33, not_null(k_39));
          t = table_put_0(t);
        }
      }
    }
    t = g_33;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm q_39 = NULL;
  q_39 = t;
  t = SSL_table_destroy(not_null(q_39));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm u_39 = NULL;
  u_39 = t;
  t = SSL_exit(not_null(u_39));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL;
  y_39 = t;
  x_39 :
  if(((ATgetType(y_39) == AT_LIST) && ATisEmpty(y_39)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(y_39) == AT_LIST) && !(ATisEmpty(y_39))))
        {
          z_39 = ATgetFirst((ATermList) y_39);
          a_40 = (ATerm) ATgetNext((ATermList) y_39);
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
  ATerm r_33;
  r_33 = t;
  {
    ATerm d_40 = NULL;
    ATerm g_40 = NULL;
    ATerm s_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(y_33);
      }
    else
      {
        t = s_33;
        {
          ATerm e_40 = NULL;
          ATerm f_40 = NULL;
          f_40 = t;
          if(((e_40 != NULL) && (e_40 != f_40)))
            _fail(f_40);
          else
            e_40 = f_40;
          t = (ATerm) ATinsert(ATempty, not_null(e_40));
        }
      }
    {
      g_40 = t;
      if(((d_40 != NULL) && (d_40 != g_40)))
        _fail(g_40);
      else
        d_40 = g_40;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_7, not_null(d_40));
      t = printnl_0(t);
    }
  }
  t = r_33;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL;
  e_41 = t;
  q_40 :
  if(((ATgetType(e_41) == AT_LIST) && !(ATisEmpty(e_41))))
    {
      c_41 = ATgetFirst((ATermList) e_41);
      d_41 = (ATerm) ATgetNext((ATermList) e_41);
      {
        ATerm j_41 = NULL;
        t = not_null(d_41);
        {
          ATerm z_33;
          z_33 = t;
          {
            ATerm k_41 = NULL,v_41 = NULL,x_41 = NULL;
            ATerm a_34;
            a_34 = t;
            {
              ATerm u_41 = NULL;
              t = i_0(t);
              {
                u_41 = t;
                if(((k_41 != NULL) && (k_41 != u_41)))
                  _fail(u_41);
                else
                  k_41 = u_41;
              }
            }
            t = a_34;
            {
              ATerm w_41 = NULL;
              t = not_null(c_41);
              {
                t = g_0(t);
                {
                  w_41 = t;
                  if(((v_41 != NULL) && (v_41 != w_41)))
                    _fail(w_41);
                  else
                    v_41 = w_41;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(k_41)), not_null(v_41));
                {
                  x_41 = t;
                  if(((j_41 != NULL) && (j_41 != x_41)))
                    _fail(x_41);
                  else
                    j_41 = x_41;
                }
              }
            }
          }
          t = z_33;
          {
            ATerm r_5 (ATerm t)
            {
              t = not_null(j_41);
              return(t);
            }
            t = reverse_acc_2(t, g_0, r_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(e_41) == AT_LIST) && ATisEmpty(e_41)))
        {
          {
            t = term_f_25;
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
  ATerm s_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, s_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_61 (ATerm))
{
  ATerm i_42 = NULL,j_42 = NULL;
  i_42 = t;
  h_42 :
  if(match_cons(i_42, sym_Program_1))
    {
      j_42 = ATgetArgument(i_42, 0);
      {
        ATerm r_42 = NULL,x_42 = NULL;
        ATerm s_42 = NULL;
        t = SSLgetAnnotations(not_null(i_42));
        {
          s_42 = t;
          if(((r_42 != NULL) && (r_42 != s_42)))
            _fail(s_42);
          else
            r_42 = s_42;
        }
        {
          t = not_null(j_42);
          {
            ATerm g_43 = NULL;
            t = x_61(t);
            {
              x_42 = t;
              {
                ATerm h_43 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_42)), not_null(r_42));
                {
                  h_43 = t;
                  if(((g_43 != NULL) && (g_43 != h_43)))
                    _fail(h_43);
                  else
                    g_43 = h_43;
                }
                t = not_null(g_43);
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
  ATerm v_43 = NULL;
  ATerm b_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_44 = NULL;
      t = term_h_31;
      {
        t = get_config_0(t);
        {
          b_44 = t;
          if(((v_43 != NULL) && (v_43 != b_44)))
            _fail(b_44);
          else
            v_43 = b_44;
        }
      }
      ;
      LocalPopChoice(c_34);
    }
  else
    {
      t = b_34;
      {
        ATerm t_5 (ATerm t)
        {
          ATerm u_5 (ATerm t)
          {
            ATerm c_44 = NULL;
            c_44 = t;
            if(((v_43 != NULL) && (v_43 != c_44)))
              _fail(c_44);
            else
              v_43 = c_44;
            return(t);
          }
          t = Program_1(t, u_5);
          return(t);
        }
        t = option_defined_1(t, t_5);
      }
    }
  {
    ATerm v_5 (ATerm t)
    {
      ATerm b_6 (ATerm t)
      {
        t = not_null(v_43);
        return(t);
      }
      t = short_description_1(t, b_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, v_5);
    {
      t = term_h_34;
      {
        t = echo_0(t);
        {
          t = term_o_34;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm e_6 (ATerm t)
                {
                  ATerm h_44 = NULL;
                  ATerm i_44 = NULL;
                  i_44 = t;
                  if(((h_44 != NULL) && (h_44 != i_44)))
                    _fail(i_44);
                  else
                    h_44 = i_44;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_44)), term_p_34);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, e_6);
                {
                  ATerm f_6 (ATerm t)
                  {
                    ATerm j_44 = NULL;
                    ATerm k_44 = NULL;
                    ATerm g_6 (ATerm t)
                    {
                      t = not_null(v_43);
                      return(t);
                    }
                    t = long_description_1(t, g_6);
                    {
                      k_44 = t;
                      if(((j_44 != NULL) && (j_44 != k_44)))
                        _fail(k_44);
                      else
                        j_44 = k_44;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(j_44)), term_q_34);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, f_6);
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
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL;
  r_44 = t;
  q_44 :
  if(match_cons(r_44, sym__2))
    {
      s_44 = ATgetArgument(r_44, 0);
      t_44 = ATgetArgument(r_44, 1);
      {
        ATerm r_34;
        r_34 = t;
        t = SSL_printnl(not_null(s_44), not_null(t_44));
        t = r_34;
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
  ATerm i_45 = NULL,j_45 = NULL;
  i_45 = t;
  h_45 :
  if(match_cons(i_45, sym_Undefined_1))
    {
      j_45 = ATgetArgument(i_45, 0);
      {
        ATerm m_45 = NULL,o_45 = NULL;
        ATerm n_45 = NULL;
        t = SSLgetAnnotations(not_null(i_45));
        {
          n_45 = t;
          if(((m_45 != NULL) && (m_45 != n_45)))
            _fail(n_45);
          else
            m_45 = n_45;
        }
        {
          t = not_null(j_45);
          {
            ATerm e_46 = NULL;
            t = y_61(t);
            {
              o_45 = t;
              {
                ATerm f_46 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_45)), not_null(m_45));
                {
                  f_46 = t;
                  if(((e_46 != NULL) && (e_46 != f_46)))
                    _fail(f_46);
                  else
                    e_46 = f_46;
                }
                t = not_null(e_46);
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
  ATerm n_46 (ATerm t)
  {
    ATerm s_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_69, _id);
        ;
        LocalPopChoice(a_35);
      }
    else
      {
        t = s_34;
        t = Cons_2(t, _id, n_46);
      }
    return(t);
  }
  t = n_46(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_85 (ATerm))
{
  t = fetch_1(t, p_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_47 = NULL;
  c_47 = t;
  v_46 :
  if(match_cons(c_47, sym_Help_0))
    {
      ATerm e_47 = NULL,g_47 = NULL;
      ATerm b_35;
      b_35 = t;
      {
        ATerm f_47 = NULL;
        t = SSLgetAnnotations(not_null(c_47));
        {
          f_47 = t;
          if(((e_47 != NULL) && (e_47 != f_47)))
            _fail(f_47);
          else
            e_47 = f_47;
        }
      }
      t = b_35;
      {
        ATerm j_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(e_47));
        {
          j_47 = t;
          if(((g_47 != NULL) && (g_47 != j_47)))
            _fail(j_47);
          else
            g_47 = j_47;
        }
        t = not_null(g_47);
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
  ATerm o_47 = NULL;
  o_47 = t;
  t = SSL_implode_string(not_null(o_47));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_35 = t;
  int f_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(f_35);
    }
  else
    {
      t = c_35;
      {
        ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL;
        z_47 = t;
        y_47 :
        if(((ATgetType(z_47) == AT_LIST) && !(ATisEmpty(z_47))))
          {
            a_48 = ATgetFirst((ATermList) z_47);
            b_48 = (ATerm) ATgetNext((ATermList) z_47);
            {
              t = not_null(a_48);
              {
                ATerm h_6 (ATerm t)
                {
                  t = not_null(b_48);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, h_6);
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
  ATerm p_48 = NULL;
  ATerm r_48 = NULL;
  p_48 = t;
  {
    ATerm s_48 = NULL;
    ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL;
    t = not_null(p_48);
    {
      s_48 = t;
      {
        t = SSL_explode_term(not_null(s_48));
        {
          u_48 = t;
          n_48 :
          if(match_cons(u_48, sym__2))
            {
              v_48 = ATgetArgument(u_48, 0);
              w_48 = ATgetArgument(u_48, 1);
              o_48 :
              if(match_string(v_48, ""))
                {
                  if(((r_48 != NULL) && (r_48 != w_48)))
                    _fail(w_48);
                  else
                    r_48 = w_48;
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
      t = not_null(r_48);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_69 (ATerm))
{
  ATerm a_49 (ATerm t)
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_49);
        ;
        LocalPopChoice(h_35);
      }
    else
      {
        t = g_35;
        {
          t = Nil_0(t);
          t = n_69(t);
        }
      }
    return(t);
  }
  t = a_49(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
  d_49 = t;
  c_49 :
  if(match_cons(d_49, sym__2))
    {
      e_49 = ATgetArgument(d_49, 0);
      f_49 = ATgetArgument(d_49, 1);
      {
        t = not_null(e_49);
        {
          ATerm i_6 (ATerm t)
          {
            t = not_null(f_49);
            return(t);
          }
          t = at_end_1(t, i_6);
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
  ATerm j_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(n_35);
    }
  else
    {
      t = j_35;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_49 = NULL;
  k_49 = t;
  t = SSL_explode_string(not_null(k_49));
  return(t);
}
ATerm _2 (ATerm t, ATerm h_55 (ATerm), ATerm i_55 (ATerm))
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
  t_49 = t;
  s_49 :
  if(match_cons(t_49, sym__2))
    {
      u_49 = ATgetArgument(t_49, 0);
      v_49 = ATgetArgument(t_49, 1);
      {
        ATerm z_49 = NULL,b_50 = NULL;
        ATerm a_50 = NULL;
        t = SSLgetAnnotations(not_null(t_49));
        {
          a_50 = t;
          if(((z_49 != NULL) && (z_49 != a_50)))
            _fail(a_50);
          else
            z_49 = a_50;
        }
        {
          t = not_null(u_49);
          {
            ATerm d_50 = NULL;
            t = h_55(t);
            {
              b_50 = t;
              {
                t = not_null(v_49);
                {
                  ATerm f_50 = NULL;
                  t = i_55(t);
                  {
                    d_50 = t;
                    {
                      ATerm g_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_50), not_null(d_50)), not_null(z_49));
                      {
                        g_50 = t;
                        if(((f_50 != NULL) && (f_50 != g_50)))
                          _fail(g_50);
                        else
                          f_50 = g_50;
                      }
                      t = not_null(f_50);
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
  ATerm o_35;
  o_35 = t;
  {
    ATerm o_50 = NULL,q_50 = NULL;
    ATerm r_35;
    r_35 = t;
    {
      ATerm p_50 = NULL;
      t = r_64(t);
      {
        p_50 = t;
        if(((o_50 != NULL) && (o_50 != p_50)))
          _fail(p_50);
        else
          o_50 = p_50;
      }
    }
    t = r_35;
    {
      ATerm r_50 = NULL;
      r_50 = t;
      if(((q_50 != NULL) && (q_50 != r_50)))
        _fail(r_50);
      else
        q_50 = r_50;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_50)), not_null(o_50)));
        t = printnl_0(t);
      }
    }
  }
  t = o_35;
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_68 (ATerm))
{
  ATerm u_50 (ATerm t)
  {
    ATerm s_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(v_35);
      }
    else
      {
        t = s_35;
        t = Cons_2(t, y_68, u_50);
      }
    return(t);
  }
  t = u_50(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm w_50 = NULL;
  w_50 = t;
  t = SSL_is_string(not_null(w_50));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm w_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(y_35);
    }
  else
    {
      t = w_35;
      {
        ATerm z_35 = t;
        int a_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_6);
            ;
            LocalPopChoice(a_36);
          }
        else
          {
            t = z_35;
            {
              ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL;
              f_51 = t;
              e_51 :
              if(match_cons(f_51, sym_Path_1))
                {
                  g_51 = ATgetArgument(f_51, 0);
                  t = not_null(g_51);
                }
              else
                {
                  if(match_cons(f_51, sym_Var_1))
                    {
                      g_51 = ATgetArgument(f_51, 0);
                      {
                        t = not_null(g_51);
                        {
                          ATerm f_36 = t;
                          int g_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(g_36);
                            }
                          else
                            {
                              t = f_36;
                              {
                                ATerm q_6 (ATerm t)
                                {
                                  t = term_h_36;
                                  return(t);
                                }
                                t = debug_1(t, q_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(f_51, sym_Prefix_2))
                        {
                          g_51 = ATgetArgument(f_51, 0);
                          h_51 = ATgetArgument(f_51, 1);
                          {
                            ATerm m_51 = NULL,o_51 = NULL;
                            ATerm i_36;
                            i_36 = t;
                            {
                              ATerm n_51 = NULL;
                              t = not_null(g_51);
                              {
                                t = eval_config_0(t);
                                {
                                  n_51 = t;
                                  if(((m_51 != NULL) && (m_51 != n_51)))
                                    _fail(n_51);
                                  else
                                    m_51 = n_51;
                                }
                              }
                            }
                            t = i_36;
                            {
                              ATerm p_51 = NULL;
                              t = not_null(h_51);
                              {
                                t = eval_config_0(t);
                                {
                                  p_51 = t;
                                  if(((o_51 != NULL) && (o_51 != p_51)))
                                    _fail(p_51);
                                  else
                                    o_51 = p_51;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_51), not_null(o_51));
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
  ATerm x_51 = NULL;
  x_51 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_w_30, not_null(x_51));
    {
      t = table_get_0(t);
      {
        ATerm r_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm j_36;
            j_36 = t;
            {
              ATerm z_51 = NULL;
              ATerm a_52 = NULL;
              a_52 = t;
              if(((z_51 != NULL) && (z_51 != a_52)))
                _fail(a_52);
              else
                z_51 = a_52;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_w_30, not_null(x_51), not_null(z_51));
                t = table_put_0(t);
              }
            }
            t = j_36;
          }
          return(t);
        }
        t = try_1(t, r_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm o_79 (ATerm))
{
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_79(t);
      ;
      LocalPopChoice(p_36);
    }
  else
    {
      t = o_36;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
  f_52 = t;
  e_52 :
  if(match_cons(f_52, sym__2))
    {
      g_52 = ATgetArgument(f_52, 0);
      h_52 = ATgetArgument(f_52, 1);
      t = SSL_table_get(not_null(g_52), not_null(h_52));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL;
  o_52 = t;
  n_52 :
  if(match_cons(o_52, sym__3))
    {
      p_52 = ATgetArgument(o_52, 0);
      q_52 = ATgetArgument(o_52, 1);
      r_52 = ATgetArgument(o_52, 2);
      {
        ATerm s_36;
        s_36 = t;
        {
          ATerm v_52 = NULL;
          ATerm w_52 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_52), not_null(q_52));
          {
            ATerm t_36 = t;
            int u_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(u_36);
              }
            else
              {
                t = t_36;
                t = (ATerm) ATempty;
              }
            {
              w_52 = t;
              if(((v_52 != NULL) && (v_52 != w_52)))
                _fail(w_52);
              else
                v_52 = w_52;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_52), not_null(q_52), (ATerm) ATinsert(CheckATermList(not_null(v_52)), not_null(r_52)));
            t = table_put_0(t);
          }
        }
        t = s_36;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_86 (ATerm))
{
  ATerm b_53 = NULL;
  ATerm c_53 = NULL;
  t = term_f_25;
  {
    t = u_86(t);
    {
      c_53 = t;
      if(((b_53 != NULL) && (b_53 != c_53)))
        _fail(c_53);
      else
        b_53 = c_53;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_i_34, term_n_34, not_null(b_53));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
  i_53 = t;
  h_53 :
  if(match_string(i_53, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(i_53) == AT_LIST) && !(ATisEmpty(i_53))))
        {
          j_53 = ATgetFirst((ATermList) i_53);
          k_53 = (ATerm) ATgetNext((ATermList) i_53);
          {
            ATerm n_53 = NULL;
            ATerm v_36;
            v_36 = t;
            {
              t = not_null(j_53);
              t = a_0(t);
            }
            t = v_36;
            {
              ATerm o_53 = NULL;
              t = term_f_25;
              {
                t = b_0(t);
                {
                  o_53 = t;
                  if(((n_53 != NULL) && (n_53 != o_53)))
                    _fail(o_53);
                  else
                    n_53 = o_53;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(k_53)), not_null(n_53));
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
  ATerm u_6 (ATerm t)
  {
    ATerm t_53 = NULL;
    t_53 = t;
    s_53 :
    if(!(match_string(t_53, "--help")))
      {
        if(!(match_string(t_53, "-h")))
          {
            if(!(match_string(t_53, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm v_6 (ATerm t)
  {
    t = term_w_36;
    {
      t = set_config_0(t);
      t = term_z_36;
    }
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    t = term_c_37;
    return(t);
  }
  t = Option_3(t, u_6, v_6, w_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL;
  w_53 = t;
  v_53 :
  if(((ATgetType(w_53) == AT_LIST) && !(ATisEmpty(w_53))))
    {
      x_53 = ATgetFirst((ATermList) w_53);
      y_53 = (ATerm) ATgetNext((ATermList) w_53);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_53)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_53)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_56 (ATerm), ATerm r_56 (ATerm))
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL;
  i_54 = t;
  h_54 :
  if(((ATgetType(i_54) == AT_LIST) && !(ATisEmpty(i_54))))
    {
      j_54 = ATgetFirst((ATermList) i_54);
      k_54 = (ATerm) ATgetNext((ATermList) i_54);
      {
        ATerm o_54 = NULL,q_54 = NULL;
        ATerm p_54 = NULL;
        t = SSLgetAnnotations(not_null(i_54));
        {
          p_54 = t;
          if(((o_54 != NULL) && (o_54 != p_54)))
            _fail(p_54);
          else
            o_54 = p_54;
        }
        {
          t = not_null(j_54);
          {
            ATerm s_54 = NULL;
            t = q_56(t);
            {
              q_54 = t;
              {
                t = not_null(k_54);
                {
                  ATerm u_54 = NULL;
                  t = r_56(t);
                  {
                    s_54 = t;
                    {
                      ATerm v_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(s_54)), not_null(q_54)), not_null(o_54));
                      {
                        v_54 = t;
                        if(((u_54 != NULL) && (u_54 != v_54)))
                          _fail(v_54);
                        else
                          u_54 = v_54;
                      }
                      t = not_null(u_54);
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
  ATerm f_55 = NULL;
  f_55 = t;
  e_55 :
  if(((ATgetType(f_55) == AT_LIST) && ATisEmpty(f_55)))
    {
      {
        ATerm j_55 = NULL,l_55 = NULL;
        ATerm d_37;
        d_37 = t;
        {
          ATerm k_55 = NULL;
          t = SSLgetAnnotations(not_null(f_55));
          {
            k_55 = t;
            if(((j_55 != NULL) && (j_55 != k_55)))
              _fail(k_55);
            else
              j_55 = k_55;
          }
        }
        t = d_37;
        {
          ATerm m_55 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(j_55));
          {
            m_55 = t;
            if(((l_55 != NULL) && (l_55 != m_55)))
              _fail(m_55);
            else
              l_55 = m_55;
          }
          t = not_null(l_55);
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
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL;
  s_55 = t;
  r_55 :
  if(match_cons(s_55, sym__2))
    {
      t_55 = ATgetArgument(s_55, 0);
      u_55 = ATgetArgument(s_55, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_30, not_null(t_55), not_null(u_55));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_86 (ATerm))
{
  ATerm f_37;
  f_37 = t;
  {
    ATerm x_6 (ATerm t)
    {
      t = term_g_37;
      t = s_86(t);
      return(t);
    }
    t = try_1(t, x_6);
  }
  t = f_37;
  {
    ATerm y_6 (ATerm t)
    {
      ATerm c_56 = NULL;
      ATerm j_37;
      j_37 = t;
      {
        ATerm a_56 = NULL;
        ATerm b_56 = NULL;
        b_56 = t;
        if(((a_56 != NULL) && (a_56 != b_56)))
          _fail(b_56);
        else
          a_56 = b_56;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_31, not_null(a_56));
          t = set_config_0(t);
        }
      }
      t = j_37;
      {
        ATerm d_56 = NULL;
        d_56 = t;
        if(((c_56 != NULL) && (c_56 != d_56)))
          _fail(d_56);
        else
          c_56 = d_56;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_56));
      }
      return(t);
    }
    ATerm d_7 (ATerm t)
    {
      ATerm k_37 = t;
      int l_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_37 = t;
          int r_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(r_37);
            }
          else
            {
              t = m_37;
              {
                t = s_86(t);
                t = Cons_2(t, _id, d_7);
              }
            }
          ;
          LocalPopChoice(l_37);
        }
      else
        {
          t = k_37;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_6, d_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL;
  ATerm s_37;
  s_37 = t;
  {
    ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL;
    m_56 = t;
    i_56 :
    if(match_cons(m_56, sym__3))
      {
        n_56 = ATgetArgument(m_56, 0);
        o_56 = ATgetArgument(m_56, 1);
        p_56 = ATgetArgument(m_56, 2);
        {
          if(((j_56 != NULL) && (j_56 != n_56)))
            _fail(n_56);
          else
            j_56 = n_56;
          {
            if(((k_56 != NULL) && (k_56 != o_56)))
              _fail(o_56);
            else
              k_56 = o_56;
            {
              if(((l_56 != NULL) && (l_56 != p_56)))
                _fail(p_56);
              else
                l_56 = p_56;
              t = SSL_table_put(not_null(j_56), not_null(k_56), not_null(l_56));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_37;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm u_56 = NULL;
  ATerm t_37;
  t_37 = t;
  {
    t = term_u_37;
    t = table_put_0(t);
  }
  t = t_37;
  {
    ATerm e_7 (ATerm t)
    {
      ATerm a_38 = t;
      int b_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_86(t);
          ;
          LocalPopChoice(b_38);
        }
      else
        {
          t = a_38;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_7);
    {
      ATerm j_7 (ATerm t)
      {
        ATerm e_38 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_38;
            g_38 = t;
            {
              ATerm k_38 = t;
              int l_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_s_32;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(l_38);
                }
              else
                {
                  t = k_38;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = g_38;
            {
              t = system_usage_0(t);
              {
                t = term_o_28;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(f_38);
          }
        else
          {
            t = e_38;
            {
              ATerm k_7 (ATerm t)
              {
                ATerm l_7 (ATerm t)
                {
                  ATerm v_56 = NULL;
                  v_56 = t;
                  if(((u_56 != NULL) && (u_56 != v_56)))
                    _fail(v_56);
                  else
                    u_56 = v_56;
                  return(t);
                }
                t = Undefined_1(t, l_7);
                return(t);
              }
              t = option_defined_1(t, k_7);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_56)), term_m_38));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_x_8;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, j_7);
      {
        ATerm o_38;
        o_38 = t;
        {
          t = term_i_34;
          t = table_destroy_0(t);
        }
        t = o_38;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm z_84 (ATerm))
{
  t = parse_options_1(t, w_84);
  {
    t = store_options_0(t);
    {
      t = y_84(t);
      {
        ATerm p_38 = t;
        int q_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_84);
            ;
            LocalPopChoice(q_38);
          }
        else
          {
            t = p_38;
            {
              ATerm r_38 = t;
              int s_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_84(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(s_38);
                }
              else
                {
                  t = r_38;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm a_85 (ATerm), ATerm b_85 (ATerm))
{
  t = option_wrap_4(t, a_85, default_usage_0, _id, b_85);
  return(t);
}
ATerm io_ast2abox_0 (ATerm t)
{
  t = option_wrap_2(t, ast2abox_options_0, ast2abox_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_ast2abox_0(t);
  return(t);
}
