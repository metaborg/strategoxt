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
ATerm term_b_51;
ATerm term_a_51;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_m_50;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_n_49;
ATerm term_m_49;
ATerm term_h_49;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_w_47;
ATerm term_u_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_m_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_f_47;
ATerm term_t_46;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_r_45;
ATerm term_n_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_w_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_p_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_j_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_b_44;
ATerm term_y_43;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_q_42;
ATerm term_h_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_y_41;
ATerm term_r_41;
ATerm term_n_41;
ATerm term_h_41;
ATerm term_t_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_b_40;
ATerm term_y_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_a_39;
ATerm term_s_38;
ATerm term_o_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_q_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_y_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_r_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_t_34;
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
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_d_32;
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
ATerm term_s_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_y_28;
ATerm term_x_28;
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
ATerm term_w_26;
ATerm term_s_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_o_25;
ATerm term_i_25;
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
ATerm term_a_16;
ATerm term_z_15;
ATerm term_w_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_s_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
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
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Friday", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Thursday", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Wednesday", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuesday", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Monday", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Sunday", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(23);
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
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("mm", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ss", 0, ATtrue));
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
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-->\n", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<!doctype html public \"-//W3C//DTD WWW HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/loose.dtd\"> \n", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<html>\n", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  <head>\n", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("    <title>", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("</title>\n", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("    <link rel=\"stylesheet\" type=\"text/css\" href=\"boxstyle.css\">\n", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  </head>\n", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  <body>\n", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_w_10);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  </body>\n", 0, ATtrue));
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
  term_o_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_28, term_s_13, term_n_28);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_28, term_w_14, term_s_28);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_28, term_r_14, term_y_28);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_29, term_l_14, term_k_29);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_29, term_d_14, term_n_29);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_29, term_z_29, term_a_30);
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
  term_p_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_30, term_k_14, term_n_30);
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
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_31, term_j_14, term_d_31);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_32, term_q_14, term_l_32);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_32, term_w_32, term_x_32);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_33, term_b_14, term_d_33);
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
  term_y_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_33, term_a_16, term_x_33);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_33, term_c_14, term_a_34);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_34, term_z_15, term_d_34);
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
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_34, term_t_34, term_v_34);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_34, term_y_34, term_z_34);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_35, term_p_14, term_l_35);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_35, term_o_35, term_p_35);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_35, term_u_35, term_v_35);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_35, term_d_36, term_e_36);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_y_39);
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(sym__2, term_k_39, term_r_40);
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(sym__2, term_k_39, term_l_39);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym__2, term_k_10, term_q_42);
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym__2, term_n_27, term_z_13);
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_13);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(sym__2, term_p_44, term_j_8);
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym__2, term_j_45, term_k_45);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Only generate cascading style sheet", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-t title    Title of HTML document", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_r_46);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_i_47);
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym__2, term_d_44, term_f_44);
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(sym__2, term_n_48, term_j_8);
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym__2, term_q_48, term_j_8);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(sym__2, term_i_47, term_j_8);
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(sym__3, term_d_44, term_f_44, (ATerm) ATempty);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_n_48);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_j_45);
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css-boxstyle", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_close_fd_0_0 (ATerm t);
static ATerm u_8 (ATerm h_37, ATerm i_37, ATerm t);
ATerm File_as_fd_1_0 (ATerm z_99 (ATerm), ATerm t);
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
static ATerm w_8 (ATerm e_41, ATerm f_41, ATerm t);
static ATerm x_8 (ATerm n_87 (ATerm), ATerm t_470, ATerm o_41, ATerm t);
static ATerm b_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm f_100 (ATerm), ATerm g_100 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm month2abbr_0_0 (ATerm t);
ATerm month2text_0_0 (ATerm t);
ATerm lt_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm day_of_week2abbr_0_0 (ATerm t);
ATerm day_of_week2text_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm t);
ATerm for_3_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
static ATerm z_8 (ATerm f_35, ATerm d_35, ATerm e_35, ATerm t);
static ATerm a_9 (ATerm m_34, ATerm n_34, ATerm o_34, ATerm t);
static ATerm b_9 (ATerm d_26, ATerm e_26, ATerm t);
ATerm month2index_0_0 (ATerm t);
ATerm date_pattern_to_int_0_0 (ATerm t);
static ATerm p_17 (ATerm k_15, ATerm l_15, ATerm t);
ATerm date_pattern_to_string_0_0 (ATerm t);
static ATerm c_9 (ATerm q_54, ATerm p_54, ATerm t);
ATerm index2day_of_week_0_0 (ATerm t);
ATerm index2month_0_0 (ATerm t);
static ATerm d_9 (ATerm o_51, ATerm n_51, ATerm m_51, ATerm l_51, ATerm k_51, ATerm j_51, ATerm p_51, ATerm q_51, ATerm t);
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t);
static ATerm e_9 (ATerm g_51, ATerm t);
ATerm now_epoch_time_0_0 (ATerm t);
ATerm now_local_time_0_0 (ATerm t);
ATerm create_time_0_0 (ATerm t);
ATerm get_title_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm abox2html_0_0 (ATerm t);
static ATerm b_10 (ATerm q_29, ATerm r_29, ATerm t);
static ATerm u_9 (ATerm f_37, ATerm g_37, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm f_9 (ATerm l_25, ATerm m_25, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm g_9 (ATerm h_40, ATerm i_40, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm e_75 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm s_86 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm l_87 (ATerm), ATerm t);
static ATerm i_9 (ATerm w_31, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm i_99 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm h_99 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm j_99 (ATerm), ATerm t);
static ATerm k_9 (ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm s_21, ATerm r_21, ATerm t);
static ATerm l_9 (ATerm d_79 (ATerm), ATerm o_21, ATerm n_21, ATerm t);
static ATerm t_1 (ATerm t);
static ATerm m_9 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t);
static ATerm n_9 (ATerm a_84 (ATerm), ATerm e_29, ATerm d_29, ATerm t);
static ATerm r_9 (ATerm x_13, ATerm y_13, ATerm t);
static ATerm g_28 (ATerm u_27, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_9 (ATerm k_41, ATerm t);
static ATerm p_9 (ATerm g_14, ATerm h_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_30 (ATerm q_28, ATerm t);
static ATerm l_30 (ATerm z_28, ATerm a_29, ATerm b_29, ATerm t);
static ATerm o_30 (ATerm t_29, ATerm u_29, ATerm v_29, ATerm t);
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
ATerm filter_1_0 (ATerm c_84 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm y_36 (ATerm q_35, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm g_101 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm j_75 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_39 (ATerm r_38, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm s_9 (ATerm s_83 (ATerm), ATerm t_26, ATerm r_26, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm t_9 (ATerm v_36, ATerm w_36, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_generate_2_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm t);
static ATerm v_9 (ATerm c_28, ATerm d_28, ATerm t);
ATerm end_scope_1_0 (ATerm p_83 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm s_72 (ATerm), ATerm t_72 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm o_83 (ATerm), ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm s_100 (ATerm), ATerm t);
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
static ATerm w_9 (ATerm f_25, ATerm g_25, ATerm t);
ATerm foldr_2_0 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_99 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm need_help_1_0 (ATerm g_68 (ATerm), ATerm t);
static ATerm f_10 (ATerm p_31, ATerm q_31, ATerm r_31, ATerm t);
static ATerm g_10 (ATerm s_31, ATerm t_31, ATerm t);
ATerm lookup_table_0_1 (ATerm j_29, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_31, ATerm y_31, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm y_9 (ATerm u_31, ATerm v_31, ATerm t);
static ATerm z_9 (ATerm z_31, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm s_74 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_75 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm e_10 (ATerm a_49, ATerm b_49, ATerm t);
static ATerm c_10 (ATerm x_27, ATerm y_27, ATerm w_27, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm q_61 (ATerm), ATerm r_61 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_89 (ATerm), ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm parse_options_1_0 (ATerm t_89 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm), ATerm t);
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
            t = b_10(j_0, v_0, t);
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
      t = u_9(h_0, b_0, t);
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
static ATerm u_8 (ATerm h_37, ATerm i_37, ATerm t)
{
  t = SSL_fdcopy(h_37, i_37);
  return(t);
}
ATerm File_as_fd_1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm u_1 = NULL;
  t = xtc_open_fd_0_0(t);
  u_1 = t;
  {
    ATerm p_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_99(t);
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
static ATerm m_0 (ATerm t)
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
  t = s_9(m_0, x_2, z_2, t);
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
        t = u_8(i_3, f_3, t);
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
static ATerm w_8 (ATerm e_41, ATerm f_41, ATerm t)
{
  ATerm f_5 = NULL;
  t = SSL_write_term_to_stream_baf(e_41, f_41);
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_5);
  return(t);
}
static ATerm x_8 (ATerm n_87 (ATerm), ATerm t_470, ATerm o_41, ATerm t)
{
  ATerm g_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_470, term_q_10);
  t = q_9(t);
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_5, o_41);
  t = n_87(t);
  t = fclose_0_0(t);
  t = o_41;
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
ATerm xtc_transform_term_2_0 (ATerm f_100 (ATerm), ATerm g_100 (ATerm), ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL;
  i_5 = t;
  t = xtc_new_file_0_0(t);
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_5, i_5);
  t = x_8(b_1, h_5, i_5, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_5);
  t = xtc_transform_file_2_0(f_100, g_100, t);
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
      t = (ATerm) ATmakeAppl(sym__2, w_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_5), term_y_7), q_5), term_w_10));
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
          t = term_f_13;
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
                          t = term_l_13;
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm while_not_2_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm t)
{
  static ATerm n_6 (ATerm t)
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_73(t);
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        t = p_73(t);
        t = n_6(t);
      }
    return(t);
  }
  t = n_6(t);
  return(t);
}
ATerm for_3_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm t)
{
  t = r_73(t);
  t = while_not_2_0(s_73, t_73, t);
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
      ATerm q_13 = ATgetArgument(t, 0);
      if(((ATgetType(q_13) != AT_INT) || (ATgetInt((ATermInt) q_13) != 0)))
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
  t = (ATerm) ATmakeAppl(sym__2, u_6, term_s_13);
  t = geq_0_0(t);
  t = term_s_13;
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_6, term_s_13);
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
static ATerm z_8 (ATerm f_35, ATerm d_35, ATerm e_35, ATerm t)
{
  ATerm b_7 = NULL;
  t = SSL_strlen(d_35);
  b_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_35, b_7);
  t = f_9(e_35, b_7, t);
  {
    ATerm u_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_7 = NULL;
        f_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_7, term_z_13);
        t = geq_0_0(t);
        t = f_7;
        LocalPopChoice(w_13);
        {
          ATerm k_7 = NULL;
          k_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_7, f_35);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = u_13;
        t = term_a_14;
      }
  }
  return(t);
}
static ATerm a_9 (ATerm m_34, ATerm n_34, ATerm o_34, ATerm t)
{
  ATerm l_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, m_34, n_34, o_34);
  t = z_8(m_34, n_34, o_34, t);
  l_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_7, n_34);
  t = t_9(l_7, n_34, t);
  return(t);
}
static ATerm b_9 (ATerm d_26, ATerm e_26, ATerm t)
{
  t = SSL_mod(d_26, e_26);
  return(t);
}
ATerm month2index_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_b_14;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_c_14;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_d_14;
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
                          t = term_l_14;
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
                                              t = term_s_13;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_z_13;
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
                    t = (ATerm) ATmakeAppl(sym__2, term_z_15, a_11);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, a_11, term_a_16);
                    t = leq_0_0(t);
                    t = term_z_15;
                    z_11 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_11, term_z_15);
                    t = f_9(a_11, z_11, t);
                    LocalPopChoice(y_15);
                  }
                else
                  {
                    t = x_15;
                    t = (ATerm) ATmakeAppl(sym__2, term_z_13, a_11);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, a_11, term_z_15);
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
                      ATerm b_16 = ATgetArgument(t, 0);
                      q_11 = ATgetArgument(t, 1);
                      {
                        ATerm c_16 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = q_11;
                  if(match_cons(t, sym_DayTime_3))
                    {
                      a_11 = ATgetArgument(t, 0);
                      {
                        ATerm d_16 = ATgetArgument(t, 1);
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
                      ATerm j_16 = t;
                      int l_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_12 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_z_15, a_11);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, a_11, term_a_16);
                          t = leq_0_0(t);
                          t = term_z_15;
                          g_12 = t;
                          t = (ATerm) ATmakeAppl(sym__2, a_11, term_z_15);
                          t = f_9(a_11, g_12, t);
                          LocalPopChoice(l_16);
                        }
                      else
                        {
                          t = j_16;
                          {
                            ATerm o_16 = t;
                            int p_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_s_13, a_11);
                                t = leq_0_0(t);
                                t = (ATerm) ATmakeAppl(sym__2, a_11, term_z_15);
                                t = leq_0_0(t);
                                t = a_11;
                                LocalPopChoice(p_16);
                              }
                            else
                              {
                                t = o_16;
                                t = term_z_15;
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
                          t = (ATerm) ATmakeAppl(sym__2, term_z_15, a_11);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, a_11, term_a_16);
                          t = leq_0_0(t);
                          t = term_z_15;
                          k_12 = t;
                          t = (ATerm) ATmakeAppl(sym__2, a_11, term_z_15);
                          t = f_9(a_11, k_12, t);
                          LocalPopChoice(r_16);
                        }
                      else
                        {
                          t = q_16;
                          t = (ATerm) ATmakeAppl(sym__2, term_s_13, a_11);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, a_11, term_z_15);
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
                      t = term_s_13;
                      n_12 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_11, term_s_13);
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
                                              ATerm a_13 = NULL,e_13 = NULL;
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
                                              t = term_s_13;
                                              e_13 = t;
                                              t = (ATerm) ATmakeAppl(sym__2, a_13, term_s_13);
                                              t = w_9(a_13, e_13, t);
                                            }
                                          else
                                            {
                                              if(match_string(t, "M"))
                                                {
                                                  ATerm g_13 = NULL,o_13 = NULL;
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
                                                  t = term_s_13;
                                                  o_13 = t;
                                                  t = (ATerm) ATmakeAppl(sym__2, g_13, term_s_13);
                                                  t = w_9(g_13, o_13, t);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "yy"))
                                                    {
                                                      ATerm t_13 = NULL;
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
                                                      t_13 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, m_11, term_h_19);
                                                      t = b_9(m_11, t_13, t);
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
  ATerm r_15 = NULL,w_15 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,k_16 = NULL,m_16 = NULL,n_16 = NULL;
  e_16 = t;
  if(match_cons(t, sym__2))
    {
      f_16 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_16;
  if(match_cons(t, sym_ComponentTime_3))
    {
      h_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
      n_16 = ATgetArgument(t, 2);
      t = n_16;
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
            t = m_16;
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
                  t = h_16;
                  {
                    ATerm w_19 = t;
                    int x_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm y_19 = ATgetArgument(t, 0);
                            k_16 = ATgetArgument(t, 1);
                            {
                              ATerm z_19 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(x_19);
                        t = f_16;
                        if(match_string(t, "a"))
                          {
                            ATerm a_20 = t;
                            int b_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_17(f_16, e_16, t);
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
                                      t = (ATerm) ATmakeAppl(sym__2, term_z_15, r_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_15, term_a_16);
                                      t = leq_0_0(t);
                                      t = term_e_20;
                                      LocalPopChoice(d_20);
                                    }
                                  else
                                    {
                                      t = c_20;
                                      t = (ATerm) ATmakeAppl(sym__2, term_z_13, r_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_15, term_z_15);
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
                                    t = p_17(f_16, e_16, t);
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
                                        t = p_17(f_16, e_16, t);
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
                                            t = p_17(f_16, e_16, t);
                                            LocalPopChoice(t_20);
                                          }
                                        else
                                          {
                                            t = m_20;
                                            t = k_16;
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
                                                t = p_17(f_16, e_16, t);
                                                LocalPopChoice(v_20);
                                              }
                                            else
                                              {
                                                t = u_20;
                                                t = k_16;
                                                t = month2abbr_0_0(t);
                                              }
                                          }
                                        else
                                          {
                                            t = p_17(f_16, e_16, t);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = w_19;
                        t = f_16;
                        if(match_string(t, "a"))
                          {
                            ATerm w_20 = t;
                            int x_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_17(f_16, e_16, t);
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
                                      t = (ATerm) ATmakeAppl(sym__2, term_z_15, r_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_15, term_a_16);
                                      t = leq_0_0(t);
                                      t = term_e_20;
                                      LocalPopChoice(z_20);
                                    }
                                  else
                                    {
                                      t = y_20;
                                      t = (ATerm) ATmakeAppl(sym__2, term_z_13, r_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_15, term_z_15);
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
                                    t = p_17(f_16, e_16, t);
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
                                        t = p_17(f_16, e_16, t);
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
                                    t = p_17(f_16, e_16, t);
                                  }
                              }
                          }
                      }
                  }
                }
              else
                {
                  t = s_19;
                  t = h_16;
                  {
                    ATerm e_21 = t;
                    int f_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm g_21 = ATgetArgument(t, 0);
                            k_16 = ATgetArgument(t, 1);
                            {
                              ATerm h_21 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(f_21);
                        t = f_16;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm i_21 = t;
                            int j_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_17(f_16, e_16, t);
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
                                    t = p_17(f_16, e_16, t);
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
                                    int p_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = p_17(f_16, e_16, t);
                                        LocalPopChoice(p_21);
                                      }
                                    else
                                      {
                                        t = m_21;
                                        t = k_16;
                                        t = month2text_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    if(match_string(t, "MMM"))
                                      {
                                        ATerm q_21 = t;
                                        int t_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = p_17(f_16, e_16, t);
                                            LocalPopChoice(t_21);
                                          }
                                        else
                                          {
                                            t = q_21;
                                            t = k_16;
                                            t = month2abbr_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        t = p_17(f_16, e_16, t);
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = e_21;
                        t = f_16;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm v_21 = t;
                            int x_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_17(f_16, e_16, t);
                                LocalPopChoice(x_21);
                              }
                            else
                              {
                                t = v_21;
                                t = w_15;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm y_21 = t;
                                int b_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = p_17(f_16, e_16, t);
                                    LocalPopChoice(b_22);
                                  }
                                else
                                  {
                                    t = y_21;
                                    t = w_15;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = p_17(f_16, e_16, t);
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
            t = m_16;
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
                  t = h_16;
                  {
                    ATerm i_22 = t;
                    int j_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm k_22 = ATgetArgument(t, 0);
                            k_16 = ATgetArgument(t, 1);
                            {
                              ATerm m_22 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_22);
                        t = f_16;
                        if(match_string(t, "a"))
                          {
                            ATerm n_22 = t;
                            int o_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_17(f_16, e_16, t);
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
                                      t = (ATerm) ATmakeAppl(sym__2, term_z_15, r_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_15, term_a_16);
                                      t = leq_0_0(t);
                                      t = term_e_20;
                                      LocalPopChoice(q_22);
                                    }
                                  else
                                    {
                                      t = p_22;
                                      t = (ATerm) ATmakeAppl(sym__2, term_z_13, r_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_15, term_z_15);
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
                                    t = p_17(f_16, e_16, t);
                                    LocalPopChoice(s_22);
                                  }
                                else
                                  {
                                    t = r_22;
                                    t = k_16;
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
                                        t = p_17(f_16, e_16, t);
                                        LocalPopChoice(u_22);
                                      }
                                    else
                                      {
                                        t = t_22;
                                        t = k_16;
                                        t = month2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = p_17(f_16, e_16, t);
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = i_22;
                        t = f_16;
                        if(match_string(t, "a"))
                          {
                            ATerm v_22 = t;
                            int w_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_17(f_16, e_16, t);
                                LocalPopChoice(w_22);
                              }
                            else
                              {
                                t = v_22;
                                {
                                  ATerm x_22 = t;
                                  int y_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_z_15, r_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_15, term_a_16);
                                      t = leq_0_0(t);
                                      t = term_e_20;
                                      LocalPopChoice(y_22);
                                    }
                                  else
                                    {
                                      t = x_22;
                                      t = (ATerm) ATmakeAppl(sym__2, term_z_13, r_15);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_15, term_z_15);
                                      t = lt_0_0(t);
                                      t = term_f_20;
                                    }
                                }
                              }
                          }
                        else
                          {
                            t = p_17(f_16, e_16, t);
                          }
                      }
                  }
                }
              else
                {
                  t = c_22;
                  t = h_16;
                  {
                    ATerm a_23 = t;
                    int b_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm c_23 = ATgetArgument(t, 0);
                            k_16 = ATgetArgument(t, 1);
                            {
                              ATerm d_23 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(b_23);
                        t = f_16;
                        if(match_string(t, "MMMM"))
                          {
                            ATerm e_23 = t;
                            int f_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_17(f_16, e_16, t);
                                LocalPopChoice(f_23);
                              }
                            else
                              {
                                t = e_23;
                                t = k_16;
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
                                    t = p_17(f_16, e_16, t);
                                    LocalPopChoice(h_23);
                                  }
                                else
                                  {
                                    t = g_23;
                                    t = k_16;
                                    t = month2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = p_17(f_16, e_16, t);
                              }
                          }
                      }
                    else
                      {
                        t = a_23;
                        t = f_16;
                        t = p_17(f_16, e_16, t);
                      }
                  }
                }
            }
          }
      }
    }
  else
    {
      t = f_16;
      t = p_17(f_16, e_16, t);
    }
  return(t);
}
static ATerm c_9 (ATerm q_54, ATerm p_54, ATerm t)
{
  ATerm q_17 = NULL;
  t = q_54;
  {
    static ATerm f_1 (ATerm t)
    {
      ATerm r_17 = NULL;
      r_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_17, p_54);
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
              t = (ATerm) ATmakeAppl(sym__2, r_17, p_54);
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
static ATerm d_9 (ATerm o_51, ATerm n_51, ATerm m_51, ATerm l_51, ATerm k_51, ATerm j_51, ATerm p_51, ATerm q_51, ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL;
  t = k_51;
  t = index2month_0_0(t);
  y_17 = t;
  t = p_51;
  t = index2day_of_week_0_0(t);
  z_17 = t;
  t = (ATerm) ATmakeAppl(sym_ComponentTime_3, (ATerm)ATmakeAppl(sym_Date_3, j_51, y_17, l_51), (ATerm)ATmakeAppl(sym_DayTime_3, m_51, n_51, o_51), (ATerm) ATmakeAppl(sym_Dupl_2, z_17, q_51));
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
static ATerm e_9 (ATerm g_51, ATerm t)
{
  t = SSL_epoch2localtime(g_51);
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_25), term_e_25), term_i_25), term_e_25), term_d_25), term_u_24), term_z_24), term_u_24), term_x_24), term_u_24), term_w_24), term_u_24), term_t_24);
  n_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_25), term_e_25), term_i_25), term_e_25), term_d_25), term_u_24), term_z_24), term_u_24), term_x_24), term_u_24), term_w_24), term_u_24), term_t_24), m_18);
  t = c_9(n_18, m_18, t);
  return(t);
}
ATerm get_title_0_0 (ATerm t)
{
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_18 = NULL,p_18 = NULL;
      t = term_x_7;
      o_18 = t;
      t = term_s_25;
      p_18 = t;
      t = term_t_25;
      t = b_10(o_18, p_18, t);
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      {
        ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
        t = term_u_25;
        r_18 = t;
        t = (ATerm) ATinsert(ATempty, term_v_25);
        s_18 = t;
        t = SSL_printnl(r_18, s_18);
        t = term_s_13;
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_26), term_n_26), term_m_26), term_l_26), u_18), term_k_26), term_j_26), term_i_26), term_g_26), term_f_26), term_z_25), term_y_25), t_18), term_x_25), term_w_25);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_19 = NULL,c_19 = NULL,e_19 = NULL;
      t = term_x_7;
      c_19 = t;
      t = term_w_10;
      e_19 = t;
      t = term_s_26;
      t = b_10(c_19, e_19, t);
      b_19 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_19);
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      t = term_f_8;
    }
  a_19 = t;
  t = create_header_0_0(t);
  t = print_to_0_0(t);
  x_18 = t;
  t = a_19;
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_19 = ATgetArgument(t, 0);
            {
              ATerm x_1 = NULL,f_0 = NULL;
              t = SSLgetAnnotations(a_19);
              x_1 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_19);
              f_0 = t;
              t = SSLsetAnnotations(f_0, x_1);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_19;
          }
        LocalPopChoice(v_26);
        t = xtc_transform_file_2_0(j_1, pass_verbose_0_0, t);
      }
    else
      {
        t = u_26;
        t = xtc_transform_term_2_0(k_1, pass_verbose_0_0, t);
      }
  }
  y_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_27), term_w_26);
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
static ATerm b_10 (ATerm q_29, ATerm r_29, ATerm t)
{
  ATerm r_19 = NULL;
  t = lookup_table_0_1(q_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_10(r_29, r_19, t);
  return(t);
}
static ATerm u_9 (ATerm f_37, ATerm g_37, ATerm t)
{
  t = SSL_copy(f_37, g_37);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
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
              t = o_0(t);
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
              t = o_0(t);
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
static ATerm f_9 (ATerm l_25, ATerm m_25, ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(l_25, m_25);
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      t = SSL_subtr(l_25, m_25);
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
        t = term_s_13;
      }
  }
  o_20 = t;
  t = term_s_13;
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_20, term_s_13);
  t = f_9(o_20, q_20, t);
  p_20 = t;
  t = SSL_int_to_string(p_20);
  n_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_20), term_n_27);
  return(t);
}
static ATerm g_9 (ATerm h_40, ATerm i_40, ATerm t)
{
  t = SSL_execvp(h_40, i_40);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm u_21 = NULL,w_21 = NULL,z_21 = NULL,a_22 = NULL;
  u_21 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      w_21 = ATgetArgument(t, 0);
      {
        ATerm r_3 = NULL,u_3 = NULL;
        t = SSL_int_to_string(w_21);
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
          w_21 = ATgetArgument(t, 0);
          z_21 = ATgetArgument(t, 1);
          a_22 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(z_21);
      q_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_22), term_v_27), q_4), term_t_27), w_21);
      r_4 = t;
      t = SSL_concat_strings(r_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_75 (ATerm), ATerm t)
{
  ATerm d_22 = NULL;
  static ATerm m_1 (ATerm t)
  {
    t = e_75(t);
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
    ATerm z_27 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm f_28 = ATgetArgument(t, 0);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_36), term_w_35), term_r_35), term_m_35), term_j_35), term_w_34), term_l_34), term_e_34), term_b_34), term_y_33), term_v_33), term_r_33), term_n_33), term_j_33), term_e_33), term_y_32), term_q_32), term_d_32), term_b_31), term_w_30), term_p_30), term_k_30), term_c_30), term_o_29), term_l_29), term_f_29), term_t_28), term_o_28);
        t = fetch_elem_1_0(n_1, t);
        LocalPopChoice(b_28);
      }
    else
      {
        t = z_27;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, e_22);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm l_22 = NULL,z_22 = NULL;
  l_22 = t;
  {
    ATerm g_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_36 = ATgetArgument(t, 0);
            z_22 = ATgetArgument(t, 1);
            {
              ATerm m_36 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_36);
        {
          ATerm n_36 = t;
          int o_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_4 = NULL,z_4 = NULL,a_5 = NULL;
              t = z_22;
              {
                ATerm p_36 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_36;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              x_4 = t;
              t = term_u_25;
              z_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, x_4), term_q_36);
              a_5 = t;
              t = SSL_printnl(z_4, a_5);
              t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATinsert(ATempty, x_4), term_q_36));
              LocalPopChoice(o_36);
            }
          else
            {
              t = n_36;
              t = l_22;
            }
        }
      }
    else
      {
        t = g_36;
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
ATerm fork_and_wait_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL;
  s_23 = t;
  t = fork_0_0(t);
  r_23 = t;
  {
    ATerm r_36 = t;
    int s_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = s_23;
        t = s_86(t);
        LocalPopChoice(s_36);
      }
    else
      {
        t = r_36;
        t = SSL_waitpid(r_23);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm t_36 = ATgetArgument(t, 0);
            if(((ATgetType(t_36) != AT_INT) || (ATgetInt((ATermInt) t_36) != 0)))
              _fail(t);
            {
              ATerm u_36 = ATgetArgument(t, 1);
            }
            {
              ATerm z_36 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = s_23;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm l_87 (ATerm), ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,b_24 = NULL;
  w_23 = t;
  t = l_87(t);
  x_23 = t;
  t = term_u_25;
  y_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_23), x_23);
  b_24 = t;
  t = SSL_printnl(y_23, b_24);
  t = w_23;
  return(t);
}
static ATerm i_9 (ATerm w_31, ATerm t)
{
  t = SSL_hashtable_keys(w_31);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_24 = NULL,g_24 = NULL;
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
ATerm if_verbose5_1_0 (ATerm i_99 (ATerm), ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  {
    ATerm a_37 = t;
    int b_37 = stack_ptr;
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
        t = i_99(t);
        LocalPopChoice(b_37);
      }
    else
      {
        t = a_37;
        t = n_24;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm h_99 (ATerm), ATerm t)
{
  ATerm y_24 = NULL;
  y_24 = t;
  {
    ATerm c_37 = t;
    int j_37 = stack_ptr;
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
        t = h_99(t);
        LocalPopChoice(j_37);
      }
    else
      {
        t = c_37;
        t = y_24;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm j_99 (ATerm), ATerm t)
{
  ATerm h_25 = NULL;
  h_25 = t;
  {
    ATerm l_37 = t;
    int p_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_25 = NULL,k_25 = NULL,n_25 = NULL;
        t = term_x_7;
        k_25 = t;
        t = term_n_27;
        n_25 = t;
        t = term_q_27;
        t = b_10(k_25, n_25, t);
        j_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_25, term_l_14);
        t = geq_0_0(t);
        t = h_25;
        t = j_99(t);
        LocalPopChoice(p_37);
      }
    else
      {
        t = l_37;
        t = h_25;
      }
  }
  return(t);
}
static ATerm k_9 (ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm s_21, ATerm r_21, ATerm t)
{
  t = h_79(t);
  {
    static ATerm r_1 (ATerm t)
    {
      ATerm p_25 = NULL;
      p_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_21, p_25);
      t = g_79(t);
      return(t);
    }
    t = fetch_1_0(r_1, t);
  }
  t = r_21;
  return(t);
}
static ATerm l_9 (ATerm d_79 (ATerm), ATerm o_21, ATerm n_21, ATerm t)
{
  static ATerm h_26 (ATerm t)
  {
    ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
    a_26 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_21;
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
          ATerm q_37 = t;
          int r_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_26;
              {
                static ATerm s_1 (ATerm t)
                {
                  t = n_21;
                  return(t);
                }
                t = k_9(d_79, s_1, b_26, c_26, t);
              }
              t = h_26(t);
              LocalPopChoice(r_37);
            }
          else
            {
              t = q_37;
              {
                ATerm l_5 = NULL,o_5 = NULL,q_0 = NULL;
                t = SSLgetAnnotations(a_26);
                l_5 = t;
                t = c_26;
                t = h_26(t);
                o_5 = t;
                t = (ATerm) ATinsert(CheckATermList(o_5), b_26);
                q_0 = t;
                t = SSLsetAnnotations(q_0, l_5);
              }
            }
        }
      }
    return(t);
  }
  t = o_21;
  t = h_26(t);
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
static ATerm m_9 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL;
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_28, v_28);
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_37 = ATgetArgument(t, 0);
            ATerm v_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_28, v_28);
        t = b_10(u_28, v_28, t);
        LocalPopChoice(t_37);
      }
    else
      {
        t = s_37;
        t = (ATerm) ATempty;
      }
  }
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_26, w_28);
  t = l_9(t_1, z_26, w_28, t);
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_28, v_28, y_26);
  t = lookup_table_0_1(u_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(v_28, y_26, a_27, t);
  t = x_26;
  return(t);
}
static ATerm n_9 (ATerm a_84 (ATerm), ATerm e_29, ATerm d_29, ATerm t)
{
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
    t = (ATerm) ATmakeAppl(sym__3, e_29, j_27, k_27);
    t = a_84(t);
    return(t);
  }
  t = d_29;
  t = map_1_0(w_1, t);
  return(t);
}
static ATerm r_9 (ATerm x_13, ATerm y_13, ATerm t)
{
  t = SSL_access(x_13, y_13);
  return(t);
}
static ATerm g_28 (ATerm u_27, ATerm t)
{
  t = SSL_fclose(u_27);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_28 = NULL,e_28 = NULL;
  e_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_28 = ATgetArgument(t, 0);
      {
        ATerm w_37 = t;
        int x_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_28);
            LocalPopChoice(x_37);
          }
        else
          {
            t = w_37;
            t = g_28(e_28, t);
          }
      }
    }
  else
    {
      t = g_28(e_28, t);
    }
  return(t);
}
static ATerm o_9 (ATerm k_41, ATerm t)
{
  t = SSL_read_term_from_stream(k_41);
  return(t);
}
static ATerm p_9 (ATerm g_14, ATerm h_14, ATerm t)
{
  ATerm h_28 = NULL;
  t = SSL_fopen(g_14, h_14);
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_28);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_28 = NULL;
  t = SSL_stdin_stream();
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_28);
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
      ATerm y_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_37 = ATgetArgument(t, 1);
        if(((ATgetType(z_37) == AT_LIST) && !(ATisEmpty(z_37))))
          {
            r_28 = ATgetFirst((ATermList) z_37);
            {
              ATerm a_38 = (ATerm) ATgetNext((ATermList) z_37);
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
static ATerm l_30 (ATerm z_28, ATerm a_29, ATerm b_29, ATerm t)
{
  ATerm c_29 = NULL,h_29 = NULL,i_29 = NULL,p_29 = NULL,t_0 = NULL;
  t = SSLgetAnnotations(b_29);
  i_29 = t;
  t = z_28;
  if(match_cons(t, sym_Path_1))
    {
      p_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_29, a_29);
  t_0 = t;
  t = SSLsetAnnotations(t_0, i_29);
  if(match_cons(t, sym__2))
    {
      c_29 = ATgetArgument(t, 0);
      h_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(c_29, h_29, t);
  return(t);
}
static ATerm o_30 (ATerm t_29, ATerm u_29, ATerm v_29, ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,b_30 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(v_29);
  y_29 = t;
  t = SSL_is_string(t_29);
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_30, u_29);
  a_1 = t;
  t = SSLsetAnnotations(a_1, y_29);
  if(match_cons(t, sym__2))
    {
      w_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(w_29, x_29, t);
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
        ATerm b_38 = t;
        int c_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_30(d_30, t);
            LocalPopChoice(c_38);
          }
        else
          {
            t = b_38;
            {
              ATerm d_38 = t;
              int e_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_30(g_30, h_30, d_30, t);
                  LocalPopChoice(e_38);
                }
              else
                {
                  t = d_38;
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
    ATerm f_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_30, term_h_38);
        t = q_9(t);
        LocalPopChoice(g_38);
      }
    else
      {
        t = f_38;
        {
          ATerm r_6 = NULL,t_6 = NULL;
          t = term_i_38;
          t_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_38, z_30);
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
  t = term_j_38;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_o_38;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm p_38 = t;
  int q_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_31 = NULL,f_31 = NULL;
      e_31 = t;
      t = (ATerm) ATinsert(ATempty, term_s_38);
      f_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_31, (ATerm) ATinsert(ATempty, term_s_38));
      t = r_9(e_31, f_31, t);
      LocalPopChoice(q_38);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = p_38;
      {
        ATerm u_38 = t;
        int y_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_38 = t;
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
                t = z_38;
              }
            t = debug_1_0(y_1, t);
            LocalPopChoice(y_38);
          }
        else
          {
            t = u_38;
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
  t = term_a_39;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_e_39;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
  m_32 = t;
  t = term_u_25;
  n_32 = t;
  t = (ATerm) ATinsert(ATempty, term_f_39);
  o_32 = t;
  t = SSL_printnl(n_32, o_32);
  t = m_32;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm p_32 = NULL,s_32 = NULL,t_32 = NULL;
  if(match_cons(t, sym__3))
    {
      p_32 = ATgetArgument(t, 0);
      s_32 = ATgetArgument(t, 1);
      t_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_9(p_32, s_32, t_32, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,z_32 = NULL;
  u_32 = t;
  t = term_u_25;
  v_32 = t;
  t = (ATerm) ATinsert(ATempty, term_g_39);
  z_32 = t;
  t = SSL_printnl(v_32, z_32);
  t = u_32;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,f_33 = NULL;
  a_33 = t;
  t = term_u_25;
  b_33 = t;
  t = (ATerm) ATinsert(ATempty, term_f_39);
  f_33 = t;
  t = SSL_printnl(b_33, f_33);
  t = a_33;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  i_31 = t;
  t = if_verbose5_1_0(a_2, t);
  {
    ATerm h_39 = t;
    if((PushChoice() == 0))
      {
        ATerm i_32 = NULL,j_32 = NULL;
        t = term_k_39;
        i_32 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, i_31);
        j_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_39, (ATerm) ATmakeAppl(sym_Imported_1, i_31));
        t = b_10(i_32, j_32, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_39;
      }
  }
  k_31 = t;
  t = term_k_39;
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_39, term_l_39, (ATerm) ATinsert(ATempty, i_31));
  t = lookup_table_0_1(c_32, t);
  h_32 = t;
  t = term_l_39;
  e_32 = t;
  t = (ATerm) ATinsert(ATempty, i_31);
  f_32 = t;
  t = h_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(e_32, f_32, g_32, t);
  t = k_31;
  t = if_verbose4_1_0(c_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(e_2, t);
  j_31 = t;
  t = term_k_39;
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_39, j_31);
  t = n_9(f_2, b_32, j_31, t);
  t = if_verbose6_1_0(h_2, t);
  t = term_k_39;
  l_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_39, (ATerm)ATmakeAppl(sym_Imported_1, i_31), (ATerm) ATempty);
  t = lookup_table_0_1(l_31, t);
  a_32 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, i_31);
  m_31 = t;
  t = (ATerm) ATempty;
  n_31 = t;
  t = a_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(m_31, n_31, o_31, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_39, (ATerm)ATmakeAppl(sym_Imported_1, i_31), (ATerm) ATempty);
  t = if_verbose4_1_0(j_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm c_84 (ATerm), ATerm t)
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
        ATerm q_39 = t;
        int s_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_7 = NULL,j_7 = NULL,n_7 = NULL,q_1 = NULL;
            t = SSLgetAnnotations(f_34);
            g_7 = t;
            t = g_34;
            t = c_84(t);
            j_7 = t;
            t = h_34;
            t = filter_1_0(c_84, t);
            n_7 = t;
            t = (ATerm) ATinsert(CheckATermList(n_7), j_7);
            q_1 = t;
            t = SSLsetAnnotations(q_1, g_7);
            LocalPopChoice(s_39);
          }
        else
          {
            t = q_39;
            t = h_34;
            t = filter_1_0(c_84, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm t)
{
  static ATerm q_34 (ATerm t)
  {
    ATerm t_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_72(t);
        t = q_34(t);
        LocalPopChoice(v_39);
      }
    else
      {
        t = t_39;
        t = y_72(t);
      }
    return(t);
  }
  t = q_34(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm w_39 = t;
  int x_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_34 = NULL,s_34 = NULL;
      t = term_x_7;
      r_34 = t;
      t = term_y_39;
      s_34 = t;
      t = term_b_40;
      t = b_10(r_34, s_34, t);
      LocalPopChoice(x_39);
    }
  else
    {
      t = w_39;
      {
        ATerm l_40 = t;
        int o_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_34 = NULL;
            t = term_p_40;
            u_34 = t;
            t = SSL_getenv(u_34);
            LocalPopChoice(o_40);
          }
        else
          {
            t = l_40;
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
  t = term_q_40;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL;
  t = term_k_39;
  h_35 = t;
  t = term_r_40;
  i_35 = t;
  t = term_t_40;
  t = b_10(h_35, i_35, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm v_40 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_40;
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
  t = term_h_41;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm a_35 = NULL;
  t = if_verbose5_1_0(n_2, t);
  a_35 = t;
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_35 = NULL,c_35 = NULL;
        t = term_k_39;
        b_35 = t;
        t = term_l_39;
        c_35 = t;
        t = term_n_41;
        t = b_10(b_35, c_35, t);
        LocalPopChoice(j_41);
      }
    else
      {
        t = i_41;
        {
          ATerm g_35 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          g_35 = t;
          t = repeat_2_0(s_2, _id, t);
          t = g_35;
        }
      }
  }
  t = a_35;
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
  t = term_r_41;
  return(t);
}
static ATerm y_36 (ATerm q_35, ATerm t)
{
  ATerm s_35 = NULL,x_35 = NULL,z_35 = NULL;
  t = term_k_39;
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, q_35);
  z_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_39, (ATerm) ATmakeAppl(sym_Tool_1, q_35));
  t = b_10(x_35, z_35, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_41 = ATgetFirst((ATermList) t);
      if(match_cons(s_41, sym__2))
        {
          ATerm x_41 = ATgetArgument(s_41, 0);
          s_35 = ATgetArgument(s_41, 1);
        }
      else
        _fail(t);
      {
        ATerm u_41 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_35;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = debug_1_0(j_3, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_r_41;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_k_39;
  t = table_getlist_0_0(t);
  t = debug_1_0(l_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_y_41;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm z_41 = t;
  int a_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
      t = if_verbose5_1_0(y_2, t);
      t = xtc_load_0_0(t);
      c_36 = t;
      if(match_cons(t, sym__2))
        {
          a_36 = ATgetArgument(t, 0);
          b_36 = ATgetArgument(t, 1);
          {
            ATerm b_42 = t;
            int c_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
                t = term_k_39;
                i_36 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, a_36);
                j_36 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_k_39, (ATerm) ATmakeAppl(sym_Tool_1, a_36));
                t = b_10(i_36, j_36, t);
                {
                  static ATerm c_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((b_36 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((h_36 != NULL) && (h_36 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_36 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(c_3, t);
                }
                t = not_null(h_36);
                LocalPopChoice(c_42);
              }
            else
              {
                t = b_42;
                t = y_36(c_36, t);
              }
          }
        }
      else
        {
          t = y_36(c_36, t);
        }
      t = if_verbose5_1_0(h_3, t);
      LocalPopChoice(a_42);
    }
  else
    {
      t = z_41;
      {
        ATerm x_36 = NULL,v_7 = NULL,w_7 = NULL;
        x_36 = t;
        t = term_u_25;
        v_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_42), x_36), term_e_42);
        w_7 = t;
        t = SSL_printnl(v_7, w_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_42), x_36), term_e_42);
        t = if_verbose5_1_0(k_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL;
  e_37 = t;
  t = g_101(t);
  t = xtc_find_0_0(t);
  d_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_37, e_37);
  {
    static ATerm n_3 (ATerm t)
    {
      ATerm k_37 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, d_37, e_37);
      t = g_9(d_37, e_37, t);
      t = term_h_42;
      k_37 = t;
      t = SSL_exit(k_37);
      return(t);
    }
    t = fork_and_wait_1_0(n_3, t);
  }
  t = e_37;
  return(t);
}
ATerm at_end_1_0 (ATerm j_75 (ATerm), ATerm t)
{
  static ATerm n_38 (ATerm t)
  {
    ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
    m_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_38 = ATgetFirst((ATermList) t);
        l_38 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_8 = NULL,e_8 = NULL,i_2 = NULL;
          t = SSLgetAnnotations(m_38);
          b_8 = t;
          t = l_38;
          t = n_38(t);
          e_8 = t;
          t = (ATerm) ATinsert(CheckATermList(e_8), k_38);
          i_2 = t;
          t = SSLsetAnnotations(i_2, b_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_38;
        t = j_75(t);
      }
    return(t);
  }
  t = n_38(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  m_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_37;
    }
  else
    {
      static ATerm q_3 (ATerm t)
      {
        t = not_null(o_37);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_37 = ATgetFirst((ATermList) t);
          if(((o_37 != NULL) && (o_37 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_37;
      t = at_end_1_0(q_3, t);
    }
  return(t);
}
static ATerm b_39 (ATerm r_38, ATerm t)
{
  ATerm t_38 = NULL;
  t = SSL_explode_term(r_38);
  if(match_cons(t, sym__2))
    {
      ATerm l_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_42) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_38;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
  x_38 = t;
  if(match_cons(t, sym__2))
    {
      v_38 = ATgetArgument(t, 0);
      w_38 = ATgetArgument(t, 1);
      {
        ATerm m_42 = t;
        int n_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_3 (ATerm t)
            {
              t = w_38;
              return(t);
            }
            t = v_38;
            t = at_end_1_0(t_3, t);
            LocalPopChoice(n_42);
          }
        else
          {
            t = m_42;
            t = b_39(x_38, t);
          }
      }
    }
  else
    {
      t = b_39(x_38, t);
    }
  return(t);
}
static ATerm s_9 (ATerm s_83 (ATerm), ATerm t_26, ATerm r_26, ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,i_39 = NULL,j_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL;
  j_39 = t;
  t = s_83(t);
  c_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_39, t_26, r_26);
  t = c_10(c_39, t_26, r_26, t);
  {
    ATerm o_42 = t;
    int p_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_39 = NULL;
        t = term_q_42;
        r_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_39, term_q_42);
        t = b_10(c_39, r_39, t);
        LocalPopChoice(p_42);
      }
    else
      {
        t = o_42;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_39 = ATgetFirst((ATermList) t);
      i_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, c_39, term_q_42, (ATerm) ATinsert(CheckATermList(i_39), (ATerm) ATinsert(CheckATermList(d_39), t_26)));
  t = lookup_table_0_1(c_39, t);
  p_39 = t;
  t = term_q_42;
  m_39 = t;
  t = (ATerm) ATinsert(CheckATermList(i_39), (ATerm) ATinsert(CheckATermList(d_39), t_26));
  n_39 = t;
  t = p_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(m_39, n_39, o_39, t);
  t = j_39;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm u_39 = NULL;
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_39 = NULL,l_8 = NULL;
      z_39 = t;
      t = term_t_42;
      l_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_39, term_t_42);
      t = t_9(z_39, l_8, t);
      u_39 = t;
      t = SSL_mkstemp(u_39);
      LocalPopChoice(s_42);
    }
  else
    {
      t = r_42;
      {
        ATerm a_40 = NULL;
        t = term_u_42;
        a_40 = t;
        t = SSL_perror(a_40);
        _fail(t);
      }
    }
  return(t);
}
static ATerm t_9 (ATerm v_36, ATerm w_36, ATerm t)
{
  t = SSL_strcat(v_36, w_36);
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
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL;
  t = P__tmpdir_0_0(t);
  f_40 = t;
  t = term_v_42;
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_40, term_v_42);
  t = t_9(f_40, g_40, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      d_40 = ATgetArgument(t, 0);
      c_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_j_8;
  e_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_40, term_j_8);
  t = s_9(v_3, d_40, e_40, t);
  t = SSL_close(c_40);
  t = d_40;
  return(t);
}
ATerm xtc_generate_2_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL;
  t = term_j_8;
  t = xtc_new_file_0_0(t);
  j_40 = t;
  t = l_100(t);
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_40, (ATerm) ATinsert(ATinsert(ATempty, j_40), term_y_7));
  t = conc_0_0(t);
  t = xtc_command_1_0(k_100, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, j_40);
  return(t);
}
static ATerm v_9 (ATerm c_28, ATerm d_28, ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL;
  n_40 = t;
  {
    ATerm w_42 = t;
    int x_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
        t = b_10(c_28, d_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_42 = ATgetFirst((ATermList) t);
            m_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_42);
        {
          ATerm s_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, c_28, d_28, m_40);
          t = lookup_table_0_1(c_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              s_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_10(d_28, m_40, s_40, t);
          t = (ATerm) ATmakeAppl(sym__3, c_28, d_28, m_40);
        }
      }
    else
      {
        t = w_42;
        {
          ATerm u_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
          t = lookup_table_0_1(c_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              u_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_9(d_28, u_40, t);
          t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
        }
      }
  }
  t = n_40;
  return(t);
}
ATerm end_scope_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL;
  z_40 = t;
  t = p_83(t);
  y_40 = t;
  {
    ATerm a_43 = t;
    int b_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_41 = NULL;
        t = term_q_42;
        d_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_40, term_q_42);
        t = b_10(y_40, d_41, t);
        LocalPopChoice(b_43);
      }
    else
      {
        t = a_43;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_40 = ATgetFirst((ATermList) t);
      w_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_40, term_q_42, w_40);
  t = lookup_table_0_1(y_40, t);
  c_41 = t;
  t = term_q_42;
  a_41 = t;
  t = c_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(a_41, w_40, b_41, t);
  t = x_40;
  {
    static ATerm x_3 (ATerm t)
    {
      ATerm g_41 = NULL;
      g_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_40, g_41);
      t = v_9(y_40, g_41, t);
      return(t);
    }
    t = map_1_0(x_3, t);
  }
  t = z_40;
  return(t);
}
ATerm restore_always_2_0 (ATerm s_72 (ATerm), ATerm t_72 (ATerm), ATerm t)
{
  ATerm d_43 = t;
  int i_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_72(t);
      t = t_72(t);
      LocalPopChoice(i_43);
    }
  else
    {
      t = d_43;
      t = t_72(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_83 (ATerm), ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,p_41 = NULL,q_41 = NULL,t_41 = NULL,v_41 = NULL,w_41 = NULL;
  m_41 = t;
  t = o_83(t);
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_41, term_q_42);
  {
    ATerm j_43 = t;
    int k_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_42 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_43 = ATgetArgument(t, 0);
            ATerm t_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_42;
        d_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_41, term_q_42);
        t = b_10(l_41, d_42, t);
        LocalPopChoice(k_43);
      }
    else
      {
        t = j_43;
        t = (ATerm) ATempty;
      }
  }
  p_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_41, term_q_42, (ATerm) ATinsert(CheckATermList(p_41), (ATerm) ATempty));
  t = lookup_table_0_1(l_41, t);
  w_41 = t;
  t = term_q_42;
  q_41 = t;
  t = (ATerm) ATinsert(CheckATermList(p_41), (ATerm) ATempty);
  t_41 = t;
  t = w_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(q_41, t_41, v_41, t);
  t = m_41;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_k_10;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm y_42 = NULL;
  y_42 = t;
  {
    ATerm u_43 = t;
    int v_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(y_42);
        LocalPopChoice(v_43);
      }
    else
      {
        t = u_43;
        t = y_42;
      }
  }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm s_100 (ATerm), ATerm t)
{
  ATerm g_42 = NULL;
  static ATerm z_3 (ATerm t)
  {
    ATerm i_42 = NULL;
    i_42 = t;
    {
      ATerm w_43 = t;
      int x_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_42 = NULL,k_42 = NULL;
          t = term_k_10;
          j_42 = t;
          t = term_q_42;
          k_42 = t;
          t = term_y_43;
          t = b_10(j_42, k_42, t);
          LocalPopChoice(x_43);
        }
      else
        {
          t = w_43;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((g_42 != NULL) && (g_42 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          g_42 = ATgetFirst((ATermList) t);
        {
          ATerm a_44 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = g_42;
    t = map_1_0(a_4, t);
    t = i_42;
    t = end_scope_1_0(c_4, t);
    return(t);
  }
  t = begin_scope_1_0(y_3, t);
  t = restore_always_2_0(s_100, z_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
  c_43 = t;
  t = term_j_8;
  t = whoami_0_0(t);
  e_43 = t;
  t = term_u_25;
  g_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_44), e_43), term_b_44);
  h_43 = t;
  t = SSL_printnl(g_43, h_43);
  t = term_s_13;
  f_43 = t;
  t = SSL_exit(f_43);
  t = c_43;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_43 = NULL,q_43 = NULL,s_43 = NULL;
      t = term_j_8;
      t = n_0(t);
      p_43 = t;
      t = term_d_44;
      q_43 = t;
      t = term_f_44;
      s_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_44, term_f_44, p_43);
      t = c_10(q_43, s_43, p_43, t);
      _fail(t);
    }
  else
    {
      ATerm z_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_43 = ATgetFirst((ATermList) t);
          m_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_43;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_43 = ATgetFirst((ATermList) t);
          o_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_43;
      t = k_0(t);
      t = n_43;
      t = l_0(t);
      z_43 = t;
      t = (ATerm) ATinsert(CheckATermList(o_43), z_43);
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm e_44 = NULL;
  e_44 = t;
  if(match_string(t, "-k"))
    {
      t = e_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_44;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm i_44 = NULL,k_44 = NULL,o_44 = NULL;
  i_44 = t;
  t = SSL_string_to_int(i_44);
  k_44 = t;
  t = term_g_44;
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_44, k_44);
  t = e_10(o_44, k_44, t);
  t = i_44;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_h_44;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_4, j_4, k_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm q_44 = NULL;
  q_44 = t;
  if(match_string(t, "-S"))
    {
      t = q_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_44;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL;
  t = term_n_27;
  t_44 = t;
  t = term_z_13;
  u_44 = t;
  t = term_j_44;
  t = e_10(t_44, u_44, t);
  t = term_l_44;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_m_44;
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
  ATerm v_44 = NULL,x_44 = NULL,y_44 = NULL;
  v_44 = t;
  t = SSL_string_to_int(v_44);
  x_44 = t;
  t = term_n_27;
  y_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_27, x_44);
  t = e_10(y_44, x_44, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_44);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_n_44;
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
  ATerm b_45 = NULL,c_45 = NULL;
  t = term_p_44;
  b_45 = t;
  t = term_j_8;
  c_45 = t;
  t = term_r_44;
  t = e_10(b_45, c_45, t);
  t = term_s_44;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_w_44;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_4, n_4, p_4, t);
      LocalPopChoice(a_45);
    }
  else
    {
      t = z_44;
      {
        ATerm d_45 = t;
        int e_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_4, t_4, u_4, t);
            LocalPopChoice(e_45);
          }
        else
          {
            t = d_45;
            t = Option_3_0(v_4, w_4, y_4, t);
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm f_45 = NULL;
  f_45 = t;
  if(match_string(t, "-o"))
    {
      t = f_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_45;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm g_45 = NULL,m_45 = NULL;
  g_45 = t;
  t = term_y_7;
  m_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, g_45);
  t = e_10(m_45, g_45, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_45);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_h_45;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_5, c_5, d_5, t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm o_45 = NULL;
  o_45 = t;
  if(match_string(t, "-i"))
    {
      t = o_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_45;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL;
  p_45 = t;
  t = term_w_10;
  q_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_10, p_45);
  t = e_10(q_45, p_45, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_45);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_i_45;
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
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL;
  u_45 = t;
  t = term_j_45;
  v_45 = t;
  t = term_k_45;
  w_45 = t;
  t = term_l_45;
  t = e_10(v_45, w_45, t);
  t = u_45;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_n_45;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm x_45 = NULL;
  x_45 = t;
  if(match_string(t, "-t"))
    {
      t = x_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--title", 0, ATtrue)))
        _fail(t);
      t = x_45;
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm y_45 = NULL,b_46 = NULL;
  y_45 = t;
  t = term_s_25;
  b_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_25, y_45);
  t = e_10(b_46, y_45, t);
  t = y_45;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_r_45;
  return(t);
}
ATerm abox2html_options_0_0 (ATerm t)
{
  ATerm s_45 = t;
  int t_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(t_45);
    }
  else
    {
      t = s_45;
      {
        ATerm z_45 = t;
        int a_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(a_46);
          }
        else
          {
            t = z_45;
            {
              ATerm e_46 = t;
              int f_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(f_46);
                }
              else
                {
                  t = e_46;
                  {
                    ATerm i_46 = t;
                    int j_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(j_46);
                      }
                    else
                      {
                        t = i_46;
                        {
                          ATerm m_46 = t;
                          int n_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(t_5, v_5, x_5, t);
                              LocalPopChoice(n_46);
                            }
                          else
                            {
                              t = m_46;
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
  ATerm c_46 = NULL,d_46 = NULL,g_46 = NULL,h_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_8;
  t = whoami_0_0(t);
  c_46 = t;
  t = term_u_25;
  g_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_46), c_46);
  h_46 = t;
  t = SSL_printnl(g_46, h_46);
  t = term_s_13;
  d_46 = t;
  t = SSL_exit(d_46);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL;
  t = term_x_7;
  k_46 = t;
  t = term_r_46;
  l_46 = t;
  t = term_t_46;
  t = b_10(k_46, l_46, t);
  return(t);
}
static ATerm w_9 (ATerm f_25, ATerm g_25, ATerm t)
{
  ATerm u_46 = t;
  int w_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_25, g_25);
      LocalPopChoice(w_46);
    }
  else
    {
      t = u_46;
      t = SSL_addr(f_25, g_25);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,s_46 = NULL;
  o_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_46;
      t = g_82(t);
    }
  else
    {
      ATerm v_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_46 = ATgetFirst((ATermList) t);
          s_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_46;
      t = foldr_2_0(g_82, h_82, t);
      v_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_46, v_46);
      t = h_82(t);
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
  t = term_z_13;
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
  ATerm y_46 = NULL,q_8 = NULL,r_8 = NULL;
  t = times_0_0(t);
  r_8 = t;
  t = SSL_explode_term(r_8);
  if(match_cons(t, sym__2))
    {
      ATerm x_46 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8;
  t = foldr_2_0(b_6, c_6, t);
  y_46 = t;
  t = SSL_TicksToSeconds(y_46);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL;
  n_47 = t;
  if(match_cons(t, sym__2))
    {
      o_47 = ATgetArgument(t, 0);
      p_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_46 = t;
    int a_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_47;
        if((o_47 != t))
          {
            _fail(t);
          }
        t = n_47;
        LocalPopChoice(a_47);
      }
    else
      {
        t = z_46;
        t = (ATerm) ATmakeAppl(sym__2, o_47, p_47);
        {
          ATerm b_47 = t;
          int c_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_47, p_47);
              LocalPopChoice(c_47);
            }
          else
            {
              t = b_47;
              t = SSL_gtr(o_47, p_47);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_47, p_47);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  ATerm v_47 = NULL;
  v_47 = t;
  {
    ATerm d_47 = t;
    int e_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
        t = term_x_7;
        y_47 = t;
        t = term_n_27;
        z_47 = t;
        t = term_q_27;
        t = b_10(y_47, z_47, t);
        x_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_47, term_s_13);
        t = geq_0_0(t);
        t = v_47;
        t = e_99(t);
        LocalPopChoice(e_47);
      }
    else
      {
        t = d_47;
        t = v_47;
      }
  }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL,e_48 = NULL,f_48 = NULL;
  t = run_time_0_0(t);
  b_48 = t;
  t = term_j_8;
  t = whoami_0_0(t);
  c_48 = t;
  t = term_u_25;
  e_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_47), b_48), term_t_27), c_48);
  f_48 = t;
  t = SSL_printnl(e_48, f_48);
  t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_47), b_48), term_t_27), c_48));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_13;
  g_48 = t;
  t = SSL_exit(g_48);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm z_48 = NULL,e_49 = NULL;
  e_49 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_49;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          z_48 = ATgetArgument(t, 0);
          {
            ATerm n_10 = NULL,m_2 = NULL;
            t = SSLgetAnnotations(e_49);
            n_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, z_48);
            m_2 = t;
            t = SSLsetAnnotations(m_2, n_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_49;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_68 (ATerm), ATerm t)
{
  ATerm g_47 = t;
  int h_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_48 = NULL,l_48 = NULL;
      t = term_x_7;
      k_48 = t;
      t = term_i_47;
      l_48 = t;
      t = term_j_47;
      t = b_10(k_48, l_48, t);
      LocalPopChoice(h_47);
    }
  else
    {
      t = g_47;
      t = fetch_1_0(e_6, t);
    }
  t = g_68(t);
  return(t);
}
static ATerm f_10 (ATerm p_31, ATerm q_31, ATerm r_31, ATerm t)
{
  ATerm g_49 = NULL;
  t = SSL_hashtable_put(r_31, p_31, q_31);
  g_49 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_49);
  return(t);
}
static ATerm g_10 (ATerm s_31, ATerm t_31, ATerm t)
{
  t = SSL_hashtable_get(t_31, s_31);
  return(t);
}
ATerm lookup_table_0_1 (ATerm j_29, ATerm t)
{
  ATerm s_49 = NULL;
  t = table_hashtable_0_0(t);
  s_49 = t;
  {
    ATerm k_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_10 = NULL;
        t = s_49;
        if(match_cons(t, sym_Hashtable_1))
          {
            t_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_10(j_29, t_10, t);
        LocalPopChoice(l_47);
      }
    else
      {
        t = k_47;
        {
          ATerm y_10 = NULL;
          t = j_29;
          t = table_create_0_0(t);
          t = s_49;
          if(match_cons(t, sym_Hashtable_1))
            {
              y_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_10(j_29, y_10, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_31, ATerm y_31, ATerm t)
{
  ATerm y_49 = NULL;
  t = SSL_hashtable_create(x_31, y_31);
  y_49 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_49);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,d_50 = NULL,e_50 = NULL;
  z_49 = t;
  t = term_m_47;
  d_50 = t;
  t = term_q_47;
  e_50 = t;
  t = z_49;
  t = new_hashtable_0_2(d_50, e_50, t);
  a_50 = t;
  t = z_49;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(z_49, a_50, b_50, t);
  t = z_49;
  return(t);
}
static ATerm y_9 (ATerm u_31, ATerm v_31, ATerm t)
{
  ATerm g_50 = NULL;
  t = SSL_hashtable_remove(v_31, u_31);
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_50);
  return(t);
}
static ATerm z_9 (ATerm z_31, ATerm t)
{
  ATerm h_50 = NULL;
  t = SSL_hashtable_destroy(z_31);
  h_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_50);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_50 = NULL;
  t = SSL_table_hashtable();
  i_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_50);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,n_50 = NULL,o_50 = NULL;
  j_50 = t;
  t = table_hashtable_0_0(t);
  k_50 = t;
  t = lookup_table_0_1(j_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_9(o_50, t);
  t = k_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_9(j_50, n_50, t);
  t = j_50;
  return(t);
}
ATerm map_1_0 (ATerm s_74 (ATerm), ATerm t)
{
  static ATerm z_51 (ATerm t)
  {
    ATerm e_51 = NULL,i_51 = NULL,y_51 = NULL;
    e_51 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_51;
      }
    else
      {
        ATerm o_11 = NULL,v_11 = NULL,a_12 = NULL,t_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_51 = ATgetFirst((ATermList) t);
            y_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_51);
        o_11 = t;
        t = i_51;
        t = s_74(t);
        v_11 = t;
        t = y_51;
        t = z_51(t);
        a_12 = t;
        t = (ATerm) ATinsert(CheckATermList(a_12), v_11);
        t_8 = t;
        t = SSLsetAnnotations(t_8, o_11);
      }
    return(t);
  }
  t = z_51(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm i_52 = NULL,p_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_52 = ATgetFirst((ATermList) t);
      p_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_52 = NULL,a_53 = NULL;
        static ATerm f_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_52)), not_null(a_53));
          return(t);
        }
        t = p_52;
        t = i_0(t);
        if(((z_52 != NULL) && (z_52 != t)))
          _fail(t);
        else
          z_52 = t;
        t = i_52;
        t = g_0(t);
        if(((a_53 != NULL) && (a_53 != t)))
          _fail(t);
        else
          a_53 = t;
        t = p_52;
        t = reverse_acc_2_0(g_0, f_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_8;
      t = i_0(t);
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL,y_14 = NULL;
  l_53 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_53);
  j_53 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_53);
  y_14 = t;
  t = SSLsetAnnotations(y_14, j_53);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm n_53 = NULL;
  n_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_53), term_r_47);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL;
  ATerm s_47 = t;
  int t_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_53 = NULL,i_53 = NULL;
      t = term_x_7;
      h_53 = t;
      t = term_r_46;
      i_53 = t;
      t = term_t_46;
      t = b_10(h_53, i_53, t);
      LocalPopChoice(t_47);
    }
  else
    {
      t = s_47;
      t = fetch_1_0(g_6, t);
    }
  t = term_u_47;
  t = echo_0_0(t);
  t = term_d_44;
  e_53 = t;
  t = term_f_44;
  f_53 = t;
  t = term_w_47;
  t = b_10(e_53, f_53, t);
  t = reverse_acc_2_0(_id, h_6, t);
  t = map_1_0(i_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_75 (ATerm), ATerm t)
{
  static ATerm d_56 (ATerm t)
  {
    ATerm x_55 = NULL,y_55 = NULL,b_56 = NULL;
    x_55 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_55 = ATgetFirst((ATermList) t);
        b_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_48 = t;
      int d_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_12 = NULL,d_13 = NULL,a_15 = NULL;
          t = SSLgetAnnotations(x_55);
          z_12 = t;
          t = y_55;
          t = c_75(t);
          d_13 = t;
          t = (ATerm) ATinsert(CheckATermList(b_56), d_13);
          a_15 = t;
          t = SSLsetAnnotations(a_15, z_12);
          LocalPopChoice(d_48);
        }
      else
        {
          t = a_48;
          {
            ATerm p_13 = NULL,v_13 = NULL,b_15 = NULL;
            t = SSLgetAnnotations(x_55);
            p_13 = t;
            t = b_56;
            t = d_56(t);
            v_13 = t;
            t = (ATerm) ATinsert(CheckATermList(v_13), y_55);
            b_15 = t;
            t = SSLsetAnnotations(b_15, p_13);
          }
        }
    }
    return(t);
  }
  t = d_56(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL;
  k_56 = t;
  {
    ATerm h_48 = t;
    int i_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_56;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_48 = ATgetFirst((ATermList) t);
                ATerm m_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_56;
          }
        LocalPopChoice(i_48);
      }
    else
      {
        t = h_48;
        t = (ATerm) ATinsert(ATempty, k_56);
      }
  }
  l_56 = t;
  t = term_a_8;
  m_56 = t;
  t = SSL_printnl(m_56, l_56);
  t = k_56;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL;
  t = term_x_7;
  q_56 = t;
  t = term_r_46;
  r_56 = t;
  t = term_t_46;
  t = b_10(q_56, r_56, t);
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
  ATerm s_56 = NULL,t_56 = NULL;
  t = term_n_48;
  s_56 = t;
  t = term_j_8;
  t_56 = t;
  t = term_o_48;
  t = e_10(s_56, t_56, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_p_48;
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
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL;
  t = term_n_48;
  w_56 = t;
  t = term_j_8;
  x_56 = t;
  t = term_o_48;
  t = e_10(w_56, x_56, t);
  t = term_q_48;
  u_56 = t;
  t = term_j_8;
  v_56 = t;
  t = term_r_48;
  t = e_10(u_56, v_56, t);
  t = term_s_48;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_t_48;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_48 = t;
  int v_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_6, m_6, p_6, t);
      LocalPopChoice(v_48);
    }
  else
    {
      t = u_48;
      t = Option_3_0(v_6, c_7, d_7, t);
    }
  return(t);
}
static ATerm e_10 (ATerm a_49, ATerm b_49, ATerm t)
{
  ATerm y_56 = NULL,a_57 = NULL;
  t = term_x_7;
  y_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_7, a_49, b_49);
  t = lookup_table_0_1(y_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(a_49, b_49, a_57, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_7, a_49, b_49);
  return(t);
}
static ATerm c_10 (ATerm x_27, ATerm y_27, ATerm w_27, ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL;
  f_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_27, y_27);
  {
    ATerm w_48 = t;
    int x_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_48 = ATgetArgument(t, 0);
            ATerm c_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_27, y_27);
        t = b_10(x_27, y_27, t);
        LocalPopChoice(x_48);
      }
    else
      {
        t = w_48;
        t = (ATerm) ATempty;
      }
  }
  g_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_27, y_27, (ATerm) ATinsert(CheckATermList(g_57), w_27));
  t = lookup_table_0_1(x_27, t);
  l_57 = t;
  t = (ATerm) ATinsert(CheckATermList(g_57), w_27);
  j_57 = t;
  t = l_57;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(y_27, j_57, k_57, t);
  t = f_57;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
      t = term_j_8;
      t = e_0(t);
      t_57 = t;
      t = term_d_44;
      u_57 = t;
      t = term_f_44;
      v_57 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_44, term_f_44, t_57);
      t = c_10(u_57, v_57, t_57, t);
      _fail(t);
    }
  else
    {
      ATerm y_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_57 = ATgetFirst((ATermList) t);
          s_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_57;
      t = c_0(t);
      t = term_j_8;
      t = d_0(t);
      y_57 = t;
      t = (ATerm) ATinsert(CheckATermList(s_57), y_57);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_61 (ATerm), ATerm r_61 (ATerm), ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,e_15 = NULL;
  e_58 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_58 = ATgetFirst((ATermList) t);
      b_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_58);
  z_57 = t;
  t = a_58;
  t = q_61(t);
  c_58 = t;
  t = b_58;
  t = r_61(t);
  d_58 = t;
  t = (ATerm) ATinsert(CheckATermList(d_58), c_58);
  e_15 = t;
  t = SSLsetAnnotations(e_15, z_57);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,o_58 = NULL,p_58 = NULL,g_15 = NULL;
  j_58 = t;
  {
    ATerm d_49 = t;
    int f_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_49;
        t = u_89(t);
        LocalPopChoice(f_49);
      }
    else
      {
        t = d_49;
      }
  }
  t = j_58;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_58 = ATgetFirst((ATermList) t);
      m_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_58);
  k_58 = t;
  t = term_r_46;
  p_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_46, l_58);
  t = e_10(p_58, l_58, t);
  t = m_58;
  {
    static ATerm z_58 (ATerm t)
    {
      ATerm i_49 = t;
      int j_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_49 = t;
          int l_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_58 = NULL;
              s_58 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_58;
              LocalPopChoice(l_49);
            }
          else
            {
              t = k_49;
              t = u_89(t);
              t = Cons_2_0(_id, z_58, t);
            }
          LocalPopChoice(j_49);
        }
      else
        {
          t = i_49;
          {
            ATerm v_58 = NULL,w_58 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_58 = ATgetFirst((ATermList) t);
                w_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_58), (ATerm) ATmakeAppl(sym_Undefined_1, v_58));
          }
        }
      return(t);
    }
    t = z_58(t);
  }
  o_58 = t;
  t = (ATerm) ATinsert(CheckATermList(o_58), (ATerm) ATmakeAppl(sym_Program_1, l_58));
  g_15 = t;
  t = SSLsetAnnotations(g_15, k_58);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm m_59 = NULL;
  m_59 = t;
  if(match_string(t, "--help"))
    {
      t = m_59;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_59;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_59;
        }
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL;
  t = term_i_47;
  n_59 = t;
  t = term_j_8;
  o_59 = t;
  t = term_m_49;
  t = e_10(n_59, o_59, t);
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
ATerm parse_options_1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL;
  g_59 = t;
  t = term_d_44;
  h_59 = t;
  t = term_p_49;
  t = lookup_table_0_1(h_59, t);
  l_59 = t;
  t = term_f_44;
  i_59 = t;
  t = (ATerm) ATempty;
  j_59 = t;
  t = l_59;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(i_59, j_59, k_59, t);
  t = g_59;
  {
    static ATerm e_7 (ATerm t)
    {
      ATerm q_49 = t;
      int r_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_89(t);
          LocalPopChoice(r_49);
        }
      else
        {
          t = q_49;
          {
            ATerm t_49 = t;
            int u_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_7, i_7, m_7, t);
                LocalPopChoice(u_49);
              }
            else
              {
                t = t_49;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_7, t);
  }
  {
    ATerm v_49 = t;
    int w_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_59 = NULL;
        z_59 = t;
        {
          ATerm x_49 = t;
          int c_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_14 = NULL;
              t = z_59;
              {
                ATerm f_50 = t;
                int l_50 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_14 = NULL,i_14 = NULL;
                    t = term_x_7;
                    f_14 = t;
                    t = term_i_47;
                    i_14 = t;
                    t = term_j_47;
                    t = b_10(f_14, i_14, t);
                    LocalPopChoice(l_50);
                  }
                else
                  {
                    t = f_50;
                    t = fetch_1_0(o_7, t);
                  }
              }
              t = z_59;
              t = default_system_usage_0_0(t);
              t = term_z_13;
              e_14 = t;
              t = SSL_exit(e_14);
              LocalPopChoice(c_50);
            }
          else
            {
              t = x_49;
              {
                ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
                t = term_x_7;
                n_14 = t;
                t = term_n_48;
                o_14 = t;
                t = term_m_50;
                t = b_10(n_14, o_14, t);
                t = z_59;
                t = default_system_about_0_0(t);
                t = term_z_13;
                m_14 = t;
                t = SSL_exit(m_14);
              }
            }
        }
        LocalPopChoice(w_49);
      }
    else
      {
        t = v_49;
        {
          ATerm p_50 = t;
          int q_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL;
              static ATerm p_7 (ATerm t)
              {
                ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL,i_15 = NULL;
                f_60 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_60 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_60);
                d_60 = t;
                t = e_60;
                if(((e_59 != NULL) && (e_59 != t)))
                  _fail(t);
                else
                  e_59 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_60);
                i_15 = t;
                t = SSLsetAnnotations(i_15, d_60);
                return(t);
              }
              t = fetch_1_0(p_7, t);
              t = term_u_25;
              b_60 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_59)), term_r_50);
              c_60 = t;
              t = SSL_printnl(b_60, c_60);
              t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_59)), term_r_50));
              t = default_system_usage_0_0(t);
              t = term_s_13;
              a_60 = t;
              t = SSL_exit(a_60);
              LocalPopChoice(q_50);
            }
          else
            {
              t = p_50;
            }
        }
      }
  }
  f_59 = t;
  t = term_d_44;
  t = table_destroy_0_0(t);
  t = f_59;
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm), ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL;
  t = parse_options_1_0(i_68, t);
  k_60 = t;
  t = term_s_50;
  t = table_create_0_0(t);
  t = term_s_50;
  l_60 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_50, term_t_50, k_60);
  t = lookup_table_0_1(l_60, t);
  o_60 = t;
  t = term_t_50;
  m_60 = t;
  t = o_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(m_60, k_60, n_60, t);
  t = k_60;
  t = k_68(t);
  {
    ATerm u_50 = t;
    int v_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_68, t);
        LocalPopChoice(v_50);
      }
    else
      {
        t = u_50;
        {
          ATerm w_50 = t;
          int x_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_68(t);
              t = report_success_0_0(t);
              LocalPopChoice(x_50);
            }
          else
            {
              t = w_50;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm y_50 = t;
  int z_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_60 = NULL,s_14 = NULL,t_14 = NULL;
      y_60 = t;
      t = term_x_7;
      s_14 = t;
      t = term_j_45;
      t_14 = t;
      t = term_a_51;
      t = b_10(s_14, t_14, t);
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("gen-css", 0, ATtrue)))
        _fail(t);
      t = y_60;
      t = xtc_temp_files_1_0(r_7, t);
      LocalPopChoice(z_50);
    }
  else
    {
      t = y_50;
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
  t = term_b_51;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm c_51 = t;
  int d_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_14 = NULL,v_14 = NULL;
      t = term_x_7;
      u_14 = t;
      t = term_y_7;
      v_14 = t;
      t = term_z_7;
      t = b_10(u_14, v_14, t);
      LocalPopChoice(d_51);
    }
  else
    {
      t = c_51;
      t = term_a_8;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2html_options_0_0, default_usage_0_0, _id, q_7, t);
  return(t);
}
