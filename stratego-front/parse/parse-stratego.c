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
Symbol sym_Meta_1;
Symbol sym_Syntax_1;
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
Symbol sym_Anno_2;
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
  sym_Meta_1 = ATmakeSymbol("Meta", 1, ATfalse);
  ATprotectSymbol(sym_Meta_1);
  sym_Syntax_1 = ATmakeSymbol("Syntax", 1, ATfalse);
  ATprotectSymbol(sym_Syntax_1);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
ATerm term_q_45;
ATerm term_p_45;
ATerm term_w_44;
ATerm term_i_44;
ATerm term_u_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_q_42;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_v_40;
ATerm term_q_40;
ATerm term_h_40;
ATerm term_b_40;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_p_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_q_37;
ATerm term_i_37;
ATerm term_g_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_v_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_i_36;
ATerm term_t_35;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_s_33;
ATerm term_o_33;
ATerm term_k_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_v_32;
ATerm term_o_32;
ATerm term_f_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_t_31;
ATerm term_q_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_c_31;
ATerm term_s_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_n_29;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_b_28;
ATerm term_q_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_b_27;
ATerm term_z_26;
ATerm term_r_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_d_26;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_q_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_b_24;
ATerm term_o_23;
ATerm term_g_23;
ATerm term_u_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_t_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_g_21;
ATerm term_d_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_u_17;
ATerm term_r_17;
ATerm term_n_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_n_12;
void init_constant_terms (void)
{
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_13, term_w_12, term_g_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_q_13, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_w_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_z_13, term_a_14);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_l_14, term_m_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_14, term_p_14, term_q_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_z_14, term_a_15);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_h_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_n_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_u_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_z_15, term_c_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_f_16, term_g_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_f_17, term_g_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_j_17, term_k_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_u_17, term_x_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_d_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_18, term_k_18, term_l_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_r_18, term_v_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_18, term_a_19, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_f_19, term_n_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_19, term_q_19, term_r_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_19, term_v_19, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_z_19, term_a_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_20, term_g_20, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_20, term_r_20, term_t_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_20, term_w_20, term_x_20);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym__2, term_b_28, term_p_28);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_b_28, term_m_31);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym__2, term_n_12, term_s_33);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym__2, term_b_22, term_o_21);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_33);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym__2, term_c_37, term_x_21);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(sym__2, term_v_37, term_x_21);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym__2, term_b_41, term_g_41);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym__2, term_c_43, term_x_21);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym__2, term_d_27, term_x_21);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym__2, term_h_40, term_x_21);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym__3, term_b_41, term_g_41, (ATerm) ATempty);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm u_65 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm a_84 (ATerm), ATerm b_84 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm signal_to_descr_0 (ATerm);
ATerm signal_from_number_0 (ATerm);
ATerm warn_ifsignaled_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_2 (ATerm, ATerm h_64 (ATerm), ATerm i_64 (ATerm));
ATerm fork_and_wait_1 (ATerm, ATerm j_64 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm r_83 (ATerm));
ATerm assert_1 (ATerm, ATerm c_80 (ATerm));
ATerm obsolete_1 (ATerm, ATerm n_65 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm xtc_transform_2 (ATerm, ATerm t_83 (ATerm), ATerm u_83 (ATerm));
ATerm add_extension_0 (ATerm);
ATerm split_2 (ATerm, ATerm p_68 (ATerm), ATerm q_68 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm g_78 (ATerm));
ATerm if_keep1_1 (ATerm, ATerm c_82 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm b_81 (ATerm));
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm n_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm s_83 (ATerm));
ATerm get_syntax_definition_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm find_in_includes_1 (ATerm, ATerm e_63 (ATerm));
ATerm get_parse_table_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm a_81 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm y_69 (ATerm));
ATerm read_from_0 (ATerm);
ATerm get_meta_0 (ATerm);
ATerm get_syntax_0 (ATerm);
ATerm basename_1 (ATerm, ATerm e_78 (ATerm));
ATerm basename_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm d_62 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm d_81 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm e_77 (ATerm));
ATerm repeat_1 (ATerm, ATerm y_78 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm k_65 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm c_81 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm e_81 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm s_73 (ATerm), ATerm t_73 (ATerm));
ATerm union_1 (ATerm, ATerm o_73 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm n_81 (ATerm));
ATerm file_exists_0 (ATerm);
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
ATerm access_0 (ATerm);
ATerm can_read_file_0 (ATerm);
ATerm read_repository_file_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_path_0 (ATerm);
ATerm parse_stratego_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm z_79 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm u_80 (ATerm), ATerm v_80 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm y_79 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm d_83 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm e_83 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm b_76 (ATerm), ATerm c_76 (ATerm));
ATerm crush_2 (ATerm, ATerm z_73 (ATerm), ATerm a_74 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm z_80 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm f_85 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_87 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_87 (ATerm));
ATerm Program_1 (ATerm, ATerm k_62 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm l_62 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_86 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_70 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm s_55 (ATerm), ATerm t_55 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm g_65 (ATerm));
ATerm map_1 (ATerm, ATerm n_69 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_80 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_57 (ATerm), ATerm c_57 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_87 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm l_85 (ATerm), ATerm m_85 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm i_83 (ATerm), ATerm j_83 (ATerm));
ATerm xtc_iowrap_2 (ATerm, ATerm o_83 (ATerm), ATerm p_83 (ATerm));
ATerm parse_stratego_0 (ATerm);
ATerm main_0 (ATerm);
ATerm subt_0 (ATerm t)
{
  ATerm f_0 = NULL,x_0 = NULL,y_0 = NULL;
  f_0 = t;
  e_0 :
  if(match_cons(f_0, sym__2))
    {
      x_0 = ATgetArgument(f_0, 0);
      y_0 = ATgetArgument(f_0, 1);
      {
        ATerm c_10 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(x_0), not_null(y_0));
            ;
            LocalPopChoice(m_12);
          }
        else
          {
            t = c_10;
            t = SSL_subtr(not_null(x_0), not_null(y_0));
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
  ATerm l_1 = NULL;
  ATerm g_2 = NULL,i_2 = NULL;
  ATerm h_2 = NULL;
  t = term_n_12;
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        t = term_w_12;
      }
    {
      h_2 = t;
      if(((g_2 != NULL) && (g_2 != h_2)))
        _fail(h_2);
      else
        g_2 = h_2;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_2), term_w_12);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          i_2 = t;
          if(((l_1 != NULL) && (l_1 != i_2)))
            _fail(i_2);
          else
            l_1 = i_2;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_1)), term_n_12);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  c_3 = t;
  a_3 :
  if(match_cons(c_3, sym__2))
    {
      d_3 = ATgetArgument(c_3, 0);
      f_3 = ATgetArgument(c_3, 1);
      b_3 :
      if(match_cons(d_3, sym_Stream_1))
        {
          e_3 = ATgetArgument(d_3, 0);
          {
            ATerm i_3 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(e_3), not_null(f_3));
            {
              ATerm j_3 = NULL;
              j_3 = t;
              if(((i_3 != NULL) && (i_3 != j_3)))
                _fail(j_3);
              else
                i_3 = j_3;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_3));
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
ATerm WriteToFile_1 (ATerm t, ATerm u_65 (ATerm))
{
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL;
  q_3 = t;
  p_3 :
  if(match_cons(q_3, sym__2))
    {
      r_3 = ATgetArgument(q_3, 0);
      s_3 = ATgetArgument(q_3, 1);
      {
        ATerm v_3 = NULL,x_3 = NULL;
        t = not_null(r_3);
        {
          ATerm w_3 = NULL;
          w_3 = t;
          if(((v_3 != NULL) && (v_3 != w_3)))
            _fail(w_3);
          else
            v_3 = w_3;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_3), term_x_12);
            {
              t = open_stream_0(t);
              {
                ATerm y_3 = NULL;
                y_3 = t;
                if(((x_3 != NULL) && (x_3 != y_3)))
                  _fail(y_3);
                else
                  x_3 = y_3;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_3), not_null(s_3));
                  {
                    t = u_65(t);
                    {
                      t = fclose_0(t);
                      t = not_null(s_3);
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
  ATerm e_4 = NULL;
  ATerm g_4 = NULL;
  e_4 = t;
  {
    ATerm h_4 = NULL;
    t = xtc_new_file_0(t);
    {
      h_4 = t;
      {
        if(((g_4 != NULL) && (g_4 != h_4)))
          _fail(h_4);
        else
          g_4 = h_4;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_4), not_null(e_4));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(g_4);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_4));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm a_84 (ATerm), ATerm b_84 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, a_84, b_84);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm l_4 = NULL;
  l_4 = t;
  t = SSL_close_file(not_null(l_4));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
  q_4 = t;
  p_4 :
  if(match_cons(q_4, sym__2))
    {
      r_4 = ATgetArgument(q_4, 0);
      s_4 = ATgetArgument(q_4, 1);
      t = SSL_execvp(not_null(r_4), not_null(s_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm x_4 = NULL;
  x_4 = t;
  t = SSL_int_to_string(not_null(x_4));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL;
  f_5 = t;
  e_5 :
  if(match_cons(f_5, sym_UnknownSignal_1))
    {
      g_5 = ATgetArgument(f_5, 0);
      {
        ATerm k_5 = NULL;
        ATerm l_5 = NULL;
        t = not_null(g_5);
        {
          t = int_to_string_0(t);
          {
            l_5 = t;
            if(((k_5 != NULL) && (k_5 != l_5)))
              _fail(l_5);
            else
              k_5 = l_5;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_12), not_null(k_5)), term_y_12);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(f_5, sym_Signal_3))
        {
          g_5 = ATgetArgument(f_5, 0);
          h_5 = ATgetArgument(f_5, 1);
          i_5 = ATgetArgument(f_5, 2);
          {
            ATerm p_5 = NULL;
            ATerm q_5 = NULL;
            t = not_null(h_5);
            {
              t = int_to_string_0(t);
              {
                q_5 = t;
                if(((p_5 != NULL) && (p_5 != q_5)))
                  _fail(q_5);
                else
                  p_5 = q_5;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_5)), term_b_13), not_null(p_5)), term_a_13), not_null(g_5));
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
ATerm signal_from_number_0 (ATerm t)
{
  ATerm y_5 = NULL;
  y_5 = t;
  {
    ATerm c_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_20), term_u_20), term_m_20), term_b_20), term_x_19), term_s_19), term_o_19), term_c_19), term_y_18), term_m_18), term_i_18), term_a_18), term_n_17), term_h_17), term_z_16), term_s_16), term_m_16), term_d_16), term_v_15), term_p_15), term_j_15), term_b_15), term_v_14), term_n_14), term_b_14), term_x_13), term_t_13), term_k_13);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL;
            a_6 = t;
            x_5 :
            if(match_cons(a_6, sym_Signal_3))
              {
                b_6 = ATgetArgument(a_6, 0);
                c_6 = ATgetArgument(a_6, 1);
                d_6 = ATgetArgument(a_6, 2);
                if(((y_5 != NULL) && (y_5 != c_6)))
                  _fail(c_6);
                else
                  y_5 = c_6;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, c_0);
        }
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = c_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(y_5));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm b_21;
  b_21 = t;
  {
    ATerm h_0 (ATerm t)
    {
      ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
      k_6 = t;
      j_6 :
      if(match_cons(k_6, sym_WaitStatus_3))
        {
          l_6 = ATgetArgument(k_6, 0);
          m_6 = ATgetArgument(k_6, 1);
          n_6 = ATgetArgument(k_6, 2);
          {
            ATerm q_6 = NULL;
            t = not_null(m_6);
            {
              ATerm c_21 = t;
              if((PushChoice() == 0))
                {
                  ATerm p_6 = NULL;
                  p_6 = t;
                  h_6 :
                  if(!(match_int(p_6, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = c_21;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm r_6 = NULL;
                    r_6 = t;
                    if(((q_6 != NULL) && (q_6 != r_6)))
                      _fail(r_6);
                    else
                      q_6 = r_6;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_6)), term_g_21));
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
    t = try_1(t, h_0);
  }
  t = b_21;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm v_6 = NULL;
  v_6 = t;
  t = SSL_waitpid(not_null(v_6));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm h_64 (ATerm), ATerm i_64 (ATerm))
{
  ATerm c_7 = NULL;
  ATerm e_7 = NULL;
  c_7 = t;
  {
    t = fork_0(t);
    {
      e_7 = t;
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_7 = NULL;
            g_7 = t;
            b_7 :
            if(match_int(g_7, 0))
              {
                t = not_null(c_7);
                t = h_64(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_7), not_null(c_7));
              t = i_64(t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm j_64 (ATerm))
{
  ATerm p_7 = NULL;
  ATerm q_0 (ATerm t)
  {
    ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
    q_7 = t;
    o_7 :
    if(match_cons(q_7, sym__2))
      {
        r_7 = ATgetArgument(q_7, 0);
        s_7 = ATgetArgument(q_7, 1);
        {
          ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
          if(((p_7 != NULL) && (p_7 != s_7)))
            _fail(s_7);
          else
            p_7 = s_7;
          {
            t = not_null(r_7);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  u_7 = t;
                  m_7 :
                  if(match_cons(u_7, sym_WaitStatus_3))
                    {
                      v_7 = ATgetArgument(u_7, 0);
                      w_7 = ATgetArgument(u_7, 1);
                      x_7 = ATgetArgument(u_7, 2);
                      n_7 :
                      if(match_int(v_7, 0))
                        {
                          t = not_null(p_7);
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
  t = fork_2(t, j_64, q_0);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
  c_8 = t;
  b_8 :
  if(match_cons(c_8, sym__2))
    {
      d_8 = ATgetArgument(c_8, 0);
      e_8 = ATgetArgument(c_8, 1);
      {
        ATerm r_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_8), not_null(e_8));
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
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm r_83 (ATerm))
{
  ATerm k_8 = NULL;
  ATerm j_21;
  j_21 = t;
  {
    ATerm l_8 = NULL;
    t = r_83(t);
    {
      t = xtc_find_warning_0(t);
      {
        l_8 = t;
        if(((k_8 != NULL) && (k_8 != l_8)))
          _fail(l_8);
        else
          k_8 = l_8;
      }
    }
  }
  t = j_21;
  {
    ATerm k_21;
    k_21 = t;
    {
      ATerm m_8 = NULL;
      ATerm n_8 = NULL;
      n_8 = t;
      if(((m_8 != NULL) && (m_8 != n_8)))
        _fail(n_8);
      else
        m_8 = n_8;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_8), not_null(m_8));
        t = call_0(t);
      }
    }
    t = k_21;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm c_80 (ATerm))
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
  v_8 = t;
  u_8 :
  if(match_cons(v_8, sym__2))
    {
      w_8 = ATgetArgument(v_8, 0);
      x_8 = ATgetArgument(v_8, 1);
      {
        ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
        ATerm l_21;
        l_21 = t;
        {
          ATerm d_9 = NULL;
          ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
          t = c_80(t);
          {
            d_9 = t;
            {
              if(((a_9 != NULL) && (a_9 != d_9)))
                _fail(d_9);
              else
                a_9 = d_9;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_9), not_null(w_8), not_null(x_8));
                {
                  t = table_push_0(t);
                  {
                    ATerm m_21 = t;
                    int n_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_9), term_o_21);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(n_21);
                      }
                    else
                      {
                        t = m_21;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      e_9 = t;
                      t_8 :
                      if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
                        {
                          f_9 = ATgetFirst((ATermList) e_9);
                          g_9 = (ATerm) ATgetNext((ATermList) e_9);
                          {
                            if(((b_9 != NULL) && (b_9 != f_9)))
                              _fail(f_9);
                            else
                              b_9 = f_9;
                            {
                              if(((c_9 != NULL) && (c_9 != g_9)))
                                _fail(g_9);
                              else
                                c_9 = g_9;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(a_9), term_o_21, (ATerm) ATinsert(CheckATermList(not_null(c_9)), (ATerm) ATinsert(CheckATermList(not_null(b_9)), not_null(w_8))));
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
        t = l_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm n_65 (ATerm))
{
  ATerm p_21;
  p_21 = t;
  {
    t = n_65(t);
    {
      ATerm s_0 (ATerm t)
      {
        t = term_q_21;
        return(t);
      }
      t = debug_1(t, s_0);
    }
  }
  t = p_21;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
  ATerm x_9 (ATerm t)
  {
    ATerm s_21 = t;
    if((PushChoice() == 0))
      {
        ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
        s_9 = t;
        m_9 :
        if(match_cons(s_9, sym__2))
          {
            t_9 = ATgetArgument(s_9, 0);
            u_9 = ATgetArgument(s_9, 1);
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
        t = s_21;
      }
    {
      ATerm t_0 (ATerm t)
      {
        t = term_t_21;
        return(t);
      }
      t = obsolete_1(t, t_0);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_9), term_x_12);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm y_9 (ATerm t)
  {
    t = SSL_open_file(not_null(p_9), not_null(q_9));
    return(t);
  }
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym__2))
    {
      p_9 = ATgetArgument(o_9, 0);
      q_9 = ATgetArgument(o_9, 1);
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_9(t);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            t = y_9(t);
          }
      }
    }
  else
    {
      t = x_9(t);
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
  ATerm a_10 = NULL;
  ATerm b_10 = NULL;
  t = term_x_21;
  {
    t = new_0(t);
    {
      b_10 = t;
      if(((a_10 != NULL) && (a_10 != b_10)))
        _fail(b_10);
      else
        a_10 = b_10;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_10), term_y_21);
    {
      t = conc_strings_0(t);
      {
        ATerm u_0 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, u_0);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm f_10 = NULL;
  t = new_file_0(t);
  {
    f_10 = t;
    {
      ATerm a_22;
      a_22 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_10), term_x_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_10), term_x_21);
            {
              ATerm v_0 (ATerm t)
              {
                t = term_b_22;
                return(t);
              }
              t = assert_1(t, v_0);
            }
          }
        }
      }
      t = a_22;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm p_10 = NULL,q_10 = NULL;
  p_10 = t;
  o_10 :
  if(match_cons(p_10, sym_stdin_0))
    {
      ATerm r_10 = NULL;
      ATerm s_10 = NULL;
      ATerm t_10 = NULL;
      t = xtc_new_file_0(t);
      {
        s_10 = t;
        {
          if(((r_10 != NULL) && (r_10 != s_10)))
            _fail(s_10);
          else
            r_10 = s_10;
          {
            ATerm u_10 = NULL;
            t = p_0(t);
            {
              u_10 = t;
              if(((t_10 != NULL) && (t_10 != u_10)))
                _fail(u_10);
              else
                t_10 = u_10;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_10), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_10)), term_d_22));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, o_0);
                  {
                    t = not_null(r_10);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_10));
    }
  else
    {
      if(match_cons(p_10, sym_FILE_1))
        {
          q_10 = ATgetArgument(p_10, 0);
          {
            ATerm w_10 = NULL;
            ATerm x_10 = NULL;
            t = not_null(q_10);
            {
              ATerm y_10 = NULL;
              t = xtc_new_file_0(t);
              {
                x_10 = t;
                {
                  if(((w_10 != NULL) && (w_10 != x_10)))
                    _fail(x_10);
                  else
                    w_10 = x_10;
                  {
                    ATerm z_10 = NULL;
                    t = p_0(t);
                    {
                      z_10 = t;
                      if(((y_10 != NULL) && (y_10 != z_10)))
                        _fail(z_10);
                      else
                        y_10 = z_10;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_10), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(w_10)), term_d_22), not_null(q_10)), term_e_22));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, o_0);
                          {
                            t = not_null(w_10);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_10));
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
  ATerm k_11 = NULL;
  k_11 = t;
  j_11 :
  if(match_cons(k_11, sym_stdin_0))
    {
      ATerm m_11 = NULL,o_11 = NULL;
      ATerm f_22;
      f_22 = t;
      {
        ATerm n_11 = NULL;
        t = SSLgetAnnotations(not_null(k_11));
        {
          n_11 = t;
          if(((m_11 != NULL) && (m_11 != n_11)))
            _fail(n_11);
          else
            m_11 = n_11;
        }
      }
      t = f_22;
      {
        ATerm p_11 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(m_11));
        {
          p_11 = t;
          if(((o_11 != NULL) && (o_11 != p_11)))
            _fail(p_11);
          else
            o_11 = p_11;
        }
        t = not_null(o_11);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm t_83 (ATerm), ATerm u_83 (ATerm))
{
  ATerm j_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_22 = t;
      int t_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(t_22);
        }
      else
        {
          t = s_22;
          t = stdin_0(t);
        }
      LocalPopChoice(r_22);
      t = xtc_transform_file_2(t, t_83, u_83);
    }
  else
    {
      t = j_22;
      t = xtc_transform_term_2(t, t_83, u_83);
    }
  return(t);
}
ATerm add_extension_0 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
  v_11 = t;
  u_11 :
  if(match_cons(v_11, sym__2))
    {
      w_11 = ATgetArgument(v_11, 0);
      x_11 = ATgetArgument(v_11, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_11)), term_u_22), not_null(w_11));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_68 (ATerm), ATerm q_68 (ATerm))
{
  ATerm d_12 = NULL,f_12 = NULL;
  ATerm a_23;
  a_23 = t;
  {
    ATerm e_12 = NULL;
    t = p_68(t);
    {
      e_12 = t;
      if(((d_12 != NULL) && (d_12 != e_12)))
        _fail(e_12);
      else
        d_12 = e_12;
    }
  }
  t = a_23;
  {
    ATerm g_12 = NULL;
    t = q_68(t);
    {
      g_12 = t;
      if(((f_12 != NULL) && (f_12 != g_12)))
        _fail(g_12);
      else
        f_12 = g_12;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_12), not_null(f_12));
  }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm g_78 (ATerm))
{
  t = basename_0(t);
  {
    ATerm w_0 (ATerm t)
    {
      t = term_x_21;
      t = g_78(t);
      return(t);
    }
    t = split_2(t, _id, w_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm if_keep1_1 (ATerm t, ATerm c_82 (ATerm))
{
  ATerm z_0 (ATerm t)
  {
    ATerm b_23;
    b_23 = t;
    {
      ATerm k_12 = NULL;
      ATerm l_12 = NULL;
      t = term_g_23;
      {
        t = get_config_0(t);
        {
          l_12 = t;
          if(((k_12 != NULL) && (k_12 != l_12)))
            _fail(l_12);
          else
            k_12 = l_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_12), term_w_12);
        t = geq_0(t);
      }
    }
    t = b_23;
    t = c_82(t);
    return(t);
  }
  t = try_1(t, z_0);
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm b_81 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm h_23;
    h_23 = t;
    {
      ATerm o_12 = NULL;
      ATerm p_12 = NULL;
      t = term_n_12;
      {
        t = get_config_0(t);
        {
          p_12 = t;
          if(((o_12 != NULL) && (o_12 != p_12)))
            _fail(p_12);
          else
            o_12 = p_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_12), term_v_13);
        t = geq_0(t);
      }
    }
    t = h_23;
    t = b_81(t);
    return(t);
  }
  t = try_1(t, a_1);
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym__2))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      t = SSL_rename(not_null(u_12), not_null(v_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm i_13 = NULL,j_13 = NULL;
  i_13 = t;
  h_13 :
  if(match_cons(i_13, sym_FILE_1))
    {
      j_13 = ATgetArgument(i_13, 0);
      {
        ATerm i_23 = t;
        int n_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_13 = NULL;
            t = n_0(t);
            {
              l_13 = t;
              d_13 :
              if(match_cons(l_13, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_13), term_o_23);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(j_13);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_o_23;
            ;
            LocalPopChoice(n_23);
          }
        else
          {
            t = i_23;
            {
              ATerm q_23 = t;
              int t_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_13 = NULL;
                  ATerm o_13 = NULL;
                  t = n_0(t);
                  {
                    o_13 = t;
                    {
                      if(((n_13 != NULL) && (n_13 != o_13)))
                        _fail(o_13);
                      else
                        n_13 = o_13;
                      {
                        ATerm u_23 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm x_23 = t;
                            int y_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(y_23);
                              }
                            else
                              {
                                t = x_23;
                                {
                                  ATerm p_13 = NULL;
                                  p_13 = t;
                                  if(((j_13 != NULL) && (j_13 != p_13)))
                                    _fail(p_13);
                                  else
                                    j_13 = p_13;
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = u_23;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_13), not_null(n_13));
                          t = rename_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_13));
                  ;
                  LocalPopChoice(t_23);
                }
              else
                {
                  t = q_23;
                  {
                    ATerm r_13 = NULL;
                    t = n_0(t);
                    {
                      r_13 = t;
                      if(((j_13 != NULL) && (j_13 != r_13)))
                        _fail(r_13);
                      else
                        j_13 = r_13;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_13));
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
ATerm xtc_transform_1 (ATerm t, ATerm s_83 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, s_83, b_1);
  return(t);
}
ATerm get_syntax_definition_0 (ATerm t)
{
  ATerm d_14 = NULL;
  ATerm c_1 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      t = term_b_24;
      return(t);
    }
    t = debug_1(t, d_1);
    return(t);
  }
  t = if_verbose6_1(t, c_1);
  {
    ATerm c_24;
    c_24 = t;
    {
      ATerm e_14 = NULL;
      ATerm e_1 (ATerm t)
      {
        t = term_h_24;
        return(t);
      }
      t = guarantee_extension_1(t, e_1);
      {
        e_14 = t;
        if(((d_14 != NULL) && (d_14 != e_14)))
          _fail(e_14);
        else
          d_14 = e_14;
      }
    }
    t = c_24;
    {
      ATerm i_24 = t;
      int j_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_14 = NULL;
          t = not_null(d_14);
          {
            ATerm f_1 (ATerm t)
            {
              t = term_k_24;
              return(t);
            }
            t = find_in_includes_1(t, f_1);
            {
              ATerm g_14 = NULL;
              g_14 = t;
              if(((f_14 != NULL) && (f_14 != g_14)))
                _fail(g_14);
              else
                f_14 = g_14;
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_14));
            }
          }
          ;
          LocalPopChoice(j_24);
        }
      else
        {
          t = i_24;
          {
            ATerm h_14 = NULL;
            ATerm g_1 (ATerm t)
            {
              ATerm h_1 (ATerm t)
              {
                t = term_p_24;
                return(t);
              }
              t = say_1(t, h_1);
              return(t);
            }
            t = if_verbose2_1(t, g_1);
            {
              ATerm i_14 = NULL;
              ATerm i_1 (ATerm t)
              {
                t = term_q_24;
                return(t);
              }
              t = guarantee_extension_1(t, i_1);
              {
                i_14 = t;
                if(((h_14 != NULL) && (h_14 != i_14)))
                  _fail(i_14);
                else
                  h_14 = i_14;
              }
              {
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_14));
                {
                  ATerm j_1 (ATerm t)
                  {
                    t = term_r_24;
                    return(t);
                  }
                  ATerm k_1 (ATerm t)
                  {
                    t = term_s_24;
                    {
                      t = get_config_0(t);
                      {
                        ATerm m_1 (ATerm t)
                        {
                          ATerm j_14 = NULL;
                          ATerm k_14 = NULL;
                          k_14 = t;
                          if(((j_14 != NULL) && (j_14 != k_14)))
                            _fail(k_14);
                          else
                            j_14 = k_14;
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_14)), term_s_24);
                          return(t);
                        }
                        t = map_1(t, m_1);
                        t = concat_0(t);
                      }
                    }
                    return(t);
                  }
                  t = xtc_transform_2(t, j_1, k_1);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      t = term_t_24;
                      return(t);
                    }
                    t = xtc_transform_1(t, n_1);
                    {
                      ATerm o_1 (ATerm t)
                      {
                        t = not_null(d_14);
                        return(t);
                      }
                      t = rename_to_1(t, o_1);
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
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
  s_14 = t;
  r_14 :
  if(match_cons(s_14, sym__2))
    {
      t_14 = ATgetArgument(s_14, 0);
      u_14 = ATgetArgument(s_14, 1);
      {
        t = not_null(u_14);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm x_14 = NULL;
            ATerm y_14 = NULL;
            y_14 = t;
            if(((x_14 != NULL) && (x_14 != y_14)))
              _fail(y_14);
            else
              x_14 = y_14;
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(t_14)), term_u_24), not_null(x_14));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
            return(t);
          }
          t = fetch_elem_1(t, p_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm find_in_includes_1 (ATerm t, ATerm e_63 (ATerm))
{
  ATerm d_15 = NULL,f_15 = NULL;
  ATerm w_24;
  w_24 = t;
  {
    ATerm e_15 = NULL;
    e_15 = t;
    if(((d_15 != NULL) && (d_15 != e_15)))
      _fail(e_15);
    else
      d_15 = e_15;
  }
  t = w_24;
  {
    ATerm g_15 = NULL;
    t = term_s_24;
    {
      t = get_config_0(t);
      {
        g_15 = t;
        if(((f_15 != NULL) && (f_15 != g_15)))
          _fail(g_15);
        else
          f_15 = g_15;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_15), not_null(f_15));
      {
        t = find_in_path_0(t);
        {
          ATerm q_1 (ATerm t)
          {
            t = debug_1(t, e_63);
            return(t);
          }
          t = if_verbose2_1(t, q_1);
        }
      }
    }
  }
  return(t);
}
ATerm get_parse_table_0 (ATerm t)
{
  ATerm m_15 = NULL;
  ATerm o_15 = NULL;
  ATerm r_1 (ATerm t)
  {
    ATerm s_1 (ATerm t)
    {
      t = term_x_24;
      return(t);
    }
    t = debug_1(t, s_1);
    return(t);
  }
  t = if_verbose6_1(t, r_1);
  {
    m_15 = t;
    {
      ATerm t_1 (ATerm t)
      {
        t = term_y_24;
        return(t);
      }
      t = guarantee_extension_1(t, t_1);
      {
        o_15 = t;
        {
          ATerm z_24 = t;
          int a_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_15 = NULL;
              ATerm u_1 (ATerm t)
              {
                t = term_b_25;
                return(t);
              }
              t = find_in_includes_1(t, u_1);
              {
                ATerm r_15 = NULL;
                r_15 = t;
                if(((q_15 != NULL) && (q_15 != r_15)))
                  _fail(r_15);
                else
                  q_15 = r_15;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_15));
              }
              ;
              LocalPopChoice(a_25);
            }
          else
            {
              t = z_24;
              {
                ATerm v_1 (ATerm t)
                {
                  ATerm w_1 (ATerm t)
                  {
                    t = term_c_25;
                    return(t);
                  }
                  t = say_1(t, w_1);
                  return(t);
                }
                t = if_verbose2_1(t, v_1);
                {
                  t = not_null(m_15);
                  {
                    t = get_syntax_definition_0(t);
                    {
                      ATerm x_1 (ATerm t)
                      {
                        t = term_h_25;
                        return(t);
                      }
                      ATerm y_1 (ATerm t)
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_15)), term_i_25);
                        return(t);
                      }
                      t = xtc_transform_2(t, x_1, y_1);
                      {
                        ATerm z_1 (ATerm t)
                        {
                          t = not_null(o_15);
                          return(t);
                        }
                        t = rename_to_1(t, z_1);
                      }
                    }
                  }
                }
              }
            }
          {
            ATerm a_2 (ATerm t)
            {
              ATerm b_2 (ATerm t)
              {
                t = term_b_25;
                return(t);
              }
              t = debug_1(t, b_2);
              return(t);
            }
            t = if_verbose6_1(t, a_2);
          }
        }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm a_81 (ATerm))
{
  ATerm c_2 (ATerm t)
  {
    ATerm j_25;
    j_25 = t;
    {
      ATerm w_15 = NULL;
      ATerm x_15 = NULL;
      t = term_n_12;
      {
        t = get_config_0(t);
        {
          x_15 = t;
          if(((w_15 != NULL) && (w_15 != x_15)))
            _fail(x_15);
          else
            w_15 = x_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_15), term_q_13);
        t = geq_0(t);
      }
    }
    t = j_25;
    t = a_81(t);
    return(t);
  }
  t = try_1(t, c_2);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm y_69 (ATerm))
{
  ATerm a_16 = NULL;
  ATerm d_2 (ATerm t)
  {
    ATerm b_16 = NULL;
    t = y_69(t);
    {
      b_16 = t;
      if(((a_16 != NULL) && (a_16 != b_16)))
        _fail(b_16);
      else
        a_16 = b_16;
    }
    return(t);
  }
  t = fetch_1(t, d_2);
  t = not_null(a_16);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL;
  i_16 = t;
  h_16 :
  if(match_cons(i_16, sym_stdin_0))
    {
      ATerm k_16 = NULL;
      ATerm l_16 = NULL;
      t = term_l_25;
      {
        t = ReadFromFile_0(t);
        {
          l_16 = t;
          if(((k_16 != NULL) && (k_16 != l_16)))
            _fail(l_16);
          else
            k_16 = l_16;
        }
      }
      t = not_null(k_16);
    }
  else
    {
      if(match_cons(i_16, sym_FILE_1))
        {
          j_16 = ATgetArgument(i_16, 0);
          {
            ATerm n_16 = NULL;
            ATerm o_16 = NULL;
            t = not_null(j_16);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  o_16 = t;
                  if(((n_16 != NULL) && (n_16 != o_16)))
                    _fail(o_16);
                  else
                    n_16 = o_16;
                }
              }
            }
            t = not_null(n_16);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm get_meta_0 (ATerm t)
{
  ATerm x_16 = NULL;
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      t = term_m_25;
      return(t);
    }
    t = debug_1(t, f_2);
    return(t);
  }
  t = if_verbose6_1(t, e_2);
  {
    ATerm n_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_2 (ATerm t)
        {
          ATerm k_2 (ATerm t)
          {
            t = term_q_25;
            return(t);
          }
          t = guarantee_extension_1(t, k_2);
          return(t);
        }
        t = FILE_1(t, j_2);
        t = read_from_0(t);
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = n_25;
        {
          ATerm y_16 = NULL;
          ATerm l_2 (ATerm t)
          {
            ATerm m_2 (ATerm t)
            {
              t = term_v_25;
              return(t);
            }
            t = guarantee_extension_1(t, m_2);
            return(t);
          }
          t = FILE_1(t, l_2);
          {
            t = read_from_0(t);
            {
              y_16 = t;
              {
                ATerm a_17 = NULL;
                ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
                t = not_null(y_16);
                {
                  a_17 = t;
                  {
                    t = SSL_explode_term(not_null(a_17));
                    {
                      c_17 = t;
                      w_16 :
                      if(match_cons(c_17, sym__2))
                        {
                          d_17 = ATgetArgument(c_17, 0);
                          e_17 = ATgetArgument(c_17, 1);
                          if(((x_16 != NULL) && (x_16 != d_17)))
                            _fail(d_17);
                          else
                            x_16 = d_17;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, not_null(x_16))));
              }
            }
          }
        }
      }
    {
      ATerm n_2 (ATerm t)
      {
        ATerm o_2 (ATerm t)
        {
          t = term_m_25;
          return(t);
        }
        t = debug_1(t, o_2);
        return(t);
      }
      t = if_verbose6_1(t, n_2);
    }
  }
  return(t);
}
ATerm get_syntax_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL;
  ATerm p_2 (ATerm t)
  {
    ATerm q_2 (ATerm t)
    {
      t = term_w_25;
      return(t);
    }
    t = debug_1(t, q_2);
    return(t);
  }
  t = if_verbose6_1(t, p_2);
  {
    p_17 = t;
    o_17 :
    if(match_cons(p_17, sym_FILE_1))
      {
        q_17 = ATgetArgument(p_17, 0);
        {
          ATerm x_25 = t;
          int c_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_d_26;
              t = get_config_0(t);
              ;
              LocalPopChoice(c_26);
            }
          else
            {
              t = x_25;
              {
                ATerm e_26 = t;
                int f_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = get_meta_0(t);
                    {
                      ATerm g_26 = t;
                      int k_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_17 = NULL,t_17 = NULL;
                          s_17 = t;
                          m_17 :
                          if(match_cons(s_17, sym_Meta_1))
                            {
                              t_17 = ATgetArgument(s_17, 0);
                              {
                                t = not_null(t_17);
                                {
                                  ATerm r_2 (ATerm t)
                                  {
                                    ATerm v_17 = NULL,w_17 = NULL;
                                    v_17 = t;
                                    l_17 :
                                    if(match_cons(v_17, sym_Syntax_1))
                                      {
                                        w_17 = ATgetArgument(v_17, 0);
                                        t = not_null(w_17);
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                    return(t);
                                  }
                                  t = fetch_elem_1(t, r_2);
                                }
                              }
                            }
                          else
                            {
                              _fail(t);
                            }
                          ;
                          LocalPopChoice(k_26);
                        }
                      else
                        {
                          t = g_26;
                          {
                            ATerm y_17 = NULL;
                            ATerm z_17 = NULL;
                            z_17 = t;
                            if(((y_17 != NULL) && (y_17 != z_17)))
                              _fail(z_17);
                            else
                              y_17 = z_17;
                            {
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_26), not_null(q_17)), term_m_26), not_null(y_17)), term_l_26);
                              {
                                t = error_0(t);
                                _fail(t);
                              }
                            }
                          }
                        }
                    }
                    ;
                    LocalPopChoice(f_26);
                  }
                else
                  {
                    t = e_26;
                    t = term_o_26;
                  }
              }
            }
          {
            ATerm s_2 (ATerm t)
            {
              ATerm t_2 (ATerm t)
              {
                t = term_r_26;
                return(t);
              }
              t = debug_1(t, t_2);
              return(t);
            }
            t = if_verbose2_1(t, s_2);
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
ATerm basename_1 (ATerm t, ATerm e_78 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm u_2 (ATerm t)
    {
      ATerm s_26 = t;
      int v_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, u_2);
          ;
          LocalPopChoice(v_26);
        }
      else
        {
          t = s_26;
          {
            ATerm x_26 = t;
            int y_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_2 (ATerm t)
                {
                  ATerm g_18 = NULL;
                  g_18 = t;
                  e_18 :
                  if(!(match_int(g_18, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, v_2, _id);
                ;
                LocalPopChoice(y_26);
              }
            else
              {
                t = x_26;
                {
                  ATerm w_2 (ATerm t)
                  {
                    ATerm h_18 = NULL;
                    h_18 = t;
                    f_18 :
                    if(!(match_int(h_18, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, w_2, e_78);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, u_2);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm d_62 (ATerm))
{
  ATerm o_18 = NULL,p_18 = NULL;
  o_18 = t;
  n_18 :
  if(match_cons(o_18, sym_FILE_1))
    {
      p_18 = ATgetArgument(o_18, 0);
      {
        ATerm s_18 = NULL,u_18 = NULL;
        ATerm t_18 = NULL;
        t = SSLgetAnnotations(not_null(o_18));
        {
          t_18 = t;
          if(((s_18 != NULL) && (s_18 != t_18)))
            _fail(t_18);
          else
            s_18 = t_18;
        }
        {
          t = not_null(p_18);
          {
            ATerm w_18 = NULL;
            t = d_62(t);
            {
              u_18 = t;
              {
                ATerm x_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(u_18)), not_null(s_18));
                {
                  x_18 = t;
                  if(((w_18 != NULL) && (w_18 != x_18)))
                    _fail(x_18);
                  else
                    w_18 = x_18;
                }
                t = not_null(w_18);
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
ATerm parse_module_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL;
  ATerm x_2 (ATerm t)
  {
    ATerm y_2 (ATerm t)
    {
      t = term_z_26;
      return(t);
    }
    t = debug_1(t, y_2);
    return(t);
  }
  t = if_verbose6_1(t, x_2);
  {
    ATerm a_27;
    a_27 = t;
    {
      ATerm j_19 = NULL,k_19 = NULL;
      ATerm z_2 (ATerm t)
      {
        ATerm i_19 = NULL;
        t = basename_0(t);
        {
          i_19 = t;
          if(((h_19 != NULL) && (h_19 != i_19)))
            _fail(i_19);
          else
            h_19 = i_19;
        }
        return(t);
      }
      t = FILE_1(t, z_2);
      {
        t = get_syntax_0(t);
        {
          t = get_parse_table_0(t);
          {
            j_19 = t;
            e_19 :
            if(match_cons(j_19, sym_FILE_1))
              {
                k_19 = ATgetArgument(j_19, 0);
                if(((g_19 != NULL) && (g_19 != k_19)))
                  _fail(k_19);
                else
                  g_19 = k_19;
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
    t = a_27;
    {
      ATerm g_3 (ATerm t)
      {
        t = term_b_27;
        return(t);
      }
      ATerm h_3 (ATerm t)
      {
        ATerm l_19 = NULL;
        ATerm m_19 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm k_3 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_d_27);
            return(t);
          }
          t = if_verbose3_1(t, k_3);
          {
            m_19 = t;
            if(((l_19 != NULL) && (l_19 != m_19)))
              _fail(m_19);
            else
              l_19 = m_19;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(l_19)), not_null(g_19)), term_f_27), term_e_27);
        return(t);
      }
      t = xtc_transform_2(t, g_3, h_3);
      {
        ATerm l_3 (ATerm t)
        {
          t = term_h_27;
          return(t);
        }
        t = xtc_transform_2(t, l_3, pass_verbose_0);
        {
          ATerm m_3 (ATerm t)
          {
            ATerm n_3 (ATerm t)
            {
              t = not_null(h_19);
              {
                ATerm o_3 (ATerm t)
                {
                  t = term_i_27;
                  return(t);
                }
                t = guarantee_extension_1(t, o_3);
              }
              return(t);
            }
            t = copy_to_1(t, n_3);
            return(t);
          }
          t = if_keep1_1(t, m_3);
          {
            ATerm t_3 (ATerm t)
            {
              t = term_j_27;
              return(t);
            }
            t = xtc_transform_2(t, t_3, pass_verbose_0);
            {
              ATerm u_3 (ATerm t)
              {
                t = term_k_27;
                return(t);
              }
              t = xtc_transform_2(t, u_3, pass_verbose_0);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
  c_20 = t;
  t_19 :
  if(match_cons(c_20, sym__2))
    {
      d_20 = ATgetArgument(c_20, 0);
      e_20 = ATgetArgument(c_20, 1);
      {
        ATerm h_20 = NULL;
        ATerm i_20 = NULL,k_20 = NULL;
        ATerm j_20 = NULL;
        t = not_null(d_20);
        {
          ATerm o_27 = t;
          int p_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(p_27);
            }
          else
            {
              t = o_27;
              t = (ATerm) ATempty;
            }
          {
            j_20 = t;
            if(((i_20 != NULL) && (i_20 != j_20)))
              _fail(j_20);
            else
              i_20 = j_20;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_20), not_null(i_20));
          {
            t = conc_0(t);
            {
              k_20 = t;
              if(((h_20 != NULL) && (h_20 != k_20)))
                _fail(k_20);
              else
                h_20 = k_20;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_27, not_null(d_20), not_null(h_20));
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
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_20 (ATerm t)
        {
          ATerm u_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, q_20);
              ;
              LocalPopChoice(y_27);
            }
          else
            {
              t = u_27;
              {
                ATerm z_3 (ATerm t)
                {
                  ATerm p_20 = NULL;
                  p_20 = t;
                  o_20 :
                  if(!(match_int(p_20, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm a_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, z_3, a_4);
              }
            }
          return(t);
        }
        t = q_20(t);
        ;
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm s_20 = NULL;
  s_20 = t;
  t = SSL_table_keys(not_null(s_20));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm y_20 = NULL;
  y_20 = t;
  {
    t = table_keys_0(t);
    {
      ATerm b_4 (ATerm t)
      {
        ATerm a_21 = NULL;
        ATerm e_21 = NULL;
        a_21 = t;
        {
          ATerm f_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_20), not_null(a_21));
          {
            t = table_get_0(t);
            {
              f_21 = t;
              if(((e_21 != NULL) && (e_21 != f_21)))
                _fail(f_21);
              else
                e_21 = f_21;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_21), not_null(e_21));
        }
        return(t);
      }
      t = map_1(t, b_4);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm d_81 (ATerm))
{
  ATerm c_4 (ATerm t)
  {
    ATerm z_27;
    z_27 = t;
    {
      ATerm r_21 = NULL;
      ATerm w_21 = NULL;
      t = term_n_12;
      {
        t = get_config_0(t);
        {
          w_21 = t;
          if(((r_21 != NULL) && (r_21 != w_21)))
            _fail(w_21);
          else
            r_21 = w_21;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_21), term_z_19);
        t = geq_0(t);
      }
    }
    t = z_27;
    t = d_81(t);
    return(t);
  }
  t = try_1(t, c_4);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm a_28;
  a_28 = t;
  {
    ATerm z_21 = NULL;
    ATerm c_22 = NULL;
    c_22 = t;
    if(((z_21 != NULL) && (z_21 != c_22)))
      _fail(c_22);
    else
      z_21 = c_22;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_21, not_null(z_21));
      t = printnl_0(t);
    }
  }
  t = a_28;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm i_22 = NULL;
  ATerm k_22 = NULL,l_22 = NULL;
  i_22 = t;
  {
    ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_b_28, (ATerm) ATmakeAppl(sym_Tool_1, not_null(i_22)));
    {
      t = table_get_0(t);
      {
        m_22 = t;
        g_22 :
        if(((ATgetType(m_22) == AT_LIST) && !(ATisEmpty(m_22))))
          {
            n_22 = ATgetFirst((ATermList) m_22);
            q_22 = (ATerm) ATgetNext((ATermList) m_22);
            h_22 :
            if(match_cons(n_22, sym__2))
              {
                o_22 = ATgetArgument(n_22, 0);
                p_22 = ATgetArgument(n_22, 1);
                {
                  if(((k_22 != NULL) && (k_22 != o_22)))
                    _fail(o_22);
                  else
                    k_22 = o_22;
                  if(((l_22 != NULL) && (l_22 != p_22)))
                    _fail(p_22);
                  else
                    l_22 = p_22;
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
    t = not_null(l_22);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
  x_22 = t;
  w_22 :
  if(match_cons(x_22, sym__2))
    {
      y_22 = ATgetArgument(x_22, 0);
      z_22 = ATgetArgument(x_22, 1);
      {
        ATerm c_23 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_b_28, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_22)));
        {
          t = table_get_0(t);
          {
            ATerm d_4 (ATerm t)
            {
              ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
              d_23 = t;
              v_22 :
              if(match_cons(d_23, sym__2))
                {
                  e_23 = ATgetArgument(d_23, 0);
                  f_23 = ATgetArgument(d_23, 1);
                  {
                    if(((z_22 != NULL) && (z_22 != e_23)))
                      _fail(e_23);
                    else
                      z_22 = e_23;
                    if(((c_23 != NULL) && (c_23 != f_23)))
                      _fail(f_23);
                    else
                      c_23 = f_23;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, d_4);
          }
        }
        t = not_null(c_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm e_77 (ATerm))
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      {
        ATerm k_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_4 (ATerm t)
            {
              t = filter_1(t, e_77);
              return(t);
            }
            t = Cons_2(t, e_77, f_4);
            ;
            LocalPopChoice(l_28);
          }
        else
          {
            t = k_28;
            {
              ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
              k_23 = t;
              j_23 :
              if(((ATgetType(k_23) == AT_LIST) && !(ATisEmpty(k_23))))
                {
                  l_23 = ATgetFirst((ATermList) k_23);
                  m_23 = (ATerm) ATgetNext((ATermList) k_23);
                  {
                    t = not_null(m_23);
                    t = filter_1(t, e_77);
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
ATerm repeat_1 (ATerm t, ATerm y_78 (ATerm))
{
  ATerm p_23 (ATerm t)
  {
    ATerm i_4 (ATerm t)
    {
      t = y_78(t);
      t = p_23(t);
      return(t);
    }
    t = try_1(t, i_4);
    return(t);
  }
  t = p_23(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm m_28;
  m_28 = t;
  {
    ATerm j_4 (ATerm t)
    {
      t = term_q_28;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm t_28 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_28;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, j_4);
  }
  t = m_28;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm u_28;
  u_28 = t;
  {
    ATerm r_23 = NULL;
    ATerm s_23 = NULL;
    s_23 = t;
    if(((r_23 != NULL) && (r_23 != s_23)))
      _fail(s_23);
    else
      r_23 = s_23;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATinsert(ATempty, not_null(r_23)));
      t = printnl_0(t);
    }
  }
  t = u_28;
  return(t);
}
ATerm say_1 (ATerm t, ATerm k_65 (ATerm))
{
  ATerm x_28;
  x_28 = t;
  {
    t = k_65(t);
    t = debug_0(t);
  }
  t = x_28;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm c_81 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm y_28;
    y_28 = t;
    {
      ATerm v_23 = NULL;
      ATerm w_23 = NULL;
      t = term_n_12;
      {
        t = get_config_0(t);
        {
          w_23 = t;
          if(((v_23 != NULL) && (v_23 != w_23)))
            _fail(w_23);
          else
            v_23 = w_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_23), term_f_16);
        t = geq_0(t);
      }
    }
    t = y_28;
    t = c_81(t);
    return(t);
  }
  t = try_1(t, k_4);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm e_81 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm z_28;
    z_28 = t;
    {
      ATerm z_23 = NULL;
      ATerm a_24 = NULL;
      t = term_n_12;
      {
        t = get_config_0(t);
        {
          a_24 = t;
          if(((z_23 != NULL) && (z_23 != a_24)))
            _fail(a_24);
          else
            z_23 = a_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_23), term_z_13);
        t = geq_0(t);
      }
    }
    t = z_28;
    t = e_81(t);
    return(t);
  }
  t = try_1(t, m_4);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
  e_24 = t;
  d_24 :
  if(match_cons(e_24, sym__2))
    {
      f_24 = ATgetArgument(e_24, 0);
      g_24 = ATgetArgument(e_24, 1);
      if(((f_24 != NULL) && (f_24 != g_24)))
        _fail(g_24);
      else
        f_24 = g_24;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm s_73 (ATerm), ATerm t_73 (ATerm))
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
  m_24 = t;
  l_24 :
  if(((ATgetType(m_24) == AT_LIST) && !(ATisEmpty(m_24))))
    {
      n_24 = ATgetFirst((ATermList) m_24);
      o_24 = (ATerm) ATgetNext((ATermList) m_24);
      {
        t = t_73(t);
        {
          ATerm n_4 (ATerm t)
          {
            ATerm v_24 = NULL;
            v_24 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), not_null(v_24));
              t = s_73(t);
            }
            return(t);
          }
          t = fetch_1(t, n_4);
        }
        t = not_null(o_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym__2))
    {
      f_25 = ATgetArgument(e_25, 0);
      g_25 = ATgetArgument(e_25, 1);
      {
        t = not_null(f_25);
        {
          ATerm k_25 (ATerm t)
          {
            ATerm a_29 = t;
            int d_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(g_25);
                ;
                LocalPopChoice(d_29);
              }
            else
              {
                t = a_29;
                {
                  ATerm e_29 = t;
                  int f_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_4 (ATerm t)
                      {
                        t = not_null(g_25);
                        return(t);
                      }
                      t = HdMember_p__2(t, o_73, o_4);
                      t = k_25(t);
                      ;
                      LocalPopChoice(f_29);
                    }
                  else
                    {
                      t = e_29;
                      t = Cons_2(t, _id, k_25);
                    }
                }
              }
            return(t);
          }
          t = k_25(t);
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
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  r_25 = t;
  o_25 :
  if(match_cons(r_25, sym__3))
    {
      s_25 = ATgetArgument(r_25, 0);
      t_25 = ATgetArgument(r_25, 1);
      u_25 = ATgetArgument(r_25, 2);
      {
        ATerm g_29;
        g_29 = t;
        {
          ATerm y_25 = NULL;
          ATerm z_25 = NULL,b_26 = NULL;
          ATerm a_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_25), not_null(t_25));
          {
            ATerm h_29 = t;
            int i_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(i_29);
              }
            else
              {
                t = h_29;
                t = (ATerm) ATempty;
              }
            {
              a_26 = t;
              if(((z_25 != NULL) && (z_25 != a_26)))
                _fail(a_26);
              else
                z_25 = a_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_25), not_null(u_25));
            {
              t = union_0(t);
              {
                b_26 = t;
                if(((y_25 != NULL) && (y_25 != b_26)))
                  _fail(b_26);
                else
                  y_25 = b_26;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_25), not_null(t_25), not_null(y_25));
            t = set_0(t);
          }
        }
        t = g_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm n_81 (ATerm))
{
  ATerm j_26 = NULL,p_26 = NULL,q_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym__2))
    {
      p_26 = ATgetArgument(j_26, 0);
      q_26 = ATgetArgument(j_26, 1);
      {
        t = not_null(q_26);
        {
          ATerm t_4 (ATerm t)
          {
            ATerm t_26 = NULL,u_26 = NULL,w_26 = NULL;
            t_26 = t;
            h_26 :
            if(match_cons(t_26, sym__2))
              {
                u_26 = ATgetArgument(t_26, 0);
                w_26 = ATgetArgument(t_26, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(p_26), not_null(u_26), not_null(w_26));
                  t = n_81(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, t_4);
        }
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
  ATerm c_27 = NULL;
  ATerm g_27 = NULL;
  g_27 = t;
  if(((c_27 != NULL) && (c_27 != g_27)))
    _fail(g_27);
  else
    c_27 = g_27;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_27), (ATerm) ATinsert(ATempty, term_n_29));
    t = access_0(t);
  }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL;
  ATerm t_27 (ATerm t)
  {
    t = SSL_fclose(not_null(n_27));
    return(t);
  }
  n_27 = t;
  l_27 :
  if(match_cons(n_27, sym_Stream_1))
    {
      m_27 = ATgetArgument(n_27, 0);
      {
        ATerm r_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(m_27));
            ;
            LocalPopChoice(x_29);
          }
        else
          {
            t = r_29;
            t = t_27(t);
          }
      }
    }
  else
    {
      t = t_27(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL;
  w_27 = t;
  v_27 :
  if(match_cons(w_27, sym_Stream_1))
    {
      x_27 = ATgetArgument(w_27, 0);
      t = SSL_read_term_from_stream(not_null(x_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
  d_28 = t;
  c_28 :
  if(match_cons(d_28, sym__2))
    {
      e_28 = ATgetArgument(d_28, 0);
      f_28 = ATgetArgument(d_28, 1);
      {
        ATerm i_28 = NULL;
        t = SSL_fopen(not_null(e_28), not_null(f_28));
        {
          ATerm j_28 = NULL;
          j_28 = t;
          if(((i_28 != NULL) && (i_28 != j_28)))
            _fail(j_28);
          else
            i_28 = j_28;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_28));
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
  ATerm n_28 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm o_28 = NULL;
    o_28 = t;
    if(((n_28 != NULL) && (n_28 != o_28)))
      _fail(o_28);
    else
      n_28 = o_28;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_28));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm r_28 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm s_28 = NULL;
    s_28 = t;
    if(((r_28 != NULL) && (r_28 != s_28)))
      _fail(s_28);
    else
      r_28 = s_28;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_28));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm v_28 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm w_28 = NULL;
    w_28 = t;
    if(((v_28 != NULL) && (v_28 != w_28)))
      _fail(w_28);
    else
      v_28 = w_28;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_28));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm c_29 = NULL;
  c_29 = t;
  b_29 :
  if(match_cons(c_29, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(c_29, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(c_29, sym_stdin_0))
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
  ATerm m_29 = NULL;
  ATerm o_29 = NULL,p_29 = NULL;
  m_29 = t;
  {
    ATerm q_29 = NULL;
    ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
    t = not_null(m_29);
    {
      q_29 = t;
      {
        t = SSL_explode_term(not_null(q_29));
        {
          s_29 = t;
          j_29 :
          if(match_cons(s_29, sym__2))
            {
              t_29 = ATgetArgument(s_29, 0);
              u_29 = ATgetArgument(s_29, 1);
              k_29 :
              if(match_string(t_29, ""))
                {
                  l_29 :
                  if(((ATgetType(u_29) == AT_LIST) && !(ATisEmpty(u_29))))
                    {
                      v_29 = ATgetFirst((ATermList) u_29);
                      w_29 = (ATerm) ATgetNext((ATermList) u_29);
                      {
                        if(((p_29 != NULL) && (p_29 != v_29)))
                          _fail(v_29);
                        else
                          p_29 = v_29;
                        if(((o_29 != NULL) && (o_29 != w_29)))
                          _fail(w_29);
                        else
                          o_29 = w_29;
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
    t = not_null(p_29);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
  e_30 = t;
  d_30 :
  if(match_cons(e_30, sym__2))
    {
      f_30 = ATgetArgument(e_30, 0);
      g_30 = ATgetArgument(e_30, 1);
      {
        ATerm y_29 = t;
        int z_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(z_29);
          }
        else
          {
            t = y_29;
            {
              ATerm a_30 = t;
              int b_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_4 (ATerm t)
                  {
                    ATerm h_30 = NULL,i_30 = NULL;
                    h_30 = t;
                    c_30 :
                    if(match_cons(h_30, sym_Path_1))
                      {
                        i_30 = ATgetArgument(h_30, 0);
                        t = not_null(i_30);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, u_4, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(b_30);
                }
              else
                {
                  t = a_30;
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
  ATerm q_30 = NULL;
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_30 = NULL;
      ATerm p_30 = NULL;
      p_30 = t;
      if(((o_30 != NULL) && (o_30 != p_30)))
        _fail(p_30);
      else
        o_30 = p_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_30), term_l_30);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(k_30);
    }
  else
    {
      t = j_30;
      {
        ATerm v_4 (ATerm t)
        {
          t = term_m_30;
          return(t);
        }
        t = debug_1(t, v_4);
        _fail(t);
      }
    }
  {
    ATerm n_30;
    n_30 = t;
    {
      ATerm r_30 = NULL;
      t = read_from_stream_0(t);
      {
        r_30 = t;
        if(((q_30 != NULL) && (q_30 != r_30)))
          _fail(r_30);
        else
          q_30 = r_30;
      }
    }
    t = n_30;
    {
      t = fclose_0(t);
      t = not_null(q_30);
    }
  }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  w_30 = t;
  v_30 :
  if(match_cons(w_30, sym__2))
    {
      x_30 = ATgetArgument(w_30, 0);
      y_30 = ATgetArgument(w_30, 1);
      t = SSL_access(not_null(x_30), not_null(y_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm d_31 = NULL;
  ATerm e_31 = NULL;
  e_31 = t;
  if(((d_31 != NULL) && (d_31 != e_31)))
    _fail(e_31);
  else
    d_31 = e_31;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_31), (ATerm) ATinsert(ATempty, term_s_30));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(u_30);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = t_30;
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_31 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_31;
              }
            {
              ATerm w_4 (ATerm t)
              {
                t = term_c_31;
                return(t);
              }
              t = debug_1(t, w_4);
            }
            ;
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            {
              ATerm y_4 (ATerm t)
              {
                t = term_f_31;
                return(t);
              }
              t = debug_1(t, y_4);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm i_31 = NULL;
  ATerm k_31 = NULL;
  i_31 = t;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm a_5 (ATerm t)
      {
        t = term_g_31;
        return(t);
      }
      t = debug_1(t, a_5);
      return(t);
    }
    t = if_verbose5_1(t, z_4);
    {
      ATerm h_31 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_28, (ATerm) ATmakeAppl(sym_Imported_1, not_null(i_31)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = h_31;
        }
      {
        ATerm j_31;
        j_31 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_b_28, term_m_31, (ATerm) ATinsert(ATempty, not_null(i_31)));
          t = table_put_0(t);
        }
        t = j_31;
        {
          ATerm b_5 (ATerm t)
          {
            ATerm c_5 (ATerm t)
            {
              t = term_n_31;
              return(t);
            }
            t = debug_1(t, c_5);
            return(t);
          }
          t = if_verbose4_1(t, b_5);
          {
            t = read_repository_file_0(t);
            {
              ATerm d_5 (ATerm t)
              {
                ATerm j_5 (ATerm t)
                {
                  t = term_o_31;
                  return(t);
                }
                t = say_1(t, j_5);
                return(t);
              }
              t = if_verbose6_1(t, d_5);
              {
                ATerm l_31 = NULL;
                l_31 = t;
                if(((k_31 != NULL) && (k_31 != l_31)))
                  _fail(l_31);
                else
                  k_31 = l_31;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_28, not_null(k_31));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm m_5 (ATerm t)
                      {
                        ATerm n_5 (ATerm t)
                        {
                          t = term_q_31;
                          return(t);
                        }
                        t = say_1(t, n_5);
                        return(t);
                      }
                      t = if_verbose6_1(t, m_5);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_b_28, (ATerm)ATmakeAppl(sym_Imported_1, not_null(i_31)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm o_5 (ATerm t)
                            {
                              ATerm r_5 (ATerm t)
                              {
                                t = term_o_31;
                                return(t);
                              }
                              t = say_1(t, r_5);
                              return(t);
                            }
                            t = if_verbose4_1(t, o_5);
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
  ATerm p_31 = NULL;
  p_31 = t;
  t = SSL_getenv(not_null(p_31));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_31;
      t = get_config_0(t);
      ;
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
      {
        ATerm u_31 = t;
        int v_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_w_31;
            t = getenv_0(t);
            ;
            LocalPopChoice(v_31);
          }
        else
          {
            t = u_31;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm t_5 (ATerm t)
    {
      t = term_x_31;
      return(t);
    }
    t = debug_1(t, t_5);
    return(t);
  }
  t = if_verbose5_1(t, s_5);
  {
    ATerm y_31;
    y_31 = t;
    {
      ATerm b_32 = t;
      int d_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_f_32;
          t = table_get_0(t);
          ;
          LocalPopChoice(d_32);
        }
      else
        {
          t = b_32;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = y_31;
    {
      ATerm u_5 (ATerm t)
      {
        ATerm v_5 (ATerm t)
        {
          t = term_o_32;
          return(t);
        }
        t = debug_1(t, v_5);
        return(t);
      }
      t = if_verbose5_1(t, u_5);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm p_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_5 (ATerm t)
      {
        ATerm z_5 (ATerm t)
        {
          t = term_v_32;
          return(t);
        }
        t = debug_1(t, z_5);
        return(t);
      }
      t = if_verbose5_1(t, w_5);
      {
        t = xtc_load_0(t);
        {
          ATerm w_32 = t;
          int x_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(x_32);
            }
          else
            {
              t = w_32;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm e_6 (ATerm t)
            {
              ATerm f_6 (ATerm t)
              {
                t = term_v_32;
                return(t);
              }
              t = debug_1(t, f_6);
              return(t);
            }
            t = if_verbose5_1(t, e_6);
          }
        }
      }
      ;
      LocalPopChoice(q_32);
    }
  else
    {
      t = p_32;
      {
        ATerm z_31 = NULL;
        ATerm a_32 = NULL;
        a_32 = t;
        if(((z_31 != NULL) && (z_31 != a_32)))
          _fail(a_32);
        else
          z_31 = a_32;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_32), not_null(z_31)), term_y_32);
          {
            t = error_0(t);
            {
              ATerm g_6 (ATerm t)
              {
                t = term_b_28;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm i_6 (ATerm t)
                    {
                      t = term_a_33;
                      return(t);
                    }
                    t = debug_1(t, i_6);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, g_6);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm xtc_find_path_0 (ATerm t)
{
  t = xtc_find_0(t);
  t = get_path_0(t);
  return(t);
}
ATerm parse_stratego_options_0 (ATerm t)
{
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_6 (ATerm t)
      {
        ATerm h_32 = NULL;
        h_32 = t;
        c_32 :
        if(!(match_string(h_32, "-I")))
          {
            if(!(match_string(h_32, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm s_6 (ATerm t)
      {
        ATerm f_33;
        f_33 = t;
        {
          ATerm i_32 = NULL;
          ATerm j_32 = NULL;
          j_32 = t;
          if(((i_32 != NULL) && (i_32 != j_32)))
            _fail(j_32);
          else
            i_32 = j_32;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_s_24, (ATerm) ATinsert(ATempty, not_null(i_32)));
            t = extend_config_0(t);
          }
        }
        t = f_33;
        return(t);
      }
      ATerm t_6 (ATerm t)
      {
        t = term_k_33;
        return(t);
      }
      t = ArgOption_3(t, o_6, s_6, t_6);
      ;
      LocalPopChoice(c_33);
    }
  else
    {
      t = b_33;
      {
        ATerm l_33 = t;
        int m_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_6 (ATerm t)
            {
              ATerm k_32 = NULL;
              k_32 = t;
              e_32 :
              if(!(match_string(k_32, "--syntax")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm w_6 (ATerm t)
            {
              ATerm n_33;
              n_33 = t;
              {
                ATerm l_32 = NULL;
                ATerm m_32 = NULL;
                m_32 = t;
                if(((l_32 != NULL) && (l_32 != m_32)))
                  _fail(m_32);
                else
                  l_32 = m_32;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_d_26, not_null(l_32));
                  t = set_config_0(t);
                }
              }
              t = n_33;
              return(t);
            }
            ATerm x_6 (ATerm t)
            {
              t = term_o_33;
              return(t);
            }
            t = ArgOption_3(t, u_6, w_6, x_6);
            ;
            LocalPopChoice(m_33);
          }
        else
          {
            t = l_33;
            {
              ATerm y_6 (ATerm t)
              {
                ATerm n_32 = NULL;
                n_32 = t;
                g_32 :
                if(!(match_string(n_32, "-silent")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm z_6 (ATerm t)
              {
                ATerm p_33;
                p_33 = t;
                {
                  t = term_x_33;
                  t = set_config_0(t);
                }
                t = p_33;
                return(t);
              }
              ATerm a_7 (ATerm t)
              {
                t = term_y_33;
                return(t);
              }
              t = Option_3(t, y_6, z_6, a_7);
            }
          }
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
  s_32 = t;
  r_32 :
  if(match_cons(s_32, sym__2))
    {
      t_32 = ATgetArgument(s_32, 0);
      u_32 = ATgetArgument(s_32, 1);
      t = SSL_copy(not_null(t_32), not_null(u_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  d_33 :
  if(match_cons(e_33, sym_stderr_0))
    {
      ATerm g_33 = NULL,i_33 = NULL;
      ATerm z_33;
      z_33 = t;
      {
        ATerm h_33 = NULL;
        t = SSLgetAnnotations(not_null(e_33));
        {
          h_33 = t;
          if(((g_33 != NULL) && (g_33 != h_33)))
            _fail(h_33);
          else
            g_33 = h_33;
        }
      }
      t = z_33;
      {
        ATerm j_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(g_33));
        {
          j_33 = t;
          if(((i_33 != NULL) && (i_33 != j_33)))
            _fail(j_33);
          else
            i_33 = j_33;
        }
        t = not_null(i_33);
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
  ATerm r_33 = NULL;
  r_33 = t;
  q_33 :
  if(match_cons(r_33, sym_stdout_0))
    {
      ATerm t_33 = NULL,v_33 = NULL;
      ATerm a_34;
      a_34 = t;
      {
        ATerm u_33 = NULL;
        t = SSLgetAnnotations(not_null(r_33));
        {
          u_33 = t;
          if(((t_33 != NULL) && (t_33 != u_33)))
            _fail(u_33);
          else
            t_33 = u_33;
        }
      }
      t = a_34;
      {
        ATerm w_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(t_33));
        {
          w_33 = t;
          if(((v_33 != NULL) && (v_33 != w_33)))
            _fail(w_33);
          else
            v_33 = w_33;
        }
        t = not_null(v_33);
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
  ATerm i_34 = NULL,j_34 = NULL;
  i_34 = t;
  h_34 :
  if(match_cons(i_34, sym_FILE_1))
    {
      j_34 = ATgetArgument(i_34, 0);
      {
        ATerm b_34 = t;
        int c_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_34 = NULL;
            ATerm m_34 = NULL;
            t = m_0(t);
            {
              m_34 = t;
              {
                if(((l_34 != NULL) && (l_34 != m_34)))
                  _fail(m_34);
                else
                  l_34 = m_34;
                {
                  ATerm d_34 = t;
                  int e_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(e_34);
                    }
                  else
                    {
                      t = d_34;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_34), not_null(l_34));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_34));
            ;
            LocalPopChoice(c_34);
          }
        else
          {
            t = b_34;
            {
              ATerm f_34 = t;
              int g_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_34 = NULL;
                  ATerm p_34 = NULL;
                  t = m_0(t);
                  {
                    p_34 = t;
                    {
                      if(((o_34 != NULL) && (o_34 != p_34)))
                        _fail(p_34);
                      else
                        o_34 = p_34;
                      {
                        ATerm k_34 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm n_34 = t;
                            int r_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(r_34);
                              }
                            else
                              {
                                t = n_34;
                                {
                                  ATerm t_34 = t;
                                  int u_34 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(u_34);
                                    }
                                  else
                                    {
                                      t = t_34;
                                      {
                                        ATerm q_34 = NULL;
                                        q_34 = t;
                                        if(((j_34 != NULL) && (j_34 != q_34)))
                                          _fail(q_34);
                                        else
                                          j_34 = q_34;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = k_34;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_34), not_null(o_34));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_34));
                  ;
                  LocalPopChoice(g_34);
                }
              else
                {
                  t = f_34;
                  {
                    ATerm s_34 = NULL;
                    t = m_0(t);
                    {
                      s_34 = t;
                      if(((j_34 != NULL) && (j_34 != s_34)))
                        _fail(s_34);
                      else
                        j_34 = s_34;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_34));
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
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
  c_35 = t;
  b_35 :
  if(((ATgetType(c_35) == AT_LIST) && !(ATisEmpty(c_35))))
    {
      d_35 = ATgetFirst((ATermList) c_35);
      e_35 = (ATerm) ATgetNext((ATermList) c_35);
      t = not_null(e_35);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
  k_35 = t;
  j_35 :
  if(match_cons(k_35, sym__2))
    {
      l_35 = ATgetArgument(k_35, 0);
      m_35 = ATgetArgument(k_35, 1);
      {
        ATerm v_34;
        v_34 = t;
        {
          ATerm p_35 = NULL;
          ATerm q_35 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_35), not_null(m_35));
          {
            ATerm w_34 = t;
            int x_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(x_34);
              }
            else
              {
                t = w_34;
                t = (ATerm) ATempty;
              }
            {
              q_35 = t;
              if(((p_35 != NULL) && (p_35 != q_35)))
                _fail(q_35);
              else
                p_35 = q_35;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_35), not_null(m_35), not_null(p_35));
            t = table_put_0(t);
          }
        }
        t = v_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm z_79 (ATerm))
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
  ATerm y_34;
  y_34 = t;
  {
    ATerm a_36 = NULL;
    ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
    t = z_79(t);
    {
      a_36 = t;
      {
        if(((z_35 != NULL) && (z_35 != a_36)))
          _fail(a_36);
        else
          z_35 = a_36;
        {
          ATerm z_34 = t;
          int a_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_35), term_o_21);
              t = table_get_0(t);
              ;
              LocalPopChoice(a_35);
            }
          else
            {
              t = z_34;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            b_36 = t;
            w_35 :
            if(((ATgetType(b_36) == AT_LIST) && !(ATisEmpty(b_36))))
              {
                c_36 = ATgetFirst((ATermList) b_36);
                d_36 = (ATerm) ATgetNext((ATermList) b_36);
                {
                  if(((y_35 != NULL) && (y_35 != c_36)))
                    _fail(c_36);
                  else
                    y_35 = c_36;
                  {
                    if(((x_35 != NULL) && (x_35 != d_36)))
                      _fail(d_36);
                    else
                      x_35 = d_36;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(z_35), term_o_21, not_null(x_35));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(y_35);
                          {
                            ATerm d_7 (ATerm t)
                            {
                              ATerm e_36 = NULL;
                              e_36 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_35), not_null(e_36));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, d_7);
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
  t = y_34;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm k_36 = NULL;
  k_36 = t;
  t = SSL_remove(not_null(k_36));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm u_80 (ATerm), ATerm v_80 (ATerm))
{
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_80(t);
      t = v_80(t);
      ;
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      {
        t = v_80(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm y_79 (ATerm))
{
  ATerm p_36 = NULL;
  ATerm h_35;
  h_35 = t;
  {
    ATerm q_36 = NULL;
    ATerm r_36 = NULL;
    t = y_79(t);
    {
      q_36 = t;
      {
        if(((p_36 != NULL) && (p_36 != q_36)))
          _fail(q_36);
        else
          p_36 = q_36;
        {
          ATerm s_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_36), term_o_21);
          {
            ATerm i_35 = t;
            int n_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(n_35);
              }
            else
              {
                t = i_35;
                t = (ATerm) ATempty;
              }
            {
              s_36 = t;
              if(((r_36 != NULL) && (r_36 != s_36)))
                _fail(s_36);
              else
                r_36 = s_36;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_36), term_o_21, (ATerm) ATinsert(CheckATermList(not_null(r_36)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = h_35;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm d_83 (ATerm))
{
  ATerm x_36 = NULL,y_36 = NULL;
  ATerm f_7 (ATerm t)
  {
    t = term_b_22;
    return(t);
  }
  t = begin_scope_1(t, f_7);
  {
    ATerm h_7 (ATerm t)
    {
      ATerm o_35;
      o_35 = t;
      {
        ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
        ATerm r_35 = t;
        int s_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_35;
            t = table_get_0(t);
            ;
            LocalPopChoice(s_35);
          }
        else
          {
            t = r_35;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          z_36 = t;
          w_36 :
          if(((ATgetType(z_36) == AT_LIST) && !(ATisEmpty(z_36))))
            {
              a_37 = ATgetFirst((ATermList) z_36);
              b_37 = (ATerm) ATgetNext((ATermList) z_36);
              {
                if(((y_36 != NULL) && (y_36 != a_37)))
                  _fail(a_37);
                else
                  y_36 = a_37;
                {
                  if(((x_36 != NULL) && (x_36 != b_37)))
                    _fail(b_37);
                  else
                    x_36 = b_37;
                  {
                    t = not_null(y_36);
                    {
                      ATerm i_7 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, i_7);
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
      t = o_35;
      {
        ATerm j_7 (ATerm t)
        {
          t = term_b_22;
          return(t);
        }
        t = end_scope_1(t, j_7);
      }
      return(t);
    }
    t = restore_always_2(t, d_83, h_7);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm e_83 (ATerm))
{
  ATerm k_7 (ATerm t)
  {
    ATerm u_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_37 = NULL;
        ATerm f_37 = NULL;
        t = term_e_22;
        {
          t = get_config_0(t);
          {
            f_37 = t;
            if(((e_37 != NULL) && (e_37 != f_37)))
              _fail(f_37);
            else
              e_37 = f_37;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_37));
        ;
        LocalPopChoice(v_35);
      }
    else
      {
        t = u_35;
        t = term_l_25;
      }
    {
      t = e_83(t);
      {
        ATerm l_7 (ATerm t)
        {
          ATerm f_36 = t;
          int g_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_d_22;
              t = get_config_0(t);
              ;
              LocalPopChoice(g_36);
            }
          else
            {
              t = f_36;
              t = term_o_23;
            }
          return(t);
        }
        t = copy_to_1(t, l_7);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, k_7);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm t_7 (ATerm t)
  {
    ATerm j_37 = NULL;
    j_37 = t;
    h_37 :
    if(!(match_string(j_37, "-k")))
      {
        if(!(match_string(j_37, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_7 (ATerm t)
  {
    ATerm h_36;
    h_36 = t;
    {
      ATerm k_37 = NULL;
      ATerm l_37 = NULL;
      t = string_to_int_0(t);
      {
        l_37 = t;
        if(((k_37 != NULL) && (k_37 != l_37)))
          _fail(l_37);
        else
          k_37 = l_37;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_23, not_null(k_37));
        t = set_config_0(t);
      }
    }
    t = h_36;
    return(t);
  }
  ATerm z_7 (ATerm t)
  {
    t = term_i_36;
    return(t);
  }
  t = ArgOption_3(t, t_7, y_7, z_7);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm o_37 = NULL;
  o_37 = t;
  t = SSL_string_to_int(not_null(o_37));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm j_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_8 (ATerm t)
      {
        ATerm y_37 = NULL;
        y_37 = t;
        r_37 :
        if(!(match_string(y_37, "-S")))
          {
            if(!(match_string(y_37, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_8 (ATerm t)
      {
        t = term_x_33;
        t = set_config_0(t);
        t = term_m_36;
        return(t);
      }
      ATerm g_8 (ATerm t)
      {
        t = term_n_36;
        return(t);
      }
      t = Option_3(t, a_8, f_8, g_8);
      ;
      LocalPopChoice(l_36);
    }
  else
    {
      t = j_36;
      {
        ATerm o_36 = t;
        int t_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_8 (ATerm t)
            {
              ATerm z_37 = NULL;
              z_37 = t;
              s_37 :
              if(!(match_string(z_37, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_8 (ATerm t)
            {
              ATerm c_38 = NULL;
              ATerm u_36;
              u_36 = t;
              {
                ATerm a_38 = NULL;
                ATerm b_38 = NULL;
                t = string_to_int_0(t);
                {
                  b_38 = t;
                  if(((a_38 != NULL) && (a_38 != b_38)))
                    _fail(b_38);
                  else
                    a_38 = b_38;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_12, not_null(a_38));
                  t = set_config_0(t);
                }
              }
              t = u_36;
              {
                ATerm d_38 = NULL;
                d_38 = t;
                if(((c_38 != NULL) && (c_38 != d_38)))
                  _fail(d_38);
                else
                  c_38 = d_38;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_38));
              }
              return(t);
            }
            ATerm j_8 (ATerm t)
            {
              t = term_v_36;
              return(t);
            }
            t = ArgOption_3(t, h_8, i_8, j_8);
            ;
            LocalPopChoice(t_36);
          }
        else
          {
            t = o_36;
            {
              ATerm o_8 (ATerm t)
              {
                ATerm e_38 = NULL;
                e_38 = t;
                x_37 :
                if(!(match_string(e_38, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm p_8 (ATerm t)
              {
                t = term_d_37;
                t = set_config_0(t);
                t = term_g_37;
                return(t);
              }
              ATerm q_8 (ATerm t)
              {
                t = term_i_37;
                return(t);
              }
              t = Option_3(t, o_8, p_8, q_8);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm m_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(n_37);
    }
  else
    {
      t = m_37;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm r_8 (ATerm t)
  {
    ATerm k_38 = NULL;
    k_38 = t;
    h_38 :
    if(!(match_string(k_38, "-o")))
      {
        if(!(match_string(k_38, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_8 (ATerm t)
  {
    ATerm n_38 = NULL;
    ATerm p_37;
    p_37 = t;
    {
      ATerm l_38 = NULL;
      ATerm m_38 = NULL;
      m_38 = t;
      if(((l_38 != NULL) && (l_38 != m_38)))
        _fail(m_38);
      else
        l_38 = m_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_22, not_null(l_38));
        t = set_config_0(t);
      }
    }
    t = p_37;
    {
      ATerm o_38 = NULL;
      o_38 = t;
      if(((n_38 != NULL) && (n_38 != o_38)))
        _fail(o_38);
      else
        n_38 = o_38;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_38));
    }
    return(t);
  }
  ATerm y_8 (ATerm t)
  {
    t = term_q_37;
    return(t);
  }
  t = ArgOption_3(t, r_8, s_8, y_8);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm t_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(u_37);
    }
  else
    {
      t = t_37;
      {
        ATerm z_8 (ATerm t)
        {
          ATerm s_38 = NULL;
          s_38 = t;
          r_38 :
          if(!(match_string(s_38, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm h_9 (ATerm t)
        {
          t = term_w_37;
          t = set_config_0(t);
          t = term_f_38;
          return(t);
        }
        ATerm i_9 (ATerm t)
        {
          t = term_g_38;
          return(t);
        }
        t = Option_3(t, z_8, h_9, i_9);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm y_38 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL;
  y_38 = t;
  w_38 :
  if(match_string(y_38, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(y_38) == AT_LIST) && !(ATisEmpty(y_38))))
        {
          c_39 = ATgetFirst((ATermList) y_38);
          d_39 = (ATerm) ATgetNext((ATermList) y_38);
          x_38 :
          if(((ATgetType(d_39) == AT_LIST) && !(ATisEmpty(d_39))))
            {
              e_39 = ATgetFirst((ATermList) d_39);
              f_39 = (ATerm) ATgetNext((ATermList) d_39);
              {
                ATerm j_39 = NULL;
                ATerm i_38;
                i_38 = t;
                {
                  t = not_null(c_39);
                  t = j_0(t);
                }
                t = i_38;
                {
                  ATerm k_39 = NULL;
                  t = not_null(e_39);
                  {
                    t = k_0(t);
                    {
                      k_39 = t;
                      if(((j_39 != NULL) && (j_39 != k_39)))
                        _fail(k_39);
                      else
                        j_39 = k_39;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_39)), not_null(j_39));
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
  ATerm j_9 (ATerm t)
  {
    ATerm r_39 = NULL;
    r_39 = t;
    o_39 :
    if(!(match_string(r_39, "-i")))
      {
        if(!(match_string(r_39, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_9 (ATerm t)
  {
    ATerm w_39 = NULL;
    ATerm j_38;
    j_38 = t;
    {
      ATerm s_39 = NULL;
      ATerm t_39 = NULL;
      t_39 = t;
      if(((s_39 != NULL) && (s_39 != t_39)))
        _fail(t_39);
      else
        s_39 = t_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_22, not_null(s_39));
        t = set_config_0(t);
      }
    }
    t = j_38;
    {
      ATerm x_39 = NULL;
      x_39 = t;
      if(((w_39 != NULL) && (w_39 != x_39)))
        _fail(x_39);
      else
        w_39 = x_39;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_39));
    }
    return(t);
  }
  ATerm l_9 (ATerm t)
  {
    t = term_p_38;
    return(t);
  }
  t = ArgOption_3(t, j_9, k_9, l_9);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm q_38 = t;
  int t_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(t_38);
    }
  else
    {
      t = q_38;
      {
        ATerm u_38 = t;
        int v_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(v_38);
          }
        else
          {
            t = u_38;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm z_38;
  z_38 = t;
  {
    ATerm d_40 = NULL;
    ATerm e_40 = NULL;
    t = term_x_21;
    {
      t = whoami_0(t);
      {
        e_40 = t;
        if(((d_40 != NULL) && (d_40 != e_40)))
          _fail(e_40);
        else
          d_40 = e_40;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_39), not_null(d_40)), term_a_39));
      {
        t = printnl_0(t);
        {
          t = term_w_12;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_38;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm j_40 = NULL;
  t = report_run_time_0(t);
  {
    ATerm k_40 = NULL;
    t = term_x_21;
    {
      t = whoami_0(t);
      {
        k_40 = t;
        if(((j_40 != NULL) && (j_40 != k_40)))
          _fail(k_40);
        else
          j_40 = k_40;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATinsert(ATinsert(ATempty, term_g_39), not_null(j_40)));
      {
        t = printnl_0(t);
        {
          t = term_w_12;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_h_39;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm n_40 = NULL;
  n_40 = t;
  t = SSL_TicksToSeconds(not_null(n_40));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  s_40 = t;
  r_40 :
  if(match_cons(s_40, sym__2))
    {
      t_40 = ATgetArgument(s_40, 0);
      u_40 = ATgetArgument(s_40, 1);
      {
        ATerm i_39 = t;
        int l_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_40), not_null(u_40));
            ;
            LocalPopChoice(l_39);
          }
        else
          {
            t = i_39;
            t = SSL_addr(not_null(t_40), not_null(u_40));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm b_76 (ATerm), ATerm c_76 (ATerm))
{
  ATerm m_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_76(t);
      ;
      LocalPopChoice(n_39);
    }
  else
    {
      t = m_39;
      {
        ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
        d_41 = t;
        c_41 :
        if(((ATgetType(d_41) == AT_LIST) && !(ATisEmpty(d_41))))
          {
            e_41 = ATgetFirst((ATermList) d_41);
            f_41 = (ATerm) ATgetNext((ATermList) d_41);
            {
              ATerm t_41 = NULL;
              ATerm u_41 = NULL;
              t = not_null(f_41);
              {
                t = foldr_2(t, b_76, c_76);
                {
                  u_41 = t;
                  if(((t_41 != NULL) && (t_41 != u_41)))
                    _fail(u_41);
                  else
                    t_41 = u_41;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_41), not_null(t_41));
                t = c_76(t);
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
ATerm crush_2 (ATerm t, ATerm z_73 (ATerm), ATerm a_74 (ATerm))
{
  ATerm m_42 = NULL;
  ATerm o_42 = NULL;
  m_42 = t;
  {
    ATerm p_42 = NULL;
    ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
    t = not_null(m_42);
    {
      p_42 = t;
      {
        t = SSL_explode_term(not_null(p_42));
        {
          r_42 = t;
          l_42 :
          if(match_cons(r_42, sym__2))
            {
              s_42 = ATgetArgument(r_42, 0);
              t_42 = ATgetArgument(r_42, 1);
              if(((o_42 != NULL) && (o_42 != t_42)))
                _fail(t_42);
              else
                o_42 = t_42;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_42);
      t = foldr_2(t, z_73, a_74);
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
    ATerm r_9 (ATerm t)
    {
      t = term_s_33;
      return(t);
    }
    t = crush_2(t, r_9, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
  e_43 = t;
  y_42 :
  if(match_cons(e_43, sym__2))
    {
      f_43 = ATgetArgument(e_43, 0);
      g_43 = ATgetArgument(e_43, 1);
      {
        ATerm p_39;
        p_39 = t;
        {
          ATerm q_39 = t;
          int u_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_43), not_null(g_43));
              ;
              LocalPopChoice(u_39);
            }
          else
            {
              t = q_39;
              t = SSL_gtr(not_null(f_43), not_null(g_43));
            }
        }
        t = p_39;
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
  ATerm y_43 = NULL;
  ATerm v_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
      z_43 = t;
      w_43 :
      if(match_cons(z_43, sym__2))
        {
          a_44 = ATgetArgument(z_43, 0);
          b_44 = ATgetArgument(z_43, 1);
          {
            if(((y_43 != NULL) && (y_43 != a_44)))
              _fail(a_44);
            else
              y_43 = a_44;
            if(((y_43 != NULL) && (y_43 != b_44)))
              _fail(b_44);
            else
              y_43 = b_44;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(y_39);
    }
  else
    {
      t = v_39;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm z_80 (ATerm))
{
  ATerm v_9 (ATerm t)
  {
    ATerm z_39;
    z_39 = t;
    {
      ATerm g_44 = NULL;
      ATerm j_44 = NULL;
      t = term_n_12;
      {
        t = get_config_0(t);
        {
          j_44 = t;
          if(((g_44 != NULL) && (g_44 != j_44)))
            _fail(j_44);
          else
            g_44 = j_44;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_44), term_w_12);
        t = geq_0(t);
      }
    }
    t = z_39;
    t = z_80(t);
    return(t);
  }
  t = try_1(t, v_9);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm w_9 (ATerm t)
  {
    ATerm x_44 = NULL,z_44 = NULL;
    ATerm a_40;
    a_40 = t;
    {
      ATerm y_44 = NULL;
      t = run_time_0(t);
      {
        y_44 = t;
        if(((x_44 != NULL) && (x_44 != y_44)))
          _fail(y_44);
        else
          x_44 = y_44;
      }
    }
    t = a_40;
    {
      ATerm a_45 = NULL;
      t = term_x_21;
      {
        t = whoami_0(t);
        {
          a_45 = t;
          if(((z_44 != NULL) && (z_44 != a_45)))
            _fail(a_45);
          else
            z_44 = a_45;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_40), not_null(x_44)), term_a_13), not_null(z_44)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_9);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_s_33;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_45 = NULL;
  h_45 = t;
  g_45 :
  if(match_cons(h_45, sym_Version_0))
    {
      ATerm j_45 = NULL,n_45 = NULL;
      ATerm c_40;
      c_40 = t;
      {
        ATerm m_45 = NULL;
        t = SSLgetAnnotations(not_null(h_45));
        {
          m_45 = t;
          if(((j_45 != NULL) && (j_45 != m_45)))
            _fail(m_45);
          else
            j_45 = m_45;
        }
      }
      t = c_40;
      {
        ATerm o_45 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(j_45));
        {
          o_45 = t;
          if(((n_45 != NULL) && (n_45 != o_45)))
            _fail(o_45);
          else
            n_45 = o_45;
        }
        t = not_null(n_45);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_85 (ATerm))
{
  ATerm f_40 = t;
  int g_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_40;
      t = get_config_0(t);
      ;
      LocalPopChoice(g_40);
    }
  else
    {
      t = f_40;
      {
        ATerm z_9 (ATerm t)
        {
          ATerm i_40 = t;
          int l_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(l_40);
            }
          else
            {
              t = i_40;
              {
                ATerm m_40 = t;
                int o_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(o_40);
                  }
                else
                  {
                    t = m_40;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, z_9);
      }
    }
  t = f_85(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_45 = NULL;
  x_45 = t;
  t = SSL_table_create(not_null(x_45));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_46 = NULL;
  b_46 = t;
  {
    ATerm p_40;
    p_40 = t;
    {
      t = term_q_40;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_40, term_v_40, not_null(b_46));
          t = table_put_0(t);
        }
      }
    }
    t = p_40;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_46 = NULL;
  t_46 = t;
  t = SSL_table_destroy(not_null(t_46));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm a_47 = NULL;
  a_47 = t;
  t = SSL_exit(not_null(a_47));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL;
  p_47 = t;
  m_47 :
  if(((ATgetType(p_47) == AT_LIST) && !(ATisEmpty(p_47))))
    {
      n_47 = ATgetFirst((ATermList) p_47);
      o_47 = (ATerm) ATgetNext((ATermList) p_47);
      {
        ATerm y_47 = NULL;
        t = not_null(o_47);
        {
          ATerm w_40;
          w_40 = t;
          {
            ATerm z_47 = NULL,b_48 = NULL,d_48 = NULL;
            ATerm x_40;
            x_40 = t;
            {
              ATerm a_48 = NULL;
              t = i_0(t);
              {
                a_48 = t;
                if(((z_47 != NULL) && (z_47 != a_48)))
                  _fail(a_48);
                else
                  z_47 = a_48;
              }
            }
            t = x_40;
            {
              ATerm c_48 = NULL;
              t = not_null(n_47);
              {
                t = g_0(t);
                {
                  c_48 = t;
                  if(((b_48 != NULL) && (b_48 != c_48)))
                    _fail(c_48);
                  else
                    b_48 = c_48;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_47)), not_null(b_48));
                {
                  d_48 = t;
                  if(((y_47 != NULL) && (y_47 != d_48)))
                    _fail(d_48);
                  else
                    y_47 = d_48;
                }
              }
            }
          }
          t = w_40;
          {
            ATerm d_10 (ATerm t)
            {
              t = not_null(y_47);
              return(t);
            }
            t = reverse_acc_2(t, g_0, d_10);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(p_47) == AT_LIST) && ATisEmpty(p_47)))
        {
          {
            t = term_x_21;
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
  ATerm e_10 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_10);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_62 (ATerm))
{
  ATerm t_48 = NULL,u_48 = NULL;
  t_48 = t;
  s_48 :
  if(match_cons(t_48, sym_Program_1))
    {
      u_48 = ATgetArgument(t_48, 0);
      {
        ATerm x_48 = NULL,z_48 = NULL;
        ATerm y_48 = NULL;
        t = SSLgetAnnotations(not_null(t_48));
        {
          y_48 = t;
          if(((x_48 != NULL) && (x_48 != y_48)))
            _fail(y_48);
          else
            x_48 = y_48;
        }
        {
          t = not_null(u_48);
          {
            ATerm b_49 = NULL;
            t = k_62(t);
            {
              z_48 = t;
              {
                ATerm c_49 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_48)), not_null(x_48));
                {
                  c_49 = t;
                  if(((b_49 != NULL) && (b_49 != c_49)))
                    _fail(c_49);
                  else
                    b_49 = c_49;
                }
                t = not_null(b_49);
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
  ATerm l_49 = NULL;
  ATerm y_40 = t;
  int z_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_49 = NULL;
      t = term_h_39;
      {
        t = get_config_0(t);
        {
          m_49 = t;
          if(((l_49 != NULL) && (l_49 != m_49)))
            _fail(m_49);
          else
            l_49 = m_49;
        }
      }
      ;
      LocalPopChoice(z_40);
    }
  else
    {
      t = y_40;
      {
        ATerm g_10 (ATerm t)
        {
          ATerm h_10 (ATerm t)
          {
            ATerm n_49 = NULL;
            n_49 = t;
            if(((l_49 != NULL) && (l_49 != n_49)))
              _fail(n_49);
            else
              l_49 = n_49;
            return(t);
          }
          t = Program_1(t, h_10);
          return(t);
        }
        t = option_defined_1(t, g_10);
      }
    }
  {
    ATerm i_10 (ATerm t)
    {
      ATerm j_10 (ATerm t)
      {
        t = not_null(l_49);
        return(t);
      }
      t = short_description_1(t, j_10);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, i_10);
    {
      t = term_a_41;
      {
        t = echo_0(t);
        {
          t = term_h_41;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm k_10 (ATerm t)
                {
                  ATerm o_49 = NULL;
                  ATerm p_49 = NULL;
                  p_49 = t;
                  if(((o_49 != NULL) && (o_49 != p_49)))
                    _fail(p_49);
                  else
                    o_49 = p_49;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_49)), term_i_41);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, k_10);
                {
                  ATerm l_10 (ATerm t)
                  {
                    ATerm q_49 = NULL;
                    ATerm r_49 = NULL;
                    ATerm m_10 (ATerm t)
                    {
                      t = not_null(l_49);
                      return(t);
                    }
                    t = long_description_1(t, m_10);
                    {
                      r_49 = t;
                      if(((q_49 != NULL) && (q_49 != r_49)))
                        _fail(r_49);
                      else
                        q_49 = r_49;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(q_49)), term_j_41);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, l_10);
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
  ATerm k_41 = t;
  int l_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(l_41);
    }
  else
    {
      t = k_41;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL;
  y_49 = t;
  x_49 :
  if(match_cons(y_49, sym__2))
    {
      z_49 = ATgetArgument(y_49, 0);
      a_50 = ATgetArgument(y_49, 1);
      {
        ATerm m_41;
        m_41 = t;
        t = SSL_printnl(not_null(z_49), not_null(a_50));
        t = m_41;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_62 (ATerm))
{
  ATerm j_50 = NULL,k_50 = NULL;
  j_50 = t;
  i_50 :
  if(match_cons(j_50, sym_Undefined_1))
    {
      k_50 = ATgetArgument(j_50, 0);
      {
        ATerm n_50 = NULL,p_50 = NULL;
        ATerm o_50 = NULL;
        t = SSLgetAnnotations(not_null(j_50));
        {
          o_50 = t;
          if(((n_50 != NULL) && (n_50 != o_50)))
            _fail(o_50);
          else
            n_50 = o_50;
        }
        {
          t = not_null(k_50);
          {
            ATerm r_50 = NULL;
            t = l_62(t);
            {
              p_50 = t;
              {
                ATerm y_50 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_50)), not_null(n_50));
                {
                  y_50 = t;
                  if(((r_50 != NULL) && (r_50 != y_50)))
                    _fail(y_50);
                  else
                    r_50 = y_50;
                }
                t = not_null(r_50);
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
ATerm fetch_1 (ATerm t, ATerm w_69 (ATerm))
{
  ATerm d_51 (ATerm t)
  {
    ATerm n_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_69, _id);
        ;
        LocalPopChoice(o_41);
      }
    else
      {
        t = n_41;
        t = Cons_2(t, _id, d_51);
      }
    return(t);
  }
  t = d_51(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_86 (ATerm))
{
  t = fetch_1(t, a_86);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL;
  f_51 = t;
  e_51 :
  if(((ATgetType(f_51) == AT_LIST) && ATisEmpty(f_51)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(f_51) == AT_LIST) && !(ATisEmpty(f_51))))
        {
          g_51 = ATgetFirst((ATermList) f_51);
          h_51 = (ATerm) ATgetNext((ATermList) f_51);
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
  ATerm p_41;
  p_41 = t;
  {
    ATerm k_51 = NULL;
    ATerm n_51 = NULL;
    ATerm q_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(r_41);
      }
    else
      {
        t = q_41;
        {
          ATerm l_51 = NULL;
          ATerm m_51 = NULL;
          m_51 = t;
          if(((l_51 != NULL) && (l_51 != m_51)))
            _fail(m_51);
          else
            l_51 = m_51;
          t = (ATerm) ATinsert(ATempty, not_null(l_51));
        }
      }
    {
      n_51 = t;
      if(((k_51 != NULL) && (k_51 != n_51)))
        _fail(n_51);
      else
        k_51 = n_51;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_23, not_null(k_51));
      t = printnl_0(t);
    }
  }
  t = p_41;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_h_39;
  {
    t = get_config_0(t);
    t = echo_0(t);
  }
  return(t);
}
ATerm override_system_about_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0 (ATerm t)
{
  ATerm s_41 = t;
  int v_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(v_41);
    }
  else
    {
      t = s_41;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm r_51 = NULL;
  r_51 = t;
  t = SSL_implode_string(not_null(r_51));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm w_41 = t;
  int x_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(x_41);
    }
  else
    {
      t = w_41;
      {
        ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL;
        w_51 = t;
        v_51 :
        if(((ATgetType(w_51) == AT_LIST) && !(ATisEmpty(w_51))))
          {
            x_51 = ATgetFirst((ATermList) w_51);
            y_51 = (ATerm) ATgetNext((ATermList) w_51);
            {
              t = not_null(x_51);
              {
                ATerm n_10 (ATerm t)
                {
                  t = not_null(y_51);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, n_10);
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
  ATerm i_52 = NULL;
  ATerm k_52 = NULL;
  i_52 = t;
  {
    ATerm l_52 = NULL;
    ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
    t = not_null(i_52);
    {
      l_52 = t;
      {
        t = SSL_explode_term(not_null(l_52));
        {
          n_52 = t;
          g_52 :
          if(match_cons(n_52, sym__2))
            {
              o_52 = ATgetArgument(n_52, 0);
              p_52 = ATgetArgument(n_52, 1);
              h_52 :
              if(match_string(o_52, ""))
                {
                  if(((k_52 != NULL) && (k_52 != p_52)))
                    _fail(p_52);
                  else
                    k_52 = p_52;
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
      t = not_null(k_52);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_70 (ATerm))
{
  ATerm t_52 (ATerm t)
  {
    ATerm y_41 = t;
    int z_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_52);
        ;
        LocalPopChoice(z_41);
      }
    else
      {
        t = y_41;
        {
          t = Nil_0(t);
          t = c_70(t);
        }
      }
    return(t);
  }
  t = t_52(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
  w_52 = t;
  v_52 :
  if(match_cons(w_52, sym__2))
    {
      x_52 = ATgetArgument(w_52, 0);
      y_52 = ATgetArgument(w_52, 1);
      {
        t = not_null(x_52);
        {
          ATerm v_10 (ATerm t)
          {
            t = not_null(y_52);
            return(t);
          }
          t = at_end_1(t, v_10);
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
  ATerm a_42 = t;
  int b_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(b_42);
    }
  else
    {
      t = a_42;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm d_53 = NULL;
  d_53 = t;
  t = SSL_explode_string(not_null(d_53));
  return(t);
}
ATerm _2 (ATerm t, ATerm s_55 (ATerm), ATerm t_55 (ATerm))
{
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL;
  m_53 = t;
  l_53 :
  if(match_cons(m_53, sym__2))
    {
      n_53 = ATgetArgument(m_53, 0);
      o_53 = ATgetArgument(m_53, 1);
      {
        ATerm s_53 = NULL,u_53 = NULL;
        ATerm t_53 = NULL;
        t = SSLgetAnnotations(not_null(m_53));
        {
          t_53 = t;
          if(((s_53 != NULL) && (s_53 != t_53)))
            _fail(t_53);
          else
            s_53 = t_53;
        }
        {
          t = not_null(n_53);
          {
            ATerm w_53 = NULL;
            t = s_55(t);
            {
              u_53 = t;
              {
                t = not_null(o_53);
                {
                  ATerm y_53 = NULL;
                  t = t_55(t);
                  {
                    w_53 = t;
                    {
                      ATerm z_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(u_53), not_null(w_53)), not_null(s_53));
                      {
                        z_53 = t;
                        if(((y_53 != NULL) && (y_53 != z_53)))
                          _fail(z_53);
                        else
                          y_53 = z_53;
                      }
                      t = not_null(y_53);
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
ATerm debug_1 (ATerm t, ATerm g_65 (ATerm))
{
  ATerm c_42;
  c_42 = t;
  {
    ATerm h_54 = NULL,j_54 = NULL;
    ATerm d_42;
    d_42 = t;
    {
      ATerm i_54 = NULL;
      t = g_65(t);
      {
        i_54 = t;
        if(((h_54 != NULL) && (h_54 != i_54)))
          _fail(i_54);
        else
          h_54 = i_54;
      }
    }
    t = d_42;
    {
      ATerm k_54 = NULL;
      k_54 = t;
      if(((j_54 != NULL) && (j_54 != k_54)))
        _fail(k_54);
      else
        j_54 = k_54;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_54)), not_null(h_54)));
        t = printnl_0(t);
      }
    }
  }
  t = c_42;
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_69 (ATerm))
{
  ATerm n_54 (ATerm t)
  {
    ATerm e_42 = t;
    int f_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(f_42);
      }
    else
      {
        t = e_42;
        t = Cons_2(t, n_69, n_54);
      }
    return(t);
  }
  t = n_54(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm p_54 = NULL;
  p_54 = t;
  t = SSL_is_string(not_null(p_54));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm g_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(h_42);
    }
  else
    {
      t = g_42;
      {
        ATerm i_42 = t;
        int j_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_11 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, a_11);
            ;
            LocalPopChoice(j_42);
          }
        else
          {
            t = i_42;
            {
              ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
              y_54 = t;
              x_54 :
              if(match_cons(y_54, sym_Path_1))
                {
                  z_54 = ATgetArgument(y_54, 0);
                  t = not_null(z_54);
                }
              else
                {
                  if(match_cons(y_54, sym_Var_1))
                    {
                      z_54 = ATgetArgument(y_54, 0);
                      {
                        t = not_null(z_54);
                        {
                          ATerm k_42 = t;
                          int n_42 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(n_42);
                            }
                          else
                            {
                              t = k_42;
                              {
                                ATerm b_11 (ATerm t)
                                {
                                  t = term_q_42;
                                  return(t);
                                }
                                t = debug_1(t, b_11);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(y_54, sym_Prefix_2))
                        {
                          z_54 = ATgetArgument(y_54, 0);
                          a_55 = ATgetArgument(y_54, 1);
                          {
                            ATerm f_55 = NULL,h_55 = NULL;
                            ATerm u_42;
                            u_42 = t;
                            {
                              ATerm g_55 = NULL;
                              t = not_null(z_54);
                              {
                                t = eval_config_0(t);
                                {
                                  g_55 = t;
                                  if(((f_55 != NULL) && (f_55 != g_55)))
                                    _fail(g_55);
                                  else
                                    f_55 = g_55;
                                }
                              }
                            }
                            t = u_42;
                            {
                              ATerm i_55 = NULL;
                              t = not_null(a_55);
                              {
                                t = eval_config_0(t);
                                {
                                  i_55 = t;
                                  if(((h_55 != NULL) && (h_55 != i_55)))
                                    _fail(i_55);
                                  else
                                    h_55 = i_55;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_55), not_null(h_55));
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
  ATerm q_55 = NULL;
  q_55 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_27, not_null(q_55));
    {
      t = table_get_0(t);
      {
        ATerm c_11 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm v_42;
            v_42 = t;
            {
              ATerm u_55 = NULL;
              ATerm v_55 = NULL;
              v_55 = t;
              if(((u_55 != NULL) && (u_55 != v_55)))
                _fail(v_55);
              else
                u_55 = v_55;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_q_27, not_null(q_55), not_null(u_55));
                t = table_put_0(t);
              }
            }
            t = v_42;
          }
          return(t);
        }
        t = try_1(t, c_11);
      }
    }
  }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_56 = NULL;
  c_56 = t;
  b_56 :
  if(match_cons(c_56, sym_Help_0))
    {
      ATerm e_56 = NULL,g_56 = NULL;
      ATerm w_42;
      w_42 = t;
      {
        ATerm f_56 = NULL;
        t = SSLgetAnnotations(not_null(c_56));
        {
          f_56 = t;
          if(((e_56 != NULL) && (e_56 != f_56)))
            _fail(f_56);
          else
            e_56 = f_56;
        }
      }
      t = w_42;
      {
        ATerm h_56 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(e_56));
        {
          h_56 = t;
          if(((g_56 != NULL) && (g_56 != h_56)))
            _fail(h_56);
          else
            g_56 = h_56;
        }
        t = not_null(g_56);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm f_80 (ATerm))
{
  ATerm x_42 = t;
  int z_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_80(t);
      ;
      LocalPopChoice(z_42);
    }
  else
    {
      t = x_42;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm a_43 = t;
  int b_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_11 (ATerm t)
      {
        ATerm n_56 = NULL;
        n_56 = t;
        l_56 :
        if(!(match_string(n_56, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm e_11 (ATerm t)
      {
        t = term_d_43;
        t = set_config_0(t);
        return(t);
      }
      ATerm f_11 (ATerm t)
      {
        t = term_h_43;
        return(t);
      }
      t = Option_3(t, d_11, e_11, f_11);
      ;
      LocalPopChoice(b_43);
    }
  else
    {
      t = a_43;
      {
        ATerm g_11 (ATerm t)
        {
          ATerm o_56 = NULL;
          o_56 = t;
          m_56 :
          if(!(match_string(o_56, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm h_11 (ATerm t)
        {
          t = term_d_43;
          {
            t = set_config_0(t);
            {
              t = term_i_43;
              t = set_config_0(t);
            }
          }
          t = term_j_43;
          return(t);
        }
        ATerm i_11 (ATerm t)
        {
          t = term_k_43;
          return(t);
        }
        t = Option_3(t, g_11, h_11, i_11);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL;
  r_56 = t;
  q_56 :
  if(match_cons(r_56, sym__2))
    {
      s_56 = ATgetArgument(r_56, 0);
      t_56 = ATgetArgument(r_56, 1);
      t = SSL_table_get(not_null(s_56), not_null(t_56));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm a_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL;
  a_57 = t;
  z_56 :
  if(match_cons(a_57, sym__3))
    {
      d_57 = ATgetArgument(a_57, 0);
      e_57 = ATgetArgument(a_57, 1);
      f_57 = ATgetArgument(a_57, 2);
      {
        ATerm l_43;
        l_43 = t;
        {
          ATerm j_57 = NULL;
          ATerm k_57 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_57), not_null(e_57));
          {
            ATerm m_43 = t;
            int n_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(n_43);
              }
            else
              {
                t = m_43;
                t = (ATerm) ATempty;
              }
            {
              k_57 = t;
              if(((j_57 != NULL) && (j_57 != k_57)))
                _fail(k_57);
              else
                j_57 = k_57;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_57), not_null(e_57), (ATerm) ATinsert(CheckATermList(not_null(j_57)), not_null(f_57)));
            t = table_put_0(t);
          }
        }
        t = l_43;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_87 (ATerm))
{
  ATerm o_57 = NULL;
  ATerm p_57 = NULL;
  t = term_x_21;
  {
    t = f_87(t);
    {
      p_57 = t;
      if(((o_57 != NULL) && (o_57 != p_57)))
        _fail(p_57);
      else
        o_57 = p_57;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_41, term_g_41, not_null(o_57));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL;
  v_57 = t;
  u_57 :
  if(match_string(v_57, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(v_57) == AT_LIST) && !(ATisEmpty(v_57))))
        {
          w_57 = ATgetFirst((ATermList) v_57);
          x_57 = (ATerm) ATgetNext((ATermList) v_57);
          {
            ATerm a_58 = NULL;
            ATerm o_43;
            o_43 = t;
            {
              t = not_null(w_57);
              t = a_0(t);
            }
            t = o_43;
            {
              ATerm b_58 = NULL;
              t = term_x_21;
              {
                t = b_0(t);
                {
                  b_58 = t;
                  if(((a_58 != NULL) && (a_58 != b_58)))
                    _fail(b_58);
                  else
                    a_58 = b_58;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_57)), not_null(a_58));
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
  ATerm l_11 (ATerm t)
  {
    ATerm g_58 = NULL;
    g_58 = t;
    f_58 :
    if(!(match_string(g_58, "--help")))
      {
        if(!(match_string(g_58, "-h")))
          {
            if(!(match_string(g_58, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_11 (ATerm t)
  {
    t = term_p_43;
    {
      t = set_config_0(t);
      t = term_q_43;
    }
    return(t);
  }
  ATerm r_11 (ATerm t)
  {
    t = term_r_43;
    return(t);
  }
  t = Option_3(t, l_11, q_11, r_11);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
  j_58 = t;
  i_58 :
  if(((ATgetType(j_58) == AT_LIST) && !(ATisEmpty(j_58))))
    {
      k_58 = ATgetFirst((ATermList) j_58);
      l_58 = (ATerm) ATgetNext((ATermList) j_58);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_58)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_58)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_57 (ATerm), ATerm c_57 (ATerm))
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
  v_58 = t;
  u_58 :
  if(((ATgetType(v_58) == AT_LIST) && !(ATisEmpty(v_58))))
    {
      w_58 = ATgetFirst((ATermList) v_58);
      x_58 = (ATerm) ATgetNext((ATermList) v_58);
      {
        ATerm b_59 = NULL,d_59 = NULL;
        ATerm c_59 = NULL;
        t = SSLgetAnnotations(not_null(v_58));
        {
          c_59 = t;
          if(((b_59 != NULL) && (b_59 != c_59)))
            _fail(c_59);
          else
            b_59 = c_59;
        }
        {
          t = not_null(w_58);
          {
            ATerm f_59 = NULL;
            t = b_57(t);
            {
              d_59 = t;
              {
                t = not_null(x_58);
                {
                  ATerm h_59 = NULL;
                  t = c_57(t);
                  {
                    f_59 = t;
                    {
                      ATerm i_59 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_59)), not_null(d_59)), not_null(b_59));
                      {
                        i_59 = t;
                        if(((h_59 != NULL) && (h_59 != i_59)))
                          _fail(i_59);
                        else
                          h_59 = i_59;
                      }
                      t = not_null(h_59);
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
  ATerm s_59 = NULL;
  s_59 = t;
  r_59 :
  if(((ATgetType(s_59) == AT_LIST) && ATisEmpty(s_59)))
    {
      {
        ATerm u_59 = NULL,w_59 = NULL;
        ATerm s_43;
        s_43 = t;
        {
          ATerm v_59 = NULL;
          t = SSLgetAnnotations(not_null(s_59));
          {
            v_59 = t;
            if(((u_59 != NULL) && (u_59 != v_59)))
              _fail(v_59);
            else
              u_59 = v_59;
          }
        }
        t = s_43;
        {
          ATerm x_59 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(u_59));
          {
            x_59 = t;
            if(((w_59 != NULL) && (w_59 != x_59)))
              _fail(x_59);
            else
              w_59 = x_59;
          }
          t = not_null(w_59);
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
  ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL;
  d_60 = t;
  c_60 :
  if(match_cons(d_60, sym__2))
    {
      e_60 = ATgetArgument(d_60, 0);
      f_60 = ATgetArgument(d_60, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_27, not_null(e_60), not_null(f_60));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_87 (ATerm))
{
  ATerm t_43;
  t_43 = t;
  {
    ATerm s_11 (ATerm t)
    {
      t = term_u_43;
      t = d_87(t);
      return(t);
    }
    t = try_1(t, s_11);
  }
  t = t_43;
  {
    ATerm t_11 (ATerm t)
    {
      ATerm n_60 = NULL;
      ATerm v_43;
      v_43 = t;
      {
        ATerm l_60 = NULL;
        ATerm m_60 = NULL;
        m_60 = t;
        if(((l_60 != NULL) && (l_60 != m_60)))
          _fail(m_60);
        else
          l_60 = m_60;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_39, not_null(l_60));
          t = set_config_0(t);
        }
      }
      t = v_43;
      {
        ATerm o_60 = NULL;
        o_60 = t;
        if(((n_60 != NULL) && (n_60 != o_60)))
          _fail(o_60);
        else
          n_60 = o_60;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_60));
      }
      return(t);
    }
    ATerm y_11 (ATerm t)
    {
      ATerm x_43 = t;
      int c_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_44 = t;
          int e_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(e_44);
            }
          else
            {
              t = d_44;
              {
                t = d_87(t);
                t = Cons_2(t, _id, y_11);
              }
            }
          ;
          LocalPopChoice(c_44);
        }
      else
        {
          t = x_43;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_11, y_11);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL;
  ATerm f_44;
  f_44 = t;
  {
    ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL;
    x_60 = t;
    t_60 :
    if(match_cons(x_60, sym__3))
      {
        y_60 = ATgetArgument(x_60, 0);
        z_60 = ATgetArgument(x_60, 1);
        a_61 = ATgetArgument(x_60, 2);
        {
          if(((u_60 != NULL) && (u_60 != y_60)))
            _fail(y_60);
          else
            u_60 = y_60;
          {
            if(((v_60 != NULL) && (v_60 != z_60)))
              _fail(z_60);
            else
              v_60 = z_60;
            {
              if(((w_60 != NULL) && (w_60 != a_61)))
                _fail(a_61);
              else
                w_60 = a_61;
              t = SSL_table_put(not_null(u_60), not_null(v_60), not_null(w_60));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_44;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_87 (ATerm))
{
  ATerm d_61 = NULL;
  ATerm h_44;
  h_44 = t;
  {
    t = term_i_44;
    t = table_put_0(t);
  }
  t = h_44;
  {
    ATerm z_11 (ATerm t)
    {
      ATerm k_44 = t;
      int l_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_87(t);
          ;
          LocalPopChoice(l_44);
        }
      else
        {
          t = k_44;
          {
            ATerm m_44 = t;
            int n_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(n_44);
              }
            else
              {
                t = m_44;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, z_11);
    {
      ATerm a_12 (ATerm t)
      {
        ATerm o_44 = t;
        int p_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_44;
            q_44 = t;
            {
              ATerm r_44 = t;
              int s_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_h_40;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(s_44);
                }
              else
                {
                  t = r_44;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = q_44;
            {
              t = system_usage_0(t);
              {
                t = term_s_33;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(p_44);
          }
        else
          {
            t = o_44;
            {
              ATerm t_44 = t;
              int u_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_44;
                  v_44 = t;
                  {
                    t = term_c_43;
                    t = get_config_0(t);
                  }
                  t = v_44;
                  {
                    t = system_about_0(t);
                    {
                      t = term_s_33;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(u_44);
                }
              else
                {
                  t = t_44;
                  {
                    ATerm b_12 (ATerm t)
                    {
                      ATerm c_12 (ATerm t)
                      {
                        ATerm e_61 = NULL;
                        e_61 = t;
                        if(((d_61 != NULL) && (d_61 != e_61)))
                          _fail(e_61);
                        else
                          d_61 = e_61;
                        return(t);
                      }
                      t = Undefined_1(t, c_12);
                      return(t);
                    }
                    t = option_defined_1(t, b_12);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_61)), term_w_44));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_w_12;
                            t = exit_0(t);
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
      t = try_1(t, a_12);
      {
        ATerm b_45;
        b_45 = t;
        {
          t = term_b_41;
          t = table_destroy_0(t);
        }
        t = b_45;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm))
{
  t = parse_options_1(t, h_85);
  {
    t = store_options_0(t);
    {
      t = j_85(t);
      {
        ATerm c_45 = t;
        int d_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, i_85);
            ;
            LocalPopChoice(d_45);
          }
        else
          {
            t = c_45;
            {
              ATerm e_45 = t;
              int f_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_85(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(f_45);
                }
              else
                {
                  t = e_45;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm l_85 (ATerm), ATerm m_85 (ATerm))
{
  t = option_wrap_4(t, l_85, default_usage_0, _id, m_85);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm i_83 (ATerm), ATerm j_83 (ATerm))
{
  ATerm h_12 (ATerm t)
  {
    ATerm i_45 = t;
    int k_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_83(t);
        ;
        LocalPopChoice(k_45);
      }
    else
      {
        t = i_45;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm i_12 (ATerm t)
  {
    t = xtc_io_1(t, j_83);
    return(t);
  }
  t = option_wrap_2(t, h_12, i_12);
  return(t);
}
ATerm xtc_iowrap_2 (ATerm t, ATerm o_83 (ATerm), ATerm p_83 (ATerm))
{
  t = xtc_io_wrap_2(t, o_83, p_83);
  return(t);
}
ATerm parse_stratego_0 (ATerm t)
{
  ATerm j_12 (ATerm t)
  {
    ATerm l_45;
    l_45 = t;
    {
      ATerm h_61 = NULL;
      ATerm i_61 = NULL;
      t = term_p_45;
      {
        t = xtc_find_path_0(t);
        {
          i_61 = t;
          if(((h_61 != NULL) && (h_61 != i_61)))
            _fail(i_61);
          else
            h_61 = i_61;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_61)), term_q_45));
        t = extend_config_0(t);
      }
    }
    t = l_45;
    t = parse_module_0(t);
    return(t);
  }
  t = xtc_iowrap_2(t, parse_stratego_options_0, j_12);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = parse_stratego_0(t);
  return(t);
}
