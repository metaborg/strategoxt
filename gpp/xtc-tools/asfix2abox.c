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
ATerm term_k_40;
ATerm term_s_39;
ATerm term_g_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_g_38;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_s_36;
ATerm term_p_36;
ATerm term_l_36;
ATerm term_j_36;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_d_35;
ATerm term_u_34;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_j_33;
ATerm term_f_33;
ATerm term_b_33;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_j_32;
ATerm term_f_32;
ATerm term_p_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_h_31;
ATerm term_c_31;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_i_30;
ATerm term_e_30;
ATerm term_b_30;
ATerm term_x_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_j_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_r_28;
ATerm term_o_26;
ATerm term_k_26;
ATerm term_f_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_z_25;
ATerm term_x_25;
ATerm term_v_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_f_25;
ATerm term_y_24;
ATerm term_v_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_g_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_w_22;
ATerm term_u_22;
ATerm term_s_22;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_a_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_j_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_j_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_u_10;
ATerm term_p_10;
ATerm term_k_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_o_9;
ATerm term_k_9;
ATerm term_h_9;
ATerm term_f_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_m_8;
ATerm term_f_8;
ATerm term_a_8;
void init_constant_terms (void)
{
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--conservative", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_o_9, term_z_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_a_9, term_j_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_q_12, term_v_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_e_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_l_13, term_m_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_r_13, term_s_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_b_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_l_14, term_m_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_y_14, term_z_14);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_i_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_p_15, term_q_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_z_15, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_h_16, term_i_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_n_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_e_17, term_f_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_v_17, term_w_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_d_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_j_18, term_k_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_18, term_n_18, term_p_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_v_18, term_w_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_f_19, term_g_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_l_19, term_o_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_19, term_t_19, term_u_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_19, term_z_19, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_20, term_d_20, term_e_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_h_21);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_z_23);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__2, term_f_26, term_v_25);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_o_29, term_j_11);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_x_29);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_29);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym__2, term_o_30, term_j_11);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym__2, term_h_31, term_j_11);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_a_8, term_t_32);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym__2, term_l_36, term_p_36);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym__2, term_d_35, term_j_11);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym__3, term_l_36, term_p_36, (ATerm) ATempty);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm pass_conservative_0 (ATerm);
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
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
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
ATerm asfix2abox_0 (ATerm);
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
ATerm asfix2abox_options_0 (ATerm);
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
ATerm io_asfix2abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm pass_conservative_0 (ATerm t)
{
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_8;
      t = get_config_0(t);
      LocalPopChoice(z_7);
      t = (ATerm) ATinsert(ATempty, term_f_8);
    }
  else
    {
      t = y_7;
      t = (ATerm) ATempty;
    }
  return(t);
}
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
        ATerm g_8 = t;
        int l_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_3 = NULL;
            t = p_0(t);
            {
              c_3 = t;
              a_2 :
              if(match_cons(c_3, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_3), term_m_8);
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
            t = term_m_8;
            ;
            LocalPopChoice(l_8);
          }
        else
          {
            t = g_8;
            {
              ATerm n_8 = t;
              int o_8 = stack_ptr;
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
                        ATerm p_8 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm r_8 = t;
                            int u_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(u_8);
                              }
                            else
                              {
                                t = r_8;
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
                            t = p_8;
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
                  LocalPopChoice(o_8);
                }
              else
                {
                  t = n_8;
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
    t = term_v_8;
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
                  t = term_w_8;
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
    ATerm y_8;
    y_8 = t;
    {
      ATerm b_4 = NULL;
      ATerm c_4 = NULL;
      t = term_z_8;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_4), term_a_9);
        t = geq_0(t);
      }
    }
    t = y_8;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_4)), term_f_9), not_null(l_4));
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
  ATerm g_9;
  g_9 = t;
  {
    ATerm u_4 = NULL;
    u_4 = t;
    if(((t_4 != NULL) && (t_4 != u_4)))
      _fail(u_4);
    else
      t_4 = u_4;
  }
  t = g_9;
  {
    ATerm w_4 = NULL,y_4 = NULL;
    ATerm x_4 = NULL;
    x_4 = t;
    if(((w_4 != NULL) && (w_4 != x_4)))
      _fail(x_4);
    else
      w_4 = x_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_4), term_h_9);
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
        ATerm i_9;
        i_9 = t;
        {
          t = _2(t, modification_time_0, modification_time_0);
          t = geq_0(t);
        }
        t = i_9;
        {
          t = Fst_0(t);
          {
            ATerm u_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = term_k_9;
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
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = lookup_pp_af_0(t);
      ;
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      t = parse_to_temp_file_0(t);
    }
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm n_9;
  n_9 = t;
  {
    t = error_0(t);
    {
      t = term_o_9;
      t = exit_0(t);
    }
  }
  t = n_9;
  return(t);
}
ATerm must_be_pp_0 (ATerm t)
{
  ATerm p_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        t = term_y_9;
        return(t);
      }
      t = has_extension_1(t, w_0);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = p_9;
      {
        ATerm d_5 = NULL;
        ATerm e_5 = NULL;
        e_5 = t;
        if(((d_5 != NULL) && (d_5 != e_5)))
          _fail(e_5);
        else
          d_5 = e_5;
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_5)), term_z_9);
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
    ATerm a_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_69(t);
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = a_10;
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
  ATerm e_10;
  e_10 = t;
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
  t = e_10;
  {
    ATerm f_10;
    f_10 = t;
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
    t = f_10;
  }
  return(t);
}
ATerm ensure_pp_table_parsed_0 (ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        t = term_k_10;
        return(t);
      }
      t = has_extension_1(t, a_1);
      ;
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        t = must_be_pp_0(t);
        t = lookup_or_parse_0(t);
      }
    }
  return(t);
}
ATerm get_config_p_0 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_10;
      t = get_config_0(t);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
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
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_5)), term_p_10);
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
            t = term_u_10;
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
ATerm subt_0 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  u_5 = t;
  t_5 :
  if(match_cons(u_5, sym__2))
    {
      v_5 = ATgetArgument(u_5, 0);
      w_5 = ATgetArgument(u_5, 1);
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(v_5), not_null(w_5));
            ;
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            t = SSL_subtr(not_null(v_5), not_null(w_5));
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
  ATerm c_6 = NULL;
  ATerm d_6 = NULL,f_6 = NULL;
  ATerm e_6 = NULL;
  t = term_z_8;
  {
    ATerm y_10 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(e_11);
      }
    else
      {
        t = y_10;
        t = term_o_9;
      }
    {
      e_6 = t;
      if(((d_6 != NULL) && (d_6 != e_6)))
        _fail(e_6);
      else
        d_6 = e_6;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), term_o_9);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          f_6 = t;
          if(((c_6 != NULL) && (c_6 != f_6)))
            _fail(f_6);
          else
            c_6 = f_6;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_6)), term_z_8);
  return(t);
}
ATerm build_impl_args_0 (ATerm t)
{
  ATerm l_6 = NULL,n_6 = NULL,p_6 = NULL;
  ATerm i_11;
  i_11 = t;
  {
    ATerm m_6 = NULL;
    t = term_j_11;
    {
      t = pass_verbose_0(t);
      {
        m_6 = t;
        if(((l_6 != NULL) && (l_6 != m_6)))
          _fail(m_6);
        else
          l_6 = m_6;
      }
    }
  }
  t = i_11;
  {
    ATerm k_11;
    k_11 = t;
    {
      ATerm o_6 = NULL;
      t = term_j_11;
      {
        t = create_pp_table_args_0(t);
        {
          o_6 = t;
          if(((n_6 != NULL) && (n_6 != o_6)))
            _fail(o_6);
          else
            n_6 = o_6;
        }
      }
    }
    t = k_11;
    {
      ATerm q_6 = NULL;
      t = term_j_11;
      {
        t = pass_conservative_0(t);
        {
          q_6 = t;
          if(((p_6 != NULL) && (p_6 != q_6)))
            _fail(q_6);
          else
            p_6 = q_6;
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_6)), not_null(n_6)), not_null(l_6));
        t = concat_0(t);
      }
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL;
  z_6 = t;
  y_6 :
  if(match_cons(z_6, sym_stdin_0))
    {
      ATerm b_7 = NULL;
      ATerm c_7 = NULL;
      t = term_m_11;
      {
        t = ReadFromFile_0(t);
        {
          c_7 = t;
          if(((b_7 != NULL) && (b_7 != c_7)))
            _fail(c_7);
          else
            b_7 = c_7;
        }
      }
      t = not_null(b_7);
    }
  else
    {
      if(match_cons(z_6, sym_FILE_1))
        {
          a_7 = ATgetArgument(z_6, 0);
          {
            ATerm e_7 = NULL;
            ATerm f_7 = NULL;
            t = not_null(a_7);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  f_7 = t;
                  if(((e_7 != NULL) && (e_7 != f_7)))
                    _fail(f_7);
                  else
                    e_7 = f_7;
                }
              }
            }
            t = not_null(e_7);
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
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
  o_7 = t;
  m_7 :
  if(match_cons(o_7, sym__2))
    {
      p_7 = ATgetArgument(o_7, 0);
      r_7 = ATgetArgument(o_7, 1);
      n_7 :
      if(match_cons(p_7, sym_Stream_1))
        {
          q_7 = ATgetArgument(p_7, 0);
          {
            ATerm u_7 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(q_7), not_null(r_7));
            {
              ATerm v_7 = NULL;
              v_7 = t;
              if(((u_7 != NULL) && (u_7 != v_7)))
                _fail(v_7);
              else
                u_7 = v_7;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_7));
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
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
  c_8 = t;
  b_8 :
  if(match_cons(c_8, sym__2))
    {
      d_8 = ATgetArgument(c_8, 0);
      e_8 = ATgetArgument(c_8, 1);
      {
        ATerm h_8 = NULL,j_8 = NULL;
        t = not_null(d_8);
        {
          ATerm i_8 = NULL;
          i_8 = t;
          if(((h_8 != NULL) && (h_8 != i_8)))
            _fail(i_8);
          else
            h_8 = i_8;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), term_n_11);
            {
              t = open_stream_0(t);
              {
                ATerm k_8 = NULL;
                k_8 = t;
                if(((j_8 != NULL) && (j_8 != k_8)))
                  _fail(k_8);
                else
                  j_8 = k_8;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_8), not_null(e_8));
                  {
                    t = f_65(t);
                    {
                      t = fclose_0(t);
                      t = not_null(e_8);
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
  ATerm q_8 = NULL;
  ATerm s_8 = NULL;
  q_8 = t;
  {
    ATerm t_8 = NULL;
    t = xtc_new_file_0(t);
    {
      t_8 = t;
      {
        if(((s_8 != NULL) && (s_8 != t_8)))
          _fail(t_8);
        else
          s_8 = t_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_8), not_null(q_8));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(s_8);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_8));
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
  ATerm x_8 = NULL;
  x_8 = t;
  t = SSL_close_file(not_null(x_8));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym__2))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      t = SSL_execvp(not_null(d_9), not_null(e_9));
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
  ATerm j_9 = NULL;
  j_9 = t;
  t = SSL_int_to_string(not_null(j_9));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
  r_9 = t;
  q_9 :
  if(match_cons(r_9, sym_UnknownSignal_1))
    {
      s_9 = ATgetArgument(r_9, 0);
      {
        ATerm w_9 = NULL;
        ATerm x_9 = NULL;
        t = not_null(s_9);
        {
          t = int_to_string_0(t);
          {
            x_9 = t;
            if(((w_9 != NULL) && (w_9 != x_9)))
              _fail(x_9);
            else
              w_9 = x_9;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_11), not_null(w_9)), term_o_11);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(r_9, sym_Signal_3))
        {
          s_9 = ATgetArgument(r_9, 0);
          t_9 = ATgetArgument(r_9, 1);
          u_9 = ATgetArgument(r_9, 2);
          {
            ATerm b_10 = NULL;
            ATerm c_10 = NULL;
            t = not_null(t_9);
            {
              t = int_to_string_0(t);
              {
                c_10 = t;
                if(((b_10 != NULL) && (b_10 != c_10)))
                  _fail(c_10);
                else
                  b_10 = c_10;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_9)), term_t_11), not_null(b_10)), term_q_11), not_null(s_9));
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
  ATerm i_10 = NULL;
  ATerm e_1 (ATerm t)
  {
    ATerm j_10 = NULL;
    t = j_69(t);
    {
      j_10 = t;
      if(((i_10 != NULL) && (i_10 != j_10)))
        _fail(j_10);
      else
        i_10 = j_10;
    }
    return(t);
  }
  t = fetch_1(t, e_1);
  t = not_null(i_10);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm o_10 = NULL;
  o_10 = t;
  {
    ATerm v_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_20), term_b_20), term_v_19), term_p_19), term_h_19), term_b_19), term_t_18), term_l_18), term_e_18), term_a_18), term_o_17), term_g_17), term_x_16), term_s_16), term_k_16), term_b_16), term_t_15), term_l_15), term_a_15), term_s_14), term_j_14), term_v_13), term_n_13), term_g_13), term_b_13), term_w_12), term_o_12), term_a_12);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
            q_10 = t;
            n_10 :
            if(match_cons(q_10, sym_Signal_3))
              {
                r_10 = ATgetArgument(q_10, 0);
                s_10 = ATgetArgument(q_10, 1);
                t_10 = ATgetArgument(q_10, 2);
                if(((o_10 != NULL) && (o_10 != s_10)))
                  _fail(s_10);
                else
                  o_10 = s_10;
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
        LocalPopChoice(x_11);
      }
    else
      {
        t = v_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(o_10));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm n_20;
  n_20 = t;
  {
    ATerm g_1 (ATerm t)
    {
      ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
      a_11 = t;
      z_10 :
      if(match_cons(a_11, sym_WaitStatus_3))
        {
          b_11 = ATgetArgument(a_11, 0);
          c_11 = ATgetArgument(a_11, 1);
          d_11 = ATgetArgument(a_11, 2);
          {
            ATerm g_11 = NULL;
            t = not_null(c_11);
            {
              ATerm t_20 = t;
              if((PushChoice() == 0))
                {
                  ATerm f_11 = NULL;
                  f_11 = t;
                  x_10 :
                  if(!(match_int(f_11, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = t_20;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm h_11 = NULL;
                    h_11 = t;
                    if(((g_11 != NULL) && (g_11 != h_11)))
                      _fail(h_11);
                    else
                      g_11 = h_11;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_11)), term_v_20));
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
  t = n_20;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm l_11 = NULL;
  l_11 = t;
  t = SSL_waitpid(not_null(l_11));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm t_63 (ATerm), ATerm u_63 (ATerm))
{
  ATerm s_11 = NULL;
  ATerm u_11 = NULL;
  s_11 = t;
  {
    t = fork_0(t);
    {
      u_11 = t;
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_11 = NULL;
            w_11 = t;
            r_11 :
            if(match_int(w_11, 0))
              {
                t = not_null(s_11);
                t = t_63(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_11), not_null(s_11));
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
  ATerm f_12 = NULL;
  ATerm h_1 (ATerm t)
  {
    ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
    g_12 = t;
    e_12 :
    if(match_cons(g_12, sym__2))
      {
        h_12 = ATgetArgument(g_12, 0);
        i_12 = ATgetArgument(g_12, 1);
        {
          ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
          if(((f_12 != NULL) && (f_12 != i_12)))
            _fail(i_12);
          else
            f_12 = i_12;
          {
            t = not_null(h_12);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  k_12 = t;
                  c_12 :
                  if(match_cons(k_12, sym_WaitStatus_3))
                    {
                      l_12 = ATgetArgument(k_12, 0);
                      m_12 = ATgetArgument(k_12, 1);
                      n_12 = ATgetArgument(k_12, 2);
                      d_12 :
                      if(match_int(l_12, 0))
                        {
                          t = not_null(f_12);
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
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  r_12 :
  if(match_cons(s_12, sym__2))
    {
      t_12 = ATgetArgument(s_12, 0);
      u_12 = ATgetArgument(s_12, 1);
      {
        ATerm i_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_12), not_null(u_12));
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
  ATerm z_12 = NULL;
  z_12 = t;
  t = SSL_table_keys(not_null(z_12));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm f_13 = NULL;
  f_13 = t;
  {
    t = table_keys_0(t);
    {
      ATerm j_1 (ATerm t)
      {
        ATerm h_13 = NULL;
        ATerm j_13 = NULL;
        h_13 = t;
        {
          ATerm k_13 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), not_null(h_13));
          {
            t = table_get_0(t);
            {
              k_13 = t;
              if(((j_13 != NULL) && (j_13 != k_13)))
                _fail(k_13);
              else
                j_13 = k_13;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), not_null(j_13));
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
    ATerm y_20;
    y_20 = t;
    {
      ATerm p_13 = NULL;
      ATerm q_13 = NULL;
      t = term_z_8;
      {
        t = get_config_0(t);
        {
          q_13 = t;
          if(((p_13 != NULL) && (p_13 != q_13)))
            _fail(q_13);
          else
            p_13 = q_13;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), term_l_19);
        t = geq_0(t);
      }
    }
    t = y_20;
    t = m_80(t);
    return(t);
  }
  t = try_1(t, k_1);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm z_20;
  z_20 = t;
  {
    ATerm t_13 = NULL;
    ATerm u_13 = NULL;
    u_13 = t;
    if(((t_13 != NULL) && (t_13 != u_13)))
      _fail(u_13);
    else
      t_13 = u_13;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_20, not_null(t_13));
      t = printnl_0(t);
    }
  }
  t = z_20;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm a_14 = NULL;
  ATerm c_14 = NULL,d_14 = NULL;
  a_14 = t;
  {
    ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_14)));
    {
      t = table_get_0(t);
      {
        e_14 = t;
        y_13 :
        if(((ATgetType(e_14) == AT_LIST) && !(ATisEmpty(e_14))))
          {
            f_14 = ATgetFirst((ATermList) e_14);
            i_14 = (ATerm) ATgetNext((ATermList) e_14);
            z_13 :
            if(match_cons(f_14, sym__2))
              {
                g_14 = ATgetArgument(f_14, 0);
                h_14 = ATgetArgument(f_14, 1);
                {
                  if(((c_14 != NULL) && (c_14 != g_14)))
                    _fail(g_14);
                  else
                    c_14 = g_14;
                  if(((d_14 != NULL) && (d_14 != h_14)))
                    _fail(h_14);
                  else
                    d_14 = h_14;
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
    t = not_null(d_14);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
  p_14 = t;
  o_14 :
  if(match_cons(p_14, sym__2))
    {
      q_14 = ATgetArgument(p_14, 0);
      r_14 = ATgetArgument(p_14, 1);
      {
        ATerm u_14 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATmakeAppl(sym_Tool_1, not_null(q_14)));
        {
          t = table_get_0(t);
          {
            ATerm l_1 (ATerm t)
            {
              ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
              v_14 = t;
              n_14 :
              if(match_cons(v_14, sym__2))
                {
                  w_14 = ATgetArgument(v_14, 0);
                  x_14 = ATgetArgument(v_14, 1);
                  {
                    if(((r_14 != NULL) && (r_14 != w_14)))
                      _fail(w_14);
                    else
                      r_14 = w_14;
                    if(((u_14 != NULL) && (u_14 != x_14)))
                      _fail(x_14);
                    else
                      u_14 = x_14;
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
        t = not_null(u_14);
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
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              t = filter_1(t, n_76);
              return(t);
            }
            t = Cons_2(t, n_76, m_1);
            ;
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            {
              ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
              c_15 = t;
              b_15 :
              if(((ATgetType(c_15) == AT_LIST) && !(ATisEmpty(c_15))))
                {
                  d_15 = ATgetFirst((ATermList) c_15);
                  e_15 = (ATerm) ATgetNext((ATermList) c_15);
                  {
                    t = not_null(e_15);
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
  ATerm h_15 (ATerm t)
  {
    ATerm n_1 (ATerm t)
    {
      t = h_78(t);
      t = h_15(t);
      return(t);
    }
    t = try_1(t, n_1);
    return(t);
  }
  t = h_15(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm g_21;
  g_21 = t;
  {
    ATerm o_1 (ATerm t)
    {
      t = term_j_21;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm k_21 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_21;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, o_1);
  }
  t = g_21;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm l_21;
  l_21 = t;
  {
    ATerm j_15 = NULL;
    ATerm k_15 = NULL;
    k_15 = t;
    if(((j_15 != NULL) && (j_15 != k_15)))
      _fail(k_15);
    else
      j_15 = k_15;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_20, (ATerm) ATinsert(ATempty, not_null(j_15)));
      t = printnl_0(t);
    }
  }
  t = l_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm m_21;
  m_21 = t;
  {
    t = v_64(t);
    t = debug_0(t);
  }
  t = m_21;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm p_1 (ATerm t)
  {
    ATerm n_21;
    n_21 = t;
    {
      ATerm n_15 = NULL;
      ATerm o_15 = NULL;
      t = term_z_8;
      {
        t = get_config_0(t);
        {
          o_15 = t;
          if(((n_15 != NULL) && (n_15 != o_15)))
            _fail(o_15);
          else
            n_15 = o_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_15), term_p_15);
        t = geq_0(t);
      }
    }
    t = n_21;
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
    ATerm s_21;
    s_21 = t;
    {
      ATerm r_15 = NULL;
      ATerm s_15 = NULL;
      t = term_z_8;
      {
        t = get_config_0(t);
        {
          s_15 = t;
          if(((r_15 != NULL) && (r_15 != s_15)))
            _fail(s_15);
          else
            r_15 = s_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_15), term_y_12);
        t = geq_0(t);
      }
    }
    t = s_21;
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
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  w_15 = t;
  v_15 :
  if(match_cons(w_15, sym__2))
    {
      x_15 = ATgetArgument(w_15, 0);
      y_15 = ATgetArgument(w_15, 1);
      if(((x_15 != NULL) && (x_15 != y_15)))
        _fail(y_15);
      else
        x_15 = y_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm b_73 (ATerm), ATerm c_73 (ATerm))
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  d_16 :
  if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
    {
      f_16 = ATgetFirst((ATermList) e_16);
      g_16 = (ATerm) ATgetNext((ATermList) e_16);
      {
        t = c_73(t);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm j_16 = NULL;
            j_16 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_16), not_null(j_16));
              t = b_73(t);
            }
            return(t);
          }
          t = fetch_1(t, r_1);
        }
        t = not_null(g_16);
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
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  p_16 = t;
  o_16 :
  if(match_cons(p_16, sym__2))
    {
      q_16 = ATgetArgument(p_16, 0);
      r_16 = ATgetArgument(p_16, 1);
      {
        t = not_null(q_16);
        {
          ATerm v_16 (ATerm t)
          {
            ATerm t_21 = t;
            int v_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(r_16);
                ;
                LocalPopChoice(v_21);
              }
            else
              {
                t = t_21;
                {
                  ATerm w_21 = t;
                  int x_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_1 (ATerm t)
                      {
                        t = not_null(r_16);
                        return(t);
                      }
                      t = HdMember_p__2(t, x_72, s_1);
                      t = v_16(t);
                      ;
                      LocalPopChoice(x_21);
                    }
                  else
                    {
                      t = w_21;
                      t = Cons_2(t, _id, v_16);
                    }
                }
              }
            return(t);
          }
          t = v_16(t);
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
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  a_17 = t;
  z_16 :
  if(match_cons(a_17, sym__3))
    {
      b_17 = ATgetArgument(a_17, 0);
      c_17 = ATgetArgument(a_17, 1);
      d_17 = ATgetArgument(a_17, 2);
      {
        ATerm y_21;
        y_21 = t;
        {
          ATerm h_17 = NULL;
          ATerm i_17 = NULL,k_17 = NULL;
          ATerm j_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_17), not_null(c_17));
          {
            ATerm z_21 = t;
            int e_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(e_22);
              }
            else
              {
                t = z_21;
                t = (ATerm) ATempty;
              }
            {
              j_17 = t;
              if(((i_17 != NULL) && (i_17 != j_17)))
                _fail(j_17);
              else
                i_17 = j_17;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_17), not_null(d_17));
            {
              t = union_0(t);
              {
                k_17 = t;
                if(((h_17 != NULL) && (h_17 != k_17)))
                  _fail(k_17);
                else
                  h_17 = k_17;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_17), not_null(c_17), not_null(h_17));
            t = set_0(t);
          }
        }
        t = y_21;
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
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
  s_17 = t;
  r_17 :
  if(match_cons(s_17, sym__2))
    {
      t_17 = ATgetArgument(s_17, 0);
      u_17 = ATgetArgument(s_17, 1);
      {
        t = not_null(u_17);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
            x_17 = t;
            q_17 :
            if(match_cons(x_17, sym__2))
              {
                y_17 = ATgetArgument(x_17, 0);
                z_17 = ATgetArgument(x_17, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(t_17), not_null(y_17), not_null(z_17));
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
  ATerm h_18 = NULL,i_18 = NULL;
  ATerm o_18 (ATerm t)
  {
    t = SSL_fclose(not_null(i_18));
    return(t);
  }
  i_18 = t;
  g_18 :
  if(match_cons(i_18, sym_Stream_1))
    {
      h_18 = ATgetArgument(i_18, 0);
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(h_18));
            ;
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
            t = o_18(t);
          }
      }
    }
  else
    {
      t = o_18(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL;
  r_18 = t;
  q_18 :
  if(match_cons(r_18, sym_Stream_1))
    {
      s_18 = ATgetArgument(r_18, 0);
      t = SSL_read_term_from_stream(not_null(s_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
  y_18 = t;
  x_18 :
  if(match_cons(y_18, sym__2))
    {
      z_18 = ATgetArgument(y_18, 0);
      a_19 = ATgetArgument(y_18, 1);
      {
        ATerm d_19 = NULL;
        t = SSL_fopen(not_null(z_18), not_null(a_19));
        {
          ATerm e_19 = NULL;
          e_19 = t;
          if(((d_19 != NULL) && (d_19 != e_19)))
            _fail(e_19);
          else
            d_19 = e_19;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_19));
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
  ATerm i_19 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm j_19 = NULL;
    j_19 = t;
    if(((i_19 != NULL) && (i_19 != j_19)))
      _fail(j_19);
    else
      i_19 = j_19;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_19));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm m_19 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm n_19 = NULL;
    n_19 = t;
    if(((m_19 != NULL) && (m_19 != n_19)))
      _fail(n_19);
    else
      m_19 = n_19;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_19));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm q_19 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm r_19 = NULL;
    r_19 = t;
    if(((q_19 != NULL) && (q_19 != r_19)))
      _fail(r_19);
    else
      q_19 = r_19;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_19));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm y_19 = NULL;
  y_19 = t;
  x_19 :
  if(match_cons(y_19, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(y_19, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(y_19, sym_stdin_0))
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
  ATerm i_20 = NULL;
  ATerm k_20 = NULL,l_20 = NULL;
  i_20 = t;
  {
    ATerm m_20 = NULL;
    ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
    t = not_null(i_20);
    {
      m_20 = t;
      {
        t = SSL_explode_term(not_null(m_20));
        {
          o_20 = t;
          f_20 :
          if(match_cons(o_20, sym__2))
            {
              p_20 = ATgetArgument(o_20, 0);
              q_20 = ATgetArgument(o_20, 1);
              g_20 :
              if(match_string(p_20, ""))
                {
                  h_20 :
                  if(((ATgetType(q_20) == AT_LIST) && !(ATisEmpty(q_20))))
                    {
                      r_20 = ATgetFirst((ATermList) q_20);
                      s_20 = (ATerm) ATgetNext((ATermList) q_20);
                      {
                        if(((l_20 != NULL) && (l_20 != r_20)))
                          _fail(r_20);
                        else
                          l_20 = r_20;
                        if(((k_20 != NULL) && (k_20 != s_20)))
                          _fail(s_20);
                        else
                          k_20 = s_20;
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
    t = not_null(l_20);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  o_21 = t;
  i_21 :
  if(match_cons(o_21, sym__2))
    {
      p_21 = ATgetArgument(o_21, 0);
      q_21 = ATgetArgument(o_21, 1);
      {
        ATerm j_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(k_22);
          }
        else
          {
            t = j_22;
            {
              ATerm l_22 = t;
              int n_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_1 (ATerm t)
                  {
                    ATerm r_21 = NULL,u_21 = NULL;
                    r_21 = t;
                    d_21 :
                    if(match_cons(r_21, sym_Path_1))
                      {
                        u_21 = ATgetArgument(r_21, 0);
                        t = not_null(u_21);
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
                  LocalPopChoice(n_22);
                }
              else
                {
                  t = l_22;
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
  ATerm c_22 = NULL;
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_22 = NULL;
      ATerm b_22 = NULL;
      b_22 = t;
      if(((a_22 != NULL) && (a_22 != b_22)))
        _fail(b_22);
      else
        a_22 = b_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_22), term_s_22);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      {
        ATerm v_1 (ATerm t)
        {
          t = term_u_22;
          return(t);
        }
        t = debug_1(t, v_1);
        _fail(t);
      }
    }
  {
    ATerm v_22;
    v_22 = t;
    {
      ATerm d_22 = NULL;
      t = read_from_stream_0(t);
      {
        d_22 = t;
        if(((c_22 != NULL) && (c_22 != d_22)))
          _fail(d_22);
        else
          c_22 = d_22;
      }
    }
    t = v_22;
    {
      t = fclose_0(t);
      t = not_null(c_22);
    }
  }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm h_22 = NULL;
  ATerm i_22 = NULL;
  i_22 = t;
  if(((h_22 != NULL) && (h_22 != i_22)))
    _fail(i_22);
  else
    h_22 = i_22;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_22), (ATerm) ATinsert(ATempty, term_w_22));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(a_23);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = z_22;
      {
        ATerm b_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_23 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_23;
              }
            {
              ATerm w_1 (ATerm t)
              {
                t = term_i_23;
                return(t);
              }
              t = debug_1(t, w_1);
            }
            ;
            LocalPopChoice(g_23);
          }
        else
          {
            t = b_23;
            {
              ATerm x_1 (ATerm t)
              {
                t = term_j_23;
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
  ATerm m_22 = NULL;
  ATerm o_22 = NULL;
  m_22 = t;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm z_1 (ATerm t)
      {
        t = term_k_23;
        return(t);
      }
      t = debug_1(t, z_1);
      return(t);
    }
    t = if_verbose5_1(t, y_1);
    {
      ATerm q_23 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATmakeAppl(sym_Imported_1, not_null(m_22)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_23;
        }
      {
        ATerm r_23;
        r_23 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_21, term_z_23, (ATerm) ATinsert(ATempty, not_null(m_22)));
          t = table_put_0(t);
        }
        t = r_23;
        {
          ATerm b_2 (ATerm t)
          {
            ATerm c_2 (ATerm t)
            {
              t = term_a_24;
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
                  t = term_b_24;
                  return(t);
                }
                t = say_1(t, e_2);
                return(t);
              }
              t = if_verbose6_1(t, d_2);
              {
                ATerm p_22 = NULL;
                p_22 = t;
                if(((o_22 != NULL) && (o_22 != p_22)))
                  _fail(p_22);
                else
                  o_22 = p_22;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_21, not_null(o_22));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm f_2 (ATerm t)
                      {
                        ATerm g_2 (ATerm t)
                        {
                          t = term_c_24;
                          return(t);
                        }
                        t = say_1(t, g_2);
                        return(t);
                      }
                      t = if_verbose6_1(t, f_2);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_a_21, (ATerm)ATmakeAppl(sym_Imported_1, not_null(m_22)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm h_2 (ATerm t)
                            {
                              ATerm i_2 (ATerm t)
                              {
                                t = term_b_24;
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
  ATerm t_22 = NULL;
  t_22 = t;
  t = SSL_getenv(not_null(t_22));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm d_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_24;
      t = get_config_0(t);
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = d_24;
      {
        ATerm h_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_n_24;
            t = getenv_0(t);
            ;
            LocalPopChoice(i_24);
          }
        else
          {
            t = h_24;
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
      t = term_o_24;
      return(t);
    }
    t = debug_1(t, k_2);
    return(t);
  }
  t = if_verbose5_1(t, j_2);
  {
    ATerm p_24;
    p_24 = t;
    {
      ATerm q_24 = t;
      int u_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_v_24;
          t = table_get_0(t);
          ;
          LocalPopChoice(u_24);
        }
      else
        {
          t = q_24;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = p_24;
    {
      ATerm l_2 (ATerm t)
      {
        ATerm m_2 (ATerm t)
        {
          t = term_y_24;
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
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 (ATerm t)
      {
        ATerm o_2 (ATerm t)
        {
          t = term_f_25;
          return(t);
        }
        t = debug_1(t, o_2);
        return(t);
      }
      t = if_verbose5_1(t, n_2);
      {
        t = xtc_load_0(t);
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm p_2 (ATerm t)
            {
              ATerm q_2 (ATerm t)
              {
                t = term_f_25;
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
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm x_22 = NULL;
        ATerm y_22 = NULL;
        y_22 = t;
        if(((x_22 != NULL) && (x_22 != y_22)))
          _fail(y_22);
        else
          x_22 = y_22;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_25), not_null(x_22)), term_i_25);
          {
            t = error_0(t);
            {
              ATerm r_2 (ATerm t)
              {
                t = term_a_21;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm s_2 (ATerm t)
                    {
                      t = term_m_25;
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
  ATerm c_23 = NULL;
  ATerm p_25;
  p_25 = t;
  {
    ATerm d_23 = NULL;
    t = a_83(t);
    {
      t = xtc_find_warning_0(t);
      {
        d_23 = t;
        if(((c_23 != NULL) && (c_23 != d_23)))
          _fail(d_23);
        else
          c_23 = d_23;
      }
    }
  }
  t = p_25;
  {
    ATerm q_25;
    q_25 = t;
    {
      ATerm e_23 = NULL;
      ATerm f_23 = NULL;
      f_23 = t;
      if(((e_23 != NULL) && (e_23 != f_23)))
        _fail(f_23);
      else
        e_23 = f_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_23), not_null(e_23));
        t = call_0(t);
      }
    }
    t = q_25;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm l_79 (ATerm))
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
  n_23 = t;
  m_23 :
  if(match_cons(n_23, sym__2))
    {
      o_23 = ATgetArgument(n_23, 0);
      p_23 = ATgetArgument(n_23, 1);
      {
        ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
        ATerm r_25;
        r_25 = t;
        {
          ATerm v_23 = NULL;
          ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
          t = l_79(t);
          {
            v_23 = t;
            {
              if(((s_23 != NULL) && (s_23 != v_23)))
                _fail(v_23);
              else
                s_23 = v_23;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(s_23), not_null(o_23), not_null(p_23));
                {
                  t = table_push_0(t);
                  {
                    ATerm t_25 = t;
                    int u_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_23), term_v_25);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(u_25);
                      }
                    else
                      {
                        t = t_25;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      w_23 = t;
                      l_23 :
                      if(((ATgetType(w_23) == AT_LIST) && !(ATisEmpty(w_23))))
                        {
                          x_23 = ATgetFirst((ATermList) w_23);
                          y_23 = (ATerm) ATgetNext((ATermList) w_23);
                          {
                            if(((t_23 != NULL) && (t_23 != x_23)))
                              _fail(x_23);
                            else
                              t_23 = x_23;
                            {
                              if(((u_23 != NULL) && (u_23 != y_23)))
                                _fail(y_23);
                              else
                                u_23 = y_23;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(s_23), term_v_25, (ATerm) ATinsert(CheckATermList(not_null(u_23)), (ATerm) ATinsert(CheckATermList(not_null(t_23)), not_null(o_23))));
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
        t = r_25;
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
  ATerm w_25;
  w_25 = t;
  {
    t = y_64(t);
    {
      ATerm t_2 (ATerm t)
      {
        t = term_x_25;
        return(t);
      }
      t = debug_1(t, t_2);
    }
  }
  t = w_25;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  ATerm w_24 (ATerm t)
  {
    ATerm y_25 = t;
    if((PushChoice() == 0))
      {
        ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
        r_24 = t;
        e_24 :
        if(match_cons(r_24, sym__2))
          {
            s_24 = ATgetArgument(r_24, 0);
            t_24 = ATgetArgument(r_24, 1);
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
        t = y_25;
      }
    {
      ATerm u_2 (ATerm t)
      {
        t = term_z_25;
        return(t);
      }
      t = obsolete_1(t, u_2);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_24), term_n_11);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm x_24 (ATerm t)
  {
    t = SSL_open_file(not_null(l_24), not_null(m_24));
    return(t);
  }
  k_24 = t;
  j_24 :
  if(match_cons(k_24, sym__2))
    {
      l_24 = ATgetArgument(k_24, 0);
      m_24 = ATgetArgument(k_24, 1);
      {
        ATerm a_26 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_24(t);
            ;
            LocalPopChoice(b_26);
          }
        else
          {
            t = a_26;
            t = x_24(t);
          }
      }
    }
  else
    {
      t = w_24(t);
    }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  a_25 = t;
  z_24 :
  if(match_cons(a_25, sym__2))
    {
      b_25 = ATgetArgument(a_25, 0);
      c_25 = ATgetArgument(a_25, 1);
      t = SSL_access(not_null(b_25), not_null(c_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm j_25 = NULL;
  ATerm k_25 = NULL;
  k_25 = t;
  if(((j_25 != NULL) && (j_25 != k_25)))
    _fail(k_25);
  else
    j_25 = k_25;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_25), (ATerm) ATinsert(ATempty, term_c_26));
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
  ATerm n_25 = NULL;
  ATerm o_25 = NULL;
  t = term_j_11;
  {
    t = new_0(t);
    {
      o_25 = t;
      if(((n_25 != NULL) && (n_25 != o_25)))
        _fail(o_25);
      else
        n_25 = o_25;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_25), term_d_26);
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
  ATerm s_25 = NULL;
  t = new_file_0(t);
  {
    s_25 = t;
    {
      ATerm e_26;
      e_26 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_25), term_n_11);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_25), term_j_11);
            {
              ATerm x_2 (ATerm t)
              {
                t = term_f_26;
                return(t);
              }
              t = assert_1(t, x_2);
            }
          }
        }
      }
      t = e_26;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm h_26 = NULL,i_26 = NULL;
  h_26 = t;
  g_26 :
  if(match_cons(h_26, sym_stdin_0))
    {
      ATerm j_26 = NULL;
      ATerm l_26 = NULL;
      ATerm m_26 = NULL;
      t = xtc_new_file_0(t);
      {
        l_26 = t;
        {
          if(((j_26 != NULL) && (j_26 != l_26)))
            _fail(l_26);
          else
            j_26 = l_26;
          {
            ATerm n_26 = NULL;
            t = o_0(t);
            {
              n_26 = t;
              if(((m_26 != NULL) && (m_26 != n_26)))
                _fail(n_26);
              else
                m_26 = n_26;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_26), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_26)), term_k_26));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(j_26);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_26));
    }
  else
    {
      if(match_cons(h_26, sym_FILE_1))
        {
          i_26 = ATgetArgument(h_26, 0);
          {
            ATerm p_26 = NULL;
            ATerm q_26 = NULL;
            t = not_null(i_26);
            {
              ATerm r_26 = NULL;
              t = xtc_new_file_0(t);
              {
                q_26 = t;
                {
                  if(((p_26 != NULL) && (p_26 != q_26)))
                    _fail(q_26);
                  else
                    p_26 = q_26;
                  {
                    ATerm v_26 = NULL;
                    t = o_0(t);
                    {
                      v_26 = t;
                      if(((r_26 != NULL) && (r_26 != v_26)))
                        _fail(v_26);
                      else
                        r_26 = v_26;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_26), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(p_26)), term_k_26), not_null(i_26)), term_o_26));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(p_26);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_26));
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
  ATerm h_27 = NULL;
  h_27 = t;
  g_27 :
  if(match_cons(h_27, sym_stdin_0))
    {
      ATerm j_27 = NULL,l_27 = NULL;
      ATerm s_26;
      s_26 = t;
      {
        ATerm k_27 = NULL;
        t = SSLgetAnnotations(not_null(h_27));
        {
          k_27 = t;
          if(((j_27 != NULL) && (j_27 != k_27)))
            _fail(k_27);
          else
            j_27 = k_27;
        }
      }
      t = s_26;
      {
        ATerm m_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(j_27));
        {
          m_27 = t;
          if(((l_27 != NULL) && (l_27 != m_27)))
            _fail(m_27);
          else
            l_27 = m_27;
        }
        t = not_null(l_27);
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
  ATerm v_27 = NULL,w_27 = NULL;
  v_27 = t;
  u_27 :
  if(match_cons(v_27, sym_FILE_1))
    {
      w_27 = ATgetArgument(v_27, 0);
      {
        ATerm z_27 = NULL,b_28 = NULL;
        ATerm a_28 = NULL;
        t = SSLgetAnnotations(not_null(v_27));
        {
          a_28 = t;
          if(((z_27 != NULL) && (z_27 != a_28)))
            _fail(a_28);
          else
            z_27 = a_28;
        }
        {
          t = not_null(w_27);
          {
            ATerm d_28 = NULL;
            t = q_61(t);
            {
              b_28 = t;
              {
                ATerm e_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(b_28)), not_null(z_27));
                {
                  e_28 = t;
                  if(((d_28 != NULL) && (d_28 != e_28)))
                    _fail(e_28);
                  else
                    d_28 = e_28;
                }
                t = not_null(d_28);
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
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_26 = t;
      int x_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(x_26);
        }
      else
        {
          t = w_26;
          t = stdin_0(t);
        }
      LocalPopChoice(u_26);
      t = xtc_transform_file_2(t, c_83, d_83);
    }
  else
    {
      t = t_26;
      t = xtc_transform_term_2(t, c_83, d_83);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
  l_28 = t;
  k_28 :
  if(match_cons(l_28, sym__2))
    {
      m_28 = ATgetArgument(l_28, 0);
      n_28 = ATgetArgument(l_28, 1);
      t = SSL_copy(not_null(m_28), not_null(n_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm v_28 = NULL;
  v_28 = t;
  u_28 :
  if(match_cons(v_28, sym_stderr_0))
    {
      ATerm x_28 = NULL,z_28 = NULL;
      ATerm y_26;
      y_26 = t;
      {
        ATerm y_28 = NULL;
        t = SSLgetAnnotations(not_null(v_28));
        {
          y_28 = t;
          if(((x_28 != NULL) && (x_28 != y_28)))
            _fail(y_28);
          else
            x_28 = y_28;
        }
      }
      t = y_26;
      {
        ATerm a_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(x_28));
        {
          a_29 = t;
          if(((z_28 != NULL) && (z_28 != a_29)))
            _fail(a_29);
          else
            z_28 = a_29;
        }
        t = not_null(z_28);
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
  ATerm i_29 = NULL;
  i_29 = t;
  h_29 :
  if(match_cons(i_29, sym_stdout_0))
    {
      ATerm k_29 = NULL,m_29 = NULL;
      ATerm z_26;
      z_26 = t;
      {
        ATerm l_29 = NULL;
        t = SSLgetAnnotations(not_null(i_29));
        {
          l_29 = t;
          if(((k_29 != NULL) && (k_29 != l_29)))
            _fail(l_29);
          else
            k_29 = l_29;
        }
      }
      t = z_26;
      {
        ATerm n_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(k_29));
        {
          n_29 = t;
          if(((m_29 != NULL) && (m_29 != n_29)))
            _fail(n_29);
          else
            m_29 = n_29;
        }
        t = not_null(m_29);
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
  ATerm z_29 = NULL,a_30 = NULL;
  z_29 = t;
  y_29 :
  if(match_cons(z_29, sym_FILE_1))
    {
      a_30 = ATgetArgument(z_29, 0);
      {
        ATerm a_27 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_30 = NULL;
            ATerm d_30 = NULL;
            t = m_0(t);
            {
              d_30 = t;
              {
                if(((c_30 != NULL) && (c_30 != d_30)))
                  _fail(d_30);
                else
                  c_30 = d_30;
                {
                  ATerm c_27 = t;
                  int d_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(d_27);
                    }
                  else
                    {
                      t = c_27;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_30), not_null(c_30));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_30));
            ;
            LocalPopChoice(b_27);
          }
        else
          {
            t = a_27;
            {
              ATerm e_27 = t;
              int f_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_30 = NULL;
                  ATerm g_30 = NULL;
                  t = m_0(t);
                  {
                    g_30 = t;
                    {
                      if(((f_30 != NULL) && (f_30 != g_30)))
                        _fail(g_30);
                      else
                        f_30 = g_30;
                      {
                        ATerm i_27 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm n_27 = t;
                            int o_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(o_27);
                              }
                            else
                              {
                                t = n_27;
                                {
                                  ATerm p_27 = t;
                                  int q_27 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(q_27);
                                    }
                                  else
                                    {
                                      t = p_27;
                                      {
                                        ATerm h_30 = NULL;
                                        h_30 = t;
                                        if(((a_30 != NULL) && (a_30 != h_30)))
                                          _fail(h_30);
                                        else
                                          a_30 = h_30;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = i_27;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_30), not_null(f_30));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_30));
                  ;
                  LocalPopChoice(f_27);
                }
              else
                {
                  t = e_27;
                  {
                    ATerm j_30 = NULL;
                    t = m_0(t);
                    {
                      j_30 = t;
                      if(((a_30 != NULL) && (a_30 != j_30)))
                        _fail(j_30);
                      else
                        a_30 = j_30;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_30));
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
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  s_30 :
  if(((ATgetType(t_30) == AT_LIST) && !(ATisEmpty(t_30))))
    {
      u_30 = ATgetFirst((ATermList) t_30);
      v_30 = (ATerm) ATgetNext((ATermList) t_30);
      t = not_null(v_30);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,i_31 = NULL;
  d_31 = t;
  a_31 :
  if(match_cons(d_31, sym__2))
    {
      e_31 = ATgetArgument(d_31, 0);
      i_31 = ATgetArgument(d_31, 1);
      {
        ATerm r_27;
        r_27 = t;
        {
          ATerm m_31 = NULL;
          ATerm n_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_31), not_null(i_31));
          {
            ATerm s_27 = t;
            int t_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(t_27);
              }
            else
              {
                t = s_27;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_31), not_null(i_31), not_null(m_31));
            t = table_put_0(t);
          }
        }
        t = r_27;
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
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  ATerm x_27;
  x_27 = t;
  {
    ATerm x_31 = NULL;
    ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
    t = i_79(t);
    {
      x_31 = t;
      {
        if(((w_31 != NULL) && (w_31 != x_31)))
          _fail(x_31);
        else
          w_31 = x_31;
        {
          ATerm y_27 = t;
          int c_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_31), term_v_25);
              t = table_get_0(t);
              ;
              LocalPopChoice(c_28);
            }
          else
            {
              t = y_27;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            y_31 = t;
            t_31 :
            if(((ATgetType(y_31) == AT_LIST) && !(ATisEmpty(y_31))))
              {
                z_31 = ATgetFirst((ATermList) y_31);
                a_32 = (ATerm) ATgetNext((ATermList) y_31);
                {
                  if(((v_31 != NULL) && (v_31 != z_31)))
                    _fail(z_31);
                  else
                    v_31 = z_31;
                  {
                    if(((u_31 != NULL) && (u_31 != a_32)))
                      _fail(a_32);
                    else
                      u_31 = a_32;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(w_31), term_v_25, not_null(u_31));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(v_31);
                          {
                            ATerm y_2 (ATerm t)
                            {
                              ATerm b_32 = NULL;
                              b_32 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_31), not_null(b_32));
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
  t = x_27;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm h_32 = NULL;
  h_32 = t;
  t = SSL_remove(not_null(h_32));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm d_80 (ATerm), ATerm e_80 (ATerm))
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_80(t);
      t = e_80(t);
      ;
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      {
        t = e_80(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm h_79 (ATerm))
{
  ATerm o_32 = NULL;
  ATerm h_28;
  h_28 = t;
  {
    ATerm p_32 = NULL;
    ATerm q_32 = NULL;
    t = h_79(t);
    {
      p_32 = t;
      {
        if(((o_32 != NULL) && (o_32 != p_32)))
          _fail(p_32);
        else
          o_32 = p_32;
        {
          ATerm r_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_32), term_v_25);
          {
            ATerm i_28 = t;
            int j_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(j_28);
              }
            else
              {
                t = i_28;
                t = (ATerm) ATempty;
              }
            {
              r_32 = t;
              if(((q_32 != NULL) && (q_32 != r_32)))
                _fail(r_32);
              else
                q_32 = r_32;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_32), term_v_25, (ATerm) ATinsert(CheckATermList(not_null(q_32)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = h_28;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm m_82 (ATerm))
{
  ATerm w_32 = NULL,x_32 = NULL;
  ATerm b_3 (ATerm t)
  {
    t = term_f_26;
    return(t);
  }
  t = begin_scope_1(t, b_3);
  {
    ATerm d_3 (ATerm t)
    {
      ATerm o_28;
      o_28 = t;
      {
        ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
        ATerm p_28 = t;
        int q_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_28;
            t = table_get_0(t);
            ;
            LocalPopChoice(q_28);
          }
        else
          {
            t = p_28;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          y_32 = t;
          v_32 :
          if(((ATgetType(y_32) == AT_LIST) && !(ATisEmpty(y_32))))
            {
              z_32 = ATgetFirst((ATermList) y_32);
              a_33 = (ATerm) ATgetNext((ATermList) y_32);
              {
                if(((x_32 != NULL) && (x_32 != z_32)))
                  _fail(z_32);
                else
                  x_32 = z_32;
                {
                  if(((w_32 != NULL) && (w_32 != a_33)))
                    _fail(a_33);
                  else
                    w_32 = a_33;
                  {
                    t = not_null(x_32);
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
      t = o_28;
      {
        ATerm j_3 (ATerm t)
        {
          t = term_f_26;
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
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_33 = NULL;
        ATerm e_33 = NULL;
        t = term_o_26;
        {
          t = get_config_0(t);
          {
            e_33 = t;
            if(((d_33 != NULL) && (d_33 != e_33)))
              _fail(e_33);
            else
              d_33 = e_33;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_33));
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = term_m_11;
      }
    {
      t = n_82(t);
      {
        ATerm l_3 (ATerm t)
        {
          ATerm w_28 = t;
          int b_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_k_26;
              t = get_config_0(t);
              ;
              LocalPopChoice(b_29);
            }
          else
            {
              t = w_28;
              t = term_m_8;
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
ATerm asfix2abox_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm n_3 (ATerm t)
    {
      t = term_c_29;
      return(t);
    }
    ATerm o_3 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_29), term_f_29), term_e_29), term_d_29);
      return(t);
    }
    t = xtc_transform_2(t, n_3, o_3);
    {
      ATerm p_3 (ATerm t)
      {
        t = term_j_29;
        return(t);
      }
      ATerm q_3 (ATerm t)
      {
        t = term_j_11;
        t = build_impl_args_0(t);
        return(t);
      }
      t = xtc_transform_2(t, p_3, q_3);
    }
    return(t);
  }
  t = xtc_io_1(t, m_3);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm h_33 = NULL;
    h_33 = t;
    g_33 :
    if(!(match_string(h_33, "-v")))
      {
        if(!(match_string(h_33, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_p_29;
    t = set_config_0(t);
    t = term_q_29;
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_r_29;
    return(t);
  }
  t = Option_3(t, r_3, u_3, x_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm k_33 = NULL;
    k_33 = t;
    i_33 :
    if(!(match_string(k_33, "-k")))
      {
        if(!(match_string(k_33, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    ATerm s_29;
    s_29 = t;
    {
      ATerm l_33 = NULL;
      ATerm m_33 = NULL;
      t = string_to_int_0(t);
      {
        m_33 = t;
        if(((l_33 != NULL) && (l_33 != m_33)))
          _fail(m_33);
        else
          l_33 = m_33;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_29, not_null(l_33));
        t = set_config_0(t);
      }
    }
    t = s_29;
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_u_29;
    return(t);
  }
  t = ArgOption_3(t, y_3, z_3, a_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm p_33 = NULL;
  p_33 = t;
  t = SSL_string_to_int(not_null(p_33));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_4 (ATerm t)
      {
        ATerm x_33 = NULL;
        x_33 = t;
        s_33 :
        if(!(match_string(x_33, "-S")))
          {
            if(!(match_string(x_33, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        t = term_b_30;
        t = set_config_0(t);
        t = term_e_30;
        return(t);
      }
      ATerm g_4 (ATerm t)
      {
        t = term_i_30;
        return(t);
      }
      t = Option_3(t, d_4, e_4, g_4);
      ;
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      {
        ATerm k_30 = t;
        int l_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_4 (ATerm t)
            {
              ATerm y_33 = NULL;
              y_33 = t;
              t_33 :
              if(!(match_string(y_33, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_4 (ATerm t)
            {
              ATerm b_34 = NULL;
              ATerm m_30;
              m_30 = t;
              {
                ATerm z_33 = NULL;
                ATerm a_34 = NULL;
                t = string_to_int_0(t);
                {
                  a_34 = t;
                  if(((z_33 != NULL) && (z_33 != a_34)))
                    _fail(a_34);
                  else
                    z_33 = a_34;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_8, not_null(z_33));
                  t = set_config_0(t);
                }
              }
              t = m_30;
              {
                ATerm c_34 = NULL;
                c_34 = t;
                if(((b_34 != NULL) && (b_34 != c_34)))
                  _fail(c_34);
                else
                  b_34 = c_34;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(b_34));
              }
              return(t);
            }
            ATerm n_4 (ATerm t)
            {
              t = term_n_30;
              return(t);
            }
            t = ArgOption_3(t, h_4, i_4, n_4);
            ;
            LocalPopChoice(l_30);
          }
        else
          {
            t = k_30;
            {
              ATerm o_4 (ATerm t)
              {
                ATerm d_34 = NULL;
                d_34 = t;
                w_33 :
                if(!(match_string(d_34, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm p_4 (ATerm t)
              {
                t = term_p_30;
                t = set_config_0(t);
                t = term_q_30;
                return(t);
              }
              ATerm q_4 (ATerm t)
              {
                t = term_r_30;
                return(t);
              }
              t = Option_3(t, o_4, p_4, q_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      {
        ATerm y_30 = t;
        int z_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(z_30);
          }
        else
          {
            t = y_30;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm j_34 = NULL;
    j_34 = t;
    g_34 :
    if(!(match_string(j_34, "-o")))
      {
        if(!(match_string(j_34, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    ATerm m_34 = NULL;
    ATerm b_31;
    b_31 = t;
    {
      ATerm k_34 = NULL;
      ATerm l_34 = NULL;
      l_34 = t;
      if(((k_34 != NULL) && (k_34 != l_34)))
        _fail(l_34);
      else
        k_34 = l_34;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_26, not_null(k_34));
        t = set_config_0(t);
      }
    }
    t = b_31;
    {
      ATerm n_34 = NULL;
      n_34 = t;
      if(((m_34 != NULL) && (m_34 != n_34)))
        _fail(n_34);
      else
        m_34 = n_34;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_34));
    }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = term_c_31;
    return(t);
  }
  t = ArgOption_3(t, r_4, s_4, z_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
      {
        ATerm a_5 (ATerm t)
        {
          ATerm r_34 = NULL;
          r_34 = t;
          q_34 :
          if(!(match_string(r_34, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_5 (ATerm t)
        {
          t = term_j_31;
          t = set_config_0(t);
          t = term_k_31;
          return(t);
        }
        ATerm c_5 (ATerm t)
        {
          t = term_l_31;
          return(t);
        }
        t = Option_3(t, a_5, b_5, c_5);
      }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm v_34 = NULL;
    v_34 = t;
    s_34 :
    if(!(match_string(v_34, "-i")))
      {
        if(!(match_string(v_34, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    ATerm y_34 = NULL;
    ATerm o_31;
    o_31 = t;
    {
      ATerm w_34 = NULL;
      ATerm x_34 = NULL;
      x_34 = t;
      if(((w_34 != NULL) && (w_34 != x_34)))
        _fail(x_34);
      else
        w_34 = x_34;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_26, not_null(w_34));
        t = set_config_0(t);
      }
    }
    t = o_31;
    {
      ATerm z_34 = NULL;
      z_34 = t;
      if(((y_34 != NULL) && (y_34 != z_34)))
        _fail(z_34);
      else
        y_34 = z_34;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_34));
    }
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = term_p_31;
    return(t);
  }
  t = ArgOption_3(t, f_5, h_5, i_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(r_31);
    }
  else
    {
      t = q_31;
      {
        ATerm s_31 = t;
        int c_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(c_32);
          }
        else
          {
            t = s_31;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
  g_35 = t;
  f_35 :
  if(match_cons(g_35, sym__2))
    {
      h_35 = ATgetArgument(g_35, 0);
      i_35 = ATgetArgument(g_35, 1);
      {
        ATerm l_35 = NULL;
        ATerm m_35 = NULL,o_35 = NULL;
        ATerm n_35 = NULL;
        t = not_null(h_35);
        {
          ATerm d_32 = t;
          int e_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(e_32);
            }
          else
            {
              t = d_32;
              t = (ATerm) ATempty;
            }
          {
            n_35 = t;
            if(((m_35 != NULL) && (m_35 != n_35)))
              _fail(n_35);
            else
              m_35 = n_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_35), not_null(m_35));
          {
            t = conc_0(t);
            {
              o_35 = t;
              if(((l_35 != NULL) && (l_35 != o_35)))
                _fail(o_35);
              else
                l_35 = o_35;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_32, not_null(h_35), not_null(l_35));
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
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
  x_35 = t;
  v_35 :
  if(match_string(x_35, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(x_35) == AT_LIST) && !(ATisEmpty(x_35))))
        {
          y_35 = ATgetFirst((ATermList) x_35);
          z_35 = (ATerm) ATgetNext((ATermList) x_35);
          w_35 :
          if(((ATgetType(z_35) == AT_LIST) && !(ATisEmpty(z_35))))
            {
              a_36 = ATgetFirst((ATermList) z_35);
              b_36 = (ATerm) ATgetNext((ATermList) z_35);
              {
                ATerm f_36 = NULL;
                ATerm g_32;
                g_32 = t;
                {
                  t = not_null(y_35);
                  t = j_0(t);
                }
                t = g_32;
                {
                  ATerm g_36 = NULL;
                  t = not_null(a_36);
                  {
                    t = k_0(t);
                    {
                      g_36 = t;
                      if(((f_36 != NULL) && (f_36 != g_36)))
                        _fail(g_36);
                      else
                        f_36 = g_36;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_36)), not_null(f_36));
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
  ATerm m_5 (ATerm t)
  {
    ATerm m_36 = NULL;
    m_36 = t;
    k_36 :
    if(!(match_string(m_36, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    ATerm i_32;
    i_32 = t;
    {
      ATerm n_36 = NULL;
      ATerm o_36 = NULL;
      o_36 = t;
      if(((n_36 != NULL) && (n_36 != o_36)))
        _fail(o_36);
      else
        n_36 = o_36;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_10, (ATerm) ATinsert(ATempty, not_null(n_36)));
        t = extend_config_0(t);
      }
    }
    t = i_32;
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    t = term_j_32;
    return(t);
  }
  t = ArgOption_3(t, m_5, n_5, o_5);
  return(t);
}
ATerm asfix2abox_options_0 (ATerm t)
{
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0(t);
      ;
      LocalPopChoice(l_32);
    }
  else
    {
      t = k_32;
      {
        ATerm m_32 = t;
        int n_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = io_options_0(t);
            ;
            LocalPopChoice(n_32);
          }
        else
          {
            t = m_32;
            {
              ATerm q_5 (ATerm t)
              {
                ATerm r_36 = NULL;
                r_36 = t;
                q_36 :
                if(!(match_string(r_36, "-c")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm r_5 (ATerm t)
              {
                ATerm s_32;
                s_32 = t;
                {
                  t = term_u_32;
                  t = set_config_0(t);
                }
                t = s_32;
                return(t);
              }
              ATerm s_5 (ATerm t)
              {
                t = term_b_33;
                return(t);
              }
              t = Option_3(t, q_5, r_5, s_5);
            }
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm c_33;
  c_33 = t;
  {
    ATerm t_36 = NULL;
    ATerm u_36 = NULL;
    t = term_j_11;
    {
      t = whoami_0(t);
      {
        u_36 = t;
        if(((t_36 != NULL) && (t_36 != u_36)))
          _fail(u_36);
        else
          t_36 = u_36;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_33), not_null(t_36)), term_f_33));
      {
        t = printnl_0(t);
        {
          t = term_o_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = c_33;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm x_36 = NULL;
  t = report_run_time_0(t);
  {
    ATerm y_36 = NULL;
    t = term_j_11;
    {
      t = whoami_0(t);
      {
        y_36 = t;
        if(((x_36 != NULL) && (x_36 != y_36)))
          _fail(y_36);
        else
          x_36 = y_36;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, term_n_33), not_null(x_36)));
      {
        t = printnl_0(t);
        {
          t = term_o_9;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_o_33;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm b_37 = NULL;
  b_37 = t;
  t = SSL_TicksToSeconds(not_null(b_37));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
  j_37 = t;
  i_37 :
  if(match_cons(j_37, sym__2))
    {
      k_37 = ATgetArgument(j_37, 0);
      l_37 = ATgetArgument(j_37, 1);
      {
        ATerm q_33 = t;
        int r_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_37), not_null(l_37));
            ;
            LocalPopChoice(r_33);
          }
        else
          {
            t = q_33;
            t = SSL_addr(not_null(k_37), not_null(l_37));
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
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_75(t);
      ;
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      {
        ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
        s_37 = t;
        r_37 :
        if(((ATgetType(s_37) == AT_LIST) && !(ATisEmpty(s_37))))
          {
            t_37 = ATgetFirst((ATermList) s_37);
            u_37 = (ATerm) ATgetNext((ATermList) s_37);
            {
              ATerm x_37 = NULL;
              ATerm y_37 = NULL;
              t = not_null(u_37);
              {
                t = foldr_2(t, k_75, l_75);
                {
                  y_37 = t;
                  if(((x_37 != NULL) && (x_37 != y_37)))
                    _fail(y_37);
                  else
                    x_37 = y_37;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_37), not_null(x_37));
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
  ATerm f_38 = NULL;
  ATerm h_38 = NULL;
  f_38 = t;
  {
    ATerm i_38 = NULL;
    ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
    t = not_null(f_38);
    {
      i_38 = t;
      {
        t = SSL_explode_term(not_null(i_38));
        {
          n_38 = t;
          e_38 :
          if(match_cons(n_38, sym__2))
            {
              o_38 = ATgetArgument(n_38, 0);
              p_38 = ATgetArgument(n_38, 1);
              if(((h_38 != NULL) && (h_38 != p_38)))
                _fail(p_38);
              else
                h_38 = p_38;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_38);
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
    ATerm x_5 (ATerm t)
    {
      t = term_x_29;
      return(t);
    }
    t = crush_2(t, x_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
  v_38 = t;
  u_38 :
  if(match_cons(v_38, sym__2))
    {
      w_38 = ATgetArgument(v_38, 0);
      x_38 = ATgetArgument(v_38, 1);
      {
        ATerm e_34;
        e_34 = t;
        {
          ATerm f_34 = t;
          int h_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(w_38), not_null(x_38));
              ;
              LocalPopChoice(h_34);
            }
          else
            {
              t = f_34;
              t = SSL_gtr(not_null(w_38), not_null(x_38));
            }
        }
        t = e_34;
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
  ATerm d_39 = NULL;
  ATerm i_34 = t;
  int o_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_39 = NULL,h_39 = NULL,i_39 = NULL;
      e_39 = t;
      c_39 :
      if(match_cons(e_39, sym__2))
        {
          h_39 = ATgetArgument(e_39, 0);
          i_39 = ATgetArgument(e_39, 1);
          {
            if(((d_39 != NULL) && (d_39 != h_39)))
              _fail(h_39);
            else
              d_39 = h_39;
            if(((d_39 != NULL) && (d_39 != i_39)))
              _fail(i_39);
            else
              d_39 = i_39;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(o_34);
    }
  else
    {
      t = i_34;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm y_5 (ATerm t)
  {
    ATerm p_34;
    p_34 = t;
    {
      ATerm n_39 = NULL;
      ATerm o_39 = NULL;
      t = term_z_8;
      {
        t = get_config_0(t);
        {
          o_39 = t;
          if(((n_39 != NULL) && (n_39 != o_39)))
            _fail(o_39);
          else
            n_39 = o_39;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_39), term_o_9);
        t = geq_0(t);
      }
    }
    t = p_34;
    t = i_80(t);
    return(t);
  }
  t = try_1(t, y_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm u_39 = NULL,w_39 = NULL;
    ATerm t_34;
    t_34 = t;
    {
      ATerm v_39 = NULL;
      t = run_time_0(t);
      {
        v_39 = t;
        if(((u_39 != NULL) && (u_39 != v_39)))
          _fail(v_39);
        else
          u_39 = v_39;
      }
    }
    t = t_34;
    {
      ATerm x_39 = NULL;
      t = term_j_11;
      {
        t = whoami_0(t);
        {
          x_39 = t;
          if(((w_39 != NULL) && (w_39 != x_39)))
            _fail(x_39);
          else
            w_39 = x_39;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_34), not_null(u_39)), term_q_11), not_null(w_39)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, z_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_x_29;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_40 = NULL;
  e_40 = t;
  d_40 :
  if(match_cons(e_40, sym_Version_0))
    {
      ATerm g_40 = NULL,i_40 = NULL;
      ATerm a_35;
      a_35 = t;
      {
        ATerm h_40 = NULL;
        t = SSLgetAnnotations(not_null(e_40));
        {
          h_40 = t;
          if(((g_40 != NULL) && (g_40 != h_40)))
            _fail(h_40);
          else
            g_40 = h_40;
        }
      }
      t = a_35;
      {
        ATerm j_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(g_40));
        {
          j_40 = t;
          if(((i_40 != NULL) && (i_40 != j_40)))
            _fail(j_40);
          else
            i_40 = j_40;
        }
        t = not_null(i_40);
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
  ATerm b_35 = t;
  int c_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_35;
      t = get_config_0(t);
      ;
      LocalPopChoice(c_35);
    }
  else
    {
      t = b_35;
      {
        ATerm a_6 (ATerm t)
        {
          ATerm e_35 = t;
          int j_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(j_35);
            }
          else
            {
              t = e_35;
              {
                ATerm k_35 = t;
                int p_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(p_35);
                  }
                else
                  {
                    t = k_35;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, a_6);
      }
    }
  t = u_84(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_40 = NULL;
  q_40 = t;
  t = SSL_table_create(not_null(q_40));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm f_41 = NULL;
  f_41 = t;
  {
    ATerm q_35;
    q_35 = t;
    {
      t = term_r_35;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_35, term_s_35, not_null(f_41));
          t = table_put_0(t);
        }
      }
    }
    t = q_35;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm u_41 = NULL;
  u_41 = t;
  t = SSL_table_destroy(not_null(u_41));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_41 = NULL;
  y_41 = t;
  t = SSL_exit(not_null(y_41));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
  c_42 = t;
  b_42 :
  if(((ATgetType(c_42) == AT_LIST) && ATisEmpty(c_42)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(c_42) == AT_LIST) && !(ATisEmpty(c_42))))
        {
          d_42 = ATgetFirst((ATermList) c_42);
          e_42 = (ATerm) ATgetNext((ATermList) c_42);
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
  ATerm t_35;
  t_35 = t;
  {
    ATerm h_42 = NULL;
    ATerm p_42 = NULL;
    ATerm u_35 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(c_36);
      }
    else
      {
        t = u_35;
        {
          ATerm i_42 = NULL;
          ATerm j_42 = NULL;
          j_42 = t;
          if(((i_42 != NULL) && (i_42 != j_42)))
            _fail(j_42);
          else
            i_42 = j_42;
          t = (ATerm) ATinsert(ATempty, not_null(i_42));
        }
      }
    {
      p_42 = t;
      if(((h_42 != NULL) && (h_42 != p_42)))
        _fail(p_42);
      else
        h_42 = p_42;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_8, not_null(h_42));
      t = printnl_0(t);
    }
  }
  t = t_35;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
  m_43 = t;
  j_43 :
  if(((ATgetType(m_43) == AT_LIST) && !(ATisEmpty(m_43))))
    {
      k_43 = ATgetFirst((ATermList) m_43);
      l_43 = (ATerm) ATgetNext((ATermList) m_43);
      {
        ATerm r_43 = NULL;
        t = not_null(l_43);
        {
          ATerm d_36;
          d_36 = t;
          {
            ATerm u_43 = NULL,b_44 = NULL,h_44 = NULL;
            ATerm e_36;
            e_36 = t;
            {
              ATerm v_43 = NULL;
              t = i_0(t);
              {
                v_43 = t;
                if(((u_43 != NULL) && (u_43 != v_43)))
                  _fail(v_43);
                else
                  u_43 = v_43;
              }
            }
            t = e_36;
            {
              ATerm c_44 = NULL;
              t = not_null(k_43);
              {
                t = g_0(t);
                {
                  c_44 = t;
                  if(((b_44 != NULL) && (b_44 != c_44)))
                    _fail(c_44);
                  else
                    b_44 = c_44;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_43)), not_null(b_44));
                {
                  h_44 = t;
                  if(((r_43 != NULL) && (r_43 != h_44)))
                    _fail(h_44);
                  else
                    r_43 = h_44;
                }
              }
            }
          }
          t = d_36;
          {
            ATerm b_6 (ATerm t)
            {
              t = not_null(r_43);
              return(t);
            }
            t = reverse_acc_2(t, g_0, b_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(m_43) == AT_LIST) && ATisEmpty(m_43)))
        {
          {
            t = term_j_11;
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
  ATerm g_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, g_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_61 (ATerm))
{
  ATerm s_44 = NULL,t_44 = NULL;
  s_44 = t;
  r_44 :
  if(match_cons(s_44, sym_Program_1))
    {
      t_44 = ATgetArgument(s_44, 0);
      {
        ATerm y_44 = NULL,a_45 = NULL;
        ATerm z_44 = NULL;
        t = SSLgetAnnotations(not_null(s_44));
        {
          z_44 = t;
          if(((y_44 != NULL) && (y_44 != z_44)))
            _fail(z_44);
          else
            y_44 = z_44;
        }
        {
          t = not_null(t_44);
          {
            ATerm c_45 = NULL;
            t = x_61(t);
            {
              a_45 = t;
              {
                ATerm h_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_45)), not_null(y_44));
                {
                  h_45 = t;
                  if(((c_45 != NULL) && (c_45 != h_45)))
                    _fail(h_45);
                  else
                    c_45 = h_45;
                }
                t = not_null(c_45);
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
  ATerm e_46 = NULL;
  ATerm h_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_46 = NULL;
      t = term_o_33;
      {
        t = get_config_0(t);
        {
          f_46 = t;
          if(((e_46 != NULL) && (e_46 != f_46)))
            _fail(f_46);
          else
            e_46 = f_46;
        }
      }
      ;
      LocalPopChoice(i_36);
    }
  else
    {
      t = h_36;
      {
        ATerm h_6 (ATerm t)
        {
          ATerm i_6 (ATerm t)
          {
            ATerm g_46 = NULL;
            g_46 = t;
            if(((e_46 != NULL) && (e_46 != g_46)))
              _fail(g_46);
            else
              e_46 = g_46;
            return(t);
          }
          t = Program_1(t, i_6);
          return(t);
        }
        t = option_defined_1(t, h_6);
      }
    }
  {
    ATerm j_6 (ATerm t)
    {
      ATerm k_6 (ATerm t)
      {
        t = not_null(e_46);
        return(t);
      }
      t = short_description_1(t, k_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, j_6);
    {
      t = term_j_36;
      {
        t = echo_0(t);
        {
          t = term_s_36;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm r_6 (ATerm t)
                {
                  ATerm i_46 = NULL;
                  ATerm l_46 = NULL;
                  l_46 = t;
                  if(((i_46 != NULL) && (i_46 != l_46)))
                    _fail(l_46);
                  else
                    i_46 = l_46;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_46)), term_v_36);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, r_6);
                {
                  ATerm s_6 (ATerm t)
                  {
                    ATerm m_46 = NULL;
                    ATerm n_46 = NULL;
                    ATerm t_6 (ATerm t)
                    {
                      t = not_null(e_46);
                      return(t);
                    }
                    t = long_description_1(t, t_6);
                    {
                      n_46 = t;
                      if(((m_46 != NULL) && (m_46 != n_46)))
                        _fail(n_46);
                      else
                        m_46 = n_46;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(m_46)), term_w_36);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, s_6);
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
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
  e_47 = t;
  d_47 :
  if(match_cons(e_47, sym__2))
    {
      f_47 = ATgetArgument(e_47, 0);
      g_47 = ATgetArgument(e_47, 1);
      {
        ATerm z_36;
        z_36 = t;
        t = SSL_printnl(not_null(f_47), not_null(g_47));
        t = z_36;
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
  ATerm s_47 = NULL,y_47 = NULL;
  s_47 = t;
  r_47 :
  if(match_cons(s_47, sym_Undefined_1))
    {
      y_47 = ATgetArgument(s_47, 0);
      {
        ATerm b_48 = NULL,d_48 = NULL;
        ATerm c_48 = NULL;
        t = SSLgetAnnotations(not_null(s_47));
        {
          c_48 = t;
          if(((b_48 != NULL) && (b_48 != c_48)))
            _fail(c_48);
          else
            b_48 = c_48;
        }
        {
          t = not_null(y_47);
          {
            ATerm f_48 = NULL;
            t = y_61(t);
            {
              d_48 = t;
              {
                ATerm k_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(d_48)), not_null(b_48));
                {
                  k_48 = t;
                  if(((f_48 != NULL) && (f_48 != k_48)))
                    _fail(k_48);
                  else
                    f_48 = k_48;
                }
                t = not_null(f_48);
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
  ATerm p_48 (ATerm t)
  {
    ATerm a_37 = t;
    int c_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_69, _id);
        ;
        LocalPopChoice(c_37);
      }
    else
      {
        t = a_37;
        t = Cons_2(t, _id, p_48);
      }
    return(t);
  }
  t = p_48(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_85 (ATerm))
{
  t = fetch_1(t, p_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm u_48 = NULL;
  u_48 = t;
  t_48 :
  if(match_cons(u_48, sym_Help_0))
    {
      ATerm w_48 = NULL,y_48 = NULL;
      ATerm d_37;
      d_37 = t;
      {
        ATerm x_48 = NULL;
        t = SSLgetAnnotations(not_null(u_48));
        {
          x_48 = t;
          if(((w_48 != NULL) && (w_48 != x_48)))
            _fail(x_48);
          else
            w_48 = x_48;
        }
      }
      t = d_37;
      {
        ATerm z_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(w_48));
        {
          z_48 = t;
          if(((y_48 != NULL) && (y_48 != z_48)))
            _fail(z_48);
          else
            y_48 = z_48;
        }
        t = not_null(y_48);
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
  ATerm e_49 = NULL;
  e_49 = t;
  t = SSL_implode_string(not_null(e_49));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_37 = t;
  int f_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(f_37);
    }
  else
    {
      t = e_37;
      {
        ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
        j_49 = t;
        i_49 :
        if(((ATgetType(j_49) == AT_LIST) && !(ATisEmpty(j_49))))
          {
            k_49 = ATgetFirst((ATermList) j_49);
            l_49 = (ATerm) ATgetNext((ATermList) j_49);
            {
              t = not_null(k_49);
              {
                ATerm u_6 (ATerm t)
                {
                  t = not_null(l_49);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_6);
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
  ATerm v_49 = NULL;
  ATerm x_49 = NULL;
  v_49 = t;
  {
    ATerm y_49 = NULL;
    ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL;
    t = not_null(v_49);
    {
      y_49 = t;
      {
        t = SSL_explode_term(not_null(y_49));
        {
          a_50 = t;
          t_49 :
          if(match_cons(a_50, sym__2))
            {
              b_50 = ATgetArgument(a_50, 0);
              c_50 = ATgetArgument(a_50, 1);
              u_49 :
              if(match_string(b_50, ""))
                {
                  if(((x_49 != NULL) && (x_49 != c_50)))
                    _fail(c_50);
                  else
                    x_49 = c_50;
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
      t = not_null(x_49);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_69 (ATerm))
{
  ATerm g_50 (ATerm t)
  {
    ATerm g_37 = t;
    int h_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_50);
        ;
        LocalPopChoice(h_37);
      }
    else
      {
        t = g_37;
        {
          t = Nil_0(t);
          t = n_69(t);
        }
      }
    return(t);
  }
  t = g_50(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
  j_50 = t;
  i_50 :
  if(match_cons(j_50, sym__2))
    {
      k_50 = ATgetArgument(j_50, 0);
      l_50 = ATgetArgument(j_50, 1);
      {
        t = not_null(k_50);
        {
          ATerm v_6 (ATerm t)
          {
            t = not_null(l_50);
            return(t);
          }
          t = at_end_1(t, v_6);
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
  ATerm m_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(n_37);
    }
  else
    {
      t = m_37;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_50 = NULL;
  q_50 = t;
  t = SSL_explode_string(not_null(q_50));
  return(t);
}
ATerm _2 (ATerm t, ATerm h_55 (ATerm), ATerm i_55 (ATerm))
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL;
  z_50 = t;
  y_50 :
  if(match_cons(z_50, sym__2))
    {
      a_51 = ATgetArgument(z_50, 0);
      b_51 = ATgetArgument(z_50, 1);
      {
        ATerm f_51 = NULL,h_51 = NULL;
        ATerm g_51 = NULL;
        t = SSLgetAnnotations(not_null(z_50));
        {
          g_51 = t;
          if(((f_51 != NULL) && (f_51 != g_51)))
            _fail(g_51);
          else
            f_51 = g_51;
        }
        {
          t = not_null(a_51);
          {
            ATerm j_51 = NULL;
            t = h_55(t);
            {
              h_51 = t;
              {
                t = not_null(b_51);
                {
                  ATerm l_51 = NULL;
                  t = i_55(t);
                  {
                    j_51 = t;
                    {
                      ATerm m_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_51), not_null(j_51)), not_null(f_51));
                      {
                        m_51 = t;
                        if(((l_51 != NULL) && (l_51 != m_51)))
                          _fail(m_51);
                        else
                          l_51 = m_51;
                      }
                      t = not_null(l_51);
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
  ATerm o_37;
  o_37 = t;
  {
    ATerm u_51 = NULL,w_51 = NULL;
    ATerm p_37;
    p_37 = t;
    {
      ATerm v_51 = NULL;
      t = r_64(t);
      {
        v_51 = t;
        if(((u_51 != NULL) && (u_51 != v_51)))
          _fail(v_51);
        else
          u_51 = v_51;
      }
    }
    t = p_37;
    {
      ATerm x_51 = NULL;
      x_51 = t;
      if(((w_51 != NULL) && (w_51 != x_51)))
        _fail(x_51);
      else
        w_51 = x_51;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_51)), not_null(u_51)));
        t = printnl_0(t);
      }
    }
  }
  t = o_37;
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_68 (ATerm))
{
  ATerm a_52 (ATerm t)
  {
    ATerm q_37 = t;
    int v_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(v_37);
      }
    else
      {
        t = q_37;
        t = Cons_2(t, y_68, a_52);
      }
    return(t);
  }
  t = a_52(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm c_52 = NULL;
  c_52 = t;
  t = SSL_is_string(not_null(c_52));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm w_37 = t;
  int z_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(z_37);
    }
  else
    {
      t = w_37;
      {
        ATerm a_38 = t;
        int b_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, w_6);
            ;
            LocalPopChoice(b_38);
          }
        else
          {
            t = a_38;
            {
              ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL;
              l_52 = t;
              k_52 :
              if(match_cons(l_52, sym_Path_1))
                {
                  m_52 = ATgetArgument(l_52, 0);
                  t = not_null(m_52);
                }
              else
                {
                  if(match_cons(l_52, sym_Var_1))
                    {
                      m_52 = ATgetArgument(l_52, 0);
                      {
                        t = not_null(m_52);
                        {
                          ATerm c_38 = t;
                          int d_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(d_38);
                            }
                          else
                            {
                              t = c_38;
                              {
                                ATerm x_6 (ATerm t)
                                {
                                  t = term_g_38;
                                  return(t);
                                }
                                t = debug_1(t, x_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(l_52, sym_Prefix_2))
                        {
                          m_52 = ATgetArgument(l_52, 0);
                          n_52 = ATgetArgument(l_52, 1);
                          {
                            ATerm s_52 = NULL,u_52 = NULL;
                            ATerm j_38;
                            j_38 = t;
                            {
                              ATerm t_52 = NULL;
                              t = not_null(m_52);
                              {
                                t = eval_config_0(t);
                                {
                                  t_52 = t;
                                  if(((s_52 != NULL) && (s_52 != t_52)))
                                    _fail(t_52);
                                  else
                                    s_52 = t_52;
                                }
                              }
                            }
                            t = j_38;
                            {
                              ATerm v_52 = NULL;
                              t = not_null(n_52);
                              {
                                t = eval_config_0(t);
                                {
                                  v_52 = t;
                                  if(((u_52 != NULL) && (u_52 != v_52)))
                                    _fail(v_52);
                                  else
                                    u_52 = v_52;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_52), not_null(u_52));
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
  ATerm e_53 = NULL;
  e_53 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_32, not_null(e_53));
    {
      t = table_get_0(t);
      {
        ATerm d_7 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm k_38;
            k_38 = t;
            {
              ATerm g_53 = NULL;
              ATerm h_53 = NULL;
              h_53 = t;
              if(((g_53 != NULL) && (g_53 != h_53)))
                _fail(h_53);
              else
                g_53 = h_53;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_f_32, not_null(e_53), not_null(g_53));
                t = table_put_0(t);
              }
            }
            t = k_38;
          }
          return(t);
        }
        t = try_1(t, d_7);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm o_79 (ATerm))
{
  ATerm l_38 = t;
  int m_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_79(t);
      ;
      LocalPopChoice(m_38);
    }
  else
    {
      t = l_38;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL;
  m_53 = t;
  l_53 :
  if(match_cons(m_53, sym__2))
    {
      n_53 = ATgetArgument(m_53, 0);
      o_53 = ATgetArgument(m_53, 1);
      t = SSL_table_get(not_null(n_53), not_null(o_53));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL;
  v_53 = t;
  u_53 :
  if(match_cons(v_53, sym__3))
    {
      w_53 = ATgetArgument(v_53, 0);
      x_53 = ATgetArgument(v_53, 1);
      y_53 = ATgetArgument(v_53, 2);
      {
        ATerm q_38;
        q_38 = t;
        {
          ATerm c_54 = NULL;
          ATerm d_54 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_53), not_null(x_53));
          {
            ATerm r_38 = t;
            int s_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(s_38);
              }
            else
              {
                t = r_38;
                t = (ATerm) ATempty;
              }
            {
              d_54 = t;
              if(((c_54 != NULL) && (c_54 != d_54)))
                _fail(d_54);
              else
                c_54 = d_54;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_53), not_null(x_53), (ATerm) ATinsert(CheckATermList(not_null(c_54)), not_null(y_53)));
            t = table_put_0(t);
          }
        }
        t = q_38;
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
  ATerm h_54 = NULL;
  ATerm i_54 = NULL;
  t = term_j_11;
  {
    t = u_86(t);
    {
      i_54 = t;
      if(((h_54 != NULL) && (h_54 != i_54)))
        _fail(i_54);
      else
        h_54 = i_54;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_l_36, term_p_36, not_null(h_54));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
  o_54 = t;
  n_54 :
  if(match_string(o_54, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(o_54) == AT_LIST) && !(ATisEmpty(o_54))))
        {
          p_54 = ATgetFirst((ATermList) o_54);
          q_54 = (ATerm) ATgetNext((ATermList) o_54);
          {
            ATerm t_54 = NULL;
            ATerm t_38;
            t_38 = t;
            {
              t = not_null(p_54);
              t = a_0(t);
            }
            t = t_38;
            {
              ATerm u_54 = NULL;
              t = term_j_11;
              {
                t = b_0(t);
                {
                  u_54 = t;
                  if(((t_54 != NULL) && (t_54 != u_54)))
                    _fail(u_54);
                  else
                    t_54 = u_54;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_54)), not_null(t_54));
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
  ATerm g_7 (ATerm t)
  {
    ATerm z_54 = NULL;
    z_54 = t;
    y_54 :
    if(!(match_string(z_54, "--help")))
      {
        if(!(match_string(z_54, "-h")))
          {
            if(!(match_string(z_54, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_7 (ATerm t)
  {
    t = term_y_38;
    {
      t = set_config_0(t);
      t = term_z_38;
    }
    return(t);
  }
  ATerm i_7 (ATerm t)
  {
    t = term_a_39;
    return(t);
  }
  t = Option_3(t, g_7, h_7, i_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL;
  c_55 = t;
  b_55 :
  if(((ATgetType(c_55) == AT_LIST) && !(ATisEmpty(c_55))))
    {
      d_55 = ATgetFirst((ATermList) c_55);
      e_55 = (ATerm) ATgetNext((ATermList) c_55);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_55)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_55)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_56 (ATerm), ATerm r_56 (ATerm))
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
  q_55 = t;
  p_55 :
  if(((ATgetType(q_55) == AT_LIST) && !(ATisEmpty(q_55))))
    {
      r_55 = ATgetFirst((ATermList) q_55);
      s_55 = (ATerm) ATgetNext((ATermList) q_55);
      {
        ATerm w_55 = NULL,y_55 = NULL;
        ATerm x_55 = NULL;
        t = SSLgetAnnotations(not_null(q_55));
        {
          x_55 = t;
          if(((w_55 != NULL) && (w_55 != x_55)))
            _fail(x_55);
          else
            w_55 = x_55;
        }
        {
          t = not_null(r_55);
          {
            ATerm a_56 = NULL;
            t = q_56(t);
            {
              y_55 = t;
              {
                t = not_null(s_55);
                {
                  ATerm c_56 = NULL;
                  t = r_56(t);
                  {
                    a_56 = t;
                    {
                      ATerm d_56 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_56)), not_null(y_55)), not_null(w_55));
                      {
                        d_56 = t;
                        if(((c_56 != NULL) && (c_56 != d_56)))
                          _fail(d_56);
                        else
                          c_56 = d_56;
                      }
                      t = not_null(c_56);
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
  ATerm n_56 = NULL;
  n_56 = t;
  m_56 :
  if(((ATgetType(n_56) == AT_LIST) && ATisEmpty(n_56)))
    {
      {
        ATerm p_56 = NULL,t_56 = NULL;
        ATerm b_39;
        b_39 = t;
        {
          ATerm s_56 = NULL;
          t = SSLgetAnnotations(not_null(n_56));
          {
            s_56 = t;
            if(((p_56 != NULL) && (p_56 != s_56)))
              _fail(s_56);
            else
              p_56 = s_56;
          }
        }
        t = b_39;
        {
          ATerm u_56 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_56));
          {
            u_56 = t;
            if(((t_56 != NULL) && (t_56 != u_56)))
              _fail(u_56);
            else
              t_56 = u_56;
          }
          t = not_null(t_56);
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
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL;
  a_57 = t;
  z_56 :
  if(match_cons(a_57, sym__2))
    {
      b_57 = ATgetArgument(a_57, 0);
      c_57 = ATgetArgument(a_57, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_32, not_null(b_57), not_null(c_57));
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
  ATerm f_39;
  f_39 = t;
  {
    ATerm j_7 (ATerm t)
    {
      t = term_g_39;
      t = s_86(t);
      return(t);
    }
    t = try_1(t, j_7);
  }
  t = f_39;
  {
    ATerm k_7 (ATerm t)
    {
      ATerm k_57 = NULL;
      ATerm j_39;
      j_39 = t;
      {
        ATerm i_57 = NULL;
        ATerm j_57 = NULL;
        j_57 = t;
        if(((i_57 != NULL) && (i_57 != j_57)))
          _fail(j_57);
        else
          i_57 = j_57;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_33, not_null(i_57));
          t = set_config_0(t);
        }
      }
      t = j_39;
      {
        ATerm l_57 = NULL;
        l_57 = t;
        if(((k_57 != NULL) && (k_57 != l_57)))
          _fail(l_57);
        else
          k_57 = l_57;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_57));
      }
      return(t);
    }
    ATerm l_7 (ATerm t)
    {
      ATerm k_39 = t;
      int l_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_39 = t;
          int p_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(p_39);
            }
          else
            {
              t = m_39;
              {
                t = s_86(t);
                t = Cons_2(t, _id, l_7);
              }
            }
          ;
          LocalPopChoice(l_39);
        }
      else
        {
          t = k_39;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_7, l_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
  ATerm q_39;
  q_39 = t;
  {
    ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL;
    u_57 = t;
    q_57 :
    if(match_cons(u_57, sym__3))
      {
        v_57 = ATgetArgument(u_57, 0);
        w_57 = ATgetArgument(u_57, 1);
        x_57 = ATgetArgument(u_57, 2);
        {
          if(((r_57 != NULL) && (r_57 != v_57)))
            _fail(v_57);
          else
            r_57 = v_57;
          {
            if(((s_57 != NULL) && (s_57 != w_57)))
              _fail(w_57);
            else
              s_57 = w_57;
            {
              if(((t_57 != NULL) && (t_57 != x_57)))
                _fail(x_57);
              else
                t_57 = x_57;
              t = SSL_table_put(not_null(r_57), not_null(s_57), not_null(t_57));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_39;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm a_58 = NULL;
  ATerm r_39;
  r_39 = t;
  {
    t = term_s_39;
    t = table_put_0(t);
  }
  t = r_39;
  {
    ATerm s_7 (ATerm t)
    {
      ATerm t_39 = t;
      int y_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_86(t);
          ;
          LocalPopChoice(y_39);
        }
      else
        {
          t = t_39;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_7);
    {
      ATerm t_7 (ATerm t)
      {
        ATerm z_39 = t;
        int a_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_40;
            b_40 = t;
            {
              ATerm c_40 = t;
              int f_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_d_35;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(f_40);
                }
              else
                {
                  t = c_40;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = b_40;
            {
              t = system_usage_0(t);
              {
                t = term_x_29;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(a_40);
          }
        else
          {
            t = z_39;
            {
              ATerm w_7 (ATerm t)
              {
                ATerm x_7 (ATerm t)
                {
                  ATerm b_58 = NULL;
                  b_58 = t;
                  if(((a_58 != NULL) && (a_58 != b_58)))
                    _fail(b_58);
                  else
                    a_58 = b_58;
                  return(t);
                }
                t = Undefined_1(t, x_7);
                return(t);
              }
              t = option_defined_1(t, w_7);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_58)), term_k_40));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_o_9;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, t_7);
      {
        ATerm l_40;
        l_40 = t;
        {
          t = term_l_36;
          t = table_destroy_0(t);
        }
        t = l_40;
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
        ATerm m_40 = t;
        int n_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_84);
            ;
            LocalPopChoice(n_40);
          }
        else
          {
            t = m_40;
            {
              ATerm o_40 = t;
              int p_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_84(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(p_40);
                }
              else
                {
                  t = o_40;
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
ATerm io_asfix2abox_0 (ATerm t)
{
  t = option_wrap_2(t, asfix2abox_options_0, asfix2abox_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_asfix2abox_0(t);
  return(t);
}
