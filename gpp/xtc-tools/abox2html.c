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
ATerm term_i_52;
ATerm term_h_52;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_w_51;
ATerm term_q_51;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_c_50;
ATerm term_y_49;
ATerm term_m_49;
ATerm term_b_49;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_d_48;
ATerm term_v_47;
ATerm term_s_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_m_47;
ATerm term_i_47;
ATerm term_y_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_s_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_v_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_c_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_p_43;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_k_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_q_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_z_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_q_40;
ATerm term_n_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_p_39;
ATerm term_n_39;
ATerm term_d_39;
ATerm term_a_39;
ATerm term_v_38;
ATerm term_o_38;
ATerm term_c_38;
ATerm term_o_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_u_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_q_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_q_30;
ATerm term_o_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_v_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_b_29;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_d_28;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_m_27;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_u_19;
ATerm term_u_18;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_a_14;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_c_10;
ATerm term_t_9;
ATerm term_d_9;
ATerm term_o_8;
ATerm term_k_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_c_8);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Dec", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Nov", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Oct", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Sep", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Aug", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Jul", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Jun", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("May", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Apr", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Mar", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Feb", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Jan", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("December", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("November", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("October", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("September", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("August", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("July", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("June", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("April", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("March", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("February", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("January", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Sat", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Fri", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Thu", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Wed", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Tue", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Mon", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Sun", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Saturday", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Friday", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Thursday", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Wednesday", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuesday", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Monday", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Sunday", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(100);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("p.m.", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("a.m.", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Saturday_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Friday_0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Thursday_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Wednesday_0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Tuesday_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Monday_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Sunday_0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_December_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_November_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_October_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_September_0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_August_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_July_0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_June_0);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_May_0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_April_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_March_0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_February_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_January_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("EEEE", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("d", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("MMMM", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("yyyy", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("HH", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("mm", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ss", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--title", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_d_26);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no title specified for HTML document", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<!-- \n", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   This file is generated at ", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" \n", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   by abox2html (C) 2001 Merijn de Jonge (mdejonge@cwi.nl)\n", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-->\n", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<!doctype html public \"-//W3C//DTD WWW HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/loose.dtd\"> \n", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<html>\n", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("  <head>\n", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("    <title>", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("</title>\n", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("    <link rel=\"stylesheet\" type=\"text/css\" href=\"boxstyle.css\">\n", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("  </head>\n", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("  <body>\n", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_h_11);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("  </body>\n", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("</html>\n", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-html", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_b_29);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_29, term_a_14, term_s_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_29, term_u_14, term_a_30);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_30, term_s_14, term_g_30);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_30, term_m_14, term_u_30);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_30, term_j_14, term_y_30);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_31, term_d_31, term_f_31);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_31, term_i_31, term_k_31);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_31, term_l_14, term_q_31);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_31, term_u_31, term_v_31);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_31, term_y_31, term_z_31);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_32, term_k_14, term_c_32);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_32, term_r_14, term_i_32);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_32, term_m_32, term_r_32);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_32, term_h_14, term_u_32);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_32, term_x_32, term_y_32);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_33, term_e_33, term_f_33);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_33, term_i_33, term_u_33);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_33, term_x_33, term_y_33);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_34, term_e_16, term_b_34);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_34, term_i_14, term_f_34);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_34, term_c_16, term_i_34);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_34, term_l_34, term_o_34);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_34, term_r_34, term_s_34);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_34, term_a_35, term_b_35);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_35, term_p_14, term_e_35);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_35, term_j_35, term_k_35);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_35, term_n_35, term_o_35);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_35, term_x_35, term_y_35);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_f_40);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(sym__2, term_x_39, term_s_40);
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(sym__2, term_x_39, term_y_39);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_k_42);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym__2, term_b_29, term_e_14);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_14);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(sym__2, term_f_44, term_o_8);
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym__2, term_v_44, term_y_44);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Only generate cascading style sheet", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-t title    Title of HTML document", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_y_45);
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_i_47);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym__2, term_t_43, term_u_43);
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(sym__2, term_l_48, term_o_8);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(sym__2, term_t_48, term_o_8);
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(sym__2, term_i_47, term_o_8);
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(sym__3, term_t_43, term_u_43, (ATerm) ATempty);
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_l_48);
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_v_44);
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css-boxstyle", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_close_fd_0_0 (ATerm t);
static ATerm e_9 (ATerm i_50, ATerm j_50, ATerm t);
ATerm File_as_fd_1_0 (ATerm h_115 (ATerm), ATerm t);
ATerm STDERR__FILENO_0_0 (ATerm t);
ATerm STDOUT__FILENO_0_0 (ATerm t);
ATerm STDIN__FILENO_0_0 (ATerm t);
ATerm xtc_open_fd_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_new_file_name_0_0 (ATerm t);
ATerm xtc_cat_0_0 (ATerm t);
static ATerm e_4 (ATerm n_3, ATerm t);
static ATerm f_4 (ATerm p_3, ATerm s_3, ATerm t_3, ATerm t);
static ATerm x_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm print_to_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm g_9 (ATerm j_54, ATerm k_54, ATerm t);
static ATerm h_9 (ATerm d_104 (ATerm), ATerm f_573, ATerm t_54, ATerm t);
static ATerm b_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm month2abbr_0_0 (ATerm t);
ATerm month2text_0_0 (ATerm t);
ATerm lt_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm day_of_week2abbr_0_0 (ATerm t);
ATerm day_of_week2text_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm t);
ATerm for_3_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
static ATerm j_9 (ATerm c_48, ATerm a_48, ATerm b_48, ATerm t);
static ATerm k_9 (ATerm j_47, ATerm k_47, ATerm l_47, ATerm t);
static ATerm l_9 (ATerm x_26, ATerm y_26, ATerm t);
ATerm month2index_0_0 (ATerm t);
ATerm date_pattern_to_int_0_0 (ATerm t);
static ATerm m_18 (ATerm l_15, ATerm n_15, ATerm t);
ATerm date_pattern_to_string_0_0 (ATerm t);
static ATerm m_9 (ATerm a_68, ATerm z_67, ATerm t);
ATerm index2day_of_week_0_0 (ATerm t);
ATerm index2month_0_0 (ATerm t);
static ATerm n_9 (ATerm t_64, ATerm s_64, ATerm r_64, ATerm q_64, ATerm p_64, ATerm o_64, ATerm u_64, ATerm v_64, ATerm t);
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t);
static ATerm o_9 (ATerm l_64, ATerm t);
ATerm now_epoch_time_0_0 (ATerm t);
ATerm now_local_time_0_0 (ATerm t);
ATerm create_time_0_0 (ATerm t);
ATerm get_title_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm abox2html_0_0 (ATerm t);
static ATerm o_10 (ATerm k_30, ATerm l_30, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm e_10 (ATerm b_17, ATerm m_206, ATerm t);
ATerm at_suffix_1_0 (ATerm k_89 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm c_89 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm o_101 (ATerm), ATerm t);
static ATerm r_1 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm h_10 (ATerm g_50, ATerm f_50, ATerm t);
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
static ATerm p_9 (ATerm f_26, ATerm g_26, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm q_9 (ATerm i_53, ATerm j_53, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm b_89 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm g_103 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm b_104 (ATerm), ATerm t);
static ATerm s_9 (ATerm q_33, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm o_114 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm n_114 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm p_114 (ATerm), ATerm t);
static ATerm u_9 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm m_22, ATerm l_22, ATerm t);
static ATerm v_9 (ATerm a_93 (ATerm), ATerm i_22, ATerm h_22, ATerm t);
static ATerm a_2 (ATerm t);
static ATerm w_9 (ATerm o_29, ATerm p_29, ATerm q_29, ATerm t);
static ATerm x_9 (ATerm x_97 (ATerm), ATerm y_29, ATerm x_29, ATerm t);
static ATerm g_10 (ATerm n_14, ATerm o_14, ATerm t);
static ATerm t_34 (ATerm d_34, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_9 (ATerm p_54, ATerm t);
static ATerm z_9 (ATerm z_14, ATerm a_15, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm g_37 (ATerm h_35, ATerm t);
static ATerm h_37 (ATerm p_35, ATerm q_35, ATerm r_35, ATerm t);
static ATerm j_37 (ATerm g_36, ATerm i_36, ATerm j_36, ATerm t);
static ATerm a_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm o_100 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm e_42 (ATerm h_41, ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm r_116 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm g_89 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm o_44 (ATerm v_43, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm b_10 (ATerm p_97 (ATerm), ATerm n_27, ATerm l_27, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm f_10 (ATerm s_49, ATerm t_49, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_generate_2_0 (ATerm s_115 (ATerm), ATerm t_115 (ATerm), ATerm t);
static ATerm i_10 (ATerm w_28, ATerm x_28, ATerm t);
ATerm end_scope_1_0 (ATerm m_97 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm l_97 (ATerm), ATerm t);
static ATerm j_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm a_116 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm abox2html_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_10 (ATerm z_25, ATerm a_26, ATerm t);
ATerm foldr_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm k_114 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm need_help_1_0 (ATerm x_81 (ATerm), ATerm t);
static ATerm s_10 (ATerm j_33, ATerm k_33, ATerm l_33, ATerm t);
static ATerm t_10 (ATerm m_33, ATerm n_33, ATerm t);
ATerm lookup_table_0_1 (ATerm d_30, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_33, ATerm s_33, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm l_10 (ATerm o_33, ATerm p_33, ATerm t);
static ATerm m_10 (ATerm t_33, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm p_88 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_88 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm r_10 (ATerm f_62, ATerm g_62, ATerm t);
static ATerm p_10 (ATerm r_28, ATerm s_28, ATerm q_28, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_106 (ATerm), ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm parse_options_1_0 (ATerm j_106 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm c_82 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
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
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 = NULL,z_0 = NULL;
      t = term_b_8;
      y_0 = t;
      t = term_c_8;
      z_0 = t;
      t = term_d_8;
      t = o_10(y_0, z_0, t);
      LocalPopChoice(y_7);
    }
  else
    {
      t = v_2;
      t = term_e_8;
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
      t = term_c_8;
      {
        ATerm g_8 = t;
        int h_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_0 = NULL,v_0 = NULL;
            t = term_b_8;
            i_0 = t;
            t = term_c_8;
            v_0 = t;
            t = term_d_8;
            t = o_10(i_0, v_0, t);
            LocalPopChoice(h_8);
          }
        else
          {
            t = g_8;
            t = term_e_8;
          }
      }
      b_0 = t;
      t = term_k_8;
      e_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, b_0);
      t = h_10(e_0, b_0, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm l_8 = ATgetArgument(t, 0);
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
    ATerm m_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 = NULL;
        t = term_o_8;
        t = STDIN__FILENO_0_0(t);
        i_1 = t;
        if((g_1 != t))
          {
            _fail(t);
          }
        t = i_1;
        LocalPopChoice(n_8);
      }
    else
      {
        t = m_8;
        {
          ATerm p_8 = t;
          int s_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_1 = NULL;
              t = term_o_8;
              t = STDOUT__FILENO_0_0(t);
              l_1 = t;
              if((g_1 != t))
                {
                  _fail(t);
                }
              t = l_1;
              LocalPopChoice(s_8);
            }
          else
            {
              t = p_8;
              {
                ATerm t_8 = t;
                int u_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_1 = NULL;
                    t = term_o_8;
                    t = STDERR__FILENO_0_0(t);
                    p_1 = t;
                    if((g_1 != t))
                      {
                        _fail(t);
                      }
                    t = p_1;
                    LocalPopChoice(u_8);
                  }
                else
                  {
                    t = t_8;
                    t = SSL_close(g_1);
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm e_9 (ATerm i_50, ATerm j_50, ATerm t)
{
  t = SSL_fdcopy(i_50, j_50);
  return(t);
}
ATerm File_as_fd_1_0 (ATerm h_115 (ATerm), ATerm t)
{
  ATerm u_1 = NULL;
  t = xtc_open_fd_0_0(t);
  u_1 = t;
  {
    ATerm v_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_115(t);
        LocalPopChoice(x_8);
        {
          ATerm v_1 = NULL;
          v_1 = t;
          {
            ATerm y_8 = t;
            int a_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = u_1;
                t = xtc_close_fd_0_0(t);
                LocalPopChoice(a_9);
              }
            else
              {
                t = y_8;
              }
          }
          t = v_1;
        }
      }
    else
      {
        t = v_8;
        {
          ATerm b_9 = t;
          int c_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_1;
              t = xtc_close_fd_0_0(t);
              LocalPopChoice(c_9);
            }
          else
            {
              t = b_9;
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
          t = term_o_8;
          t = STDIN__FILENO_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_stdout_0))
            {
              t = term_o_8;
              t = STDOUT__FILENO_0_0(t);
            }
          else
            {
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
              t = term_o_8;
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
  t = term_o_8;
  t = new_0_0(t);
  p_2 = t;
  t = term_d_9;
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_2, term_d_9);
  t = f_10(p_2, q_2, t);
  r_2 = t;
  {
    ATerm f_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_2 = NULL;
        t = (ATerm) ATinsert(ATempty, term_t_9);
        t_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_2, (ATerm) ATinsert(ATempty, term_t_9));
        t = g_10(r_2, t_2, t);
        t = new_file_0_0(t);
        LocalPopChoice(i_9);
      }
    else
      {
        t = f_9;
        t = r_2;
      }
  }
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_c_10;
  return(t);
}
ATerm xtc_new_file_name_0_0 (ATerm t)
{
  ATerm x_2 = NULL,z_2 = NULL;
  t = new_file_0_0(t);
  x_2 = t;
  t = term_o_8;
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_2, term_o_8);
  t = b_10(k_0, x_2, z_2, t);
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
    static ATerm s_0 (ATerm t);
    static ATerm s_0 (ATerm t)
    {
      static ATerm w_0 (ATerm t);
      static ATerm w_0 (ATerm t)
      {
        ATerm j_3 = NULL;
        j_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_3, f_3);
        t = e_9(j_3, f_3, t);
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
static ATerm e_4 (ATerm n_3, ATerm t)
{
  t = n_3;
  {
    ATerm d_10 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_10 = ATgetArgument(t, 0);
            ATerm v_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_10;
      }
  }
  t = term_y_10;
  t = debug_1_0(x_0, t);
  t = (ATerm) ATmakeAppl(sym__2, n_3, term_z_10);
  t = open_file_0_0(t);
  return(t);
}
static ATerm f_4 (ATerm p_3, ATerm s_3, ATerm t_3, ATerm t)
{
  t = SSL_open_file(p_3, s_3);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,d_4 = NULL;
  y_3 = t;
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
      {
        ATerm b_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_4(y_3, t);
            LocalPopChoice(d_11);
          }
        else
          {
            t = b_11;
            t = f_4(z_3, d_4, y_3, t);
          }
      }
    }
  else
    {
      t = e_4(y_3, t);
    }
  return(t);
}
ATerm print_to_0_0 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL;
  g_4 = t;
  t = xtc_new_file_0_0(t);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_4, term_z_10);
  t = open_file_0_0(t);
  t = SSL_print(h_4, g_4);
  t = SSL_close_file(h_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_4);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm k_4 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_k_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm m_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_t_9);
      m_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_4, (ATerm) ATinsert(ATempty, term_t_9));
      t = g_10(k_4, m_4, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm g_9 (ATerm j_54, ATerm k_54, ATerm t)
{
  ATerm n_4 = NULL;
  t = SSL_write_term_to_stream_baf(j_54, k_54);
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_4);
  return(t);
}
static ATerm h_9 (ATerm d_104 (ATerm), ATerm f_573, ATerm t_54, ATerm t)
{
  ATerm o_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_573, term_z_10);
  t = a_10(t);
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_4, t_54);
  t = d_104(t);
  t = fclose_0_0(t);
  t = t_54;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_11 = ATgetArgument(t, 0);
      if(match_cons(f_11, sym_Stream_1))
        {
          f_5 = ATgetArgument(f_11, 0);
        }
      else
        _fail(t);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(f_5, g_5, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm t)
{
  ATerm u_4 = NULL,e_5 = NULL;
  e_5 = t;
  t = xtc_new_file_0_0(t);
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_4, e_5);
  t = h_9(b_1, u_4, e_5, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, u_4);
  t = xtc_transform_file_2_0(n_115, o_115, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL;
  i_5 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm n_5 = NULL,o_5 = NULL;
      t = i_5;
      t = xtc_new_file_0_0(t);
      n_5 = t;
      t = r_0(t);
      o_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_5, (ATerm) ATinsert(ATinsert(ATempty, n_5), term_c_8));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, n_5);
    }
  else
    {
      ATerm s_5 = NULL,t_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_5;
      t = xtc_new_file_0_0(t);
      s_5 = t;
      t = r_0(t);
      t_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_5), term_c_8), j_5), term_h_11));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_5);
    }
  return(t);
}
ATerm month2abbr_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_i_11;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_k_11;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_q_11;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_r_11;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_w_11;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_x_11;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_y_11;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_z_11;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_a_12;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_c_12;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_e_12;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_f_12;
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
      t = term_g_12;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_h_12;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_i_12;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_j_12;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_k_12;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_n_12;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_o_12;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_z_11;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_p_12;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_q_12;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_r_12;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_t_12;
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
  ATerm u_12 = t;
  if((PushChoice() == 0))
    {
      t = geq_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_12;
    }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm w_12 = t;
  if((PushChoice() == 0))
    {
      ATerm m_6 = NULL,n_6 = NULL;
      if(match_cons(t, sym__2))
        {
          m_6 = ATgetArgument(t, 0);
          n_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, m_6, n_6);
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(m_6, n_6);
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            t = SSL_gtr(m_6, n_6);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, m_6, n_6);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_12;
    }
  return(t);
}
ATerm day_of_week2abbr_0_0 (ATerm t)
{
  if(match_cons(t, sym_Saturday_0))
    {
      t = term_z_12;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_a_13;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_b_13;
            }
          else
            {
              if(match_cons(t, sym_Wednesday_0))
                {
                  t = term_e_13;
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
                          t = term_h_13;
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
ATerm day_of_week2text_0_0 (ATerm t)
{
  if(match_cons(t, sym_Saturday_0))
    {
      t = term_j_13;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_k_13;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_n_13;
            }
          else
            {
              if(match_cons(t, sym_Wednesday_0))
                {
                  t = term_p_13;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_q_13;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_s_13;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_t_13;
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm while_not_2_0 (ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm t)
{
  static ATerm o_6 (ATerm t);
  static ATerm o_6 (ATerm t)
  {
    ATerm w_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_87(t);
        LocalPopChoice(x_13);
      }
    else
      {
        t = w_13;
        t = l_87(t);
        t = o_6(t);
      }
    return(t);
  }
  t = o_6(t);
  return(t);
}
ATerm for_3_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm t)
{
  t = n_87(t);
  t = while_not_2_0(o_87, p_87, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  if(match_cons(t, sym__2))
    {
      q_6 = ATgetArgument(t, 0);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_6, r_6, (ATerm) ATempty);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm t_6 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm y_13 = ATgetArgument(t, 0);
      if(((ATgetType(y_13) != AT_INT) || (ATgetInt((ATermInt) y_13) != 0)))
        _fail(t);
      {
        ATerm z_13 = ATgetArgument(t, 1);
      }
      t_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_6;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL,x_6 = NULL,y_6 = NULL,a_7 = NULL;
  if(match_cons(t, sym__3))
    {
      u_6 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
      x_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_6, term_a_14);
  t = geq_0_0(t);
  t = term_a_14;
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_6, term_a_14);
  t = p_9(u_6, a_7, t);
  y_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_6, v_6, (ATerm) ATinsert(CheckATermList(x_6), v_6));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(c_1, d_1, e_1, t);
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm c_7 = NULL;
  t = copy_0_0(t);
  c_7 = t;
  t = SSL_implode_string(c_7);
  return(t);
}
static ATerm j_9 (ATerm c_48, ATerm a_48, ATerm b_48, ATerm t)
{
  ATerm e_7 = NULL;
  t = SSL_strlen(a_48);
  e_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_48, e_7);
  t = p_9(b_48, e_7, t);
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_7 = NULL;
        g_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_7, term_e_14);
        t = geq_0_0(t);
        t = g_7;
        LocalPopChoice(c_14);
        {
          ATerm h_7 = NULL;
          h_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_7, c_48);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = b_14;
        t = term_f_14;
      }
  }
  return(t);
}
static ATerm k_9 (ATerm j_47, ATerm k_47, ATerm l_47, ATerm t)
{
  ATerm i_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, j_47, k_47, l_47);
  t = j_9(j_47, k_47, l_47, t);
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_7, k_47);
  t = f_10(i_7, k_47, t);
  return(t);
}
static ATerm l_9 (ATerm x_26, ATerm y_26, ATerm t)
{
  t = SSL_mod(x_26, y_26);
  return(t);
}
ATerm month2index_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_h_14;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_i_14;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_j_14;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_k_14;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_l_14;
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
                                  t = term_r_14;
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
                                              t = term_a_14;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_e_14;
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
  ATerm c_11 = NULL,e_11 = NULL,g_11 = NULL,j_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  l_11 = t;
  if(match_cons(t, sym__2))
    {
      m_11 = ATgetArgument(t, 0);
      n_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11;
  if(match_string(t, "ss"))
    {
      t = n_11;
      if(match_cons(t, sym_ComponentTime_3))
        {
          ATerm v_14 = ATgetArgument(t, 0);
          u_11 = ATgetArgument(t, 1);
          {
            ATerm w_14 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = u_11;
      if(match_cons(t, sym_DayTime_3))
        {
          ATerm x_14 = ATgetArgument(t, 0);
          ATerm y_14 = ATgetArgument(t, 1);
          g_11 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_11;
    }
  else
    {
      if(match_string(t, "mm"))
        {
          t = n_11;
          if(match_cons(t, sym_ComponentTime_3))
            {
              ATerm b_15 = ATgetArgument(t, 0);
              u_11 = ATgetArgument(t, 1);
              {
                ATerm f_15 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = u_11;
          if(match_cons(t, sym_DayTime_3))
            {
              ATerm g_15 = ATgetArgument(t, 0);
              e_11 = ATgetArgument(t, 1);
              {
                ATerm h_15 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = e_11;
        }
      else
        {
          if(match_string(t, "KK"))
            {
              t = n_11;
              if(match_cons(t, sym_ComponentTime_3))
                {
                  ATerm m_15 = ATgetArgument(t, 0);
                  u_11 = ATgetArgument(t, 1);
                  {
                    ATerm o_15 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = u_11;
              if(match_cons(t, sym_DayTime_3))
                {
                  c_11 = ATgetArgument(t, 0);
                  {
                    ATerm q_15 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm r_15 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              {
                ATerm y_15 = t;
                int z_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_12 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, term_c_16, c_11);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, c_11, term_e_16);
                    t = leq_0_0(t);
                    t = term_c_16;
                    d_12 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_11, term_c_16);
                    t = p_9(c_11, d_12, t);
                    LocalPopChoice(z_15);
                  }
                else
                  {
                    t = y_15;
                    t = (ATerm) ATmakeAppl(sym__2, term_e_14, c_11);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, c_11, term_c_16);
                    t = lt_0_0(t);
                    t = c_11;
                  }
              }
            }
          else
            {
              if(match_string(t, "hh"))
                {
                  t = n_11;
                  if(match_cons(t, sym_ComponentTime_3))
                    {
                      ATerm f_16 = ATgetArgument(t, 0);
                      u_11 = ATgetArgument(t, 1);
                      {
                        ATerm h_16 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = u_11;
                  if(match_cons(t, sym_DayTime_3))
                    {
                      c_11 = ATgetArgument(t, 0);
                      {
                        ATerm j_16 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm p_16 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = c_11;
                  if(match_int(t, 0))
                    {
                      ATerm r_16 = t;
                      int t_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_12 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_c_16, c_11);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, c_11, term_e_16);
                          t = leq_0_0(t);
                          t = term_c_16;
                          l_12 = t;
                          t = (ATerm) ATmakeAppl(sym__2, c_11, term_c_16);
                          t = p_9(c_11, l_12, t);
                          LocalPopChoice(t_16);
                        }
                      else
                        {
                          t = r_16;
                          {
                            ATerm v_16 = t;
                            int w_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_a_14, c_11);
                                t = leq_0_0(t);
                                t = (ATerm) ATmakeAppl(sym__2, c_11, term_c_16);
                                t = leq_0_0(t);
                                t = c_11;
                                LocalPopChoice(w_16);
                              }
                            else
                              {
                                t = v_16;
                                t = term_c_16;
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm z_16 = t;
                      int a_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_12 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_c_16, c_11);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, c_11, term_e_16);
                          t = leq_0_0(t);
                          t = term_c_16;
                          s_12 = t;
                          t = (ATerm) ATmakeAppl(sym__2, c_11, term_c_16);
                          t = p_9(c_11, s_12, t);
                          LocalPopChoice(a_17);
                        }
                      else
                        {
                          t = z_16;
                          t = (ATerm) ATmakeAppl(sym__2, term_a_14, c_11);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, c_11, term_c_16);
                          t = leq_0_0(t);
                          t = c_11;
                        }
                    }
                }
              else
                {
                  if(match_string(t, "kk"))
                    {
                      ATerm v_12 = NULL;
                      t = n_11;
                      if(match_cons(t, sym_ComponentTime_3))
                        {
                          ATerm e_17 = ATgetArgument(t, 0);
                          u_11 = ATgetArgument(t, 1);
                          {
                            ATerm f_17 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = u_11;
                      if(match_cons(t, sym_DayTime_3))
                        {
                          c_11 = ATgetArgument(t, 0);
                          {
                            ATerm g_17 = ATgetArgument(t, 1);
                          }
                          {
                            ATerm h_17 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = term_a_14;
                      v_12 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_11, term_a_14);
                      t = j_10(c_11, v_12, t);
                    }
                  else
                    {
                      if(match_string(t, "HH"))
                        {
                          t = n_11;
                          if(match_cons(t, sym_ComponentTime_3))
                            {
                              ATerm i_17 = ATgetArgument(t, 0);
                              u_11 = ATgetArgument(t, 1);
                              {
                                ATerm k_17 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = u_11;
                          if(match_cons(t, sym_DayTime_3))
                            {
                              c_11 = ATgetArgument(t, 0);
                              {
                                ATerm l_17 = ATgetArgument(t, 1);
                              }
                              {
                                ATerm m_17 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = c_11;
                        }
                      else
                        {
                          if(match_string(t, "DD"))
                            {
                              t = n_11;
                              if(match_cons(t, sym_ComponentTime_3))
                                {
                                  ATerm o_17 = ATgetArgument(t, 0);
                                  ATerm p_17 = ATgetArgument(t, 1);
                                  v_11 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = v_11;
                              if(match_cons(t, sym_Dupl_2))
                                {
                                  ATerm q_17 = ATgetArgument(t, 0);
                                  j_11 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = j_11;
                            }
                          else
                            {
                              if(match_string(t, "D"))
                                {
                                  t = n_11;
                                  if(match_cons(t, sym_ComponentTime_3))
                                    {
                                      ATerm s_17 = ATgetArgument(t, 0);
                                      ATerm t_17 = ATgetArgument(t, 1);
                                      v_11 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = v_11;
                                  if(match_cons(t, sym_Dupl_2))
                                    {
                                      ATerm u_17 = ATgetArgument(t, 0);
                                      j_11 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = j_11;
                                }
                              else
                                {
                                  if(match_string(t, "dd"))
                                    {
                                      t = n_11;
                                      if(match_cons(t, sym_ComponentTime_3))
                                        {
                                          o_11 = ATgetArgument(t, 0);
                                          {
                                            ATerm v_17 = ATgetArgument(t, 1);
                                          }
                                          {
                                            ATerm w_17 = ATgetArgument(t, 2);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      t = o_11;
                                      if(match_cons(t, sym_Date_3))
                                        {
                                          ATerm x_17 = ATgetArgument(t, 0);
                                          ATerm y_17 = ATgetArgument(t, 1);
                                          t_11 = ATgetArgument(t, 2);
                                        }
                                      else
                                        _fail(t);
                                      t = t_11;
                                    }
                                  else
                                    {
                                      if(match_string(t, "d"))
                                        {
                                          t = n_11;
                                          if(match_cons(t, sym_ComponentTime_3))
                                            {
                                              o_11 = ATgetArgument(t, 0);
                                              {
                                                ATerm z_17 = ATgetArgument(t, 1);
                                              }
                                              {
                                                ATerm a_18 = ATgetArgument(t, 2);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          t = o_11;
                                          if(match_cons(t, sym_Date_3))
                                            {
                                              ATerm b_18 = ATgetArgument(t, 0);
                                              ATerm c_18 = ATgetArgument(t, 1);
                                              t_11 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          t = t_11;
                                        }
                                      else
                                        {
                                          if(match_string(t, "MM"))
                                            {
                                              ATerm c_13 = NULL,d_13 = NULL;
                                              t = n_11;
                                              if(match_cons(t, sym_ComponentTime_3))
                                                {
                                                  o_11 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm d_18 = ATgetArgument(t, 1);
                                                  }
                                                  {
                                                    ATerm e_18 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = o_11;
                                              if(match_cons(t, sym_Date_3))
                                                {
                                                  ATerm f_18 = ATgetArgument(t, 0);
                                                  s_11 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm g_18 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = s_11;
                                              t = month2index_0_0(t);
                                              c_13 = t;
                                              t = term_a_14;
                                              d_13 = t;
                                              t = (ATerm) ATmakeAppl(sym__2, c_13, term_a_14);
                                              t = j_10(c_13, d_13, t);
                                            }
                                          else
                                            {
                                              if(match_string(t, "M"))
                                                {
                                                  ATerm l_13 = NULL,m_13 = NULL;
                                                  t = n_11;
                                                  if(match_cons(t, sym_ComponentTime_3))
                                                    {
                                                      o_11 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm h_18 = ATgetArgument(t, 1);
                                                      }
                                                      {
                                                        ATerm i_18 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = o_11;
                                                  if(match_cons(t, sym_Date_3))
                                                    {
                                                      ATerm j_18 = ATgetArgument(t, 0);
                                                      s_11 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm k_18 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = s_11;
                                                  t = month2index_0_0(t);
                                                  l_13 = t;
                                                  t = term_a_14;
                                                  m_13 = t;
                                                  t = (ATerm) ATmakeAppl(sym__2, l_13, term_a_14);
                                                  t = j_10(l_13, m_13, t);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "yy"))
                                                    {
                                                      ATerm o_13 = NULL;
                                                      t = n_11;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          o_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm l_18 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm r_18 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = o_11;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          p_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm s_18 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm t_18 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = term_u_18;
                                                      o_13 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, p_11, term_u_18);
                                                      t = l_9(p_11, o_13, t);
                                                    }
                                                  else
                                                    {
                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("yyyy", 0, ATtrue)))
                                                        _fail(t);
                                                      t = n_11;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          o_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm v_18 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm w_18 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = o_11;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          p_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm z_18 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm e_19 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = p_11;
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
static ATerm m_18 (ATerm l_15, ATerm n_15, ATerm t)
{
  ATerm p_15 = NULL,u_15 = NULL,w_15 = NULL,a_16 = NULL;
  t = n_15;
  t = date_pattern_to_int_0_0(t);
  w_15 = t;
  t = SSL_int_to_string(w_15);
  p_15 = t;
  t = SSL_strlen(l_15);
  u_15 = t;
  t = term_u_19;
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_19, p_15, u_15);
  t = k_9(a_16, p_15, u_15, t);
  return(t);
}
ATerm date_pattern_to_string_0_0 (ATerm t)
{
  ATerm d_16 = NULL,g_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,o_16 = NULL,q_16 = NULL,x_16 = NULL,y_16 = NULL;
  k_16 = t;
  if(match_cons(t, sym__2))
    {
      l_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_16;
  if(match_cons(t, sym_ComponentTime_3))
    {
      o_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
      y_16 = ATgetArgument(t, 2);
      t = y_16;
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Dupl_2))
              {
                g_16 = ATgetArgument(t, 0);
                {
                  ATerm y_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(w_19);
            t = x_16;
            {
              ATerm a_20 = t;
              int c_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      d_16 = ATgetArgument(t, 0);
                      {
                        ATerm e_20 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm g_20 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_20);
                  t = o_16;
                  {
                    ATerm j_20 = t;
                    int k_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm l_20 = ATgetArgument(t, 0);
                            q_16 = ATgetArgument(t, 1);
                            {
                              ATerm m_20 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(k_20);
                        t = l_16;
                        if(match_string(t, "a"))
                          {
                            ATerm o_20 = t;
                            int p_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_18(l_16, k_16, t);
                                LocalPopChoice(p_20);
                              }
                            else
                              {
                                t = o_20;
                                {
                                  ATerm q_20 = t;
                                  int s_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_c_16, d_16);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, d_16, term_e_16);
                                      t = leq_0_0(t);
                                      t = term_t_20;
                                      LocalPopChoice(s_20);
                                    }
                                  else
                                    {
                                      t = q_20;
                                      t = (ATerm) ATmakeAppl(sym__2, term_e_14, d_16);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, d_16, term_c_16);
                                      t = lt_0_0(t);
                                      t = term_u_20;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEEE"))
                              {
                                ATerm v_20 = t;
                                int w_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = m_18(l_16, k_16, t);
                                    LocalPopChoice(w_20);
                                  }
                                else
                                  {
                                    t = v_20;
                                    t = g_16;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm z_20 = t;
                                    int a_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = m_18(l_16, k_16, t);
                                        LocalPopChoice(a_21);
                                      }
                                    else
                                      {
                                        t = z_20;
                                        t = g_16;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    if(match_string(t, "MMMM"))
                                      {
                                        ATerm b_21 = t;
                                        int c_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = m_18(l_16, k_16, t);
                                            LocalPopChoice(c_21);
                                          }
                                        else
                                          {
                                            t = b_21;
                                            t = q_16;
                                            t = month2text_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_string(t, "MMM"))
                                          {
                                            ATerm d_21 = t;
                                            int e_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = m_18(l_16, k_16, t);
                                                LocalPopChoice(e_21);
                                              }
                                            else
                                              {
                                                t = d_21;
                                                t = q_16;
                                                t = month2abbr_0_0(t);
                                              }
                                          }
                                        else
                                          {
                                            t = m_18(l_16, k_16, t);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = j_20;
                        t = l_16;
                        if(match_string(t, "a"))
                          {
                            ATerm f_21 = t;
                            int g_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_18(l_16, k_16, t);
                                LocalPopChoice(g_21);
                              }
                            else
                              {
                                t = f_21;
                                {
                                  ATerm h_21 = t;
                                  int i_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_c_16, d_16);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, d_16, term_e_16);
                                      t = leq_0_0(t);
                                      t = term_t_20;
                                      LocalPopChoice(i_21);
                                    }
                                  else
                                    {
                                      t = h_21;
                                      t = (ATerm) ATmakeAppl(sym__2, term_e_14, d_16);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, d_16, term_c_16);
                                      t = lt_0_0(t);
                                      t = term_u_20;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEEE"))
                              {
                                ATerm j_21 = t;
                                int k_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = m_18(l_16, k_16, t);
                                    LocalPopChoice(k_21);
                                  }
                                else
                                  {
                                    t = j_21;
                                    t = g_16;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm l_21 = t;
                                    int m_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = m_18(l_16, k_16, t);
                                        LocalPopChoice(m_21);
                                      }
                                    else
                                      {
                                        t = l_21;
                                        t = g_16;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = m_18(l_16, k_16, t);
                                  }
                              }
                          }
                      }
                  }
                }
              else
                {
                  t = a_20;
                  t = o_16;
                  {
                    ATerm n_21 = t;
                    int p_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm s_21 = ATgetArgument(t, 0);
                            q_16 = ATgetArgument(t, 1);
                            {
                              ATerm t_21 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(p_21);
                        t = l_16;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm u_21 = t;
                            int v_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_18(l_16, k_16, t);
                                LocalPopChoice(v_21);
                              }
                            else
                              {
                                t = u_21;
                                t = g_16;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm x_21 = t;
                                int n_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = m_18(l_16, k_16, t);
                                    LocalPopChoice(n_22);
                                  }
                                else
                                  {
                                    t = x_21;
                                    t = g_16;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "MMMM"))
                                  {
                                    ATerm o_22 = t;
                                    int p_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = m_18(l_16, k_16, t);
                                        LocalPopChoice(p_22);
                                      }
                                    else
                                      {
                                        t = o_22;
                                        t = q_16;
                                        t = month2text_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    if(match_string(t, "MMM"))
                                      {
                                        ATerm q_22 = t;
                                        int r_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = m_18(l_16, k_16, t);
                                            LocalPopChoice(r_22);
                                          }
                                        else
                                          {
                                            t = q_22;
                                            t = q_16;
                                            t = month2abbr_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        t = m_18(l_16, k_16, t);
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = n_21;
                        t = l_16;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm s_22 = t;
                            int t_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_18(l_16, k_16, t);
                                LocalPopChoice(t_22);
                              }
                            else
                              {
                                t = s_22;
                                t = g_16;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm u_22 = t;
                                int w_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = m_18(l_16, k_16, t);
                                    LocalPopChoice(w_22);
                                  }
                                else
                                  {
                                    t = u_22;
                                    t = g_16;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = m_18(l_16, k_16, t);
                              }
                          }
                      }
                  }
                }
            }
          }
        else
          {
            t = v_19;
            t = x_16;
            {
              ATerm x_22 = t;
              int y_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      d_16 = ATgetArgument(t, 0);
                      {
                        ATerm z_22 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm b_23 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(y_22);
                  t = o_16;
                  {
                    ATerm c_23 = t;
                    int d_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm f_23 = ATgetArgument(t, 0);
                            q_16 = ATgetArgument(t, 1);
                            {
                              ATerm g_23 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(d_23);
                        t = l_16;
                        if(match_string(t, "a"))
                          {
                            ATerm h_23 = t;
                            int i_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_18(l_16, k_16, t);
                                LocalPopChoice(i_23);
                              }
                            else
                              {
                                t = h_23;
                                {
                                  ATerm j_23 = t;
                                  int k_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_c_16, d_16);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, d_16, term_e_16);
                                      t = leq_0_0(t);
                                      t = term_t_20;
                                      LocalPopChoice(k_23);
                                    }
                                  else
                                    {
                                      t = j_23;
                                      t = (ATerm) ATmakeAppl(sym__2, term_e_14, d_16);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, d_16, term_c_16);
                                      t = lt_0_0(t);
                                      t = term_u_20;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "MMMM"))
                              {
                                ATerm l_23 = t;
                                int m_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = m_18(l_16, k_16, t);
                                    LocalPopChoice(m_23);
                                  }
                                else
                                  {
                                    t = l_23;
                                    t = q_16;
                                    t = month2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "MMM"))
                                  {
                                    ATerm n_23 = t;
                                    int o_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = m_18(l_16, k_16, t);
                                        LocalPopChoice(o_23);
                                      }
                                    else
                                      {
                                        t = n_23;
                                        t = q_16;
                                        t = month2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = m_18(l_16, k_16, t);
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = c_23;
                        t = l_16;
                        if(match_string(t, "a"))
                          {
                            ATerm p_23 = t;
                            int r_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_18(l_16, k_16, t);
                                LocalPopChoice(r_23);
                              }
                            else
                              {
                                t = p_23;
                                {
                                  ATerm s_23 = t;
                                  int u_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_c_16, d_16);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, d_16, term_e_16);
                                      t = leq_0_0(t);
                                      t = term_t_20;
                                      LocalPopChoice(u_23);
                                    }
                                  else
                                    {
                                      t = s_23;
                                      t = (ATerm) ATmakeAppl(sym__2, term_e_14, d_16);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, d_16, term_c_16);
                                      t = lt_0_0(t);
                                      t = term_u_20;
                                    }
                                }
                              }
                          }
                        else
                          {
                            t = m_18(l_16, k_16, t);
                          }
                      }
                  }
                }
              else
                {
                  t = x_22;
                  t = o_16;
                  {
                    ATerm x_23 = t;
                    int y_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm z_23 = ATgetArgument(t, 0);
                            q_16 = ATgetArgument(t, 1);
                            {
                              ATerm a_24 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(y_23);
                        t = l_16;
                        if(match_string(t, "MMMM"))
                          {
                            ATerm c_24 = t;
                            int d_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_18(l_16, k_16, t);
                                LocalPopChoice(d_24);
                              }
                            else
                              {
                                t = c_24;
                                t = q_16;
                                t = month2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "MMM"))
                              {
                                ATerm e_24 = t;
                                int f_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = m_18(l_16, k_16, t);
                                    LocalPopChoice(f_24);
                                  }
                                else
                                  {
                                    t = e_24;
                                    t = q_16;
                                    t = month2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = m_18(l_16, k_16, t);
                              }
                          }
                      }
                    else
                      {
                        t = x_23;
                        t = l_16;
                        t = m_18(l_16, k_16, t);
                      }
                  }
                }
            }
          }
      }
    }
  else
    {
      t = l_16;
      t = m_18(l_16, k_16, t);
    }
  return(t);
}
static ATerm m_9 (ATerm a_68, ATerm z_67, ATerm t)
{
  ATerm n_18 = NULL;
  t = a_68;
  {
    static ATerm f_1 (ATerm t);
    static ATerm f_1 (ATerm t)
    {
      ATerm o_18 = NULL;
      o_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_18, z_67);
      {
        ATerm g_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = date_pattern_to_string_0_0(t);
            LocalPopChoice(j_24);
          }
        else
          {
            t = g_24;
            {
              ATerm p_18 = NULL,q_18 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, o_18, z_67);
              q_18 = t;
              t = SSL_explode_term(q_18);
              if(match_cons(t, sym__2))
                {
                  ATerm m_24 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) m_24) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm n_24 = ATgetArgument(t, 1);
                    if(((ATgetType(n_24) == AT_LIST) && !(ATisEmpty(n_24))))
                      {
                        p_18 = ATgetFirst((ATermList) n_24);
                        {
                          ATerm p_24 = (ATerm) ATgetNext((ATermList) n_24);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = p_18;
            }
          }
      }
      return(t);
    }
    t = map_1_0(f_1, t);
  }
  n_18 = t;
  t = SSL_concat_strings(n_18);
  return(t);
}
ATerm index2day_of_week_0_0 (ATerm t)
{
  if(match_int(t, 6))
    {
      t = term_q_24;
    }
  else
    {
      if(match_int(t, 5))
        {
          t = term_r_24;
        }
      else
        {
          if(match_int(t, 4))
            {
              t = term_s_24;
            }
          else
            {
              if(match_int(t, 3))
                {
                  t = term_t_24;
                }
              else
                {
                  if(match_int(t, 2))
                    {
                      t = term_u_24;
                    }
                  else
                    {
                      if(match_int(t, 1))
                        {
                          t = term_v_24;
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                            _fail(t);
                          t = term_w_24;
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
      t = term_x_24;
    }
  else
    {
      if(match_int(t, 10))
        {
          t = term_y_24;
        }
      else
        {
          if(match_int(t, 9))
            {
              t = term_z_24;
            }
          else
            {
              if(match_int(t, 8))
                {
                  t = term_a_25;
                }
              else
                {
                  if(match_int(t, 7))
                    {
                      t = term_b_25;
                    }
                  else
                    {
                      if(match_int(t, 6))
                        {
                          t = term_c_25;
                        }
                      else
                        {
                          if(match_int(t, 5))
                            {
                              t = term_d_25;
                            }
                          else
                            {
                              if(match_int(t, 4))
                                {
                                  t = term_e_25;
                                }
                              else
                                {
                                  if(match_int(t, 3))
                                    {
                                      t = term_f_25;
                                    }
                                  else
                                    {
                                      if(match_int(t, 2))
                                        {
                                          t = term_g_25;
                                        }
                                      else
                                        {
                                          if(match_int(t, 1))
                                            {
                                              t = term_h_25;
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                                                _fail(t);
                                              t = term_i_25;
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
static ATerm n_9 (ATerm t_64, ATerm s_64, ATerm r_64, ATerm q_64, ATerm p_64, ATerm o_64, ATerm u_64, ATerm v_64, ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL;
  t = p_64;
  t = index2month_0_0(t);
  x_18 = t;
  t = u_64;
  t = index2day_of_week_0_0(t);
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym_ComponentTime_3, (ATerm)ATmakeAppl(sym_Date_3, o_64, x_18, q_64), (ATerm)ATmakeAppl(sym_DayTime_3, r_64, s_64, t_64), (ATerm) ATmakeAppl(sym_Dupl_2, y_18, v_64));
  return(t);
}
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
  if(match_cons(t, sym__8))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
      c_19 = ATgetArgument(t, 2);
      d_19 = ATgetArgument(t, 3);
      f_19 = ATgetArgument(t, 4);
      g_19 = ATgetArgument(t, 5);
      h_19 = ATgetArgument(t, 6);
      i_19 = ATgetArgument(t, 7);
    }
  else
    _fail(t);
  t = n_9(a_19, b_19, c_19, d_19, f_19, g_19, h_19, i_19, t);
  return(t);
}
static ATerm o_9 (ATerm l_64, ATerm t)
{
  t = SSL_epoch2localtime(l_64);
  t = prim_tuple_to_ComponentTime_0_0(t);
  return(t);
}
ATerm now_epoch_time_0_0 (ATerm t)
{
  ATerm j_19 = NULL;
  t = SSL_now_epoch_time();
  j_19 = t;
  t = (ATerm) ATmakeAppl(sym_EpochTime_1, j_19);
  return(t);
}
ATerm now_local_time_0_0 (ATerm t)
{
  ATerm k_19 = NULL;
  t = now_epoch_time_0_0(t);
  if(match_cons(t, sym_EpochTime_1))
    {
      k_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_9(k_19, t);
  return(t);
}
ATerm create_time_0_0 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL;
  t = term_o_8;
  t = now_local_time_0_0(t);
  l_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_25), term_w_25), term_x_25), term_w_25), term_v_25), term_l_25), term_u_25), term_l_25), term_n_25), term_l_25), term_m_25), term_l_25), term_k_25);
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_25), term_w_25), term_x_25), term_w_25), term_v_25), term_l_25), term_u_25), term_l_25), term_n_25), term_l_25), term_m_25), term_l_25), term_k_25), l_19);
  t = m_9(m_19, l_19, t);
  return(t);
}
ATerm get_title_0_0 (ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_19 = NULL,o_19 = NULL;
      t = term_b_8;
      n_19 = t;
      t = term_d_26;
      o_19 = t;
      t = term_e_26;
      t = o_10(n_19, o_19, t);
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
        t = term_h_26;
        q_19 = t;
        t = (ATerm) ATinsert(ATempty, term_i_26);
        r_19 = t;
        t = SSL_printnl(q_19, r_19);
        t = term_a_14;
        p_19 = t;
        t = SSL_exit(p_19);
        t = (ATerm) ATinsert(ATempty, term_i_26);
      }
    }
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL;
  t = get_title_0_0(t);
  t_19 = t;
  t = term_o_8;
  t = create_time_0_0(t);
  s_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_27), term_e_27), term_d_27), term_c_27), t_19), term_b_27), term_a_27), term_r_26), term_q_26), term_p_26), term_m_26), term_l_26), s_19), term_k_26), term_j_26);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm x_19 = NULL,z_19 = NULL,b_20 = NULL,d_20 = NULL;
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_20 = NULL,h_20 = NULL,i_20 = NULL;
      t = term_b_8;
      h_20 = t;
      t = term_h_11;
      i_20 = t;
      t = term_i_27;
      t = o_10(h_20, i_20, t);
      f_20 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_20);
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      t = term_k_8;
    }
  d_20 = t;
  t = create_header_0_0(t);
  t = print_to_0_0(t);
  x_19 = t;
  t = d_20;
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            n_20 = ATgetArgument(t, 0);
            {
              ATerm x_1 = NULL,c_0 = NULL;
              t = SSLgetAnnotations(d_20);
              x_1 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_20);
              c_0 = t;
              t = SSLsetAnnotations(c_0, x_1);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_20;
          }
        LocalPopChoice(k_27);
        t = xtc_transform_file_2_0(j_1, pass_verbose_0_0, t);
      }
    else
      {
        t = j_27;
        t = xtc_transform_term_2_0(k_1, pass_verbose_0_0, t);
      }
  }
  z_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_27), term_m_27);
  t = print_to_0_0(t);
  b_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_20), z_19), x_19);
  t = xtc_cat_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_p_27;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_p_27;
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(h_1, t);
  return(t);
}
static ATerm o_10 (ATerm k_30, ATerm l_30, ATerm t)
{
  ATerm r_20 = NULL;
  t = lookup_table_0_1(k_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_10(l_30, r_20, t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_20 = ATgetFirst((ATermList) t);
      y_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_20;
    }
  else
    {
      t = y_20;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm e_10 (ATerm b_17, ATerm m_206, ATerm t)
{
  static ATerm m_1 (ATerm t);
  static ATerm m_1 (ATerm t)
  {
    if((b_17 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = m_206;
  t = fetch_1_0(m_1, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  static ATerm w_21 (ATerm t);
  static ATerm w_21 (ATerm t)
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_89(t);
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        {
          ATerm o_21 = NULL,q_21 = NULL,r_21 = NULL,g_2 = NULL,w_2 = NULL,n_0 = NULL;
          o_21 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_21 = ATgetFirst((ATermList) t);
              r_21 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_21);
          g_2 = t;
          t = r_21;
          t = w_21(t);
          w_2 = t;
          t = (ATerm) ATinsert(CheckATermList(w_2), q_21);
          n_0 = t;
          t = SSLsetAnnotations(n_0, g_2);
        }
      }
    return(t);
  }
  t = w_21(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm c_89 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL;
  static ATerm n_1 (ATerm t);
  static ATerm n_1 (ATerm t)
  {
    ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,j_22 = NULL,k_22 = NULL,a_1 = NULL,t_0 = NULL;
    k_22 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_22 = ATgetFirst((ATermList) t);
        f_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_22);
    d_22 = t;
    t = e_22;
    t = c_89(t);
    g_22 = t;
    t = (ATerm) ATinsert(CheckATermList(f_22), g_22);
    t_0 = t;
    t = SSLsetAnnotations(t_0, d_22);
    j_22 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_22 = ATgetFirst((ATermList) t);
        c_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_22);
    a_22 = t;
    t = c_22;
    if(((y_21 != NULL) && (y_21 != t)))
      _fail(t);
    else
      y_21 = t;
    t = (ATerm) ATinsert(CheckATermList(c_22), b_22);
    a_1 = t;
    t = SSLsetAnnotations(a_1, a_22);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(n_1, t);
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_21, not_null(y_21));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  ATerm a_23 = NULL,e_23 = NULL;
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(o_101, t);
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
      {
        ATerm v_22 = NULL;
        v_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_22, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      a_23 = ATgetArgument(t, 0);
      e_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_23;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_23;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm u_27 = ATgetFirst((ATermList) t);
              ATerm v_27 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = e_23;
          t = list_tokenize_1_0(o_101, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm w_27 = ATgetFirst((ATermList) t);
          ATerm x_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_23;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, a_23);
        }
      else
        {
          ATerm q_23 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm y_27 = ATgetFirst((ATermList) t);
              ATerm z_27 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = e_23;
          t = list_tokenize_1_0(o_101, t);
          q_23 = t;
          t = (ATerm) ATinsert(CheckATermList(q_23), a_23);
        }
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm o_24 = NULL;
  o_24 = t;
  t = SSL_implode_string(o_24);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm t_23 = NULL,v_23 = NULL,w_23 = NULL,b_24 = NULL,h_24 = NULL,i_24 = NULL,k_24 = NULL,q_1 = NULL;
  k_24 = t;
  if(match_cons(t, sym__2))
    {
      b_24 = ATgetArgument(t, 0);
      h_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_24);
  w_23 = t;
  t = SSL_explode_string(h_24);
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_24, i_24);
  q_1 = t;
  t = SSLsetAnnotations(q_1, w_23);
  if(match_cons(t, sym__2))
    {
      t_23 = ATgetArgument(t, 0);
      v_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_23;
  {
    static ATerm o_1 (ATerm t);
    static ATerm o_1 (ATerm t)
    {
      ATerm l_24 = NULL;
      l_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_24, t_23);
      t = e_10(l_24, t_23, t);
      return(t);
    }
    t = list_tokenize_1_0(o_1, t);
  }
  t = map_1_0(r_1, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm j_25 = NULL;
  j_25 = t;
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_3 = NULL;
        t = SSL_filemode(j_25);
        if(match_cons(t, sym__2))
          {
            i_3 = ATgetArgument(t, 0);
            {
              ATerm c_28 = ATgetArgument(t, 1);
              if(((ATgetType(c_28) != AT_INT) || (ATgetInt((ATermInt) c_28) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_3;
        LocalPopChoice(b_28);
      }
    else
      {
        t = a_28;
        {
          ATerm r_3 = NULL,u_3 = NULL;
          t = term_d_28;
          u_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_28, j_25);
          t = f_10(u_3, j_25, t);
          r_3 = t;
          t = SSL_perror(r_3);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm h_10 (ATerm g_50, ATerm f_50, ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL;
  p_25 = t;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_25 = NULL,r_25 = NULL;
        t = (ATerm) ATinsert(ATempty, term_t_9);
        r_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_50, (ATerm) ATinsert(ATempty, term_t_9));
        t = g_10(f_50, r_25, t);
        t = filemode_0_0(t);
        q_25 = t;
        t = SSL_S_ISDIR(q_25);
        t = p_25;
        LocalPopChoice(f_28);
        {
          ATerm s_25 = NULL,t_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_g_28), g_50);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          s_25 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_25), term_h_28), f_50);
          t_25 = t;
          t = SSL_concat_strings(t_25);
        }
      }
    else
      {
        t = e_28;
        t = f_50;
      }
  }
  o_25 = t;
  t = SSL_copy(g_50, o_25);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL;
  n_26 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_4 = NULL;
        t = n_26;
        t = p_0(t);
        i_4 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = i_4;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = i_4;
          }
        t = (ATerm) ATmakeAppl(sym__2, o_26, i_4);
        t = h_10(o_26, i_4, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, o_26);
        LocalPopChoice(n_28);
      }
    else
      {
        t = i_28;
        {
          ATerm o_28 = t;
          int u_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_4 = NULL;
              t = n_26;
              t = p_0(t);
              w_4 = t;
              {
                ATerm v_28 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_4 = NULL;
                    x_4 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = x_4;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = x_4;
                          }
                        else
                          {
                            t = x_4;
                            if((o_26 != t))
                              {
                                _fail(t);
                              }
                            t = x_4;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_28;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, o_26, w_4);
              t = h_10(o_26, w_4, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_26);
              LocalPopChoice(u_28);
            }
          else
            {
              t = o_28;
              t = n_26;
              t = p_0(t);
              if((o_26 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_26);
            }
        }
      }
  }
  return(t);
}
static ATerm p_9 (ATerm f_26, ATerm g_26, ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(f_26, g_26);
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      t = SSL_subtr(f_26, g_26);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
  t = term_b_29;
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_26 = NULL,z_26 = NULL;
        t = term_b_8;
        w_26 = t;
        t = term_b_29;
        z_26 = t;
        t = term_e_29;
        t = o_10(w_26, z_26, t);
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        t = term_a_14;
      }
  }
  t_26 = t;
  t = term_a_14;
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_26, term_a_14);
  t = p_9(t_26, v_26, t);
  u_26 = t;
  t = SSL_int_to_string(u_26);
  s_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_26), term_b_29);
  return(t);
}
static ATerm q_9 (ATerm i_53, ATerm j_53, ATerm t)
{
  t = SSL_execvp(i_53, j_53);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL;
  j_28 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      k_28 = ATgetArgument(t, 0);
      {
        ATerm d_5 = NULL,h_5 = NULL;
        t = SSL_int_to_string(k_28);
        d_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_29), d_5), term_f_29);
        h_5 = t;
        t = SSL_concat_strings(h_5);
      }
    }
  else
    {
      ATerm z_5 = NULL,a_6 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          k_28 = ATgetArgument(t, 0);
          l_28 = ATgetArgument(t, 1);
          m_28 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(l_28);
      z_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_28), term_j_29), z_5), term_i_29), k_28);
      a_6 = t;
      t = SSL_concat_strings(a_6);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm b_89 (ATerm), ATerm t)
{
  ATerm p_28 = NULL;
  static ATerm s_1 (ATerm t);
  static ATerm s_1 (ATerm t)
  {
    t = b_89(t);
    if(((p_28 != NULL) && (p_28 != t)))
      _fail(t);
    else
      p_28 = t;
    return(t);
  }
  t = fetch_1_0(s_1, t);
  t = not_null(p_28);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm t_28 = NULL;
  t_28 = t;
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_1 (ATerm t);
        static ATerm t_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm m_29 = ATgetArgument(t, 0);
              if((t_28 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm n_29 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_35), term_t_35), term_l_35), term_f_35), term_c_35), term_u_34), term_p_34), term_j_34), term_g_34), term_c_34), term_z_33), term_v_33), term_g_33), term_c_33), term_v_32), term_s_32), term_k_32), term_d_32), term_a_32), term_w_31), term_s_31), term_l_31), term_g_31), term_z_30), term_v_30), term_o_30), term_e_30), term_v_29);
        t = fetch_elem_1_0(t_1, t);
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, t_28);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm a_29 = NULL,h_29 = NULL;
  a_29 = t;
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_36 = ATgetArgument(t, 0);
            h_29 = ATgetArgument(t, 1);
            {
              ATerm e_36 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_36);
        {
          ATerm f_36 = t;
          int h_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_6 = NULL,l_6 = NULL,p_6 = NULL;
              t = h_29;
              {
                ATerm n_36 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_36;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              j_6 = t;
              t = term_h_26;
              l_6 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, j_6), term_o_36);
              p_6 = t;
              t = SSL_printnl(l_6, p_6);
              t = (ATerm) ATmakeAppl(sym__2, term_h_26, (ATerm) ATinsert(ATinsert(ATempty, j_6), term_o_36));
              LocalPopChoice(h_36);
            }
          else
            {
              t = f_36;
              t = a_29;
            }
        }
      }
    else
      {
        t = b_36;
        t = a_29;
      }
  }
  t = a_29;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL;
  u_29 = t;
  t = fork_0_0(t);
  t_29 = t;
  {
    ATerm p_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = u_29;
        t = g_103(t);
        LocalPopChoice(q_36);
      }
    else
      {
        t = p_36;
        t = SSL_waitpid(t_29);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_36 = ATgetArgument(t, 0);
            if(((ATgetType(s_36) != AT_INT) || (ATgetInt((ATermInt) s_36) != 0)))
              _fail(t);
            {
              ATerm v_36 = ATgetArgument(t, 1);
            }
            {
              ATerm w_36 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_29;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  ATerm w_29 = NULL,b_30 = NULL,c_30 = NULL,h_30 = NULL;
  w_29 = t;
  t = b_104(t);
  b_30 = t;
  t = term_h_26;
  c_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_29), b_30);
  h_30 = t;
  t = SSL_printnl(c_30, h_30);
  t = w_29;
  return(t);
}
static ATerm s_9 (ATerm q_33, ATerm t)
{
  t = SSL_hashtable_keys(q_33);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  static ATerm w_1 (ATerm t);
  static ATerm w_1 (ATerm t)
  {
    ATerm m_30 = NULL,n_30 = NULL;
    m_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_30), m_30);
    t = o_10(not_null(i_30), m_30, t);
    n_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_30, n_30);
    return(t);
  }
  if(((i_30 != NULL) && (i_30 != t)))
    _fail(t);
  else
    i_30 = t;
  t = lookup_table_0_1(i_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_9(j_30, t);
  t = map_1_0(w_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm o_114 (ATerm), ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
        t = term_b_8;
        s_30 = t;
        t = term_b_29;
        t_30 = t;
        t = term_e_29;
        t = o_10(s_30, t_30, t);
        r_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_30, term_p_14);
        t = geq_0_0(t);
        t = p_30;
        t = o_114(t);
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        t = p_30;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm n_114 (ATerm), ATerm t)
{
  ATerm w_30 = NULL;
  w_30 = t;
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_31 = NULL,b_31 = NULL,e_31 = NULL;
        t = term_b_8;
        b_31 = t;
        t = term_b_29;
        e_31 = t;
        t = term_e_29;
        t = o_10(b_31, e_31, t);
        a_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_31, term_r_14);
        t = geq_0_0(t);
        t = w_30;
        t = n_114(t);
        LocalPopChoice(a_37);
      }
    else
      {
        t = z_36;
        t = w_30;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm p_114 (ATerm), ATerm t)
{
  ATerm j_31 = NULL;
  j_31 = t;
  {
    ATerm c_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
        t = term_b_8;
        o_31 = t;
        t = term_b_29;
        p_31 = t;
        t = term_e_29;
        t = o_10(o_31, p_31, t);
        n_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_31, term_m_14);
        t = geq_0_0(t);
        t = j_31;
        t = p_114(t);
        LocalPopChoice(d_37);
      }
    else
      {
        t = c_37;
        t = j_31;
      }
  }
  return(t);
}
static ATerm u_9 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm m_22, ATerm l_22, ATerm t)
{
  t = e_93(t);
  {
    static ATerm y_1 (ATerm t);
    static ATerm y_1 (ATerm t)
    {
      ATerm r_31 = NULL;
      r_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, r_31);
      t = d_93(t);
      return(t);
    }
    t = fetch_1_0(y_1, t);
  }
  t = l_22;
  return(t);
}
static ATerm v_9 (ATerm a_93 (ATerm), ATerm i_22, ATerm h_22, ATerm t)
{
  static ATerm j_32 (ATerm t);
  static ATerm j_32 (ATerm t)
  {
    ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
    e_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_32 = ATgetFirst((ATermList) t);
            g_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_37 = t;
          int f_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_32;
              {
                static ATerm z_1 (ATerm t);
                static ATerm z_1 (ATerm t)
                {
                  t = h_22;
                  return(t);
                }
                t = u_9(a_93, z_1, f_32, g_32, t);
              }
              t = j_32(t);
              LocalPopChoice(f_37);
            }
          else
            {
              t = e_37;
              {
                ATerm d_7 = NULL,m_7 = NULL,i_2 = NULL;
                t = SSLgetAnnotations(e_32);
                d_7 = t;
                t = g_32;
                t = j_32(t);
                m_7 = t;
                t = (ATerm) ATinsert(CheckATermList(m_7), f_32);
                i_2 = t;
                t = SSLsetAnnotations(i_2, d_7);
              }
            }
        }
      }
    return(t);
  }
  t = i_22;
  t = j_32(t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm z_32 = NULL;
  if(match_cons(t, sym__2))
    {
      z_32 = ATgetArgument(t, 0);
      if((z_32 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_9 (ATerm o_29, ATerm p_29, ATerm q_29, ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL;
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_29, p_29);
  {
    ATerm i_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_37 = ATgetArgument(t, 0);
            ATerm n_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_29, p_29);
        t = o_10(o_29, p_29, t);
        LocalPopChoice(k_37);
      }
    else
      {
        t = i_37;
        t = (ATerm) ATempty;
      }
  }
  p_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_32, q_29);
  t = v_9(a_2, p_32, q_29, t);
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_29, p_29, o_32);
  t = lookup_table_0_1(o_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(p_29, o_32, q_32, t);
  t = n_32;
  return(t);
}
static ATerm x_9 (ATerm x_97 (ATerm), ATerm y_29, ATerm x_29, ATerm t)
{
  static ATerm b_2 (ATerm t);
  static ATerm b_2 (ATerm t)
  {
    ATerm a_33 = NULL,b_33 = NULL;
    if(match_cons(t, sym__2))
      {
        a_33 = ATgetArgument(t, 0);
        b_33 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_29, a_33, b_33);
    t = x_97(t);
    return(t);
  }
  t = x_29;
  t = map_1_0(b_2, t);
  return(t);
}
static ATerm g_10 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_access(n_14, o_14);
  return(t);
}
static ATerm t_34 (ATerm d_34, ATerm t)
{
  t = SSL_fclose(d_34);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL;
  n_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_34 = ATgetArgument(t, 0);
      {
        ATerm o_37 = t;
        int q_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_34);
            LocalPopChoice(q_37);
          }
        else
          {
            t = o_37;
            t = t_34(n_34, t);
          }
      }
    }
  else
    {
      t = t_34(n_34, t);
    }
  return(t);
}
static ATerm y_9 (ATerm p_54, ATerm t)
{
  t = SSL_read_term_from_stream(p_54);
  return(t);
}
static ATerm z_9 (ATerm z_14, ATerm a_15, ATerm t)
{
  ATerm v_34 = NULL;
  t = SSL_fopen(z_14, a_15);
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_34);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_34 = NULL;
  t = SSL_stdin_stream();
  w_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_34);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_34 = NULL;
  t = SSL_stdout_stream();
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_34);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_34 = NULL;
  t = SSL_stderr_stream();
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_34);
  return(t);
}
static ATerm g_37 (ATerm h_35, ATerm t)
{
  ATerm i_35 = NULL;
  t = SSL_explode_term(h_35);
  if(match_cons(t, sym__2))
    {
      ATerm s_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_37 = ATgetArgument(t, 1);
        if(((ATgetType(t_37) == AT_LIST) && !(ATisEmpty(t_37))))
          {
            i_35 = ATgetFirst((ATermList) t_37);
            {
              ATerm u_37 = (ATerm) ATgetNext((ATermList) t_37);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_35;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_35;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_35;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_35;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_37 (ATerm p_35, ATerm q_35, ATerm r_35, ATerm t)
{
  ATerm s_35 = NULL,v_35 = NULL,w_35 = NULL,a_36 = NULL,m_2 = NULL;
  t = SSLgetAnnotations(r_35);
  w_35 = t;
  t = p_35;
  if(match_cons(t, sym_Path_1))
    {
      a_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_36, q_35);
  m_2 = t;
  t = SSLsetAnnotations(m_2, w_35);
  if(match_cons(t, sym__2))
    {
      s_35 = ATgetArgument(t, 0);
      v_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(s_35, v_35, t);
  return(t);
}
static ATerm j_37 (ATerm g_36, ATerm i_36, ATerm j_36, ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,r_36 = NULL,u_10 = NULL;
  t = SSLgetAnnotations(j_36);
  m_36 = t;
  t = SSL_is_string(g_36);
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, i_36);
  u_10 = t;
  t = SSLsetAnnotations(u_10, m_36);
  if(match_cons(t, sym__2))
    {
      k_36 = ATgetArgument(t, 0);
      l_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(k_36, l_36, t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,b_37 = NULL;
  t_36 = t;
  if(match_cons(t, sym__2))
    {
      u_36 = ATgetArgument(t, 0);
      b_37 = ATgetArgument(t, 1);
      {
        ATerm v_37 = t;
        int w_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_37(t_36, t);
            LocalPopChoice(w_37);
          }
        else
          {
            t = v_37;
            {
              ATerm x_37 = t;
              int z_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_37(u_36, b_37, t_36, t);
                  LocalPopChoice(z_37);
                }
              else
                {
                  t = x_37;
                  t = j_37(u_36, b_37, t_36, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_37(t_36, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_37 = NULL,p_37 = NULL,r_37 = NULL,y_37 = NULL;
  y_37 = t;
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_37, term_c_38);
        t = a_10(t);
        LocalPopChoice(b_38);
      }
    else
      {
        t = a_38;
        {
          ATerm z_7 = NULL,a_8 = NULL;
          t = term_o_38;
          a_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_38, y_37);
          t = f_10(a_8, y_37, t);
          z_7 = t;
          t = SSL_perror(z_7);
          _fail(t);
        }
      }
  }
  p_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_9(r_37, t);
  l_37 = t;
  t = p_37;
  t = fclose_0_0(t);
  t = l_37;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_v_38;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_a_39;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm b_39 = t;
  int c_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_38 = NULL,e_38 = NULL;
      d_38 = t;
      t = (ATerm) ATinsert(ATempty, term_d_39);
      e_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_38, (ATerm) ATinsert(ATempty, term_d_39));
      t = g_10(d_38, e_38, t);
      LocalPopChoice(c_39);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = b_39;
      {
        ATerm g_39 = t;
        int h_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_39 = t;
            if((PushChoice() == 0))
              {
                ATerm f_38 = NULL,g_38 = NULL;
                f_38 = t;
                t = (ATerm) ATinsert(ATempty, term_t_9);
                g_38 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_38, (ATerm) ATinsert(ATempty, term_t_9));
                t = g_10(f_38, g_38, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_39;
              }
            t = debug_1_0(c_2, t);
            LocalPopChoice(h_39);
          }
        else
          {
            t = g_39;
            t = debug_1_0(d_2, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_n_39;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_p_39;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm z_38 = NULL,e_39 = NULL,f_39 = NULL;
  z_38 = t;
  t = term_h_26;
  e_39 = t;
  t = (ATerm) ATinsert(ATempty, term_u_39);
  f_39 = t;
  t = SSL_printnl(e_39, f_39);
  t = z_38;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,l_39 = NULL;
  if(match_cons(t, sym__3))
    {
      i_39 = ATgetArgument(t, 0);
      j_39 = ATgetArgument(t, 1);
      l_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_9(i_39, j_39, l_39, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm m_39 = NULL,o_39 = NULL,q_39 = NULL;
  m_39 = t;
  t = term_h_26;
  o_39 = t;
  t = (ATerm) ATinsert(ATempty, term_v_39);
  q_39 = t;
  t = SSL_printnl(o_39, q_39);
  t = m_39;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
  r_39 = t;
  t = term_h_26;
  s_39 = t;
  t = (ATerm) ATinsert(ATempty, term_u_39);
  t_39 = t;
  t = SSL_printnl(s_39, t_39);
  t = r_39;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,w_38 = NULL;
  h_38 = t;
  t = if_verbose5_1_0(e_2, t);
  {
    ATerm w_39 = t;
    if((PushChoice() == 0))
      {
        ATerm x_38 = NULL,y_38 = NULL;
        t = term_x_39;
        x_38 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, h_38);
        y_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_39, (ATerm) ATmakeAppl(sym_Imported_1, h_38));
        t = o_10(x_38, y_38, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_39;
      }
  }
  j_38 = t;
  t = term_x_39;
  r_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_39, term_y_39, (ATerm) ATinsert(ATempty, h_38));
  t = lookup_table_0_1(r_38, t);
  w_38 = t;
  t = term_y_39;
  s_38 = t;
  t = (ATerm) ATinsert(ATempty, h_38);
  t_38 = t;
  t = w_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(s_38, t_38, u_38, t);
  t = j_38;
  t = if_verbose4_1_0(h_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(n_2, t);
  i_38 = t;
  t = term_x_39;
  q_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_39, i_38);
  t = x_9(o_2, q_38, i_38, t);
  t = if_verbose6_1_0(s_2, t);
  t = term_x_39;
  k_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_39, (ATerm)ATmakeAppl(sym_Imported_1, h_38), (ATerm) ATempty);
  t = lookup_table_0_1(k_38, t);
  p_38 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, h_38);
  l_38 = t;
  t = (ATerm) ATempty;
  m_38 = t;
  t = p_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(l_38, m_38, n_38, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_39, (ATerm)ATmakeAppl(sym_Imported_1, h_38), (ATerm) ATempty);
  t = if_verbose4_1_0(u_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm o_100 (ATerm), ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
  h_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_40;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_40 = ATgetFirst((ATermList) t);
          j_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm z_39 = t;
        int a_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_8 = NULL,i_8 = NULL,j_8 = NULL,b_16 = NULL;
            t = SSLgetAnnotations(h_40);
            f_8 = t;
            t = i_40;
            t = o_100(t);
            i_8 = t;
            t = j_40;
            t = filter_1_0(o_100, t);
            j_8 = t;
            t = (ATerm) ATinsert(CheckATermList(j_8), i_8);
            b_16 = t;
            t = SSLsetAnnotations(b_16, f_8);
            LocalPopChoice(a_40);
          }
        else
          {
            t = z_39;
            t = j_40;
            t = filter_1_0(o_100, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm t)
{
  static ATerm m_40 (ATerm t);
  static ATerm m_40 (ATerm t)
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_86(t);
        t = m_40(t);
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
        t = u_86(t);
      }
    return(t);
  }
  t = m_40(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_40 = NULL,p_40 = NULL;
      t = term_b_8;
      o_40 = t;
      t = term_f_40;
      p_40 = t;
      t = term_g_40;
      t = o_10(o_40, p_40, t);
      LocalPopChoice(e_40);
    }
  else
    {
      t = d_40;
      {
        ATerm k_40 = t;
        int l_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_40 = NULL;
            t = term_n_40;
            r_40 = t;
            t = SSL_getenv(r_40);
            LocalPopChoice(l_40);
          }
        else
          {
            t = k_40;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = debug_1_0(a_3, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_q_40;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL;
  t = term_x_39;
  a_41 = t;
  t = term_s_40;
  b_41 = t;
  t = term_t_40;
  t = o_10(a_41, b_41, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm y_40 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_40;
      }
  }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = debug_1_0(g_3, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_z_40;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm u_40 = NULL;
  t = if_verbose5_1_0(y_2, t);
  u_40 = t;
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_40 = NULL,w_40 = NULL;
        t = term_x_39;
        v_40 = t;
        t = term_y_39;
        w_40 = t;
        t = term_e_41;
        t = o_10(v_40, w_40, t);
        LocalPopChoice(d_41);
      }
    else
      {
        t = c_41;
        {
          ATerm x_40 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          x_40 = t;
          t = repeat_2_0(c_3, _id, t);
          t = x_40;
        }
      }
  }
  t = u_40;
  t = if_verbose5_1_0(d_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = debug_1_0(k_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_f_41;
  return(t);
}
static ATerm e_42 (ATerm h_41, ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
  t = term_x_39;
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, h_41);
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_39, (ATerm) ATmakeAppl(sym_Tool_1, h_41));
  t = o_10(k_41, l_41, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_41 = ATgetFirst((ATermList) t);
      if(match_cons(g_41, sym__2))
        {
          ATerm p_41 = ATgetArgument(g_41, 0);
          j_41 = ATgetArgument(g_41, 1);
        }
      else
        _fail(t);
      {
        ATerm i_41 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_41;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_f_41;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_x_39;
  t = table_getlist_0_0(t);
  t = debug_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_q_41;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm s_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
      t = if_verbose5_1_0(h_3, t);
      t = xtc_load_0_0(t);
      o_41 = t;
      if(match_cons(t, sym__2))
        {
          m_41 = ATgetArgument(t, 0);
          n_41 = ATgetArgument(t, 1);
          {
            ATerm w_41 = t;
            int x_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_41 = NULL,u_41 = NULL,v_41 = NULL;
                t = term_x_39;
                u_41 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, m_41);
                v_41 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_39, (ATerm) ATmakeAppl(sym_Tool_1, m_41));
                t = o_10(u_41, v_41, t);
                {
                  static ATerm l_3 (ATerm t);
                  static ATerm l_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((n_41 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((r_41 != NULL) && (r_41 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_41 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(l_3, t);
                }
                t = not_null(r_41);
                LocalPopChoice(x_41);
              }
            else
              {
                t = w_41;
                t = e_42(o_41, t);
              }
          }
        }
      else
        {
          t = e_42(o_41, t);
        }
      t = if_verbose5_1_0(m_3, t);
      LocalPopChoice(t_41);
    }
  else
    {
      t = s_41;
      {
        ATerm d_42 = NULL,q_8 = NULL,r_8 = NULL;
        d_42 = t;
        t = term_h_26;
        q_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_41), d_42), term_y_41);
        r_8 = t;
        t = SSL_printnl(q_8, r_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_41), d_42), term_y_41);
        t = if_verbose5_1_0(q_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm r_116 (ATerm), ATerm t)
{
  ATerm g_42 = NULL,i_42 = NULL;
  i_42 = t;
  t = r_116(t);
  t = xtc_find_0_0(t);
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_42, i_42);
  {
    static ATerm w_3 (ATerm t);
    static ATerm w_3 (ATerm t)
    {
      ATerm l_42 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, g_42, i_42);
      t = q_9(g_42, i_42, t);
      t = term_a_42;
      l_42 = t;
      t = SSL_exit(l_42);
      return(t);
    }
    t = fork_and_wait_1_0(w_3, t);
  }
  t = i_42;
  return(t);
}
ATerm at_end_1_0 (ATerm g_89 (ATerm), ATerm t)
{
  static ATerm o_43 (ATerm t);
  static ATerm o_43 (ATerm t)
  {
    ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
    n_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_43 = ATgetFirst((ATermList) t);
        m_43 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_8 = NULL,z_8 = NULL,i_16 = NULL;
          t = SSLgetAnnotations(n_43);
          w_8 = t;
          t = m_43;
          t = o_43(t);
          z_8 = t;
          t = (ATerm) ATinsert(CheckATermList(z_8), l_43);
          i_16 = t;
          t = SSLsetAnnotations(i_16, w_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_43;
        t = g_89(t);
      }
    return(t);
  }
  t = o_43(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,q_42 = NULL;
  n_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_42;
    }
  else
    {
      static ATerm x_3 (ATerm t);
      static ATerm x_3 (ATerm t)
      {
        t = not_null(q_42);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_42 = ATgetFirst((ATermList) t);
          if(((q_42 != NULL) && (q_42 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_42;
      t = at_end_1_0(x_3, t);
    }
  return(t);
}
static ATerm o_44 (ATerm v_43, ATerm t)
{
  ATerm w_43 = NULL;
  t = SSL_explode_term(v_43);
  if(match_cons(t, sym__2))
    {
      ATerm b_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_42) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_43;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_44 = NULL,d_44 = NULL,h_44 = NULL;
  h_44 = t;
  if(match_cons(t, sym__2))
    {
      b_44 = ATgetArgument(t, 0);
      d_44 = ATgetArgument(t, 1);
      {
        ATerm c_42 = t;
        int f_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_4 (ATerm t);
            static ATerm a_4 (ATerm t)
            {
              t = d_44;
              return(t);
            }
            t = b_44;
            t = at_end_1_0(a_4, t);
            LocalPopChoice(f_42);
          }
        else
          {
            t = c_42;
            t = o_44(h_44, t);
          }
      }
    }
  else
    {
      t = o_44(h_44, t);
    }
  return(t);
}
static ATerm b_10 (ATerm p_97 (ATerm), ATerm n_27, ATerm l_27, ATerm t)
{
  ATerm p_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,w_44 = NULL,x_44 = NULL,a_45 = NULL,b_45 = NULL;
  u_44 = t;
  t = p_97(t);
  p_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_44, n_27, l_27);
  t = p_10(p_44, n_27, l_27, t);
  {
    ATerm h_42 = t;
    int j_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_45 = NULL;
        t = term_k_42;
        c_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_44, term_k_42);
        t = o_10(p_44, c_45, t);
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
        LocalPopChoice(j_42);
      }
    else
      {
        t = h_42;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_44 = ATgetFirst((ATermList) t);
      t_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_44, term_k_42, (ATerm) ATinsert(CheckATermList(t_44), (ATerm) ATinsert(CheckATermList(s_44), n_27)));
  t = lookup_table_0_1(p_44, t);
  b_45 = t;
  t = term_k_42;
  w_44 = t;
  t = (ATerm) ATinsert(CheckATermList(t_44), (ATerm) ATinsert(CheckATermList(s_44), n_27));
  x_44 = t;
  t = b_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(w_44, x_44, a_45, t);
  t = u_44;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm f_45 = NULL;
  ATerm p_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_45 = NULL,r_9 = NULL;
      o_45 = t;
      t = term_s_42;
      r_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_45, term_s_42);
      t = f_10(o_45, r_9, t);
      f_45 = t;
      t = SSL_mkstemp(f_45);
      LocalPopChoice(r_42);
    }
  else
    {
      t = p_42;
      {
        ATerm p_45 = NULL;
        t = term_t_42;
        p_45 = t;
        t = SSL_perror(p_45);
        _fail(t);
      }
    }
  return(t);
}
static ATerm f_10 (ATerm s_49, ATerm t_49, ATerm t)
{
  t = SSL_strcat(s_49, t_49);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_c_10;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL;
  t = P__tmpdir_0_0(t);
  w_45 = t;
  t = term_u_42;
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_45, term_u_42);
  t = f_10(w_45, x_45, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      u_45 = ATgetArgument(t, 0);
      t_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_o_8;
  v_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_45, term_o_8);
  t = b_10(b_4, u_45, v_45, t);
  t = SSL_close(t_45);
  t = u_45;
  return(t);
}
ATerm xtc_generate_2_0 (ATerm s_115 (ATerm), ATerm t_115 (ATerm), ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL;
  t = term_o_8;
  t = xtc_new_file_0_0(t);
  a_46 = t;
  t = t_115(t);
  b_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_46, (ATerm) ATinsert(ATinsert(ATempty, a_46), term_c_8));
  t = conc_0_0(t);
  t = xtc_command_1_0(s_115, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, a_46);
  return(t);
}
static ATerm i_10 (ATerm w_28, ATerm x_28, ATerm t)
{
  ATerm c_46 = NULL,f_46 = NULL;
  f_46 = t;
  {
    ATerm v_42 = t;
    int w_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_28, x_28);
        t = o_10(w_28, x_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_42 = ATgetFirst((ATermList) t);
            c_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(w_42);
        {
          ATerm g_46 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, w_28, x_28, c_46);
          t = lookup_table_0_1(w_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              g_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_10(x_28, c_46, g_46, t);
          t = (ATerm) ATmakeAppl(sym__3, w_28, x_28, c_46);
        }
      }
    else
      {
        t = v_42;
        {
          ATerm k_46 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, w_28, x_28);
          t = lookup_table_0_1(w_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              k_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_10(x_28, k_46, t);
          t = (ATerm) ATmakeAppl(sym__2, w_28, x_28);
        }
      }
  }
  t = f_46;
  return(t);
}
ATerm end_scope_1_0 (ATerm m_97 (ATerm), ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL;
  s_46 = t;
  t = m_97(t);
  r_46 = t;
  {
    ATerm y_42 = t;
    int z_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_46 = NULL;
        t = term_k_42;
        w_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_46, term_k_42);
        t = o_10(r_46, w_46, t);
        {
          ATerm a_43 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_43;
            }
        }
        LocalPopChoice(z_42);
      }
    else
      {
        t = y_42;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_46 = ATgetFirst((ATermList) t);
      n_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_46, term_k_42, n_46);
  t = lookup_table_0_1(r_46, t);
  v_46 = t;
  t = term_k_42;
  t_46 = t;
  t = v_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(t_46, n_46, u_46, t);
  t = o_46;
  {
    static ATerm c_4 (ATerm t);
    static ATerm c_4 (ATerm t)
    {
      ATerm x_46 = NULL;
      x_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_46, x_46);
      t = i_10(r_46, x_46, t);
      return(t);
    }
    t = map_1_0(c_4, t);
  }
  t = s_46;
  return(t);
}
ATerm restore_always_2_0 (ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm t)
{
  ATerm b_43 = t;
  int c_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_86(t);
      t = p_86(t);
      LocalPopChoice(c_43);
    }
  else
    {
      t = b_43;
      t = p_86(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,d_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL;
  a_47 = t;
  t = l_97(t);
  z_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_46, term_k_42);
  {
    ATerm d_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_47 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_43 = ATgetArgument(t, 0);
            ATerm g_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_42;
        r_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_46, term_k_42);
        t = o_10(z_46, r_47, t);
        LocalPopChoice(e_43);
      }
    else
      {
        t = d_43;
        t = (ATerm) ATempty;
      }
  }
  b_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_46, term_k_42, (ATerm) ATinsert(CheckATermList(b_47), (ATerm) ATempty));
  t = lookup_table_0_1(z_46, t);
  h_47 = t;
  t = term_k_42;
  d_47 = t;
  t = (ATerm) ATinsert(CheckATermList(b_47), (ATerm) ATempty);
  f_47 = t;
  t = h_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(d_47, f_47, g_47, t);
  t = a_47;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_c_10;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm k_48 = NULL;
  k_48 = t;
  {
    ATerm h_43 = t;
    int i_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(k_48);
        LocalPopChoice(i_43);
      }
    else
      {
        t = h_43;
        t = k_48;
      }
  }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_c_10;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm a_116 (ATerm), ATerm t)
{
  ATerm w_47 = NULL;
  static ATerm l_4 (ATerm t);
  static ATerm l_4 (ATerm t)
  {
    ATerm x_47 = NULL;
    x_47 = t;
    {
      ATerm j_43 = t;
      int k_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_47 = NULL,z_47 = NULL;
          t = term_c_10;
          y_47 = t;
          t = term_k_42;
          z_47 = t;
          t = term_p_43;
          t = o_10(y_47, z_47, t);
          LocalPopChoice(k_43);
        }
      else
        {
          t = j_43;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((w_47 != NULL) && (w_47 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          w_47 = ATgetFirst((ATermList) t);
        {
          ATerm q_43 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = w_47;
    t = map_1_0(p_4, t);
    t = x_47;
    t = end_scope_1_0(q_4, t);
    return(t);
  }
  t = begin_scope_1_0(j_4, t);
  t = restore_always_2_0(a_116, l_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL;
  n_48 = t;
  t = term_o_8;
  t = whoami_0_0(t);
  o_48 = t;
  t = term_h_26;
  q_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_43), o_48), term_r_43);
  r_48 = t;
  t = SSL_printnl(q_48, r_48);
  t = term_a_14;
  p_48 = t;
  t = SSL_exit(p_48);
  t = n_48;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_49 = NULL,d_49 = NULL,e_49 = NULL;
      t = term_o_8;
      t = o_0(t);
      a_49 = t;
      t = term_t_43;
      d_49 = t;
      t = term_u_43;
      e_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_43, term_u_43, a_49);
      t = p_10(d_49, e_49, a_49, t);
      _fail(t);
    }
  else
    {
      ATerm q_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_48 = ATgetFirst((ATermList) t);
          x_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_48 = ATgetFirst((ATermList) t);
          z_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_48;
      t = l_0(t);
      t = y_48;
      t = m_0(t);
      q_49 = t;
      t = (ATerm) ATinsert(CheckATermList(z_48), q_49);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm u_49 = NULL;
  u_49 = t;
  if(match_string(t, "-k"))
    {
      t = u_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_49;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL;
  v_49 = t;
  t = SSL_string_to_int(v_49);
  w_49 = t;
  t = term_x_43;
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_43, w_49);
  t = r_10(x_49, w_49, t);
  t = v_49;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_y_43;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm z_49 = NULL;
  z_49 = t;
  if(match_string(t, "-S"))
    {
      t = z_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_49;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL;
  t = term_b_29;
  a_50 = t;
  t = term_e_14;
  b_50 = t;
  t = term_z_43;
  t = r_10(a_50, b_50, t);
  t = term_a_44;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_c_44;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL;
  k_50 = t;
  t = SSL_string_to_int(k_50);
  l_50 = t;
  t = term_b_29;
  m_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_29, l_50);
  t = r_10(m_50, l_50, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_50);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL;
  t = term_f_44;
  n_50 = t;
  t = term_o_8;
  o_50 = t;
  t = term_g_44;
  t = r_10(n_50, o_50, t);
  t = term_i_44;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_j_44;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_4, y_4, z_4, t);
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
            t = ArgOption_3_0(a_5, b_5, c_5, t);
            LocalPopChoice(n_44);
          }
        else
          {
            t = m_44;
            t = Option_3_0(k_5, l_5, m_5, t);
          }
      }
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm r_50 = NULL;
  r_50 = t;
  if(match_string(t, "-o"))
    {
      t = r_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_50;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL;
  s_50 = t;
  t = term_c_8;
  t_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_8, s_50);
  t = r_10(t_50, s_50, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_50);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_q_44;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, q_5, r_5, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm x_50 = NULL;
  x_50 = t;
  if(match_string(t, "-i"))
    {
      t = x_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_50;
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL;
  y_50 = t;
  t = term_h_11;
  z_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_11, y_50);
  t = r_10(z_50, y_50, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_50);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_r_44;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_5, v_5, w_5, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,e_51 = NULL;
  b_51 = t;
  t = term_v_44;
  c_51 = t;
  t = term_y_44;
  e_51 = t;
  t = term_z_44;
  t = r_10(c_51, e_51, t);
  t = b_51;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_d_45;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm f_51 = NULL;
  f_51 = t;
  if(match_string(t, "-t"))
    {
      t = f_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--title", 0, ATtrue)))
        _fail(t);
      t = f_51;
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL;
  g_51 = t;
  t = term_d_26;
  h_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_26, g_51);
  t = r_10(h_51, g_51, t);
  t = g_51;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_e_45;
  return(t);
}
ATerm abox2html_options_0_0 (ATerm t)
{
  ATerm g_45 = t;
  int h_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
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
                  t = verbose_option_0_0(t);
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
                        t = keep_option_0_0(t);
                        LocalPopChoice(n_45);
                      }
                    else
                      {
                        t = m_45;
                        {
                          ATerm q_45 = t;
                          int r_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(x_5, y_5, b_6, t);
                              LocalPopChoice(r_45);
                            }
                          else
                            {
                              t = q_45;
                              t = ArgOption_3_0(c_6, d_6, e_6, t);
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
  ATerm i_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_8;
  t = whoami_0_0(t);
  i_51 = t;
  t = term_h_26;
  m_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_45), i_51);
  n_51 = t;
  t = SSL_printnl(m_51, n_51);
  t = term_a_14;
  l_51 = t;
  t = SSL_exit(l_51);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL;
  t = term_b_8;
  o_51 = t;
  t = term_y_45;
  p_51 = t;
  t = term_z_45;
  t = o_10(o_51, p_51, t);
  return(t);
}
static ATerm j_10 (ATerm z_25, ATerm a_26, ATerm t)
{
  ATerm d_46 = t;
  int e_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_25, a_26);
      LocalPopChoice(e_46);
    }
  else
    {
      t = d_46;
      t = SSL_addr(z_25, a_26);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL;
  r_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_51;
      t = d_96(t);
    }
  else
    {
      ATerm a_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_51 = ATgetFirst((ATermList) t);
          t_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_51;
      t = foldr_2_0(d_96, e_96, t);
      a_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_51, a_52);
      t = e_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_e_14;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL;
  if(match_cons(t, sym__2))
    {
      w_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_10(w_10, x_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_52 = NULL,n_10 = NULL,q_10 = NULL;
  t = times_0_0(t);
  q_10 = t;
  t = SSL_explode_term(q_10);
  if(match_cons(t, sym__2))
    {
      ATerm h_46 = ATgetArgument(t, 0);
      n_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10;
  t = foldr_2_0(f_6, g_6, t);
  f_52 = t;
  t = SSL_TicksToSeconds(f_52);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
  v_52 = t;
  if(match_cons(t, sym__2))
    {
      w_52 = ATgetArgument(t, 0);
      x_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_46 = t;
    int j_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_52;
        if((w_52 != t))
          {
            _fail(t);
          }
        t = v_52;
        LocalPopChoice(j_46);
      }
    else
      {
        t = i_46;
        t = (ATerm) ATmakeAppl(sym__2, w_52, x_52);
        {
          ATerm l_46 = t;
          int m_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_52, x_52);
              LocalPopChoice(m_46);
            }
          else
            {
              t = l_46;
              t = SSL_gtr(w_52, x_52);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_52, x_52);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_114 (ATerm), ATerm t)
{
  ATerm c_53 = NULL;
  c_53 = t;
  {
    ATerm p_46 = t;
    int q_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
        t = term_b_8;
        f_53 = t;
        t = term_b_29;
        g_53 = t;
        t = term_e_29;
        t = o_10(f_53, g_53, t);
        e_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_53, term_a_14);
        t = geq_0_0(t);
        t = c_53;
        t = k_114(t);
        LocalPopChoice(q_46);
      }
    else
      {
        t = p_46;
        t = c_53;
      }
  }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm t_53 = NULL,w_53 = NULL,a_54 = NULL,d_54 = NULL;
  t = run_time_0_0(t);
  t_53 = t;
  t = term_o_8;
  t = whoami_0_0(t);
  w_53 = t;
  t = term_h_26;
  a_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_46), t_53), term_i_29), w_53);
  d_54 = t;
  t = SSL_printnl(a_54, d_54);
  t = (ATerm) ATmakeAppl(sym__2, term_h_26, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_46), t_53), term_i_29), w_53));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_14;
  f_54 = t;
  t = SSL_exit(f_54);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL;
  a_55 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = a_55;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          z_54 = ATgetArgument(t, 0);
          {
            ATerm b_12 = NULL,n_16 = NULL;
            t = SSLgetAnnotations(a_55);
            b_12 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, z_54);
            n_16 = t;
            t = SSLsetAnnotations(n_16, b_12);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = a_55;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_81 (ATerm), ATerm t)
{
  ATerm c_47 = t;
  int e_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_54 = NULL,l_54 = NULL;
      t = term_b_8;
      i_54 = t;
      t = term_i_47;
      l_54 = t;
      t = term_m_47;
      t = o_10(i_54, l_54, t);
      LocalPopChoice(e_47);
    }
  else
    {
      t = c_47;
      t = fetch_1_0(i_6, t);
    }
  t = x_81(t);
  return(t);
}
static ATerm s_10 (ATerm j_33, ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm e_55 = NULL;
  t = SSL_hashtable_put(l_33, j_33, k_33);
  e_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_55);
  return(t);
}
static ATerm t_10 (ATerm m_33, ATerm n_33, ATerm t)
{
  t = SSL_hashtable_get(n_33, m_33);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_30, ATerm t)
{
  ATerm w_55 = NULL;
  t = table_hashtable_0_0(t);
  w_55 = t;
  {
    ATerm n_47 = t;
    int o_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_12 = NULL;
        t = w_55;
        if(match_cons(t, sym_Hashtable_1))
          {
            m_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_10(d_30, m_12, t);
        LocalPopChoice(o_47);
      }
    else
      {
        t = n_47;
        {
          ATerm g_13 = NULL;
          t = d_30;
          t = table_create_0_0(t);
          t = w_55;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_10(d_30, g_13, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_33, ATerm s_33, ATerm t)
{
  ATerm z_55 = NULL;
  t = SSL_hashtable_create(r_33, s_33);
  z_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_55);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL,e_56 = NULL,g_56 = NULL;
  a_56 = t;
  t = term_p_47;
  e_56 = t;
  t = term_q_47;
  g_56 = t;
  t = a_56;
  t = new_hashtable_0_2(e_56, g_56, t);
  b_56 = t;
  t = a_56;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(a_56, b_56, c_56, t);
  t = a_56;
  return(t);
}
static ATerm l_10 (ATerm o_33, ATerm p_33, ATerm t)
{
  ATerm h_56 = NULL;
  t = SSL_hashtable_remove(p_33, o_33);
  h_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_56);
  return(t);
}
static ATerm m_10 (ATerm t_33, ATerm t)
{
  ATerm i_56 = NULL;
  t = SSL_hashtable_destroy(t_33);
  i_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_56);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm j_56 = NULL;
  t = SSL_table_hashtable();
  j_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_56);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_56 = NULL,m_56 = NULL,n_56 = NULL,q_56 = NULL;
  k_56 = t;
  t = table_hashtable_0_0(t);
  m_56 = t;
  t = lookup_table_0_1(k_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_10(q_56, t);
  t = m_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_10(k_56, n_56, t);
  t = k_56;
  return(t);
}
ATerm map_1_0 (ATerm p_88 (ATerm), ATerm t)
{
  static ATerm h_57 (ATerm t);
  static ATerm h_57 (ATerm t)
  {
    ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL;
    e_57 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_57;
      }
    else
      {
        ATerm r_13 = NULL,u_13 = NULL,v_13 = NULL,s_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_57 = ATgetFirst((ATermList) t);
            g_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_57);
        r_13 = t;
        t = f_57;
        t = p_88(t);
        u_13 = t;
        t = g_57;
        t = h_57(t);
        v_13 = t;
        t = (ATerm) ATinsert(CheckATermList(v_13), u_13);
        s_16 = t;
        t = SSLsetAnnotations(s_16, r_13);
      }
    return(t);
  }
  t = h_57(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_57 = NULL,l_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_57 = ATgetFirst((ATermList) t);
      l_57 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_57 = NULL,q_57 = NULL;
        static ATerm k_6 (ATerm t);
        static ATerm k_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_57)), not_null(q_57));
          return(t);
        }
        t = l_57;
        t = j_0(t);
        if(((p_57 != NULL) && (p_57 != t)))
          _fail(t);
        else
          p_57 = t;
        t = k_57;
        t = h_0(t);
        if(((q_57 != NULL) && (q_57 != t)))
          _fail(t);
        else
          q_57 = t;
        t = l_57;
        t = reverse_acc_2_0(h_0, k_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_8;
      t = j_0(t);
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL,u_16 = NULL;
  y_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_57);
  w_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_57);
  u_16 = t;
  t = SSLsetAnnotations(u_16, w_57);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm a_58 = NULL;
  a_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_58), term_s_47);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_57 = NULL,t_57 = NULL;
  ATerm t_47 = t;
  int u_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_57 = NULL,v_57 = NULL;
      t = term_b_8;
      u_57 = t;
      t = term_y_45;
      v_57 = t;
      t = term_z_45;
      t = o_10(u_57, v_57, t);
      LocalPopChoice(u_47);
    }
  else
    {
      t = t_47;
      t = fetch_1_0(s_6, t);
    }
  t = term_v_47;
  t = echo_0_0(t);
  t = term_t_43;
  s_57 = t;
  t = term_u_43;
  t_57 = t;
  t = term_d_48;
  t = o_10(s_57, t_57, t);
  t = reverse_acc_2_0(_id, w_6, t);
  t = map_1_0(z_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm z_88 (ATerm), ATerm t)
{
  static ATerm x_58 (ATerm t);
  static ATerm x_58 (ATerm t)
  {
    ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
    u_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_58 = ATgetFirst((ATermList) t);
        w_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_48 = t;
      int f_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_14 = NULL,g_14 = NULL,c_17 = NULL;
          t = SSLgetAnnotations(u_58);
          d_14 = t;
          t = v_58;
          t = z_88(t);
          g_14 = t;
          t = (ATerm) ATinsert(CheckATermList(w_58), g_14);
          c_17 = t;
          t = SSLsetAnnotations(c_17, d_14);
          LocalPopChoice(f_48);
        }
      else
        {
          t = e_48;
          {
            ATerm q_14 = NULL,t_14 = NULL,d_17 = NULL;
            t = SSLgetAnnotations(u_58);
            q_14 = t;
            t = w_58;
            t = x_58(t);
            t_14 = t;
            t = (ATerm) ATinsert(CheckATermList(t_14), v_58);
            d_17 = t;
            t = SSLsetAnnotations(d_17, q_14);
          }
        }
    }
    return(t);
  }
  t = x_58(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL;
  b_59 = t;
  {
    ATerm g_48 = t;
    int h_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_59;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_48 = ATgetFirst((ATermList) t);
                ATerm j_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_59;
          }
        LocalPopChoice(h_48);
      }
    else
      {
        t = g_48;
        t = (ATerm) ATinsert(ATempty, b_59);
      }
  }
  c_59 = t;
  t = term_e_8;
  d_59 = t;
  t = SSL_printnl(d_59, c_59);
  t = b_59;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL;
  t = term_b_8;
  h_59 = t;
  t = term_y_45;
  i_59 = t;
  t = term_z_45;
  t = o_10(h_59, i_59, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL;
  t = term_l_48;
  j_59 = t;
  t = term_o_8;
  k_59 = t;
  t = term_m_48;
  t = r_10(j_59, k_59, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_s_48;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL;
  t = term_l_48;
  n_59 = t;
  t = term_o_8;
  o_59 = t;
  t = term_m_48;
  t = r_10(n_59, o_59, t);
  t = term_t_48;
  l_59 = t;
  t = term_o_8;
  m_59 = t;
  t = term_u_48;
  t = r_10(l_59, m_59, t);
  t = term_v_48;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_b_49;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_49 = t;
  int f_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_7, f_7, j_7, t);
      LocalPopChoice(f_49);
    }
  else
    {
      t = c_49;
      t = Option_3_0(k_7, l_7, n_7, t);
    }
  return(t);
}
static ATerm r_10 (ATerm f_62, ATerm g_62, ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL;
  t = term_b_8;
  p_59 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_8, f_62, g_62);
  t = lookup_table_0_1(p_59, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(f_62, g_62, q_59, t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_8, f_62, g_62);
  return(t);
}
static ATerm p_10 (ATerm r_28, ATerm s_28, ATerm q_28, ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL;
  t_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_28, s_28);
  {
    ATerm g_49 = t;
    int h_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_49 = ATgetArgument(t, 0);
            ATerm j_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_28, s_28);
        t = o_10(r_28, s_28, t);
        LocalPopChoice(h_49);
      }
    else
      {
        t = g_49;
        t = (ATerm) ATempty;
      }
  }
  u_59 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_28, s_28, (ATerm) ATinsert(CheckATermList(u_59), q_28));
  t = lookup_table_0_1(r_28, t);
  x_59 = t;
  t = (ATerm) ATinsert(CheckATermList(u_59), q_28);
  v_59 = t;
  t = x_59;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(s_28, v_59, w_59, t);
  t = t_59;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL;
      t = term_o_8;
      t = g_0(t);
      f_60 = t;
      t = term_t_43;
      g_60 = t;
      t = term_u_43;
      h_60 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_43, term_u_43, f_60);
      t = p_10(g_60, h_60, f_60, t);
      _fail(t);
    }
  else
    {
      ATerm k_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_60 = ATgetFirst((ATermList) t);
          e_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_60;
      t = d_0(t);
      t = term_o_8;
      t = f_0(t);
      k_60 = t;
      t = (ATerm) ATinsert(CheckATermList(e_60), k_60);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,j_17 = NULL;
  q_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_60 = ATgetFirst((ATermList) t);
      n_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_60);
  l_60 = t;
  t = m_60;
  t = a_75(t);
  o_60 = t;
  t = n_60;
  t = b_75(t);
  p_60 = t;
  t = (ATerm) ATinsert(CheckATermList(p_60), o_60);
  j_17 = t;
  t = SSLsetAnnotations(j_17, l_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_106 (ATerm), ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,a_61 = NULL,b_61 = NULL,n_17 = NULL;
  v_60 = t;
  {
    ATerm k_49 = t;
    int l_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_49;
        t = k_106(t);
        LocalPopChoice(l_49);
      }
    else
      {
        t = k_49;
      }
  }
  t = v_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_60 = ATgetFirst((ATermList) t);
      y_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_60);
  w_60 = t;
  t = term_y_45;
  b_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_45, x_60);
  t = r_10(b_61, x_60, t);
  t = y_60;
  {
    static ATerm l_61 (ATerm t);
    static ATerm l_61 (ATerm t)
    {
      ATerm n_49 = t;
      int o_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_49 = t;
          int r_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_61 = NULL;
              e_61 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_61;
              LocalPopChoice(r_49);
            }
          else
            {
              t = p_49;
              t = k_106(t);
              t = Cons_2_0(_id, l_61, t);
            }
          LocalPopChoice(o_49);
        }
      else
        {
          t = n_49;
          {
            ATerm h_61 = NULL,i_61 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_61 = ATgetFirst((ATermList) t);
                i_61 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_61), (ATerm) ATmakeAppl(sym_Undefined_1, h_61));
          }
        }
      return(t);
    }
    t = l_61(t);
  }
  a_61 = t;
  t = (ATerm) ATinsert(CheckATermList(a_61), (ATerm) ATmakeAppl(sym_Program_1, x_60));
  n_17 = t;
  t = SSLsetAnnotations(n_17, w_60);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm y_61 = NULL;
  y_61 = t;
  if(match_string(t, "--help"))
    {
      t = y_61;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_61;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_61;
        }
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL;
  t = term_i_47;
  z_61 = t;
  t = term_o_8;
  a_62 = t;
  t = term_y_49;
  t = r_10(z_61, a_62, t);
  t = term_c_50;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_d_50;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_106 (ATerm), ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL;
  s_61 = t;
  t = term_t_43;
  t_61 = t;
  t = term_e_50;
  t = lookup_table_0_1(t_61, t);
  x_61 = t;
  t = term_u_43;
  u_61 = t;
  t = (ATerm) ATempty;
  v_61 = t;
  t = x_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(u_61, v_61, w_61, t);
  t = s_61;
  {
    static ATerm o_7 (ATerm t);
    static ATerm o_7 (ATerm t)
    {
      ATerm h_50 = t;
      int p_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_106(t);
          LocalPopChoice(p_50);
        }
      else
        {
          t = h_50;
          {
            ATerm q_50 = t;
            int u_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_7, q_7, r_7, t);
                LocalPopChoice(u_50);
              }
            else
              {
                t = q_50;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_7, t);
  }
  {
    ATerm v_50 = t;
    int w_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_62 = NULL;
        n_62 = t;
        {
          ATerm a_51 = t;
          int d_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_15 = NULL;
              t = n_62;
              {
                ATerm j_51 = t;
                int k_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_15 = NULL,e_15 = NULL;
                    t = term_b_8;
                    d_15 = t;
                    t = term_i_47;
                    e_15 = t;
                    t = term_m_47;
                    t = o_10(d_15, e_15, t);
                    LocalPopChoice(k_51);
                  }
                else
                  {
                    t = j_51;
                    t = fetch_1_0(s_7, t);
                  }
              }
              t = n_62;
              t = default_system_usage_0_0(t);
              t = term_e_14;
              c_15 = t;
              t = SSL_exit(c_15);
              LocalPopChoice(d_51);
            }
          else
            {
              t = a_51;
              {
                ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
                t = term_b_8;
                j_15 = t;
                t = term_l_48;
                k_15 = t;
                t = term_q_51;
                t = o_10(j_15, k_15, t);
                t = n_62;
                t = default_system_about_0_0(t);
                t = term_e_14;
                i_15 = t;
                t = SSL_exit(i_15);
              }
            }
        }
        LocalPopChoice(w_50);
      }
    else
      {
        t = v_50;
        {
          ATerm u_51 = t;
          int v_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL;
              static ATerm t_7 (ATerm t);
              static ATerm t_7 (ATerm t)
              {
                ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,r_17 = NULL;
                t_62 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_62 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_62);
                r_62 = t;
                t = s_62;
                if(((q_61 != NULL) && (q_61 != t)))
                  _fail(t);
                else
                  q_61 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_62);
                r_17 = t;
                t = SSLsetAnnotations(r_17, r_62);
                return(t);
              }
              t = fetch_1_0(t_7, t);
              t = term_h_26;
              p_62 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_61)), term_w_51);
              q_62 = t;
              t = SSL_printnl(p_62, q_62);
              t = (ATerm) ATmakeAppl(sym__2, term_h_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_61)), term_w_51));
              t = default_system_usage_0_0(t);
              t = term_a_14;
              o_62 = t;
              t = SSL_exit(o_62);
              LocalPopChoice(v_51);
            }
          else
            {
              t = u_51;
            }
        }
      }
  }
  r_61 = t;
  t = term_t_43;
  t = table_destroy_0_0(t);
  t = r_61;
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm c_82 (ATerm), ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL;
  t = parse_options_1_0(z_81, t);
  y_62 = t;
  t = term_x_51;
  t = table_create_0_0(t);
  t = term_x_51;
  z_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_51, term_y_51, y_62);
  t = lookup_table_0_1(z_62, t);
  c_63 = t;
  t = term_y_51;
  a_63 = t;
  t = c_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(a_63, y_62, b_63, t);
  t = y_62;
  t = b_82(t);
  {
    ATerm z_51 = t;
    int b_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_82, t);
        LocalPopChoice(b_52);
      }
    else
      {
        t = z_51;
        {
          ATerm c_52 = t;
          int d_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_82(t);
              t = report_success_0_0(t);
              LocalPopChoice(d_52);
            }
          else
            {
              t = c_52;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm e_52 = t;
  int g_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_63 = NULL,s_15 = NULL,t_15 = NULL;
      m_63 = t;
      t = term_b_8;
      s_15 = t;
      t = term_v_44;
      t_15 = t;
      t = term_h_52;
      t = o_10(s_15, t_15, t);
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("gen-css", 0, ATtrue)))
        _fail(t);
      t = m_63;
      t = xtc_temp_files_1_0(v_7, t);
      LocalPopChoice(g_52);
    }
  else
    {
      t = e_52;
      t = abox2html_0_0(t);
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = xtc_generate_2_0(w_7, pass_verbose_0_0, t);
  t = copy_to_1_0(x_7, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_i_52;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm j_52 = t;
  int k_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_15 = NULL,x_15 = NULL;
      t = term_b_8;
      v_15 = t;
      t = term_c_8;
      x_15 = t;
      t = term_d_8;
      t = o_10(v_15, x_15, t);
      LocalPopChoice(k_52);
    }
  else
    {
      t = j_52;
      t = term_e_8;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2html_options_0_0, default_usage_0_0, _id, u_7, t);
  return(t);
}
