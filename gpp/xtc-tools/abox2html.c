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
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Anno_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  init_constant_terms();
}
ATerm term_y_44;
ATerm term_k_44;
ATerm term_w_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_z_42;
ATerm term_s_42;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_c_40;
ATerm term_w_39;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_n_38;
ATerm term_j_38;
ATerm term_h_38;
ATerm term_d_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_k_37;
ATerm term_i_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_u_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_e_36;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_n_35;
ATerm term_x_33;
ATerm term_v_33;
ATerm term_s_33;
ATerm term_q_33;
ATerm term_o_33;
ATerm term_c_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_v_32;
ATerm term_q_32;
ATerm term_n_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_z_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_d_31;
ATerm term_b_31;
ATerm term_w_30;
ATerm term_p_29;
ATerm term_k_29;
ATerm term_a_29;
ATerm term_s_28;
ATerm term_n_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_n_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_r_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_y_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_f_22;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_b_21;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_z_8;
ATerm term_v_8;
ATerm term_y_7;
void init_constant_terms (void)
{
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("  </body>\n", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</html>\n", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Dec", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Nov", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Oct", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Sep", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Aug", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jul", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jun", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("May", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Apr", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Mar", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Feb", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jan", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("December", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("November", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("October", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("September", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("August", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("July", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("June", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("April", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("March", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("February", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("January", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Sat", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Fri", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Thu", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Wed", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Tue", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Mon", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Sun", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Saturday", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Friday", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Thursday", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Wednesday", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuesday", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Monday", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Sunday", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(100);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("p.m.", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("a.m.", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Saturday_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Friday_0);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Thursday_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Wednesday_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Tuesday_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Monday_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Sunday_0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_December_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_November_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_October_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_September_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_August_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_July_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_June_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_May_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_April_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_March_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_February_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_January_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("EEEE", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("d", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("MMMM", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("yyyy", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("HH", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("mm", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ss", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--title", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no title specified for HTML document", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<!-- \n", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   This file is generated at ", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" \n", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   by abox2html (C) 2001 Merijn de Jonge (mdejonge@cwi.nl)\n", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-->\n", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<!doctype html public \"-//W3C//DTD WWW HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/loose.dtd\"> \n", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<html>\n", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("  <head>\n", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("    <title>", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("</title>\n", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("    <link rel=\"stylesheet\" type=\"text/css\" href=\"boxstyle.css\">\n", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("  </head>\n", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("  <body>\n", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-html", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_21, term_r_11, term_t_21);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_22, term_l_12, term_j_22);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_22, term_k_12, term_m_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_22, term_f_12, term_p_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_22, term_c_12, term_s_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_22, term_v_22, term_w_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_23, term_d_23, term_k_23);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_23, term_e_12, term_n_23);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_24, term_h_24, term_n_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_24, term_u_24, term_v_24);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_24, term_d_12, term_b_25);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_25, term_j_12, term_e_25);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_25, term_l_25, term_m_25);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_25, term_a_12, term_t_25);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_25, term_w_25, term_x_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_26, term_c_26, term_d_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_26, term_g_26, term_h_26);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_26, term_m_26, term_n_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_26, term_n_12, term_q_26);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_26, term_b_12, term_t_26);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_26, term_m_12, term_w_26);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_26, term_z_26, term_a_27);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_27, term_d_27, term_e_27);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_27, term_j_27, term_k_27);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_27, term_g_12, term_n_27);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_27, term_q_27, term_r_27);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_27, term_u_27, term_v_27);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_28, term_i_28, term_j_28);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_a_29, term_k_29);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__2, term_a_29, term_t_31);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym__2, term_v_8, term_o_33);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css-boxstyle", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym__2, term_u_35, term_y_7);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym__2, term_h_21, term_t_11);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_11);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym__2, term_x_36, term_y_7);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym__2, term_r_35, term_z_37);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Only generate cascading style sheet", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-t title    Title of HTML document", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym__2, term_f_41, term_g_41);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(sym__2, term_c_40, term_y_7);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym__3, term_f_41, term_g_41, (ATerm) ATempty);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm close_0 (ATerm);
ATerm xtc_close_fd_0 (ATerm);
ATerm fdcopy_0 (ATerm);
ATerm finally_2 (ATerm, ATerm a_71 (ATerm), ATerm b_71 (ATerm));
ATerm File_as_fd_1 (ATerm, ATerm i_94 (ATerm));
ATerm STDERR__FILENO_0 (ATerm);
ATerm STDOUT__FILENO_0 (ATerm);
ATerm STDIN__FILENO_0 (ATerm);
ATerm open_0 (ATerm);
ATerm xtc_open_fd_0 (ATerm);
ATerm xtc_new_file_name_0 (ATerm);
ATerm xtc_cat_0 (ATerm);
ATerm print_0 (ATerm);
ATerm print_to_0 (ATerm);
ATerm create_footer_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm g_84 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm m_95 (ATerm), ATerm n_95 (ATerm));
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm n_65 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm f_95 (ATerm), ATerm g_95 (ATerm));
ATerm month2abbr_0 (ATerm);
ATerm month2text_0 (ATerm);
ATerm day_of_week2abbr_0 (ATerm);
ATerm day_of_week2text_0 (ATerm);
ATerm lt_0 (ATerm);
ATerm leq_lt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm comp_comp_2 (ATerm, ATerm q_79 (ATerm), ATerm r_79 (ATerm));
ATerm leq_leq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm l_82 (ATerm), ATerm m_82 (ATerm));
ATerm for_3 (ATerm, ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm q_82 (ATerm));
ATerm copy_0 (ATerm);
ATerm copy_char_0 (ATerm);
ATerm pos_0 (ATerm);
ATerm align_helper_0 (ATerm);
ATerm align_right_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_78 (ATerm), ATerm q_78 (ATerm), ATerm r_78 (ATerm));
ATerm length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm mod_0 (ATerm);
ATerm inc_0 (ATerm);
ATerm month2index_0 (ATerm);
ATerm date_pattern_to_int_0 (ATerm);
ATerm date_pattern_to_string_0 (ATerm);
ATerm date_format_0 (ATerm);
ATerm index2day_of_week_0 (ATerm);
ATerm index2month_0 (ATerm);
ATerm prim_tuple_to_ComponentTime_0 (ATerm);
ATerm epoch2local_time_0 (ATerm);
ATerm now_epoch_time_0 (ATerm);
ATerm now_local_time_0 (ATerm);
ATerm create_time_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm get_title_0 (ATerm);
ATerm create_header_0 (ATerm);
ATerm xtc_io_1 (ATerm, ATerm q_94 (ATerm));
ATerm abox2html_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm signal_to_descr_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm m_72 (ATerm));
ATerm signal_from_number_0 (ATerm);
ATerm warn_ifsignaled_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_2 (ATerm, ATerm k_83 (ATerm), ATerm l_83 (ATerm));
ATerm fork_and_wait_1 (ATerm, ATerm m_83 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm k_93 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm c_80 (ATerm));
ATerm repeat_1 (ATerm, ATerm w_81 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm w_83 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm j_93 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm l_93 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm e_76 (ATerm), ATerm f_76 (ATerm));
ATerm union_1 (ATerm, ATerm a_76 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm b_80 (ATerm));
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
ATerm xtc_command_1 (ATerm, ATerm d_95 (ATerm));
ATerm assert_1 (ATerm, ATerm y_79 (ATerm));
ATerm obsolete_1 (ATerm, ATerm z_83 (ATerm));
ATerm open_file_0 (ATerm);
ATerm access_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_generate_2 (ATerm, ATerm r_95 (ATerm), ATerm s_95 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm v_79 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm y_70 (ATerm), ATerm z_70 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm u_79 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm p_94 (ATerm));
ATerm xtc_output_1 (ATerm, ATerm r_94 (ATerm));
ATerm gen_css_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm input_option_0 (ATerm);
ATerm abox2html_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_78 (ATerm), ATerm o_78 (ATerm));
ATerm crush_2 (ATerm, ATerm l_76 (ATerm), ATerm m_76 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm g_93 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_66 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_86 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_86 (ATerm));
ATerm Program_1 (ATerm, ATerm r_64 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm s_64 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_85 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_72 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm j_58 (ATerm), ATerm k_58 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm s_83 (ATerm));
ATerm map_1 (ATerm, ATerm b_72 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_70 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_86 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm s_59 (ATerm), ATerm t_59 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_86 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_86 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm v_66 (ATerm), ATerm w_66 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm x_66 (ATerm), ATerm y_66 (ATerm));
ATerm io_abox2html_0 (ATerm);
ATerm main_0 (ATerm);
ATerm close_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_close(not_null(e_0));
  return(t);
}
ATerm xtc_close_fd_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm p_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_7;
            w_7 = t;
            {
              ATerm j_1 = NULL,y_1 = NULL;
              ATerm x_7;
              x_7 = t;
              {
                ATerm k_1 = NULL;
                k_1 = t;
                if(((j_1 != NULL) && (j_1 != k_1)))
                  _fail(k_1);
                else
                  j_1 = k_1;
              }
              t = x_7;
              {
                ATerm z_1 = NULL;
                t = term_y_7;
                {
                  t = STDIN__FILENO_0(t);
                  {
                    z_1 = t;
                    if(((y_1 != NULL) && (y_1 != z_1)))
                      _fail(z_1);
                    else
                      y_1 = z_1;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_1), not_null(y_1));
                  t = eq_0(t);
                }
              }
            }
            t = w_7;
            ;
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
            {
              ATerm z_7 = t;
              int a_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_8;
                  b_8 = t;
                  {
                    ATerm a_2 = NULL,t_2 = NULL;
                    ATerm j_8;
                    j_8 = t;
                    {
                      ATerm s_2 = NULL;
                      s_2 = t;
                      if(((a_2 != NULL) && (a_2 != s_2)))
                        _fail(s_2);
                      else
                        a_2 = s_2;
                    }
                    t = j_8;
                    {
                      ATerm u_2 = NULL;
                      t = term_y_7;
                      {
                        t = STDOUT__FILENO_0(t);
                        {
                          u_2 = t;
                          if(((t_2 != NULL) && (t_2 != u_2)))
                            _fail(u_2);
                          else
                            t_2 = u_2;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_2), not_null(t_2));
                        t = eq_0(t);
                      }
                    }
                  }
                  t = b_8;
                  ;
                  LocalPopChoice(a_8);
                }
              else
                {
                  t = z_7;
                  {
                    ATerm o_8;
                    o_8 = t;
                    {
                      ATerm y_2 = NULL,a_3 = NULL;
                      ATerm p_8;
                      p_8 = t;
                      {
                        ATerm z_2 = NULL;
                        z_2 = t;
                        if(((y_2 != NULL) && (y_2 != z_2)))
                          _fail(z_2);
                        else
                          y_2 = z_2;
                      }
                      t = p_8;
                      {
                        ATerm b_3 = NULL;
                        t = term_y_7;
                        {
                          t = STDERR__FILENO_0(t);
                          {
                            b_3 = t;
                            if(((a_3 != NULL) && (a_3 != b_3)))
                              _fail(b_3);
                            else
                              a_3 = b_3;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_2), not_null(a_3));
                          t = eq_0(t);
                        }
                      }
                    }
                    t = o_8;
                  }
                }
            }
          }
        ;
        LocalPopChoice(r_7);
      }
    else
      {
        t = p_7;
        t = close_0(t);
      }
    return(t);
  }
  ATerm f_0 (ATerm t)
  {
    t = term_y_7;
    return(t);
  }
  t = finally_2(t, c_0, f_0);
  return(t);
}
ATerm fdcopy_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL;
  k_3 = t;
  j_3 :
  if(match_cons(k_3, sym__2))
    {
      l_3 = ATgetArgument(k_3, 0);
      m_3 = ATgetArgument(k_3, 1);
      t = SSL_fdcopy(not_null(l_3), not_null(m_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm finally_2 (ATerm t, ATerm a_71 (ATerm), ATerm b_71 (ATerm))
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_71(t);
      LocalPopChoice(r_8);
      {
        ATerm s_8;
        s_8 = t;
        t = b_71(t);
        t = s_8;
      }
    }
  else
    {
      t = q_8;
      {
        ATerm t_8;
        t_8 = t;
        t = b_71(t);
        t = t_8;
        _fail(t);
      }
    }
  return(t);
}
ATerm File_as_fd_1 (ATerm t, ATerm i_94 (ATerm))
{
  ATerm r_3 = NULL;
  t = xtc_open_fd_0(t);
  {
    r_3 = t;
    {
      ATerm h_0 (ATerm t)
      {
        ATerm u_8;
        u_8 = t;
        {
          ATerm p_0 (ATerm t)
          {
            t = not_null(r_3);
            t = xtc_close_fd_0(t);
            return(t);
          }
          t = try_1(t, p_0);
        }
        t = u_8;
        return(t);
      }
      t = finally_2(t, i_94, h_0);
    }
  }
  return(t);
}
ATerm STDERR__FILENO_0 (ATerm t)
{
  t = SSL_STDERR_FILENO();
  return(t);
}
ATerm STDOUT__FILENO_0 (ATerm t)
{
  t = SSL_STDOUT_FILENO();
  return(t);
}
ATerm STDIN__FILENO_0 (ATerm t)
{
  t = SSL_STDIN_FILENO();
  return(t);
}
ATerm open_0 (ATerm t)
{
  ATerm v_3 = NULL;
  v_3 = t;
  t = SSL_open(not_null(v_3));
  return(t);
}
ATerm xtc_open_fd_0 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  e_4 = t;
  c_4 :
  if(match_cons(e_4, sym_FILE_1))
    {
      d_4 = ATgetArgument(e_4, 0);
      {
        t = not_null(d_4);
        t = open_0(t);
      }
    }
  else
    {
      if(match_cons(e_4, sym_stdin_0))
        {
          t = term_y_7;
          t = STDIN__FILENO_0(t);
        }
      else
        {
          if(match_cons(e_4, sym_stdout_0))
            {
              t = term_y_7;
              t = STDOUT__FILENO_0(t);
            }
          else
            {
              if(match_cons(e_4, sym_stderr_0))
                {
                  t = term_y_7;
                  t = STDERR__FILENO_0(t);
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
ATerm xtc_new_file_name_0 (ATerm t)
{
  ATerm l_4 = NULL;
  t = new_file_0(t);
  {
    l_4 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), term_y_7);
      {
        ATerm q_0 (ATerm t)
        {
          t = term_v_8;
          return(t);
        }
        t = assert_1(t, q_0);
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_4));
    }
  }
  return(t);
}
ATerm xtc_cat_0 (ATerm t)
{
  ATerm s_4 = NULL;
  ATerm u_4 = NULL,v_4 = NULL;
  s_4 = t;
  {
    ATerm w_4 = NULL;
    ATerm x_4 = NULL;
    t = xtc_new_file_name_0(t);
    {
      w_4 = t;
      {
        if(((u_4 != NULL) && (u_4 != w_4)))
          _fail(w_4);
        else
          u_4 = w_4;
        {
          t = not_null(u_4);
          {
            t = xtc_open_fd_0(t);
            {
              x_4 = t;
              {
                if(((v_4 != NULL) && (v_4 != x_4)))
                  _fail(x_4);
                else
                  v_4 = x_4;
                {
                  t = not_null(s_4);
                  {
                    ATerm r_0 (ATerm t)
                    {
                      ATerm s_0 (ATerm t)
                      {
                        ATerm y_4 = NULL;
                        ATerm z_4 = NULL;
                        z_4 = t;
                        if(((y_4 != NULL) && (y_4 != z_4)))
                          _fail(z_4);
                        else
                          y_4 = z_4;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_4), not_null(v_4));
                          t = fdcopy_0(t);
                        }
                        return(t);
                      }
                      t = File_as_fd_1(t, s_0);
                      return(t);
                    }
                    t = map_1(t, r_0);
                    {
                      t = not_null(v_4);
                      t = xtc_close_fd_0(t);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = not_null(u_4);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
  g_5 = t;
  f_5 :
  if(match_cons(g_5, sym__2))
    {
      h_5 = ATgetArgument(g_5, 0);
      i_5 = ATgetArgument(g_5, 1);
      {
        ATerm w_8;
        w_8 = t;
        t = SSL_print(not_null(h_5), not_null(i_5));
        t = w_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm print_to_0 (ATerm t)
{
  ATerm o_5 = NULL;
  ATerm q_5 = NULL;
  o_5 = t;
  {
    ATerm r_5 = NULL;
    t = xtc_new_file_0(t);
    {
      r_5 = t;
      {
        if(((q_5 != NULL) && (q_5 != r_5)))
          _fail(r_5);
        else
          q_5 = r_5;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_5), not_null(o_5));
          {
            t = print_0(t);
            {
              t = not_null(q_5);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_5));
  }
  return(t);
}
ATerm create_footer_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_9), term_z_8);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL;
  z_5 = t;
  y_5 :
  if(match_cons(z_5, sym_stdin_0))
    {
      ATerm b_6 = NULL;
      ATerm c_6 = NULL;
      t = term_f_9;
      {
        t = ReadFromFile_0(t);
        {
          c_6 = t;
          if(((b_6 != NULL) && (b_6 != c_6)))
            _fail(c_6);
          else
            b_6 = c_6;
        }
      }
      t = not_null(b_6);
    }
  else
    {
      if(match_cons(z_5, sym_FILE_1))
        {
          a_6 = ATgetArgument(z_5, 0);
          {
            ATerm e_6 = NULL;
            ATerm f_6 = NULL;
            t = not_null(a_6);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  f_6 = t;
                  if(((e_6 != NULL) && (e_6 != f_6)))
                    _fail(f_6);
                  else
                    e_6 = f_6;
                }
              }
            }
            t = not_null(e_6);
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
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
  o_6 = t;
  m_6 :
  if(match_cons(o_6, sym__2))
    {
      p_6 = ATgetArgument(o_6, 0);
      r_6 = ATgetArgument(o_6, 1);
      n_6 :
      if(match_cons(p_6, sym_Stream_1))
        {
          q_6 = ATgetArgument(p_6, 0);
          {
            ATerm u_6 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(q_6), not_null(r_6));
            {
              ATerm v_6 = NULL;
              v_6 = t;
              if(((u_6 != NULL) && (u_6 != v_6)))
                _fail(v_6);
              else
                u_6 = v_6;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_6));
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
ATerm WriteToFile_1 (ATerm t, ATerm g_84 (ATerm))
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym__2))
    {
      d_7 = ATgetArgument(c_7, 0);
      e_7 = ATgetArgument(c_7, 1);
      {
        ATerm h_7 = NULL,j_7 = NULL;
        t = not_null(d_7);
        {
          ATerm i_7 = NULL;
          i_7 = t;
          if(((h_7 != NULL) && (h_7 != i_7)))
            _fail(i_7);
          else
            h_7 = i_7;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), term_g_9);
            {
              t = open_stream_0(t);
              {
                ATerm k_7 = NULL;
                k_7 = t;
                if(((j_7 != NULL) && (j_7 != k_7)))
                  _fail(k_7);
                else
                  j_7 = k_7;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_7), not_null(e_7));
                  {
                    t = g_84(t);
                    {
                      t = fclose_0(t);
                      t = not_null(e_7);
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
  ATerm q_7 = NULL;
  ATerm s_7 = NULL;
  q_7 = t;
  {
    ATerm t_7 = NULL;
    t = xtc_new_file_0(t);
    {
      t_7 = t;
      {
        if(((s_7 != NULL) && (s_7 != t_7)))
          _fail(t_7);
        else
          s_7 = t_7;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_7), not_null(q_7));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(s_7);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_7));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm m_95 (ATerm), ATerm n_95 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, m_95, n_95);
    t = read_from_0(t);
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm d_8 = NULL,e_8 = NULL;
  d_8 = t;
  c_8 :
  if(match_cons(d_8, sym_stdin_0))
    {
      ATerm f_8 = NULL;
      ATerm g_8 = NULL;
      ATerm h_8 = NULL;
      t = xtc_new_file_0(t);
      {
        g_8 = t;
        {
          if(((f_8 != NULL) && (f_8 != g_8)))
            _fail(g_8);
          else
            f_8 = g_8;
          {
            ATerm i_8 = NULL;
            t = o_0(t);
            {
              i_8 = t;
              if(((h_8 != NULL) && (h_8 != i_8)))
                _fail(i_8);
              else
                h_8 = i_8;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), (ATerm) ATinsert(ATinsert(ATempty, not_null(f_8)), term_h_9));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(f_8);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_8));
    }
  else
    {
      if(match_cons(d_8, sym_FILE_1))
        {
          e_8 = ATgetArgument(d_8, 0);
          {
            ATerm k_8 = NULL;
            ATerm l_8 = NULL;
            t = not_null(e_8);
            {
              ATerm m_8 = NULL;
              t = xtc_new_file_0(t);
              {
                l_8 = t;
                {
                  if(((k_8 != NULL) && (k_8 != l_8)))
                    _fail(l_8);
                  else
                    k_8 = l_8;
                  {
                    ATerm n_8 = NULL;
                    t = o_0(t);
                    {
                      n_8 = t;
                      if(((m_8 != NULL) && (m_8 != n_8)))
                        _fail(n_8);
                      else
                        m_8 = n_8;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_8)), term_h_9), not_null(e_8)), term_i_9));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(k_8);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_8));
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
  ATerm y_8 = NULL;
  y_8 = t;
  x_8 :
  if(match_cons(y_8, sym_stdin_0))
    {
      ATerm a_9 = NULL,c_9 = NULL;
      ATerm j_9;
      j_9 = t;
      {
        ATerm b_9 = NULL;
        t = SSLgetAnnotations(not_null(y_8));
        {
          b_9 = t;
          if(((a_9 != NULL) && (a_9 != b_9)))
            _fail(b_9);
          else
            a_9 = b_9;
        }
      }
      t = j_9;
      {
        ATerm d_9 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(a_9));
        {
          d_9 = t;
          if(((c_9 != NULL) && (c_9 != d_9)))
            _fail(d_9);
          else
            c_9 = d_9;
        }
        t = not_null(c_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm n_65 (ATerm))
{
  ATerm m_9 = NULL,n_9 = NULL;
  m_9 = t;
  l_9 :
  if(match_cons(m_9, sym_FILE_1))
    {
      n_9 = ATgetArgument(m_9, 0);
      {
        ATerm q_9 = NULL,s_9 = NULL;
        ATerm r_9 = NULL;
        t = SSLgetAnnotations(not_null(m_9));
        {
          r_9 = t;
          if(((q_9 != NULL) && (q_9 != r_9)))
            _fail(r_9);
          else
            q_9 = r_9;
        }
        {
          t = not_null(n_9);
          {
            ATerm u_9 = NULL;
            t = n_65(t);
            {
              s_9 = t;
              {
                ATerm v_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(s_9)), not_null(q_9));
                {
                  v_9 = t;
                  if(((u_9 != NULL) && (u_9 != v_9)))
                    _fail(v_9);
                  else
                    u_9 = v_9;
                }
                t = not_null(u_9);
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
ATerm xtc_transform_2 (ATerm t, ATerm f_95 (ATerm), ATerm g_95 (ATerm))
{
  ATerm k_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_9 = t;
      int t_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(t_9);
        }
      else
        {
          t = p_9;
          t = stdin_0(t);
        }
      LocalPopChoice(o_9);
      t = xtc_transform_file_2(t, f_95, g_95);
    }
  else
    {
      t = k_9;
      t = xtc_transform_term_2(t, f_95, g_95);
    }
  return(t);
}
ATerm month2abbr_0 (ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  m_10 :
  if(match_cons(n_10, sym_December_0))
    {
      t = term_w_9;
    }
  else
    {
      if(match_cons(n_10, sym_November_0))
        {
          t = term_x_9;
        }
      else
        {
          if(match_cons(n_10, sym_October_0))
            {
              t = term_y_9;
            }
          else
            {
              if(match_cons(n_10, sym_September_0))
                {
                  t = term_z_9;
                }
              else
                {
                  if(match_cons(n_10, sym_August_0))
                    {
                      t = term_a_10;
                    }
                  else
                    {
                      if(match_cons(n_10, sym_July_0))
                        {
                          t = term_b_10;
                        }
                      else
                        {
                          if(match_cons(n_10, sym_June_0))
                            {
                              t = term_c_10;
                            }
                          else
                            {
                              if(match_cons(n_10, sym_May_0))
                                {
                                  t = term_d_10;
                                }
                              else
                                {
                                  if(match_cons(n_10, sym_April_0))
                                    {
                                      t = term_e_10;
                                    }
                                  else
                                    {
                                      if(match_cons(n_10, sym_March_0))
                                        {
                                          t = term_f_10;
                                        }
                                      else
                                        {
                                          if(match_cons(n_10, sym_February_0))
                                            {
                                              t = term_g_10;
                                            }
                                          else
                                            {
                                              if(match_cons(n_10, sym_January_0))
                                                {
                                                  t = term_h_10;
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
ATerm month2text_0 (ATerm t)
{
  ATerm n_11 = NULL;
  n_11 = t;
  m_11 :
  if(match_cons(n_11, sym_December_0))
    {
      t = term_i_10;
    }
  else
    {
      if(match_cons(n_11, sym_November_0))
        {
          t = term_j_10;
        }
      else
        {
          if(match_cons(n_11, sym_October_0))
            {
              t = term_k_10;
            }
          else
            {
              if(match_cons(n_11, sym_September_0))
                {
                  t = term_l_10;
                }
              else
                {
                  if(match_cons(n_11, sym_August_0))
                    {
                      t = term_o_10;
                    }
                  else
                    {
                      if(match_cons(n_11, sym_July_0))
                        {
                          t = term_p_10;
                        }
                      else
                        {
                          if(match_cons(n_11, sym_June_0))
                            {
                              t = term_q_10;
                            }
                          else
                            {
                              if(match_cons(n_11, sym_May_0))
                                {
                                  t = term_d_10;
                                }
                              else
                                {
                                  if(match_cons(n_11, sym_April_0))
                                    {
                                      t = term_r_10;
                                    }
                                  else
                                    {
                                      if(match_cons(n_11, sym_March_0))
                                        {
                                          t = term_s_10;
                                        }
                                      else
                                        {
                                          if(match_cons(n_11, sym_February_0))
                                            {
                                              t = term_t_10;
                                            }
                                          else
                                            {
                                              if(match_cons(n_11, sym_January_0))
                                                {
                                                  t = term_u_10;
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
ATerm day_of_week2abbr_0 (ATerm t)
{
  ATerm i_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym_Saturday_0))
    {
      t = term_v_10;
    }
  else
    {
      if(match_cons(i_12, sym_Friday_0))
        {
          t = term_w_10;
        }
      else
        {
          if(match_cons(i_12, sym_Thursday_0))
            {
              t = term_x_10;
            }
          else
            {
              if(match_cons(i_12, sym_Wednesday_0))
                {
                  t = term_y_10;
                }
              else
                {
                  if(match_cons(i_12, sym_Tuesday_0))
                    {
                      t = term_z_10;
                    }
                  else
                    {
                      if(match_cons(i_12, sym_Monday_0))
                        {
                          t = term_a_11;
                        }
                      else
                        {
                          if(match_cons(i_12, sym_Sunday_0))
                            {
                              t = term_b_11;
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
ATerm day_of_week2text_0 (ATerm t)
{
  ATerm y_12 = NULL;
  y_12 = t;
  x_12 :
  if(match_cons(y_12, sym_Saturday_0))
    {
      t = term_c_11;
    }
  else
    {
      if(match_cons(y_12, sym_Friday_0))
        {
          t = term_d_11;
        }
      else
        {
          if(match_cons(y_12, sym_Thursday_0))
            {
              t = term_e_11;
            }
          else
            {
              if(match_cons(y_12, sym_Wednesday_0))
                {
                  t = term_f_11;
                }
              else
                {
                  if(match_cons(y_12, sym_Tuesday_0))
                    {
                      t = term_g_11;
                    }
                  else
                    {
                      if(match_cons(y_12, sym_Monday_0))
                        {
                          t = term_h_11;
                        }
                      else
                        {
                          if(match_cons(y_12, sym_Sunday_0))
                            {
                              t = term_i_11;
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
ATerm lt_0 (ATerm t)
{
  ATerm j_11 = t;
  if((PushChoice() == 0))
    {
      t = geq_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_11;
    }
  return(t);
}
ATerm leq_lt_0 (ATerm t)
{
  t = comp_comp_2(t, leq_0, lt_0);
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm k_11 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_11;
    }
  return(t);
}
ATerm comp_comp_2 (ATerm t, ATerm q_79 (ATerm), ATerm r_79 (ATerm))
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
  i_13 = t;
  h_13 :
  if(match_cons(i_13, sym__3))
    {
      j_13 = ATgetArgument(i_13, 0);
      k_13 = ATgetArgument(i_13, 1);
      l_13 = ATgetArgument(i_13, 2);
      {
        ATerm l_11;
        l_11 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_13), not_null(k_13));
          {
            t = q_79(t);
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_13), not_null(l_13));
              t = r_79(t);
            }
          }
        }
        t = l_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leq_leq_0 (ATerm t)
{
  t = comp_comp_2(t, leq_0, leq_0);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm l_82 (ATerm), ATerm m_82 (ATerm))
{
  ATerm q_13 (ATerm t)
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_82(t);
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        {
          t = m_82(t);
          t = q_13(t);
        }
      }
    return(t);
  }
  t = q_13(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm q_82 (ATerm))
{
  t = o_82(t);
  t = while_not_2(t, p_82, q_82);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
    z_13 = t;
    s_13 :
    if(match_cons(z_13, sym__2))
      {
        a_14 = ATgetArgument(z_13, 0);
        b_14 = ATgetArgument(z_13, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(a_14), not_null(b_14), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
    e_14 = t;
    u_13 :
    if(match_cons(e_14, sym__3))
      {
        f_14 = ATgetArgument(e_14, 0);
        g_14 = ATgetArgument(e_14, 1);
        h_14 = ATgetArgument(e_14, 2);
        v_13 :
        if(match_int(f_14, 0))
          {
            t = not_null(h_14);
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
  ATerm v_0 (ATerm t)
  {
    ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
    k_14 = t;
    y_13 :
    if(match_cons(k_14, sym__3))
      {
        l_14 = ATgetArgument(k_14, 0);
        m_14 = ATgetArgument(k_14, 1);
        n_14 = ATgetArgument(k_14, 2);
        {
          ATerm r_14 = NULL;
          ATerm q_11;
          q_11 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), term_r_11);
            t = geq_0(t);
          }
          t = q_11;
          {
            ATerm s_14 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), term_r_11);
            {
              t = subt_0(t);
              {
                s_14 = t;
                if(((r_14 != NULL) && (r_14 != s_14)))
                  _fail(s_14);
                else
                  r_14 = s_14;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_14), not_null(m_14), (ATerm) ATinsert(CheckATermList(not_null(n_14)), not_null(m_14)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, t_0, u_0, v_0);
  return(t);
}
ATerm copy_char_0 (ATerm t)
{
  t = copy_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm pos_0 (ATerm t)
{
  ATerm s_11;
  s_11 = t;
  {
    ATerm y_14 = NULL;
    ATerm z_14 = NULL;
    z_14 = t;
    if(((y_14 != NULL) && (y_14 != z_14)))
      _fail(z_14);
    else
      y_14 = z_14;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_14), term_t_11);
      t = geq_0(t);
    }
  }
  t = s_11;
  return(t);
}
ATerm align_helper_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym__3))
    {
      h_15 = ATgetArgument(g_15, 0);
      i_15 = ATgetArgument(g_15, 1);
      j_15 = ATgetArgument(g_15, 2);
      {
        ATerm n_15 = NULL;
        ATerm o_15 = NULL,s_15 = NULL;
        t = not_null(i_15);
        {
          t = string_length_0(t);
          {
            ATerm p_15 = NULL;
            p_15 = t;
            if(((o_15 != NULL) && (o_15 != p_15)))
              _fail(p_15);
            else
              o_15 = p_15;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), not_null(o_15));
              {
                t = subt_0(t);
                {
                  ATerm u_11 = t;
                  int v_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = pos_0(t);
                      LocalPopChoice(v_11);
                      {
                        ATerm q_15 = NULL;
                        ATerm r_15 = NULL;
                        r_15 = t;
                        if(((q_15 != NULL) && (q_15 != r_15)))
                          _fail(r_15);
                        else
                          q_15 = r_15;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_15), not_null(h_15));
                          t = copy_char_0(t);
                        }
                      }
                    }
                  else
                    {
                      t = u_11;
                      t = term_w_11;
                    }
                  {
                    s_15 = t;
                    if(((n_15 != NULL) && (n_15 != s_15)))
                      _fail(s_15);
                    else
                      n_15 = s_15;
                  }
                }
              }
            }
          }
        }
        t = not_null(n_15);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm align_right_0 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
  a_16 = t;
  z_15 :
  if(match_cons(a_16, sym__3))
    {
      b_16 = ATgetArgument(a_16, 0);
      c_16 = ATgetArgument(a_16, 1);
      d_16 = ATgetArgument(a_16, 2);
      {
        ATerm h_16 = NULL;
        ATerm i_16 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, not_null(b_16), not_null(c_16), not_null(d_16));
        {
          t = align_helper_0(t);
          {
            i_16 = t;
            if(((h_16 != NULL) && (h_16 != i_16)))
              _fail(i_16);
            else
              h_16 = i_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), not_null(c_16));
          t = conc_strings_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm p_78 (ATerm), ATerm q_78 (ATerm), ATerm r_78 (ATerm))
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_78(t);
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
        p_16 = t;
        o_16 :
        if(((ATgetType(p_16) == AT_LIST) && !(ATisEmpty(p_16))))
          {
            q_16 = ATgetFirst((ATermList) p_16);
            r_16 = (ATerm) ATgetNext((ATermList) p_16);
            {
              ATerm u_16 = NULL,w_16 = NULL;
              ATerm z_11;
              z_11 = t;
              {
                ATerm v_16 = NULL;
                t = not_null(q_16);
                {
                  t = r_78(t);
                  {
                    v_16 = t;
                    if(((u_16 != NULL) && (u_16 != v_16)))
                      _fail(v_16);
                    else
                      u_16 = v_16;
                  }
                }
              }
              t = z_11;
              {
                ATerm x_16 = NULL;
                t = not_null(r_16);
                {
                  t = foldr_3(t, p_78, q_78, r_78);
                  {
                    x_16 = t;
                    if(((w_16 != NULL) && (w_16 != x_16)))
                      _fail(x_16);
                    else
                      w_16 = x_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_16), not_null(w_16));
                  t = q_78(t);
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
  ATerm w_0 (ATerm t)
  {
    t = term_t_11;
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    t = term_r_11;
    return(t);
  }
  t = foldr_3(t, w_0, add_0, x_0);
  return(t);
}
ATerm string_length_0 (ATerm t)
{
  t = explode_string_0(t);
  t = length_0(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  c_17 :
  if(match_cons(d_17, sym__2))
    {
      e_17 = ATgetArgument(d_17, 0);
      f_17 = ATgetArgument(d_17, 1);
      t = SSL_mod(not_null(e_17), not_null(f_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm inc_0 (ATerm t)
{
  ATerm k_17 = NULL;
  ATerm l_17 = NULL;
  l_17 = t;
  if(((k_17 != NULL) && (k_17 != l_17)))
    _fail(l_17);
  else
    k_17 = l_17;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), term_r_11);
    t = add_0(t);
  }
  return(t);
}
ATerm month2index_0 (ATerm t)
{
  ATerm a_18 = NULL;
  a_18 = t;
  z_17 :
  if(match_cons(a_18, sym_December_0))
    {
      t = term_a_12;
    }
  else
    {
      if(match_cons(a_18, sym_November_0))
        {
          t = term_b_12;
        }
      else
        {
          if(match_cons(a_18, sym_October_0))
            {
              t = term_c_12;
            }
          else
            {
              if(match_cons(a_18, sym_September_0))
                {
                  t = term_d_12;
                }
              else
                {
                  if(match_cons(a_18, sym_August_0))
                    {
                      t = term_e_12;
                    }
                  else
                    {
                      if(match_cons(a_18, sym_July_0))
                        {
                          t = term_f_12;
                        }
                      else
                        {
                          if(match_cons(a_18, sym_June_0))
                            {
                              t = term_g_12;
                            }
                          else
                            {
                              if(match_cons(a_18, sym_May_0))
                                {
                                  t = term_j_12;
                                }
                              else
                                {
                                  if(match_cons(a_18, sym_April_0))
                                    {
                                      t = term_k_12;
                                    }
                                  else
                                    {
                                      if(match_cons(a_18, sym_March_0))
                                        {
                                          t = term_l_12;
                                        }
                                      else
                                        {
                                          if(match_cons(a_18, sym_February_0))
                                            {
                                              t = term_r_11;
                                            }
                                          else
                                            {
                                              if(match_cons(a_18, sym_January_0))
                                                {
                                                  t = term_t_11;
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
ATerm date_pattern_to_int_0 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
  ATerm u_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_12, not_null(k_20), term_n_12);
    t = leq_leq_0(t);
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_20), term_m_12);
      t = subt_0(t);
    }
    return(t);
  }
  ATerm v_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__3, term_r_11, not_null(k_20), term_m_12);
    t = leq_leq_0(t);
    t = not_null(k_20);
    return(t);
  }
  ATerm w_21 (ATerm t)
  {
    t = term_m_12;
    return(t);
  }
  ATerm x_21 (ATerm t)
  {
    t = not_null(k_20);
    t = inc_0(t);
    return(t);
  }
  ATerm y_21 (ATerm t)
  {
    t = not_null(k_20);
    return(t);
  }
  ATerm z_21 (ATerm t)
  {
    t = not_null(o_20);
    return(t);
  }
  ATerm a_22 (ATerm t)
  {
    t = not_null(o_20);
    return(t);
  }
  ATerm b_22 (ATerm t)
  {
    t = not_null(v_20);
    return(t);
  }
  ATerm c_22 (ATerm t)
  {
    t = not_null(v_20);
    return(t);
  }
  ATerm d_22 (ATerm t)
  {
    t = not_null(u_20);
    {
      t = month2index_0(t);
      t = inc_0(t);
    }
    return(t);
  }
  ATerm e_22 (ATerm t)
  {
    t = not_null(u_20);
    {
      t = month2index_0(t);
      t = inc_0(t);
    }
    return(t);
  }
  ATerm g_22 (ATerm t)
  {
    ATerm n_21 = NULL;
    t = not_null(t_20);
    {
      ATerm o_21 = NULL;
      o_21 = t;
      if(((n_21 != NULL) && (n_21 != o_21)))
        _fail(o_21);
      else
        n_21 = o_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_21), term_o_12);
        t = mod_0(t);
      }
    }
    return(t);
  }
  ATerm h_22 (ATerm t)
  {
    t = not_null(t_20);
    return(t);
  }
  p_20 = t;
  f_19 :
  if(match_cons(p_20, sym__2))
    {
      q_20 = ATgetArgument(p_20, 0);
      r_20 = ATgetArgument(p_20, 1);
      g_19 :
      if(match_string(q_20, "ss"))
        {
          h_19 :
          if(match_cons(r_20, sym_ComponentTime_3))
            {
              s_20 = ATgetArgument(r_20, 0);
              w_20 = ATgetArgument(r_20, 1);
              x_20 = ATgetArgument(r_20, 2);
              i_19 :
              if(match_cons(w_20, sym_DayTime_3))
                {
                  k_20 = ATgetArgument(w_20, 0);
                  l_20 = ATgetArgument(w_20, 1);
                  m_20 = ATgetArgument(w_20, 2);
                  t = not_null(m_20);
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
          if(match_string(q_20, "mm"))
            {
              j_19 :
              if(match_cons(r_20, sym_ComponentTime_3))
                {
                  s_20 = ATgetArgument(r_20, 0);
                  w_20 = ATgetArgument(r_20, 1);
                  x_20 = ATgetArgument(r_20, 2);
                  k_19 :
                  if(match_cons(w_20, sym_DayTime_3))
                    {
                      k_20 = ATgetArgument(w_20, 0);
                      l_20 = ATgetArgument(w_20, 1);
                      m_20 = ATgetArgument(w_20, 2);
                      t = not_null(l_20);
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
              if(match_string(q_20, "KK"))
                {
                  l_19 :
                  if(match_cons(r_20, sym_ComponentTime_3))
                    {
                      s_20 = ATgetArgument(r_20, 0);
                      w_20 = ATgetArgument(r_20, 1);
                      x_20 = ATgetArgument(r_20, 2);
                      m_19 :
                      if(match_cons(w_20, sym_DayTime_3))
                        {
                          k_20 = ATgetArgument(w_20, 0);
                          l_20 = ATgetArgument(w_20, 1);
                          m_20 = ATgetArgument(w_20, 2);
                          {
                            ATerm p_12 = t;
                            int q_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATmakeAppl(sym__3, term_m_12, not_null(k_20), term_n_12);
                                t = leq_leq_0(t);
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_20), term_m_12);
                                  t = subt_0(t);
                                }
                                ;
                                LocalPopChoice(q_12);
                              }
                            else
                              {
                                t = p_12;
                                {
                                  t = (ATerm) ATmakeAppl(sym__3, term_t_11, not_null(k_20), term_m_12);
                                  t = leq_lt_0(t);
                                  t = not_null(k_20);
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
              else
                {
                  if(match_string(q_20, "hh"))
                    {
                      n_19 :
                      if(match_cons(r_20, sym_ComponentTime_3))
                        {
                          s_20 = ATgetArgument(r_20, 0);
                          w_20 = ATgetArgument(r_20, 1);
                          x_20 = ATgetArgument(r_20, 2);
                          o_19 :
                          if(match_cons(w_20, sym_DayTime_3))
                            {
                              k_20 = ATgetArgument(w_20, 0);
                              l_20 = ATgetArgument(w_20, 1);
                              m_20 = ATgetArgument(w_20, 2);
                              p_19 :
                              if(match_int(k_20, 0))
                                {
                                  ATerm r_12 = t;
                                  int s_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = u_21(t);
                                      ;
                                      LocalPopChoice(s_12);
                                    }
                                  else
                                    {
                                      t = r_12;
                                      {
                                        ATerm t_12 = t;
                                        int u_12 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = v_21(t);
                                            ;
                                            LocalPopChoice(u_12);
                                          }
                                        else
                                          {
                                            t = t_12;
                                            t = w_21(t);
                                          }
                                      }
                                    }
                                }
                              else
                                {
                                  ATerm v_12 = t;
                                  int w_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = u_21(t);
                                      ;
                                      LocalPopChoice(w_12);
                                    }
                                  else
                                    {
                                      t = v_12;
                                      t = v_21(t);
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
                  else
                    {
                      if(match_string(q_20, "kk"))
                        {
                          q_19 :
                          if(match_cons(r_20, sym_ComponentTime_3))
                            {
                              s_20 = ATgetArgument(r_20, 0);
                              w_20 = ATgetArgument(r_20, 1);
                              x_20 = ATgetArgument(r_20, 2);
                              r_19 :
                              if(match_cons(w_20, sym_DayTime_3))
                                {
                                  k_20 = ATgetArgument(w_20, 0);
                                  l_20 = ATgetArgument(w_20, 1);
                                  m_20 = ATgetArgument(w_20, 2);
                                  t = x_21(t);
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
                          if(match_string(q_20, "HH"))
                            {
                              s_19 :
                              if(match_cons(r_20, sym_ComponentTime_3))
                                {
                                  s_20 = ATgetArgument(r_20, 0);
                                  w_20 = ATgetArgument(r_20, 1);
                                  x_20 = ATgetArgument(r_20, 2);
                                  t_19 :
                                  if(match_cons(w_20, sym_DayTime_3))
                                    {
                                      k_20 = ATgetArgument(w_20, 0);
                                      l_20 = ATgetArgument(w_20, 1);
                                      m_20 = ATgetArgument(w_20, 2);
                                      t = y_21(t);
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
                              if(match_string(q_20, "DD"))
                                {
                                  u_19 :
                                  if(match_cons(r_20, sym_ComponentTime_3))
                                    {
                                      s_20 = ATgetArgument(r_20, 0);
                                      w_20 = ATgetArgument(r_20, 1);
                                      x_20 = ATgetArgument(r_20, 2);
                                      v_19 :
                                      if(match_cons(x_20, sym_Dupl_2))
                                        {
                                          n_20 = ATgetArgument(x_20, 0);
                                          o_20 = ATgetArgument(x_20, 1);
                                          t = z_21(t);
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
                                  if(match_string(q_20, "D"))
                                    {
                                      w_19 :
                                      if(match_cons(r_20, sym_ComponentTime_3))
                                        {
                                          s_20 = ATgetArgument(r_20, 0);
                                          w_20 = ATgetArgument(r_20, 1);
                                          x_20 = ATgetArgument(r_20, 2);
                                          x_19 :
                                          if(match_cons(x_20, sym_Dupl_2))
                                            {
                                              n_20 = ATgetArgument(x_20, 0);
                                              o_20 = ATgetArgument(x_20, 1);
                                              t = a_22(t);
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
                                      if(match_string(q_20, "dd"))
                                        {
                                          y_19 :
                                          if(match_cons(r_20, sym_ComponentTime_3))
                                            {
                                              s_20 = ATgetArgument(r_20, 0);
                                              w_20 = ATgetArgument(r_20, 1);
                                              x_20 = ATgetArgument(r_20, 2);
                                              z_19 :
                                              if(match_cons(s_20, sym_Date_3))
                                                {
                                                  t_20 = ATgetArgument(s_20, 0);
                                                  u_20 = ATgetArgument(s_20, 1);
                                                  v_20 = ATgetArgument(s_20, 2);
                                                  t = b_22(t);
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
                                          if(match_string(q_20, "d"))
                                            {
                                              a_20 :
                                              if(match_cons(r_20, sym_ComponentTime_3))
                                                {
                                                  s_20 = ATgetArgument(r_20, 0);
                                                  w_20 = ATgetArgument(r_20, 1);
                                                  x_20 = ATgetArgument(r_20, 2);
                                                  b_20 :
                                                  if(match_cons(s_20, sym_Date_3))
                                                    {
                                                      t_20 = ATgetArgument(s_20, 0);
                                                      u_20 = ATgetArgument(s_20, 1);
                                                      v_20 = ATgetArgument(s_20, 2);
                                                      t = c_22(t);
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
                                              if(match_string(q_20, "MM"))
                                                {
                                                  c_20 :
                                                  if(match_cons(r_20, sym_ComponentTime_3))
                                                    {
                                                      s_20 = ATgetArgument(r_20, 0);
                                                      w_20 = ATgetArgument(r_20, 1);
                                                      x_20 = ATgetArgument(r_20, 2);
                                                      d_20 :
                                                      if(match_cons(s_20, sym_Date_3))
                                                        {
                                                          t_20 = ATgetArgument(s_20, 0);
                                                          u_20 = ATgetArgument(s_20, 1);
                                                          v_20 = ATgetArgument(s_20, 2);
                                                          t = d_22(t);
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
                                                  if(match_string(q_20, "M"))
                                                    {
                                                      e_20 :
                                                      if(match_cons(r_20, sym_ComponentTime_3))
                                                        {
                                                          s_20 = ATgetArgument(r_20, 0);
                                                          w_20 = ATgetArgument(r_20, 1);
                                                          x_20 = ATgetArgument(r_20, 2);
                                                          f_20 :
                                                          if(match_cons(s_20, sym_Date_3))
                                                            {
                                                              t_20 = ATgetArgument(s_20, 0);
                                                              u_20 = ATgetArgument(s_20, 1);
                                                              v_20 = ATgetArgument(s_20, 2);
                                                              t = e_22(t);
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
                                                      if(match_string(q_20, "yy"))
                                                        {
                                                          g_20 :
                                                          if(match_cons(r_20, sym_ComponentTime_3))
                                                            {
                                                              s_20 = ATgetArgument(r_20, 0);
                                                              w_20 = ATgetArgument(r_20, 1);
                                                              x_20 = ATgetArgument(r_20, 2);
                                                              h_20 :
                                                              if(match_cons(s_20, sym_Date_3))
                                                                {
                                                                  t_20 = ATgetArgument(s_20, 0);
                                                                  u_20 = ATgetArgument(s_20, 1);
                                                                  v_20 = ATgetArgument(s_20, 2);
                                                                  t = g_22(t);
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
                                                          if(match_string(q_20, "yyyy"))
                                                            {
                                                              i_20 :
                                                              if(match_cons(r_20, sym_ComponentTime_3))
                                                                {
                                                                  s_20 = ATgetArgument(r_20, 0);
                                                                  w_20 = ATgetArgument(r_20, 1);
                                                                  x_20 = ATgetArgument(r_20, 2);
                                                                  j_20 :
                                                                  if(match_cons(s_20, sym_Date_3))
                                                                    {
                                                                      t_20 = ATgetArgument(s_20, 0);
                                                                      u_20 = ATgetArgument(s_20, 1);
                                                                      v_20 = ATgetArgument(s_20, 2);
                                                                      t = h_22(t);
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
ATerm date_pattern_to_string_0 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
  ATerm y_24 (ATerm t)
  {
    ATerm o_24 = NULL,q_24 = NULL;
    t = date_pattern_to_int_0(t);
    {
      ATerm z_12;
      z_12 = t;
      {
        ATerm p_24 = NULL;
        t = int_to_string_0(t);
        {
          p_24 = t;
          if(((o_24 != NULL) && (o_24 != p_24)))
            _fail(p_24);
          else
            o_24 = p_24;
        }
      }
      t = z_12;
      {
        ATerm r_24 = NULL;
        t = not_null(d_24);
        {
          t = string_length_0(t);
          {
            r_24 = t;
            if(((q_24 != NULL) && (q_24 != r_24)))
              _fail(r_24);
            else
              q_24 = r_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_13, not_null(o_24), not_null(q_24));
          t = align_right_0(t);
        }
      }
    }
    return(t);
  }
  ATerm z_24 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_12, not_null(x_23), term_n_12);
    t = leq_leq_0(t);
    t = term_b_13;
    return(t);
  }
  ATerm a_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__3, term_t_11, not_null(x_23), term_m_12);
    t = leq_lt_0(t);
    t = term_c_13;
    return(t);
  }
  ATerm g_25 (ATerm t)
  {
    t = not_null(a_24);
    t = day_of_week2text_0(t);
    return(t);
  }
  ATerm h_25 (ATerm t)
  {
    t = not_null(a_24);
    t = day_of_week2abbr_0(t);
    return(t);
  }
  ATerm i_25 (ATerm t)
  {
    t = not_null(j_24);
    t = month2text_0(t);
    return(t);
  }
  ATerm j_25 (ATerm t)
  {
    t = not_null(j_24);
    t = month2abbr_0(t);
    return(t);
  }
  c_24 = t;
  x_22 :
  if(match_cons(c_24, sym__2))
    {
      d_24 = ATgetArgument(c_24, 0);
      e_24 = ATgetArgument(c_24, 1);
      z_22 :
      if(match_cons(e_24, sym_ComponentTime_3))
        {
          f_24 = ATgetArgument(e_24, 0);
          l_24 = ATgetArgument(e_24, 1);
          m_24 = ATgetArgument(e_24, 2);
          a_23 :
          if(match_cons(m_24, sym_Dupl_2))
            {
              a_24 = ATgetArgument(m_24, 0);
              b_24 = ATgetArgument(m_24, 1);
              b_23 :
              if(match_cons(l_24, sym_DayTime_3))
                {
                  x_23 = ATgetArgument(l_24, 0);
                  y_23 = ATgetArgument(l_24, 1);
                  z_23 = ATgetArgument(l_24, 2);
                  e_23 :
                  if(match_cons(f_24, sym_Date_3))
                    {
                      i_24 = ATgetArgument(f_24, 0);
                      j_24 = ATgetArgument(f_24, 1);
                      k_24 = ATgetArgument(f_24, 2);
                      f_23 :
                      if(match_string(d_24, "a"))
                        {
                          ATerm d_13 = t;
                          int e_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = y_24(t);
                              ;
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
                                    t = z_24(t);
                                    ;
                                    LocalPopChoice(g_13);
                                  }
                                else
                                  {
                                    t = f_13;
                                    t = a_25(t);
                                  }
                              }
                            }
                        }
                      else
                        {
                          if(match_string(d_24, "EEEE"))
                            {
                              ATerm m_13 = t;
                              int n_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = y_24(t);
                                  ;
                                  LocalPopChoice(n_13);
                                }
                              else
                                {
                                  t = m_13;
                                  t = g_25(t);
                                }
                            }
                          else
                            {
                              if(match_string(d_24, "EEE"))
                                {
                                  ATerm o_13 = t;
                                  int p_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = y_24(t);
                                      ;
                                      LocalPopChoice(p_13);
                                    }
                                  else
                                    {
                                      t = o_13;
                                      t = h_25(t);
                                    }
                                }
                              else
                                {
                                  if(match_string(d_24, "MMMM"))
                                    {
                                      ATerm r_13 = t;
                                      int t_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = y_24(t);
                                          ;
                                          LocalPopChoice(t_13);
                                        }
                                      else
                                        {
                                          t = r_13;
                                          t = i_25(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(d_24, "MMM"))
                                        {
                                          ATerm w_13 = t;
                                          int x_13 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = y_24(t);
                                              ;
                                              LocalPopChoice(x_13);
                                            }
                                          else
                                            {
                                              t = w_13;
                                              t = j_25(t);
                                            }
                                        }
                                      else
                                        {
                                          t = y_24(t);
                                        }
                                    }
                                }
                            }
                        }
                    }
                  else
                    {
                      g_23 :
                      if(match_string(d_24, "a"))
                        {
                          ATerm c_14 = t;
                          int d_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = y_24(t);
                              ;
                              LocalPopChoice(d_14);
                            }
                          else
                            {
                              t = c_14;
                              {
                                ATerm i_14 = t;
                                int j_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = z_24(t);
                                    ;
                                    LocalPopChoice(j_14);
                                  }
                                else
                                  {
                                    t = i_14;
                                    t = a_25(t);
                                  }
                              }
                            }
                        }
                      else
                        {
                          if(match_string(d_24, "EEEE"))
                            {
                              ATerm o_14 = t;
                              int p_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = y_24(t);
                                  ;
                                  LocalPopChoice(p_14);
                                }
                              else
                                {
                                  t = o_14;
                                  t = g_25(t);
                                }
                            }
                          else
                            {
                              if(match_string(d_24, "EEE"))
                                {
                                  ATerm q_14 = t;
                                  int t_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = y_24(t);
                                      ;
                                      LocalPopChoice(t_14);
                                    }
                                  else
                                    {
                                      t = q_14;
                                      t = h_25(t);
                                    }
                                }
                              else
                                {
                                  t = y_24(t);
                                }
                            }
                        }
                    }
                }
              else
                {
                  h_23 :
                  if(match_cons(f_24, sym_Date_3))
                    {
                      i_24 = ATgetArgument(f_24, 0);
                      j_24 = ATgetArgument(f_24, 1);
                      k_24 = ATgetArgument(f_24, 2);
                      i_23 :
                      if(match_string(d_24, "EEEE"))
                        {
                          ATerm u_14 = t;
                          int v_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = y_24(t);
                              ;
                              LocalPopChoice(v_14);
                            }
                          else
                            {
                              t = u_14;
                              t = g_25(t);
                            }
                        }
                      else
                        {
                          if(match_string(d_24, "EEE"))
                            {
                              ATerm w_14 = t;
                              int x_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = y_24(t);
                                  ;
                                  LocalPopChoice(x_14);
                                }
                              else
                                {
                                  t = w_14;
                                  t = h_25(t);
                                }
                            }
                          else
                            {
                              if(match_string(d_24, "MMMM"))
                                {
                                  ATerm a_15 = t;
                                  int b_15 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = y_24(t);
                                      ;
                                      LocalPopChoice(b_15);
                                    }
                                  else
                                    {
                                      t = a_15;
                                      t = i_25(t);
                                    }
                                }
                              else
                                {
                                  if(match_string(d_24, "MMM"))
                                    {
                                      ATerm c_15 = t;
                                      int d_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = y_24(t);
                                          ;
                                          LocalPopChoice(d_15);
                                        }
                                      else
                                        {
                                          t = c_15;
                                          t = j_25(t);
                                        }
                                    }
                                  else
                                    {
                                      t = y_24(t);
                                    }
                                }
                            }
                        }
                    }
                  else
                    {
                      j_23 :
                      if(match_string(d_24, "EEEE"))
                        {
                          ATerm e_15 = t;
                          int k_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = y_24(t);
                              ;
                              LocalPopChoice(k_15);
                            }
                          else
                            {
                              t = e_15;
                              t = g_25(t);
                            }
                        }
                      else
                        {
                          if(match_string(d_24, "EEE"))
                            {
                              ATerm l_15 = t;
                              int m_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = y_24(t);
                                  ;
                                  LocalPopChoice(m_15);
                                }
                              else
                                {
                                  t = l_15;
                                  t = h_25(t);
                                }
                            }
                          else
                            {
                              t = y_24(t);
                            }
                        }
                    }
                }
            }
          else
            {
              o_23 :
              if(match_cons(l_24, sym_DayTime_3))
                {
                  x_23 = ATgetArgument(l_24, 0);
                  y_23 = ATgetArgument(l_24, 1);
                  z_23 = ATgetArgument(l_24, 2);
                  p_23 :
                  if(match_cons(f_24, sym_Date_3))
                    {
                      i_24 = ATgetArgument(f_24, 0);
                      j_24 = ATgetArgument(f_24, 1);
                      k_24 = ATgetArgument(f_24, 2);
                      q_23 :
                      if(match_string(d_24, "a"))
                        {
                          ATerm t_15 = t;
                          int u_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = y_24(t);
                              ;
                              LocalPopChoice(u_15);
                            }
                          else
                            {
                              t = t_15;
                              {
                                ATerm v_15 = t;
                                int w_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = z_24(t);
                                    ;
                                    LocalPopChoice(w_15);
                                  }
                                else
                                  {
                                    t = v_15;
                                    t = a_25(t);
                                  }
                              }
                            }
                        }
                      else
                        {
                          if(match_string(d_24, "MMMM"))
                            {
                              ATerm x_15 = t;
                              int y_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = y_24(t);
                                  ;
                                  LocalPopChoice(y_15);
                                }
                              else
                                {
                                  t = x_15;
                                  t = i_25(t);
                                }
                            }
                          else
                            {
                              if(match_string(d_24, "MMM"))
                                {
                                  ATerm e_16 = t;
                                  int f_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = y_24(t);
                                      ;
                                      LocalPopChoice(f_16);
                                    }
                                  else
                                    {
                                      t = e_16;
                                      t = j_25(t);
                                    }
                                }
                              else
                                {
                                  t = y_24(t);
                                }
                            }
                        }
                    }
                  else
                    {
                      s_23 :
                      if(match_string(d_24, "a"))
                        {
                          ATerm g_16 = t;
                          int j_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = y_24(t);
                              ;
                              LocalPopChoice(j_16);
                            }
                          else
                            {
                              t = g_16;
                              {
                                ATerm k_16 = t;
                                int l_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = z_24(t);
                                    ;
                                    LocalPopChoice(l_16);
                                  }
                                else
                                  {
                                    t = k_16;
                                    t = a_25(t);
                                  }
                              }
                            }
                        }
                      else
                        {
                          t = y_24(t);
                        }
                    }
                }
              else
                {
                  t_23 :
                  if(match_cons(f_24, sym_Date_3))
                    {
                      i_24 = ATgetArgument(f_24, 0);
                      j_24 = ATgetArgument(f_24, 1);
                      k_24 = ATgetArgument(f_24, 2);
                      u_23 :
                      if(match_string(d_24, "MMMM"))
                        {
                          ATerm m_16 = t;
                          int n_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = y_24(t);
                              ;
                              LocalPopChoice(n_16);
                            }
                          else
                            {
                              t = m_16;
                              t = i_25(t);
                            }
                        }
                      else
                        {
                          if(match_string(d_24, "MMM"))
                            {
                              ATerm s_16 = t;
                              int t_16 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = y_24(t);
                                  ;
                                  LocalPopChoice(t_16);
                                }
                              else
                                {
                                  t = s_16;
                                  t = j_25(t);
                                }
                            }
                          else
                            {
                              t = y_24(t);
                            }
                        }
                    }
                  else
                    {
                      v_23 :
                      t = y_24(t);
                    }
                }
            }
        }
      else
        {
          w_23 :
          t = y_24(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm date_format_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  q_25 = t;
  p_25 :
  if(match_cons(q_25, sym__2))
    {
      r_25 = ATgetArgument(q_25, 0);
      s_25 = ATgetArgument(q_25, 1);
      {
        t = not_null(r_25);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm z_25 = NULL;
            ATerm a_26 = NULL;
            a_26 = t;
            if(((z_25 != NULL) && (z_25 != a_26)))
              _fail(a_26);
            else
              z_25 = a_26;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_25), not_null(s_25));
              {
                ATerm y_16 = t;
                int z_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = date_pattern_to_string_0(t);
                    ;
                    LocalPopChoice(z_16);
                  }
                else
                  {
                    t = y_16;
                    t = Fst_0(t);
                  }
              }
            }
            return(t);
          }
          t = map_1(t, y_0);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm index2day_of_week_0 (ATerm t)
{
  ATerm l_26 = NULL;
  l_26 = t;
  k_26 :
  if(match_int(l_26, 6))
    {
      t = term_a_17;
    }
  else
    {
      if(match_int(l_26, 5))
        {
          t = term_b_17;
        }
      else
        {
          if(match_int(l_26, 4))
            {
              t = term_g_17;
            }
          else
            {
              if(match_int(l_26, 3))
                {
                  t = term_h_17;
                }
              else
                {
                  if(match_int(l_26, 2))
                    {
                      t = term_i_17;
                    }
                  else
                    {
                      if(match_int(l_26, 1))
                        {
                          t = term_j_17;
                        }
                      else
                        {
                          if(match_int(l_26, 0))
                            {
                              t = term_m_17;
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
ATerm index2month_0 (ATerm t)
{
  ATerm g_27 = NULL;
  g_27 = t;
  f_27 :
  if(match_int(g_27, 11))
    {
      t = term_n_17;
    }
  else
    {
      if(match_int(g_27, 10))
        {
          t = term_o_17;
        }
      else
        {
          if(match_int(g_27, 9))
            {
              t = term_p_17;
            }
          else
            {
              if(match_int(g_27, 8))
                {
                  t = term_q_17;
                }
              else
                {
                  if(match_int(g_27, 7))
                    {
                      t = term_r_17;
                    }
                  else
                    {
                      if(match_int(g_27, 6))
                        {
                          t = term_s_17;
                        }
                      else
                        {
                          if(match_int(g_27, 5))
                            {
                              t = term_t_17;
                            }
                          else
                            {
                              if(match_int(g_27, 4))
                                {
                                  t = term_u_17;
                                }
                              else
                                {
                                  if(match_int(g_27, 3))
                                    {
                                      t = term_v_17;
                                    }
                                  else
                                    {
                                      if(match_int(g_27, 2))
                                        {
                                          t = term_w_17;
                                        }
                                      else
                                        {
                                          if(match_int(g_27, 1))
                                            {
                                              t = term_x_17;
                                            }
                                          else
                                            {
                                              if(match_int(g_27, 0))
                                                {
                                                  t = term_y_17;
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
ATerm prim_tuple_to_ComponentTime_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL;
  x_27 = t;
  w_27 :
  if(match_cons(x_27, sym__8))
    {
      y_27 = ATgetArgument(x_27, 0);
      z_27 = ATgetArgument(x_27, 1);
      a_28 = ATgetArgument(x_27, 2);
      b_28 = ATgetArgument(x_27, 3);
      c_28 = ATgetArgument(x_27, 4);
      d_28 = ATgetArgument(x_27, 5);
      e_28 = ATgetArgument(x_27, 6);
      f_28 = ATgetArgument(x_27, 7);
      {
        ATerm o_28 = NULL,q_28 = NULL;
        ATerm b_18;
        b_18 = t;
        {
          ATerm p_28 = NULL;
          t = not_null(c_28);
          {
            t = index2month_0(t);
            {
              p_28 = t;
              if(((o_28 != NULL) && (o_28 != p_28)))
                _fail(p_28);
              else
                o_28 = p_28;
            }
          }
        }
        t = b_18;
        {
          ATerm r_28 = NULL;
          t = not_null(e_28);
          {
            t = index2day_of_week_0(t);
            {
              r_28 = t;
              if(((q_28 != NULL) && (q_28 != r_28)))
                _fail(r_28);
              else
                q_28 = r_28;
            }
          }
          t = (ATerm) ATmakeAppl(sym_ComponentTime_3, (ATerm)ATmakeAppl(sym_Date_3, not_null(d_28), not_null(o_28), not_null(b_28)), (ATerm)ATmakeAppl(sym_DayTime_3, not_null(a_28), not_null(z_27), not_null(y_27)), (ATerm) ATmakeAppl(sym_Dupl_2, not_null(q_28), not_null(f_28)));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm epoch2local_time_0 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL;
  x_28 = t;
  w_28 :
  if(match_cons(x_28, sym_EpochTime_1))
    {
      y_28 = ATgetArgument(x_28, 0);
      {
        t = SSL_epoch2localtime(not_null(y_28));
        t = prim_tuple_to_ComponentTime_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm now_epoch_time_0 (ATerm t)
{
  ATerm c_29 = NULL;
  t = SSL_now_epoch_time();
  {
    ATerm d_29 = NULL;
    d_29 = t;
    if(((c_29 != NULL) && (c_29 != d_29)))
      _fail(d_29);
    else
      c_29 = d_29;
    t = (ATerm) ATmakeAppl(sym_EpochTime_1, not_null(c_29));
  }
  return(t);
}
ATerm now_local_time_0 (ATerm t)
{
  t = now_epoch_time_0(t);
  t = epoch2local_time_0(t);
  return(t);
}
ATerm create_time_0 (ATerm t)
{
  ATerm g_29 = NULL;
  ATerm h_29 = NULL;
  t = term_y_7;
  {
    t = now_local_time_0(t);
    {
      h_29 = t;
      if(((g_29 != NULL) && (g_29 != h_29)))
        _fail(h_29);
      else
        g_29 = h_29;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_18), term_i_18), term_j_18), term_i_18), term_h_18), term_d_18), term_g_18), term_d_18), term_f_18), term_d_18), term_e_18), term_d_18), term_c_18), not_null(g_29));
    t = date_format_0(t);
  }
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm l_18;
  l_18 = t;
  {
    t = error_0(t);
    {
      t = term_r_11;
      t = exit_0(t);
    }
  }
  t = l_18;
  return(t);
}
ATerm get_title_0 (ATerm t)
{
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_18;
      t = get_config_0(t);
      ;
      LocalPopChoice(n_18);
    }
  else
    {
      t = m_18;
      {
        t = (ATerm) ATinsert(ATempty, term_p_18);
        t = fatal_error_0(t);
      }
    }
  return(t);
}
ATerm create_header_0 (ATerm t)
{
  ATerm l_29 = NULL,n_29 = NULL;
  t = get_title_0(t);
  {
    ATerm q_18;
    q_18 = t;
    {
      ATerm m_29 = NULL;
      m_29 = t;
      if(((l_29 != NULL) && (l_29 != m_29)))
        _fail(m_29);
      else
        l_29 = m_29;
    }
    t = q_18;
    {
      ATerm o_29 = NULL;
      t = term_y_7;
      {
        t = create_time_0(t);
        {
          o_29 = t;
          if(((n_29 != NULL) && (n_29 != o_29)))
            _fail(o_29);
          else
            n_29 = o_29;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_19), term_c_19), term_b_19), term_a_19), not_null(l_29)), term_z_18), term_y_18), term_x_18), term_w_18), term_v_18), term_u_18), term_t_18), not_null(n_29)), term_s_18), term_r_18);
    }
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm q_94 (ATerm))
{
  ATerm z_0 (ATerm t)
  {
    ATerm e_19 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_29 = NULL;
        ATerm t_29 = NULL;
        t = term_i_9;
        {
          t = get_config_0(t);
          {
            t_29 = t;
            if(((s_29 != NULL) && (s_29 != t_29)))
              _fail(t_29);
            else
              s_29 = t_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_29));
        ;
        LocalPopChoice(y_20);
      }
    else
      {
        t = e_19;
        t = term_f_9;
      }
    {
      t = q_94(t);
      {
        ATerm a_1 (ATerm t)
        {
          ATerm z_20 = t;
          int a_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_h_9;
              t = get_config_0(t);
              ;
              LocalPopChoice(a_21);
            }
          else
            {
              t = z_20;
              t = term_b_21;
            }
          return(t);
        }
        t = copy_to_1(t, a_1);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, z_0);
  return(t);
}
ATerm abox2html_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm y_29 = NULL,a_30 = NULL,c_30 = NULL;
    ATerm c_21;
    c_21 = t;
    {
      ATerm z_29 = NULL;
      t = create_header_0(t);
      {
        t = print_to_0(t);
        {
          z_29 = t;
          if(((y_29 != NULL) && (y_29 != z_29)))
            _fail(z_29);
          else
            y_29 = z_29;
        }
      }
    }
    t = c_21;
    {
      ATerm d_21;
      d_21 = t;
      {
        ATerm b_30 = NULL;
        ATerm c_1 (ATerm t)
        {
          t = term_e_21;
          return(t);
        }
        t = xtc_transform_2(t, c_1, pass_verbose_0);
        {
          b_30 = t;
          if(((a_30 != NULL) && (a_30 != b_30)))
            _fail(b_30);
          else
            a_30 = b_30;
        }
      }
      t = d_21;
      {
        ATerm f_30 = NULL;
        t = create_footer_0(t);
        {
          t = print_to_0(t);
          {
            f_30 = t;
            if(((c_30 != NULL) && (c_30 != f_30)))
              _fail(f_30);
            else
              c_30 = f_30;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(c_30)), not_null(a_30)), not_null(y_29));
          t = xtc_cat_0(t);
        }
      }
    }
    return(t);
  }
  t = xtc_io_1(t, b_1);
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
  p_30 = t;
  o_30 :
  if(match_cons(p_30, sym__2))
    {
      q_30 = ATgetArgument(p_30, 0);
      r_30 = ATgetArgument(p_30, 1);
      {
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(q_30), not_null(r_30));
            ;
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
            t = SSL_subtr(not_null(q_30), not_null(r_30));
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
  ATerm x_30 = NULL;
  ATerm y_30 = NULL,a_31 = NULL;
  ATerm z_30 = NULL;
  t = term_h_21;
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        t = term_r_11;
      }
    {
      z_30 = t;
      if(((y_30 != NULL) && (y_30 != z_30)))
        _fail(z_30);
      else
        y_30 = z_30;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_30), term_r_11);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          a_31 = t;
          if(((x_30 != NULL) && (x_30 != a_31)))
            _fail(a_31);
          else
            x_30 = a_31;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_30)), term_h_21);
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm e_31 = NULL;
  e_31 = t;
  t = SSL_close_file(not_null(e_31));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  j_31 = t;
  i_31 :
  if(match_cons(j_31, sym__2))
    {
      k_31 = ATgetArgument(j_31, 0);
      l_31 = ATgetArgument(j_31, 1);
      t = SSL_execvp(not_null(k_31), not_null(l_31));
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
  ATerm b_32 = NULL;
  b_32 = t;
  t = SSL_int_to_string(not_null(b_32));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
  j_32 = t;
  i_32 :
  if(match_cons(j_32, sym_UnknownSignal_1))
    {
      k_32 = ATgetArgument(j_32, 0);
      {
        ATerm o_32 = NULL;
        ATerm p_32 = NULL;
        t = not_null(k_32);
        {
          t = int_to_string_0(t);
          {
            p_32 = t;
            if(((o_32 != NULL) && (o_32 != p_32)))
              _fail(p_32);
            else
              o_32 = p_32;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_21), not_null(o_32)), term_k_21);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(j_32, sym_Signal_3))
        {
          k_32 = ATgetArgument(j_32, 0);
          l_32 = ATgetArgument(j_32, 1);
          m_32 = ATgetArgument(j_32, 2);
          {
            ATerm t_32 = NULL;
            ATerm u_32 = NULL;
            t = not_null(l_32);
            {
              t = int_to_string_0(t);
              {
                u_32 = t;
                if(((t_32 != NULL) && (t_32 != u_32)))
                  _fail(u_32);
                else
                  t_32 = u_32;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_32)), term_p_21), not_null(t_32)), term_m_21), not_null(k_32));
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
ATerm fetch_elem_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm a_33 = NULL;
  ATerm d_1 (ATerm t)
  {
    ATerm b_33 = NULL;
    t = m_72(t);
    {
      b_33 = t;
      if(((a_33 != NULL) && (a_33 != b_33)))
        _fail(b_33);
      else
        a_33 = b_33;
    }
    return(t);
  }
  t = fetch_1(t, d_1);
  t = not_null(a_33);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm g_33 = NULL;
  g_33 = t;
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_28), term_g_28), term_s_27), term_o_27), term_l_27), term_h_27), term_b_27), term_x_26), term_u_26), term_r_26), term_o_26), term_i_26), term_e_26), term_y_25), term_u_25), term_n_25), term_f_25), term_c_25), term_w_24), term_s_24), term_r_23), term_l_23), term_y_22), term_t_22), term_q_22), term_n_22), term_k_22), term_f_22);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL;
            i_33 = t;
            f_33 :
            if(match_cons(i_33, sym_Signal_3))
              {
                j_33 = ATgetArgument(i_33, 0);
                k_33 = ATgetArgument(i_33, 1);
                l_33 = ATgetArgument(i_33, 2);
                if(((g_33 != NULL) && (g_33 != k_33)))
                  _fail(k_33);
                else
                  g_33 = k_33;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, e_1);
        }
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(g_33));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm l_28;
  l_28 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
      b_34 = t;
      a_34 :
      if(match_cons(b_34, sym_WaitStatus_3))
        {
          c_34 = ATgetArgument(b_34, 0);
          d_34 = ATgetArgument(b_34, 1);
          e_34 = ATgetArgument(b_34, 2);
          {
            ATerm h_34 = NULL;
            t = not_null(d_34);
            {
              ATerm m_28 = t;
              if((PushChoice() == 0))
                {
                  ATerm g_34 = NULL;
                  g_34 = t;
                  w_33 :
                  if(!(match_int(g_34, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = m_28;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm i_34 = NULL;
                    i_34 = t;
                    if(((h_34 != NULL) && (h_34 != i_34)))
                      _fail(i_34);
                    else
                      h_34 = i_34;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_34)), term_s_28));
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
    t = try_1(t, f_1);
  }
  t = l_28;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm m_34 = NULL;
  m_34 = t;
  t = SSL_waitpid(not_null(m_34));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm k_83 (ATerm), ATerm l_83 (ATerm))
{
  ATerm x_34 = NULL;
  ATerm k_35 = NULL;
  x_34 = t;
  {
    t = fork_0(t);
    {
      k_35 = t;
      {
        ATerm t_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_35 = NULL;
            m_35 = t;
            w_34 :
            if(match_int(m_35, 0))
              {
                t = not_null(x_34);
                t = k_83(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(u_28);
          }
        else
          {
            t = t_28;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_35), not_null(x_34));
              t = l_83(t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm m_83 (ATerm))
{
  ATerm a_36 = NULL;
  ATerm g_1 (ATerm t)
  {
    ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
    b_36 = t;
    z_35 :
    if(match_cons(b_36, sym__2))
      {
        c_36 = ATgetArgument(b_36, 0);
        d_36 = ATgetArgument(b_36, 1);
        {
          ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,n_36 = NULL;
          if(((a_36 != NULL) && (a_36 != d_36)))
            _fail(d_36);
          else
            a_36 = d_36;
          {
            t = not_null(c_36);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  f_36 = t;
                  x_35 :
                  if(match_cons(f_36, sym_WaitStatus_3))
                    {
                      g_36 = ATgetArgument(f_36, 0);
                      h_36 = ATgetArgument(f_36, 1);
                      n_36 = ATgetArgument(f_36, 2);
                      y_35 :
                      if(match_int(g_36, 0))
                        {
                          t = not_null(a_36);
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
  t = fork_2(t, m_83, g_1);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm w_36 = NULL,e_37 = NULL,f_37 = NULL;
  w_36 = t;
  v_36 :
  if(match_cons(w_36, sym__2))
    {
      e_37 = ATgetArgument(w_36, 0);
      f_37 = ATgetArgument(w_36, 1);
      {
        ATerm h_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_37), not_null(f_37));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, h_1);
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
  ATerm l_37 = NULL;
  l_37 = t;
  t = SSL_table_keys(not_null(l_37));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm r_37 = NULL;
  r_37 = t;
  {
    t = table_keys_0(t);
    {
      ATerm i_1 (ATerm t)
      {
        ATerm t_37 = NULL;
        ATerm v_37 = NULL;
        t_37 = t;
        {
          ATerm w_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_37), not_null(t_37));
          {
            t = table_get_0(t);
            {
              w_37 = t;
              if(((v_37 != NULL) && (v_37 != w_37)))
                _fail(w_37);
              else
                v_37 = w_37;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_37), not_null(v_37));
        }
        return(t);
      }
      t = map_1(t, i_1);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm k_93 (ATerm))
{
  ATerm l_1 (ATerm t)
  {
    ATerm v_28;
    v_28 = t;
    {
      ATerm b_38 = NULL;
      ATerm c_38 = NULL;
      t = term_h_21;
      {
        t = get_config_0(t);
        {
          c_38 = t;
          if(((b_38 != NULL) && (b_38 != c_38)))
            _fail(c_38);
          else
            b_38 = c_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_38), term_g_12);
        t = geq_0(t);
      }
    }
    t = v_28;
    t = k_93(t);
    return(t);
  }
  t = try_1(t, l_1);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm z_28;
  z_28 = t;
  {
    ATerm f_38 = NULL;
    ATerm g_38 = NULL;
    g_38 = t;
    if(((f_38 != NULL) && (f_38 != g_38)))
      _fail(g_38);
    else
      f_38 = g_38;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_28, not_null(f_38));
      t = printnl_0(t);
    }
  }
  t = z_28;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm m_38 = NULL;
  ATerm o_38 = NULL,p_38 = NULL;
  m_38 = t;
  {
    ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_a_29, (ATerm) ATmakeAppl(sym_Tool_1, not_null(m_38)));
    {
      t = table_get_0(t);
      {
        q_38 = t;
        k_38 :
        if(((ATgetType(q_38) == AT_LIST) && !(ATisEmpty(q_38))))
          {
            r_38 = ATgetFirst((ATermList) q_38);
            u_38 = (ATerm) ATgetNext((ATermList) q_38);
            l_38 :
            if(match_cons(r_38, sym__2))
              {
                s_38 = ATgetArgument(r_38, 0);
                t_38 = ATgetArgument(r_38, 1);
                {
                  if(((o_38 != NULL) && (o_38 != s_38)))
                    _fail(s_38);
                  else
                    o_38 = s_38;
                  if(((p_38 != NULL) && (p_38 != t_38)))
                    _fail(t_38);
                  else
                    p_38 = t_38;
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
    t = not_null(p_38);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
  b_39 = t;
  a_39 :
  if(match_cons(b_39, sym__2))
    {
      c_39 = ATgetArgument(b_39, 0);
      d_39 = ATgetArgument(b_39, 1);
      {
        ATerm g_39 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_a_29, (ATerm) ATmakeAppl(sym_Tool_1, not_null(c_39)));
        {
          t = table_get_0(t);
          {
            ATerm m_1 (ATerm t)
            {
              ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
              h_39 = t;
              z_38 :
              if(match_cons(h_39, sym__2))
                {
                  i_39 = ATgetArgument(h_39, 0);
                  j_39 = ATgetArgument(h_39, 1);
                  {
                    if(((d_39 != NULL) && (d_39 != i_39)))
                      _fail(i_39);
                    else
                      d_39 = i_39;
                    if(((g_39 != NULL) && (g_39 != j_39)))
                      _fail(j_39);
                    else
                      g_39 = j_39;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, m_1);
          }
        }
        t = not_null(g_39);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm c_80 (ATerm))
{
  ATerm b_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = b_29;
      {
        ATerm f_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              t = filter_1(t, c_80);
              return(t);
            }
            t = Cons_2(t, c_80, n_1);
            ;
            LocalPopChoice(i_29);
          }
        else
          {
            t = f_29;
            {
              ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
              o_39 = t;
              n_39 :
              if(((ATgetType(o_39) == AT_LIST) && !(ATisEmpty(o_39))))
                {
                  p_39 = ATgetFirst((ATermList) o_39);
                  q_39 = (ATerm) ATgetNext((ATermList) o_39);
                  {
                    t = not_null(q_39);
                    t = filter_1(t, c_80);
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
ATerm repeat_1 (ATerm t, ATerm w_81 (ATerm))
{
  ATerm t_39 (ATerm t)
  {
    ATerm o_1 (ATerm t)
    {
      t = w_81(t);
      t = t_39(t);
      return(t);
    }
    t = try_1(t, o_1);
    return(t);
  }
  t = t_39(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm j_29;
  j_29 = t;
  {
    ATerm p_1 (ATerm t)
    {
      t = term_p_29;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm q_29 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_29;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, p_1);
  }
  t = j_29;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm r_29;
  r_29 = t;
  {
    ATerm z_39 = NULL;
    ATerm a_40 = NULL;
    a_40 = t;
    if(((z_39 != NULL) && (z_39 != a_40)))
      _fail(a_40);
    else
      z_39 = a_40;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_28, (ATerm) ATinsert(ATempty, not_null(z_39)));
      t = printnl_0(t);
    }
  }
  t = r_29;
  return(t);
}
ATerm say_1 (ATerm t, ATerm w_83 (ATerm))
{
  ATerm u_29;
  u_29 = t;
  {
    t = w_83(t);
    t = debug_0(t);
  }
  t = u_29;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm j_93 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    ATerm v_29;
    v_29 = t;
    {
      ATerm d_40 = NULL;
      ATerm e_40 = NULL;
      t = term_h_21;
      {
        t = get_config_0(t);
        {
          e_40 = t;
          if(((d_40 != NULL) && (d_40 != e_40)))
            _fail(e_40);
          else
            d_40 = e_40;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_40), term_j_12);
        t = geq_0(t);
      }
    }
    t = v_29;
    t = j_93(t);
    return(t);
  }
  t = try_1(t, q_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm l_93 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    ATerm w_29;
    w_29 = t;
    {
      ATerm h_40 = NULL;
      ATerm i_40 = NULL;
      t = term_h_21;
      {
        t = get_config_0(t);
        {
          i_40 = t;
          if(((h_40 != NULL) && (h_40 != i_40)))
            _fail(i_40);
          else
            h_40 = i_40;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_40), term_f_12);
        t = geq_0(t);
      }
    }
    t = w_29;
    t = l_93(t);
    return(t);
  }
  t = try_1(t, r_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  q_40 = t;
  p_40 :
  if(match_cons(q_40, sym__2))
    {
      r_40 = ATgetArgument(q_40, 0);
      s_40 = ATgetArgument(q_40, 1);
      if(((r_40 != NULL) && (r_40 != s_40)))
        _fail(s_40);
      else
        r_40 = s_40;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm e_76 (ATerm), ATerm f_76 (ATerm))
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
  y_40 = t;
  x_40 :
  if(((ATgetType(y_40) == AT_LIST) && !(ATisEmpty(y_40))))
    {
      z_40 = ATgetFirst((ATermList) y_40);
      a_41 = (ATerm) ATgetNext((ATermList) y_40);
      {
        t = f_76(t);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm d_41 = NULL;
            d_41 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_40), not_null(d_41));
              t = e_76(t);
            }
            return(t);
          }
          t = fetch_1(t, s_1);
        }
        t = not_null(a_41);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm a_76 (ATerm))
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
  j_41 = t;
  i_41 :
  if(match_cons(j_41, sym__2))
    {
      k_41 = ATgetArgument(j_41, 0);
      l_41 = ATgetArgument(j_41, 1);
      {
        t = not_null(k_41);
        {
          ATerm p_41 (ATerm t)
          {
            ATerm x_29 = t;
            int d_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(l_41);
                ;
                LocalPopChoice(d_30);
              }
            else
              {
                t = x_29;
                {
                  ATerm e_30 = t;
                  int g_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_1 (ATerm t)
                      {
                        t = not_null(l_41);
                        return(t);
                      }
                      t = HdMember_p__2(t, a_76, t_1);
                      t = p_41(t);
                      ;
                      LocalPopChoice(g_30);
                    }
                  else
                    {
                      t = e_30;
                      t = Cons_2(t, _id, p_41);
                    }
                }
              }
            return(t);
          }
          t = p_41(t);
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
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL;
  u_41 = t;
  t_41 :
  if(match_cons(u_41, sym__3))
    {
      v_41 = ATgetArgument(u_41, 0);
      w_41 = ATgetArgument(u_41, 1);
      x_41 = ATgetArgument(u_41, 2);
      {
        ATerm h_30;
        h_30 = t;
        {
          ATerm e_42 = NULL;
          ATerm f_42 = NULL,h_42 = NULL;
          ATerm g_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_41), not_null(w_41));
          {
            ATerm i_30 = t;
            int j_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(j_30);
              }
            else
              {
                t = i_30;
                t = (ATerm) ATempty;
              }
            {
              g_42 = t;
              if(((f_42 != NULL) && (f_42 != g_42)))
                _fail(g_42);
              else
                f_42 = g_42;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_42), not_null(x_41));
            {
              t = union_0(t);
              {
                h_42 = t;
                if(((e_42 != NULL) && (e_42 != h_42)))
                  _fail(h_42);
                else
                  e_42 = h_42;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_41), not_null(w_41), not_null(e_42));
            t = set_0(t);
          }
        }
        t = h_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm b_80 (ATerm))
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  v_42 = t;
  u_42 :
  if(match_cons(v_42, sym__2))
    {
      w_42 = ATgetArgument(v_42, 0);
      x_42 = ATgetArgument(v_42, 1);
      {
        t = not_null(x_42);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
            a_43 = t;
            t_42 :
            if(match_cons(a_43, sym__2))
              {
                b_43 = ATgetArgument(a_43, 0);
                c_43 = ATgetArgument(a_43, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(w_42), not_null(b_43), not_null(c_43));
                  t = b_80(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, u_1);
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
  ATerm k_43 = NULL,l_43 = NULL;
  ATerm r_43 (ATerm t)
  {
    t = SSL_fclose(not_null(l_43));
    return(t);
  }
  l_43 = t;
  j_43 :
  if(match_cons(l_43, sym_Stream_1))
    {
      k_43 = ATgetArgument(l_43, 0);
      {
        ATerm k_30 = t;
        int l_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(k_43));
            ;
            LocalPopChoice(l_30);
          }
        else
          {
            t = k_30;
            t = r_43(t);
          }
      }
    }
  else
    {
      t = r_43(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL;
  u_43 = t;
  t_43 :
  if(match_cons(u_43, sym_Stream_1))
    {
      v_43 = ATgetArgument(u_43, 0);
      t = SSL_read_term_from_stream(not_null(v_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
  b_44 = t;
  a_44 :
  if(match_cons(b_44, sym__2))
    {
      c_44 = ATgetArgument(b_44, 0);
      d_44 = ATgetArgument(b_44, 1);
      {
        ATerm g_44 = NULL;
        t = SSL_fopen(not_null(c_44), not_null(d_44));
        {
          ATerm h_44 = NULL;
          h_44 = t;
          if(((g_44 != NULL) && (g_44 != h_44)))
            _fail(h_44);
          else
            g_44 = h_44;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_44));
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
  ATerm l_44 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm m_44 = NULL;
    m_44 = t;
    if(((l_44 != NULL) && (l_44 != m_44)))
      _fail(m_44);
    else
      l_44 = m_44;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_44));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm p_44 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm q_44 = NULL;
    q_44 = t;
    if(((p_44 != NULL) && (p_44 != q_44)))
      _fail(q_44);
    else
      p_44 = q_44;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_44));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm t_44 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm u_44 = NULL;
    u_44 = t;
    if(((t_44 != NULL) && (t_44 != u_44)))
      _fail(u_44);
    else
      t_44 = u_44;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_44));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm c_45 = NULL;
  c_45 = t;
  b_45 :
  if(match_cons(c_45, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(c_45, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(c_45, sym_stdin_0))
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
  ATerm e_46 = NULL;
  ATerm g_46 = NULL,h_46 = NULL;
  e_46 = t;
  {
    ATerm l_46 = NULL;
    ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
    t = not_null(e_46);
    {
      l_46 = t;
      {
        t = SSL_explode_term(not_null(l_46));
        {
          n_46 = t;
          v_45 :
          if(match_cons(n_46, sym__2))
            {
              o_46 = ATgetArgument(n_46, 0);
              p_46 = ATgetArgument(n_46, 1);
              w_45 :
              if(match_string(o_46, ""))
                {
                  x_45 :
                  if(((ATgetType(p_46) == AT_LIST) && !(ATisEmpty(p_46))))
                    {
                      q_46 = ATgetFirst((ATermList) p_46);
                      r_46 = (ATerm) ATgetNext((ATermList) p_46);
                      {
                        if(((h_46 != NULL) && (h_46 != q_46)))
                          _fail(q_46);
                        else
                          h_46 = q_46;
                        if(((g_46 != NULL) && (g_46 != r_46)))
                          _fail(r_46);
                        else
                          g_46 = r_46;
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
    t = not_null(h_46);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL;
  z_46 = t;
  y_46 :
  if(match_cons(z_46, sym__2))
    {
      a_47 = ATgetArgument(z_46, 0);
      b_47 = ATgetArgument(z_46, 1);
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
            {
              ATerm s_30 = t;
              int t_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_1 (ATerm t)
                  {
                    ATerm c_47 = NULL,d_47 = NULL;
                    c_47 = t;
                    x_46 :
                    if(match_cons(c_47, sym_Path_1))
                      {
                        d_47 = ATgetArgument(c_47, 0);
                        t = not_null(d_47);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, v_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(t_30);
                }
              else
                {
                  t = s_30;
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
  ATerm q_47 = NULL;
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_47 = NULL;
      ATerm p_47 = NULL;
      p_47 = t;
      if(((o_47 != NULL) && (o_47 != p_47)))
        _fail(p_47);
      else
        o_47 = p_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_47), term_w_30);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      {
        ATerm w_1 (ATerm t)
        {
          t = term_b_31;
          return(t);
        }
        t = debug_1(t, w_1);
        _fail(t);
      }
    }
  {
    ATerm c_31;
    c_31 = t;
    {
      ATerm r_47 = NULL;
      t = read_from_stream_0(t);
      {
        r_47 = t;
        if(((q_47 != NULL) && (q_47 != r_47)))
          _fail(r_47);
        else
          q_47 = r_47;
      }
    }
    t = c_31;
    {
      t = fclose_0(t);
      t = not_null(q_47);
    }
  }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm z_47 = NULL;
  ATerm a_48 = NULL;
  a_48 = t;
  if(((z_47 != NULL) && (z_47 != a_48)))
    _fail(a_48);
  else
    z_47 = a_48;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_47), (ATerm) ATinsert(ATempty, term_d_31));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(g_31);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = f_31;
      {
        ATerm h_31 = t;
        int m_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_31 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_31;
              }
            {
              ATerm x_1 (ATerm t)
              {
                t = term_o_31;
                return(t);
              }
              t = debug_1(t, x_1);
            }
            ;
            LocalPopChoice(m_31);
          }
        else
          {
            t = h_31;
            {
              ATerm b_2 (ATerm t)
              {
                t = term_p_31;
                return(t);
              }
              t = debug_1(t, b_2);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm e_48 = NULL;
  ATerm g_48 = NULL;
  e_48 = t;
  {
    ATerm c_2 (ATerm t)
    {
      ATerm d_2 (ATerm t)
      {
        t = term_q_31;
        return(t);
      }
      t = debug_1(t, d_2);
      return(t);
    }
    t = if_verbose5_1(t, c_2);
    {
      ATerm r_31 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_29, (ATerm) ATmakeAppl(sym_Imported_1, not_null(e_48)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_31;
        }
      {
        ATerm s_31;
        s_31 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_29, term_t_31, (ATerm) ATinsert(ATempty, not_null(e_48)));
          t = table_put_0(t);
        }
        t = s_31;
        {
          ATerm e_2 (ATerm t)
          {
            ATerm f_2 (ATerm t)
            {
              t = term_u_31;
              return(t);
            }
            t = debug_1(t, f_2);
            return(t);
          }
          t = if_verbose4_1(t, e_2);
          {
            t = read_repository_file_0(t);
            {
              ATerm g_2 (ATerm t)
              {
                ATerm h_2 (ATerm t)
                {
                  t = term_v_31;
                  return(t);
                }
                t = say_1(t, h_2);
                return(t);
              }
              t = if_verbose6_1(t, g_2);
              {
                ATerm h_48 = NULL;
                h_48 = t;
                if(((g_48 != NULL) && (g_48 != h_48)))
                  _fail(h_48);
                else
                  g_48 = h_48;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_29, not_null(g_48));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm i_2 (ATerm t)
                      {
                        ATerm j_2 (ATerm t)
                        {
                          t = term_w_31;
                          return(t);
                        }
                        t = say_1(t, j_2);
                        return(t);
                      }
                      t = if_verbose6_1(t, i_2);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_a_29, (ATerm)ATmakeAppl(sym_Imported_1, not_null(e_48)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm k_2 (ATerm t)
                            {
                              ATerm l_2 (ATerm t)
                              {
                                t = term_v_31;
                                return(t);
                              }
                              t = say_1(t, l_2);
                              return(t);
                            }
                            t = if_verbose4_1(t, k_2);
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
  ATerm l_48 = NULL;
  l_48 = t;
  t = SSL_getenv(not_null(l_48));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_31;
      t = get_config_0(t);
      ;
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      {
        ATerm a_32 = t;
        int c_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_32;
            t = getenv_0(t);
            ;
            LocalPopChoice(c_32);
          }
        else
          {
            t = a_32;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      t = term_e_32;
      return(t);
    }
    t = debug_1(t, n_2);
    return(t);
  }
  t = if_verbose5_1(t, m_2);
  {
    ATerm f_32;
    f_32 = t;
    {
      ATerm g_32 = t;
      int h_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_n_32;
          t = table_get_0(t);
          ;
          LocalPopChoice(h_32);
        }
      else
        {
          t = g_32;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = f_32;
    {
      ATerm o_2 (ATerm t)
      {
        ATerm p_2 (ATerm t)
        {
          t = term_q_32;
          return(t);
        }
        t = debug_1(t, p_2);
        return(t);
      }
      t = if_verbose5_1(t, o_2);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        ATerm r_2 (ATerm t)
        {
          t = term_v_32;
          return(t);
        }
        t = debug_1(t, r_2);
        return(t);
      }
      t = if_verbose5_1(t, q_2);
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
            ATerm v_2 (ATerm t)
            {
              ATerm w_2 (ATerm t)
              {
                t = term_v_32;
                return(t);
              }
              t = debug_1(t, w_2);
              return(t);
            }
            t = if_verbose5_1(t, v_2);
          }
        }
      }
      ;
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      {
        ATerm p_48 = NULL;
        ATerm q_48 = NULL;
        q_48 = t;
        if(((p_48 != NULL) && (p_48 != q_48)))
          _fail(q_48);
        else
          p_48 = q_48;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_32), not_null(p_48)), term_y_32);
          {
            t = error_0(t);
            {
              ATerm x_2 (ATerm t)
              {
                t = term_a_29;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm c_3 (ATerm t)
                    {
                      t = term_c_33;
                      return(t);
                    }
                    t = debug_1(t, c_3);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, x_2);
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
ATerm xtc_command_1 (ATerm t, ATerm d_95 (ATerm))
{
  ATerm u_48 = NULL;
  ATerm d_33;
  d_33 = t;
  {
    ATerm v_48 = NULL;
    t = d_95(t);
    {
      t = xtc_find_warning_0(t);
      {
        v_48 = t;
        if(((u_48 != NULL) && (u_48 != v_48)))
          _fail(v_48);
        else
          u_48 = v_48;
      }
    }
  }
  t = d_33;
  {
    ATerm e_33;
    e_33 = t;
    {
      ATerm w_48 = NULL;
      ATerm x_48 = NULL;
      x_48 = t;
      if(((w_48 != NULL) && (w_48 != x_48)))
        _fail(x_48);
      else
        w_48 = x_48;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_48), not_null(w_48));
        t = call_0(t);
      }
    }
    t = e_33;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm y_79 (ATerm))
{
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL;
  f_49 = t;
  e_49 :
  if(match_cons(f_49, sym__2))
    {
      g_49 = ATgetArgument(f_49, 0);
      h_49 = ATgetArgument(f_49, 1);
      {
        ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL;
        ATerm h_33;
        h_33 = t;
        {
          ATerm n_49 = NULL;
          ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL;
          t = y_79(t);
          {
            n_49 = t;
            {
              if(((k_49 != NULL) && (k_49 != n_49)))
                _fail(n_49);
              else
                k_49 = n_49;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(k_49), not_null(g_49), not_null(h_49));
                {
                  t = table_push_0(t);
                  {
                    ATerm m_33 = t;
                    int n_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_49), term_o_33);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(n_33);
                      }
                    else
                      {
                        t = m_33;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      o_49 = t;
                      d_49 :
                      if(((ATgetType(o_49) == AT_LIST) && !(ATisEmpty(o_49))))
                        {
                          p_49 = ATgetFirst((ATermList) o_49);
                          q_49 = (ATerm) ATgetNext((ATermList) o_49);
                          {
                            if(((l_49 != NULL) && (l_49 != p_49)))
                              _fail(p_49);
                            else
                              l_49 = p_49;
                            {
                              if(((m_49 != NULL) && (m_49 != q_49)))
                                _fail(q_49);
                              else
                                m_49 = q_49;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(k_49), term_o_33, (ATerm) ATinsert(CheckATermList(not_null(m_49)), (ATerm) ATinsert(CheckATermList(not_null(l_49)), not_null(g_49))));
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
        t = h_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm z_83 (ATerm))
{
  ATerm p_33;
  p_33 = t;
  {
    t = z_83(t);
    {
      ATerm d_3 (ATerm t)
      {
        t = term_q_33;
        return(t);
      }
      t = debug_1(t, d_3);
    }
  }
  t = p_33;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL;
  ATerm h_50 (ATerm t)
  {
    ATerm r_33 = t;
    if((PushChoice() == 0))
      {
        ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
        c_50 = t;
        w_49 :
        if(match_cons(c_50, sym__2))
          {
            d_50 = ATgetArgument(c_50, 0);
            e_50 = ATgetArgument(c_50, 1);
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
        t = r_33;
      }
    {
      ATerm e_3 (ATerm t)
      {
        t = term_s_33;
        return(t);
      }
      t = obsolete_1(t, e_3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_49), term_g_9);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm i_50 (ATerm t)
  {
    t = SSL_open_file(not_null(z_49), not_null(a_50));
    return(t);
  }
  y_49 = t;
  x_49 :
  if(match_cons(y_49, sym__2))
    {
      z_49 = ATgetArgument(y_49, 0);
      a_50 = ATgetArgument(y_49, 1);
      {
        ATerm t_33 = t;
        int u_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_50(t);
            ;
            LocalPopChoice(u_33);
          }
        else
          {
            t = t_33;
            t = i_50(t);
          }
      }
    }
  else
    {
      t = h_50(t);
    }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
  l_50 = t;
  k_50 :
  if(match_cons(l_50, sym__2))
    {
      m_50 = ATgetArgument(l_50, 0);
      n_50 = ATgetArgument(l_50, 1);
      t = SSL_access(not_null(m_50), not_null(n_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm s_50 = NULL;
  ATerm t_50 = NULL;
  t_50 = t;
  if(((s_50 != NULL) && (s_50 != t_50)))
    _fail(t_50);
  else
    s_50 = t_50;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_50), (ATerm) ATinsert(ATempty, term_v_33));
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
  ATerm w_50 = NULL;
  ATerm x_50 = NULL;
  t = term_y_7;
  {
    t = new_0(t);
    {
      x_50 = t;
      if(((w_50 != NULL) && (w_50 != x_50)))
        _fail(x_50);
      else
        w_50 = x_50;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_50), term_x_33);
    {
      t = conc_strings_0(t);
      {
        ATerm f_3 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, f_3);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm b_51 = NULL;
  t = new_file_0(t);
  {
    b_51 = t;
    {
      ATerm y_33;
      y_33 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_51), term_g_9);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_51), term_y_7);
            {
              ATerm g_3 (ATerm t)
              {
                t = term_v_8;
                return(t);
              }
              t = assert_1(t, g_3);
            }
          }
        }
      }
      t = y_33;
    }
  }
  return(t);
}
ATerm xtc_generate_2 (ATerm t, ATerm r_95 (ATerm), ATerm s_95 (ATerm))
{
  ATerm g_51 = NULL;
  ATerm h_51 = NULL;
  t = term_y_7;
  {
    ATerm i_51 = NULL;
    t = xtc_new_file_0(t);
    {
      h_51 = t;
      {
        if(((g_51 != NULL) && (g_51 != h_51)))
          _fail(h_51);
        else
          g_51 = h_51;
        {
          ATerm j_51 = NULL;
          t = s_95(t);
          {
            j_51 = t;
            if(((i_51 != NULL) && (i_51 != j_51)))
              _fail(j_51);
            else
              i_51 = j_51;
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_51), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_51)), term_h_9));
            {
              t = conc_0(t);
              {
                t = xtc_command_1(t, r_95);
                {
                  t = not_null(g_51);
                  t = close_file_0(t);
                }
              }
            }
          }
        }
      }
    }
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_51));
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL;
  o_51 = t;
  n_51 :
  if(match_cons(o_51, sym__2))
    {
      p_51 = ATgetArgument(o_51, 0);
      q_51 = ATgetArgument(o_51, 1);
      t = SSL_copy(not_null(p_51), not_null(q_51));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm y_51 = NULL;
  y_51 = t;
  x_51 :
  if(match_cons(y_51, sym_stderr_0))
    {
      ATerm a_52 = NULL,c_52 = NULL;
      ATerm z_33;
      z_33 = t;
      {
        ATerm b_52 = NULL;
        t = SSLgetAnnotations(not_null(y_51));
        {
          b_52 = t;
          if(((a_52 != NULL) && (a_52 != b_52)))
            _fail(b_52);
          else
            a_52 = b_52;
        }
      }
      t = z_33;
      {
        ATerm d_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(a_52));
        {
          d_52 = t;
          if(((c_52 != NULL) && (c_52 != d_52)))
            _fail(d_52);
          else
            c_52 = d_52;
        }
        t = not_null(c_52);
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
  ATerm l_52 = NULL;
  l_52 = t;
  k_52 :
  if(match_cons(l_52, sym_stdout_0))
    {
      ATerm n_52 = NULL,r_52 = NULL;
      ATerm f_34;
      f_34 = t;
      {
        ATerm q_52 = NULL;
        t = SSLgetAnnotations(not_null(l_52));
        {
          q_52 = t;
          if(((n_52 != NULL) && (n_52 != q_52)))
            _fail(q_52);
          else
            n_52 = q_52;
        }
      }
      t = f_34;
      {
        ATerm s_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(n_52));
        {
          s_52 = t;
          if(((r_52 != NULL) && (r_52 != s_52)))
            _fail(s_52);
          else
            r_52 = s_52;
        }
        t = not_null(r_52);
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
  ATerm k_53 = NULL,l_53 = NULL;
  k_53 = t;
  j_53 :
  if(match_cons(k_53, sym_FILE_1))
    {
      l_53 = ATgetArgument(k_53, 0);
      {
        ATerm j_34 = t;
        int k_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_53 = NULL;
            ATerm o_53 = NULL;
            t = m_0(t);
            {
              o_53 = t;
              {
                if(((n_53 != NULL) && (n_53 != o_53)))
                  _fail(o_53);
                else
                  n_53 = o_53;
                {
                  ATerm l_34 = t;
                  int n_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(n_34);
                    }
                  else
                    {
                      t = l_34;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_53), not_null(n_53));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_53));
            ;
            LocalPopChoice(k_34);
          }
        else
          {
            t = j_34;
            {
              ATerm o_34 = t;
              int p_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_53 = NULL;
                  ATerm r_53 = NULL;
                  t = m_0(t);
                  {
                    r_53 = t;
                    {
                      if(((q_53 != NULL) && (q_53 != r_53)))
                        _fail(r_53);
                      else
                        q_53 = r_53;
                      {
                        ATerm q_34 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm r_34 = t;
                            int s_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(s_34);
                              }
                            else
                              {
                                t = r_34;
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
                                        ATerm s_53 = NULL;
                                        s_53 = t;
                                        if(((l_53 != NULL) && (l_53 != s_53)))
                                          _fail(s_53);
                                        else
                                          l_53 = s_53;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = q_34;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_53), not_null(q_53));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_53));
                  ;
                  LocalPopChoice(p_34);
                }
              else
                {
                  t = o_34;
                  {
                    ATerm u_53 = NULL;
                    t = m_0(t);
                    {
                      u_53 = t;
                      if(((l_53 != NULL) && (l_53 != u_53)))
                        _fail(u_53);
                      else
                        l_53 = u_53;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_53));
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
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL;
  e_54 = t;
  d_54 :
  if(((ATgetType(e_54) == AT_LIST) && !(ATisEmpty(e_54))))
    {
      f_54 = ATgetFirst((ATermList) e_54);
      g_54 = (ATerm) ATgetNext((ATermList) e_54);
      t = not_null(g_54);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL;
  m_54 = t;
  l_54 :
  if(match_cons(m_54, sym__2))
    {
      n_54 = ATgetArgument(m_54, 0);
      o_54 = ATgetArgument(m_54, 1);
      {
        ATerm v_34;
        v_34 = t;
        {
          ATerm r_54 = NULL;
          ATerm s_54 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_54), not_null(o_54));
          {
            ATerm y_34 = t;
            int z_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(z_34);
              }
            else
              {
                t = y_34;
                t = (ATerm) ATempty;
              }
            {
              s_54 = t;
              if(((r_54 != NULL) && (r_54 != s_54)))
                _fail(s_54);
              else
                r_54 = s_54;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_54), not_null(o_54), not_null(r_54));
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
ATerm end_scope_1 (ATerm t, ATerm v_79 (ATerm))
{
  ATerm a_55 = NULL,b_55 = NULL,r_55 = NULL;
  ATerm a_35;
  a_35 = t;
  {
    ATerm s_55 = NULL;
    ATerm t_55 = NULL,u_55 = NULL,f_56 = NULL;
    t = v_79(t);
    {
      s_55 = t;
      {
        if(((r_55 != NULL) && (r_55 != s_55)))
          _fail(s_55);
        else
          r_55 = s_55;
        {
          ATerm b_35 = t;
          int c_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_55), term_o_33);
              t = table_get_0(t);
              ;
              LocalPopChoice(c_35);
            }
          else
            {
              t = b_35;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            t_55 = t;
            y_54 :
            if(((ATgetType(t_55) == AT_LIST) && !(ATisEmpty(t_55))))
              {
                u_55 = ATgetFirst((ATermList) t_55);
                f_56 = (ATerm) ATgetNext((ATermList) t_55);
                {
                  if(((b_55 != NULL) && (b_55 != u_55)))
                    _fail(u_55);
                  else
                    b_55 = u_55;
                  {
                    if(((a_55 != NULL) && (a_55 != f_56)))
                      _fail(f_56);
                    else
                      a_55 = f_56;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(r_55), term_o_33, not_null(a_55));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(b_55);
                          {
                            ATerm h_3 (ATerm t)
                            {
                              ATerm g_56 = NULL;
                              g_56 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_55), not_null(g_56));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, h_3);
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
  t = a_35;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm s_56 = NULL;
  s_56 = t;
  t = SSL_remove(not_null(s_56));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm y_70 (ATerm), ATerm z_70 (ATerm))
{
  ATerm d_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_70(t);
      t = z_70(t);
      ;
      LocalPopChoice(e_35);
    }
  else
    {
      t = d_35;
      {
        t = z_70(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm u_79 (ATerm))
{
  ATerm h_57 = NULL;
  ATerm f_35;
  f_35 = t;
  {
    ATerm i_57 = NULL;
    ATerm i_58 = NULL;
    t = u_79(t);
    {
      i_57 = t;
      {
        if(((h_57 != NULL) && (h_57 != i_57)))
          _fail(i_57);
        else
          h_57 = i_57;
        {
          ATerm l_58 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_57), term_o_33);
          {
            ATerm g_35 = t;
            int h_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(h_35);
              }
            else
              {
                t = g_35;
                t = (ATerm) ATempty;
              }
            {
              l_58 = t;
              if(((i_58 != NULL) && (i_58 != l_58)))
                _fail(l_58);
              else
                i_58 = l_58;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_57), term_o_33, (ATerm) ATinsert(CheckATermList(not_null(i_58)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = f_35;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm p_94 (ATerm))
{
  ATerm q_58 = NULL,r_58 = NULL;
  ATerm i_3 (ATerm t)
  {
    t = term_v_8;
    return(t);
  }
  t = begin_scope_1(t, i_3);
  {
    ATerm n_3 (ATerm t)
    {
      ATerm i_35;
      i_35 = t;
      {
        ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL;
        ATerm j_35 = t;
        int l_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_n_35;
            t = table_get_0(t);
            ;
            LocalPopChoice(l_35);
          }
        else
          {
            t = j_35;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          s_58 = t;
          p_58 :
          if(((ATgetType(s_58) == AT_LIST) && !(ATisEmpty(s_58))))
            {
              t_58 = ATgetFirst((ATermList) s_58);
              u_58 = (ATerm) ATgetNext((ATermList) s_58);
              {
                if(((r_58 != NULL) && (r_58 != t_58)))
                  _fail(t_58);
                else
                  r_58 = t_58;
                {
                  if(((q_58 != NULL) && (q_58 != u_58)))
                    _fail(u_58);
                  else
                    q_58 = u_58;
                  {
                    t = not_null(r_58);
                    {
                      ATerm o_3 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, o_3);
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
      t = i_35;
      {
        ATerm p_3 (ATerm t)
        {
          t = term_v_8;
          return(t);
        }
        t = end_scope_1(t, p_3);
      }
      return(t);
    }
    t = restore_always_2(t, p_94, n_3);
  }
  return(t);
}
ATerm xtc_output_1 (ATerm t, ATerm r_94 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    t = r_94(t);
    {
      ATerm s_3 (ATerm t)
      {
        ATerm o_35 = t;
        int p_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_h_9;
            t = get_config_0(t);
            ;
            LocalPopChoice(p_35);
          }
        else
          {
            t = o_35;
            t = term_b_21;
          }
        return(t);
      }
      t = copy_to_1(t, s_3);
    }
    return(t);
  }
  t = xtc_temp_files_1(t, q_3);
  return(t);
}
ATerm gen_css_0 (ATerm t)
{
  ATerm q_35;
  q_35 = t;
  {
    ATerm x_58 = NULL;
    t = term_r_35;
    {
      t = get_config_0(t);
      {
        x_58 = t;
        w_58 :
        if(!(match_string(x_58, "gen-css")))
          {
            _fail(t);
          }
      }
    }
  }
  t = q_35;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm u_3 (ATerm t)
      {
        t = term_s_35;
        return(t);
      }
      t = xtc_generate_2(t, u_3, pass_verbose_0);
      return(t);
    }
    t = xtc_output_1(t, t_3);
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
  d_59 = t;
  b_59 :
  if(match_string(d_59, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(d_59) == AT_LIST) && !(ATisEmpty(d_59))))
        {
          e_59 = ATgetFirst((ATermList) d_59);
          f_59 = (ATerm) ATgetNext((ATermList) d_59);
          c_59 :
          if(((ATgetType(f_59) == AT_LIST) && !(ATisEmpty(f_59))))
            {
              g_59 = ATgetFirst((ATermList) f_59);
              h_59 = (ATerm) ATgetNext((ATermList) f_59);
              {
                ATerm l_59 = NULL;
                ATerm t_35;
                t_35 = t;
                {
                  t = not_null(e_59);
                  t = j_0(t);
                }
                t = t_35;
                {
                  ATerm m_59 = NULL;
                  t = not_null(g_59);
                  {
                    t = k_0(t);
                    {
                      m_59 = t;
                      if(((l_59 != NULL) && (l_59 != m_59)))
                        _fail(m_59);
                      else
                        l_59 = m_59;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_59)), not_null(l_59));
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
  ATerm w_3 (ATerm t)
  {
    ATerm r_59 = NULL;
    r_59 = t;
    q_59 :
    if(!(match_string(r_59, "-v")))
      {
        if(!(match_string(r_59, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_v_35;
    t = set_config_0(t);
    t = term_w_35;
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_e_36;
    return(t);
  }
  t = Option_3(t, w_3, x_3, y_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm w_59 = NULL;
    w_59 = t;
    u_59 :
    if(!(match_string(w_59, "-k")))
      {
        if(!(match_string(w_59, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    ATerm i_36;
    i_36 = t;
    {
      ATerm x_59 = NULL;
      ATerm y_59 = NULL;
      t = string_to_int_0(t);
      {
        y_59 = t;
        if(((x_59 != NULL) && (x_59 != y_59)))
          _fail(y_59);
        else
          x_59 = y_59;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_36, not_null(x_59));
        t = set_config_0(t);
      }
    }
    t = i_36;
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_k_36;
    return(t);
  }
  t = ArgOption_3(t, z_3, a_4, b_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm b_60 = NULL;
  b_60 = t;
  t = SSL_string_to_int(not_null(b_60));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm l_36 = t;
  int m_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_4 (ATerm t)
      {
        ATerm j_60 = NULL;
        j_60 = t;
        e_60 :
        if(!(match_string(j_60, "-S")))
          {
            if(!(match_string(j_60, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_4 (ATerm t)
      {
        t = term_o_36;
        t = set_config_0(t);
        t = term_p_36;
        return(t);
      }
      ATerm h_4 (ATerm t)
      {
        t = term_q_36;
        return(t);
      }
      t = Option_3(t, f_4, g_4, h_4);
      ;
      LocalPopChoice(m_36);
    }
  else
    {
      t = l_36;
      {
        ATerm r_36 = t;
        int s_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_4 (ATerm t)
            {
              ATerm k_60 = NULL;
              k_60 = t;
              f_60 :
              if(!(match_string(k_60, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm j_4 (ATerm t)
            {
              ATerm n_60 = NULL;
              ATerm t_36;
              t_36 = t;
              {
                ATerm l_60 = NULL;
                ATerm m_60 = NULL;
                t = string_to_int_0(t);
                {
                  m_60 = t;
                  if(((l_60 != NULL) && (l_60 != m_60)))
                    _fail(m_60);
                  else
                    l_60 = m_60;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_21, not_null(l_60));
                  t = set_config_0(t);
                }
              }
              t = t_36;
              {
                ATerm o_60 = NULL;
                o_60 = t;
                if(((n_60 != NULL) && (n_60 != o_60)))
                  _fail(o_60);
                else
                  n_60 = o_60;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(n_60));
              }
              return(t);
            }
            ATerm k_4 (ATerm t)
            {
              t = term_u_36;
              return(t);
            }
            t = ArgOption_3(t, i_4, j_4, k_4);
            ;
            LocalPopChoice(s_36);
          }
        else
          {
            t = r_36;
            {
              ATerm m_4 (ATerm t)
              {
                ATerm p_60 = NULL;
                p_60 = t;
                i_60 :
                if(!(match_string(p_60, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm n_4 (ATerm t)
              {
                t = term_y_36;
                t = set_config_0(t);
                t = term_z_36;
                return(t);
              }
              ATerm o_4 (ATerm t)
              {
                t = term_a_37;
                return(t);
              }
              t = Option_3(t, m_4, n_4, o_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm b_37 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(c_37);
    }
  else
    {
      t = b_37;
      {
        ATerm d_37 = t;
        int g_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(g_37);
          }
        else
          {
            t = d_37;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    ATerm v_60 = NULL;
    v_60 = t;
    s_60 :
    if(!(match_string(v_60, "-o")))
      {
        if(!(match_string(v_60, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    ATerm y_60 = NULL;
    ATerm h_37;
    h_37 = t;
    {
      ATerm w_60 = NULL;
      ATerm x_60 = NULL;
      x_60 = t;
      if(((w_60 != NULL) && (w_60 != x_60)))
        _fail(x_60);
      else
        w_60 = x_60;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_9, not_null(w_60));
        t = set_config_0(t);
      }
    }
    t = h_37;
    {
      ATerm z_60 = NULL;
      z_60 = t;
      if(((y_60 != NULL) && (y_60 != z_60)))
        _fail(z_60);
      else
        y_60 = z_60;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_60));
    }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = term_i_37;
    return(t);
  }
  t = ArgOption_3(t, p_4, q_4, r_4);
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    ATerm f_61 = NULL;
    f_61 = t;
    c_61 :
    if(!(match_string(f_61, "-i")))
      {
        if(!(match_string(f_61, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    ATerm i_61 = NULL;
    ATerm j_37;
    j_37 = t;
    {
      ATerm g_61 = NULL;
      ATerm h_61 = NULL;
      h_61 = t;
      if(((g_61 != NULL) && (g_61 != h_61)))
        _fail(h_61);
      else
        g_61 = h_61;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_9, not_null(g_61));
        t = set_config_0(t);
      }
    }
    t = j_37;
    {
      ATerm j_61 = NULL;
      j_61 = t;
      if(((i_61 != NULL) && (i_61 != j_61)))
        _fail(j_61);
      else
        i_61 = j_61;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_61));
    }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_k_37;
    return(t);
  }
  t = ArgOption_3(t, t_4, a_5, b_5);
  return(t);
}
ATerm abox2html_options_0 (ATerm t)
{
  ATerm m_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(n_37);
    }
  else
    {
      t = m_37;
      {
        ATerm o_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0(t);
            ;
            LocalPopChoice(p_37);
          }
        else
          {
            t = o_37;
            {
              ATerm q_37 = t;
              int s_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0(t);
                  ;
                  LocalPopChoice(s_37);
                }
              else
                {
                  t = q_37;
                  {
                    ATerm u_37 = t;
                    int x_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_5 (ATerm t)
                        {
                          ATerm p_61 = NULL;
                          p_61 = t;
                          m_61 :
                          if(!(match_string(p_61, "-c")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm d_5 (ATerm t)
                        {
                          ATerm y_37;
                          y_37 = t;
                          {
                            t = term_a_38;
                            t = set_config_0(t);
                          }
                          t = y_37;
                          return(t);
                        }
                        ATerm e_5 (ATerm t)
                        {
                          t = term_d_38;
                          return(t);
                        }
                        t = Option_3(t, c_5, d_5, e_5);
                        ;
                        LocalPopChoice(x_37);
                      }
                    else
                      {
                        t = u_37;
                        {
                          ATerm j_5 (ATerm t)
                          {
                            ATerm q_61 = NULL;
                            q_61 = t;
                            n_61 :
                            if(!(match_string(q_61, "-t")))
                              {
                                if(!(match_string(q_61, "--title")))
                                  {
                                    _fail(t);
                                  }
                              }
                            return(t);
                          }
                          ATerm k_5 (ATerm t)
                          {
                            ATerm e_38;
                            e_38 = t;
                            {
                              ATerm r_61 = NULL;
                              ATerm s_61 = NULL;
                              s_61 = t;
                              if(((r_61 != NULL) && (r_61 != s_61)))
                                _fail(s_61);
                              else
                                r_61 = s_61;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_o_18, not_null(r_61));
                                t = set_config_0(t);
                              }
                            }
                            t = e_38;
                            return(t);
                          }
                          ATerm l_5 (ATerm t)
                          {
                            t = term_h_38;
                            return(t);
                          }
                          t = ArgOption_3(t, j_5, k_5, l_5);
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
ATerm default_usage_0 (ATerm t)
{
  ATerm i_38;
  i_38 = t;
  {
    ATerm v_61 = NULL;
    ATerm w_61 = NULL;
    t = term_y_7;
    {
      t = whoami_0(t);
      {
        w_61 = t;
        if(((v_61 != NULL) && (v_61 != w_61)))
          _fail(w_61);
        else
          v_61 = w_61;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_28, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_38), not_null(v_61)), term_j_38));
      {
        t = printnl_0(t);
        {
          t = term_r_11;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_38;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm z_61 = NULL;
  t = report_run_time_0(t);
  {
    ATerm a_62 = NULL;
    t = term_y_7;
    {
      t = whoami_0(t);
      {
        a_62 = t;
        if(((z_61 != NULL) && (z_61 != a_62)))
          _fail(a_62);
        else
          z_61 = a_62;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_28, (ATerm) ATinsert(ATinsert(ATempty, term_v_38), not_null(z_61)));
      {
        t = printnl_0(t);
        {
          t = term_r_11;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_w_38;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm d_62 = NULL;
  d_62 = t;
  t = SSL_TicksToSeconds(not_null(d_62));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL;
  i_62 = t;
  h_62 :
  if(match_cons(i_62, sym__2))
    {
      j_62 = ATgetArgument(i_62, 0);
      k_62 = ATgetArgument(i_62, 1);
      {
        ATerm x_38 = t;
        int y_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(j_62), not_null(k_62));
            ;
            LocalPopChoice(y_38);
          }
        else
          {
            t = x_38;
            t = SSL_addr(not_null(j_62), not_null(k_62));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_78 (ATerm), ATerm o_78 (ATerm))
{
  ATerm e_39 = t;
  int f_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_78(t);
      ;
      LocalPopChoice(f_39);
    }
  else
    {
      t = e_39;
      {
        ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL;
        r_62 = t;
        q_62 :
        if(((ATgetType(r_62) == AT_LIST) && !(ATisEmpty(r_62))))
          {
            s_62 = ATgetFirst((ATermList) r_62);
            t_62 = (ATerm) ATgetNext((ATermList) r_62);
            {
              ATerm w_62 = NULL;
              ATerm x_62 = NULL;
              t = not_null(t_62);
              {
                t = foldr_2(t, n_78, o_78);
                {
                  x_62 = t;
                  if(((w_62 != NULL) && (w_62 != x_62)))
                    _fail(x_62);
                  else
                    w_62 = x_62;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_62), not_null(w_62));
                t = o_78(t);
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
  ATerm e_63 = NULL;
  ATerm g_63 = NULL;
  e_63 = t;
  {
    ATerm h_63 = NULL;
    ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
    t = not_null(e_63);
    {
      h_63 = t;
      {
        t = SSL_explode_term(not_null(h_63));
        {
          j_63 = t;
          d_63 :
          if(match_cons(j_63, sym__2))
            {
              k_63 = ATgetArgument(j_63, 0);
              l_63 = ATgetArgument(j_63, 1);
              if(((g_63 != NULL) && (g_63 != l_63)))
                _fail(l_63);
              else
                g_63 = l_63;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(g_63);
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
    ATerm m_5 (ATerm t)
    {
      t = term_t_11;
      return(t);
    }
    t = crush_2(t, m_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm r_63 = NULL,s_63 = NULL,t_63 = NULL;
  r_63 = t;
  q_63 :
  if(match_cons(r_63, sym__2))
    {
      s_63 = ATgetArgument(r_63, 0);
      t_63 = ATgetArgument(r_63, 1);
      {
        ATerm k_39;
        k_39 = t;
        {
          ATerm l_39 = t;
          int m_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(s_63), not_null(t_63));
              ;
              LocalPopChoice(m_39);
            }
          else
            {
              t = l_39;
              t = SSL_gtr(not_null(s_63), not_null(t_63));
            }
        }
        t = k_39;
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
  ATerm z_63 = NULL;
  ATerm r_39 = t;
  int s_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL;
      a_64 = t;
      y_63 :
      if(match_cons(a_64, sym__2))
        {
          b_64 = ATgetArgument(a_64, 0);
          c_64 = ATgetArgument(a_64, 1);
          {
            if(((z_63 != NULL) && (z_63 != b_64)))
              _fail(b_64);
            else
              z_63 = b_64;
            if(((z_63 != NULL) && (z_63 != c_64)))
              _fail(c_64);
            else
              z_63 = c_64;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(s_39);
    }
  else
    {
      t = r_39;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_93 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm u_39;
    u_39 = t;
    {
      ATerm f_64 = NULL;
      ATerm g_64 = NULL;
      t = term_h_21;
      {
        t = get_config_0(t);
        {
          g_64 = t;
          if(((f_64 != NULL) && (f_64 != g_64)))
            _fail(g_64);
          else
            f_64 = g_64;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_64), term_r_11);
        t = geq_0(t);
      }
    }
    t = u_39;
    t = g_93(t);
    return(t);
  }
  t = try_1(t, n_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm k_64 = NULL,m_64 = NULL;
    ATerm v_39;
    v_39 = t;
    {
      ATerm l_64 = NULL;
      t = run_time_0(t);
      {
        l_64 = t;
        if(((k_64 != NULL) && (k_64 != l_64)))
          _fail(l_64);
        else
          k_64 = l_64;
      }
    }
    t = v_39;
    {
      ATerm n_64 = NULL;
      t = term_y_7;
      {
        t = whoami_0(t);
        {
          n_64 = t;
          if(((m_64 != NULL) && (m_64 != n_64)))
            _fail(n_64);
          else
            m_64 = n_64;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_39), not_null(k_64)), term_m_21), not_null(m_64)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, p_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_t_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_64 = NULL;
  w_64 = t;
  v_64 :
  if(match_cons(w_64, sym_Version_0))
    {
      ATerm y_64 = NULL,a_65 = NULL;
      ATerm x_39;
      x_39 = t;
      {
        ATerm z_64 = NULL;
        t = SSLgetAnnotations(not_null(w_64));
        {
          z_64 = t;
          if(((y_64 != NULL) && (y_64 != z_64)))
            _fail(z_64);
          else
            y_64 = z_64;
        }
      }
      t = x_39;
      {
        ATerm b_65 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_64));
        {
          b_65 = t;
          if(((a_65 != NULL) && (a_65 != b_65)))
            _fail(b_65);
          else
            a_65 = b_65;
        }
        t = not_null(a_65);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_66 (ATerm))
{
  ATerm y_39 = t;
  int b_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_40;
      t = get_config_0(t);
      ;
      LocalPopChoice(b_40);
    }
  else
    {
      t = y_39;
      {
        ATerm s_5 (ATerm t)
        {
          ATerm f_40 = t;
          int g_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(g_40);
            }
          else
            {
              t = f_40;
              {
                ATerm j_40 = t;
                int k_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(k_40);
                  }
                else
                  {
                    t = j_40;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, s_5);
      }
    }
  t = r_66(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_65 = NULL;
  g_65 = t;
  t = SSL_table_create(not_null(g_65));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_65 = NULL;
  k_65 = t;
  {
    ATerm l_40;
    l_40 = t;
    {
      t = term_m_40;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_40, term_n_40, not_null(k_65));
          t = table_put_0(t);
        }
      }
    }
    t = l_40;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm p_65 = NULL;
  p_65 = t;
  t = SSL_table_destroy(not_null(p_65));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_65 = NULL;
  t_65 = t;
  t = SSL_exit(not_null(t_65));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL;
  x_65 = t;
  w_65 :
  if(((ATgetType(x_65) == AT_LIST) && ATisEmpty(x_65)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(x_65) == AT_LIST) && !(ATisEmpty(x_65))))
        {
          y_65 = ATgetFirst((ATermList) x_65);
          z_65 = (ATerm) ATgetNext((ATermList) x_65);
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
  ATerm o_40;
  o_40 = t;
  {
    ATerm c_66 = NULL;
    ATerm f_66 = NULL;
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(u_40);
      }
    else
      {
        t = t_40;
        {
          ATerm d_66 = NULL;
          ATerm e_66 = NULL;
          e_66 = t;
          if(((d_66 != NULL) && (d_66 != e_66)))
            _fail(e_66);
          else
            d_66 = e_66;
          t = (ATerm) ATinsert(ATempty, not_null(d_66));
        }
      }
    {
      f_66 = t;
      if(((c_66 != NULL) && (c_66 != f_66)))
        _fail(f_66);
      else
        c_66 = f_66;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_21, not_null(c_66));
      t = printnl_0(t);
    }
  }
  t = o_40;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL;
  q_66 = t;
  n_66 :
  if(((ATgetType(q_66) == AT_LIST) && !(ATisEmpty(q_66))))
    {
      o_66 = ATgetFirst((ATermList) q_66);
      p_66 = (ATerm) ATgetNext((ATermList) q_66);
      {
        ATerm a_67 = NULL;
        t = not_null(p_66);
        {
          ATerm v_40;
          v_40 = t;
          {
            ATerm b_67 = NULL,d_67 = NULL,f_67 = NULL;
            ATerm w_40;
            w_40 = t;
            {
              ATerm c_67 = NULL;
              t = i_0(t);
              {
                c_67 = t;
                if(((b_67 != NULL) && (b_67 != c_67)))
                  _fail(c_67);
                else
                  b_67 = c_67;
              }
            }
            t = w_40;
            {
              ATerm e_67 = NULL;
              t = not_null(o_66);
              {
                t = g_0(t);
                {
                  e_67 = t;
                  if(((d_67 != NULL) && (d_67 != e_67)))
                    _fail(e_67);
                  else
                    d_67 = e_67;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(b_67)), not_null(d_67));
                {
                  f_67 = t;
                  if(((a_67 != NULL) && (a_67 != f_67)))
                    _fail(f_67);
                  else
                    a_67 = f_67;
                }
              }
            }
          }
          t = v_40;
          {
            ATerm t_5 (ATerm t)
            {
              t = not_null(a_67);
              return(t);
            }
            t = reverse_acc_2(t, g_0, t_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(q_66) == AT_LIST) && ATisEmpty(q_66)))
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
  ATerm u_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_64 (ATerm))
{
  ATerm r_67 = NULL,s_67 = NULL;
  r_67 = t;
  q_67 :
  if(match_cons(r_67, sym_Program_1))
    {
      s_67 = ATgetArgument(r_67, 0);
      {
        ATerm v_67 = NULL,x_67 = NULL;
        ATerm w_67 = NULL;
        t = SSLgetAnnotations(not_null(r_67));
        {
          w_67 = t;
          if(((v_67 != NULL) && (v_67 != w_67)))
            _fail(w_67);
          else
            v_67 = w_67;
        }
        {
          t = not_null(s_67);
          {
            ATerm z_67 = NULL;
            t = r_64(t);
            {
              x_67 = t;
              {
                ATerm a_68 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_67)), not_null(v_67));
                {
                  a_68 = t;
                  if(((z_67 != NULL) && (z_67 != a_68)))
                    _fail(a_68);
                  else
                    z_67 = a_68;
                }
                t = not_null(z_67);
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
  ATerm j_68 = NULL;
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_68 = NULL;
      t = term_w_38;
      {
        t = get_config_0(t);
        {
          k_68 = t;
          if(((j_68 != NULL) && (j_68 != k_68)))
            _fail(k_68);
          else
            j_68 = k_68;
        }
      }
      ;
      LocalPopChoice(c_41);
    }
  else
    {
      t = b_41;
      {
        ATerm v_5 (ATerm t)
        {
          ATerm w_5 (ATerm t)
          {
            ATerm l_68 = NULL;
            l_68 = t;
            if(((j_68 != NULL) && (j_68 != l_68)))
              _fail(l_68);
            else
              j_68 = l_68;
            return(t);
          }
          t = Program_1(t, w_5);
          return(t);
        }
        t = option_defined_1(t, v_5);
      }
    }
  {
    ATerm x_5 (ATerm t)
    {
      ATerm d_6 (ATerm t)
      {
        t = not_null(j_68);
        return(t);
      }
      t = short_description_1(t, d_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, x_5);
    {
      t = term_e_41;
      {
        t = echo_0(t);
        {
          t = term_h_41;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_6 (ATerm t)
                {
                  ATerm m_68 = NULL;
                  ATerm n_68 = NULL;
                  n_68 = t;
                  if(((m_68 != NULL) && (m_68 != n_68)))
                    _fail(n_68);
                  else
                    m_68 = n_68;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_68)), term_m_41);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_6);
                {
                  ATerm h_6 (ATerm t)
                  {
                    ATerm o_68 = NULL;
                    ATerm p_68 = NULL;
                    ATerm i_6 (ATerm t)
                    {
                      t = not_null(j_68);
                      return(t);
                    }
                    t = long_description_1(t, i_6);
                    {
                      p_68 = t;
                      if(((o_68 != NULL) && (o_68 != p_68)))
                        _fail(p_68);
                      else
                        o_68 = p_68;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(o_68)), term_n_41);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_6);
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
  ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL;
  w_68 = t;
  v_68 :
  if(match_cons(w_68, sym__2))
    {
      x_68 = ATgetArgument(w_68, 0);
      y_68 = ATgetArgument(w_68, 1);
      {
        ATerm o_41;
        o_41 = t;
        t = SSL_printnl(not_null(x_68), not_null(y_68));
        t = o_41;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm h_69 = NULL,i_69 = NULL;
  h_69 = t;
  g_69 :
  if(match_cons(h_69, sym_Undefined_1))
    {
      i_69 = ATgetArgument(h_69, 0);
      {
        ATerm l_69 = NULL,n_69 = NULL;
        ATerm m_69 = NULL;
        t = SSLgetAnnotations(not_null(h_69));
        {
          m_69 = t;
          if(((l_69 != NULL) && (l_69 != m_69)))
            _fail(m_69);
          else
            l_69 = m_69;
        }
        {
          t = not_null(i_69);
          {
            ATerm p_69 = NULL;
            t = s_64(t);
            {
              n_69 = t;
              {
                ATerm q_69 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_69)), not_null(l_69));
                {
                  q_69 = t;
                  if(((p_69 != NULL) && (p_69 != q_69)))
                    _fail(q_69);
                  else
                    p_69 = q_69;
                }
                t = not_null(p_69);
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
ATerm fetch_1 (ATerm t, ATerm k_72 (ATerm))
{
  ATerm v_69 (ATerm t)
  {
    ATerm q_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_72, _id);
        ;
        LocalPopChoice(r_41);
      }
    else
      {
        t = q_41;
        t = Cons_2(t, _id, v_69);
      }
    return(t);
  }
  t = v_69(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_85 (ATerm))
{
  t = fetch_1(t, k_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_70 = NULL;
  a_70 = t;
  z_69 :
  if(match_cons(a_70, sym_Help_0))
    {
      ATerm c_70 = NULL,e_70 = NULL;
      ATerm s_41;
      s_41 = t;
      {
        ATerm d_70 = NULL;
        t = SSLgetAnnotations(not_null(a_70));
        {
          d_70 = t;
          if(((c_70 != NULL) && (c_70 != d_70)))
            _fail(d_70);
          else
            c_70 = d_70;
        }
      }
      t = s_41;
      {
        ATerm f_70 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_70));
        {
          f_70 = t;
          if(((e_70 != NULL) && (e_70 != f_70)))
            _fail(f_70);
          else
            e_70 = f_70;
        }
        t = not_null(e_70);
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
  ATerm l_70 = NULL;
  l_70 = t;
  t = SSL_implode_string(not_null(l_70));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_41 = t;
  int z_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(z_41);
    }
  else
    {
      t = y_41;
      {
        ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL;
        q_70 = t;
        p_70 :
        if(((ATgetType(q_70) == AT_LIST) && !(ATisEmpty(q_70))))
          {
            r_70 = ATgetFirst((ATermList) q_70);
            s_70 = (ATerm) ATgetNext((ATermList) q_70);
            {
              t = not_null(r_70);
              {
                ATerm j_6 (ATerm t)
                {
                  t = not_null(s_70);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, j_6);
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
  ATerm g_71 = NULL;
  ATerm i_71 = NULL;
  g_71 = t;
  {
    ATerm j_71 = NULL;
    ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
    t = not_null(g_71);
    {
      j_71 = t;
      {
        t = SSL_explode_term(not_null(j_71));
        {
          l_71 = t;
          e_71 :
          if(match_cons(l_71, sym__2))
            {
              m_71 = ATgetArgument(l_71, 0);
              n_71 = ATgetArgument(l_71, 1);
              f_71 :
              if(match_string(m_71, ""))
                {
                  if(((i_71 != NULL) && (i_71 != n_71)))
                    _fail(n_71);
                  else
                    i_71 = n_71;
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
      t = not_null(i_71);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_72 (ATerm))
{
  ATerm r_71 (ATerm t)
  {
    ATerm a_42 = t;
    int b_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_71);
        ;
        LocalPopChoice(b_42);
      }
    else
      {
        t = a_42;
        {
          t = Nil_0(t);
          t = q_72(t);
        }
      }
    return(t);
  }
  t = r_71(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL;
  u_71 = t;
  t_71 :
  if(match_cons(u_71, sym__2))
    {
      v_71 = ATgetArgument(u_71, 0);
      w_71 = ATgetArgument(u_71, 1);
      {
        t = not_null(v_71);
        {
          ATerm k_6 (ATerm t)
          {
            t = not_null(w_71);
            return(t);
          }
          t = at_end_1(t, k_6);
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
  ATerm c_42 = t;
  int d_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(d_42);
    }
  else
    {
      t = c_42;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm e_72 = NULL;
  e_72 = t;
  t = SSL_explode_string(not_null(e_72));
  return(t);
}
ATerm _2 (ATerm t, ATerm j_58 (ATerm), ATerm k_58 (ATerm))
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL;
  s_72 = t;
  p_72 :
  if(match_cons(s_72, sym__2))
    {
      t_72 = ATgetArgument(s_72, 0);
      u_72 = ATgetArgument(s_72, 1);
      {
        ATerm y_72 = NULL,a_73 = NULL;
        ATerm z_72 = NULL;
        t = SSLgetAnnotations(not_null(s_72));
        {
          z_72 = t;
          if(((y_72 != NULL) && (y_72 != z_72)))
            _fail(z_72);
          else
            y_72 = z_72;
        }
        {
          t = not_null(t_72);
          {
            ATerm c_73 = NULL;
            t = j_58(t);
            {
              a_73 = t;
              {
                t = not_null(u_72);
                {
                  ATerm e_73 = NULL;
                  t = k_58(t);
                  {
                    c_73 = t;
                    {
                      ATerm f_73 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(a_73), not_null(c_73)), not_null(y_72));
                      {
                        f_73 = t;
                        if(((e_73 != NULL) && (e_73 != f_73)))
                          _fail(f_73);
                        else
                          e_73 = f_73;
                      }
                      t = not_null(e_73);
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
ATerm debug_1 (ATerm t, ATerm s_83 (ATerm))
{
  ATerm i_42;
  i_42 = t;
  {
    ATerm n_73 = NULL,p_73 = NULL;
    ATerm j_42;
    j_42 = t;
    {
      ATerm o_73 = NULL;
      t = s_83(t);
      {
        o_73 = t;
        if(((n_73 != NULL) && (n_73 != o_73)))
          _fail(o_73);
        else
          n_73 = o_73;
      }
    }
    t = j_42;
    {
      ATerm q_73 = NULL;
      q_73 = t;
      if(((p_73 != NULL) && (p_73 != q_73)))
        _fail(q_73);
      else
        p_73 = q_73;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_73)), not_null(n_73)));
        t = printnl_0(t);
      }
    }
  }
  t = i_42;
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_72 (ATerm))
{
  ATerm t_73 (ATerm t)
  {
    ATerm k_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(l_42);
      }
    else
      {
        t = k_42;
        t = Cons_2(t, b_72, t_73);
      }
    return(t);
  }
  t = t_73(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm v_73 = NULL;
  v_73 = t;
  t = SSL_is_string(not_null(v_73));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm m_42 = t;
  int n_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(n_42);
    }
  else
    {
      t = m_42;
      {
        ATerm o_42 = t;
        int p_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_6);
            ;
            LocalPopChoice(p_42);
          }
        else
          {
            t = o_42;
            {
              ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL;
              e_74 = t;
              d_74 :
              if(match_cons(e_74, sym_Path_1))
                {
                  f_74 = ATgetArgument(e_74, 0);
                  t = not_null(f_74);
                }
              else
                {
                  if(match_cons(e_74, sym_Var_1))
                    {
                      f_74 = ATgetArgument(e_74, 0);
                      {
                        t = not_null(f_74);
                        {
                          ATerm q_42 = t;
                          int r_42 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(r_42);
                            }
                          else
                            {
                              t = q_42;
                              {
                                ATerm s_6 (ATerm t)
                                {
                                  t = term_s_42;
                                  return(t);
                                }
                                t = debug_1(t, s_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(e_74, sym_Prefix_2))
                        {
                          f_74 = ATgetArgument(e_74, 0);
                          g_74 = ATgetArgument(e_74, 1);
                          {
                            ATerm l_74 = NULL,n_74 = NULL;
                            ATerm y_42;
                            y_42 = t;
                            {
                              ATerm m_74 = NULL;
                              t = not_null(f_74);
                              {
                                t = eval_config_0(t);
                                {
                                  m_74 = t;
                                  if(((l_74 != NULL) && (l_74 != m_74)))
                                    _fail(m_74);
                                  else
                                    l_74 = m_74;
                                }
                              }
                            }
                            t = y_42;
                            {
                              ATerm o_74 = NULL;
                              t = not_null(g_74);
                              {
                                t = eval_config_0(t);
                                {
                                  o_74 = t;
                                  if(((n_74 != NULL) && (n_74 != o_74)))
                                    _fail(o_74);
                                  else
                                    n_74 = o_74;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_74), not_null(n_74));
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
  ATerm w_74 = NULL;
  w_74 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_42, not_null(w_74));
    {
      t = table_get_0(t);
      {
        ATerm t_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm d_43;
            d_43 = t;
            {
              ATerm y_74 = NULL;
              ATerm z_74 = NULL;
              z_74 = t;
              if(((y_74 != NULL) && (y_74 != z_74)))
                _fail(z_74);
              else
                y_74 = z_74;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_z_42, not_null(w_74), not_null(y_74));
                t = table_put_0(t);
              }
            }
            t = d_43;
          }
          return(t);
        }
        t = try_1(t, t_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_70 (ATerm))
{
  ATerm e_43 = t;
  int f_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_70(t);
      ;
      LocalPopChoice(f_43);
    }
  else
    {
      t = e_43;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL;
  e_75 = t;
  d_75 :
  if(match_cons(e_75, sym__2))
    {
      f_75 = ATgetArgument(e_75, 0);
      g_75 = ATgetArgument(e_75, 1);
      t = SSL_table_get(not_null(f_75), not_null(g_75));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL;
  n_75 = t;
  m_75 :
  if(match_cons(n_75, sym__3))
    {
      o_75 = ATgetArgument(n_75, 0);
      p_75 = ATgetArgument(n_75, 1);
      q_75 = ATgetArgument(n_75, 2);
      {
        ATerm g_43;
        g_43 = t;
        {
          ATerm u_75 = NULL;
          ATerm v_75 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_75), not_null(p_75));
          {
            ATerm h_43 = t;
            int i_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(i_43);
              }
            else
              {
                t = h_43;
                t = (ATerm) ATempty;
              }
            {
              v_75 = t;
              if(((u_75 != NULL) && (u_75 != v_75)))
                _fail(v_75);
              else
                u_75 = v_75;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_75), not_null(p_75), (ATerm) ATinsert(CheckATermList(not_null(u_75)), not_null(q_75)));
            t = table_put_0(t);
          }
        }
        t = g_43;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_86 (ATerm))
{
  ATerm z_75 = NULL;
  ATerm c_76 = NULL;
  t = term_y_7;
  {
    t = p_86(t);
    {
      c_76 = t;
      if(((z_75 != NULL) && (z_75 != c_76)))
        _fail(c_76);
      else
        z_75 = c_76;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_41, term_g_41, not_null(z_75));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm k_76 = NULL,n_76 = NULL,o_76 = NULL;
  k_76 = t;
  j_76 :
  if(match_string(k_76, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(k_76) == AT_LIST) && !(ATisEmpty(k_76))))
        {
          n_76 = ATgetFirst((ATermList) k_76);
          o_76 = (ATerm) ATgetNext((ATermList) k_76);
          {
            ATerm r_76 = NULL;
            ATerm m_43;
            m_43 = t;
            {
              t = not_null(n_76);
              t = a_0(t);
            }
            t = m_43;
            {
              ATerm s_76 = NULL;
              t = term_y_7;
              {
                t = b_0(t);
                {
                  s_76 = t;
                  if(((r_76 != NULL) && (r_76 != s_76)))
                    _fail(s_76);
                  else
                    r_76 = s_76;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_76)), not_null(r_76));
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
  ATerm w_6 (ATerm t)
  {
    ATerm x_76 = NULL;
    x_76 = t;
    w_76 :
    if(!(match_string(x_76, "--help")))
      {
        if(!(match_string(x_76, "-h")))
          {
            if(!(match_string(x_76, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_6 (ATerm t)
  {
    t = term_n_43;
    {
      t = set_config_0(t);
      t = term_o_43;
    }
    return(t);
  }
  ATerm y_6 (ATerm t)
  {
    t = term_p_43;
    return(t);
  }
  t = Option_3(t, w_6, x_6, y_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL;
  a_77 = t;
  z_76 :
  if(((ATgetType(a_77) == AT_LIST) && !(ATisEmpty(a_77))))
    {
      b_77 = ATgetFirst((ATermList) a_77);
      c_77 = (ATerm) ATgetNext((ATermList) a_77);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_77)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_77)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_59 (ATerm), ATerm t_59 (ATerm))
{
  ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL;
  m_77 = t;
  l_77 :
  if(((ATgetType(m_77) == AT_LIST) && !(ATisEmpty(m_77))))
    {
      n_77 = ATgetFirst((ATermList) m_77);
      o_77 = (ATerm) ATgetNext((ATermList) m_77);
      {
        ATerm s_77 = NULL,u_77 = NULL;
        ATerm t_77 = NULL;
        t = SSLgetAnnotations(not_null(m_77));
        {
          t_77 = t;
          if(((s_77 != NULL) && (s_77 != t_77)))
            _fail(t_77);
          else
            s_77 = t_77;
        }
        {
          t = not_null(n_77);
          {
            ATerm w_77 = NULL;
            t = s_59(t);
            {
              u_77 = t;
              {
                t = not_null(o_77);
                {
                  ATerm y_77 = NULL;
                  t = t_59(t);
                  {
                    w_77 = t;
                    {
                      ATerm z_77 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_77)), not_null(u_77)), not_null(s_77));
                      {
                        z_77 = t;
                        if(((y_77 != NULL) && (y_77 != z_77)))
                          _fail(z_77);
                        else
                          y_77 = z_77;
                      }
                      t = not_null(y_77);
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
  ATerm j_78 = NULL;
  j_78 = t;
  i_78 :
  if(((ATgetType(j_78) == AT_LIST) && ATisEmpty(j_78)))
    {
      {
        ATerm l_78 = NULL,s_78 = NULL;
        ATerm q_43;
        q_43 = t;
        {
          ATerm m_78 = NULL;
          t = SSLgetAnnotations(not_null(j_78));
          {
            m_78 = t;
            if(((l_78 != NULL) && (l_78 != m_78)))
              _fail(m_78);
            else
              l_78 = m_78;
          }
        }
        t = q_43;
        {
          ATerm t_78 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(l_78));
          {
            t_78 = t;
            if(((s_78 != NULL) && (s_78 != t_78)))
              _fail(t_78);
            else
              s_78 = t_78;
          }
          t = not_null(s_78);
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
  ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL;
  z_78 = t;
  y_78 :
  if(match_cons(z_78, sym__2))
    {
      a_79 = ATgetArgument(z_78, 0);
      b_79 = ATgetArgument(z_78, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_42, not_null(a_79), not_null(b_79));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_86 (ATerm))
{
  ATerm s_43;
  s_43 = t;
  {
    ATerm z_6 (ATerm t)
    {
      t = term_w_43;
      t = n_86(t);
      return(t);
    }
    t = try_1(t, z_6);
  }
  t = s_43;
  {
    ATerm a_7 (ATerm t)
    {
      ATerm j_79 = NULL;
      ATerm x_43;
      x_43 = t;
      {
        ATerm h_79 = NULL;
        ATerm i_79 = NULL;
        i_79 = t;
        if(((h_79 != NULL) && (h_79 != i_79)))
          _fail(i_79);
        else
          h_79 = i_79;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_38, not_null(h_79));
          t = set_config_0(t);
        }
      }
      t = x_43;
      {
        ATerm k_79 = NULL;
        k_79 = t;
        if(((j_79 != NULL) && (j_79 != k_79)))
          _fail(k_79);
        else
          j_79 = k_79;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_79));
      }
      return(t);
    }
    ATerm f_7 (ATerm t)
    {
      ATerm y_43 = t;
      int z_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_44 = t;
          int f_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(f_44);
            }
          else
            {
              t = e_44;
              {
                t = n_86(t);
                t = Cons_2(t, _id, f_7);
              }
            }
          ;
          LocalPopChoice(z_43);
        }
      else
        {
          t = y_43;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_7, f_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_79 = NULL,t_79 = NULL,w_79 = NULL;
  ATerm i_44;
  i_44 = t;
  {
    ATerm x_79 = NULL,z_79 = NULL,a_80 = NULL,d_80 = NULL;
    x_79 = t;
    p_79 :
    if(match_cons(x_79, sym__3))
      {
        z_79 = ATgetArgument(x_79, 0);
        a_80 = ATgetArgument(x_79, 1);
        d_80 = ATgetArgument(x_79, 2);
        {
          if(((s_79 != NULL) && (s_79 != z_79)))
            _fail(z_79);
          else
            s_79 = z_79;
          {
            if(((t_79 != NULL) && (t_79 != a_80)))
              _fail(a_80);
            else
              t_79 = a_80;
            {
              if(((w_79 != NULL) && (w_79 != d_80)))
                _fail(d_80);
              else
                w_79 = d_80;
              t = SSL_table_put(not_null(s_79), not_null(t_79), not_null(w_79));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = i_44;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_86 (ATerm))
{
  ATerm g_80 = NULL;
  ATerm j_44;
  j_44 = t;
  {
    t = term_k_44;
    t = table_put_0(t);
  }
  t = j_44;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm n_44 = t;
      int o_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_86(t);
          ;
          LocalPopChoice(o_44);
        }
      else
        {
          t = n_44;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, g_7);
    {
      ATerm l_7 (ATerm t)
      {
        ATerm r_44 = t;
        int s_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_44;
            v_44 = t;
            {
              ATerm w_44 = t;
              int x_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_c_40;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(x_44);
                }
              else
                {
                  t = w_44;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = v_44;
            {
              t = system_usage_0(t);
              {
                t = term_t_11;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(s_44);
          }
        else
          {
            t = r_44;
            {
              ATerm m_7 (ATerm t)
              {
                ATerm n_7 (ATerm t)
                {
                  ATerm h_80 = NULL;
                  h_80 = t;
                  if(((g_80 != NULL) && (g_80 != h_80)))
                    _fail(h_80);
                  else
                    g_80 = h_80;
                  return(t);
                }
                t = Undefined_1(t, n_7);
                return(t);
              }
              t = option_defined_1(t, m_7);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_n_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_80)), term_y_44));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_r_11;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, l_7);
      {
        ATerm z_44;
        z_44 = t;
        {
          t = term_f_41;
          t = table_destroy_0(t);
        }
        t = z_44;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm v_66 (ATerm), ATerm w_66 (ATerm))
{
  t = parse_options_1(t, t_66);
  {
    t = store_options_0(t);
    {
      t = v_66(t);
      {
        ATerm a_45 = t;
        int d_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, u_66);
            ;
            LocalPopChoice(d_45);
          }
        else
          {
            t = a_45;
            {
              ATerm e_45 = t;
              int f_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_66(t);
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
ATerm option_wrap_2 (ATerm t, ATerm x_66 (ATerm), ATerm y_66 (ATerm))
{
  t = option_wrap_4(t, x_66, default_usage_0, _id, y_66);
  return(t);
}
ATerm io_abox2html_0 (ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = gen_css_0(t);
        ;
        LocalPopChoice(h_45);
      }
    else
      {
        t = g_45;
        t = abox2html_0(t);
      }
    return(t);
  }
  t = option_wrap_2(t, abox2html_options_0, o_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_abox2html_0(t);
  return(t);
}
