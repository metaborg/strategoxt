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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_d_51;
ATerm term_w_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_n_50;
ATerm term_k_50;
ATerm term_q_49;
ATerm term_o_49;
ATerm term_n_49;
ATerm term_l_49;
ATerm term_b_49;
ATerm term_r_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_a_48;
ATerm term_w_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_n_47;
ATerm term_l_47;
ATerm term_f_47;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_s_45;
ATerm term_m_45;
ATerm term_k_45;
ATerm term_e_45;
ATerm term_x_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_h_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_h_43;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_y_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_l_41;
ATerm term_z_40;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_j_40;
ATerm term_g_40;
ATerm term_e_40;
ATerm term_c_40;
ATerm term_a_40;
ATerm term_s_39;
ATerm term_o_39;
ATerm term_v_38;
ATerm term_t_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_f_38;
ATerm term_c_38;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_k_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_q_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_p_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_s_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_p_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_c_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_v_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_n_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_m_25;
ATerm term_g_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_z_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_f_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_n_19;
ATerm term_h_19;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_w_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_t_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_d_10;
ATerm term_j_8;
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
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Dec", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Nov", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Oct", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Sep", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Aug", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Jul", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Jun", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("May", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Apr", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Mar", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Feb", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Jan", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("December", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("November", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("October", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("September", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("August", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("July", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("June", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("April", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("March", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("February", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("January", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Sat", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Fri", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Thu", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Wed", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Tue", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Mon", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Sun", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Saturday", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Friday", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Thursday", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Wednesday", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuesday", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Monday", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Sunday", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(100);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("p.m.", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("a.m.", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_Saturday_0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Friday_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Thursday_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Wednesday_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Tuesday_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Monday_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_Sunday_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_December_0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_November_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_October_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_September_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_August_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_July_0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_June_0);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_May_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_April_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_March_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_February_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_January_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("EEEE", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("d", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("MMMM", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("yyyy", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("HH", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("mm", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ss", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--title", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_s_25);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no title specified for HTML document", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("<!-- \n", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   This file is generated at ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" \n", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   by abox2html (C) 2001 Merijn de Jonge (mdejonge@cwi.nl)\n", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-->\n", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<!doctype html public \"-//W3C//DTD WWW HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/loose.dtd\"> \n", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<html>\n", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  <head>\n", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("    <title>", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("</title>\n", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("    <link rel=\"stylesheet\" type=\"text/css\" href=\"boxstyle.css\">\n", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  </head>\n", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  <body>\n", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_w_10);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("  </body>\n", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("</html>\n", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-html", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_n_27);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_28, term_t_13, term_n_28);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_28, term_w_14, term_s_28);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_29, term_r_14, term_d_29);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_29, term_j_14, term_k_29);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_29, term_b_14, term_p_29);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_29, term_z_29, term_a_30);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_30, term_f_30, term_j_30);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_30, term_i_14, term_n_30);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_30, term_s_30, term_v_30);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_30, term_y_30, term_a_31);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_31, term_h_14, term_d_31);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_31, term_q_14, term_a_32);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_32, term_l_32, term_m_32);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_32, term_z_13, term_s_32);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_33, term_h_33, term_i_33);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_33, term_l_33, term_m_33);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_33, term_p_33, term_q_33);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_33, term_t_33, term_u_33);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_33, term_e_16, term_x_33);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_33, term_a_14, term_a_34);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_34, term_d_16, term_d_34);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_34, term_j_34, term_k_34);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_34, term_r_34, term_s_34);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_34, term_v_34, term_c_35);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_35, term_p_14, term_f_35);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_35, term_i_35, term_k_35);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_35, term_n_35, term_o_35);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_35, term_x_35, term_y_35);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_o_39);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym__2, term_t_38, term_e_40);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(sym__2, term_t_38, term_v_38);
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(sym__2, term_k_10, term_y_41);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(sym__2, term_n_27, term_x_13);
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_13);
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(sym__2, term_z_43, term_j_8);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym__2, term_x_44, term_e_45);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Only generate cascading style sheet", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-t title    Title of HTML document", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_k_46);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_l_47);
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym__2, term_m_43, term_n_43);
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(sym__2, term_j_48, term_j_8);
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(sym__2, term_m_48, term_j_8);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(sym__2, term_l_47, term_j_8);
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(sym__3, term_m_43, term_n_43, (ATerm) ATempty);
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_j_48);
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_x_44);
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css-boxstyle", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_close_fd_0_0 (ATerm t);
static ATerm u_8 (ATerm d_47, ATerm e_47, ATerm t);
ATerm File_as_fd_1_0 (ATerm o_111 (ATerm), ATerm t);
ATerm STDERR__FILENO_0_0 (ATerm t);
ATerm STDOUT__FILENO_0_0 (ATerm t);
ATerm STDIN__FILENO_0_0 (ATerm t);
ATerm xtc_open_fd_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm xtc_new_file_name_0_0 (ATerm t);
ATerm xtc_cat_0_0 (ATerm t);
static ATerm e_4 (ATerm m_3, ATerm t);
static ATerm f_4 (ATerm o_3, ATerm p_3, ATerm s_3, ATerm t);
static ATerm x_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm print_to_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm w_8 (ATerm a_51, ATerm b_51, ATerm t);
static ATerm x_8 (ATerm m_100 (ATerm), ATerm z_545, ATerm k_51, ATerm t);
static ATerm b_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm month2abbr_0_0 (ATerm t);
ATerm month2text_0_0 (ATerm t);
ATerm lt_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm day_of_week2abbr_0_0 (ATerm t);
ATerm day_of_week2text_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm t);
ATerm for_3_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
static ATerm z_8 (ATerm b_45, ATerm z_44, ATerm a_45, ATerm t);
static ATerm a_9 (ATerm i_44, ATerm j_44, ATerm k_44, ATerm t);
static ATerm b_9 (ATerm i_26, ATerm j_26, ATerm t);
ATerm month2index_0_0 (ATerm t);
ATerm date_pattern_to_int_0_0 (ATerm t);
static ATerm p_17 (ATerm k_15, ATerm l_15, ATerm t);
ATerm date_pattern_to_string_0_0 (ATerm t);
static ATerm c_9 (ATerm p_64, ATerm o_64, ATerm t);
ATerm index2day_of_week_0_0 (ATerm t);
ATerm index2month_0_0 (ATerm t);
static ATerm d_9 (ATerm k_61, ATerm j_61, ATerm i_61, ATerm h_61, ATerm g_61, ATerm f_61, ATerm l_61, ATerm m_61, ATerm t);
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t);
static ATerm e_9 (ATerm c_61, ATerm t);
ATerm now_epoch_time_0_0 (ATerm t);
ATerm now_local_time_0_0 (ATerm t);
ATerm create_time_0_0 (ATerm t);
ATerm get_title_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm abox2html_0_0 (ATerm t);
static ATerm b_10 (ATerm v_29, ATerm w_29, ATerm t);
static ATerm u_9 (ATerm b_47, ATerm c_47, ATerm t);
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm f_9 (ATerm q_25, ATerm r_25, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm g_9 (ATerm d_50, ATerm e_50, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm n_85 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm r_99 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm k_100 (ATerm), ATerm t);
static ATerm i_9 (ATerm b_33, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm x_110 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm w_110 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm y_110 (ATerm), ATerm t);
static ATerm k_9 (ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm x_21, ATerm w_21, ATerm t);
static ATerm l_9 (ATerm m_89 (ATerm), ATerm t_21, ATerm s_21, ATerm t);
static ATerm t_1 (ATerm t);
static ATerm m_9 (ATerm z_28, ATerm a_29, ATerm b_29, ATerm t);
static ATerm n_9 (ATerm j_94 (ATerm), ATerm j_29, ATerm i_29, ATerm t);
static ATerm r_9 (ATerm c_14, ATerm d_14, ATerm t);
static ATerm a_28 (ATerm u_27, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_9 (ATerm g_51, ATerm t);
static ATerm p_9 (ATerm l_14, ATerm m_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_30 (ATerm q_28, ATerm t);
static ATerm l_30 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t);
static ATerm o_30 (ATerm n_29, ATerm s_29, ATerm t_29, ATerm t);
static ATerm q_9 (ATerm t);
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
ATerm filter_1_0 (ATerm z_96 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm t_36 (ATerm j_35, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm v_112 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm s_85 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm u_38 (ATerm g_38, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm s_9 (ATerm b_94 (ATerm), ATerm y_26, ATerm w_26, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm t_9 (ATerm r_46, ATerm s_46, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_generate_2_0 (ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm t);
static ATerm v_9 (ATerm h_28, ATerm i_28, ATerm t);
ATerm end_scope_1_0 (ATerm y_93 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm x_93 (ATerm), ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm h_112 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
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
static ATerm w_9 (ATerm k_25, ATerm l_25, ATerm t);
ATerm foldr_2_0 (ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_110 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm need_help_1_0 (ATerm k_78 (ATerm), ATerm t);
static ATerm f_10 (ATerm u_32, ATerm v_32, ATerm w_32, ATerm t);
static ATerm g_10 (ATerm x_32, ATerm y_32, ATerm t);
ATerm lookup_table_0_1 (ATerm o_29, ATerm t);
ATerm new_hashtable_0_2 (ATerm c_33, ATerm d_33, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm y_9 (ATerm z_32, ATerm a_33, ATerm t);
static ATerm z_9 (ATerm e_33, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm b_85 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_85 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm e_10 (ATerm w_58, ATerm x_58, ATerm t);
static ATerm c_10 (ATerm c_28, ATerm d_28, ATerm b_28, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm p_71 (ATerm), ATerm q_71 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_102 (ATerm), ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm parse_options_1_0 (ATerm s_102 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm t);
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
      t = b_10(y_0, z_0, t);
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
      ATerm b_0 = NULL,e_0 = NULL;
      t = term_y_7;
      {
        ATerm c_8 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 = NULL,v_0 = NULL;
            t = term_x_7;
            f_0 = t;
            t = term_y_7;
            v_0 = t;
            t = term_z_7;
            t = b_10(f_0, v_0, t);
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
      e_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_f_8, b_0);
      t = u_9(e_0, b_0, t);
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
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 = NULL;
        t = term_j_8;
        t = STDIN__FILENO_0_0(t);
        i_1 = t;
        if((g_1 != t))
          {
            _fail(t);
          }
        t = i_1;
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        {
          ATerm k_8 = t;
          int m_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_1 = NULL;
              t = term_j_8;
              t = STDOUT__FILENO_0_0(t);
              l_1 = t;
              if((g_1 != t))
                {
                  _fail(t);
                }
              t = l_1;
              LocalPopChoice(m_8);
            }
          else
            {
              t = k_8;
              {
                ATerm n_8 = t;
                int o_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_1 = NULL;
                    t = term_j_8;
                    t = STDERR__FILENO_0_0(t);
                    p_1 = t;
                    if((g_1 != t))
                      {
                        _fail(t);
                      }
                    t = p_1;
                    LocalPopChoice(o_8);
                  }
                else
                  {
                    t = n_8;
                    t = SSL_close(g_1);
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm u_8 (ATerm d_47, ATerm e_47, ATerm t)
{
  t = SSL_fdcopy(d_47, e_47);
  return(t);
}
ATerm File_as_fd_1_0 (ATerm o_111 (ATerm), ATerm t)
{
  ATerm u_1 = NULL;
  t = xtc_open_fd_0_0(t);
  u_1 = t;
  {
    ATerm p_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_111(t);
        LocalPopChoice(s_8);
        {
          ATerm v_1 = NULL;
          v_1 = t;
          {
            ATerm h_9 = t;
            int j_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = u_1;
                t = xtc_close_fd_0_0(t);
                LocalPopChoice(j_9);
              }
            else
              {
                t = h_9;
              }
          }
          t = v_1;
        }
      }
    else
      {
        t = p_8;
        {
          ATerm x_9 = t;
          int a_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_1;
              t = xtc_close_fd_0_0(t);
              LocalPopChoice(a_10);
            }
          else
            {
              t = x_9;
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
          t = term_j_8;
          t = STDIN__FILENO_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_stdout_0))
            {
              t = term_j_8;
              t = STDOUT__FILENO_0_0(t);
            }
          else
            {
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
              t = term_j_8;
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
  t = term_j_8;
  t = new_0_0(t);
  p_2 = t;
  t = term_d_10;
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_2, term_d_10);
  t = t_9(p_2, q_2, t);
  r_2 = t;
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_2 = NULL;
        t = (ATerm) ATinsert(ATempty, term_j_10);
        t_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_2, (ATerm) ATinsert(ATempty, term_j_10));
        t = r_9(r_2, t_2, t);
        t = new_file_0_0(t);
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        t = r_2;
      }
  }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm xtc_new_file_name_0_0 (ATerm t)
{
  ATerm x_2 = NULL,z_2 = NULL;
  t = new_file_0_0(t);
  x_2 = t;
  t = term_j_8;
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_2, term_j_8);
  t = s_9(i_0, x_2, z_2, t);
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
    static ATerm n_0 (ATerm t);
    static ATerm n_0 (ATerm t)
    {
      static ATerm w_0 (ATerm t);
      static ATerm w_0 (ATerm t)
      {
        ATerm i_3 = NULL;
        i_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_3, f_3);
        t = u_8(i_3, f_3, t);
        return(t);
      }
      t = File_as_fd_1_0(w_0, t);
      return(t);
    }
    t = map_1_0(n_0, t);
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
    ATerm l_10 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_10 = ATgetArgument(t, 0);
            ATerm o_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_10;
      }
  }
  t = term_p_10;
  t = debug_1_0(x_0, t);
  t = (ATerm) ATmakeAppl(sym__2, m_3, term_q_10);
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
  t = term_r_10;
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
        ATerm s_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_4(w_3, t);
            LocalPopChoice(u_10);
          }
        else
          {
            t = s_10;
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
  t = (ATerm) ATmakeAppl(sym__2, h_4, term_q_10);
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
      t = (ATerm) ATinsert(ATempty, term_j_10);
      o_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_4, (ATerm) ATinsert(ATempty, term_j_10));
      t = r_9(m_4, o_4, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm w_8 (ATerm a_51, ATerm b_51, ATerm t)
{
  ATerm f_5 = NULL;
  t = SSL_write_term_to_stream_baf(a_51, b_51);
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_5);
  return(t);
}
static ATerm x_8 (ATerm m_100 (ATerm), ATerm z_545, ATerm k_51, ATerm t)
{
  ATerm g_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_545, term_q_10);
  t = q_9(t);
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_5, k_51);
  t = m_100(t);
  t = fclose_0_0(t);
  t = k_51;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_10 = ATgetArgument(t, 0);
      if(match_cons(v_10, sym_Stream_1))
        {
          j_5 = ATgetArgument(v_10, 0);
        }
      else
        _fail(t);
      k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_8(j_5, k_5, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL;
  i_5 = t;
  t = xtc_new_file_0_0(t);
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_5, i_5);
  t = x_8(b_1, h_5, i_5, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_5);
  t = xtc_transform_file_2_0(u_111, v_111, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  p_5 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm r_5 = NULL,s_5 = NULL;
      t = p_5;
      t = xtc_new_file_0_0(t);
      r_5 = t;
      t = t_0(t);
      s_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_5, (ATerm) ATinsert(ATinsert(ATempty, r_5), term_y_7));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
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
      t = t_0(t);
      w_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_5), term_y_7), q_5), term_w_10));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
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
          t = term_z_10;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_d_11;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_e_11;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_f_11;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_g_11;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_r_11;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_t_11;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_u_11;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_w_11;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_x_11;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_y_11;
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
      t = term_b_12;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_c_12;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_d_12;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_e_12;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_f_12;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_h_12;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_i_12;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_t_11;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_j_12;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_l_12;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_m_12;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_o_12;
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
  ATerm p_12 = t;
  if((PushChoice() == 0))
    {
      t = geq_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_12;
    }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm q_12 = t;
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
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(k_6, l_6);
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            t = SSL_gtr(k_6, l_6);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, k_6, l_6);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_12;
    }
  return(t);
}
ATerm day_of_week2abbr_0_0 (ATerm t)
{
  if(match_cons(t, sym_Saturday_0))
    {
      t = term_t_12;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_u_12;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_v_12;
            }
          else
            {
              if(match_cons(t, sym_Wednesday_0))
                {
                  t = term_w_12;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_x_12;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_y_12;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_b_13;
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
      t = term_c_13;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_e_13;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_h_13;
            }
          else
            {
              if(match_cons(t, sym_Wednesday_0))
                {
                  t = term_i_13;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_j_13;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_k_13;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_m_13;
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm while_not_2_0 (ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm t)
{
  static ATerm n_6 (ATerm t);
  static ATerm n_6 (ATerm t)
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_83(t);
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        t = x_83(t);
        t = n_6(t);
      }
    return(t);
  }
  t = n_6(t);
  return(t);
}
ATerm for_3_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t)
{
  t = z_83(t);
  t = while_not_2_0(a_84, b_84, t);
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
      ATerm p_13 = ATgetArgument(t, 0);
      if(((ATgetType(p_13) != AT_INT) || (ATgetInt((ATermInt) p_13) != 0)))
        _fail(t);
      {
        ATerm r_13 = ATgetArgument(t, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, u_6, term_t_13);
  t = geq_0_0(t);
  t = term_t_13;
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_6, term_t_13);
  t = f_9(u_6, z_6, t);
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
static ATerm z_8 (ATerm b_45, ATerm z_44, ATerm a_45, ATerm t)
{
  ATerm b_7 = NULL;
  t = SSL_strlen(z_44);
  b_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_45, b_7);
  t = f_9(a_45, b_7, t);
  {
    ATerm u_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_7 = NULL;
        f_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_7, term_x_13);
        t = geq_0_0(t);
        t = f_7;
        LocalPopChoice(w_13);
        {
          ATerm k_7 = NULL;
          k_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_7, b_45);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = u_13;
        t = term_y_13;
      }
  }
  return(t);
}
static ATerm a_9 (ATerm i_44, ATerm j_44, ATerm k_44, ATerm t)
{
  ATerm l_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, i_44, j_44, k_44);
  t = z_8(i_44, j_44, k_44, t);
  l_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_7, j_44);
  t = t_9(l_7, j_44, t);
  return(t);
}
static ATerm b_9 (ATerm i_26, ATerm j_26, ATerm t)
{
  t = SSL_mod(i_26, j_26);
  return(t);
}
ATerm month2index_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_z_13;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_a_14;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_b_14;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_h_14;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_i_14;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_j_14;
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
                                      t = term_r_14;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_w_14;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_t_13;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_x_13;
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
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,p_11 = NULL,q_11 = NULL,s_11 = NULL;
  i_11 = t;
  if(match_cons(t, sym__2))
    {
      j_11 = ATgetArgument(t, 0);
      k_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11;
  if(match_string(t, "ss"))
    {
      t = k_11;
      if(match_cons(t, sym_ComponentTime_3))
        {
          ATerm x_14 = ATgetArgument(t, 0);
          q_11 = ATgetArgument(t, 1);
          {
            ATerm z_14 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = q_11;
      if(match_cons(t, sym_DayTime_3))
        {
          ATerm c_15 = ATgetArgument(t, 0);
          ATerm d_15 = ATgetArgument(t, 1);
          c_11 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_11;
    }
  else
    {
      if(match_string(t, "mm"))
        {
          t = k_11;
          if(match_cons(t, sym_ComponentTime_3))
            {
              ATerm f_15 = ATgetArgument(t, 0);
              q_11 = ATgetArgument(t, 1);
              {
                ATerm h_15 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = q_11;
          if(match_cons(t, sym_DayTime_3))
            {
              ATerm j_15 = ATgetArgument(t, 0);
              b_11 = ATgetArgument(t, 1);
              {
                ATerm m_15 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = b_11;
        }
      else
        {
          if(match_string(t, "KK"))
            {
              t = k_11;
              if(match_cons(t, sym_ComponentTime_3))
                {
                  ATerm s_15 = ATgetArgument(t, 0);
                  q_11 = ATgetArgument(t, 1);
                  {
                    ATerm t_15 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = q_11;
              if(match_cons(t, sym_DayTime_3))
                {
                  a_11 = ATgetArgument(t, 0);
                  {
                    ATerm u_15 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm v_15 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              {
                ATerm x_15 = t;
                int y_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_11 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, term_d_16, a_11);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, a_11, term_e_16);
                    t = leq_0_0(t);
                    t = term_d_16;
                    z_11 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_11, term_d_16);
                    t = f_9(a_11, z_11, t);
                    LocalPopChoice(y_15);
                  }
                else
                  {
                    t = x_15;
                    t = (ATerm) ATmakeAppl(sym__2, term_x_13, a_11);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, a_11, term_d_16);
                    t = lt_0_0(t);
                    t = a_11;
                  }
              }
            }
          else
            {
              if(match_string(t, "hh"))
                {
                  t = k_11;
                  if(match_cons(t, sym_ComponentTime_3))
                    {
                      ATerm f_16 = ATgetArgument(t, 0);
                      q_11 = ATgetArgument(t, 1);
                      {
                        ATerm g_16 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = q_11;
                  if(match_cons(t, sym_DayTime_3))
                    {
                      a_11 = ATgetArgument(t, 0);
                      {
                        ATerm h_16 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm i_16 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = a_11;
                  if(match_int(t, 0))
                    {
                      ATerm k_16 = t;
                      int n_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_12 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_d_16, a_11);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, a_11, term_e_16);
                          t = leq_0_0(t);
                          t = term_d_16;
                          g_12 = t;
                          t = (ATerm) ATmakeAppl(sym__2, a_11, term_d_16);
                          t = f_9(a_11, g_12, t);
                          LocalPopChoice(n_16);
                        }
                      else
                        {
                          t = k_16;
                          {
                            ATerm o_16 = t;
                            int p_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_t_13, a_11);
                                t = leq_0_0(t);
                                t = (ATerm) ATmakeAppl(sym__2, a_11, term_d_16);
                                t = leq_0_0(t);
                                t = a_11;
                                LocalPopChoice(p_16);
                              }
                            else
                              {
                                t = o_16;
                                t = term_d_16;
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm q_16 = t;
                      int r_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_12 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_d_16, a_11);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, a_11, term_e_16);
                          t = leq_0_0(t);
                          t = term_d_16;
                          k_12 = t;
                          t = (ATerm) ATmakeAppl(sym__2, a_11, term_d_16);
                          t = f_9(a_11, k_12, t);
                          LocalPopChoice(r_16);
                        }
                      else
                        {
                          t = q_16;
                          t = (ATerm) ATmakeAppl(sym__2, term_t_13, a_11);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, a_11, term_d_16);
                          t = leq_0_0(t);
                          t = a_11;
                        }
                    }
                }
              else
                {
                  if(match_string(t, "kk"))
                    {
                      ATerm n_12 = NULL;
                      t = k_11;
                      if(match_cons(t, sym_ComponentTime_3))
                        {
                          ATerm s_16 = ATgetArgument(t, 0);
                          q_11 = ATgetArgument(t, 1);
                          {
                            ATerm t_16 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = q_11;
                      if(match_cons(t, sym_DayTime_3))
                        {
                          a_11 = ATgetArgument(t, 0);
                          {
                            ATerm u_16 = ATgetArgument(t, 1);
                          }
                          {
                            ATerm v_16 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = term_t_13;
                      n_12 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_11, term_t_13);
                      t = w_9(a_11, n_12, t);
                    }
                  else
                    {
                      if(match_string(t, "HH"))
                        {
                          t = k_11;
                          if(match_cons(t, sym_ComponentTime_3))
                            {
                              ATerm w_16 = ATgetArgument(t, 0);
                              q_11 = ATgetArgument(t, 1);
                              {
                                ATerm x_16 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = q_11;
                          if(match_cons(t, sym_DayTime_3))
                            {
                              a_11 = ATgetArgument(t, 0);
                              {
                                ATerm y_16 = ATgetArgument(t, 1);
                              }
                              {
                                ATerm z_16 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = a_11;
                        }
                      else
                        {
                          if(match_string(t, "DD"))
                            {
                              t = k_11;
                              if(match_cons(t, sym_ComponentTime_3))
                                {
                                  ATerm a_17 = ATgetArgument(t, 0);
                                  ATerm b_17 = ATgetArgument(t, 1);
                                  s_11 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = s_11;
                              if(match_cons(t, sym_Dupl_2))
                                {
                                  ATerm c_17 = ATgetArgument(t, 0);
                                  h_11 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = h_11;
                            }
                          else
                            {
                              if(match_string(t, "D"))
                                {
                                  t = k_11;
                                  if(match_cons(t, sym_ComponentTime_3))
                                    {
                                      ATerm d_17 = ATgetArgument(t, 0);
                                      ATerm e_17 = ATgetArgument(t, 1);
                                      s_11 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = s_11;
                                  if(match_cons(t, sym_Dupl_2))
                                    {
                                      ATerm f_17 = ATgetArgument(t, 0);
                                      h_11 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = h_11;
                                }
                              else
                                {
                                  if(match_string(t, "dd"))
                                    {
                                      t = k_11;
                                      if(match_cons(t, sym_ComponentTime_3))
                                        {
                                          l_11 = ATgetArgument(t, 0);
                                          {
                                            ATerm g_17 = ATgetArgument(t, 1);
                                          }
                                          {
                                            ATerm h_17 = ATgetArgument(t, 2);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      t = l_11;
                                      if(match_cons(t, sym_Date_3))
                                        {
                                          ATerm i_17 = ATgetArgument(t, 0);
                                          ATerm j_17 = ATgetArgument(t, 1);
                                          p_11 = ATgetArgument(t, 2);
                                        }
                                      else
                                        _fail(t);
                                      t = p_11;
                                    }
                                  else
                                    {
                                      if(match_string(t, "d"))
                                        {
                                          t = k_11;
                                          if(match_cons(t, sym_ComponentTime_3))
                                            {
                                              l_11 = ATgetArgument(t, 0);
                                              {
                                                ATerm k_17 = ATgetArgument(t, 1);
                                              }
                                              {
                                                ATerm l_17 = ATgetArgument(t, 2);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          t = l_11;
                                          if(match_cons(t, sym_Date_3))
                                            {
                                              ATerm m_17 = ATgetArgument(t, 0);
                                              ATerm n_17 = ATgetArgument(t, 1);
                                              p_11 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          t = p_11;
                                        }
                                      else
                                        {
                                          if(match_string(t, "MM"))
                                            {
                                              ATerm a_13 = NULL,d_13 = NULL;
                                              t = k_11;
                                              if(match_cons(t, sym_ComponentTime_3))
                                                {
                                                  l_11 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm o_17 = ATgetArgument(t, 1);
                                                  }
                                                  {
                                                    ATerm u_17 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = l_11;
                                              if(match_cons(t, sym_Date_3))
                                                {
                                                  ATerm v_17 = ATgetArgument(t, 0);
                                                  n_11 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm w_17 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = n_11;
                                              t = month2index_0_0(t);
                                              a_13 = t;
                                              t = term_t_13;
                                              d_13 = t;
                                              t = (ATerm) ATmakeAppl(sym__2, a_13, term_t_13);
                                              t = w_9(a_13, d_13, t);
                                            }
                                          else
                                            {
                                              if(match_string(t, "M"))
                                                {
                                                  ATerm g_13 = NULL,l_13 = NULL;
                                                  t = k_11;
                                                  if(match_cons(t, sym_ComponentTime_3))
                                                    {
                                                      l_11 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm x_17 = ATgetArgument(t, 1);
                                                      }
                                                      {
                                                        ATerm a_18 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = l_11;
                                                  if(match_cons(t, sym_Date_3))
                                                    {
                                                      ATerm l_18 = ATgetArgument(t, 0);
                                                      n_11 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm v_18 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = n_11;
                                                  t = month2index_0_0(t);
                                                  g_13 = t;
                                                  t = term_t_13;
                                                  l_13 = t;
                                                  t = (ATerm) ATmakeAppl(sym__2, g_13, term_t_13);
                                                  t = w_9(g_13, l_13, t);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "yy"))
                                                    {
                                                      ATerm s_13 = NULL;
                                                      t = k_11;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          l_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm w_18 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm d_19 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = l_11;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          m_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm f_19 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm g_19 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = term_h_19;
                                                      s_13 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, m_11, term_h_19);
                                                      t = b_9(m_11, s_13, t);
                                                    }
                                                  else
                                                    {
                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("yyyy", 0, ATtrue)))
                                                        _fail(t);
                                                      t = k_11;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          l_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm i_19 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm j_19 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = l_11;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          m_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm k_19 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm l_19 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = m_11;
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
static ATerm p_17 (ATerm k_15, ATerm l_15, ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
  t = l_15;
  t = date_pattern_to_int_0_0(t);
  p_15 = t;
  t = SSL_int_to_string(p_15);
  n_15 = t;
  t = SSL_strlen(k_15);
  o_15 = t;
  t = term_n_19;
  q_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_19, n_15, o_15);
  t = a_9(q_15, n_15, o_15, t);
  return(t);
}
ATerm date_pattern_to_string_0_0 (ATerm t)
{
  ATerm r_15 = NULL,w_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,j_16 = NULL,l_16 = NULL,m_16 = NULL;
  z_15 = t;
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_16;
  if(match_cons(t, sym_ComponentTime_3))
    {
      c_16 = ATgetArgument(t, 0);
      l_16 = ATgetArgument(t, 1);
      m_16 = ATgetArgument(t, 2);
      t = m_16;
      {
        ATerm o_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Dupl_2))
              {
                w_15 = ATgetArgument(t, 0);
                {
                  ATerm q_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(p_19);
            t = l_16;
            {
              ATerm s_19 = t;
              int t_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      r_15 = ATgetArgument(t, 0);
                      {
                        ATerm u_19 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm v_19 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(t_19);
                  t = c_16;
                  {
                    ATerm w_19 = t;
                    int x_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm y_19 = ATgetArgument(t, 0);
                            j_16 = ATgetArgument(t, 1);
                            {
                              ATerm z_19 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(x_19);
                        t = a_16;
                        if(match_string(t, "a"))
                          {
                            ATerm a_20 = t;
                            int b_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_17(a_16, z_15, t);
                                LocalPopChoice(b_20);
                              }
                            else
                              {
                                t = a_20;
                                {
                                  ATerm c_20 = t;
                                  int d_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_d_16, r_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_15, term_e_16);
                                      t = leq_0_0(t);
                                      t = term_e_20;
                                      LocalPopChoice(d_20);
                                    }
                                  else
                                    {
                                      t = c_20;
                                      t = (ATerm) ATmakeAppl(sym__2, term_x_13, r_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_15, term_d_16);
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
                                    t = p_17(a_16, z_15, t);
                                    LocalPopChoice(h_20);
                                  }
                                else
                                  {
                                    t = g_20;
                                    t = w_15;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm k_20 = t;
                                    int l_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = p_17(a_16, z_15, t);
                                        LocalPopChoice(l_20);
                                      }
                                    else
                                      {
                                        t = k_20;
                                        t = w_15;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    if(match_string(t, "MMMM"))
                                      {
                                        ATerm m_20 = t;
                                        int t_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = p_17(a_16, z_15, t);
                                            LocalPopChoice(t_20);
                                          }
                                        else
                                          {
                                            t = m_20;
                                            t = j_16;
                                            t = month2text_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_string(t, "MMM"))
                                          {
                                            ATerm u_20 = t;
                                            int v_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = p_17(a_16, z_15, t);
                                                LocalPopChoice(v_20);
                                              }
                                            else
                                              {
                                                t = u_20;
                                                t = j_16;
                                                t = month2abbr_0_0(t);
                                              }
                                          }
                                        else
                                          {
                                            t = p_17(a_16, z_15, t);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = w_19;
                        t = a_16;
                        if(match_string(t, "a"))
                          {
                            ATerm w_20 = t;
                            int x_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_17(a_16, z_15, t);
                                LocalPopChoice(x_20);
                              }
                            else
                              {
                                t = w_20;
                                {
                                  ATerm y_20 = t;
                                  int z_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_d_16, r_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_15, term_e_16);
                                      t = leq_0_0(t);
                                      t = term_e_20;
                                      LocalPopChoice(z_20);
                                    }
                                  else
                                    {
                                      t = y_20;
                                      t = (ATerm) ATmakeAppl(sym__2, term_x_13, r_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_15, term_d_16);
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
                                ATerm a_21 = t;
                                int b_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = p_17(a_16, z_15, t);
                                    LocalPopChoice(b_21);
                                  }
                                else
                                  {
                                    t = a_21;
                                    t = w_15;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm c_21 = t;
                                    int d_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = p_17(a_16, z_15, t);
                                        LocalPopChoice(d_21);
                                      }
                                    else
                                      {
                                        t = c_21;
                                        t = w_15;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = p_17(a_16, z_15, t);
                                  }
                              }
                          }
                      }
                  }
                }
              else
                {
                  t = s_19;
                  t = c_16;
                  {
                    ATerm e_21 = t;
                    int f_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm g_21 = ATgetArgument(t, 0);
                            j_16 = ATgetArgument(t, 1);
                            {
                              ATerm h_21 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(f_21);
                        t = a_16;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm i_21 = t;
                            int j_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_17(a_16, z_15, t);
                                LocalPopChoice(j_21);
                              }
                            else
                              {
                                t = i_21;
                                t = w_15;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm k_21 = t;
                                int l_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = p_17(a_16, z_15, t);
                                    LocalPopChoice(l_21);
                                  }
                                else
                                  {
                                    t = k_21;
                                    t = w_15;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "MMMM"))
                                  {
                                    ATerm m_21 = t;
                                    int n_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = p_17(a_16, z_15, t);
                                        LocalPopChoice(n_21);
                                      }
                                    else
                                      {
                                        t = m_21;
                                        t = j_16;
                                        t = month2text_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    if(match_string(t, "MMM"))
                                      {
                                        ATerm o_21 = t;
                                        int r_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = p_17(a_16, z_15, t);
                                            LocalPopChoice(r_21);
                                          }
                                        else
                                          {
                                            t = o_21;
                                            t = j_16;
                                            t = month2abbr_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        t = p_17(a_16, z_15, t);
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = e_21;
                        t = a_16;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm u_21 = t;
                            int y_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_17(a_16, z_15, t);
                                LocalPopChoice(y_21);
                              }
                            else
                              {
                                t = u_21;
                                t = w_15;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm a_22 = t;
                                int b_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = p_17(a_16, z_15, t);
                                    LocalPopChoice(b_22);
                                  }
                                else
                                  {
                                    t = a_22;
                                    t = w_15;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = p_17(a_16, z_15, t);
                              }
                          }
                      }
                  }
                }
            }
          }
        else
          {
            t = o_19;
            t = l_16;
            {
              ATerm c_22 = t;
              int f_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      r_15 = ATgetArgument(t, 0);
                      {
                        ATerm g_22 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm h_22 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(f_22);
                  t = c_16;
                  {
                    ATerm i_22 = t;
                    int j_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm k_22 = ATgetArgument(t, 0);
                            j_16 = ATgetArgument(t, 1);
                            {
                              ATerm m_22 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_22);
                        t = a_16;
                        if(match_string(t, "a"))
                          {
                            ATerm n_22 = t;
                            int o_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_17(a_16, z_15, t);
                                LocalPopChoice(o_22);
                              }
                            else
                              {
                                t = n_22;
                                {
                                  ATerm p_22 = t;
                                  int q_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_d_16, r_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_15, term_e_16);
                                      t = leq_0_0(t);
                                      t = term_e_20;
                                      LocalPopChoice(q_22);
                                    }
                                  else
                                    {
                                      t = p_22;
                                      t = (ATerm) ATmakeAppl(sym__2, term_x_13, r_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_15, term_d_16);
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
                                ATerm r_22 = t;
                                int s_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = p_17(a_16, z_15, t);
                                    LocalPopChoice(s_22);
                                  }
                                else
                                  {
                                    t = r_22;
                                    t = j_16;
                                    t = month2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "MMM"))
                                  {
                                    ATerm t_22 = t;
                                    int u_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = p_17(a_16, z_15, t);
                                        LocalPopChoice(u_22);
                                      }
                                    else
                                      {
                                        t = t_22;
                                        t = j_16;
                                        t = month2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = p_17(a_16, z_15, t);
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = i_22;
                        t = a_16;
                        if(match_string(t, "a"))
                          {
                            ATerm v_22 = t;
                            int w_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_17(a_16, z_15, t);
                                LocalPopChoice(w_22);
                              }
                            else
                              {
                                t = v_22;
                                {
                                  ATerm y_22 = t;
                                  int z_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_d_16, r_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_15, term_e_16);
                                      t = leq_0_0(t);
                                      t = term_e_20;
                                      LocalPopChoice(z_22);
                                    }
                                  else
                                    {
                                      t = y_22;
                                      t = (ATerm) ATmakeAppl(sym__2, term_x_13, r_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_15, term_d_16);
                                      t = lt_0_0(t);
                                      t = term_f_20;
                                    }
                                }
                              }
                          }
                        else
                          {
                            t = p_17(a_16, z_15, t);
                          }
                      }
                  }
                }
              else
                {
                  t = c_22;
                  t = c_16;
                  {
                    ATerm a_23 = t;
                    int b_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm c_23 = ATgetArgument(t, 0);
                            j_16 = ATgetArgument(t, 1);
                            {
                              ATerm d_23 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(b_23);
                        t = a_16;
                        if(match_string(t, "MMMM"))
                          {
                            ATerm e_23 = t;
                            int f_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_17(a_16, z_15, t);
                                LocalPopChoice(f_23);
                              }
                            else
                              {
                                t = e_23;
                                t = j_16;
                                t = month2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "MMM"))
                              {
                                ATerm g_23 = t;
                                int h_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = p_17(a_16, z_15, t);
                                    LocalPopChoice(h_23);
                                  }
                                else
                                  {
                                    t = g_23;
                                    t = j_16;
                                    t = month2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = p_17(a_16, z_15, t);
                              }
                          }
                      }
                    else
                      {
                        t = a_23;
                        t = a_16;
                        t = p_17(a_16, z_15, t);
                      }
                  }
                }
            }
          }
      }
    }
  else
    {
      t = a_16;
      t = p_17(a_16, z_15, t);
    }
  return(t);
}
static ATerm c_9 (ATerm p_64, ATerm o_64, ATerm t)
{
  ATerm q_17 = NULL;
  t = p_64;
  {
    static ATerm f_1 (ATerm t);
    static ATerm f_1 (ATerm t)
    {
      ATerm r_17 = NULL;
      r_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_17, o_64);
      {
        ATerm i_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = date_pattern_to_string_0_0(t);
            LocalPopChoice(j_23);
          }
        else
          {
            t = i_23;
            {
              ATerm s_17 = NULL,t_17 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, r_17, o_64);
              t_17 = t;
              t = SSL_explode_term(t_17);
              if(match_cons(t, sym__2))
                {
                  ATerm k_23 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_23) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm l_23 = ATgetArgument(t, 1);
                    if(((ATgetType(l_23) == AT_LIST) && !(ATisEmpty(l_23))))
                      {
                        s_17 = ATgetFirst((ATermList) l_23);
                        {
                          ATerm m_23 = (ATerm) ATgetNext((ATermList) l_23);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = s_17;
            }
          }
      }
      return(t);
    }
    t = map_1_0(f_1, t);
  }
  q_17 = t;
  t = SSL_concat_strings(q_17);
  return(t);
}
ATerm index2day_of_week_0_0 (ATerm t)
{
  if(match_int(t, 6))
    {
      t = term_n_23;
    }
  else
    {
      if(match_int(t, 5))
        {
          t = term_o_23;
        }
      else
        {
          if(match_int(t, 4))
            {
              t = term_p_23;
            }
          else
            {
              if(match_int(t, 3))
                {
                  t = term_q_23;
                }
              else
                {
                  if(match_int(t, 2))
                    {
                      t = term_t_23;
                    }
                  else
                    {
                      if(match_int(t, 1))
                        {
                          t = term_u_23;
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                            _fail(t);
                          t = term_v_23;
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
      t = term_z_23;
    }
  else
    {
      if(match_int(t, 10))
        {
          t = term_a_24;
        }
      else
        {
          if(match_int(t, 9))
            {
              t = term_c_24;
            }
          else
            {
              if(match_int(t, 8))
                {
                  t = term_d_24;
                }
              else
                {
                  if(match_int(t, 7))
                    {
                      t = term_f_24;
                    }
                  else
                    {
                      if(match_int(t, 6))
                        {
                          t = term_h_24;
                        }
                      else
                        {
                          if(match_int(t, 5))
                            {
                              t = term_k_24;
                            }
                          else
                            {
                              if(match_int(t, 4))
                                {
                                  t = term_l_24;
                                }
                              else
                                {
                                  if(match_int(t, 3))
                                    {
                                      t = term_m_24;
                                    }
                                  else
                                    {
                                      if(match_int(t, 2))
                                        {
                                          t = term_o_24;
                                        }
                                      else
                                        {
                                          if(match_int(t, 1))
                                            {
                                              t = term_p_24;
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                                                _fail(t);
                                              t = term_q_24;
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
static ATerm d_9 (ATerm k_61, ATerm j_61, ATerm i_61, ATerm h_61, ATerm g_61, ATerm f_61, ATerm l_61, ATerm m_61, ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL;
  t = g_61;
  t = index2month_0_0(t);
  y_17 = t;
  t = l_61;
  t = index2day_of_week_0_0(t);
  z_17 = t;
  t = (ATerm) ATmakeAppl(sym_ComponentTime_3, (ATerm)ATmakeAppl(sym_Date_3, f_61, y_17, h_61), (ATerm)ATmakeAppl(sym_DayTime_3, i_61, j_61, k_61), (ATerm) ATmakeAppl(sym_Dupl_2, z_17, m_61));
  return(t);
}
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym__8))
    {
      b_18 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
      d_18 = ATgetArgument(t, 2);
      e_18 = ATgetArgument(t, 3);
      f_18 = ATgetArgument(t, 4);
      g_18 = ATgetArgument(t, 5);
      h_18 = ATgetArgument(t, 6);
      i_18 = ATgetArgument(t, 7);
    }
  else
    _fail(t);
  t = d_9(b_18, c_18, d_18, e_18, f_18, g_18, h_18, i_18, t);
  return(t);
}
static ATerm e_9 (ATerm c_61, ATerm t)
{
  t = SSL_epoch2localtime(c_61);
  t = prim_tuple_to_ComponentTime_0_0(t);
  return(t);
}
ATerm now_epoch_time_0_0 (ATerm t)
{
  ATerm j_18 = NULL;
  t = SSL_now_epoch_time();
  j_18 = t;
  t = (ATerm) ATmakeAppl(sym_EpochTime_1, j_18);
  return(t);
}
ATerm now_local_time_0_0 (ATerm t)
{
  ATerm k_18 = NULL;
  t = now_epoch_time_0_0(t);
  if(match_cons(t, sym_EpochTime_1))
    {
      k_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(k_18, t);
  return(t);
}
ATerm create_time_0_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  t = term_j_8;
  t = now_local_time_0_0(t);
  m_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_25), term_e_25), term_g_25), term_e_25), term_d_25), term_u_24), term_z_24), term_u_24), term_x_24), term_u_24), term_w_24), term_u_24), term_t_24);
  n_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_25), term_e_25), term_g_25), term_e_25), term_d_25), term_u_24), term_z_24), term_u_24), term_x_24), term_u_24), term_w_24), term_u_24), term_t_24), m_18);
  t = c_9(n_18, m_18, t);
  return(t);
}
ATerm get_title_0_0 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_18 = NULL,p_18 = NULL;
      t = term_x_7;
      o_18 = t;
      t = term_s_25;
      p_18 = t;
      t = term_t_25;
      t = b_10(o_18, p_18, t);
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      {
        ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
        t = term_u_25;
        r_18 = t;
        t = (ATerm) ATinsert(ATempty, term_v_25);
        s_18 = t;
        t = SSL_printnl(r_18, s_18);
        t = term_t_13;
        q_18 = t;
        t = SSL_exit(q_18);
        t = (ATerm) ATinsert(ATempty, term_v_25);
      }
    }
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL;
  t = get_title_0_0(t);
  u_18 = t;
  t = term_j_8;
  t = create_time_0_0(t);
  t_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_26), term_r_26), term_q_26), term_l_26), u_18), term_k_26), term_h_26), term_g_26), term_e_26), term_d_26), term_z_25), term_y_25), t_18), term_x_25), term_w_25);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_19 = NULL,c_19 = NULL,e_19 = NULL;
      t = term_x_7;
      c_19 = t;
      t = term_w_10;
      e_19 = t;
      t = term_v_26;
      t = b_10(c_19, e_19, t);
      b_19 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_19);
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      t = term_f_8;
    }
  a_19 = t;
  t = create_header_0_0(t);
  t = print_to_0_0(t);
  x_18 = t;
  t = a_19;
  {
    ATerm x_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_19 = ATgetArgument(t, 0);
            {
              ATerm x_1 = NULL,c_0 = NULL;
              t = SSLgetAnnotations(a_19);
              x_1 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_19);
              c_0 = t;
              t = SSLsetAnnotations(c_0, x_1);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_19;
          }
        LocalPopChoice(z_26);
        t = xtc_transform_file_2_0(j_1, pass_verbose_0_0, t);
      }
    else
      {
        t = x_26;
        t = xtc_transform_term_2_0(k_1, pass_verbose_0_0, t);
      }
  }
  y_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_27), term_a_27);
  t = print_to_0_0(t);
  z_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_18), y_18), x_18);
  t = xtc_cat_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_c_27;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_c_27;
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(h_1, t);
  return(t);
}
static ATerm b_10 (ATerm v_29, ATerm w_29, ATerm t)
{
  ATerm r_19 = NULL;
  t = lookup_table_0_1(v_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_10(w_29, r_19, t);
  return(t);
}
static ATerm u_9 (ATerm b_47, ATerm c_47, ATerm t)
{
  t = SSL_copy(b_47, c_47);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  i_20 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_2 = NULL;
        t = i_20;
        t = q_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, j_20, g_2);
        t = u_9(j_20, g_2, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_20);
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        {
          ATerm f_27 = t;
          int g_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_3 = NULL;
              t = i_20;
              t = q_0(t);
              d_3 = t;
              {
                ATerm h_27 = t;
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
                            if((j_20 != t))
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
                    t = h_27;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, j_20, d_3);
              t = u_9(j_20, d_3, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_20);
              LocalPopChoice(g_27);
            }
          else
            {
              t = f_27;
              t = i_20;
              t = q_0(t);
              if((j_20 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_20);
            }
        }
      }
  }
  return(t);
}
static ATerm f_9 (ATerm q_25, ATerm r_25, ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(q_25, r_25);
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      t = SSL_subtr(q_25, r_25);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL;
  t = term_n_27;
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_20 = NULL,s_20 = NULL;
        t = term_x_7;
        r_20 = t;
        t = term_n_27;
        s_20 = t;
        t = term_q_27;
        t = b_10(r_20, s_20, t);
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        t = term_t_13;
      }
  }
  o_20 = t;
  t = term_t_13;
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_20, term_t_13);
  t = f_9(o_20, q_20, t);
  p_20 = t;
  t = SSL_int_to_string(p_20);
  n_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_20), term_n_27);
  return(t);
}
static ATerm g_9 (ATerm d_50, ATerm e_50, ATerm t)
{
  t = SSL_execvp(d_50, e_50);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,v_21 = NULL,z_21 = NULL;
  p_21 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      q_21 = ATgetArgument(t, 0);
      {
        ATerm r_3 = NULL,u_3 = NULL;
        t = SSL_int_to_string(q_21);
        r_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_27), r_3), term_r_27);
        u_3 = t;
        t = SSL_concat_strings(u_3);
      }
    }
  else
    {
      ATerm q_4 = NULL,r_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          q_21 = ATgetArgument(t, 0);
          v_21 = ATgetArgument(t, 1);
          z_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(v_21);
      q_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_21), term_v_27), q_4), term_t_27), q_21);
      r_4 = t;
      t = SSL_concat_strings(r_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm n_85 (ATerm), ATerm t)
{
  ATerm d_22 = NULL;
  static ATerm m_1 (ATerm t);
  static ATerm m_1 (ATerm t)
  {
    t = n_85(t);
    if(((d_22 != NULL) && (d_22 != t)))
      _fail(t);
    else
      d_22 = t;
    return(t);
  }
  t = fetch_1_0(m_1, t);
  t = not_null(d_22);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm e_22 = NULL;
  e_22 = t;
  {
    ATerm w_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_1 (ATerm t);
        static ATerm n_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm g_28 = ATgetArgument(t, 0);
              if((e_22 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm l_28 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_35), term_q_35), term_l_35), term_g_35), term_d_35), term_t_34), term_l_34), term_e_34), term_b_34), term_y_33), term_v_33), term_r_33), term_n_33), term_j_33), term_t_32), term_n_32), term_f_32), term_s_31), term_b_31), term_w_30), term_p_30), term_k_30), term_c_30), term_q_29), term_l_29), term_f_29), term_t_28), term_o_28);
        t = fetch_elem_1_0(n_1, t);
        LocalPopChoice(z_27);
      }
    else
      {
        t = w_27;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, e_22);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm l_22 = NULL,x_22 = NULL;
  l_22 = t;
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm f_36 = ATgetArgument(t, 0);
            x_22 = ATgetArgument(t, 1);
            {
              ATerm g_36 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(e_36);
        {
          ATerm h_36 = t;
          int i_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_4 = NULL,z_4 = NULL,a_5 = NULL;
              t = x_22;
              {
                ATerm j_36 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_36;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              x_4 = t;
              t = term_u_25;
              z_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, x_4), term_k_36);
              a_5 = t;
              t = SSL_printnl(z_4, a_5);
              t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATinsert(ATempty, x_4), term_k_36));
              LocalPopChoice(i_36);
            }
          else
            {
              t = h_36;
              t = l_22;
            }
        }
      }
    else
      {
        t = d_36;
        t = l_22;
      }
  }
  t = l_22;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm r_99 (ATerm), ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL;
  s_23 = t;
  t = fork_0_0(t);
  r_23 = t;
  {
    ATerm l_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = s_23;
        t = r_99(t);
        LocalPopChoice(m_36);
      }
    else
      {
        t = l_36;
        t = SSL_waitpid(r_23);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm n_36 = ATgetArgument(t, 0);
            if(((ATgetType(n_36) != AT_INT) || (ATgetInt((ATermInt) n_36) != 0)))
              _fail(t);
            {
              ATerm o_36 = ATgetArgument(t, 1);
            }
            {
              ATerm p_36 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = s_23;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm k_100 (ATerm), ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,b_24 = NULL;
  w_23 = t;
  t = k_100(t);
  x_23 = t;
  t = term_u_25;
  y_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_23), x_23);
  b_24 = t;
  t = SSL_printnl(y_23, b_24);
  t = w_23;
  return(t);
}
static ATerm i_9 (ATerm b_33, ATerm t)
{
  t = SSL_hashtable_keys(b_33);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_24 = NULL,g_24 = NULL;
  static ATerm o_1 (ATerm t);
  static ATerm o_1 (ATerm t)
  {
    ATerm i_24 = NULL,j_24 = NULL;
    i_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_24), i_24);
    t = b_10(not_null(e_24), i_24, t);
    j_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_24, j_24);
    return(t);
  }
  if(((e_24 != NULL) && (e_24 != t)))
    _fail(t);
  else
    e_24 = t;
  t = lookup_table_0_1(e_24, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(g_24, t);
  t = map_1_0(o_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_110 (ATerm), ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  {
    ATerm q_36 = t;
    int r_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_24 = NULL,s_24 = NULL,v_24 = NULL;
        t = term_x_7;
        s_24 = t;
        t = term_n_27;
        v_24 = t;
        t = term_q_27;
        t = b_10(s_24, v_24, t);
        r_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_24, term_p_14);
        t = geq_0_0(t);
        t = n_24;
        t = x_110(t);
        LocalPopChoice(r_36);
      }
    else
      {
        t = q_36;
        t = n_24;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_110 (ATerm), ATerm t)
{
  ATerm y_24 = NULL;
  y_24 = t;
  {
    ATerm u_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
        t = term_x_7;
        b_25 = t;
        t = term_n_27;
        c_25 = t;
        t = term_q_27;
        t = b_10(b_25, c_25, t);
        a_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_25, term_q_14);
        t = geq_0_0(t);
        t = y_24;
        t = w_110(t);
        LocalPopChoice(v_36);
      }
    else
      {
        t = u_36;
        t = y_24;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  ATerm f_25 = NULL;
  f_25 = t;
  {
    ATerm w_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
        t = term_x_7;
        i_25 = t;
        t = term_n_27;
        j_25 = t;
        t = term_q_27;
        t = b_10(i_25, j_25, t);
        h_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_25, term_j_14);
        t = geq_0_0(t);
        t = f_25;
        t = y_110(t);
        LocalPopChoice(x_36);
      }
    else
      {
        t = w_36;
        t = f_25;
      }
  }
  return(t);
}
static ATerm k_9 (ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm x_21, ATerm w_21, ATerm t)
{
  t = q_89(t);
  {
    static ATerm r_1 (ATerm t);
    static ATerm r_1 (ATerm t)
    {
      ATerm n_25 = NULL;
      n_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_21, n_25);
      t = p_89(t);
      return(t);
    }
    t = fetch_1_0(r_1, t);
  }
  t = w_21;
  return(t);
}
static ATerm l_9 (ATerm m_89 (ATerm), ATerm t_21, ATerm s_21, ATerm t)
{
  static ATerm f_26 (ATerm t);
  static ATerm f_26 (ATerm t)
  {
    ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
    a_26 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_26 = ATgetFirst((ATermList) t);
            c_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_36 = t;
          int b_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_26;
              {
                static ATerm s_1 (ATerm t);
                static ATerm s_1 (ATerm t)
                {
                  t = s_21;
                  return(t);
                }
                t = k_9(m_89, s_1, b_26, c_26, t);
              }
              t = f_26(t);
              LocalPopChoice(b_37);
            }
          else
            {
              t = z_36;
              {
                ATerm l_5 = NULL,o_5 = NULL,k_0 = NULL;
                t = SSLgetAnnotations(a_26);
                l_5 = t;
                t = c_26;
                t = f_26(t);
                o_5 = t;
                t = (ATerm) ATinsert(CheckATermList(o_5), b_26);
                k_0 = t;
                t = SSLsetAnnotations(k_0, l_5);
              }
            }
        }
      }
    return(t);
  }
  t = t_21;
  t = f_26(t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm i_27 = NULL;
  if(match_cons(t, sym__2))
    {
      i_27 = ATgetArgument(t, 0);
      if((i_27 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_9 (ATerm z_28, ATerm a_29, ATerm b_29, ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
  {
    ATerm c_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_37 = ATgetArgument(t, 0);
            ATerm j_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
        t = b_10(z_28, a_29, t);
        LocalPopChoice(e_37);
      }
    else
      {
        t = c_37;
        t = (ATerm) ATempty;
      }
  }
  o_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_26, b_29);
  t = l_9(t_1, o_26, b_29, t);
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_28, a_29, n_26);
  t = lookup_table_0_1(z_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(a_29, n_26, p_26, t);
  t = m_26;
  return(t);
}
static ATerm n_9 (ATerm j_94 (ATerm), ATerm j_29, ATerm i_29, ATerm t)
{
  static ATerm w_1 (ATerm t);
  static ATerm w_1 (ATerm t)
  {
    ATerm j_27 = NULL,k_27 = NULL;
    if(match_cons(t, sym__2))
      {
        j_27 = ATgetArgument(t, 0);
        k_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, j_29, j_27, k_27);
    t = j_94(t);
    return(t);
  }
  t = i_29;
  t = map_1_0(w_1, t);
  return(t);
}
static ATerm r_9 (ATerm c_14, ATerm d_14, ATerm t)
{
  t = SSL_access(c_14, d_14);
  return(t);
}
static ATerm a_28 (ATerm u_27, ATerm t)
{
  t = SSL_fclose(u_27);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  y_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_27 = ATgetArgument(t, 0);
      {
        ATerm k_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_27);
            LocalPopChoice(l_37);
          }
        else
          {
            t = k_37;
            t = a_28(y_27, t);
          }
      }
    }
  else
    {
      t = a_28(y_27, t);
    }
  return(t);
}
static ATerm o_9 (ATerm g_51, ATerm t)
{
  t = SSL_read_term_from_stream(g_51);
  return(t);
}
static ATerm p_9 (ATerm l_14, ATerm m_14, ATerm t)
{
  ATerm e_28 = NULL;
  t = SSL_fopen(l_14, m_14);
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_28);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_28 = NULL;
  t = SSL_stdin_stream();
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_28);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_28 = NULL;
  t = SSL_stdout_stream();
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_28);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_28 = NULL;
  t = SSL_stderr_stream();
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_28);
  return(t);
}
static ATerm i_30 (ATerm q_28, ATerm t)
{
  ATerm r_28 = NULL;
  t = SSL_explode_term(q_28);
  if(match_cons(t, sym__2))
    {
      ATerm m_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_37 = ATgetArgument(t, 1);
        if(((ATgetType(n_37) == AT_LIST) && !(ATisEmpty(n_37))))
          {
            r_28 = ATgetFirst((ATermList) n_37);
            {
              ATerm o_37 = (ATerm) ATgetNext((ATermList) n_37);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_28;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_28;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_28;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_28;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_30 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,e_29 = NULL,h_29 = NULL,s_0 = NULL;
  t = SSLgetAnnotations(w_28);
  e_29 = t;
  t = u_28;
  if(match_cons(t, sym_Path_1))
    {
      h_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_29, v_28);
  s_0 = t;
  t = SSLsetAnnotations(s_0, e_29);
  if(match_cons(t, sym__2))
    {
      x_28 = ATgetArgument(t, 0);
      y_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(x_28, y_28, t);
  return(t);
}
static ATerm o_30 (ATerm n_29, ATerm s_29, ATerm t_29, ATerm t)
{
  ATerm u_29 = NULL,x_29 = NULL,y_29 = NULL,b_30 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(t_29);
  y_29 = t;
  t = SSL_is_string(n_29);
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_30, s_29);
  a_1 = t;
  t = SSLsetAnnotations(a_1, y_29);
  if(match_cons(t, sym__2))
    {
      u_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(u_29, x_29, t);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm d_30 = NULL,g_30 = NULL,h_30 = NULL;
  d_30 = t;
  if(match_cons(t, sym__2))
    {
      g_30 = ATgetArgument(t, 0);
      h_30 = ATgetArgument(t, 1);
      {
        ATerm p_37 = t;
        int q_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_30(d_30, t);
            LocalPopChoice(q_37);
          }
        else
          {
            t = p_37;
            {
              ATerm r_37 = t;
              int s_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_30(g_30, h_30, d_30, t);
                  LocalPopChoice(s_37);
                }
              else
                {
                  t = r_37;
                  t = o_30(g_30, h_30, d_30, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_30(d_30, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_30 = NULL,t_30 = NULL,u_30 = NULL,z_30 = NULL;
  z_30 = t;
  {
    ATerm t_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_30, term_v_37);
        t = q_9(t);
        LocalPopChoice(u_37);
      }
    else
      {
        t = t_37;
        {
          ATerm r_6 = NULL,t_6 = NULL;
          t = term_w_37;
          t_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_37, z_30);
          t = t_9(t_6, z_30, t);
          r_6 = t;
          t = SSL_perror(r_6);
          _fail(t);
        }
      }
  }
  t_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_9(u_30, t);
  q_30 = t;
  t = t_30;
  t = fclose_0_0(t);
  t = q_30;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_x_37;
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
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_31 = NULL,f_31 = NULL;
      e_31 = t;
      t = (ATerm) ATinsert(ATempty, term_f_38);
      f_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_31, (ATerm) ATinsert(ATempty, term_f_38));
      t = r_9(e_31, f_31, t);
      LocalPopChoice(e_38);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_38;
      {
        ATerm i_38 = t;
        int j_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_38 = t;
            if((PushChoice() == 0))
              {
                ATerm g_31 = NULL,h_31 = NULL;
                g_31 = t;
                t = (ATerm) ATinsert(ATempty, term_j_10);
                h_31 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_31, (ATerm) ATinsert(ATempty, term_j_10));
                t = r_9(g_31, h_31, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_38;
              }
            t = debug_1_0(y_1, t);
            LocalPopChoice(j_38);
          }
        else
          {
            t = i_38;
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
  t = term_l_38;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_m_38;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
  b_32 = t;
  t = term_u_25;
  c_32 = t;
  t = (ATerm) ATinsert(ATempty, term_p_38);
  d_32 = t;
  t = SSL_printnl(c_32, d_32);
  t = b_32;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm e_32 = NULL,h_32 = NULL,i_32 = NULL;
  if(match_cons(t, sym__3))
    {
      e_32 = ATgetArgument(t, 0);
      h_32 = ATgetArgument(t, 1);
      i_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_9(e_32, h_32, i_32, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,o_32 = NULL;
  j_32 = t;
  t = term_u_25;
  k_32 = t;
  t = (ATerm) ATinsert(ATempty, term_q_38);
  o_32 = t;
  t = SSL_printnl(k_32, o_32);
  t = j_32;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,f_33 = NULL;
  p_32 = t;
  t = term_u_25;
  q_32 = t;
  t = (ATerm) ATinsert(ATempty, term_p_38);
  f_33 = t;
  t = SSL_printnl(q_32, f_33);
  t = p_32;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
  i_31 = t;
  t = if_verbose5_1_0(a_2, t);
  {
    ATerm s_38 = t;
    if((PushChoice() == 0))
      {
        ATerm x_31 = NULL,y_31 = NULL;
        t = term_t_38;
        x_31 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, i_31);
        y_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_38, (ATerm) ATmakeAppl(sym_Imported_1, i_31));
        t = b_10(x_31, y_31, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_38;
      }
  }
  k_31 = t;
  t = term_t_38;
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_38, term_v_38, (ATerm) ATinsert(ATempty, i_31));
  t = lookup_table_0_1(r_31, t);
  w_31 = t;
  t = term_v_38;
  t_31 = t;
  t = (ATerm) ATinsert(ATempty, i_31);
  u_31 = t;
  t = w_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(t_31, u_31, v_31, t);
  t = k_31;
  t = if_verbose4_1_0(c_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(e_2, t);
  j_31 = t;
  t = term_t_38;
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_38, j_31);
  t = n_9(f_2, q_31, j_31, t);
  t = if_verbose6_1_0(h_2, t);
  t = term_t_38;
  l_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_38, (ATerm)ATmakeAppl(sym_Imported_1, i_31), (ATerm) ATempty);
  t = lookup_table_0_1(l_31, t);
  p_31 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, i_31);
  m_31 = t;
  t = (ATerm) ATempty;
  n_31 = t;
  t = p_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(m_31, n_31, o_31, t);
  t = (ATerm) ATmakeAppl(sym__3, term_t_38, (ATerm)ATmakeAppl(sym_Imported_1, i_31), (ATerm) ATempty);
  t = if_verbose4_1_0(j_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm z_96 (ATerm), ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
  f_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_34;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_34 = ATgetFirst((ATermList) t);
          h_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_38 = t;
        int a_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_7 = NULL,j_7 = NULL,n_7 = NULL,q_1 = NULL;
            t = SSLgetAnnotations(f_34);
            g_7 = t;
            t = g_34;
            t = z_96(t);
            j_7 = t;
            t = h_34;
            t = filter_1_0(z_96, t);
            n_7 = t;
            t = (ATerm) ATinsert(CheckATermList(n_7), j_7);
            q_1 = t;
            t = SSLsetAnnotations(q_1, g_7);
            LocalPopChoice(a_39);
          }
        else
          {
            t = y_38;
            t = h_34;
            t = filter_1_0(z_96, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm t)
{
  static ATerm m_34 (ATerm t);
  static ATerm m_34 (ATerm t)
  {
    ATerm h_39 = t;
    int j_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_83(t);
        t = m_34(t);
        LocalPopChoice(j_39);
      }
    else
      {
        t = h_39;
        t = g_83(t);
      }
    return(t);
  }
  t = m_34(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm k_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_34 = NULL,o_34 = NULL;
      t = term_x_7;
      n_34 = t;
      t = term_o_39;
      o_34 = t;
      t = term_s_39;
      t = b_10(n_34, o_34, t);
      LocalPopChoice(l_39);
    }
  else
    {
      t = k_39;
      {
        ATerm t_39 = t;
        int z_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_34 = NULL;
            t = term_a_40;
            q_34 = t;
            t = SSL_getenv(q_34);
            LocalPopChoice(z_39);
          }
        else
          {
            t = t_39;
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
  t = term_c_40;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL;
  t = term_t_38;
  a_35 = t;
  t = term_e_40;
  b_35 = t;
  t = term_g_40;
  t = b_10(a_35, b_35, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm h_40 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_40;
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
  t = term_j_40;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm w_34 = NULL;
  t = if_verbose5_1_0(n_2, t);
  w_34 = t;
  {
    ATerm k_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_34 = NULL,y_34 = NULL;
        t = term_t_38;
        x_34 = t;
        t = term_v_38;
        y_34 = t;
        t = term_u_40;
        t = b_10(x_34, y_34, t);
        LocalPopChoice(p_40);
      }
    else
      {
        t = k_40;
        {
          ATerm z_34 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          z_34 = t;
          t = repeat_2_0(s_2, _id, t);
          t = z_34;
        }
      }
  }
  t = w_34;
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
  t = term_v_40;
  return(t);
}
static ATerm t_36 (ATerm j_35, ATerm t)
{
  ATerm p_35 = NULL,r_35 = NULL,s_35 = NULL;
  t = term_t_38;
  r_35 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, j_35);
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_38, (ATerm) ATmakeAppl(sym_Tool_1, j_35));
  t = b_10(r_35, s_35, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_40 = ATgetFirst((ATermList) t);
      if(match_cons(w_40, sym__2))
        {
          ATerm y_40 = ATgetArgument(w_40, 0);
          p_35 = ATgetArgument(w_40, 1);
        }
      else
        _fail(t);
      {
        ATerm x_40 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_35;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = debug_1_0(j_3, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_v_40;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_t_38;
  t = table_getlist_0_0(t);
  t = debug_1_0(l_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_z_40;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm a_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
      t = if_verbose5_1_0(y_2, t);
      t = xtc_load_0_0(t);
      v_35 = t;
      if(match_cons(t, sym__2))
        {
          t_35 = ATgetArgument(t, 0);
          u_35 = ATgetArgument(t, 1);
          {
            ATerm j_41 = t;
            int k_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
                t = term_t_38;
                b_36 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, t_35);
                c_36 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_t_38, (ATerm) ATmakeAppl(sym_Tool_1, t_35));
                t = b_10(b_36, c_36, t);
                {
                  static ATerm c_3 (ATerm t);
                  static ATerm c_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((u_35 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((a_36 != NULL) && (a_36 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          a_36 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(c_3, t);
                }
                t = not_null(a_36);
                LocalPopChoice(k_41);
              }
            else
              {
                t = j_41;
                t = t_36(v_35, t);
              }
          }
        }
      else
        {
          t = t_36(v_35, t);
        }
      t = if_verbose5_1_0(h_3, t);
      LocalPopChoice(c_41);
    }
  else
    {
      t = a_41;
      {
        ATerm s_36 = NULL,v_7 = NULL,w_7 = NULL;
        s_36 = t;
        t = term_u_25;
        v_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_41), s_36), term_l_41);
        w_7 = t;
        t = SSL_printnl(v_7, w_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_41), s_36), term_l_41);
        t = if_verbose5_1_0(k_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm y_36 = NULL,a_37 = NULL;
  a_37 = t;
  t = v_112(t);
  t = xtc_find_0_0(t);
  y_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_36, a_37);
  {
    static ATerm n_3 (ATerm t);
    static ATerm n_3 (ATerm t)
    {
      ATerm d_37 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, y_36, a_37);
      t = g_9(y_36, a_37, t);
      t = term_o_41;
      d_37 = t;
      t = SSL_exit(d_37);
      return(t);
    }
    t = fork_and_wait_1_0(n_3, t);
  }
  t = a_37;
  return(t);
}
ATerm at_end_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  static ATerm b_38 (ATerm t);
  static ATerm b_38 (ATerm t)
  {
    ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
    a_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_37 = ATgetFirst((ATermList) t);
        z_37 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_8 = NULL,e_8 = NULL,i_2 = NULL;
          t = SSLgetAnnotations(a_38);
          b_8 = t;
          t = z_37;
          t = b_38(t);
          e_8 = t;
          t = (ATerm) ATinsert(CheckATermList(e_8), y_37);
          i_2 = t;
          t = SSLsetAnnotations(i_2, b_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_38;
        t = s_85(t);
      }
    return(t);
  }
  t = b_38(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_37;
    }
  else
    {
      static ATerm q_3 (ATerm t);
      static ATerm q_3 (ATerm t)
      {
        t = not_null(h_37);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_37 = ATgetFirst((ATermList) t);
          if(((h_37 != NULL) && (h_37 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_37;
      t = at_end_1_0(q_3, t);
    }
  return(t);
}
static ATerm u_38 (ATerm g_38, ATerm t)
{
  ATerm h_38 = NULL;
  t = SSL_explode_term(g_38);
  if(match_cons(t, sym__2))
    {
      ATerm q_41 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_41) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_38;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,r_38 = NULL;
  r_38 = t;
  if(match_cons(t, sym__2))
    {
      n_38 = ATgetArgument(t, 0);
      o_38 = ATgetArgument(t, 1);
      {
        ATerm t_41 = t;
        int u_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_3 (ATerm t);
            static ATerm t_3 (ATerm t)
            {
              t = o_38;
              return(t);
            }
            t = n_38;
            t = at_end_1_0(t_3, t);
            LocalPopChoice(u_41);
          }
        else
          {
            t = t_41;
            t = u_38(r_38, t);
          }
      }
    }
  else
    {
      t = u_38(r_38, t);
    }
  return(t);
}
static ATerm s_9 (ATerm b_94 (ATerm), ATerm y_26, ATerm w_26, ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,z_38 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL;
  b_39 = t;
  t = b_94(t);
  w_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_38, y_26, w_26);
  t = c_10(w_38, y_26, w_26, t);
  {
    ATerm w_41 = t;
    int x_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_39 = NULL;
        t = term_y_41;
        g_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_38, term_y_41);
        t = b_10(w_38, g_39, t);
        {
          ATerm z_41 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_41;
            }
        }
        LocalPopChoice(x_41);
      }
    else
      {
        t = w_41;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_38 = ATgetFirst((ATermList) t);
      z_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_38, term_y_41, (ATerm) ATinsert(CheckATermList(z_38), (ATerm) ATinsert(CheckATermList(x_38), y_26)));
  t = lookup_table_0_1(w_38, t);
  f_39 = t;
  t = term_y_41;
  c_39 = t;
  t = (ATerm) ATinsert(CheckATermList(z_38), (ATerm) ATinsert(CheckATermList(x_38), y_26));
  d_39 = t;
  t = f_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(c_39, d_39, e_39, t);
  t = b_39;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm i_39 = NULL;
  ATerm a_42 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_39 = NULL,l_8 = NULL;
      m_39 = t;
      t = term_d_42;
      l_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_39, term_d_42);
      t = t_9(m_39, l_8, t);
      i_39 = t;
      t = SSL_mkstemp(i_39);
      LocalPopChoice(c_42);
    }
  else
    {
      t = a_42;
      {
        ATerm n_39 = NULL;
        t = term_e_42;
        n_39 = t;
        t = SSL_perror(n_39);
        _fail(t);
      }
    }
  return(t);
}
static ATerm t_9 (ATerm r_46, ATerm s_46, ATerm t)
{
  t = SSL_strcat(r_46, s_46);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,u_39 = NULL,v_39 = NULL;
  t = P__tmpdir_0_0(t);
  u_39 = t;
  t = term_f_42;
  v_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_39, term_f_42);
  t = t_9(u_39, v_39, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      q_39 = ATgetArgument(t, 0);
      p_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_j_8;
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_39, term_j_8);
  t = s_9(v_3, q_39, r_39, t);
  t = SSL_close(p_39);
  t = q_39;
  return(t);
}
ATerm xtc_generate_2_0 (ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL;
  t = term_j_8;
  t = xtc_new_file_0_0(t);
  w_39 = t;
  t = a_112(t);
  x_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_39, (ATerm) ATinsert(ATinsert(ATempty, w_39), term_y_7));
  t = conc_0_0(t);
  t = xtc_command_1_0(z_111, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_39);
  return(t);
}
static ATerm v_9 (ATerm h_28, ATerm i_28, ATerm t)
{
  ATerm y_39 = NULL,b_40 = NULL;
  b_40 = t;
  {
    ATerm g_42 = t;
    int h_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_28, i_28);
        t = b_10(h_28, i_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_42 = ATgetFirst((ATermList) t);
            y_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(h_42);
        {
          ATerm d_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, h_28, i_28, y_39);
          t = lookup_table_0_1(h_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_10(i_28, y_39, d_40, t);
          t = (ATerm) ATmakeAppl(sym__3, h_28, i_28, y_39);
        }
      }
    else
      {
        t = g_42;
        {
          ATerm f_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, h_28, i_28);
          t = lookup_table_0_1(h_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_9(i_28, f_40, t);
          t = (ATerm) ATmakeAppl(sym__2, h_28, i_28);
        }
      }
  }
  t = b_40;
  return(t);
}
ATerm end_scope_1_0 (ATerm y_93 (ATerm), ATerm t)
{
  ATerm i_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,q_40 = NULL,r_40 = NULL;
  n_40 = t;
  t = y_93(t);
  m_40 = t;
  {
    ATerm k_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_40 = NULL;
        t = term_y_41;
        s_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_40, term_y_41);
        t = b_10(m_40, s_40, t);
        {
          ATerm m_42 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_42;
            }
        }
        LocalPopChoice(l_42);
      }
    else
      {
        t = k_42;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_40 = ATgetFirst((ATermList) t);
      i_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_40, term_y_41, i_40);
  t = lookup_table_0_1(m_40, t);
  r_40 = t;
  t = term_y_41;
  o_40 = t;
  t = r_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(o_40, i_40, q_40, t);
  t = l_40;
  {
    static ATerm x_3 (ATerm t);
    static ATerm x_3 (ATerm t)
    {
      ATerm t_40 = NULL;
      t_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_40, t_40);
      t = v_9(m_40, t_40, t);
      return(t);
    }
    t = map_1_0(x_3, t);
  }
  t = n_40;
  return(t);
}
ATerm restore_always_2_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm t)
{
  ATerm q_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_83(t);
      t = b_83(t);
      LocalPopChoice(r_42);
    }
  else
    {
      t = q_42;
      t = b_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm b_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL;
  d_41 = t;
  t = x_93(t);
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_41, term_y_41);
  {
    ATerm t_42 = t;
    int u_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_41 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm v_42 = ATgetArgument(t, 0);
            ATerm w_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_41;
        m_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_41, term_y_41);
        t = b_10(b_41, m_41, t);
        LocalPopChoice(u_42);
      }
    else
      {
        t = t_42;
        t = (ATerm) ATempty;
      }
  }
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_41, term_y_41, (ATerm) ATinsert(CheckATermList(e_41), (ATerm) ATempty));
  t = lookup_table_0_1(b_41, t);
  i_41 = t;
  t = term_y_41;
  f_41 = t;
  t = (ATerm) ATinsert(CheckATermList(e_41), (ATerm) ATempty);
  g_41 = t;
  t = i_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(f_41, g_41, h_41, t);
  t = d_41;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_k_10;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm b_42 = NULL;
  b_42 = t;
  {
    ATerm y_42 = t;
    int z_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(b_42);
        LocalPopChoice(z_42);
      }
    else
      {
        t = y_42;
        t = b_42;
      }
  }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm h_112 (ATerm), ATerm t)
{
  ATerm p_41 = NULL;
  static ATerm z_3 (ATerm t);
  static ATerm z_3 (ATerm t)
  {
    ATerm r_41 = NULL;
    r_41 = t;
    {
      ATerm d_43 = t;
      int g_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_41 = NULL,v_41 = NULL;
          t = term_k_10;
          s_41 = t;
          t = term_y_41;
          v_41 = t;
          t = term_h_43;
          t = b_10(s_41, v_41, t);
          LocalPopChoice(g_43);
        }
      else
        {
          t = d_43;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((p_41 != NULL) && (p_41 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          p_41 = ATgetFirst((ATermList) t);
        {
          ATerm i_43 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = p_41;
    t = map_1_0(a_4, t);
    t = r_41;
    t = end_scope_1_0(c_4, t);
    return(t);
  }
  t = begin_scope_1_0(y_3, t);
  t = restore_always_2_0(h_112, z_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,s_42 = NULL;
  j_42 = t;
  t = term_j_8;
  t = whoami_0_0(t);
  n_42 = t;
  t = term_u_25;
  p_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_43), n_42), term_j_43);
  s_42 = t;
  t = SSL_printnl(p_42, s_42);
  t = term_t_13;
  o_42 = t;
  t = SSL_exit(o_42);
  t = j_42;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm x_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_43 = NULL,f_43 = NULL,l_43 = NULL;
      t = term_j_8;
      t = p_0(t);
      e_43 = t;
      t = term_m_43;
      f_43 = t;
      t = term_n_43;
      l_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_43, term_n_43, e_43);
      t = c_10(f_43, l_43, e_43, t);
      _fail(t);
    }
  else
    {
      ATerm p_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_42 = ATgetFirst((ATermList) t);
          a_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_43;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_43 = ATgetFirst((ATermList) t);
          c_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_42;
      t = m_0(t);
      t = b_43;
      t = o_0(t);
      p_43 = t;
      t = (ATerm) ATinsert(CheckATermList(c_43), p_43);
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm t_43 = NULL;
  t_43 = t;
  if(match_string(t, "-k"))
    {
      t = t_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_43;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
  u_43 = t;
  t = SSL_string_to_int(u_43);
  v_43 = t;
  t = term_o_43;
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_43, v_43);
  t = e_10(w_43, v_43, t);
  t = u_43;
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
  ATerm a_44 = NULL;
  a_44 = t;
  if(match_string(t, "-S"))
    {
      t = a_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_44;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL;
  t = term_n_27;
  b_44 = t;
  t = term_x_13;
  c_44 = t;
  t = term_r_43;
  t = e_10(b_44, c_44, t);
  t = term_s_43;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_x_43;
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
  ATerm f_44 = NULL,g_44 = NULL,n_44 = NULL;
  f_44 = t;
  t = SSL_string_to_int(f_44);
  g_44 = t;
  t = term_n_27;
  n_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_27, g_44);
  t = e_10(n_44, g_44, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_44);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_y_43;
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
  ATerm o_44 = NULL,p_44 = NULL;
  t = term_z_43;
  o_44 = t;
  t = term_j_8;
  p_44 = t;
  t = term_d_44;
  t = e_10(o_44, p_44, t);
  t = term_e_44;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_h_44;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_44 = t;
  int m_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_4, n_4, p_4, t);
      LocalPopChoice(m_44);
    }
  else
    {
      t = l_44;
      {
        ATerm q_44 = t;
        int r_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_4, t_4, u_4, t);
            LocalPopChoice(r_44);
          }
        else
          {
            t = q_44;
            t = Option_3_0(v_4, w_4, y_4, t);
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm s_44 = NULL;
  s_44 = t;
  if(match_string(t, "-o"))
    {
      t = s_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_44;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL;
  v_44 = t;
  t = term_y_7;
  w_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, v_44);
  t = e_10(w_44, v_44, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_44);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_t_44;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_5, c_5, d_5, t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm y_44 = NULL;
  y_44 = t;
  if(match_string(t, "-i"))
    {
      t = y_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_44;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL;
  c_45 = t;
  t = term_w_10;
  d_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_10, c_45);
  t = e_10(d_45, c_45, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_45);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_u_44;
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
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL;
  f_45 = t;
  t = term_x_44;
  g_45 = t;
  t = term_e_45;
  h_45 = t;
  t = term_k_45;
  t = e_10(g_45, h_45, t);
  t = f_45;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_m_45;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm i_45 = NULL;
  i_45 = t;
  if(match_string(t, "-t"))
    {
      t = i_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--title", 0, ATtrue)))
        _fail(t);
      t = i_45;
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm j_45 = NULL,l_45 = NULL;
  j_45 = t;
  t = term_s_25;
  l_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_25, j_45);
  t = e_10(l_45, j_45, t);
  t = j_45;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_s_45;
  return(t);
}
ATerm abox2html_options_0_0 (ATerm t)
{
  ATerm t_45 = t;
  int v_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(v_45);
    }
  else
    {
      t = t_45;
      {
        ATerm y_45 = t;
        int z_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(z_45);
          }
        else
          {
            t = y_45;
            {
              ATerm b_46 = t;
              int c_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(c_46);
                }
              else
                {
                  t = b_46;
                  {
                    ATerm e_46 = t;
                    int f_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(f_46);
                      }
                    else
                      {
                        t = e_46;
                        {
                          ATerm h_46 = t;
                          int i_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(t_5, v_5, x_5, t);
                              LocalPopChoice(i_46);
                            }
                          else
                            {
                              t = h_46;
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
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_8;
  t = whoami_0_0(t);
  n_45 = t;
  t = term_u_25;
  p_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_46), n_45);
  q_45 = t;
  t = SSL_printnl(p_45, q_45);
  t = term_t_13;
  o_45 = t;
  t = SSL_exit(o_45);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm r_45 = NULL,u_45 = NULL;
  t = term_x_7;
  r_45 = t;
  t = term_k_46;
  u_45 = t;
  t = term_l_46;
  t = b_10(r_45, u_45, t);
  return(t);
}
static ATerm w_9 (ATerm k_25, ATerm l_25, ATerm t)
{
  ATerm m_46 = t;
  int n_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_25, l_25);
      LocalPopChoice(n_46);
    }
  else
    {
      t = m_46;
      t = SSL_addr(k_25, l_25);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,a_46 = NULL;
  w_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_45;
      t = p_92(t);
    }
  else
    {
      ATerm d_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_45 = ATgetFirst((ATermList) t);
          a_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_46;
      t = foldr_2_0(p_92, q_92, t);
      d_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_45, d_46);
      t = q_92(t);
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
  t = term_x_13;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm v_8 = NULL,y_8 = NULL;
  if(match_cons(t, sym__2))
    {
      v_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(v_8, y_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_46 = NULL,q_8 = NULL,r_8 = NULL;
  t = times_0_0(t);
  r_8 = t;
  t = SSL_explode_term(r_8);
  if(match_cons(t, sym__2))
    {
      ATerm o_46 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8;
  t = foldr_2_0(b_6, c_6, t);
  g_46 = t;
  t = SSL_TicksToSeconds(g_46);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
  u_46 = t;
  if(match_cons(t, sym__2))
    {
      v_46 = ATgetArgument(t, 0);
      w_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_46 = t;
    int q_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_46;
        if((v_46 != t))
          {
            _fail(t);
          }
        t = u_46;
        LocalPopChoice(q_46);
      }
    else
      {
        t = p_46;
        t = (ATerm) ATmakeAppl(sym__2, v_46, w_46);
        {
          ATerm t_46 = t;
          int x_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_46, w_46);
              LocalPopChoice(x_46);
            }
          else
            {
              t = t_46;
              t = SSL_gtr(v_46, w_46);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_46, w_46);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_110 (ATerm), ATerm t)
{
  ATerm a_47 = NULL;
  a_47 = t;
  {
    ATerm y_46 = t;
    int z_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_47 = NULL,i_47 = NULL,k_47 = NULL;
        t = term_x_7;
        i_47 = t;
        t = term_n_27;
        k_47 = t;
        t = term_q_27;
        t = b_10(i_47, k_47, t);
        h_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_47, term_t_13);
        t = geq_0_0(t);
        t = a_47;
        t = t_110(t);
        LocalPopChoice(z_46);
      }
    else
      {
        t = y_46;
        t = a_47;
      }
  }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm m_47 = NULL,t_47 = NULL,x_47 = NULL,y_47 = NULL;
  t = run_time_0_0(t);
  m_47 = t;
  t = term_j_8;
  t = whoami_0_0(t);
  t_47 = t;
  t = term_u_25;
  x_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_47), m_47), term_t_27), t_47);
  y_47 = t;
  t = SSL_printnl(x_47, y_47);
  t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_47), m_47), term_t_27), t_47));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_13;
  z_47 = t;
  t = SSL_exit(z_47);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL;
  q_48 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_48;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_48 = ATgetArgument(t, 0);
          {
            ATerm n_10 = NULL,m_2 = NULL;
            t = SSLgetAnnotations(q_48);
            n_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_48);
            m_2 = t;
            t = SSLsetAnnotations(m_2, n_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_48;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_78 (ATerm), ATerm t)
{
  ATerm g_47 = t;
  int j_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_48 = NULL,g_48 = NULL;
      t = term_x_7;
      c_48 = t;
      t = term_l_47;
      g_48 = t;
      t = term_n_47;
      t = b_10(c_48, g_48, t);
      LocalPopChoice(j_47);
    }
  else
    {
      t = g_47;
      t = fetch_1_0(e_6, t);
    }
  t = k_78(t);
  return(t);
}
static ATerm f_10 (ATerm u_32, ATerm v_32, ATerm w_32, ATerm t)
{
  ATerm s_48 = NULL;
  t = SSL_hashtable_put(w_32, u_32, v_32);
  s_48 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_48);
  return(t);
}
static ATerm g_10 (ATerm x_32, ATerm y_32, ATerm t)
{
  t = SSL_hashtable_get(y_32, x_32);
  return(t);
}
ATerm lookup_table_0_1 (ATerm o_29, ATerm t)
{
  ATerm e_49 = NULL;
  t = table_hashtable_0_0(t);
  e_49 = t;
  {
    ATerm o_47 = t;
    int p_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_10 = NULL;
        t = e_49;
        if(match_cons(t, sym_Hashtable_1))
          {
            t_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_10(o_29, t_10, t);
        LocalPopChoice(p_47);
      }
    else
      {
        t = o_47;
        {
          ATerm y_10 = NULL;
          t = o_29;
          t = table_create_0_0(t);
          t = e_49;
          if(match_cons(t, sym_Hashtable_1))
            {
              y_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_10(o_29, y_10, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm h_49 = NULL;
  t = SSL_hashtable_create(c_33, d_33);
  h_49 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_49);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL,m_49 = NULL,p_49 = NULL;
  i_49 = t;
  t = term_q_47;
  m_49 = t;
  t = term_r_47;
  p_49 = t;
  t = i_49;
  t = new_hashtable_0_2(m_49, p_49, t);
  j_49 = t;
  t = i_49;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(i_49, j_49, k_49, t);
  t = i_49;
  return(t);
}
static ATerm y_9 (ATerm z_32, ATerm a_33, ATerm t)
{
  ATerm s_49 = NULL;
  t = SSL_hashtable_remove(a_33, z_32);
  s_49 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_49);
  return(t);
}
static ATerm z_9 (ATerm e_33, ATerm t)
{
  ATerm t_49 = NULL;
  t = SSL_hashtable_destroy(e_33);
  t_49 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_49);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm u_49 = NULL;
  t = SSL_table_hashtable();
  u_49 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_49);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL;
  v_49 = t;
  t = table_hashtable_0_0(t);
  w_49 = t;
  t = lookup_table_0_1(v_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_9(y_49, t);
  t = w_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_9(v_49, x_49, t);
  t = v_49;
  return(t);
}
ATerm map_1_0 (ATerm b_85 (ATerm), ATerm t)
{
  static ATerm c_51 (ATerm t);
  static ATerm c_51 (ATerm t)
  {
    ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL;
    x_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_50;
      }
    else
      {
        ATerm o_11 = NULL,v_11 = NULL,a_12 = NULL,t_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_50 = ATgetFirst((ATermList) t);
            z_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_50);
        o_11 = t;
        t = y_50;
        t = b_85(t);
        v_11 = t;
        t = z_50;
        t = c_51(t);
        a_12 = t;
        t = (ATerm) ATinsert(CheckATermList(a_12), v_11);
        t_8 = t;
        t = SSLsetAnnotations(t_8, o_11);
      }
    return(t);
  }
  t = c_51(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_51 = ATgetFirst((ATermList) t);
      i_51 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_51 = NULL,q_51 = NULL;
        static ATerm f_6 (ATerm t);
        static ATerm f_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_51)), not_null(q_51));
          return(t);
        }
        t = i_51;
        t = l_0(t);
        if(((p_51 != NULL) && (p_51 != t)))
          _fail(t);
        else
          p_51 = t;
        t = h_51;
        t = j_0(t);
        if(((q_51 != NULL) && (q_51 != t)))
          _fail(t);
        else
          q_51 = t;
        t = i_51;
        t = reverse_acc_2_0(j_0, f_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_8;
      t = l_0(t);
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,r_52 = NULL,y_14 = NULL;
  r_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_52);
  m_52 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_52);
  y_14 = t;
  t = SSLsetAnnotations(y_14, m_52);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm t_52 = NULL;
  t_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_52), term_s_47);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_51 = NULL,b_52 = NULL;
  ATerm u_47 = t;
  int v_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_52 = NULL,f_52 = NULL;
      t = term_x_7;
      c_52 = t;
      t = term_k_46;
      f_52 = t;
      t = term_l_46;
      t = b_10(c_52, f_52, t);
      LocalPopChoice(v_47);
    }
  else
    {
      t = u_47;
      t = fetch_1_0(g_6, t);
    }
  t = term_w_47;
  t = echo_0_0(t);
  t = term_m_43;
  y_51 = t;
  t = term_n_43;
  b_52 = t;
  t = term_a_48;
  t = b_10(y_51, b_52, t);
  t = reverse_acc_2_0(_id, h_6, t);
  t = map_1_0(i_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  static ATerm z_53 (ATerm t);
  static ATerm z_53 (ATerm t)
  {
    ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL;
    w_53 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_53 = ATgetFirst((ATermList) t);
        y_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_48 = t;
      int d_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_12 = NULL,f_13 = NULL,a_15 = NULL;
          t = SSLgetAnnotations(w_53);
          z_12 = t;
          t = x_53;
          t = l_85(t);
          f_13 = t;
          t = (ATerm) ATinsert(CheckATermList(y_53), f_13);
          a_15 = t;
          t = SSLsetAnnotations(a_15, z_12);
          LocalPopChoice(d_48);
        }
      else
        {
          t = b_48;
          {
            ATerm q_13 = NULL,v_13 = NULL,b_15 = NULL;
            t = SSLgetAnnotations(w_53);
            q_13 = t;
            t = y_53;
            t = z_53(t);
            v_13 = t;
            t = (ATerm) ATinsert(CheckATermList(v_13), x_53);
            b_15 = t;
            t = SSLsetAnnotations(b_15, q_13);
          }
        }
    }
    return(t);
  }
  t = z_53(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_54 = NULL,f_54 = NULL,g_54 = NULL;
  d_54 = t;
  {
    ATerm e_48 = t;
    int f_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_54;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_48 = ATgetFirst((ATermList) t);
                ATerm i_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_54;
          }
        LocalPopChoice(f_48);
      }
    else
      {
        t = e_48;
        t = (ATerm) ATinsert(ATempty, d_54);
      }
  }
  f_54 = t;
  t = term_a_8;
  g_54 = t;
  t = SSL_printnl(g_54, f_54);
  t = d_54;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL;
  t = term_x_7;
  o_54 = t;
  t = term_k_46;
  p_54 = t;
  t = term_l_46;
  t = b_10(o_54, p_54, t);
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
  ATerm q_54 = NULL,r_54 = NULL;
  t = term_j_48;
  q_54 = t;
  t = term_j_8;
  r_54 = t;
  t = term_k_48;
  t = e_10(q_54, r_54, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_l_48;
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
  ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL;
  t = term_j_48;
  u_54 = t;
  t = term_j_8;
  v_54 = t;
  t = term_k_48;
  t = e_10(u_54, v_54, t);
  t = term_m_48;
  s_54 = t;
  t = term_j_8;
  t_54 = t;
  t = term_n_48;
  t = e_10(s_54, t_54, t);
  t = term_o_48;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_r_48;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_48 = t;
  int u_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_6, m_6, p_6, t);
      LocalPopChoice(u_48);
    }
  else
    {
      t = t_48;
      t = Option_3_0(v_6, c_7, d_7, t);
    }
  return(t);
}
static ATerm e_10 (ATerm w_58, ATerm x_58, ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL;
  t = term_x_7;
  w_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_7, w_58, x_58);
  t = lookup_table_0_1(w_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(w_58, x_58, x_54, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_7, w_58, x_58);
  return(t);
}
static ATerm c_10 (ATerm c_28, ATerm d_28, ATerm b_28, ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL;
  a_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
  {
    ATerm v_48 = t;
    int w_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_48 = ATgetArgument(t, 0);
            ATerm y_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
        t = b_10(c_28, d_28, t);
        LocalPopChoice(w_48);
      }
    else
      {
        t = v_48;
        t = (ATerm) ATempty;
      }
  }
  b_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_28, d_28, (ATerm) ATinsert(CheckATermList(b_55), b_28));
  t = lookup_table_0_1(c_28, t);
  e_55 = t;
  t = (ATerm) ATinsert(CheckATermList(b_55), b_28);
  c_55 = t;
  t = e_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(d_28, c_55, d_55, t);
  t = a_55;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL;
      t = term_j_8;
      t = h_0(t);
      m_55 = t;
      t = term_m_43;
      n_55 = t;
      t = term_n_43;
      o_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_43, term_n_43, m_55);
      t = c_10(n_55, o_55, m_55, t);
      _fail(t);
    }
  else
    {
      ATerm r_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_55 = ATgetFirst((ATermList) t);
          l_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_55;
      t = d_0(t);
      t = term_j_8;
      t = g_0(t);
      r_55 = t;
      t = (ATerm) ATinsert(CheckATermList(l_55), r_55);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_71 (ATerm), ATerm q_71 (ATerm), ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,e_15 = NULL;
  x_55 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_55 = ATgetFirst((ATermList) t);
      u_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_55);
  s_55 = t;
  t = t_55;
  t = p_71(t);
  v_55 = t;
  t = u_55;
  t = q_71(t);
  w_55 = t;
  t = (ATerm) ATinsert(CheckATermList(w_55), v_55);
  e_15 = t;
  t = SSLsetAnnotations(e_15, s_55);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,h_56 = NULL,i_56 = NULL,g_15 = NULL;
  c_56 = t;
  {
    ATerm z_48 = t;
    int a_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_49;
        t = t_102(t);
        LocalPopChoice(a_49);
      }
    else
      {
        t = z_48;
      }
  }
  t = c_56;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_56 = ATgetFirst((ATermList) t);
      f_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_56);
  d_56 = t;
  t = term_k_46;
  i_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_46, e_56);
  t = e_10(i_56, e_56, t);
  t = f_56;
  {
    static ATerm s_56 (ATerm t);
    static ATerm s_56 (ATerm t)
    {
      ATerm c_49 = t;
      int d_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_49 = t;
          int g_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_56 = NULL;
              l_56 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_56;
              LocalPopChoice(g_49);
            }
          else
            {
              t = f_49;
              t = t_102(t);
              t = Cons_2_0(_id, s_56, t);
            }
          LocalPopChoice(d_49);
        }
      else
        {
          t = c_49;
          {
            ATerm o_56 = NULL,p_56 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_56 = ATgetFirst((ATermList) t);
                p_56 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_56), (ATerm) ATmakeAppl(sym_Undefined_1, o_56));
          }
        }
      return(t);
    }
    t = s_56(t);
  }
  h_56 = t;
  t = (ATerm) ATinsert(CheckATermList(h_56), (ATerm) ATmakeAppl(sym_Program_1, e_56));
  g_15 = t;
  t = SSLsetAnnotations(g_15, d_56);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm f_57 = NULL;
  f_57 = t;
  if(match_string(t, "--help"))
    {
      t = f_57;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_57;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_57;
        }
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL;
  t = term_l_47;
  g_57 = t;
  t = term_j_8;
  h_57 = t;
  t = term_l_49;
  t = e_10(g_57, h_57, t);
  t = term_n_49;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_o_49;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL;
  z_56 = t;
  t = term_m_43;
  a_57 = t;
  t = term_q_49;
  t = lookup_table_0_1(a_57, t);
  e_57 = t;
  t = term_n_43;
  b_57 = t;
  t = (ATerm) ATempty;
  c_57 = t;
  t = e_57;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(b_57, c_57, d_57, t);
  t = z_56;
  {
    static ATerm e_7 (ATerm t);
    static ATerm e_7 (ATerm t)
    {
      ATerm r_49 = t;
      int z_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_102(t);
          LocalPopChoice(z_49);
        }
      else
        {
          t = r_49;
          {
            ATerm a_50 = t;
            int b_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_7, i_7, m_7, t);
                LocalPopChoice(b_50);
              }
            else
              {
                t = a_50;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_7, t);
  }
  {
    ATerm c_50 = t;
    int f_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_57 = NULL;
        s_57 = t;
        {
          ATerm g_50 = t;
          int h_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_14 = NULL;
              t = s_57;
              {
                ATerm i_50 = t;
                int j_50 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_14 = NULL,g_14 = NULL;
                    t = term_x_7;
                    f_14 = t;
                    t = term_l_47;
                    g_14 = t;
                    t = term_n_47;
                    t = b_10(f_14, g_14, t);
                    LocalPopChoice(j_50);
                  }
                else
                  {
                    t = i_50;
                    t = fetch_1_0(o_7, t);
                  }
              }
              t = s_57;
              t = default_system_usage_0_0(t);
              t = term_x_13;
              e_14 = t;
              t = SSL_exit(e_14);
              LocalPopChoice(h_50);
            }
          else
            {
              t = g_50;
              {
                ATerm k_14 = NULL,n_14 = NULL,o_14 = NULL;
                t = term_x_7;
                n_14 = t;
                t = term_j_48;
                o_14 = t;
                t = term_k_50;
                t = b_10(n_14, o_14, t);
                t = s_57;
                t = default_system_about_0_0(t);
                t = term_x_13;
                k_14 = t;
                t = SSL_exit(k_14);
              }
            }
        }
        LocalPopChoice(f_50);
      }
    else
      {
        t = c_50;
        {
          ATerm l_50 = t;
          int m_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
              static ATerm p_7 (ATerm t);
              static ATerm p_7 (ATerm t)
              {
                ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL,i_15 = NULL;
                y_57 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_57 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_57);
                w_57 = t;
                t = x_57;
                if(((x_56 != NULL) && (x_56 != t)))
                  _fail(t);
                else
                  x_56 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_57);
                i_15 = t;
                t = SSLsetAnnotations(i_15, w_57);
                return(t);
              }
              t = fetch_1_0(p_7, t);
              t = term_u_25;
              u_57 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_56)), term_n_50);
              v_57 = t;
              t = SSL_printnl(u_57, v_57);
              t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_56)), term_n_50));
              t = default_system_usage_0_0(t);
              t = term_t_13;
              t_57 = t;
              t = SSL_exit(t_57);
              LocalPopChoice(m_50);
            }
          else
            {
              t = l_50;
            }
        }
      }
  }
  y_56 = t;
  t = term_m_43;
  t = table_destroy_0_0(t);
  t = y_56;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
  t = parse_options_1_0(m_78, t);
  d_58 = t;
  t = term_o_50;
  t = table_create_0_0(t);
  t = term_o_50;
  e_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_50, term_p_50, d_58);
  t = lookup_table_0_1(e_58, t);
  h_58 = t;
  t = term_p_50;
  f_58 = t;
  t = h_58;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(f_58, d_58, g_58, t);
  t = d_58;
  t = o_78(t);
  {
    ATerm q_50 = t;
    int r_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_78, t);
        LocalPopChoice(r_50);
      }
    else
      {
        t = q_50;
        {
          ATerm s_50 = t;
          int t_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_78(t);
              t = report_success_0_0(t);
              LocalPopChoice(t_50);
            }
          else
            {
              t = s_50;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm u_50 = t;
  int v_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_58 = NULL,s_14 = NULL,t_14 = NULL;
      r_58 = t;
      t = term_x_7;
      s_14 = t;
      t = term_x_44;
      t_14 = t;
      t = term_w_50;
      t = b_10(s_14, t_14, t);
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("gen-css", 0, ATtrue)))
        _fail(t);
      t = r_58;
      t = xtc_temp_files_1_0(r_7, t);
      LocalPopChoice(v_50);
    }
  else
    {
      t = u_50;
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
  t = term_d_51;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm e_51 = t;
  int f_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_14 = NULL,v_14 = NULL;
      t = term_x_7;
      u_14 = t;
      t = term_y_7;
      v_14 = t;
      t = term_z_7;
      t = b_10(u_14, v_14, t);
      LocalPopChoice(f_51);
    }
  else
    {
      t = e_51;
      t = term_a_8;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2html_options_0_0, default_usage_0_0, _id, q_7, t);
  return(t);
}
