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
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
}
ATerm term_y_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_h_47;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_s_45;
ATerm term_r_45;
ATerm term_o_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_j_44;
ATerm term_h_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_g_43;
ATerm term_e_43;
ATerm term_v_41;
ATerm term_m_41;
ATerm term_h_41;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_h_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_w_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_p_39;
ATerm term_l_39;
ATerm term_e_39;
ATerm term_b_39;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_j_38;
ATerm term_d_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_u_37;
ATerm term_q_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_a_35;
ATerm term_w_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_z_33;
ATerm term_u_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_g_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_t_32;
ATerm term_r_32;
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
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_o_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_s_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_g_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_x_29;
ATerm term_v_29;
ATerm term_t_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_j_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_c_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_y_26;
ATerm term_g_26;
ATerm term_z_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_s_25;
ATerm term_h_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_l_24;
ATerm term_j_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_z_23;
ATerm term_x_23;
ATerm term_v_23;
ATerm term_n_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_g_18;
ATerm term_x_17;
ATerm term_b_15;
ATerm term_x_14;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_w_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_e_10;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_m_9;
ATerm term_m_8;
ATerm term_k_8;
ATerm term_h_8;
ATerm term_q_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Dec", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Nov", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Oct", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Sep", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Aug", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jul", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jun", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("May", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Apr", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Mar", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Feb", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Jan", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("December", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("November", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("October", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("September", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("August", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("July", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("June", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("April", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("March", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("February", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("January", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Sat", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Fri", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Thu", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Wed", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Tue", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Mon", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Sun", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Saturday", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Friday", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Thursday", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Wednesday", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuesday", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Monday", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Sunday", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(100);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("p.m.", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("a.m.", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Saturday_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Friday_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Thursday_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Wednesday_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Tuesday_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Monday_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Sunday_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_December_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_November_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_October_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_September_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_August_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_July_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_June_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_May_0);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_April_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_March_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_February_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_January_0);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("EEEE", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("d", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("MMMM", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("yyyy", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("HH", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("mm", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ss", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--title", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no title specified for HTML document", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<!-- \n", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   This file is generated at ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" \n", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   by abox2html (C) 2001 Merijn de Jonge (mdejonge@cwi.nl)\n", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-->\n", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<!doctype html public \"-//W3C//DTD WWW HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/loose.dtd\"> \n", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<html>\n", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  <head>\n", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("    <title>", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("</title>\n", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("    <link rel=\"stylesheet\" type=\"text/css\" href=\"boxstyle.css\">\n", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  </head>\n", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  <body>\n", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("  </body>\n", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("</html>\n", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-html", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_27, term_w_12, term_z_27);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_28, term_s_13, term_i_28);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_28, term_p_13, term_o_28);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_28, term_j_13, term_v_28);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_28, term_f_13, term_y_28);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_29, term_n_29, term_o_29);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_29, term_t_29, term_v_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_29, term_h_13, term_a_30);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_30, term_d_30, term_e_30);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_30, term_o_30, term_s_30);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_30, term_g_13, term_x_30);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_31, term_n_13, term_g_31);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_31, term_m_31, term_o_31);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_31, term_d_13, term_s_31);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_31, term_v_31, term_w_31);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_32, term_c_32, term_d_32);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_32, term_g_32, term_h_32);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_32, term_k_32, term_l_32);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_32, term_b_15, term_r_32);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_32, term_e_13, term_x_32);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_32, term_x_14, term_a_33);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_33, term_e_33, term_g_33);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_33, term_p_33, term_q_33);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_33, term_u_33, term_z_33);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_34, term_l_13, term_j_34);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_34, term_m_34, term_n_34);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_34, term_w_34, term_a_35);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_35, term_g_35, term_h_35);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(sym__2, term_b_39, term_t_39);
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym__2, term_b_39, term_e_39);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym__2, term_m_8, term_h_41);
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym__2, term_y_26, term_a_13);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_13);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(sym__2, term_s_43, term_q_7);
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym__2, term_f_44, term_h_44);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Only generate cascading style sheet", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-t title    Title of HTML document", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym__2, term_j_43, term_k_43);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym__2, term_f_46, term_q_7);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(sym__2, term_i_46, term_q_7);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(sym__2, term_r_45, term_q_7);
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css-boxstyle", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm xtc_close_fd_0_0 (ATerm t);
static ATerm l_8 (ATerm s_34, ATerm t_34, ATerm t);
ATerm File_as_fd_1_0 (ATerm r_95 (ATerm), ATerm t);
ATerm STDERR__FILENO_0_0 (ATerm t);
ATerm STDOUT__FILENO_0_0 (ATerm t);
ATerm STDIN__FILENO_0_0 (ATerm t);
ATerm xtc_open_fd_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_new_file_name_0_0 (ATerm t);
ATerm xtc_cat_0_0 (ATerm t);
static ATerm k_3 (ATerm u_2, ATerm t);
static ATerm l_3 (ATerm x_2, ATerm z_2, ATerm b_3, ATerm t);
static ATerm f_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm print_to_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm n_8 (ATerm p_38, ATerm q_38, ATerm t);
static ATerm o_8 (ATerm m_83 (ATerm), ATerm a_438, ATerm x_38, ATerm t);
static ATerm h_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
ATerm month2abbr_0_0 (ATerm t);
ATerm month2text_0_0 (ATerm t);
ATerm lt_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm day_of_week2abbr_0_0 (ATerm t);
ATerm day_of_week2text_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm t);
ATerm for_3_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
static ATerm q_8 (ATerm q_32, ATerm o_32, ATerm p_32, ATerm t);
static ATerm r_8 (ATerm x_31, ATerm y_31, ATerm z_31, ATerm t);
static ATerm s_8 (ATerm t_25, ATerm u_25, ATerm t);
ATerm month2index_0_0 (ATerm t);
ATerm date_pattern_to_int_0_0 (ATerm t);
static ATerm n_16 (ATerm y_13, ATerm z_13, ATerm t);
ATerm date_pattern_to_string_0_0 (ATerm t);
static ATerm t_8 (ATerm n_51, ATerm m_51, ATerm t);
ATerm index2day_of_week_0_0 (ATerm t);
ATerm index2month_0_0 (ATerm t);
static ATerm u_8 (ATerm m_48, ATerm l_48, ATerm k_48, ATerm j_48, ATerm i_48, ATerm h_48, ATerm n_48, ATerm o_48, ATerm t);
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t);
static ATerm v_8 (ATerm e_48, ATerm t);
ATerm now_epoch_time_0_0 (ATerm t);
ATerm now_local_time_0_0 (ATerm t);
ATerm create_time_0_0 (ATerm t);
ATerm get_title_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm xtc_io_1_0 (ATerm l_96 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm abox2html_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm j_9 (ATerm q_34, ATerm r_34, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm w_8 (ATerm b_25, ATerm c_25, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm x_8 (ATerm s_37, ATerm t_37, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm a_72 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm r_82 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm k_83 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm a_95 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm z_94 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm b_95 (ATerm), ATerm t);
static ATerm a_9 (ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm i_21, ATerm h_21, ATerm t);
static ATerm b_9 (ATerm s_75 (ATerm), ATerm e_21, ATerm d_21, ATerm t);
static ATerm p_1 (ATerm t);
static ATerm c_9 (ATerm k_28, ATerm l_28, ATerm m_28, ATerm t);
static ATerm d_9 (ATerm a_80 (ATerm), ATerm u_28, ATerm t_28, ATerm t);
static ATerm h_9 (ATerm w_13, ATerm x_13, ATerm t);
static ATerm s_26 (ATerm m_26, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_9 (ATerm v_38, ATerm t);
static ATerm f_9 (ATerm f_14, ATerm g_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_29 (ATerm i_27, ATerm t);
static ATerm g_29 (ATerm p_27, ATerm q_27, ATerm u_27, ATerm t);
static ATerm h_29 (ATerm d_28, ATerm e_28, ATerm f_28, ATerm t);
static ATerm g_9 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm b_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm v_34 (ATerm t_33, ATerm t);
static ATerm f_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm y_96 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm e_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm o_36 (ATerm e_36, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm i_9 (ATerm s_79 (ATerm), ATerm j_26, ATerm h_26, ATerm t);
static ATerm o_9 (ATerm g_34, ATerm h_34, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_generate_2_0 (ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm t);
static ATerm k_9 (ATerm s_27, ATerm t_27, ATerm t);
ATerm end_scope_1_0 (ATerm p_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm o_79 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm k_96 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm abox2html_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_9 (ATerm v_24, ATerm w_24, ATerm t);
ATerm foldr_2_0 (ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_94 (ATerm), ATerm t);
static ATerm k_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm need_help_1_0 (ATerm c_65 (ATerm), ATerm t);
ATerm map_1_0 (ATerm o_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_71 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm s_9 (ATerm t_45, ATerm u_45, ATerm t);
static ATerm p_9 (ATerm e_29, ATerm f_29, ATerm t);
static ATerm q_9 (ATerm n_27, ATerm o_27, ATerm m_27, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm n_58 (ATerm), ATerm o_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_85 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm parse_options_1_0 (ATerm s_85 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm e_65 (ATerm), ATerm f_65 (ATerm), ATerm g_65 (ATerm), ATerm h_65 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm xtc_close_fd_0_0 (ATerm t)
{
  ATerm j_0 = NULL;
  j_0 = t;
  {
    ATerm j_2 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 = NULL;
        t = term_q_7;
        t = STDIN__FILENO_0_0(t);
        q_0 = t;
        if((j_0 != t))
          {
            _fail(t);
          }
        t = q_0;
        LocalPopChoice(p_7);
      }
    else
      {
        t = j_2;
        {
          ATerm s_7 = t;
          int t_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_0 = NULL;
              t = term_q_7;
              t = STDOUT__FILENO_0_0(t);
              x_0 = t;
              if((j_0 != t))
                {
                  _fail(t);
                }
              t = x_0;
              LocalPopChoice(t_7);
            }
          else
            {
              t = s_7;
              {
                ATerm u_7 = t;
                int v_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_0 = NULL;
                    t = term_q_7;
                    t = STDERR__FILENO_0_0(t);
                    z_0 = t;
                    if((j_0 != t))
                      {
                        _fail(t);
                      }
                    t = z_0;
                    LocalPopChoice(v_7);
                  }
                else
                  {
                    t = u_7;
                    t = SSL_close(j_0);
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm l_8 (ATerm s_34, ATerm t_34, ATerm t)
{
  t = SSL_fdcopy(s_34, t_34);
  return(t);
}
ATerm File_as_fd_1_0 (ATerm r_95 (ATerm), ATerm t)
{
  ATerm e_1 = NULL;
  t = xtc_open_fd_0_0(t);
  e_1 = t;
  {
    ATerm w_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_95(t);
        LocalPopChoice(x_7);
        {
          ATerm g_1 = NULL;
          g_1 = t;
          {
            ATerm y_7 = t;
            int b_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = e_1;
                t = xtc_close_fd_0_0(t);
                LocalPopChoice(b_8);
              }
            else
              {
                t = y_7;
              }
          }
          t = g_1;
        }
      }
    else
      {
        t = w_7;
        {
          ATerm f_8 = t;
          int g_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_1;
              t = xtc_close_fd_0_0(t);
              LocalPopChoice(g_8);
            }
          else
            {
              t = f_8;
            }
        }
        t = e_1;
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
  ATerm u_1 = NULL,v_1 = NULL;
  v_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      u_1 = ATgetArgument(t, 0);
      t = SSL_open(u_1);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          t = term_q_7;
          t = STDIN__FILENO_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_stdout_0))
            {
              t = term_q_7;
              t = STDOUT__FILENO_0_0(t);
            }
          else
            {
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
              t = term_q_7;
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
  ATerm b_2 = NULL,c_2 = NULL,e_2 = NULL;
  t = term_q_7;
  t = new_0_0(t);
  b_2 = t;
  t = term_h_8;
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_2, term_h_8);
  t = o_9(b_2, c_2, t);
  e_2 = t;
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_2 = NULL;
        t = (ATerm) ATinsert(ATempty, term_k_8);
        h_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_2, (ATerm) ATinsert(ATempty, term_k_8));
        t = h_9(e_2, h_2, t);
        t = new_file_0_0(t);
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        t = e_2;
      }
  }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_m_8;
  return(t);
}
ATerm xtc_new_file_name_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  t = new_file_0_0(t);
  k_2 = t;
  t = term_q_7;
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_2, term_q_7);
  t = i_9(a_0, k_2, l_2, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_2);
  return(t);
}
ATerm xtc_cat_0_0 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,p_2 = NULL;
  n_2 = t;
  t = xtc_new_file_name_0_0(t);
  m_2 = t;
  t = xtc_open_fd_0_0(t);
  p_2 = t;
  t = n_2;
  {
    static ATerm c_0 (ATerm t)
    {
      static ATerm e_0 (ATerm t)
      {
        ATerm q_2 = NULL;
        q_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_2, p_2);
        t = l_8(q_2, p_2, t);
        return(t);
      }
      t = File_as_fd_1_0(e_0, t);
      return(t);
    }
    t = map_1_0(c_0, t);
  }
  t = p_2;
  t = xtc_close_fd_0_0(t);
  t = m_2;
  return(t);
}
static ATerm k_3 (ATerm u_2, ATerm t)
{
  t = u_2;
  {
    ATerm p_8 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_8 = ATgetArgument(t, 0);
            ATerm z_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_8;
      }
  }
  t = term_m_9;
  t = debug_1_0(f_0, t);
  t = (ATerm) ATmakeAppl(sym__2, u_2, term_u_9);
  t = open_file_0_0(t);
  return(t);
}
static ATerm l_3 (ATerm x_2, ATerm z_2, ATerm b_3, ATerm t)
{
  t = SSL_open_file(x_2, z_2);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_x_9;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL;
  h_3 = t;
  if(match_cons(t, sym__2))
    {
      i_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
      {
        ATerm z_9 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_3(h_3, t);
            LocalPopChoice(c_10);
          }
        else
          {
            t = z_9;
            t = l_3(i_3, j_3, h_3, t);
          }
      }
    }
  else
    {
      t = k_3(h_3, t);
    }
  return(t);
}
ATerm print_to_0_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL;
  m_3 = t;
  t = xtc_new_file_0_0(t);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_3, term_u_9);
  t = open_file_0_0(t);
  t = SSL_print(n_3, m_3);
  t = SSL_close_file(n_3);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_3);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm t_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_e_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm w_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_k_8);
      w_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_3, (ATerm) ATinsert(ATempty, term_k_8));
      t = h_9(t_3, w_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm n_8 (ATerm p_38, ATerm q_38, ATerm t)
{
  ATerm b_4 = NULL;
  t = SSL_write_term_to_stream_baf(p_38, q_38);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_4);
  return(t);
}
static ATerm o_8 (ATerm m_83 (ATerm), ATerm a_438, ATerm x_38, ATerm t)
{
  ATerm d_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_438, term_u_9);
  t = g_9(t);
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_4, x_38);
  t = m_83(t);
  t = fclose_0_0(t);
  t = x_38;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_10 = ATgetArgument(t, 0);
      if(match_cons(h_10, sym_Stream_1))
        {
          g_4 = ATgetArgument(h_10, 0);
        }
      else
        _fail(t);
      h_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_8(g_4, h_4, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL;
  f_4 = t;
  t = xtc_new_file_0_0(t);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_4, f_4);
  t = o_8(h_0, e_4, f_4, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, e_4);
  t = xtc_transform_file_2_0(x_95, y_95, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL;
  j_4 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm m_4 = NULL,r_4 = NULL;
      t = j_4;
      t = xtc_new_file_0_0(t);
      m_4 = t;
      t = v_0(t);
      r_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_4, (ATerm) ATinsert(ATinsert(ATempty, m_4), term_j_10));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_4);
    }
  else
    {
      ATerm b_5 = NULL,c_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_4;
      t = xtc_new_file_0_0(t);
      b_5 = t;
      t = v_0(t);
      c_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_5), term_j_10), k_4), term_m_10));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_5);
    }
  return(t);
}
ATerm month2abbr_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_n_10;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_o_10;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_p_10;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_r_10;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_s_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_t_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_v_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_y_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_z_10;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_a_11;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_b_11;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_d_11;
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
      t = term_e_11;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_f_11;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_g_11;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_h_11;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_i_11;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_k_11;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_l_11;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_y_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_n_11;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_o_11;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_p_11;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_q_11;
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
  ATerm r_11 = t;
  if((PushChoice() == 0))
    {
      t = geq_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_11;
    }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm s_11 = t;
  if((PushChoice() == 0))
    {
      ATerm o_5 = NULL,r_5 = NULL;
      if(match_cons(t, sym__2))
        {
          o_5 = ATgetArgument(t, 0);
          r_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, o_5, r_5);
      {
        ATerm t_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(o_5, r_5);
            LocalPopChoice(w_11);
          }
        else
          {
            t = t_11;
            t = SSL_gtr(o_5, r_5);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, o_5, r_5);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_11;
    }
  return(t);
}
ATerm day_of_week2abbr_0_0 (ATerm t)
{
  if(match_cons(t, sym_Saturday_0))
    {
      t = term_z_11;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_b_12;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_c_12;
            }
          else
            {
              if(match_cons(t, sym_Wednesday_0))
                {
                  t = term_e_12;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_f_12;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_h_12;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_i_12;
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
      t = term_j_12;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_k_12;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_l_12;
            }
          else
            {
              if(match_cons(t, sym_Wednesday_0))
                {
                  t = term_m_12;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_n_12;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_p_12;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_q_12;
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm while_not_2_0 (ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm t)
{
  static ATerm t_5 (ATerm t)
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_70(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        t = l_70(t);
        t = t_5(t);
      }
    return(t);
  }
  t = t_5(t);
  return(t);
}
ATerm for_3_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm t)
{
  t = n_70(t);
  t = while_not_2_0(o_70, p_70, t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL;
  if(match_cons(t, sym__2))
    {
      x_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_5, y_5, (ATerm) ATempty);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm z_5 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm u_12 = ATgetArgument(t, 0);
      if(((ATgetType(u_12) != AT_INT) || (ATgetInt((ATermInt) u_12) != 0)))
        _fail(t);
      {
        ATerm v_12 = ATgetArgument(t, 1);
      }
      z_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_5;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL;
  if(match_cons(t, sym__3))
    {
      b_6 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
      e_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_6, term_w_12);
  t = geq_0_0(t);
  t = term_w_12;
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_6, term_w_12);
  t = w_8(b_6, g_6, t);
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_6, c_6, (ATerm) ATinsert(CheckATermList(e_6), c_6));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(m_0, s_0, u_0, t);
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm i_6 = NULL;
  t = copy_0_0(t);
  i_6 = t;
  t = SSL_implode_string(i_6);
  return(t);
}
static ATerm q_8 (ATerm q_32, ATerm o_32, ATerm p_32, ATerm t)
{
  ATerm j_6 = NULL;
  t = SSL_strlen(o_32);
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_32, j_6);
  t = w_8(p_32, j_6, t);
  {
    ATerm x_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_6 = NULL;
        l_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_6, term_a_13);
        t = geq_0_0(t);
        t = l_6;
        LocalPopChoice(z_12);
        {
          ATerm n_6 = NULL;
          n_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_6, q_32);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = x_12;
        t = term_b_13;
      }
  }
  return(t);
}
static ATerm r_8 (ATerm x_31, ATerm y_31, ATerm z_31, ATerm t)
{
  ATerm p_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, x_31, y_31, z_31);
  t = q_8(x_31, y_31, z_31, t);
  p_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_6, y_31);
  t = o_9(p_6, y_31, t);
  return(t);
}
static ATerm s_8 (ATerm t_25, ATerm u_25, ATerm t)
{
  t = SSL_mod(t_25, u_25);
  return(t);
}
ATerm month2index_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_d_13;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_e_13;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_f_13;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_g_13;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_h_13;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_j_13;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_l_13;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_n_13;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_p_13;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_s_13;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_w_12;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_a_13;
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
  ATerm n_9 = NULL,r_9 = NULL,t_9 = NULL,v_9 = NULL,y_9 = NULL,a_10 = NULL,b_10 = NULL,d_10 = NULL,f_10 = NULL,g_10 = NULL,i_10 = NULL,k_10 = NULL,l_10 = NULL;
  y_9 = t;
  if(match_cons(t, sym__2))
    {
      a_10 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_10;
  if(match_string(t, "ss"))
    {
      t = b_10;
      if(match_cons(t, sym_ComponentTime_3))
        {
          ATerm t_13 = ATgetArgument(t, 0);
          k_10 = ATgetArgument(t, 1);
          {
            ATerm v_13 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = k_10;
      if(match_cons(t, sym_DayTime_3))
        {
          ATerm b_14 = ATgetArgument(t, 0);
          ATerm e_14 = ATgetArgument(t, 1);
          t_9 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_9;
    }
  else
    {
      if(match_string(t, "mm"))
        {
          t = b_10;
          if(match_cons(t, sym_ComponentTime_3))
            {
              ATerm i_14 = ATgetArgument(t, 0);
              k_10 = ATgetArgument(t, 1);
              {
                ATerm j_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = k_10;
          if(match_cons(t, sym_DayTime_3))
            {
              ATerm k_14 = ATgetArgument(t, 0);
              r_9 = ATgetArgument(t, 1);
              {
                ATerm l_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = r_9;
        }
      else
        {
          if(match_string(t, "KK"))
            {
              t = b_10;
              if(match_cons(t, sym_ComponentTime_3))
                {
                  ATerm m_14 = ATgetArgument(t, 0);
                  k_10 = ATgetArgument(t, 1);
                  {
                    ATerm q_14 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = k_10;
              if(match_cons(t, sym_DayTime_3))
                {
                  n_9 = ATgetArgument(t, 0);
                  {
                    ATerm r_14 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm t_14 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              {
                ATerm u_14 = t;
                int v_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_10 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, term_x_14, n_9);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, n_9, term_b_15);
                    t = leq_0_0(t);
                    t = term_x_14;
                    u_10 = t;
                    t = (ATerm) ATmakeAppl(sym__2, n_9, term_x_14);
                    t = w_8(n_9, u_10, t);
                    LocalPopChoice(v_14);
                  }
                else
                  {
                    t = u_14;
                    t = (ATerm) ATmakeAppl(sym__2, term_a_13, n_9);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, n_9, term_x_14);
                    t = lt_0_0(t);
                    t = n_9;
                  }
              }
            }
          else
            {
              if(match_string(t, "hh"))
                {
                  t = b_10;
                  if(match_cons(t, sym_ComponentTime_3))
                    {
                      ATerm d_15 = ATgetArgument(t, 0);
                      k_10 = ATgetArgument(t, 1);
                      {
                        ATerm f_15 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = k_10;
                  if(match_cons(t, sym_DayTime_3))
                    {
                      n_9 = ATgetArgument(t, 0);
                      {
                        ATerm g_15 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm i_15 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = n_9;
                  if(match_int(t, 0))
                    {
                      ATerm j_15 = t;
                      int k_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_11 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_x_14, n_9);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, n_9, term_b_15);
                          t = leq_0_0(t);
                          t = term_x_14;
                          c_11 = t;
                          t = (ATerm) ATmakeAppl(sym__2, n_9, term_x_14);
                          t = w_8(n_9, c_11, t);
                          LocalPopChoice(k_15);
                        }
                      else
                        {
                          t = j_15;
                          {
                            ATerm l_15 = t;
                            int m_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_w_12, n_9);
                                t = leq_0_0(t);
                                t = (ATerm) ATmakeAppl(sym__2, n_9, term_x_14);
                                t = leq_0_0(t);
                                t = n_9;
                                LocalPopChoice(m_15);
                              }
                            else
                              {
                                t = l_15;
                                t = term_x_14;
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm n_15 = t;
                      int o_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_11 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_x_14, n_9);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, n_9, term_b_15);
                          t = leq_0_0(t);
                          t = term_x_14;
                          j_11 = t;
                          t = (ATerm) ATmakeAppl(sym__2, n_9, term_x_14);
                          t = w_8(n_9, j_11, t);
                          LocalPopChoice(o_15);
                        }
                      else
                        {
                          t = n_15;
                          t = (ATerm) ATmakeAppl(sym__2, term_w_12, n_9);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, n_9, term_x_14);
                          t = leq_0_0(t);
                          t = n_9;
                        }
                    }
                }
              else
                {
                  if(match_string(t, "kk"))
                    {
                      ATerm m_11 = NULL;
                      t = b_10;
                      if(match_cons(t, sym_ComponentTime_3))
                        {
                          ATerm p_15 = ATgetArgument(t, 0);
                          k_10 = ATgetArgument(t, 1);
                          {
                            ATerm q_15 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = k_10;
                      if(match_cons(t, sym_DayTime_3))
                        {
                          n_9 = ATgetArgument(t, 0);
                          {
                            ATerm r_15 = ATgetArgument(t, 1);
                          }
                          {
                            ATerm s_15 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = term_w_12;
                      m_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_9, term_w_12);
                      t = l_9(n_9, m_11, t);
                    }
                  else
                    {
                      if(match_string(t, "HH"))
                        {
                          t = b_10;
                          if(match_cons(t, sym_ComponentTime_3))
                            {
                              ATerm t_15 = ATgetArgument(t, 0);
                              k_10 = ATgetArgument(t, 1);
                              {
                                ATerm u_15 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = k_10;
                          if(match_cons(t, sym_DayTime_3))
                            {
                              n_9 = ATgetArgument(t, 0);
                              {
                                ATerm v_15 = ATgetArgument(t, 1);
                              }
                              {
                                ATerm w_15 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = n_9;
                        }
                      else
                        {
                          if(match_string(t, "DD"))
                            {
                              t = b_10;
                              if(match_cons(t, sym_ComponentTime_3))
                                {
                                  ATerm x_15 = ATgetArgument(t, 0);
                                  ATerm y_15 = ATgetArgument(t, 1);
                                  l_10 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = l_10;
                              if(match_cons(t, sym_Dupl_2))
                                {
                                  ATerm z_15 = ATgetArgument(t, 0);
                                  v_9 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = v_9;
                            }
                          else
                            {
                              if(match_string(t, "D"))
                                {
                                  t = b_10;
                                  if(match_cons(t, sym_ComponentTime_3))
                                    {
                                      ATerm a_16 = ATgetArgument(t, 0);
                                      ATerm b_16 = ATgetArgument(t, 1);
                                      l_10 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = l_10;
                                  if(match_cons(t, sym_Dupl_2))
                                    {
                                      ATerm c_16 = ATgetArgument(t, 0);
                                      v_9 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = v_9;
                                }
                              else
                                {
                                  if(match_string(t, "dd"))
                                    {
                                      t = b_10;
                                      if(match_cons(t, sym_ComponentTime_3))
                                        {
                                          d_10 = ATgetArgument(t, 0);
                                          {
                                            ATerm d_16 = ATgetArgument(t, 1);
                                          }
                                          {
                                            ATerm e_16 = ATgetArgument(t, 2);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      t = d_10;
                                      if(match_cons(t, sym_Date_3))
                                        {
                                          ATerm f_16 = ATgetArgument(t, 0);
                                          ATerm g_16 = ATgetArgument(t, 1);
                                          i_10 = ATgetArgument(t, 2);
                                        }
                                      else
                                        _fail(t);
                                      t = i_10;
                                    }
                                  else
                                    {
                                      if(match_string(t, "d"))
                                        {
                                          t = b_10;
                                          if(match_cons(t, sym_ComponentTime_3))
                                            {
                                              d_10 = ATgetArgument(t, 0);
                                              {
                                                ATerm h_16 = ATgetArgument(t, 1);
                                              }
                                              {
                                                ATerm i_16 = ATgetArgument(t, 2);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          t = d_10;
                                          if(match_cons(t, sym_Date_3))
                                            {
                                              ATerm j_16 = ATgetArgument(t, 0);
                                              ATerm k_16 = ATgetArgument(t, 1);
                                              i_10 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          t = i_10;
                                        }
                                      else
                                        {
                                          if(match_string(t, "MM"))
                                            {
                                              ATerm u_11 = NULL,v_11 = NULL;
                                              t = b_10;
                                              if(match_cons(t, sym_ComponentTime_3))
                                                {
                                                  d_10 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm l_16 = ATgetArgument(t, 1);
                                                  }
                                                  {
                                                    ATerm m_16 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = d_10;
                                              if(match_cons(t, sym_Date_3))
                                                {
                                                  ATerm q_16 = ATgetArgument(t, 0);
                                                  g_10 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm r_16 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = g_10;
                                              t = month2index_0_0(t);
                                              u_11 = t;
                                              t = term_w_12;
                                              v_11 = t;
                                              t = (ATerm) ATmakeAppl(sym__2, u_11, term_w_12);
                                              t = l_9(u_11, v_11, t);
                                            }
                                          else
                                            {
                                              if(match_string(t, "M"))
                                                {
                                                  ATerm x_11 = NULL,y_11 = NULL;
                                                  t = b_10;
                                                  if(match_cons(t, sym_ComponentTime_3))
                                                    {
                                                      d_10 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm t_16 = ATgetArgument(t, 1);
                                                      }
                                                      {
                                                        ATerm v_16 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = d_10;
                                                  if(match_cons(t, sym_Date_3))
                                                    {
                                                      ATerm w_16 = ATgetArgument(t, 0);
                                                      g_10 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm x_16 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = g_10;
                                                  t = month2index_0_0(t);
                                                  x_11 = t;
                                                  t = term_w_12;
                                                  y_11 = t;
                                                  t = (ATerm) ATmakeAppl(sym__2, x_11, term_w_12);
                                                  t = l_9(x_11, y_11, t);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "yy"))
                                                    {
                                                      ATerm a_12 = NULL;
                                                      t = b_10;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          d_10 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm y_16 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm b_17 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = d_10;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          f_10 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm u_17 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm v_17 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = term_x_17;
                                                      a_12 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, f_10, term_x_17);
                                                      t = s_8(f_10, a_12, t);
                                                    }
                                                  else
                                                    {
                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("yyyy", 0, ATtrue)))
                                                        _fail(t);
                                                      t = b_10;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          d_10 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm b_18 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm c_18 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = d_10;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          f_10 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm d_18 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm f_18 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = f_10;
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
static ATerm n_16 (ATerm y_13, ATerm z_13, ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,n_14 = NULL,o_14 = NULL;
  t = z_13;
  t = date_pattern_to_int_0_0(t);
  n_14 = t;
  t = SSL_int_to_string(n_14);
  c_14 = t;
  t = SSL_strlen(y_13);
  d_14 = t;
  t = term_g_18;
  o_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_18, c_14, d_14);
  t = r_8(o_14, c_14, d_14, t);
  return(t);
}
ATerm date_pattern_to_string_0_0 (ATerm t)
{
  ATerm p_14 = NULL,s_14 = NULL,w_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,c_15 = NULL,e_15 = NULL,h_15 = NULL;
  w_14 = t;
  if(match_cons(t, sym__2))
    {
      y_14 = ATgetArgument(t, 0);
      z_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_14;
  if(match_cons(t, sym_ComponentTime_3))
    {
      a_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
      h_15 = ATgetArgument(t, 2);
      t = h_15;
      {
        ATerm h_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Dupl_2))
              {
                s_14 = ATgetArgument(t, 0);
                {
                  ATerm j_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_18);
            t = e_15;
            {
              ATerm k_18 = t;
              int l_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      p_14 = ATgetArgument(t, 0);
                      {
                        ATerm m_18 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm o_18 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_18);
                  t = a_15;
                  {
                    ATerm p_18 = t;
                    int q_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm r_18 = ATgetArgument(t, 0);
                            c_15 = ATgetArgument(t, 1);
                            {
                              ATerm s_18 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(q_18);
                        t = y_14;
                        if(match_string(t, "a"))
                          {
                            ATerm t_18 = t;
                            int u_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = n_16(y_14, w_14, t);
                                LocalPopChoice(u_18);
                              }
                            else
                              {
                                t = t_18;
                                {
                                  ATerm v_18 = t;
                                  int w_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_x_14, p_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, p_14, term_b_15);
                                      t = leq_0_0(t);
                                      t = term_x_18;
                                      LocalPopChoice(w_18);
                                    }
                                  else
                                    {
                                      t = v_18;
                                      t = (ATerm) ATmakeAppl(sym__2, term_a_13, p_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, p_14, term_x_14);
                                      t = lt_0_0(t);
                                      t = term_z_18;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEEE"))
                              {
                                ATerm c_19 = t;
                                int d_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = n_16(y_14, w_14, t);
                                    LocalPopChoice(d_19);
                                  }
                                else
                                  {
                                    t = c_19;
                                    t = s_14;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm e_19 = t;
                                    int f_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = n_16(y_14, w_14, t);
                                        LocalPopChoice(f_19);
                                      }
                                    else
                                      {
                                        t = e_19;
                                        t = s_14;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    if(match_string(t, "MMMM"))
                                      {
                                        ATerm i_19 = t;
                                        int j_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = n_16(y_14, w_14, t);
                                            LocalPopChoice(j_19);
                                          }
                                        else
                                          {
                                            t = i_19;
                                            t = c_15;
                                            t = month2text_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_string(t, "MMM"))
                                          {
                                            ATerm k_19 = t;
                                            int p_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = n_16(y_14, w_14, t);
                                                LocalPopChoice(p_19);
                                              }
                                            else
                                              {
                                                t = k_19;
                                                t = c_15;
                                                t = month2abbr_0_0(t);
                                              }
                                          }
                                        else
                                          {
                                            t = n_16(y_14, w_14, t);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = p_18;
                        t = y_14;
                        if(match_string(t, "a"))
                          {
                            ATerm q_19 = t;
                            int r_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = n_16(y_14, w_14, t);
                                LocalPopChoice(r_19);
                              }
                            else
                              {
                                t = q_19;
                                {
                                  ATerm s_19 = t;
                                  int t_19 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_x_14, p_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, p_14, term_b_15);
                                      t = leq_0_0(t);
                                      t = term_x_18;
                                      LocalPopChoice(t_19);
                                    }
                                  else
                                    {
                                      t = s_19;
                                      t = (ATerm) ATmakeAppl(sym__2, term_a_13, p_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, p_14, term_x_14);
                                      t = lt_0_0(t);
                                      t = term_z_18;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEEE"))
                              {
                                ATerm u_19 = t;
                                int v_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = n_16(y_14, w_14, t);
                                    LocalPopChoice(v_19);
                                  }
                                else
                                  {
                                    t = u_19;
                                    t = s_14;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm w_19 = t;
                                    int x_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = n_16(y_14, w_14, t);
                                        LocalPopChoice(x_19);
                                      }
                                    else
                                      {
                                        t = w_19;
                                        t = s_14;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = n_16(y_14, w_14, t);
                                  }
                              }
                          }
                      }
                  }
                }
              else
                {
                  t = k_18;
                  t = a_15;
                  {
                    ATerm y_19 = t;
                    int z_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm a_20 = ATgetArgument(t, 0);
                            c_15 = ATgetArgument(t, 1);
                            {
                              ATerm b_20 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(z_19);
                        t = y_14;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm c_20 = t;
                            int d_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = n_16(y_14, w_14, t);
                                LocalPopChoice(d_20);
                              }
                            else
                              {
                                t = c_20;
                                t = s_14;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm e_20 = t;
                                int f_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = n_16(y_14, w_14, t);
                                    LocalPopChoice(f_20);
                                  }
                                else
                                  {
                                    t = e_20;
                                    t = s_14;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "MMMM"))
                                  {
                                    ATerm i_20 = t;
                                    int j_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = n_16(y_14, w_14, t);
                                        LocalPopChoice(j_20);
                                      }
                                    else
                                      {
                                        t = i_20;
                                        t = c_15;
                                        t = month2text_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    if(match_string(t, "MMM"))
                                      {
                                        ATerm k_20 = t;
                                        int l_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = n_16(y_14, w_14, t);
                                            LocalPopChoice(l_20);
                                          }
                                        else
                                          {
                                            t = k_20;
                                            t = c_15;
                                            t = month2abbr_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        t = n_16(y_14, w_14, t);
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = y_19;
                        t = y_14;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm m_20 = t;
                            int n_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = n_16(y_14, w_14, t);
                                LocalPopChoice(n_20);
                              }
                            else
                              {
                                t = m_20;
                                t = s_14;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm o_20 = t;
                                int p_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = n_16(y_14, w_14, t);
                                    LocalPopChoice(p_20);
                                  }
                                else
                                  {
                                    t = o_20;
                                    t = s_14;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = n_16(y_14, w_14, t);
                              }
                          }
                      }
                  }
                }
            }
          }
        else
          {
            t = h_18;
            t = e_15;
            {
              ATerm u_20 = t;
              int v_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      p_14 = ATgetArgument(t, 0);
                      {
                        ATerm w_20 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm x_20 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(v_20);
                  t = a_15;
                  {
                    ATerm y_20 = t;
                    int z_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm a_21 = ATgetArgument(t, 0);
                            c_15 = ATgetArgument(t, 1);
                            {
                              ATerm b_21 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(z_20);
                        t = y_14;
                        if(match_string(t, "a"))
                          {
                            ATerm c_21 = t;
                            int f_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = n_16(y_14, w_14, t);
                                LocalPopChoice(f_21);
                              }
                            else
                              {
                                t = c_21;
                                {
                                  ATerm g_21 = t;
                                  int j_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_x_14, p_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, p_14, term_b_15);
                                      t = leq_0_0(t);
                                      t = term_x_18;
                                      LocalPopChoice(j_21);
                                    }
                                  else
                                    {
                                      t = g_21;
                                      t = (ATerm) ATmakeAppl(sym__2, term_a_13, p_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, p_14, term_x_14);
                                      t = lt_0_0(t);
                                      t = term_z_18;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "MMMM"))
                              {
                                ATerm k_21 = t;
                                int l_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = n_16(y_14, w_14, t);
                                    LocalPopChoice(l_21);
                                  }
                                else
                                  {
                                    t = k_21;
                                    t = c_15;
                                    t = month2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "MMM"))
                                  {
                                    ATerm m_21 = t;
                                    int n_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = n_16(y_14, w_14, t);
                                        LocalPopChoice(n_21);
                                      }
                                    else
                                      {
                                        t = m_21;
                                        t = c_15;
                                        t = month2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = n_16(y_14, w_14, t);
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = y_20;
                        t = y_14;
                        if(match_string(t, "a"))
                          {
                            ATerm o_21 = t;
                            int p_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = n_16(y_14, w_14, t);
                                LocalPopChoice(p_21);
                              }
                            else
                              {
                                t = o_21;
                                {
                                  ATerm q_21 = t;
                                  int r_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_x_14, p_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, p_14, term_b_15);
                                      t = leq_0_0(t);
                                      t = term_x_18;
                                      LocalPopChoice(r_21);
                                    }
                                  else
                                    {
                                      t = q_21;
                                      t = (ATerm) ATmakeAppl(sym__2, term_a_13, p_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, p_14, term_x_14);
                                      t = lt_0_0(t);
                                      t = term_z_18;
                                    }
                                }
                              }
                          }
                        else
                          {
                            t = n_16(y_14, w_14, t);
                          }
                      }
                  }
                }
              else
                {
                  t = u_20;
                  t = a_15;
                  {
                    ATerm s_21 = t;
                    int t_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm w_21 = ATgetArgument(t, 0);
                            c_15 = ATgetArgument(t, 1);
                            {
                              ATerm x_21 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(t_21);
                        t = y_14;
                        if(match_string(t, "MMMM"))
                          {
                            ATerm z_21 = t;
                            int b_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = n_16(y_14, w_14, t);
                                LocalPopChoice(b_22);
                              }
                            else
                              {
                                t = z_21;
                                t = c_15;
                                t = month2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "MMM"))
                              {
                                ATerm c_22 = t;
                                int d_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = n_16(y_14, w_14, t);
                                    LocalPopChoice(d_22);
                                  }
                                else
                                  {
                                    t = c_22;
                                    t = c_15;
                                    t = month2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = n_16(y_14, w_14, t);
                              }
                          }
                      }
                    else
                      {
                        t = s_21;
                        t = y_14;
                        t = n_16(y_14, w_14, t);
                      }
                  }
                }
            }
          }
      }
    }
  else
    {
      t = y_14;
      t = n_16(y_14, w_14, t);
    }
  return(t);
}
static ATerm t_8 (ATerm n_51, ATerm m_51, ATerm t)
{
  ATerm o_16 = NULL;
  t = n_51;
  {
    static ATerm w_0 (ATerm t)
    {
      ATerm p_16 = NULL;
      p_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_16, m_51);
      {
        ATerm e_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = date_pattern_to_string_0_0(t);
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
            {
              ATerm s_16 = NULL,u_16 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, p_16, m_51);
              u_16 = t;
              t = SSL_explode_term(u_16);
              if(match_cons(t, sym__2))
                {
                  ATerm i_22 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_22) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm j_22 = ATgetArgument(t, 1);
                    if(((ATgetType(j_22) == AT_LIST) && !(ATisEmpty(j_22))))
                      {
                        s_16 = ATgetFirst((ATermList) j_22);
                        {
                          ATerm k_22 = (ATerm) ATgetNext((ATermList) j_22);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = s_16;
            }
          }
      }
      return(t);
    }
    t = map_1_0(w_0, t);
  }
  o_16 = t;
  t = SSL_concat_strings(o_16);
  return(t);
}
ATerm index2day_of_week_0_0 (ATerm t)
{
  if(match_int(t, 6))
    {
      t = term_l_22;
    }
  else
    {
      if(match_int(t, 5))
        {
          t = term_m_22;
        }
      else
        {
          if(match_int(t, 4))
            {
              t = term_n_22;
            }
          else
            {
              if(match_int(t, 3))
                {
                  t = term_o_22;
                }
              else
                {
                  if(match_int(t, 2))
                    {
                      t = term_p_22;
                    }
                  else
                    {
                      if(match_int(t, 1))
                        {
                          t = term_q_22;
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                            _fail(t);
                          t = term_s_22;
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
      t = term_t_22;
    }
  else
    {
      if(match_int(t, 10))
        {
          t = term_u_22;
        }
      else
        {
          if(match_int(t, 9))
            {
              t = term_v_22;
            }
          else
            {
              if(match_int(t, 8))
                {
                  t = term_w_22;
                }
              else
                {
                  if(match_int(t, 7))
                    {
                      t = term_x_22;
                    }
                  else
                    {
                      if(match_int(t, 6))
                        {
                          t = term_y_22;
                        }
                      else
                        {
                          if(match_int(t, 5))
                            {
                              t = term_z_22;
                            }
                          else
                            {
                              if(match_int(t, 4))
                                {
                                  t = term_a_23;
                                }
                              else
                                {
                                  if(match_int(t, 3))
                                    {
                                      t = term_b_23;
                                    }
                                  else
                                    {
                                      if(match_int(t, 2))
                                        {
                                          t = term_c_23;
                                        }
                                      else
                                        {
                                          if(match_int(t, 1))
                                            {
                                              t = term_d_23;
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                                                _fail(t);
                                              t = term_f_23;
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
static ATerm u_8 (ATerm m_48, ATerm l_48, ATerm k_48, ATerm j_48, ATerm i_48, ATerm h_48, ATerm n_48, ATerm o_48, ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL;
  t = i_48;
  t = index2month_0_0(t);
  z_16 = t;
  t = n_48;
  t = index2day_of_week_0_0(t);
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym_ComponentTime_3, (ATerm)ATmakeAppl(sym_Date_3, h_48, z_16, j_48), (ATerm)ATmakeAppl(sym_DayTime_3, k_48, l_48, m_48), (ATerm) ATmakeAppl(sym_Dupl_2, a_17, o_48));
  return(t);
}
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
  if(match_cons(t, sym__8))
    {
      c_17 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
      e_17 = ATgetArgument(t, 2);
      f_17 = ATgetArgument(t, 3);
      g_17 = ATgetArgument(t, 4);
      h_17 = ATgetArgument(t, 5);
      i_17 = ATgetArgument(t, 6);
      j_17 = ATgetArgument(t, 7);
    }
  else
    _fail(t);
  t = u_8(c_17, d_17, e_17, f_17, g_17, h_17, i_17, j_17, t);
  return(t);
}
static ATerm v_8 (ATerm e_48, ATerm t)
{
  t = SSL_epoch2localtime(e_48);
  t = prim_tuple_to_ComponentTime_0_0(t);
  return(t);
}
ATerm now_epoch_time_0_0 (ATerm t)
{
  ATerm k_17 = NULL;
  t = SSL_now_epoch_time();
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym_EpochTime_1, k_17);
  return(t);
}
ATerm now_local_time_0_0 (ATerm t)
{
  ATerm l_17 = NULL;
  t = now_epoch_time_0_0(t);
  if(match_cons(t, sym_EpochTime_1))
    {
      l_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_8(l_17, t);
  return(t);
}
ATerm create_time_0_0 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL;
  t = term_q_7;
  t = now_local_time_0_0(t);
  m_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_23), term_v_23), term_x_23), term_v_23), term_n_23), term_h_23), term_k_23), term_h_23), term_j_23), term_h_23), term_i_23), term_h_23), term_g_23);
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_23), term_v_23), term_x_23), term_v_23), term_n_23), term_h_23), term_k_23), term_h_23), term_j_23), term_h_23), term_i_23), term_h_23), term_g_23), m_17);
  t = t_8(n_17, m_17, t);
  return(t);
}
ATerm get_title_0_0 (ATerm t)
{
  ATerm a_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_24;
      t = get_config_0_0(t);
      LocalPopChoice(c_24);
    }
  else
    {
      t = a_24;
      {
        ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
        t = term_e_24;
        p_17 = t;
        t = (ATerm) ATinsert(ATempty, term_g_24);
        q_17 = t;
        t = SSL_printnl(p_17, q_17);
        t = term_w_12;
        o_17 = t;
        t = SSL_exit(o_17);
        t = (ATerm) ATinsert(ATempty, term_g_24);
      }
    }
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL;
  t = get_title_0_0(t);
  s_17 = t;
  t = term_q_7;
  t = create_time_0_0(t);
  r_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_24), term_x_24), term_u_24), term_t_24), s_17), term_s_24), term_r_24), term_q_24), term_p_24), term_o_24), term_n_24), term_l_24), r_17), term_j_24), term_h_24);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_10;
      t = get_config_0_0(t);
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      t = term_h_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm l_96 (ATerm), ATerm t)
{
  static ATerm y_0 (ATerm t)
  {
    ATerm i_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_17 = NULL;
        t = term_m_10;
        t = get_config_0_0(t);
        t_17 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, t_17);
        LocalPopChoice(m_25);
      }
    else
      {
        t = i_25;
        t = term_e_10;
      }
    t = l_96(t);
    t = copy_to_1_0(b_1, t);
    return(t);
  }
  t = xtc_temp_files_1_0(y_0, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm w_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  a_18 = t;
  t = create_header_0_0(t);
  t = print_to_0_0(t);
  w_17 = t;
  t = a_18;
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_18 = ATgetArgument(t, 0);
            {
              ATerm f_1 = NULL,b_0 = NULL;
              t = SSLgetAnnotations(a_18);
              f_1 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_18);
              b_0 = t;
              t = SSLsetAnnotations(b_0, f_1);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_18;
          }
        LocalPopChoice(o_25);
        t = xtc_transform_file_2_0(d_1, pass_verbose_0_0, t);
      }
    else
      {
        t = n_25;
        t = xtc_transform_term_2_0(h_1, pass_verbose_0_0, t);
      }
  }
  y_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_25), term_s_25);
  t = print_to_0_0(t);
  z_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_17), y_17), w_17);
  t = xtc_cat_0_0(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_w_25;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_w_25;
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  t = xtc_io_1_0(c_1, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_18 = NULL;
      n_18 = t;
      t = SSL_is_string(n_18);
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
      {
        ATerm c_26 = t;
        int d_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_1, t);
            LocalPopChoice(d_26);
          }
        else
          {
            t = c_26;
            {
              ATerm y_18 = NULL,a_19 = NULL,b_19 = NULL;
              y_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_19 = ATgetArgument(t, 0);
                  t = a_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_19 = ATgetArgument(t, 0);
                      t = a_19;
                      {
                        ATerm e_26 = t;
                        int f_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(f_26);
                          }
                        else
                          {
                            t = e_26;
                            t = debug_1_0(j_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_19 = NULL,h_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_19 = ATgetArgument(t, 0);
                          b_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_19;
                      t = eval_config_0_0(t);
                      g_19 = t;
                      t = b_19;
                      t = eval_config_0_0(t);
                      h_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_19, h_19);
                      t = o_9(g_19, h_19, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL;
  l_19 = t;
  t = term_g_26;
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_26, l_19);
  t = p_9(m_19, l_19, t);
  {
    ATerm i_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_19 = NULL,o_19 = NULL;
        t = eval_config_0_0(t);
        n_19 = t;
        t = term_g_26;
        o_19 = t;
        t = SSL_table_put(o_19, l_19, n_19);
        t = n_19;
        LocalPopChoice(k_26);
      }
    else
      {
        t = i_26;
      }
  }
  return(t);
}
static ATerm j_9 (ATerm q_34, ATerm r_34, ATerm t)
{
  t = SSL_copy(q_34, r_34);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL;
  g_20 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2 = NULL;
        t = g_20;
        t = r_0(t);
        r_2 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = r_2;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = r_2;
          }
        t = (ATerm) ATmakeAppl(sym__2, h_20, r_2);
        t = j_9(h_20, r_2, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_20);
        LocalPopChoice(n_26);
      }
    else
      {
        t = l_26;
        {
          ATerm o_26 = t;
          int r_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_3 = NULL;
              t = g_20;
              t = r_0(t);
              d_3 = t;
              {
                ATerm t_26 = t;
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
                            if((h_20 != t))
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
                    t = t_26;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, h_20, d_3);
              t = j_9(h_20, d_3, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_20);
              LocalPopChoice(r_26);
            }
          else
            {
              t = o_26;
              t = g_20;
              t = r_0(t);
              if((h_20 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_20);
            }
        }
      }
  }
  return(t);
}
static ATerm w_8 (ATerm b_25, ATerm c_25, ATerm t)
{
  ATerm u_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(b_25, c_25);
      LocalPopChoice(x_26);
    }
  else
    {
      t = u_26;
      t = SSL_subtr(b_25, c_25);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
  t = term_y_26;
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        t = term_w_12;
      }
  }
  r_20 = t;
  t = term_w_12;
  t_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_20, term_w_12);
  t = w_8(r_20, t_20, t);
  s_20 = t;
  t = SSL_int_to_string(s_20);
  q_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_20), term_y_26);
  return(t);
}
static ATerm x_8 (ATerm s_37, ATerm t_37, ATerm t)
{
  t = SSL_execvp(s_37, t_37);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,y_21 = NULL,a_22 = NULL;
  u_21 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      v_21 = ATgetArgument(t, 0);
      {
        ATerm x_3 = NULL,y_3 = NULL;
        t = SSL_int_to_string(v_21);
        x_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_27), x_3), term_d_27);
        y_3 = t;
        t = SSL_concat_strings(y_3);
      }
    }
  else
    {
      ATerm s_4 = NULL,t_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          v_21 = ATgetArgument(t, 0);
          y_21 = ATgetArgument(t, 1);
          a_22 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_21);
      s_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_22), term_g_27), s_4), term_f_27), v_21);
      t_4 = t;
      t = SSL_concat_strings(t_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm a_72 (ATerm), ATerm t)
{
  ATerm g_22 = NULL;
  static ATerm k_1 (ATerm t)
  {
    t = a_72(t);
    if(((g_22 != NULL) && (g_22 != t)))
      _fail(t);
    else
      g_22 = t;
    return(t);
  }
  t = fetch_1_0(k_1, t);
  t = not_null(g_22);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm h_22 = NULL;
  h_22 = t;
  {
    ATerm h_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm l_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm l_27 = ATgetArgument(t, 0);
              if((h_22 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm r_27 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_35), term_e_35), term_o_34), term_k_34), term_c_34), term_r_33), term_k_33), term_b_33), term_y_32), term_t_32), term_m_32), term_i_32), term_e_32), term_a_32), term_t_31), term_q_31), term_k_31), term_y_30), term_v_30), term_g_30), term_b_30), term_x_29), term_p_29), term_z_28), term_w_28), term_q_28), term_j_28), term_a_28);
        t = fetch_elem_1_0(l_1, t);
        LocalPopChoice(k_27);
      }
    else
      {
        t = h_27;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, h_22);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm r_22 = NULL,e_23 = NULL;
  r_22 = t;
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_35 = ATgetArgument(t, 0);
            e_23 = ATgetArgument(t, 1);
            {
              ATerm m_35 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_35);
        {
          ATerm n_35 = t;
          int o_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_4 = NULL,f_5 = NULL,g_5 = NULL;
              t = e_23;
              {
                ATerm p_35 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_35;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              z_4 = t;
              t = term_e_24;
              f_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, z_4), term_q_35);
              g_5 = t;
              t = SSL_printnl(f_5, g_5);
              t = (ATerm) ATmakeAppl(sym__2, term_e_24, (ATerm) ATinsert(ATinsert(ATempty, z_4), term_q_35));
              LocalPopChoice(o_35);
            }
          else
            {
              t = n_35;
              t = r_22;
            }
        }
      }
    else
      {
        t = j_35;
        t = r_22;
      }
  }
  t = r_22;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm r_82 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL;
  m_23 = t;
  t = fork_0_0(t);
  l_23 = t;
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = m_23;
        t = r_82(t);
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
        t = SSL_waitpid(l_23);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm t_35 = ATgetArgument(t, 0);
            if(((ATgetType(t_35) != AT_INT) || (ATgetInt((ATermInt) t_35) != 0)))
              _fail(t);
            {
              ATerm u_35 = ATgetArgument(t, 1);
            }
            {
              ATerm v_35 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = m_23;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm k_83 (ATerm), ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
  o_23 = t;
  t = k_83(t);
  p_23 = t;
  t = term_e_24;
  q_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_23), p_23);
  r_23 = t;
  t = SSL_printnl(q_23, r_23);
  t = o_23;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm s_23 = NULL;
  static ATerm m_1 (ATerm t)
  {
    ATerm t_23 = NULL,u_23 = NULL;
    t_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_23), t_23);
    t = p_9(not_null(s_23), t_23, t);
    u_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_23, u_23);
    return(t);
  }
  if(((s_23 != NULL) && (s_23 != t)))
    _fail(t);
  else
    s_23 = t;
  t = SSL_table_keys(s_23);
  t = map_1_0(m_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm a_95 (ATerm), ATerm t)
{
  ATerm w_23 = NULL;
  w_23 = t;
  {
    ATerm w_35 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_23 = NULL;
        t = term_y_26;
        t = get_config_0_0(t);
        y_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_23, term_l_13);
        t = geq_0_0(t);
        t = w_23;
        t = a_95(t);
        LocalPopChoice(b_36);
      }
    else
      {
        t = w_35;
        t = w_23;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm z_94 (ATerm), ATerm t)
{
  ATerm b_24 = NULL;
  b_24 = t;
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_24 = NULL;
        t = term_y_26;
        t = get_config_0_0(t);
        f_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_24, term_n_13);
        t = geq_0_0(t);
        t = b_24;
        t = z_94(t);
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
        t = b_24;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm b_95 (ATerm), ATerm t)
{
  ATerm i_24 = NULL;
  i_24 = t;
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_24 = NULL;
        t = term_y_26;
        t = get_config_0_0(t);
        k_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_24, term_j_13);
        t = geq_0_0(t);
        t = i_24;
        t = b_95(t);
        LocalPopChoice(h_36);
      }
    else
      {
        t = g_36;
        t = i_24;
      }
  }
  return(t);
}
static ATerm a_9 (ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm i_21, ATerm h_21, ATerm t)
{
  t = w_75(t);
  {
    static ATerm n_1 (ATerm t)
    {
      ATerm m_24 = NULL;
      m_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_21, m_24);
      t = v_75(t);
      return(t);
    }
    t = fetch_1_0(n_1, t);
  }
  t = h_21;
  return(t);
}
static ATerm b_9 (ATerm s_75 (ATerm), ATerm e_21, ATerm d_21, ATerm t)
{
  static ATerm g_25 (ATerm t)
  {
    ATerm z_24 = NULL,a_25 = NULL,d_25 = NULL;
    z_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_25 = ATgetFirst((ATermList) t);
            d_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_36 = t;
          int m_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_24;
              {
                static ATerm o_1 (ATerm t)
                {
                  t = d_21;
                  return(t);
                }
                t = a_9(s_75, o_1, a_25, d_25, t);
              }
              t = g_25(t);
              LocalPopChoice(m_36);
            }
          else
            {
              t = j_36;
              {
                ATerm p_5 = NULL,u_5 = NULL,a_1 = NULL;
                t = SSLgetAnnotations(z_24);
                p_5 = t;
                t = d_25;
                t = g_25(t);
                u_5 = t;
                t = (ATerm) ATinsert(CheckATermList(u_5), a_25);
                a_1 = t;
                t = SSLsetAnnotations(a_1, p_5);
              }
            }
        }
      }
    return(t);
  }
  t = e_21;
  t = g_25(t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm p_25 = NULL;
  if(match_cons(t, sym__2))
    {
      p_25 = ATgetArgument(t, 0);
      if((p_25 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_9 (ATerm k_28, ATerm l_28, ATerm m_28, ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_28, l_28);
  {
    ATerm n_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_36 = ATgetArgument(t, 0);
            ATerm s_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_28, l_28);
        t = p_9(k_28, l_28, t);
        LocalPopChoice(p_36);
      }
    else
      {
        t = n_36;
        t = (ATerm) ATempty;
      }
  }
  l_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_25, m_28);
  t = b_9(p_1, l_25, m_28, t);
  k_25 = t;
  t = SSL_table_put(k_28, l_28, k_25);
  t = j_25;
  return(t);
}
static ATerm d_9 (ATerm a_80 (ATerm), ATerm u_28, ATerm t_28, ATerm t)
{
  static ATerm q_1 (ATerm t)
  {
    ATerm q_25 = NULL,r_25 = NULL;
    if(match_cons(t, sym__2))
      {
        q_25 = ATgetArgument(t, 0);
        r_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, u_28, q_25, r_25);
    t = a_80(t);
    return(t);
  }
  t = t_28;
  t = map_1_0(q_1, t);
  return(t);
}
static ATerm h_9 (ATerm w_13, ATerm x_13, ATerm t)
{
  t = SSL_access(w_13, x_13);
  return(t);
}
static ATerm s_26 (ATerm m_26, ATerm t)
{
  t = SSL_fclose(m_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  q_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_26 = ATgetArgument(t, 0);
      {
        ATerm u_36 = t;
        int v_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_26);
            LocalPopChoice(v_36);
          }
        else
          {
            t = u_36;
            t = s_26(q_26, t);
          }
      }
    }
  else
    {
      t = s_26(q_26, t);
    }
  return(t);
}
static ATerm e_9 (ATerm v_38, ATerm t)
{
  t = SSL_read_term_from_stream(v_38);
  return(t);
}
static ATerm f_9 (ATerm f_14, ATerm g_14, ATerm t)
{
  ATerm v_26 = NULL;
  t = SSL_fopen(f_14, g_14);
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_26);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_26 = NULL;
  t = SSL_stdin_stream();
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_26);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_26 = NULL;
  t = SSL_stdout_stream();
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_26);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_27 = NULL;
  t = SSL_stderr_stream();
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_27);
  return(t);
}
static ATerm d_29 (ATerm i_27, ATerm t)
{
  ATerm j_27 = NULL;
  t = SSL_explode_term(i_27);
  if(match_cons(t, sym__2))
    {
      ATerm x_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_36 = ATgetArgument(t, 1);
        if(((ATgetType(z_36) == AT_LIST) && !(ATisEmpty(z_36))))
          {
            j_27 = ATgetFirst((ATermList) z_36);
            {
              ATerm c_37 = (ATerm) ATgetNext((ATermList) z_36);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_27;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_27;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_27;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_27;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_29 (ATerm p_27, ATerm q_27, ATerm u_27, ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,b_28 = NULL,r_1 = NULL;
  t = SSLgetAnnotations(u_27);
  x_27 = t;
  t = p_27;
  if(match_cons(t, sym_Path_1))
    {
      b_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_28, q_27);
  r_1 = t;
  t = SSLsetAnnotations(r_1, x_27);
  if(match_cons(t, sym__2))
    {
      v_27 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(v_27, w_27, t);
  return(t);
}
static ATerm h_29 (ATerm d_28, ATerm e_28, ATerm f_28, ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,p_28 = NULL,s_28 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(f_28);
  p_28 = t;
  t = SSL_is_string(d_28);
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_28, e_28);
  t_1 = t;
  t = SSLsetAnnotations(t_1, p_28);
  if(match_cons(t, sym__2))
    {
      g_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(g_28, h_28, t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  a_29 = t;
  if(match_cons(t, sym__2))
    {
      b_29 = ATgetArgument(t, 0);
      c_29 = ATgetArgument(t, 1);
      {
        ATerm d_37 = t;
        int g_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_29(a_29, t);
            LocalPopChoice(g_37);
          }
        else
          {
            t = d_37;
            {
              ATerm k_37 = t;
              int o_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_29(b_29, c_29, a_29, t);
                  LocalPopChoice(o_37);
                }
              else
                {
                  t = k_37;
                  t = h_29(b_29, c_29, a_29, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_29(a_29, t);
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_u_37;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_29 = NULL,k_29 = NULL,l_29 = NULL;
  ATerm w_37 = t;
  int x_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_29 = NULL;
      m_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_29, term_y_37);
      t = g_9(t);
      LocalPopChoice(x_37);
    }
  else
    {
      t = w_37;
      t = debug_1_0(s_1, t);
      _fail(t);
    }
  k_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(l_29, t);
  i_29 = t;
  t = k_29;
  t = fclose_0_0(t);
  t = i_29;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_z_37;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_a_38;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm b_38 = t;
  int c_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_29 = NULL,s_29 = NULL;
      r_29 = t;
      t = (ATerm) ATinsert(ATempty, term_d_38);
      s_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_29, (ATerm) ATinsert(ATempty, term_d_38));
      t = h_9(r_29, s_29, t);
      LocalPopChoice(c_38);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = b_38;
      {
        ATerm f_38 = t;
        int h_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_38 = t;
            if((PushChoice() == 0))
              {
                ATerm u_29 = NULL,w_29 = NULL;
                u_29 = t;
                t = (ATerm) ATinsert(ATempty, term_k_8);
                w_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, u_29, (ATerm) ATinsert(ATempty, term_k_8));
                t = h_9(u_29, w_29, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_38;
              }
            t = debug_1_0(w_1, t);
            LocalPopChoice(h_38);
          }
        else
          {
            t = f_38;
            t = debug_1_0(x_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_j_38;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_s_38;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm u_30 = NULL,z_30 = NULL,a_31 = NULL;
  u_30 = t;
  t = term_e_24;
  z_30 = t;
  t = (ATerm) ATinsert(ATempty, term_t_38);
  a_31 = t;
  t = SSL_printnl(z_30, a_31);
  t = u_30;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  if(match_cons(t, sym__3))
    {
      b_31 = ATgetArgument(t, 0);
      c_31 = ATgetArgument(t, 1);
      d_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_9(b_31, c_31, d_31, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm e_31 = NULL,h_31 = NULL,i_31 = NULL;
  e_31 = t;
  t = term_e_24;
  h_31 = t;
  t = (ATerm) ATinsert(ATempty, term_u_38);
  i_31 = t;
  t = SSL_printnl(h_31, i_31);
  t = e_31;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm j_31 = NULL,n_31 = NULL,p_31 = NULL;
  j_31 = t;
  t = term_e_24;
  n_31 = t;
  t = (ATerm) ATinsert(ATempty, term_t_38);
  p_31 = t;
  t = SSL_printnl(n_31, p_31);
  t = j_31;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm y_29 = NULL,f_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,p_30 = NULL,q_30 = NULL;
  y_29 = t;
  t = if_verbose5_1_0(y_1, t);
  {
    ATerm w_38 = t;
    if((PushChoice() == 0))
      {
        ATerm r_30 = NULL,t_30 = NULL;
        t = term_b_39;
        r_30 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, y_29);
        t_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_39, (ATerm) ATmakeAppl(sym_Imported_1, y_29));
        t = p_9(r_30, t_30, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_38;
      }
  }
  h_30 = t;
  t = term_b_39;
  m_30 = t;
  t = term_e_39;
  p_30 = t;
  t = (ATerm) ATinsert(ATempty, y_29);
  q_30 = t;
  t = SSL_table_put(m_30, p_30, q_30);
  t = h_30;
  t = if_verbose4_1_0(a_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(f_2, t);
  f_30 = t;
  t = term_b_39;
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_39, f_30);
  t = d_9(g_2, l_30, f_30, t);
  t = if_verbose6_1_0(i_2, t);
  t = term_b_39;
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, y_29);
  j_30 = t;
  t = (ATerm) ATempty;
  k_30 = t;
  t = SSL_table_put(i_30, j_30, k_30);
  t = (ATerm) ATmakeAppl(sym__3, term_b_39, (ATerm)ATmakeAppl(sym_Imported_1, y_29), (ATerm) ATempty);
  t = if_verbose4_1_0(o_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  ATerm s_32 = NULL,u_32 = NULL,v_32 = NULL;
  s_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_32;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_32 = ATgetFirst((ATermList) t);
          v_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm f_39 = t;
        int g_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_6 = NULL,a_7 = NULL,b_7 = NULL,c_8 = NULL;
            t = SSLgetAnnotations(s_32);
            x_6 = t;
            t = u_32;
            t = b_80(t);
            a_7 = t;
            t = v_32;
            t = filter_1_0(b_80, t);
            b_7 = t;
            t = (ATerm) ATinsert(CheckATermList(b_7), a_7);
            c_8 = t;
            t = SSLsetAnnotations(c_8, x_6);
            LocalPopChoice(g_39);
          }
        else
          {
            t = f_39;
            t = v_32;
            t = filter_1_0(b_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm t)
{
  static ATerm c_33 (ATerm t)
  {
    ATerm h_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_69(t);
        t = c_33(t);
        LocalPopChoice(i_39);
      }
    else
      {
        t = h_39;
        t = u_69(t);
      }
    return(t);
  }
  t = c_33(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm j_39 = t;
  int k_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_39;
      t = get_config_0_0(t);
      LocalPopChoice(k_39);
    }
  else
    {
      t = j_39;
      {
        ATerm m_39 = t;
        int o_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_33 = NULL;
            t = term_p_39;
            f_33 = t;
            t = SSL_getenv(f_33);
            LocalPopChoice(o_39);
          }
        else
          {
            t = m_39;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = debug_1_0(t_2, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_s_39;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  t = term_b_39;
  n_33 = t;
  t = term_t_39;
  o_33 = t;
  t = term_u_39;
  t = p_9(n_33, o_33, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm v_39 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_39;
      }
  }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_w_39;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm h_33 = NULL;
  t = if_verbose5_1_0(s_2, t);
  h_33 = t;
  {
    ATerm x_39 = t;
    int y_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_33 = NULL,j_33 = NULL;
        t = term_b_39;
        i_33 = t;
        t = term_e_39;
        j_33 = t;
        t = term_b_40;
        t = p_9(i_33, j_33, t);
        LocalPopChoice(y_39);
      }
    else
      {
        t = x_39;
        {
          ATerm m_33 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          m_33 = t;
          t = repeat_2_0(v_2, _id, t);
          t = m_33;
        }
      }
  }
  t = h_33;
  t = if_verbose5_1_0(w_2, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = debug_1_0(c_3, t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_c_40;
  return(t);
}
static ATerm v_34 (ATerm t_33, ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
  t = term_b_39;
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, t_33);
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_39, (ATerm) ATmakeAppl(sym_Tool_1, t_33));
  t = p_9(w_33, x_33, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_40 = ATgetFirst((ATermList) t);
      if(match_cons(e_40, sym__2))
        {
          ATerm g_40 = ATgetArgument(e_40, 0);
          v_33 = ATgetArgument(e_40, 1);
        }
      else
        _fail(t);
      {
        ATerm f_40 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_33;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_c_40;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_b_39;
  t = table_getlist_0_0(t);
  t = debug_1_0(q_3, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_h_40;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm j_40 = t;
  int o_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_33 = NULL,a_34 = NULL,b_34 = NULL;
      t = if_verbose5_1_0(a_3, t);
      t = xtc_load_0_0(t);
      b_34 = t;
      if(match_cons(t, sym__2))
        {
          y_33 = ATgetArgument(t, 0);
          a_34 = ATgetArgument(t, 1);
          {
            ATerm p_40 = t;
            int q_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_34 = NULL,f_34 = NULL,i_34 = NULL;
                t = term_b_39;
                f_34 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, y_33);
                i_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_b_39, (ATerm) ATmakeAppl(sym_Tool_1, y_33));
                t = p_9(f_34, i_34, t);
                {
                  static ATerm e_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((a_34 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((e_34 != NULL) && (e_34 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_34 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_3, t);
                }
                t = not_null(e_34);
                LocalPopChoice(q_40);
              }
            else
              {
                t = p_40;
                t = v_34(b_34, t);
              }
          }
        }
      else
        {
          t = v_34(b_34, t);
        }
      t = if_verbose5_1_0(f_3, t);
      LocalPopChoice(o_40);
    }
  else
    {
      t = j_40;
      {
        ATerm u_34 = NULL,i_7 = NULL,j_7 = NULL;
        u_34 = t;
        t = term_e_24;
        i_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_40), u_34), term_r_40);
        j_7 = t;
        t = SSL_printnl(i_7, j_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_40), u_34), term_r_40);
        t = if_verbose5_1_0(p_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm y_96 (ATerm), ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL;
  y_34 = t;
  t = y_96(t);
  t = xtc_find_0_0(t);
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_34, y_34);
  {
    static ATerm r_3 (ATerm t)
    {
      ATerm z_34 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, x_34, y_34);
      t = x_8(x_34, y_34, t);
      t = term_t_40;
      z_34 = t;
      t = SSL_exit(z_34);
      return(t);
    }
    t = fork_and_wait_1_0(r_3, t);
  }
  t = y_34;
  return(t);
}
ATerm at_end_1_0 (ATerm e_72 (ATerm), ATerm t)
{
  static ATerm a_36 (ATerm t)
  {
    ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
    z_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_35 = ATgetFirst((ATermList) t);
        y_35 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_7 = NULL,r_7 = NULL,i_13 = NULL;
          t = SSLgetAnnotations(z_35);
          o_7 = t;
          t = y_35;
          t = a_36(t);
          r_7 = t;
          t = (ATerm) ATinsert(CheckATermList(r_7), x_35);
          i_13 = t;
          t = SSLsetAnnotations(i_13, o_7);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_35;
        t = e_72(t);
      }
    return(t);
  }
  t = a_36(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
  b_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_35;
    }
  else
    {
      static ATerm s_3 (ATerm t)
      {
        t = not_null(d_35);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_35 = ATgetFirst((ATermList) t);
          if(((d_35 != NULL) && (d_35 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_35;
      t = at_end_1_0(s_3, t);
    }
  return(t);
}
static ATerm o_36 (ATerm e_36, ATerm t)
{
  ATerm f_36 = NULL;
  t = SSL_explode_term(e_36);
  if(match_cons(t, sym__2))
    {
      ATerm b_41 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_41) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_36;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_36 = NULL,k_36 = NULL,l_36 = NULL;
  l_36 = t;
  if(match_cons(t, sym__2))
    {
      i_36 = ATgetArgument(t, 0);
      k_36 = ATgetArgument(t, 1);
      {
        ATerm c_41 = t;
        int d_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_3 (ATerm t)
            {
              t = k_36;
              return(t);
            }
            t = i_36;
            t = at_end_1_0(u_3, t);
            LocalPopChoice(d_41);
          }
        else
          {
            t = c_41;
            t = o_36(l_36, t);
          }
      }
    }
  else
    {
      t = o_36(l_36, t);
    }
  return(t);
}
static ATerm i_9 (ATerm s_79 (ATerm), ATerm j_26, ATerm h_26, ATerm t)
{
  ATerm q_36 = NULL,t_36 = NULL,w_36 = NULL,y_36 = NULL,a_37 = NULL,b_37 = NULL;
  y_36 = t;
  t = s_79(t);
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_36, j_26, h_26);
  t = q_9(q_36, j_26, h_26, t);
  {
    ATerm f_41 = t;
    int g_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_37 = NULL;
        t = term_h_41;
        e_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_36, term_h_41);
        t = p_9(q_36, e_37, t);
        LocalPopChoice(g_41);
      }
    else
      {
        t = f_41;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_36 = ATgetFirst((ATermList) t);
      w_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_h_41;
  a_37 = t;
  t = (ATerm) ATinsert(CheckATermList(w_36), (ATerm) ATinsert(CheckATermList(t_36), j_26));
  b_37 = t;
  t = SSL_table_put(q_36, a_37, b_37);
  t = y_36;
  return(t);
}
static ATerm o_9 (ATerm g_34, ATerm h_34, ATerm t)
{
  t = SSL_strcat(g_34, h_34);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_m_8;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm f_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,p_37 = NULL;
  t = P__tmpdir_0_0(t);
  j_37 = t;
  t = term_m_41;
  p_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_37, term_m_41);
  t = o_9(j_37, p_37, t);
  m_37 = t;
  t = term_v_41;
  n_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_37, term_v_41);
  t = o_9(m_37, n_37, t);
  l_37 = t;
  t = SSL_mkstemp(l_37);
  if(match_cons(t, sym__2))
    {
      h_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_q_7;
  i_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_37, term_q_7);
  t = i_9(v_3, h_37, i_37, t);
  t = SSL_close(f_37);
  t = h_37;
  return(t);
}
ATerm xtc_generate_2_0 (ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL;
  t = term_q_7;
  t = xtc_new_file_0_0(t);
  q_37 = t;
  t = d_96(t);
  r_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_37, (ATerm) ATinsert(ATinsert(ATempty, q_37), term_j_10));
  t = conc_0_0(t);
  t = xtc_command_1_0(c_96, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_37);
  return(t);
}
static ATerm k_9 (ATerm s_27, ATerm t_27, ATerm t)
{
  ATerm v_37 = NULL,e_38 = NULL;
  e_38 = t;
  {
    ATerm w_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_27, t_27);
        t = p_9(s_27, t_27, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_42 = ATgetFirst((ATermList) t);
            v_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_42);
        t = SSL_table_put(s_27, t_27, v_37);
        t = (ATerm) ATmakeAppl(sym__3, s_27, t_27, v_37);
      }
    else
      {
        t = w_41;
        t = SSL_table_remove(s_27, t_27);
        t = (ATerm) ATmakeAppl(sym__2, s_27, t_27);
      }
  }
  t = e_38;
  return(t);
}
ATerm end_scope_1_0 (ATerm p_79 (ATerm), ATerm t)
{
  ATerm g_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
  m_38 = t;
  t = p_79(t);
  l_38 = t;
  {
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_38 = NULL;
        t = term_h_41;
        o_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_38, term_h_41);
        t = p_9(l_38, o_38, t);
        LocalPopChoice(g_42);
      }
    else
      {
        t = f_42;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_38 = ATgetFirst((ATermList) t);
      g_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_h_41;
  n_38 = t;
  t = SSL_table_put(l_38, n_38, g_38);
  t = k_38;
  {
    static ATerm z_3 (ATerm t)
    {
      ATerm r_38 = NULL;
      r_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_38, r_38);
      t = k_9(l_38, r_38, t);
      return(t);
    }
    t = map_1_0(z_3, t);
  }
  t = m_38;
  return(t);
}
ATerm restore_always_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm t)
{
  ATerm m_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_69(t);
      t = p_69(t);
      LocalPopChoice(q_42);
    }
  else
    {
      t = m_42;
      t = p_69(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_79 (ATerm), ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,c_39 = NULL,d_39 = NULL;
  z_38 = t;
  t = o_79(t);
  y_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_38, term_h_41);
  {
    ATerm t_42 = t;
    int u_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_39 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_42 = ATgetArgument(t, 0);
            ATerm z_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_41;
        n_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_38, term_h_41);
        t = p_9(y_38, n_39, t);
        LocalPopChoice(u_42);
      }
    else
      {
        t = t_42;
        t = (ATerm) ATempty;
      }
  }
  a_39 = t;
  t = term_h_41;
  c_39 = t;
  t = (ATerm) ATinsert(CheckATermList(a_39), (ATerm) ATempty);
  d_39 = t;
  t = SSL_table_put(y_38, c_39, d_39);
  t = z_38;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_m_8;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm d_40 = NULL;
  d_40 = t;
  {
    ATerm a_43 = t;
    int b_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(d_40);
        LocalPopChoice(b_43);
      }
    else
      {
        t = a_43;
        t = d_40;
      }
  }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_m_8;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm k_96 (ATerm), ATerm t)
{
  ATerm q_39 = NULL;
  static ATerm c_4 (ATerm t)
  {
    ATerm r_39 = NULL;
    r_39 = t;
    {
      ATerm c_43 = t;
      int d_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_39 = NULL,a_40 = NULL;
          t = term_m_8;
          z_39 = t;
          t = term_h_41;
          a_40 = t;
          t = term_e_43;
          t = p_9(z_39, a_40, t);
          LocalPopChoice(d_43);
        }
      else
        {
          t = c_43;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((q_39 != NULL) && (q_39 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          q_39 = ATgetFirst((ATermList) t);
        {
          ATerm f_43 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = q_39;
    t = map_1_0(i_4, t);
    t = r_39;
    t = end_scope_1_0(l_4, t);
    return(t);
  }
  t = begin_scope_1_0(a_4, t);
  t = restore_always_2_0(k_96, c_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
  i_40 = t;
  t = term_q_7;
  t = whoami_0_0(t);
  k_40 = t;
  t = term_e_24;
  m_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_43), k_40), term_g_43);
  n_40 = t;
  t = SSL_printnl(m_40, n_40);
  t = term_w_12;
  l_40 = t;
  t = SSL_exit(l_40);
  t = i_40;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
      t = term_q_7;
      t = p_0(t);
      y_40 = t;
      t = term_j_43;
      z_40 = t;
      t = term_k_43;
      a_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_43, term_k_43, y_40);
      t = q_9(z_40, a_41, y_40, t);
      _fail(t);
    }
  else
    {
      ATerm e_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_40 = ATgetFirst((ATermList) t);
          v_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_40;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_40 = ATgetFirst((ATermList) t);
          x_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_40;
      t = n_0(t);
      t = w_40;
      t = o_0(t);
      e_41 = t;
      t = (ATerm) ATinsert(CheckATermList(x_40), e_41);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm i_41 = NULL;
  i_41 = t;
  if(match_string(t, "-k"))
    {
      t = i_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_41;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
  j_41 = t;
  t = SSL_string_to_int(j_41);
  k_41 = t;
  t = term_m_43;
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_43, k_41);
  t = s_9(l_41, k_41, t);
  t = j_41;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_n_43;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, o_4, p_4, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm n_41 = NULL;
  n_41 = t;
  if(match_string(t, "-S"))
    {
      t = n_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_41;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL;
  t = term_y_26;
  o_41 = t;
  t = term_a_13;
  p_41 = t;
  t = term_o_43;
  t = s_9(o_41, p_41, t);
  t = term_p_43;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_q_43;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
  q_41 = t;
  t = SSL_string_to_int(q_41);
  r_41 = t;
  t = term_y_26;
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_26, r_41);
  t = s_9(s_41, r_41, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_41);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_r_43;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL;
  t = term_s_43;
  t_41 = t;
  t = term_q_7;
  u_41 = t;
  t = term_t_43;
  t = s_9(t_41, u_41, t);
  t = term_u_43;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_v_43;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_43 = t;
  int x_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_4, u_4, v_4, t);
      LocalPopChoice(x_43);
    }
  else
    {
      t = w_43;
      {
        ATerm y_43 = t;
        int b_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_4, x_4, y_4, t);
            LocalPopChoice(b_44);
          }
        else
          {
            t = y_43;
            t = Option_3_0(a_5, d_5, e_5, t);
          }
      }
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm x_41 = NULL;
  x_41 = t;
  if(match_string(t, "-o"))
    {
      t = x_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_41;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL;
  y_41 = t;
  t = term_j_10;
  z_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, y_41);
  t = s_9(z_41, y_41, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_41);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_d_44;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_5, i_5, j_5, t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm b_42 = NULL;
  b_42 = t;
  if(match_string(t, "-i"))
    {
      t = b_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_42;
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL;
  c_42 = t;
  t = term_m_10;
  d_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, c_42);
  t = s_9(d_42, c_42, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_42);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_e_44;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_5, l_5, m_5, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL;
  h_42 = t;
  t = term_f_44;
  i_42 = t;
  t = term_h_44;
  j_42 = t;
  t = term_j_44;
  t = s_9(i_42, j_42, t);
  t = h_42;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_m_44;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm k_42 = NULL;
  k_42 = t;
  if(match_string(t, "-t"))
    {
      t = k_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--title", 0, ATtrue)))
        _fail(t);
      t = k_42;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm l_42 = NULL,n_42 = NULL;
  l_42 = t;
  t = term_d_24;
  n_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_24, l_42);
  t = s_9(n_42, l_42, t);
  t = l_42;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_n_44;
  return(t);
}
ATerm abox2html_options_0_0 (ATerm t)
{
  ATerm o_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(q_44);
    }
  else
    {
      t = o_44;
      {
        ATerm r_44 = t;
        int u_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(u_44);
          }
        else
          {
            t = r_44;
            {
              ATerm v_44 = t;
              int w_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(w_44);
                }
              else
                {
                  t = v_44;
                  {
                    ATerm x_44 = t;
                    int y_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(y_44);
                      }
                    else
                      {
                        t = x_44;
                        {
                          ATerm z_44 = t;
                          int a_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(n_5, q_5, s_5, t);
                              LocalPopChoice(a_45);
                            }
                          else
                            {
                              t = z_44;
                              t = ArgOption_3_0(v_5, w_5, a_6, t);
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
  ATerm o_42 = NULL,p_42 = NULL,r_42 = NULL,s_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_7;
  t = whoami_0_0(t);
  o_42 = t;
  t = term_e_24;
  r_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_45), o_42);
  s_42 = t;
  t = SSL_printnl(r_42, s_42);
  t = term_w_12;
  p_42 = t;
  t = SSL_exit(p_42);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_c_45;
  t = get_config_0_0(t);
  return(t);
}
static ATerm l_9 (ATerm v_24, ATerm w_24, ATerm t)
{
  ATerm d_45 = t;
  int e_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_24, w_24);
      LocalPopChoice(e_45);
    }
  else
    {
      t = d_45;
      t = SSL_addr(v_24, w_24);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm t)
{
  ATerm v_42 = NULL,x_42 = NULL,y_42 = NULL;
  v_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_42;
      t = g_78(t);
    }
  else
    {
      ATerm h_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_42 = ATgetFirst((ATermList) t);
          y_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_42;
      t = foldr_2_0(g_78, h_78, t);
      h_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_42, h_43);
      t = h_78(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_a_13;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL;
  if(match_cons(t, sym__2))
    {
      d_8 = ATgetArgument(t, 0);
      e_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(d_8, e_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_43 = NULL,z_7 = NULL,a_8 = NULL;
  t = times_0_0(t);
  a_8 = t;
  t = SSL_explode_term(a_8);
  if(match_cons(t, sym__2))
    {
      ATerm f_45 = ATgetArgument(t, 0);
      z_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7;
  t = foldr_2_0(d_6, h_6, t);
  l_43 = t;
  t = SSL_TicksToSeconds(l_43);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,c_44 = NULL;
  z_43 = t;
  if(match_cons(t, sym__2))
    {
      a_44 = ATgetArgument(t, 0);
      c_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_44;
        if((a_44 != t))
          {
            _fail(t);
          }
        t = z_43;
        LocalPopChoice(h_45);
      }
    else
      {
        t = g_45;
        t = (ATerm) ATmakeAppl(sym__2, a_44, c_44);
        {
          ATerm i_45 = t;
          int j_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_44, c_44);
              LocalPopChoice(j_45);
            }
          else
            {
              t = i_45;
              t = SSL_gtr(a_44, c_44);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_44, c_44);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_94 (ATerm), ATerm t)
{
  ATerm g_44 = NULL;
  g_44 = t;
  {
    ATerm m_45 = t;
    int n_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_44 = NULL;
        t = term_y_26;
        t = get_config_0_0(t);
        i_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_44, term_w_12);
        t = geq_0_0(t);
        t = g_44;
        t = w_94(t);
        LocalPopChoice(n_45);
      }
    else
      {
        t = m_45;
        t = g_44;
      }
  }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,p_44 = NULL,s_44 = NULL;
  t = run_time_0_0(t);
  k_44 = t;
  t = term_q_7;
  t = whoami_0_0(t);
  l_44 = t;
  t = term_e_24;
  p_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_45), k_44), term_f_27), l_44);
  s_44 = t;
  t = SSL_printnl(p_44, s_44);
  t = (ATerm) ATmakeAppl(sym__2, term_e_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_45), k_44), term_f_27), l_44));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_13;
  t_44 = t;
  t = SSL_exit(t_44);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL;
  l_45 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_45;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_45 = ATgetArgument(t, 0);
          {
            ATerm w_9 = NULL,k_13 = NULL;
            t = SSLgetAnnotations(l_45);
            w_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_45);
            k_13 = t;
            t = SSLsetAnnotations(k_13, w_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_45;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_65 (ATerm), ATerm t)
{
  ATerm p_45 = t;
  int q_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_45;
      t = get_config_0_0(t);
      LocalPopChoice(q_45);
    }
  else
    {
      t = p_45;
      t = fetch_1_0(m_6, t);
    }
  t = c_65(t);
  return(t);
}
ATerm map_1_0 (ATerm o_71 (ATerm), ATerm t)
{
  static ATerm r_46 (ATerm t)
  {
    ATerm n_46 = NULL,p_46 = NULL,q_46 = NULL;
    n_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_46;
      }
    else
      {
        ATerm q_10 = NULL,w_10 = NULL,x_10 = NULL,m_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_46 = ATgetFirst((ATermList) t);
            q_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_46);
        q_10 = t;
        t = p_46;
        t = o_71(t);
        w_10 = t;
        t = q_46;
        t = r_46(t);
        x_10 = t;
        t = (ATerm) ATinsert(CheckATermList(x_10), w_10);
        m_13 = t;
        t = SSLsetAnnotations(m_13, q_10);
      }
    return(t);
  }
  t = r_46(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_46 = ATgetFirst((ATermList) t);
      v_46 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_46 = NULL,a_47 = NULL;
        static ATerm o_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_46)), not_null(a_47));
          return(t);
        }
        t = v_46;
        t = l_0(t);
        if(((z_46 != NULL) && (z_46 != t)))
          _fail(t);
        else
          z_46 = t;
        t = u_46;
        t = k_0(t);
        if(((a_47 != NULL) && (a_47 != t)))
          _fail(t);
        else
          a_47 = t;
        t = v_46;
        t = reverse_acc_2_0(k_0, o_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_7;
      t = l_0(t);
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,o_13 = NULL;
  g_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_47);
  e_47 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_47);
  o_13 = t;
  t = SSLsetAnnotations(o_13, e_47);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm i_47 = NULL;
  i_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_47), term_s_45);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL;
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_45;
      t = get_config_0_0(t);
      LocalPopChoice(w_45);
    }
  else
    {
      t = v_45;
      t = fetch_1_0(q_6, t);
    }
  t = term_x_45;
  t = echo_0_0(t);
  t = term_j_43;
  c_47 = t;
  t = term_k_43;
  d_47 = t;
  t = term_y_45;
  t = p_9(c_47, d_47, t);
  t = reverse_acc_2_0(_id, r_6, t);
  t = map_1_0(s_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  static ATerm g_48 (ATerm t)
  {
    ATerm c_48 = NULL,d_48 = NULL,f_48 = NULL;
    c_48 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_48 = ATgetFirst((ATermList) t);
        f_48 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_45 = t;
      int a_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_12 = NULL,g_12 = NULL,q_13 = NULL;
          t = SSLgetAnnotations(c_48);
          d_12 = t;
          t = d_48;
          t = y_71(t);
          g_12 = t;
          t = (ATerm) ATinsert(CheckATermList(f_48), g_12);
          q_13 = t;
          t = SSLsetAnnotations(q_13, d_12);
          LocalPopChoice(a_46);
        }
      else
        {
          t = z_45;
          {
            ATerm o_12 = NULL,r_12 = NULL,r_13 = NULL;
            t = SSLgetAnnotations(c_48);
            o_12 = t;
            t = f_48;
            t = g_48(t);
            r_12 = t;
            t = (ATerm) ATinsert(CheckATermList(r_12), d_48);
            r_13 = t;
            t = SSLsetAnnotations(r_13, o_12);
          }
        }
    }
    return(t);
  }
  t = g_48(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
  d_49 = t;
  {
    ATerm b_46 = t;
    int c_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_49;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_46 = ATgetFirst((ATermList) t);
                ATerm e_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_49;
          }
        LocalPopChoice(c_46);
      }
    else
      {
        t = b_46;
        t = (ATerm) ATinsert(ATempty, d_49);
      }
  }
  e_49 = t;
  t = term_h_25;
  f_49 = t;
  t = SSL_printnl(f_49, e_49);
  t = d_49;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_c_45;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL;
  t = term_f_46;
  p_49 = t;
  t = term_q_7;
  q_49 = t;
  t = term_g_46;
  t = s_9(p_49, q_49, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_h_46;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL,x_49 = NULL,y_49 = NULL;
  t = term_f_46;
  x_49 = t;
  t = term_q_7;
  y_49 = t;
  t = term_g_46;
  t = s_9(x_49, y_49, t);
  t = term_i_46;
  r_49 = t;
  t = term_q_7;
  s_49 = t;
  t = term_j_46;
  t = s_9(r_49, s_49, t);
  t = term_k_46;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_l_46;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_46 = t;
  int o_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_6, u_6, v_6, t);
      LocalPopChoice(o_46);
    }
  else
    {
      t = m_46;
      t = Option_3_0(w_6, y_6, z_6, t);
    }
  return(t);
}
static ATerm s_9 (ATerm t_45, ATerm u_45, ATerm t)
{
  ATerm a_50 = NULL;
  t = term_g_26;
  a_50 = t;
  t = SSL_table_put(a_50, t_45, u_45);
  t = (ATerm) ATmakeAppl(sym__3, term_g_26, t_45, u_45);
  return(t);
}
static ATerm p_9 (ATerm e_29, ATerm f_29, ATerm t)
{
  t = SSL_table_get(e_29, f_29);
  return(t);
}
static ATerm q_9 (ATerm n_27, ATerm o_27, ATerm m_27, ATerm t)
{
  ATerm c_50 = NULL,e_50 = NULL,f_50 = NULL;
  c_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_27, o_27);
  {
    ATerm s_46 = t;
    int t_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_46 = ATgetArgument(t, 0);
            ATerm x_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_27, o_27);
        t = p_9(n_27, o_27, t);
        LocalPopChoice(t_46);
      }
    else
      {
        t = s_46;
        t = (ATerm) ATempty;
      }
  }
  e_50 = t;
  t = (ATerm) ATinsert(CheckATermList(e_50), m_27);
  f_50 = t;
  t = SSL_table_put(n_27, o_27, f_50);
  t = c_50;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_50 = NULL,o_50 = NULL,o_51 = NULL;
      t = term_q_7;
      t = i_0(t);
      n_50 = t;
      t = term_j_43;
      o_50 = t;
      t = term_k_43;
      o_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_43, term_k_43, n_50);
      t = q_9(o_50, o_51, n_50, t);
      _fail(t);
    }
  else
    {
      ATerm r_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_50 = ATgetFirst((ATermList) t);
          m_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_50;
      t = d_0(t);
      t = term_q_7;
      t = g_0(t);
      r_51 = t;
      t = (ATerm) ATinsert(CheckATermList(m_50), r_51);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_58 (ATerm), ATerm o_58 (ATerm), ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,u_13 = NULL;
  x_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_51 = ATgetFirst((ATermList) t);
      u_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_51);
  s_51 = t;
  t = t_51;
  t = n_58(t);
  v_51 = t;
  t = u_51;
  t = o_58(t);
  w_51 = t;
  t = (ATerm) ATinsert(CheckATermList(w_51), v_51);
  u_13 = t;
  t = SSLsetAnnotations(u_13, s_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_85 (ATerm), ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,h_52 = NULL,i_52 = NULL,a_14 = NULL;
  c_52 = t;
  {
    ATerm y_46 = t;
    int b_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_47;
        t = t_85(t);
        LocalPopChoice(b_47);
      }
    else
      {
        t = y_46;
      }
  }
  t = c_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_52 = ATgetFirst((ATermList) t);
      f_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_52);
  d_52 = t;
  t = term_c_45;
  i_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_45, e_52);
  t = s_9(i_52, e_52, t);
  t = f_52;
  {
    static ATerm s_52 (ATerm t)
    {
      ATerm j_47 = t;
      int k_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_47 = t;
          int m_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_52 = NULL;
              l_52 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_52;
              LocalPopChoice(m_47);
            }
          else
            {
              t = l_47;
              t = t_85(t);
              t = Cons_2_0(_id, s_52, t);
            }
          LocalPopChoice(k_47);
        }
      else
        {
          t = j_47;
          {
            ATerm o_52 = NULL,p_52 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_52 = ATgetFirst((ATermList) t);
                p_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_52), (ATerm) ATmakeAppl(sym_Undefined_1, o_52));
          }
        }
      return(t);
    }
    t = s_52(t);
  }
  h_52 = t;
  t = (ATerm) ATinsert(CheckATermList(h_52), (ATerm) ATmakeAppl(sym_Program_1, e_52));
  a_14 = t;
  t = SSLsetAnnotations(a_14, d_52);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm e_53 = NULL;
  e_53 = t;
  if(match_string(t, "--help"))
    {
      t = e_53;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_53;
        }
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL;
  t = term_r_45;
  f_53 = t;
  t = term_q_7;
  g_53 = t;
  t = term_n_47;
  t = s_9(f_53, g_53, t);
  t = term_o_47;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_p_47;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL;
  z_52 = t;
  t = term_j_43;
  b_53 = t;
  t = term_k_43;
  c_53 = t;
  t = (ATerm) ATempty;
  d_53 = t;
  t = SSL_table_put(b_53, c_53, d_53);
  t = z_52;
  {
    static ATerm c_7 (ATerm t)
    {
      ATerm q_47 = t;
      int r_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_85(t);
          LocalPopChoice(r_47);
        }
      else
        {
          t = q_47;
          {
            ATerm s_47 = t;
            int t_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_7, e_7, f_7, t);
                LocalPopChoice(t_47);
              }
            else
              {
                t = s_47;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_7, t);
  }
  {
    ATerm u_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_53 = NULL;
        n_53 = t;
        {
          ATerm w_47 = t;
          int x_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_12 = NULL;
              t = n_53;
              {
                ATerm y_47 = t;
                int z_47 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_45;
                    t = get_config_0_0(t);
                    LocalPopChoice(z_47);
                  }
                else
                  {
                    t = y_47;
                    t = fetch_1_0(g_7, t);
                  }
              }
              t = n_53;
              t = default_system_usage_0_0(t);
              t = term_a_13;
              y_12 = t;
              t = SSL_exit(y_12);
              LocalPopChoice(x_47);
            }
          else
            {
              t = w_47;
              {
                ATerm c_13 = NULL;
                t = term_f_46;
                t = get_config_0_0(t);
                t = n_53;
                t = default_system_about_0_0(t);
                t = term_a_13;
                c_13 = t;
                t = SSL_exit(c_13);
              }
            }
        }
        LocalPopChoice(v_47);
      }
    else
      {
        t = u_47;
        {
          ATerm a_48 = t;
          int b_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL;
              static ATerm h_7 (ATerm t)
              {
                ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,h_14 = NULL;
                t_53 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_53 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_53);
                r_53 = t;
                t = s_53;
                if(((x_52 != NULL) && (x_52 != t)))
                  _fail(t);
                else
                  x_52 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_53);
                h_14 = t;
                t = SSLsetAnnotations(h_14, r_53);
                return(t);
              }
              t = fetch_1_0(h_7, t);
              t = term_e_24;
              p_53 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_52)), term_p_48);
              q_53 = t;
              t = SSL_printnl(p_53, q_53);
              t = (ATerm) ATmakeAppl(sym__2, term_e_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_52)), term_p_48));
              t = default_system_usage_0_0(t);
              t = term_w_12;
              o_53 = t;
              t = SSL_exit(o_53);
              LocalPopChoice(b_48);
            }
          else
            {
              t = a_48;
            }
        }
      }
  }
  y_52 = t;
  t = term_j_43;
  a_53 = t;
  t = SSL_table_destroy(a_53);
  t = y_52;
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_65 (ATerm), ATerm f_65 (ATerm), ATerm g_65 (ATerm), ATerm h_65 (ATerm), ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
  t = parse_options_1_0(e_65, t);
  y_53 = t;
  t = term_q_48;
  b_54 = t;
  t = SSL_table_create(b_54);
  t = term_q_48;
  z_53 = t;
  t = term_r_48;
  a_54 = t;
  t = SSL_table_put(z_53, a_54, y_53);
  t = y_53;
  t = g_65(t);
  {
    ATerm s_48 = t;
    int t_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_65, t);
        LocalPopChoice(t_48);
      }
    else
      {
        t = s_48;
        {
          ATerm u_48 = t;
          int v_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_65(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_48);
            }
          else
            {
              t = u_48;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm w_48 = t;
  int x_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_54 = NULL;
      h_54 = t;
      t = term_f_44;
      t = get_config_0_0(t);
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("gen-css", 0, ATtrue)))
        _fail(t);
      t = h_54;
      t = xtc_temp_files_1_0(l_7, t);
      LocalPopChoice(x_48);
    }
  else
    {
      t = w_48;
      t = abox2html_0_0(t);
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = xtc_generate_2_0(m_7, pass_verbose_0_0, t);
  t = copy_to_1_0(n_7, t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_y_48;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm z_48 = t;
  int a_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_10;
      t = get_config_0_0(t);
      LocalPopChoice(a_49);
    }
  else
    {
      t = z_48;
      t = term_h_25;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2html_options_0_0, default_usage_0_0, _id, k_7, t);
  return(t);
}
