#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Path_1;
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
Symbol sym_TempFiles_0;
static void init_module_constructors (void)
{
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
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
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
}
ATerm term_y_49;
ATerm term_x_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_b_49;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_d_48;
ATerm term_y_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_d_47;
ATerm term_w_46;
ATerm term_v_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_l_46;
ATerm term_q_45;
ATerm term_p_45;
ATerm term_o_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_g_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_n_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_e_43;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_r_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_x_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_o_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_b_40;
ATerm term_z_39;
ATerm term_m_39;
ATerm term_i_39;
ATerm term_d_39;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_q_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_z_37;
ATerm term_q_37;
ATerm term_d_36;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_y_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_n_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_y_32;
ATerm term_v_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_s_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_t_29;
ATerm term_k_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_l_28;
ATerm term_u_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_e_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_s_26;
ATerm term_o_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_k_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_o_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_f_20;
ATerm term_y_19;
ATerm term_g_19;
ATerm term_a_19;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_n_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_m_8;
ATerm term_f_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_y_7);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Dec", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Nov", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Oct", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Sep", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Aug", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Jul", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Jun", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("May", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Apr", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Mar", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Feb", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Jan", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("December", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("November", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("October", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("September", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("August", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("July", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("June", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("April", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("March", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("February", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("January", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Sat", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Fri", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Thu", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Wed", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Tue", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Mon", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Sun", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Saturday", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Friday", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Thursday", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Wednesday", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuesday", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Monday", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Sunday", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(100);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("p.m.", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("a.m.", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Saturday_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_Friday_0);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Thursday_0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Wednesday_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Tuesday_0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Monday_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Sunday_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_December_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_November_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_October_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_September_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_August_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_July_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_June_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_May_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_April_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_March_0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_February_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_January_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("EEEE", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("d", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("MMMM", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("yyyy", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("HH", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("mm", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ss", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--title", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_h_25);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no title specified for HTML document", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("<!-- \n", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   This file is generated at ", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" \n", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   by abox2html (C) 2001 Merijn de Jonge (mdejonge@cwi.nl)\n", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-->\n", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("<!doctype html public \"-//W3C//DTD WWW HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/loose.dtd\"> \n", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<html>\n", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  <head>\n", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("    <title>", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("</title>\n", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("    <link rel=\"stylesheet\" type=\"text/css\" href=\"boxstyle.css\">\n", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  </head>\n", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  <body>\n", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_u_10);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  </body>\n", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("</html>\n", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-html", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_e_27);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_28, term_n_13, term_q_28);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_28, term_u_14, term_y_28);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_29, term_s_14, term_b_29);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_29, term_m_14, term_g_29);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_29, term_c_14, term_k_29);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_29, term_x_29, term_z_29);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_30, term_c_30, term_d_30);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_30, term_k_14, term_h_30);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_31, term_b_31, term_g_31);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_31, term_m_31, term_n_31);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_31, term_j_14, term_r_31);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_31, term_q_14, term_x_31);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_31, term_a_32, term_b_32);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_32, term_a_14, term_e_32);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_32, term_h_32, term_i_32);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_32, term_l_32, term_m_32);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_32, term_p_32, term_q_32);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_32, term_y_32, term_a_33);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_33, term_a_16, term_d_33);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_33, term_b_14, term_n_33);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_33, term_z_15, term_u_33);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_33, term_y_33, term_a_34);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_34, term_d_34, term_f_34);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_34, term_m_34, term_n_34);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_34, term_p_14, term_q_34);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_34, term_u_34, term_v_34);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_34, term_z_34, term_a_35);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_35, term_i_35, term_j_35);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_z_39);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(sym__2, term_i_39, term_l_40);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym__2, term_i_39, term_m_39);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym__2, term_f_10, term_r_41);
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(sym__2, term_e_27, term_t_13);
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_13);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym__2, term_j_44, term_m_8);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(sym__2, term_w_44, term_x_44);
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Only generate cascading style sheet", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-t title    Title of HTML document", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_p_45);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_o_46);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(sym__2, term_k_43, term_n_43);
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(sym__2, term_d_47, term_m_8);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(sym__2, term_i_47, term_m_8);
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym__2, term_o_46, term_m_8);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_d_47);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_w_44);
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css-boxstyle", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_close_fd_0_0 (ATerm t);
static ATerm i_8 (ATerm n_35, ATerm o_35, ATerm t);
ATerm File_as_fd_1_0 (ATerm w_97 (ATerm), ATerm t);
ATerm STDERR__FILENO_0_0 (ATerm t);
ATerm STDOUT__FILENO_0_0 (ATerm t);
ATerm STDIN__FILENO_0_0 (ATerm t);
ATerm xtc_open_fd_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
static ATerm m_0 (ATerm t);
ATerm xtc_new_file_name_0_0 (ATerm t);
ATerm xtc_cat_0_0 (ATerm t);
static ATerm e_4 (ATerm m_3, ATerm t);
static ATerm f_4 (ATerm o_3, ATerm p_3, ATerm s_3, ATerm t);
static ATerm x_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm print_to_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm k_8 (ATerm k_39, ATerm l_39, ATerm t);
static ATerm l_8 (ATerm k_85 (ATerm), ATerm c_448, ATerm u_39, ATerm t);
static ATerm b_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm month2abbr_0_0 (ATerm t);
ATerm month2text_0_0 (ATerm t);
ATerm lt_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm day_of_week2abbr_0_0 (ATerm t);
ATerm day_of_week2text_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm u_71 (ATerm), ATerm v_71 (ATerm), ATerm t);
ATerm for_3_0 (ATerm x_71 (ATerm), ATerm y_71 (ATerm), ATerm z_71 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
static ATerm n_8 (ATerm l_33, ATerm j_33, ATerm k_33, ATerm t);
static ATerm o_8 (ATerm s_32, ATerm t_32, ATerm u_32, ATerm t);
static ATerm p_8 (ATerm d_26, ATerm e_26, ATerm t);
ATerm month2index_0_0 (ATerm t);
ATerm date_pattern_to_int_0_0 (ATerm t);
static ATerm d_17 (ATerm y_14, ATerm z_14, ATerm t);
ATerm date_pattern_to_string_0_0 (ATerm t);
static ATerm q_8 (ATerm w_52, ATerm v_52, ATerm t);
ATerm index2day_of_week_0_0 (ATerm t);
ATerm index2month_0_0 (ATerm t);
static ATerm r_8 (ATerm u_49, ATerm t_49, ATerm s_49, ATerm r_49, ATerm q_49, ATerm p_49, ATerm v_49, ATerm w_49, ATerm t);
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t);
static ATerm s_8 (ATerm m_49, ATerm t);
ATerm now_epoch_time_0_0 (ATerm t);
ATerm now_local_time_0_0 (ATerm t);
ATerm create_time_0_0 (ATerm t);
ATerm get_title_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm abox2html_0_0 (ATerm t);
static ATerm m_9 (ATerm o_29, ATerm p_29, ATerm t);
static ATerm h_9 (ATerm l_35, ATerm m_35, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm t_8 (ATerm l_25, ATerm m_25, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm u_8 (ATerm n_38, ATerm o_38, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm k_73 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm p_84 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm i_85 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm f_97 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm e_97 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm g_97 (ATerm), ATerm t);
static ATerm x_8 (ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm s_21, ATerm r_21, ATerm t);
static ATerm y_8 (ATerm j_77 (ATerm), ATerm o_21, ATerm n_21, ATerm t);
static ATerm t_1 (ATerm t);
static ATerm z_8 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t);
static ATerm a_9 (ATerm y_81 (ATerm), ATerm e_29, ATerm d_29, ATerm t);
static ATerm e_9 (ATerm x_13, ATerm y_13, ATerm t);
static ATerm i_27 (ATerm c_27, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm b_9 (ATerm q_39, ATerm t);
static ATerm c_9 (ATerm g_14, ATerm h_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_29 (ATerm s_27, ATerm t);
static ATerm r_29 (ATerm z_27, ATerm a_28, ATerm e_28, ATerm t);
static ATerm s_29 (ATerm m_28, ATerm n_28, ATerm o_28, ATerm t);
static ATerm d_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm z_81 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm s_35 (ATerm e_34, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm d_99 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm p_73 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm r_37 (ATerm e_37, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm f_9 (ATerm q_81 (ATerm), ATerm t_26, ATerm r_26, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm g_9 (ATerm b_35, ATerm c_35, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_generate_2_0 (ATerm h_98 (ATerm), ATerm i_98 (ATerm), ATerm t);
static ATerm i_9 (ATerm c_28, ATerm d_28, ATerm t);
ATerm end_scope_1_0 (ATerm n_81 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm y_70 (ATerm), ATerm z_70 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm m_81 (ATerm), ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm p_98 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm abox2html_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_9 (ATerm f_25, ATerm g_25, ATerm t);
ATerm foldr_2_0 (ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_97 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm need_help_1_0 (ATerm m_66 (ATerm), ATerm t);
ATerm map_1_0 (ATerm y_72 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_73 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm p_9 (ATerm g_47, ATerm h_47, ATerm t);
static ATerm n_9 (ATerm x_27, ATerm y_27, ATerm w_27, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm w_59 (ATerm), ATerm x_59 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm r_87 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm parse_options_1_0 (ATerm q_87 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm o_66 (ATerm), ATerm p_66 (ATerm), ATerm q_66 (ATerm), ATerm r_66 (ATerm), ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm v_2 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 = NULL,z_0 = NULL;
      t = term_x_7;
      y_0 = t;
      t = term_y_7;
      z_0 = t;
      t = term_z_7;
      t = m_9(y_0, z_0, t);
      LocalPopChoice(u_7);
    }
  else
    {
      t = v_2;
      t = term_a_8;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm u_0 = NULL;
  u_0 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm b_0 = NULL,h_0 = NULL;
      t = term_y_7;
      {
        ATerm c_8 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_0 = NULL,v_0 = NULL;
            t = term_x_7;
            j_0 = t;
            t = term_y_7;
            v_0 = t;
            t = term_z_7;
            t = m_9(j_0, v_0, t);
            LocalPopChoice(d_8);
          }
        else
          {
            t = c_8;
            t = term_a_8;
          }
      }
      b_0 = t;
      t = term_f_8;
      h_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_f_8, b_0);
      t = h_9(h_0, b_0, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm g_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_0;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm xtc_close_fd_0_0 (ATerm t)
{
  ATerm g_1 = NULL;
  g_1 = t;
  {
    ATerm h_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 = NULL;
        t = term_m_8;
        t = STDIN__FILENO_0_0(t);
        i_1 = t;
        if((g_1 != t))
          {
            _fail(t);
          }
        t = i_1;
        LocalPopChoice(j_8);
      }
    else
      {
        t = h_8;
        {
          ATerm v_8 = t;
          int k_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_1 = NULL;
              t = term_m_8;
              t = STDOUT__FILENO_0_0(t);
              l_1 = t;
              if((g_1 != t))
                {
                  _fail(t);
                }
              t = l_1;
              LocalPopChoice(k_9);
            }
          else
            {
              t = v_8;
              {
                ATerm l_9 = t;
                int o_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_1 = NULL;
                    t = term_m_8;
                    t = STDERR__FILENO_0_0(t);
                    p_1 = t;
                    if((g_1 != t))
                      {
                        _fail(t);
                      }
                    t = p_1;
                    LocalPopChoice(o_9);
                  }
                else
                  {
                    t = l_9;
                    t = SSL_close(g_1);
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm i_8 (ATerm n_35, ATerm o_35, ATerm t)
{
  t = SSL_fdcopy(n_35, o_35);
  return(t);
}
ATerm File_as_fd_1_0 (ATerm w_97 (ATerm), ATerm t)
{
  ATerm u_1 = NULL;
  t = xtc_open_fd_0_0(t);
  u_1 = t;
  {
    ATerm q_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_97(t);
        LocalPopChoice(t_9);
        {
          ATerm v_1 = NULL;
          v_1 = t;
          {
            ATerm x_9 = t;
            int y_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = u_1;
                t = xtc_close_fd_0_0(t);
                LocalPopChoice(y_9);
              }
            else
              {
                t = x_9;
              }
          }
          t = v_1;
        }
      }
    else
      {
        t = q_9;
        {
          ATerm z_9 = t;
          int a_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_1;
              t = xtc_close_fd_0_0(t);
              LocalPopChoice(a_10);
            }
          else
            {
              t = z_9;
            }
        }
        t = u_1;
        _fail(t);
      }
  }
  return(t);
}
ATerm STDERR__FILENO_0_0 (ATerm t)
{
  t = SSL_STDERR_FILENO();
  return(t);
}
ATerm STDOUT__FILENO_0_0 (ATerm t)
{
  t = SSL_STDOUT_FILENO();
  return(t);
}
ATerm STDIN__FILENO_0_0 (ATerm t)
{
  t = SSL_STDIN_FILENO();
  return(t);
}
ATerm xtc_open_fd_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  l_2 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_2 = ATgetArgument(t, 0);
      t = SSL_open(k_2);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          t = term_m_8;
          t = STDIN__FILENO_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_stdout_0))
            {
              t = term_m_8;
              t = STDOUT__FILENO_0_0(t);
            }
          else
            {
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
              t = term_m_8;
              t = STDERR__FILENO_0_0(t);
            }
        }
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL;
  t = term_m_8;
  t = new_0_0(t);
  p_2 = t;
  t = term_b_10;
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_2, term_b_10);
  t = g_9(p_2, q_2, t);
  r_2 = t;
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_2 = NULL;
        t = (ATerm) ATinsert(ATempty, term_e_10);
        t_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_2, (ATerm) ATinsert(ATempty, term_e_10));
        t = e_9(r_2, t_2, t);
        t = new_file_0_0(t);
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        t = r_2;
      }
  }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm xtc_new_file_name_0_0 (ATerm t)
{
  ATerm x_2 = NULL,z_2 = NULL;
  t = new_file_0_0(t);
  x_2 = t;
  t = term_m_8;
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_2, term_m_8);
  t = f_9(m_0, x_2, z_2, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, x_2);
  return(t);
}
ATerm xtc_cat_0_0 (ATerm t)
{
  ATerm b_3 = NULL,e_3 = NULL,f_3 = NULL;
  e_3 = t;
  t = xtc_new_file_name_0_0(t);
  b_3 = t;
  t = xtc_open_fd_0_0(t);
  f_3 = t;
  t = e_3;
  {
    static ATerm s_0 (ATerm t)
    {
      static ATerm w_0 (ATerm t)
      {
        ATerm i_3 = NULL;
        i_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_3, f_3);
        t = i_8(i_3, f_3, t);
        return(t);
      }
      t = File_as_fd_1_0(w_0, t);
      return(t);
    }
    t = map_1_0(s_0, t);
  }
  t = f_3;
  t = xtc_close_fd_0_0(t);
  t = b_3;
  return(t);
}
static ATerm e_4 (ATerm m_3, ATerm t)
{
  t = m_3;
  {
    ATerm g_10 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_10 = ATgetArgument(t, 0);
            ATerm j_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_10;
      }
  }
  t = term_k_10;
  t = debug_1_0(x_0, t);
  t = (ATerm) ATmakeAppl(sym__2, m_3, term_l_10);
  t = open_file_0_0(t);
  return(t);
}
static ATerm f_4 (ATerm o_3, ATerm p_3, ATerm s_3, ATerm t)
{
  t = SSL_open_file(o_3, p_3);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_m_10;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm w_3 = NULL,b_4 = NULL,d_4 = NULL;
  w_3 = t;
  if(match_cons(t, sym__2))
    {
      b_4 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
      {
        ATerm n_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_4(w_3, t);
            LocalPopChoice(p_10);
          }
        else
          {
            t = n_10;
            t = f_4(b_4, d_4, w_3, t);
          }
      }
    }
  else
    {
      t = e_4(w_3, t);
    }
  return(t);
}
ATerm print_to_0_0 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL;
  g_4 = t;
  t = xtc_new_file_0_0(t);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_4, term_l_10);
  t = open_file_0_0(t);
  t = SSL_print(h_4, g_4);
  t = SSL_close_file(h_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_4);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm m_4 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_f_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm o_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_e_10);
      o_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_4, (ATerm) ATinsert(ATempty, term_e_10));
      t = e_9(m_4, o_4, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm k_8 (ATerm k_39, ATerm l_39, ATerm t)
{
  ATerm f_5 = NULL;
  t = SSL_write_term_to_stream_baf(k_39, l_39);
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_5);
  return(t);
}
static ATerm l_8 (ATerm k_85 (ATerm), ATerm c_448, ATerm u_39, ATerm t)
{
  ATerm g_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_448, term_l_10);
  t = d_9(t);
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_5, u_39);
  t = k_85(t);
  t = fclose_0_0(t);
  t = u_39;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_10 = ATgetArgument(t, 0);
      if(match_cons(q_10, sym_Stream_1))
        {
          j_5 = ATgetArgument(q_10, 0);
        }
      else
        _fail(t);
      k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8(j_5, k_5, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL;
  i_5 = t;
  t = xtc_new_file_0_0(t);
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_5, i_5);
  t = l_8(b_1, h_5, i_5, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_5);
  t = xtc_transform_file_2_0(c_98, d_98, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  p_5 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm r_5 = NULL,s_5 = NULL;
      t = p_5;
      t = xtc_new_file_0_0(t);
      r_5 = t;
      t = r_0(t);
      s_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_5, (ATerm) ATinsert(ATinsert(ATempty, r_5), term_y_7));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_5);
    }
  else
    {
      ATerm u_5 = NULL,w_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          q_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_5;
      t = xtc_new_file_0_0(t);
      u_5 = t;
      t = r_0(t);
      w_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_5), term_y_7), q_5), term_u_10));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_5);
    }
  return(t);
}
ATerm month2abbr_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_x_10;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_a_11;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_j_11;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_k_11;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_l_11;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_m_11;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_n_11;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_o_11;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_q_11;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_r_11;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_s_11;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_u_11;
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
ATerm month2text_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_v_11;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_w_11;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_y_11;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_z_11;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_a_12;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_b_12;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_d_12;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_o_11;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_e_12;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_f_12;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_g_12;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_h_12;
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
ATerm lt_0_0 (ATerm t)
{
  ATerm j_12 = t;
  if((PushChoice() == 0))
    {
      t = geq_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_12;
    }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm k_12 = t;
  if((PushChoice() == 0))
    {
      ATerm k_6 = NULL,l_6 = NULL;
      if(match_cons(t, sym__2))
        {
          k_6 = ATgetArgument(t, 0);
          l_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, k_6, l_6);
      {
        ATerm l_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(k_6, l_6);
            LocalPopChoice(m_12);
          }
        else
          {
            t = l_12;
            t = SSL_gtr(k_6, l_6);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, k_6, l_6);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_12;
    }
  return(t);
}
ATerm day_of_week2abbr_0_0 (ATerm t)
{
  if(match_cons(t, sym_Saturday_0))
    {
      t = term_n_12;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_o_12;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_q_12;
            }
          else
            {
              if(match_cons(t, sym_Wednesday_0))
                {
                  t = term_r_12;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_t_12;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_u_12;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_v_12;
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm day_of_week2text_0_0 (ATerm t)
{
  if(match_cons(t, sym_Saturday_0))
    {
      t = term_x_12;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_y_12;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_z_12;
            }
          else
            {
              if(match_cons(t, sym_Wednesday_0))
                {
                  t = term_c_13;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_f_13;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_g_13;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_i_13;
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm while_not_2_0 (ATerm u_71 (ATerm), ATerm v_71 (ATerm), ATerm t)
{
  static ATerm n_6 (ATerm t)
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_71(t);
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        t = v_71(t);
        t = n_6(t);
      }
    return(t);
  }
  t = n_6(t);
  return(t);
}
ATerm for_3_0 (ATerm x_71 (ATerm), ATerm y_71 (ATerm), ATerm z_71 (ATerm), ATerm t)
{
  t = x_71(t);
  t = while_not_2_0(y_71, z_71, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm o_6 = NULL,q_6 = NULL;
  if(match_cons(t, sym__2))
    {
      o_6 = ATgetArgument(t, 0);
      q_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_6, q_6, (ATerm) ATempty);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm s_6 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm l_13 = ATgetArgument(t, 0);
      if(((ATgetType(l_13) != AT_INT) || (ATgetInt((ATermInt) l_13) != 0)))
        _fail(t);
      {
        ATerm m_13 = ATgetArgument(t, 1);
      }
      s_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_6;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm u_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL;
  if(match_cons(t, sym__3))
    {
      u_6 = ATgetArgument(t, 0);
      w_6 = ATgetArgument(t, 1);
      x_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_6, term_n_13);
  t = geq_0_0(t);
  t = term_n_13;
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_6, term_n_13);
  t = t_8(u_6, z_6, t);
  y_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_6, w_6, (ATerm) ATinsert(CheckATermList(x_6), w_6));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(c_1, d_1, e_1, t);
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm a_7 = NULL;
  t = copy_0_0(t);
  a_7 = t;
  t = SSL_implode_string(a_7);
  return(t);
}
static ATerm n_8 (ATerm l_33, ATerm j_33, ATerm k_33, ATerm t)
{
  ATerm b_7 = NULL;
  t = SSL_strlen(j_33);
  b_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_33, b_7);
  t = t_8(k_33, b_7, t);
  {
    ATerm o_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_7 = NULL;
        f_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_7, term_t_13);
        t = geq_0_0(t);
        t = f_7;
        LocalPopChoice(s_13);
        {
          ATerm h_7 = NULL;
          h_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_7, l_33);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = o_13;
        t = term_u_13;
      }
  }
  return(t);
}
static ATerm o_8 (ATerm s_32, ATerm t_32, ATerm u_32, ATerm t)
{
  ATerm i_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, s_32, t_32, u_32);
  t = n_8(s_32, t_32, u_32, t);
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_7, t_32);
  t = g_9(i_7, t_32, t);
  return(t);
}
static ATerm p_8 (ATerm d_26, ATerm e_26, ATerm t)
{
  t = SSL_mod(d_26, e_26);
  return(t);
}
ATerm month2index_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_a_14;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_b_14;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_c_14;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_j_14;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_k_14;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_m_14;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_p_14;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_q_14;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_s_14;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_u_14;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_n_13;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_t_13;
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
ATerm date_pattern_to_int_0_0 (ATerm t)
{
  ATerm o_10 = NULL,r_10 = NULL,s_10 = NULL,v_10 = NULL,w_10 = NULL,y_10 = NULL,z_10 = NULL,b_11 = NULL,d_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
  w_10 = t;
  if(match_cons(t, sym__2))
    {
      y_10 = ATgetArgument(t, 0);
      z_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10;
  if(match_string(t, "ss"))
    {
      t = z_10;
      if(match_cons(t, sym_ComponentTime_3))
        {
          ATerm w_14 = ATgetArgument(t, 0);
          h_11 = ATgetArgument(t, 1);
          {
            ATerm x_14 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = h_11;
      if(match_cons(t, sym_DayTime_3))
        {
          ATerm a_15 = ATgetArgument(t, 0);
          ATerm b_15 = ATgetArgument(t, 1);
          s_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_10;
    }
  else
    {
      if(match_string(t, "mm"))
        {
          t = z_10;
          if(match_cons(t, sym_ComponentTime_3))
            {
              ATerm c_15 = ATgetArgument(t, 0);
              h_11 = ATgetArgument(t, 1);
              {
                ATerm h_15 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = h_11;
          if(match_cons(t, sym_DayTime_3))
            {
              ATerm j_15 = ATgetArgument(t, 0);
              r_10 = ATgetArgument(t, 1);
              {
                ATerm k_15 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = r_10;
        }
      else
        {
          if(match_string(t, "KK"))
            {
              t = z_10;
              if(match_cons(t, sym_ComponentTime_3))
                {
                  ATerm m_15 = ATgetArgument(t, 0);
                  h_11 = ATgetArgument(t, 1);
                  {
                    ATerm r_15 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = h_11;
              if(match_cons(t, sym_DayTime_3))
                {
                  o_10 = ATgetArgument(t, 0);
                  {
                    ATerm t_15 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm w_15 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              {
                ATerm x_15 = t;
                int y_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_11 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, term_z_15, o_10);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, o_10, term_a_16);
                    t = leq_0_0(t);
                    t = term_z_15;
                    p_11 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_10, term_z_15);
                    t = t_8(o_10, p_11, t);
                    LocalPopChoice(y_15);
                  }
                else
                  {
                    t = x_15;
                    t = (ATerm) ATmakeAppl(sym__2, term_t_13, o_10);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, o_10, term_z_15);
                    t = lt_0_0(t);
                    t = o_10;
                  }
              }
            }
          else
            {
              if(match_string(t, "hh"))
                {
                  t = z_10;
                  if(match_cons(t, sym_ComponentTime_3))
                    {
                      ATerm b_16 = ATgetArgument(t, 0);
                      h_11 = ATgetArgument(t, 1);
                      {
                        ATerm c_16 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = h_11;
                  if(match_cons(t, sym_DayTime_3))
                    {
                      o_10 = ATgetArgument(t, 0);
                      {
                        ATerm d_16 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm e_16 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = o_10;
                  if(match_int(t, 0))
                    {
                      ATerm f_16 = t;
                      int g_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_11 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_z_15, o_10);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, o_10, term_a_16);
                          t = leq_0_0(t);
                          t = term_z_15;
                          t_11 = t;
                          t = (ATerm) ATmakeAppl(sym__2, o_10, term_z_15);
                          t = t_8(o_10, t_11, t);
                          LocalPopChoice(g_16);
                        }
                      else
                        {
                          t = f_16;
                          {
                            ATerm h_16 = t;
                            int i_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_n_13, o_10);
                                t = leq_0_0(t);
                                t = (ATerm) ATmakeAppl(sym__2, o_10, term_z_15);
                                t = leq_0_0(t);
                                t = o_10;
                                LocalPopChoice(i_16);
                              }
                            else
                              {
                                t = h_16;
                                t = term_z_15;
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm j_16 = t;
                      int k_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_11 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_z_15, o_10);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, o_10, term_a_16);
                          t = leq_0_0(t);
                          t = term_z_15;
                          x_11 = t;
                          t = (ATerm) ATmakeAppl(sym__2, o_10, term_z_15);
                          t = t_8(o_10, x_11, t);
                          LocalPopChoice(k_16);
                        }
                      else
                        {
                          t = j_16;
                          t = (ATerm) ATmakeAppl(sym__2, term_n_13, o_10);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, o_10, term_z_15);
                          t = leq_0_0(t);
                          t = o_10;
                        }
                    }
                }
              else
                {
                  if(match_string(t, "kk"))
                    {
                      ATerm c_12 = NULL;
                      t = z_10;
                      if(match_cons(t, sym_ComponentTime_3))
                        {
                          ATerm l_16 = ATgetArgument(t, 0);
                          h_11 = ATgetArgument(t, 1);
                          {
                            ATerm m_16 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = h_11;
                      if(match_cons(t, sym_DayTime_3))
                        {
                          o_10 = ATgetArgument(t, 0);
                          {
                            ATerm n_16 = ATgetArgument(t, 1);
                          }
                          {
                            ATerm o_16 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = term_n_13;
                      c_12 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_10, term_n_13);
                      t = j_9(o_10, c_12, t);
                    }
                  else
                    {
                      if(match_string(t, "HH"))
                        {
                          t = z_10;
                          if(match_cons(t, sym_ComponentTime_3))
                            {
                              ATerm p_16 = ATgetArgument(t, 0);
                              h_11 = ATgetArgument(t, 1);
                              {
                                ATerm q_16 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = h_11;
                          if(match_cons(t, sym_DayTime_3))
                            {
                              o_10 = ATgetArgument(t, 0);
                              {
                                ATerm r_16 = ATgetArgument(t, 1);
                              }
                              {
                                ATerm s_16 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = o_10;
                        }
                      else
                        {
                          if(match_string(t, "DD"))
                            {
                              t = z_10;
                              if(match_cons(t, sym_ComponentTime_3))
                                {
                                  ATerm t_16 = ATgetArgument(t, 0);
                                  ATerm u_16 = ATgetArgument(t, 1);
                                  i_11 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = i_11;
                              if(match_cons(t, sym_Dupl_2))
                                {
                                  ATerm v_16 = ATgetArgument(t, 0);
                                  v_10 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = v_10;
                            }
                          else
                            {
                              if(match_string(t, "D"))
                                {
                                  t = z_10;
                                  if(match_cons(t, sym_ComponentTime_3))
                                    {
                                      ATerm w_16 = ATgetArgument(t, 0);
                                      ATerm x_16 = ATgetArgument(t, 1);
                                      i_11 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = i_11;
                                  if(match_cons(t, sym_Dupl_2))
                                    {
                                      ATerm y_16 = ATgetArgument(t, 0);
                                      v_10 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = v_10;
                                }
                              else
                                {
                                  if(match_string(t, "dd"))
                                    {
                                      t = z_10;
                                      if(match_cons(t, sym_ComponentTime_3))
                                        {
                                          b_11 = ATgetArgument(t, 0);
                                          {
                                            ATerm z_16 = ATgetArgument(t, 1);
                                          }
                                          {
                                            ATerm a_17 = ATgetArgument(t, 2);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      t = b_11;
                                      if(match_cons(t, sym_Date_3))
                                        {
                                          ATerm b_17 = ATgetArgument(t, 0);
                                          ATerm c_17 = ATgetArgument(t, 1);
                                          g_11 = ATgetArgument(t, 2);
                                        }
                                      else
                                        _fail(t);
                                      t = g_11;
                                    }
                                  else
                                    {
                                      if(match_string(t, "d"))
                                        {
                                          t = z_10;
                                          if(match_cons(t, sym_ComponentTime_3))
                                            {
                                              b_11 = ATgetArgument(t, 0);
                                              {
                                                ATerm i_17 = ATgetArgument(t, 1);
                                              }
                                              {
                                                ATerm j_17 = ATgetArgument(t, 2);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          t = b_11;
                                          if(match_cons(t, sym_Date_3))
                                            {
                                              ATerm k_17 = ATgetArgument(t, 0);
                                              ATerm l_17 = ATgetArgument(t, 1);
                                              g_11 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          t = g_11;
                                        }
                                      else
                                        {
                                          if(match_string(t, "MM"))
                                            {
                                              ATerm s_12 = NULL,w_12 = NULL;
                                              t = z_10;
                                              if(match_cons(t, sym_ComponentTime_3))
                                                {
                                                  b_11 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm o_17 = ATgetArgument(t, 1);
                                                  }
                                                  {
                                                    ATerm u_17 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = b_11;
                                              if(match_cons(t, sym_Date_3))
                                                {
                                                  ATerm j_18 = ATgetArgument(t, 0);
                                                  f_11 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm k_18 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = f_11;
                                              t = month2index_0_0(t);
                                              s_12 = t;
                                              t = term_n_13;
                                              w_12 = t;
                                              t = (ATerm) ATmakeAppl(sym__2, s_12, term_n_13);
                                              t = j_9(s_12, w_12, t);
                                            }
                                          else
                                            {
                                              if(match_string(t, "M"))
                                                {
                                                  ATerm a_13 = NULL,b_13 = NULL;
                                                  t = z_10;
                                                  if(match_cons(t, sym_ComponentTime_3))
                                                    {
                                                      b_11 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm m_18 = ATgetArgument(t, 1);
                                                      }
                                                      {
                                                        ATerm o_18 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = b_11;
                                                  if(match_cons(t, sym_Date_3))
                                                    {
                                                      ATerm q_18 = ATgetArgument(t, 0);
                                                      f_11 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm s_18 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = f_11;
                                                  t = month2index_0_0(t);
                                                  a_13 = t;
                                                  t = term_n_13;
                                                  b_13 = t;
                                                  t = (ATerm) ATmakeAppl(sym__2, a_13, term_n_13);
                                                  t = j_9(a_13, b_13, t);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "yy"))
                                                    {
                                                      ATerm d_13 = NULL;
                                                      t = z_10;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          b_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm u_18 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm w_18 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = b_11;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          d_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm y_18 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm z_18 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = term_a_19;
                                                      d_13 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, d_11, term_a_19);
                                                      t = p_8(d_11, d_13, t);
                                                    }
                                                  else
                                                    {
                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("yyyy", 0, ATtrue)))
                                                        _fail(t);
                                                      t = z_10;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          b_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm b_19 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm d_19 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = b_11;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          d_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm e_19 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm f_19 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = d_11;
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
static ATerm d_17 (ATerm y_14, ATerm z_14, ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
  t = z_14;
  t = date_pattern_to_int_0_0(t);
  f_15 = t;
  t = SSL_int_to_string(f_15);
  d_15 = t;
  t = SSL_strlen(y_14);
  e_15 = t;
  t = term_g_19;
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_19, d_15, e_15);
  t = o_8(g_15, d_15, e_15, t);
  return(t);
}
ATerm date_pattern_to_string_0_0 (ATerm t)
{
  ATerm i_15 = NULL,l_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,s_15 = NULL,u_15 = NULL,v_15 = NULL;
  n_15 = t;
  if(match_cons(t, sym__2))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_15;
  if(match_cons(t, sym_ComponentTime_3))
    {
      q_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
      v_15 = ATgetArgument(t, 2);
      t = v_15;
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Dupl_2))
              {
                l_15 = ATgetArgument(t, 0);
                {
                  ATerm j_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_19);
            t = u_15;
            {
              ATerm k_19 = t;
              int l_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      i_15 = ATgetArgument(t, 0);
                      {
                        ATerm m_19 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm n_19 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_19);
                  t = q_15;
                  {
                    ATerm o_19 = t;
                    int p_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm q_19 = ATgetArgument(t, 0);
                            s_15 = ATgetArgument(t, 1);
                            {
                              ATerm r_19 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(p_19);
                        t = o_15;
                        if(match_string(t, "a"))
                          {
                            ATerm s_19 = t;
                            int t_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = d_17(o_15, n_15, t);
                                LocalPopChoice(t_19);
                              }
                            else
                              {
                                t = s_19;
                                {
                                  ATerm w_19 = t;
                                  int x_19 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_z_15, i_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, i_15, term_a_16);
                                      t = leq_0_0(t);
                                      t = term_y_19;
                                      LocalPopChoice(x_19);
                                    }
                                  else
                                    {
                                      t = w_19;
                                      t = (ATerm) ATmakeAppl(sym__2, term_t_13, i_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, i_15, term_z_15);
                                      t = lt_0_0(t);
                                      t = term_f_20;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEEE"))
                              {
                                ATerm g_20 = t;
                                int h_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = d_17(o_15, n_15, t);
                                    LocalPopChoice(h_20);
                                  }
                                else
                                  {
                                    t = g_20;
                                    t = l_15;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm i_20 = t;
                                    int j_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = d_17(o_15, n_15, t);
                                        LocalPopChoice(j_20);
                                      }
                                    else
                                      {
                                        t = i_20;
                                        t = l_15;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    if(match_string(t, "MMMM"))
                                      {
                                        ATerm k_20 = t;
                                        int l_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = d_17(o_15, n_15, t);
                                            LocalPopChoice(l_20);
                                          }
                                        else
                                          {
                                            t = k_20;
                                            t = s_15;
                                            t = month2text_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_string(t, "MMM"))
                                          {
                                            ATerm m_20 = t;
                                            int n_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = d_17(o_15, n_15, t);
                                                LocalPopChoice(n_20);
                                              }
                                            else
                                              {
                                                t = m_20;
                                                t = s_15;
                                                t = month2abbr_0_0(t);
                                              }
                                          }
                                        else
                                          {
                                            t = d_17(o_15, n_15, t);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = o_19;
                        t = o_15;
                        if(match_string(t, "a"))
                          {
                            ATerm o_20 = t;
                            int p_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = d_17(o_15, n_15, t);
                                LocalPopChoice(p_20);
                              }
                            else
                              {
                                t = o_20;
                                {
                                  ATerm q_20 = t;
                                  int r_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_z_15, i_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, i_15, term_a_16);
                                      t = leq_0_0(t);
                                      t = term_y_19;
                                      LocalPopChoice(r_20);
                                    }
                                  else
                                    {
                                      t = q_20;
                                      t = (ATerm) ATmakeAppl(sym__2, term_t_13, i_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, i_15, term_z_15);
                                      t = lt_0_0(t);
                                      t = term_f_20;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEEE"))
                              {
                                ATerm s_20 = t;
                                int t_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = d_17(o_15, n_15, t);
                                    LocalPopChoice(t_20);
                                  }
                                else
                                  {
                                    t = s_20;
                                    t = l_15;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm u_20 = t;
                                    int v_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = d_17(o_15, n_15, t);
                                        LocalPopChoice(v_20);
                                      }
                                    else
                                      {
                                        t = u_20;
                                        t = l_15;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = d_17(o_15, n_15, t);
                                  }
                              }
                          }
                      }
                  }
                }
              else
                {
                  t = k_19;
                  t = q_15;
                  {
                    ATerm w_20 = t;
                    int x_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm y_20 = ATgetArgument(t, 0);
                            s_15 = ATgetArgument(t, 1);
                            {
                              ATerm z_20 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(x_20);
                        t = o_15;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm a_21 = t;
                            int b_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = d_17(o_15, n_15, t);
                                LocalPopChoice(b_21);
                              }
                            else
                              {
                                t = a_21;
                                t = l_15;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm c_21 = t;
                                int h_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = d_17(o_15, n_15, t);
                                    LocalPopChoice(h_21);
                                  }
                                else
                                  {
                                    t = c_21;
                                    t = l_15;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "MMMM"))
                                  {
                                    ATerm i_21 = t;
                                    int j_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = d_17(o_15, n_15, t);
                                        LocalPopChoice(j_21);
                                      }
                                    else
                                      {
                                        t = i_21;
                                        t = s_15;
                                        t = month2text_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    if(match_string(t, "MMM"))
                                      {
                                        ATerm k_21 = t;
                                        int p_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = d_17(o_15, n_15, t);
                                            LocalPopChoice(p_21);
                                          }
                                        else
                                          {
                                            t = k_21;
                                            t = s_15;
                                            t = month2abbr_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        t = d_17(o_15, n_15, t);
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = w_20;
                        t = o_15;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm q_21 = t;
                            int t_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = d_17(o_15, n_15, t);
                                LocalPopChoice(t_21);
                              }
                            else
                              {
                                t = q_21;
                                t = l_15;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm u_21 = t;
                                int v_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = d_17(o_15, n_15, t);
                                    LocalPopChoice(v_21);
                                  }
                                else
                                  {
                                    t = u_21;
                                    t = l_15;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = d_17(o_15, n_15, t);
                              }
                          }
                      }
                  }
                }
            }
          }
        else
          {
            t = h_19;
            t = u_15;
            {
              ATerm w_21 = t;
              int x_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      i_15 = ATgetArgument(t, 0);
                      {
                        ATerm y_21 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm z_21 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(x_21);
                  t = q_15;
                  {
                    ATerm b_22 = t;
                    int c_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm d_22 = ATgetArgument(t, 0);
                            s_15 = ATgetArgument(t, 1);
                            {
                              ATerm e_22 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(c_22);
                        t = o_15;
                        if(match_string(t, "a"))
                          {
                            ATerm f_22 = t;
                            int g_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = d_17(o_15, n_15, t);
                                LocalPopChoice(g_22);
                              }
                            else
                              {
                                t = f_22;
                                {
                                  ATerm h_22 = t;
                                  int i_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_z_15, i_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, i_15, term_a_16);
                                      t = leq_0_0(t);
                                      t = term_y_19;
                                      LocalPopChoice(i_22);
                                    }
                                  else
                                    {
                                      t = h_22;
                                      t = (ATerm) ATmakeAppl(sym__2, term_t_13, i_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, i_15, term_z_15);
                                      t = lt_0_0(t);
                                      t = term_f_20;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "MMMM"))
                              {
                                ATerm j_22 = t;
                                int l_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = d_17(o_15, n_15, t);
                                    LocalPopChoice(l_22);
                                  }
                                else
                                  {
                                    t = j_22;
                                    t = s_15;
                                    t = month2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "MMM"))
                                  {
                                    ATerm m_22 = t;
                                    int n_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = d_17(o_15, n_15, t);
                                        LocalPopChoice(n_22);
                                      }
                                    else
                                      {
                                        t = m_22;
                                        t = s_15;
                                        t = month2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = d_17(o_15, n_15, t);
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = b_22;
                        t = o_15;
                        if(match_string(t, "a"))
                          {
                            ATerm o_22 = t;
                            int p_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = d_17(o_15, n_15, t);
                                LocalPopChoice(p_22);
                              }
                            else
                              {
                                t = o_22;
                                {
                                  ATerm q_22 = t;
                                  int r_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_z_15, i_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, i_15, term_a_16);
                                      t = leq_0_0(t);
                                      t = term_y_19;
                                      LocalPopChoice(r_22);
                                    }
                                  else
                                    {
                                      t = q_22;
                                      t = (ATerm) ATmakeAppl(sym__2, term_t_13, i_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, i_15, term_z_15);
                                      t = lt_0_0(t);
                                      t = term_f_20;
                                    }
                                }
                              }
                          }
                        else
                          {
                            t = d_17(o_15, n_15, t);
                          }
                      }
                  }
                }
              else
                {
                  t = w_21;
                  t = q_15;
                  {
                    ATerm s_22 = t;
                    int t_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm u_22 = ATgetArgument(t, 0);
                            s_15 = ATgetArgument(t, 1);
                            {
                              ATerm v_22 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(t_22);
                        t = o_15;
                        if(match_string(t, "MMMM"))
                          {
                            ATerm w_22 = t;
                            int x_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = d_17(o_15, n_15, t);
                                LocalPopChoice(x_22);
                              }
                            else
                              {
                                t = w_22;
                                t = s_15;
                                t = month2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "MMM"))
                              {
                                ATerm y_22 = t;
                                int b_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = d_17(o_15, n_15, t);
                                    LocalPopChoice(b_23);
                                  }
                                else
                                  {
                                    t = y_22;
                                    t = s_15;
                                    t = month2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = d_17(o_15, n_15, t);
                              }
                          }
                      }
                    else
                      {
                        t = s_22;
                        t = o_15;
                        t = d_17(o_15, n_15, t);
                      }
                  }
                }
            }
          }
      }
    }
  else
    {
      t = o_15;
      t = d_17(o_15, n_15, t);
    }
  return(t);
}
static ATerm q_8 (ATerm w_52, ATerm v_52, ATerm t)
{
  ATerm e_17 = NULL;
  t = w_52;
  {
    static ATerm f_1 (ATerm t)
    {
      ATerm f_17 = NULL;
      f_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_17, v_52);
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = date_pattern_to_string_0_0(t);
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            {
              ATerm g_17 = NULL,h_17 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, f_17, v_52);
              h_17 = t;
              t = SSL_explode_term(h_17);
              if(match_cons(t, sym__2))
                {
                  ATerm e_23 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_23) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm f_23 = ATgetArgument(t, 1);
                    if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
                      {
                        g_17 = ATgetFirst((ATermList) f_23);
                        {
                          ATerm g_23 = (ATerm) ATgetNext((ATermList) f_23);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = g_17;
            }
          }
      }
      return(t);
    }
    t = map_1_0(f_1, t);
  }
  e_17 = t;
  t = SSL_concat_strings(e_17);
  return(t);
}
ATerm index2day_of_week_0_0 (ATerm t)
{
  if(match_int(t, 6))
    {
      t = term_i_23;
    }
  else
    {
      if(match_int(t, 5))
        {
          t = term_j_23;
        }
      else
        {
          if(match_int(t, 4))
            {
              t = term_k_23;
            }
          else
            {
              if(match_int(t, 3))
                {
                  t = term_l_23;
                }
              else
                {
                  if(match_int(t, 2))
                    {
                      t = term_m_23;
                    }
                  else
                    {
                      if(match_int(t, 1))
                        {
                          t = term_o_23;
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                            _fail(t);
                          t = term_q_23;
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm index2month_0_0 (ATerm t)
{
  if(match_int(t, 11))
    {
      t = term_t_23;
    }
  else
    {
      if(match_int(t, 10))
        {
          t = term_u_23;
        }
      else
        {
          if(match_int(t, 9))
            {
              t = term_x_23;
            }
          else
            {
              if(match_int(t, 8))
                {
                  t = term_y_23;
                }
              else
                {
                  if(match_int(t, 7))
                    {
                      t = term_z_23;
                    }
                  else
                    {
                      if(match_int(t, 6))
                        {
                          t = term_b_24;
                        }
                      else
                        {
                          if(match_int(t, 5))
                            {
                              t = term_c_24;
                            }
                          else
                            {
                              if(match_int(t, 4))
                                {
                                  t = term_d_24;
                                }
                              else
                                {
                                  if(match_int(t, 3))
                                    {
                                      t = term_h_24;
                                    }
                                  else
                                    {
                                      if(match_int(t, 2))
                                        {
                                          t = term_i_24;
                                        }
                                      else
                                        {
                                          if(match_int(t, 1))
                                            {
                                              t = term_k_24;
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                                                _fail(t);
                                              t = term_o_24;
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
static ATerm r_8 (ATerm u_49, ATerm t_49, ATerm s_49, ATerm r_49, ATerm q_49, ATerm p_49, ATerm v_49, ATerm w_49, ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL;
  t = q_49;
  t = index2month_0_0(t);
  m_17 = t;
  t = v_49;
  t = index2day_of_week_0_0(t);
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym_ComponentTime_3, (ATerm)ATmakeAppl(sym_Date_3, p_49, m_17, r_49), (ATerm)ATmakeAppl(sym_DayTime_3, s_49, t_49, u_49), (ATerm) ATmakeAppl(sym_Dupl_2, n_17, w_49));
  return(t);
}
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  if(match_cons(t, sym__8))
    {
      p_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
      r_17 = ATgetArgument(t, 2);
      s_17 = ATgetArgument(t, 3);
      t_17 = ATgetArgument(t, 4);
      v_17 = ATgetArgument(t, 5);
      w_17 = ATgetArgument(t, 6);
      x_17 = ATgetArgument(t, 7);
    }
  else
    _fail(t);
  t = r_8(p_17, q_17, r_17, s_17, t_17, v_17, w_17, x_17, t);
  return(t);
}
static ATerm s_8 (ATerm m_49, ATerm t)
{
  t = SSL_epoch2localtime(m_49);
  t = prim_tuple_to_ComponentTime_0_0(t);
  return(t);
}
ATerm now_epoch_time_0_0 (ATerm t)
{
  ATerm y_17 = NULL;
  t = SSL_now_epoch_time();
  y_17 = t;
  t = (ATerm) ATmakeAppl(sym_EpochTime_1, y_17);
  return(t);
}
ATerm now_local_time_0_0 (ATerm t)
{
  ATerm z_17 = NULL;
  t = now_epoch_time_0_0(t);
  if(match_cons(t, sym_EpochTime_1))
    {
      z_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_8(z_17, t);
  return(t);
}
ATerm create_time_0_0 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  t = term_m_8;
  t = now_local_time_0_0(t);
  a_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_25), term_a_25), term_b_25), term_a_25), term_z_24), term_r_24), term_y_24), term_r_24), term_x_24), term_r_24), term_v_24), term_r_24), term_p_24);
  b_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_25), term_a_25), term_b_25), term_a_25), term_z_24), term_r_24), term_y_24), term_r_24), term_x_24), term_r_24), term_v_24), term_r_24), term_p_24), a_18);
  t = q_8(b_18, a_18, t);
  return(t);
}
ATerm get_title_0_0 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_18 = NULL,d_18 = NULL;
      t = term_x_7;
      c_18 = t;
      t = term_h_25;
      d_18 = t;
      t = term_i_25;
      t = m_9(c_18, d_18, t);
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
        t = term_o_25;
        f_18 = t;
        t = (ATerm) ATinsert(ATempty, term_p_25);
        g_18 = t;
        t = SSL_printnl(f_18, g_18);
        t = term_n_13;
        e_18 = t;
        t = SSL_exit(e_18);
        t = (ATerm) ATinsert(ATempty, term_p_25);
      }
    }
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL;
  t = get_title_0_0(t);
  i_18 = t;
  t = term_m_8;
  t = create_time_0_0(t);
  h_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_26), term_k_26), term_i_26), term_h_26), i_18), term_c_26), term_b_26), term_a_26), term_z_25), term_y_25), term_u_25), term_t_25), h_18), term_r_25), term_q_25);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm l_18 = NULL,n_18 = NULL,p_18 = NULL,r_18 = NULL;
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_18 = NULL,v_18 = NULL,x_18 = NULL;
      t = term_x_7;
      v_18 = t;
      t = term_u_10;
      x_18 = t;
      t = term_o_26;
      t = m_9(v_18, x_18, t);
      t_18 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_18);
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      t = term_f_8;
    }
  r_18 = t;
  t = create_header_0_0(t);
  t = print_to_0_0(t);
  l_18 = t;
  t = r_18;
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_19 = ATgetArgument(t, 0);
            {
              ATerm x_1 = NULL,f_0 = NULL;
              t = SSLgetAnnotations(r_18);
              x_1 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_19);
              f_0 = t;
              t = SSLsetAnnotations(f_0, x_1);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_18;
          }
        LocalPopChoice(q_26);
        t = xtc_transform_file_2_0(j_1, pass_verbose_0_0, t);
      }
    else
      {
        t = p_26;
        t = xtc_transform_term_2_0(k_1, pass_verbose_0_0, t);
      }
  }
  n_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_26), term_s_26);
  t = print_to_0_0(t);
  p_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_18), n_18), l_18);
  t = xtc_cat_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_v_26;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_v_26;
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(h_1, t);
  return(t);
}
static ATerm m_9 (ATerm o_29, ATerm p_29, ATerm t)
{
  t = SSL_table_get(o_29, p_29);
  return(t);
}
static ATerm h_9 (ATerm l_35, ATerm m_35, ATerm t)
{
  t = SSL_copy(l_35, m_35);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL;
  u_19 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_2 = NULL;
        t = u_19;
        t = o_0(t);
        g_2 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = g_2;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = g_2;
          }
        t = (ATerm) ATmakeAppl(sym__2, v_19, g_2);
        t = h_9(v_19, g_2, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_19);
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        {
          ATerm y_26 = t;
          int z_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_3 = NULL;
              t = u_19;
              t = o_0(t);
              d_3 = t;
              {
                ATerm a_27 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_3 = NULL;
                    g_3 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = g_3;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = g_3;
                          }
                        else
                          {
                            t = g_3;
                            if((v_19 != t))
                              {
                                _fail(t);
                              }
                            t = g_3;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_27;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, v_19, d_3);
              t = h_9(v_19, d_3, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_19);
              LocalPopChoice(z_26);
            }
          else
            {
              t = y_26;
              t = u_19;
              t = o_0(t);
              if((v_19 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_19);
            }
        }
      }
  }
  return(t);
}
static ATerm t_8 (ATerm l_25, ATerm m_25, ATerm t)
{
  ATerm b_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(l_25, m_25);
      LocalPopChoice(d_27);
    }
  else
    {
      t = b_27;
      t = SSL_subtr(l_25, m_25);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
  t = term_e_27;
  {
    ATerm h_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_20 = NULL,e_20 = NULL;
        t = term_x_7;
        d_20 = t;
        t = term_e_27;
        e_20 = t;
        t = term_o_27;
        t = m_9(d_20, e_20, t);
        LocalPopChoice(n_27);
      }
    else
      {
        t = h_27;
        t = term_n_13;
      }
  }
  a_20 = t;
  t = term_n_13;
  c_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_20, term_n_13);
  t = t_8(a_20, c_20, t);
  b_20 = t;
  t = SSL_int_to_string(b_20);
  z_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_19), term_e_27);
  return(t);
}
static ATerm u_8 (ATerm n_38, ATerm o_38, ATerm t)
{
  t = SSL_execvp(n_38, o_38);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL;
  d_21 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      e_21 = ATgetArgument(t, 0);
      {
        ATerm r_3 = NULL,u_3 = NULL;
        t = SSL_int_to_string(e_21);
        r_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_27), r_3), term_p_27);
        u_3 = t;
        t = SSL_concat_strings(u_3);
      }
    }
  else
    {
      ATerm q_4 = NULL,r_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          e_21 = ATgetArgument(t, 0);
          f_21 = ATgetArgument(t, 1);
          g_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(f_21);
      q_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_21), term_u_27), q_4), term_r_27), e_21);
      r_4 = t;
      t = SSL_concat_strings(r_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm k_73 (ATerm), ATerm t)
{
  ATerm l_21 = NULL;
  static ATerm m_1 (ATerm t)
  {
    t = k_73(t);
    if(((l_21 != NULL) && (l_21 != t)))
      _fail(t);
    else
      l_21 = t;
    return(t);
  }
  t = fetch_1_0(m_1, t);
  t = not_null(l_21);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm m_21 = NULL;
  m_21 = t;
  {
    ATerm v_27 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm i_28 = ATgetArgument(t, 0);
              if((m_21 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm j_28 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_35), term_g_35), term_w_34), term_r_34), term_o_34), term_g_34), term_b_34), term_v_33), term_p_33), term_e_33), term_b_33), term_r_32), term_n_32), term_j_32), term_f_32), term_c_32), term_y_31), term_v_31), term_o_31), term_h_31), term_s_30), term_e_30), term_a_30), term_t_29), term_h_29), term_c_29), term_z_28), term_r_28);
        t = fetch_elem_1_0(n_1, t);
        LocalPopChoice(b_28);
      }
    else
      {
        t = v_27;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, m_21);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm a_22 = NULL,k_22 = NULL;
  a_22 = t;
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm t_35 = ATgetArgument(t, 0);
            k_22 = ATgetArgument(t, 1);
            {
              ATerm u_35 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_35);
        {
          ATerm v_35 = t;
          int x_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_4 = NULL,z_4 = NULL,a_5 = NULL;
              t = k_22;
              {
                ATerm a_36 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_36;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              x_4 = t;
              t = term_o_25;
              z_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, x_4), term_d_36);
              a_5 = t;
              t = SSL_printnl(z_4, a_5);
              t = (ATerm) ATmakeAppl(sym__2, term_o_25, (ATerm) ATinsert(ATinsert(ATempty, x_4), term_d_36));
              LocalPopChoice(x_35);
            }
          else
            {
              t = v_35;
              t = a_22;
            }
        }
      }
    else
      {
        t = p_35;
        t = a_22;
      }
  }
  t = a_22;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm p_84 (ATerm), ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL;
  a_23 = t;
  t = fork_0_0(t);
  z_22 = t;
  {
    ATerm e_36 = t;
    int g_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = a_23;
        t = p_84(t);
        LocalPopChoice(g_36);
      }
    else
      {
        t = e_36;
        t = SSL_waitpid(z_22);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_36 = ATgetArgument(t, 0);
            if(((ATgetType(h_36) != AT_INT) || (ATgetInt((ATermInt) h_36) != 0)))
              _fail(t);
            {
              ATerm i_36 = ATgetArgument(t, 1);
            }
            {
              ATerm j_36 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = a_23;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm i_85 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,n_23 = NULL,p_23 = NULL,r_23 = NULL;
  h_23 = t;
  t = i_85(t);
  n_23 = t;
  t = term_o_25;
  p_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_23), n_23);
  r_23 = t;
  t = SSL_printnl(p_23, r_23);
  t = h_23;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm s_23 = NULL;
  static ATerm o_1 (ATerm t)
  {
    ATerm v_23 = NULL,w_23 = NULL;
    v_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_23), v_23);
    t = m_9(not_null(s_23), v_23, t);
    w_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_23, w_23);
    return(t);
  }
  if(((s_23 != NULL) && (s_23 != t)))
    _fail(t);
  else
    s_23 = t;
  t = SSL_table_keys(s_23);
  t = map_1_0(o_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm f_97 (ATerm), ATerm t)
{
  ATerm a_24 = NULL;
  a_24 = t;
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
        t = term_x_7;
        f_24 = t;
        t = term_e_27;
        g_24 = t;
        t = term_o_27;
        t = m_9(f_24, g_24, t);
        e_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_24, term_p_14);
        t = geq_0_0(t);
        t = a_24;
        t = f_97(t);
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        t = a_24;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm e_97 (ATerm), ATerm t)
{
  ATerm j_24 = NULL;
  j_24 = t;
  {
    ATerm m_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
        t = term_x_7;
        m_24 = t;
        t = term_e_27;
        n_24 = t;
        t = term_o_27;
        t = m_9(m_24, n_24, t);
        l_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_24, term_q_14);
        t = geq_0_0(t);
        t = j_24;
        t = e_97(t);
        LocalPopChoice(n_36);
      }
    else
      {
        t = m_36;
        t = j_24;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm g_97 (ATerm), ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  {
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
        t = term_x_7;
        t_24 = t;
        t = term_e_27;
        u_24 = t;
        t = term_o_27;
        t = m_9(t_24, u_24, t);
        s_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_24, term_m_14);
        t = geq_0_0(t);
        t = q_24;
        t = g_97(t);
        LocalPopChoice(p_36);
      }
    else
      {
        t = o_36;
        t = q_24;
      }
  }
  return(t);
}
static ATerm x_8 (ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm s_21, ATerm r_21, ATerm t)
{
  t = n_77(t);
  {
    static ATerm r_1 (ATerm t)
    {
      ATerm w_24 = NULL;
      w_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_21, w_24);
      t = m_77(t);
      return(t);
    }
    t = fetch_1_0(r_1, t);
  }
  t = r_21;
  return(t);
}
static ATerm y_8 (ATerm j_77 (ATerm), ATerm o_21, ATerm n_21, ATerm t)
{
  static ATerm s_25 (ATerm t)
  {
    ATerm j_25 = NULL,k_25 = NULL,n_25 = NULL;
    j_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_25 = ATgetFirst((ATermList) t);
            n_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_36 = t;
          int r_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_25;
              {
                static ATerm s_1 (ATerm t)
                {
                  t = n_21;
                  return(t);
                }
                t = x_8(j_77, s_1, k_25, n_25, t);
              }
              t = s_25(t);
              LocalPopChoice(r_36);
            }
          else
            {
              t = q_36;
              {
                ATerm l_5 = NULL,o_5 = NULL,q_0 = NULL;
                t = SSLgetAnnotations(j_25);
                l_5 = t;
                t = n_25;
                t = s_25(t);
                o_5 = t;
                t = (ATerm) ATinsert(CheckATermList(o_5), k_25);
                q_0 = t;
                t = SSLsetAnnotations(q_0, l_5);
              }
            }
        }
      }
    return(t);
  }
  t = o_21;
  t = s_25(t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm f_26 = NULL;
  if(match_cons(t, sym__2))
    {
      f_26 = ATgetArgument(t, 0);
      if((f_26 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_8 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_28, v_28);
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_36 = ATgetArgument(t, 0);
            ATerm z_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_28, v_28);
        t = m_9(u_28, v_28, t);
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
        t = (ATerm) ATempty;
      }
  }
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_25, w_28);
  t = y_8(t_1, x_25, w_28, t);
  w_25 = t;
  t = SSL_table_put(u_28, v_28, w_25);
  t = v_25;
  return(t);
}
static ATerm a_9 (ATerm y_81 (ATerm), ATerm e_29, ATerm d_29, ATerm t)
{
  static ATerm w_1 (ATerm t)
  {
    ATerm g_26 = NULL,j_26 = NULL;
    if(match_cons(t, sym__2))
      {
        g_26 = ATgetArgument(t, 0);
        j_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, e_29, g_26, j_26);
    t = y_81(t);
    return(t);
  }
  t = d_29;
  t = map_1_0(w_1, t);
  return(t);
}
static ATerm e_9 (ATerm x_13, ATerm y_13, ATerm t)
{
  t = SSL_access(x_13, y_13);
  return(t);
}
static ATerm i_27 (ATerm c_27, ATerm t)
{
  t = SSL_fclose(c_27);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL;
  g_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_27 = ATgetArgument(t, 0);
      {
        ATerm a_37 = t;
        int b_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_27);
            LocalPopChoice(b_37);
          }
        else
          {
            t = a_37;
            t = i_27(g_27, t);
          }
      }
    }
  else
    {
      t = i_27(g_27, t);
    }
  return(t);
}
static ATerm b_9 (ATerm q_39, ATerm t)
{
  t = SSL_read_term_from_stream(q_39);
  return(t);
}
static ATerm c_9 (ATerm g_14, ATerm h_14, ATerm t)
{
  ATerm j_27 = NULL;
  t = SSL_fopen(g_14, h_14);
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_27);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_27 = NULL;
  t = SSL_stdin_stream();
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_27 = NULL;
  t = SSL_stdout_stream();
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_27 = NULL;
  t = SSL_stderr_stream();
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_27);
  return(t);
}
static ATerm q_29 (ATerm s_27, ATerm t)
{
  ATerm t_27 = NULL;
  t = SSL_explode_term(s_27);
  if(match_cons(t, sym__2))
    {
      ATerm c_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_37 = ATgetArgument(t, 1);
        if(((ATgetType(d_37) == AT_LIST) && !(ATisEmpty(d_37))))
          {
            t_27 = ATgetFirst((ATermList) d_37);
            {
              ATerm f_37 = (ATerm) ATgetNext((ATermList) d_37);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_27;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_27;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_27;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_27;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_29 (ATerm z_27, ATerm a_28, ATerm e_28, ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,k_28 = NULL,t_0 = NULL;
  t = SSLgetAnnotations(e_28);
  h_28 = t;
  t = z_27;
  if(match_cons(t, sym_Path_1))
    {
      k_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_28, a_28);
  t_0 = t;
  t = SSLsetAnnotations(t_0, h_28);
  if(match_cons(t, sym__2))
    {
      f_28 = ATgetArgument(t, 0);
      g_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9(f_28, g_28, t);
  return(t);
}
static ATerm s_29 (ATerm m_28, ATerm n_28, ATerm o_28, ATerm t)
{
  ATerm p_28 = NULL,s_28 = NULL,t_28 = NULL,j_29 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(o_28);
  t_28 = t;
  t = SSL_is_string(m_28);
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_29, n_28);
  a_1 = t;
  t = SSLsetAnnotations(a_1, t_28);
  if(match_cons(t, sym__2))
    {
      p_28 = ATgetArgument(t, 0);
      s_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9(p_28, s_28, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
  l_29 = t;
  if(match_cons(t, sym__2))
    {
      m_29 = ATgetArgument(t, 0);
      n_29 = ATgetArgument(t, 1);
      {
        ATerm g_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_29(l_29, t);
            LocalPopChoice(i_37);
          }
        else
          {
            t = g_37;
            {
              ATerm l_37 = t;
              int n_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_29(m_29, n_29, l_29, t);
                  LocalPopChoice(n_37);
                }
              else
                {
                  t = l_37;
                  t = s_29(m_29, n_29, l_29, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_29(l_29, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,y_29 = NULL,f_30 = NULL;
  f_30 = t;
  {
    ATerm o_37 = t;
    int p_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_30, term_q_37);
        t = d_9(t);
        LocalPopChoice(p_37);
      }
    else
      {
        t = o_37;
        {
          ATerm r_6 = NULL,t_6 = NULL;
          t = term_z_37;
          t_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_37, f_30);
          t = g_9(t_6, f_30, t);
          r_6 = t;
          t = SSL_perror(r_6);
          _fail(t);
        }
      }
  }
  v_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_9(y_29, t);
  u_29 = t;
  t = v_29;
  t = fclose_0_0(t);
  t = u_29;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_b_38;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_c_38;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_38 = t;
  int g_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_30 = NULL,j_30 = NULL;
      i_30 = t;
      t = (ATerm) ATinsert(ATempty, term_q_38);
      j_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_30, (ATerm) ATinsert(ATempty, term_q_38));
      t = e_9(i_30, j_30, t);
      LocalPopChoice(g_38);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_38;
      {
        ATerm r_38 = t;
        int t_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_38 = t;
            if((PushChoice() == 0))
              {
                ATerm k_30 = NULL,l_30 = NULL;
                k_30 = t;
                t = (ATerm) ATinsert(ATempty, term_e_10);
                l_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_30, (ATerm) ATinsert(ATempty, term_e_10));
                t = e_9(k_30, l_30, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_38;
              }
            t = debug_1_0(y_1, t);
            LocalPopChoice(t_38);
          }
        else
          {
            t = r_38;
            t = debug_1_0(z_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_v_38;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_w_38;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm z_30 = NULL,c_31 = NULL,d_31 = NULL;
  z_30 = t;
  t = term_o_25;
  c_31 = t;
  t = (ATerm) ATinsert(ATempty, term_x_38);
  d_31 = t;
  t = SSL_printnl(c_31, d_31);
  t = z_30;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,j_31 = NULL;
  if(match_cons(t, sym__3))
    {
      e_31 = ATgetArgument(t, 0);
      f_31 = ATgetArgument(t, 1);
      j_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_8(e_31, f_31, j_31, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,p_31 = NULL;
  k_31 = t;
  t = term_o_25;
  l_31 = t;
  t = (ATerm) ATinsert(ATempty, term_d_39);
  p_31 = t;
  t = SSL_printnl(l_31, p_31);
  t = k_31;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
  s_31 = t;
  t = term_o_25;
  t_31 = t;
  t = (ATerm) ATinsert(ATempty, term_x_38);
  u_31 = t;
  t = SSL_printnl(t_31, u_31);
  t = s_31;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL;
  m_30 = t;
  t = if_verbose5_1_0(a_2, t);
  {
    ATerm f_39 = t;
    if((PushChoice() == 0))
      {
        ATerm x_30 = NULL,y_30 = NULL;
        t = term_i_39;
        x_30 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, m_30);
        y_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_39, (ATerm) ATmakeAppl(sym_Imported_1, m_30));
        t = m_9(x_30, y_30, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_39;
      }
  }
  o_30 = t;
  t = term_i_39;
  u_30 = t;
  t = term_m_39;
  v_30 = t;
  t = (ATerm) ATinsert(ATempty, m_30);
  w_30 = t;
  t = SSL_table_put(u_30, v_30, w_30);
  t = o_30;
  t = if_verbose4_1_0(c_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(e_2, t);
  n_30 = t;
  t = term_i_39;
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_39, n_30);
  t = a_9(f_2, t_30, n_30, t);
  t = if_verbose6_1_0(h_2, t);
  t = term_i_39;
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, m_30);
  q_30 = t;
  t = (ATerm) ATempty;
  r_30 = t;
  t = SSL_table_put(p_30, q_30, r_30);
  t = (ATerm) ATmakeAppl(sym__3, term_i_39, (ATerm)ATmakeAppl(sym_Imported_1, m_30), (ATerm) ATempty);
  t = if_verbose4_1_0(j_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,z_32 = NULL;
  w_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_32;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_32 = ATgetFirst((ATermList) t);
          z_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_39 = t;
        int p_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_7 = NULL,n_7 = NULL,o_7 = NULL,q_1 = NULL;
            t = SSLgetAnnotations(w_32);
            g_7 = t;
            t = x_32;
            t = z_81(t);
            n_7 = t;
            t = z_32;
            t = filter_1_0(z_81, t);
            o_7 = t;
            t = (ATerm) ATinsert(CheckATermList(o_7), n_7);
            q_1 = t;
            t = SSLsetAnnotations(q_1, g_7);
            LocalPopChoice(p_39);
          }
        else
          {
            t = o_39;
            t = z_32;
            t = filter_1_0(z_81, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm t)
{
  static ATerm g_33 (ATerm t)
  {
    ATerm s_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_71(t);
        t = g_33(t);
        LocalPopChoice(t_39);
      }
    else
      {
        t = s_39;
        t = e_71(t);
      }
    return(t);
  }
  t = g_33(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_33 = NULL,i_33 = NULL;
      t = term_x_7;
      h_33 = t;
      t = term_z_39;
      i_33 = t;
      t = term_b_40;
      t = m_9(h_33, i_33, t);
      LocalPopChoice(y_39);
    }
  else
    {
      t = x_39;
      {
        ATerm c_40 = t;
        int h_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_33 = NULL;
            t = term_i_40;
            m_33 = t;
            t = SSL_getenv(m_33);
            LocalPopChoice(h_40);
          }
        else
          {
            t = c_40;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_j_40;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm x_33 = NULL,z_33 = NULL;
  t = term_i_39;
  x_33 = t;
  t = term_l_40;
  z_33 = t;
  t = term_m_40;
  t = m_9(x_33, z_33, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm n_40 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_40;
      }
  }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = debug_1_0(w_2, t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_o_40;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm o_33 = NULL;
  t = if_verbose5_1_0(n_2, t);
  o_33 = t;
  {
    ATerm p_40 = t;
    int r_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_33 = NULL,s_33 = NULL;
        t = term_i_39;
        r_33 = t;
        t = term_m_39;
        s_33 = t;
        t = term_s_40;
        t = m_9(r_33, s_33, t);
        LocalPopChoice(r_40);
      }
    else
      {
        t = p_40;
        {
          ATerm t_33 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          t_33 = t;
          t = repeat_2_0(s_2, _id, t);
          t = t_33;
        }
      }
  }
  t = o_33;
  t = if_verbose5_1_0(u_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = debug_1_0(a_3, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm s_35 (ATerm e_34, ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL;
  t = term_i_39;
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, e_34);
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_39, (ATerm) ATmakeAppl(sym_Tool_1, e_34));
  t = m_9(j_34, k_34, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_40 = ATgetFirst((ATermList) t);
      if(match_cons(u_40, sym__2))
        {
          ATerm w_40 = ATgetArgument(u_40, 0);
          i_34 = ATgetArgument(u_40, 1);
        }
      else
        _fail(t);
      {
        ATerm v_40 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_34;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = debug_1_0(j_3, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_i_39;
  t = table_getlist_0_0(t);
  t = debug_1_0(l_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_x_40;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm z_40 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_34 = NULL,s_34 = NULL,x_34 = NULL;
      t = if_verbose5_1_0(y_2, t);
      t = xtc_load_0_0(t);
      x_34 = t;
      if(match_cons(t, sym__2))
        {
          l_34 = ATgetArgument(t, 0);
          s_34 = ATgetArgument(t, 1);
          {
            ATerm c_41 = t;
            int d_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
                t = term_i_39;
                e_35 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, l_34);
                f_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_i_39, (ATerm) ATmakeAppl(sym_Tool_1, l_34));
                t = m_9(e_35, f_35, t);
                {
                  static ATerm c_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((s_34 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((d_35 != NULL) && (d_35 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          d_35 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(c_3, t);
                }
                t = not_null(d_35);
                LocalPopChoice(d_41);
              }
            else
              {
                t = c_41;
                t = s_35(x_34, t);
              }
          }
        }
      else
        {
          t = s_35(x_34, t);
        }
      t = if_verbose5_1_0(h_3, t);
      LocalPopChoice(b_41);
    }
  else
    {
      t = z_40;
      {
        ATerm r_35 = NULL,v_7 = NULL,w_7 = NULL;
        r_35 = t;
        t = term_o_25;
        v_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_41), r_35), term_g_41);
        w_7 = t;
        t = SSL_printnl(v_7, w_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_41), r_35), term_g_41);
        t = if_verbose5_1_0(k_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  ATerm w_35 = NULL,y_35 = NULL;
  y_35 = t;
  t = d_99(t);
  t = xtc_find_0_0(t);
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_35, y_35);
  {
    static ATerm n_3 (ATerm t)
    {
      ATerm z_35 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, w_35, y_35);
      t = u_8(w_35, y_35, t);
      t = term_i_41;
      z_35 = t;
      t = SSL_exit(z_35);
      return(t);
    }
    t = fork_and_wait_1_0(n_3, t);
  }
  t = y_35;
  return(t);
}
ATerm at_end_1_0 (ATerm p_73 (ATerm), ATerm t)
{
  static ATerm x_36 (ATerm t)
  {
    ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
    w_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_36 = ATgetFirst((ATermList) t);
        v_36 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_8 = NULL,e_8 = NULL,i_2 = NULL;
          t = SSLgetAnnotations(w_36);
          b_8 = t;
          t = v_36;
          t = x_36(t);
          e_8 = t;
          t = (ATerm) ATinsert(CheckATermList(e_8), u_36);
          i_2 = t;
          t = SSLsetAnnotations(i_2, b_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_36;
        t = p_73(t);
      }
    return(t);
  }
  t = x_36(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,f_36 = NULL;
  b_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_36;
    }
  else
    {
      static ATerm q_3 (ATerm t)
      {
        t = not_null(f_36);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_36 = ATgetFirst((ATermList) t);
          if(((f_36 != NULL) && (f_36 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_36;
      t = at_end_1_0(q_3, t);
    }
  return(t);
}
static ATerm r_37 (ATerm e_37, ATerm t)
{
  ATerm h_37 = NULL;
  t = SSL_explode_term(e_37);
  if(match_cons(t, sym__2))
    {
      ATerm j_41 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_41) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_37;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,m_37 = NULL;
  m_37 = t;
  if(match_cons(t, sym__2))
    {
      j_37 = ATgetArgument(t, 0);
      k_37 = ATgetArgument(t, 1);
      {
        ATerm k_41 = t;
        int l_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_3 (ATerm t)
            {
              t = k_37;
              return(t);
            }
            t = j_37;
            t = at_end_1_0(t_3, t);
            LocalPopChoice(l_41);
          }
        else
          {
            t = k_41;
            t = r_37(m_37, t);
          }
      }
    }
  else
    {
      t = r_37(m_37, t);
    }
  return(t);
}
static ATerm f_9 (ATerm q_81 (ATerm), ATerm t_26, ATerm r_26, ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL;
  v_37 = t;
  t = q_81(t);
  s_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_37, t_26, r_26);
  t = n_9(s_37, t_26, r_26, t);
  {
    ATerm m_41 = t;
    int n_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_37 = NULL;
        t = term_r_41;
        y_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_37, term_r_41);
        t = m_9(s_37, y_37, t);
        LocalPopChoice(n_41);
      }
    else
      {
        t = m_41;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_37 = ATgetFirst((ATermList) t);
      u_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_41;
  w_37 = t;
  t = (ATerm) ATinsert(CheckATermList(u_37), (ATerm) ATinsert(CheckATermList(t_37), t_26));
  x_37 = t;
  t = SSL_table_put(s_37, w_37, x_37);
  t = v_37;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm a_38 = NULL;
  ATerm s_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_38 = NULL,w_8 = NULL;
      e_38 = t;
      t = term_y_41;
      w_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_38, term_y_41);
      t = g_9(e_38, w_8, t);
      a_38 = t;
      t = SSL_mkstemp(a_38);
      LocalPopChoice(w_41);
    }
  else
    {
      t = s_41;
      {
        ATerm f_38 = NULL;
        t = term_z_41;
        f_38 = t;
        t = SSL_perror(f_38);
        _fail(t);
      }
    }
  return(t);
}
static ATerm g_9 (ATerm b_35, ATerm c_35, ATerm t)
{
  t = SSL_strcat(b_35, c_35);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
  t = P__tmpdir_0_0(t);
  k_38 = t;
  t = term_a_42;
  l_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_38, term_a_42);
  t = g_9(k_38, l_38, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      i_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_m_8;
  j_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_38, term_m_8);
  t = f_9(v_3, i_38, j_38, t);
  t = SSL_close(h_38);
  t = i_38;
  return(t);
}
ATerm xtc_generate_2_0 (ATerm h_98 (ATerm), ATerm i_98 (ATerm), ATerm t)
{
  ATerm m_38 = NULL,p_38 = NULL;
  t = term_m_8;
  t = xtc_new_file_0_0(t);
  m_38 = t;
  t = i_98(t);
  p_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_38, (ATerm) ATinsert(ATinsert(ATempty, m_38), term_y_7));
  t = conc_0_0(t);
  t = xtc_command_1_0(h_98, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_38);
  return(t);
}
static ATerm i_9 (ATerm c_28, ATerm d_28, ATerm t)
{
  ATerm s_38 = NULL,y_38 = NULL;
  y_38 = t;
  {
    ATerm b_42 = t;
    int c_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
        t = m_9(c_28, d_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_42 = ATgetFirst((ATermList) t);
            s_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_42);
        t = SSL_table_put(c_28, d_28, s_38);
        t = (ATerm) ATmakeAppl(sym__3, c_28, d_28, s_38);
      }
    else
      {
        t = b_42;
        t = SSL_table_remove(c_28, d_28);
        t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
      }
  }
  t = y_38;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_81 (ATerm), ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,e_39 = NULL;
  c_39 = t;
  t = n_81(t);
  b_39 = t;
  {
    ATerm f_42 = t;
    int h_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_39 = NULL;
        t = term_r_41;
        g_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_39, term_r_41);
        t = m_9(b_39, g_39, t);
        LocalPopChoice(h_42);
      }
    else
      {
        t = f_42;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_39 = ATgetFirst((ATermList) t);
      z_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_41;
  e_39 = t;
  t = SSL_table_put(b_39, e_39, z_38);
  t = a_39;
  {
    static ATerm x_3 (ATerm t)
    {
      ATerm h_39 = NULL;
      h_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_39, h_39);
      t = i_9(b_39, h_39, t);
      return(t);
    }
    t = map_1_0(x_3, t);
  }
  t = c_39;
  return(t);
}
ATerm restore_always_2_0 (ATerm y_70 (ATerm), ATerm z_70 (ATerm), ATerm t)
{
  ATerm i_42 = t;
  int j_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_70(t);
      t = z_70(t);
      LocalPopChoice(j_42);
    }
  else
    {
      t = i_42;
      t = z_70(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_81 (ATerm), ATerm t)
{
  ATerm j_39 = NULL,n_39 = NULL,r_39 = NULL,v_39 = NULL,w_39 = NULL;
  n_39 = t;
  t = m_81(t);
  j_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_39, term_r_41);
  {
    ATerm k_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_40 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_42 = ATgetArgument(t, 0);
            ATerm r_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_41;
        a_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_39, term_r_41);
        t = m_9(j_39, a_40, t);
        LocalPopChoice(l_42);
      }
    else
      {
        t = k_42;
        t = (ATerm) ATempty;
      }
  }
  r_39 = t;
  t = term_r_41;
  v_39 = t;
  t = (ATerm) ATinsert(CheckATermList(r_39), (ATerm) ATempty);
  w_39 = t;
  t = SSL_table_put(j_39, v_39, w_39);
  t = n_39;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_f_10;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm k_40 = NULL;
  k_40 = t;
  {
    ATerm s_42 = t;
    int z_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(k_40);
        LocalPopChoice(z_42);
      }
    else
      {
        t = s_42;
        t = k_40;
      }
  }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm p_98 (ATerm), ATerm t)
{
  ATerm d_40 = NULL;
  static ATerm z_3 (ATerm t)
  {
    ATerm e_40 = NULL;
    e_40 = t;
    {
      ATerm a_43 = t;
      int c_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_40 = NULL,g_40 = NULL;
          t = term_f_10;
          f_40 = t;
          t = term_r_41;
          g_40 = t;
          t = term_e_43;
          t = m_9(f_40, g_40, t);
          LocalPopChoice(c_43);
        }
      else
        {
          t = a_43;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_40 != NULL) && (d_40 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_40 = ATgetFirst((ATermList) t);
        {
          ATerm f_43 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = d_40;
    t = map_1_0(a_4, t);
    t = e_40;
    t = end_scope_1_0(c_4, t);
    return(t);
  }
  t = begin_scope_1_0(y_3, t);
  t = restore_always_2_0(p_98, z_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_40 = NULL,y_40 = NULL,a_41 = NULL,e_41 = NULL,f_41 = NULL;
  q_40 = t;
  t = term_m_8;
  t = whoami_0_0(t);
  y_40 = t;
  t = term_o_25;
  e_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_43), y_40), term_i_43);
  f_41 = t;
  t = SSL_printnl(e_41, f_41);
  t = term_n_13;
  a_41 = t;
  t = SSL_exit(a_41);
  t = q_40;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,t_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_41 = NULL,v_41 = NULL,x_41 = NULL;
      t = term_m_8;
      t = n_0(t);
      u_41 = t;
      t = term_k_43;
      v_41 = t;
      t = term_n_43;
      x_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_43, term_n_43, u_41);
      t = n_9(v_41, x_41, u_41, t);
      _fail(t);
    }
  else
    {
      ATerm d_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_41 = ATgetFirst((ATermList) t);
          p_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_41 = ATgetFirst((ATermList) t);
          t_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_41;
      t = k_0(t);
      t = q_41;
      t = l_0(t);
      d_42 = t;
      t = (ATerm) ATinsert(CheckATermList(t_41), d_42);
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm g_42 = NULL;
  g_42 = t;
  if(match_string(t, "-k"))
    {
      t = g_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_42;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
  m_42 = t;
  t = SSL_string_to_int(m_42);
  n_42 = t;
  t = term_p_43;
  o_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_43, n_42);
  t = p_9(o_42, n_42, t);
  t = m_42;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_q_43;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_4, j_4, k_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm q_42 = NULL;
  q_42 = t;
  if(match_string(t, "-S"))
    {
      t = q_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_42;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL;
  t = term_e_27;
  t_42 = t;
  t = term_t_13;
  u_42 = t;
  t = term_r_43;
  t = p_9(t_42, u_42, t);
  t = term_d_44;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  v_42 = t;
  t = SSL_string_to_int(v_42);
  w_42 = t;
  t = term_e_27;
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_27, w_42);
  t = p_9(x_42, w_42, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_42);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_g_44;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm y_42 = NULL,b_43 = NULL;
  t = term_j_44;
  y_42 = t;
  t = term_m_8;
  b_43 = t;
  t = term_k_44;
  t = p_9(y_42, b_43, t);
  t = term_m_44;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_n_44;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_4, n_4, p_4, t);
      LocalPopChoice(q_44);
    }
  else
    {
      t = p_44;
      {
        ATerm s_44 = t;
        int t_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_4, t_4, u_4, t);
            LocalPopChoice(t_44);
          }
        else
          {
            t = s_44;
            t = Option_3_0(v_4, w_4, y_4, t);
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm d_43 = NULL;
  d_43 = t;
  if(match_string(t, "-o"))
    {
      t = d_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_43;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL;
  g_43 = t;
  t = term_y_7;
  h_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, g_43);
  t = p_9(h_43, g_43, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_43);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_u_44;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_5, c_5, d_5, t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm l_43 = NULL;
  l_43 = t;
  if(match_string(t, "-i"))
    {
      t = l_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_43;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm m_43 = NULL,o_43 = NULL;
  m_43 = t;
  t = term_u_10;
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_10, m_43);
  t = p_9(o_43, m_43, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_43);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_v_44;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_5, m_5, n_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
  s_43 = t;
  t = term_w_44;
  t_43 = t;
  t = term_x_44;
  u_43 = t;
  t = term_y_44;
  t = p_9(t_43, u_43, t);
  t = s_43;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_z_44;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm v_43 = NULL;
  v_43 = t;
  if(match_string(t, "-t"))
    {
      t = v_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--title", 0, ATtrue)))
        _fail(t);
      t = v_43;
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL;
  w_43 = t;
  t = term_h_25;
  x_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_25, w_43);
  t = p_9(x_43, w_43, t);
  t = w_43;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_a_45;
  return(t);
}
ATerm abox2html_options_0_0 (ATerm t)
{
  ATerm b_45 = t;
  int c_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(c_45);
    }
  else
    {
      t = b_45;
      {
        ATerm g_45 = t;
        int h_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(h_45);
          }
        else
          {
            t = g_45;
            {
              ATerm i_45 = t;
              int j_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(j_45);
                }
              else
                {
                  t = i_45;
                  {
                    ATerm k_45 = t;
                    int l_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(l_45);
                      }
                    else
                      {
                        t = k_45;
                        {
                          ATerm m_45 = t;
                          int n_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(t_5, v_5, x_5, t);
                              LocalPopChoice(n_45);
                            }
                          else
                            {
                              t = m_45;
                              t = ArgOption_3_0(y_5, z_5, a_6, t);
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
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_8;
  t = whoami_0_0(t);
  y_43 = t;
  t = term_o_25;
  a_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_45), y_43);
  b_44 = t;
  t = SSL_printnl(a_44, b_44);
  t = term_n_13;
  z_43 = t;
  t = SSL_exit(z_43);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm c_44 = NULL,f_44 = NULL;
  t = term_x_7;
  c_44 = t;
  t = term_p_45;
  f_44 = t;
  t = term_q_45;
  t = m_9(c_44, f_44, t);
  return(t);
}
static ATerm j_9 (ATerm f_25, ATerm g_25, ATerm t)
{
  ATerm s_45 = t;
  int v_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_25, g_25);
      LocalPopChoice(v_45);
    }
  else
    {
      t = s_45;
      t = SSL_addr(f_25, g_25);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,l_44 = NULL;
  h_44 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_44;
      t = e_80(t);
    }
  else
    {
      ATerm o_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_44 = ATgetFirst((ATermList) t);
          l_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_44;
      t = foldr_2_0(e_80, f_80, t);
      o_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_44, o_44);
      t = f_80(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9(v_9, w_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_44 = NULL,r_9 = NULL,s_9 = NULL;
  t = times_0_0(t);
  s_9 = t;
  t = SSL_explode_term(s_9);
  if(match_cons(t, sym__2))
    {
      ATerm x_45 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9;
  t = foldr_2_0(b_6, c_6, t);
  r_44 = t;
  t = SSL_TicksToSeconds(r_44);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  d_45 = t;
  if(match_cons(t, sym__2))
    {
      e_45 = ATgetArgument(t, 0);
      f_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_46 = t;
    int b_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_45;
        if((e_45 != t))
          {
            _fail(t);
          }
        t = d_45;
        LocalPopChoice(b_46);
      }
    else
      {
        t = a_46;
        t = (ATerm) ATmakeAppl(sym__2, e_45, f_45);
        {
          ATerm d_46 = t;
          int e_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_45, f_45);
              LocalPopChoice(e_46);
            }
          else
            {
              t = d_46;
              t = SSL_gtr(e_45, f_45);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_45, f_45);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_97 (ATerm), ATerm t)
{
  ATerm r_45 = NULL;
  r_45 = t;
  {
    ATerm h_46 = t;
    int i_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_45 = NULL,u_45 = NULL,w_45 = NULL;
        t = term_x_7;
        u_45 = t;
        t = term_e_27;
        w_45 = t;
        t = term_o_27;
        t = m_9(u_45, w_45, t);
        t_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_45, term_n_13);
        t = geq_0_0(t);
        t = r_45;
        t = b_97(t);
        LocalPopChoice(i_46);
      }
    else
      {
        t = h_46;
        t = r_45;
      }
  }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,c_46 = NULL,f_46 = NULL;
  t = run_time_0_0(t);
  y_45 = t;
  t = term_m_8;
  t = whoami_0_0(t);
  z_45 = t;
  t = term_o_25;
  c_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_46), y_45), term_r_27), z_45);
  f_46 = t;
  t = SSL_printnl(c_46, f_46);
  t = (ATerm) ATmakeAppl(sym__2, term_o_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_46), y_45), term_r_27), z_45));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_13;
  g_46 = t;
  t = SSL_exit(g_46);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL;
  s_46 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_46;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_46 = ATgetArgument(t, 0);
          {
            ATerm i_10 = NULL,m_2 = NULL;
            t = SSLgetAnnotations(s_46);
            i_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_46);
            m_2 = t;
            t = SSLsetAnnotations(m_2, i_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_46;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_66 (ATerm), ATerm t)
{
  ATerm m_46 = t;
  int n_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_46 = NULL,k_46 = NULL;
      t = term_x_7;
      j_46 = t;
      t = term_o_46;
      k_46 = t;
      t = term_p_46;
      t = m_9(j_46, k_46, t);
      LocalPopChoice(n_46);
    }
  else
    {
      t = m_46;
      t = fetch_1_0(e_6, t);
    }
  t = m_66(t);
  return(t);
}
ATerm map_1_0 (ATerm y_72 (ATerm), ATerm t)
{
  static ATerm x_47 (ATerm t)
  {
    ATerm q_47 = NULL,t_47 = NULL,u_47 = NULL;
    q_47 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_47;
      }
    else
      {
        ATerm t_10 = NULL,c_11 = NULL,e_11 = NULL,u_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_47 = ATgetFirst((ATermList) t);
            u_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_47);
        t_10 = t;
        t = t_47;
        t = y_72(t);
        c_11 = t;
        t = u_47;
        t = x_47(t);
        e_11 = t;
        t = (ATerm) ATinsert(CheckATermList(e_11), c_11);
        u_9 = t;
        t = SSLsetAnnotations(u_9, t_10);
      }
    return(t);
  }
  t = x_47(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_48 = ATgetFirst((ATermList) t);
      f_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_48 = NULL,m_48 = NULL;
        static ATerm f_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_48)), not_null(m_48));
          return(t);
        }
        t = f_48;
        t = i_0(t);
        if(((l_48 != NULL) && (l_48 != t)))
          _fail(t);
        else
          l_48 = t;
        t = e_48;
        t = g_0(t);
        if(((m_48 != NULL) && (m_48 != t)))
          _fail(t);
        else
          m_48 = t;
        t = f_48;
        t = reverse_acc_2_0(g_0, f_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_8;
      t = i_0(t);
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL,l_14 = NULL;
  a_49 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_49);
  y_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_48);
  l_14 = t;
  t = SSLsetAnnotations(l_14, y_48);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm c_49 = NULL;
  c_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_49), term_q_46);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL;
  ATerm t_46 = t;
  int u_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_48 = NULL,x_48 = NULL;
      t = term_x_7;
      w_48 = t;
      t = term_p_45;
      x_48 = t;
      t = term_q_45;
      t = m_9(w_48, x_48, t);
      LocalPopChoice(u_46);
    }
  else
    {
      t = t_46;
      t = fetch_1_0(g_6, t);
    }
  t = term_v_46;
  t = echo_0_0(t);
  t = term_k_43;
  u_48 = t;
  t = term_n_43;
  v_48 = t;
  t = term_w_46;
  t = m_9(u_48, v_48, t);
  t = reverse_acc_2_0(_id, h_6, t);
  t = map_1_0(i_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_73 (ATerm), ATerm t)
{
  static ATerm j_51 (ATerm t)
  {
    ATerm f_51 = NULL,g_51 = NULL,i_51 = NULL;
    f_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_51 = ATgetFirst((ATermList) t);
        i_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_46 = t;
      int y_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_12 = NULL,p_12 = NULL,n_14 = NULL;
          t = SSLgetAnnotations(f_51);
          i_12 = t;
          t = g_51;
          t = i_73(t);
          p_12 = t;
          t = (ATerm) ATinsert(CheckATermList(i_51), p_12);
          n_14 = t;
          t = SSLsetAnnotations(n_14, i_12);
          LocalPopChoice(y_46);
        }
      else
        {
          t = x_46;
          {
            ATerm e_13 = NULL,h_13 = NULL,o_14 = NULL;
            t = SSLgetAnnotations(f_51);
            e_13 = t;
            t = i_51;
            t = j_51(t);
            h_13 = t;
            t = (ATerm) ATinsert(CheckATermList(h_13), g_51);
            o_14 = t;
            t = SSLsetAnnotations(o_14, e_13);
          }
        }
    }
    return(t);
  }
  t = j_51(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL;
  o_51 = t;
  {
    ATerm z_46 = t;
    int a_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_51;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_47 = ATgetFirst((ATermList) t);
                ATerm c_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_51;
          }
        LocalPopChoice(a_47);
      }
    else
      {
        t = z_46;
        t = (ATerm) ATinsert(ATempty, o_51);
      }
  }
  p_51 = t;
  t = term_a_8;
  q_51 = t;
  t = SSL_printnl(q_51, p_51);
  t = o_51;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL;
  t = term_x_7;
  u_51 = t;
  t = term_p_45;
  v_51 = t;
  t = term_q_45;
  t = m_9(u_51, v_51, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm w_51 = NULL,x_51 = NULL;
  t = term_d_47;
  w_51 = t;
  t = term_m_8;
  x_51 = t;
  t = term_e_47;
  t = p_9(w_51, x_51, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_f_47;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL;
  t = term_d_47;
  z_52 = t;
  t = term_m_8;
  a_53 = t;
  t = term_e_47;
  t = p_9(z_52, a_53, t);
  t = term_i_47;
  x_52 = t;
  t = term_m_8;
  y_52 = t;
  t = term_j_47;
  t = p_9(x_52, y_52, t);
  t = term_k_47;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_l_47;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_47 = t;
  int n_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_6, m_6, p_6, t);
      LocalPopChoice(n_47);
    }
  else
    {
      t = m_47;
      t = Option_3_0(v_6, c_7, d_7, t);
    }
  return(t);
}
static ATerm p_9 (ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm b_53 = NULL;
  t = term_x_7;
  b_53 = t;
  t = SSL_table_put(b_53, g_47, h_47);
  t = (ATerm) ATmakeAppl(sym__3, term_x_7, g_47, h_47);
  return(t);
}
static ATerm n_9 (ATerm x_27, ATerm y_27, ATerm w_27, ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
  d_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_27, y_27);
  {
    ATerm o_47 = t;
    int p_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_47 = ATgetArgument(t, 0);
            ATerm s_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_27, y_27);
        t = m_9(x_27, y_27, t);
        LocalPopChoice(p_47);
      }
    else
      {
        t = o_47;
        t = (ATerm) ATempty;
      }
  }
  e_53 = t;
  t = (ATerm) ATinsert(CheckATermList(e_53), w_27);
  f_53 = t;
  t = SSL_table_put(x_27, y_27, f_53);
  t = d_53;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
      t = term_m_8;
      t = e_0(t);
      n_53 = t;
      t = term_k_43;
      o_53 = t;
      t = term_n_43;
      p_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_43, term_n_43, n_53);
      t = n_9(o_53, p_53, n_53, t);
      _fail(t);
    }
  else
    {
      ATerm s_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_53 = ATgetFirst((ATermList) t);
          m_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_53;
      t = c_0(t);
      t = term_m_8;
      t = d_0(t);
      s_53 = t;
      t = (ATerm) ATinsert(CheckATermList(m_53), s_53);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_59 (ATerm), ATerm x_59 (ATerm), ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,r_14 = NULL;
  y_53 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_53 = ATgetFirst((ATermList) t);
      v_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_53);
  t_53 = t;
  t = u_53;
  t = w_59(t);
  w_53 = t;
  t = v_53;
  t = x_59(t);
  x_53 = t;
  t = (ATerm) ATinsert(CheckATermList(x_53), w_53);
  r_14 = t;
  t = SSLsetAnnotations(r_14, t_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,i_54 = NULL,j_54 = NULL,t_14 = NULL;
  d_54 = t;
  {
    ATerm v_47 = t;
    int w_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_47;
        t = r_87(t);
        LocalPopChoice(w_47);
      }
    else
      {
        t = v_47;
      }
  }
  t = d_54;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_54 = ATgetFirst((ATermList) t);
      g_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_54);
  e_54 = t;
  t = term_p_45;
  j_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_45, f_54);
  t = p_9(j_54, f_54, t);
  t = g_54;
  {
    static ATerm t_54 (ATerm t)
    {
      ATerm z_47 = t;
      int a_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_48 = t;
          int c_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_54 = NULL;
              m_54 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_54;
              LocalPopChoice(c_48);
            }
          else
            {
              t = b_48;
              t = r_87(t);
              t = Cons_2_0(_id, t_54, t);
            }
          LocalPopChoice(a_48);
        }
      else
        {
          t = z_47;
          {
            ATerm p_54 = NULL,q_54 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_54 = ATgetFirst((ATermList) t);
                q_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_54), (ATerm) ATmakeAppl(sym_Undefined_1, p_54));
          }
        }
      return(t);
    }
    t = t_54(t);
  }
  i_54 = t;
  t = (ATerm) ATinsert(CheckATermList(i_54), (ATerm) ATmakeAppl(sym_Program_1, f_54));
  t_14 = t;
  t = SSLsetAnnotations(t_14, e_54);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm f_55 = NULL;
  f_55 = t;
  if(match_string(t, "--help"))
    {
      t = f_55;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_55;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_55;
        }
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL;
  t = term_o_46;
  g_55 = t;
  t = term_m_8;
  h_55 = t;
  t = term_d_48;
  t = p_9(g_55, h_55, t);
  t = term_g_48;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_h_48;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL;
  a_55 = t;
  t = term_k_43;
  c_55 = t;
  t = term_n_43;
  d_55 = t;
  t = (ATerm) ATempty;
  e_55 = t;
  t = SSL_table_put(c_55, d_55, e_55);
  t = a_55;
  {
    static ATerm e_7 (ATerm t)
    {
      ATerm i_48 = t;
      int j_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_87(t);
          LocalPopChoice(j_48);
        }
      else
        {
          t = i_48;
          {
            ATerm k_48 = t;
            int n_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_7, k_7, l_7, t);
                LocalPopChoice(n_48);
              }
            else
              {
                t = k_48;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_7, t);
  }
  {
    ATerm o_48 = t;
    int p_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_55 = NULL;
        s_55 = t;
        {
          ATerm q_48 = t;
          int r_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_13 = NULL;
              t = s_55;
              {
                ATerm s_48 = t;
                int t_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_13 = NULL,r_13 = NULL;
                    t = term_x_7;
                    q_13 = t;
                    t = term_o_46;
                    r_13 = t;
                    t = term_p_46;
                    t = m_9(q_13, r_13, t);
                    LocalPopChoice(t_48);
                  }
                else
                  {
                    t = s_48;
                    t = fetch_1_0(m_7, t);
                  }
              }
              t = s_55;
              t = default_system_usage_0_0(t);
              t = term_t_13;
              p_13 = t;
              t = SSL_exit(p_13);
              LocalPopChoice(r_48);
            }
          else
            {
              t = q_48;
              {
                ATerm v_13 = NULL,w_13 = NULL,z_13 = NULL;
                t = term_x_7;
                w_13 = t;
                t = term_d_47;
                z_13 = t;
                t = term_b_49;
                t = m_9(w_13, z_13, t);
                t = s_55;
                t = default_system_about_0_0(t);
                t = term_t_13;
                v_13 = t;
                t = SSL_exit(v_13);
              }
            }
        }
        LocalPopChoice(p_48);
      }
    else
      {
        t = o_48;
        {
          ATerm d_49 = t;
          int e_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL;
              static ATerm p_7 (ATerm t)
              {
                ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL,v_14 = NULL;
                y_55 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_55 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_55);
                w_55 = t;
                t = x_55;
                if(((y_54 != NULL) && (y_54 != t)))
                  _fail(t);
                else
                  y_54 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_55);
                v_14 = t;
                t = SSLsetAnnotations(v_14, w_55);
                return(t);
              }
              t = fetch_1_0(p_7, t);
              t = term_o_25;
              u_55 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_54)), term_f_49);
              v_55 = t;
              t = SSL_printnl(u_55, v_55);
              t = (ATerm) ATmakeAppl(sym__2, term_o_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_54)), term_f_49));
              t = default_system_usage_0_0(t);
              t = term_n_13;
              t_55 = t;
              t = SSL_exit(t_55);
              LocalPopChoice(e_49);
            }
          else
            {
              t = d_49;
            }
        }
      }
  }
  z_54 = t;
  t = term_k_43;
  b_55 = t;
  t = SSL_table_destroy(b_55);
  t = z_54;
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_66 (ATerm), ATerm p_66 (ATerm), ATerm q_66 (ATerm), ATerm r_66 (ATerm), ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL;
  t = parse_options_1_0(o_66, t);
  d_56 = t;
  t = term_g_49;
  g_56 = t;
  t = SSL_table_create(g_56);
  t = term_g_49;
  e_56 = t;
  t = term_h_49;
  f_56 = t;
  t = SSL_table_put(e_56, f_56, d_56);
  t = d_56;
  t = q_66(t);
  {
    ATerm i_49 = t;
    int j_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_66, t);
        LocalPopChoice(j_49);
      }
    else
      {
        t = i_49;
        {
          ATerm k_49 = t;
          int l_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_66(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_49);
            }
          else
            {
              t = k_49;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm n_49 = t;
  int o_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_56 = NULL,d_14 = NULL,e_14 = NULL;
      q_56 = t;
      t = term_x_7;
      d_14 = t;
      t = term_w_44;
      e_14 = t;
      t = term_x_49;
      t = m_9(d_14, e_14, t);
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("gen-css", 0, ATtrue)))
        _fail(t);
      t = q_56;
      t = xtc_temp_files_1_0(r_7, t);
      LocalPopChoice(o_49);
    }
  else
    {
      t = n_49;
      t = abox2html_0_0(t);
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = xtc_generate_2_0(s_7, pass_verbose_0_0, t);
  t = copy_to_1_0(t_7, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_y_49;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm z_49 = t;
  int a_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_14 = NULL,i_14 = NULL;
      t = term_x_7;
      f_14 = t;
      t = term_y_7;
      i_14 = t;
      t = term_z_7;
      t = m_9(f_14, i_14, t);
      LocalPopChoice(a_50);
    }
  else
    {
      t = z_49;
      t = term_a_8;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2html_options_0_0, default_usage_0_0, _id, q_7, t);
  return(t);
}
