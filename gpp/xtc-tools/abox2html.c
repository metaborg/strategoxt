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
ATerm term_u_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_y_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_q_47;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_o_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_l_44;
ATerm term_i_44;
ATerm term_g_44;
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
ATerm term_l_43;
ATerm term_k_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_e_43;
ATerm term_w_41;
ATerm term_u_41;
ATerm term_l_41;
ATerm term_a_41;
ATerm term_t_40;
ATerm term_r_40;
ATerm term_k_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_v_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_l_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_s_38;
ATerm term_m_38;
ATerm term_i_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_z_37;
ATerm term_q_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_z_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_z_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_b_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_t_32;
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
ATerm term_u_31;
ATerm term_t_31;
ATerm term_o_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_c_31;
ATerm term_b_31;
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
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_w_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_l_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_o_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_e_27;
ATerm term_i_26;
ATerm term_z_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_h_25;
ATerm term_d_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_k_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_d_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_w_23;
ATerm term_u_23;
ATerm term_m_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
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
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_b_19;
ATerm term_z_18;
ATerm term_g_18;
ATerm term_a_18;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_z_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_m_9;
ATerm term_y_8;
ATerm term_k_8;
ATerm term_t_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Dec", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Nov", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Oct", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Sep", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Aug", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jul", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jun", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("May", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Apr", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Mar", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Feb", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Jan", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("December", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("November", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("October", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("September", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("August", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("July", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("June", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("April", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("March", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("February", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("January", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Sat", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Fri", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Thu", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Wed", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Tue", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Mon", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Sun", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Saturday", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Friday", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Thursday", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Wednesday", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuesday", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Monday", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Sunday", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(100);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("p.m.", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("a.m.", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Saturday_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Friday_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Thursday_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Wednesday_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Tuesday_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Monday_0);
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
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_February_0);
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
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("yyyy", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("HH", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("mm", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ss", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--title", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no title specified for HTML document", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<!-- \n", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   This file is generated at ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" \n", 0, ATtrue));
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
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("    <title>", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("</title>\n", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("    <link rel=\"stylesheet\" type=\"text/css\" href=\"boxstyle.css\">\n", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  </head>\n", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("  <body>\n", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("  </body>\n", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("</html>\n", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-html", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_27, term_z_12, term_y_27);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_28, term_u_13, term_j_28);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_28, term_r_13, term_t_28);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_28, term_l_13, term_b_29);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_29, term_i_13, term_i_29);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_29, term_n_29, term_o_29);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_29, term_v_29, term_x_29);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_30, term_k_13, term_b_30);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_30, term_e_30, term_g_30);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_30, term_s_30, term_v_30);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_30, term_j_13, term_b_31);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_31, term_p_13, term_k_31);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_31, term_u_31, term_v_31);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_31, term_f_13, term_y_31);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_32, term_b_32, term_c_32);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_32, term_f_32, term_g_32);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_32, term_j_32, term_k_32);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_32, term_n_32, term_o_32);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_32, term_g_15, term_t_32);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_32, term_h_13, term_x_32);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_32, term_f_15, term_b_33);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_33, term_f_33, term_o_33);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_33, term_v_33, term_w_33);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_33, term_g_34, term_h_34);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_34, term_n_13, term_n_34);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_34, term_s_34, term_t_34);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_34, term_z_34, term_d_35);
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
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_s_39);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_z_38);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_l_41);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym__2, term_e_27, term_d_13);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_13);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(sym__2, term_s_43, term_t_7);
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(sym__2, term_g_44, term_i_44);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Only generate cascading style sheet", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-t title    Title of HTML document", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym__2, term_k_43, term_l_43);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym__2, term_f_46, term_t_7);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(sym__2, term_i_46, term_t_7);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(sym__2, term_t_45, term_t_7);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css-boxstyle", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm xtc_close_fd_0_0 (ATerm t);
static ATerm l_8 (ATerm t_33, ATerm u_33, ATerm t);
ATerm File_as_fd_1_0 (ATerm n_94 (ATerm), ATerm t);
ATerm STDERR__FILENO_0_0 (ATerm t);
ATerm STDOUT__FILENO_0_0 (ATerm t);
ATerm STDIN__FILENO_0_0 (ATerm t);
ATerm xtc_open_fd_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_new_file_name_0_0 (ATerm t);
ATerm xtc_cat_0_0 (ATerm t);
static ATerm j_3 (ATerm t_2, ATerm t);
static ATerm k_3 (ATerm v_2, ATerm x_2, ATerm z_2, ATerm t);
static ATerm j_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm n_8 (ATerm q_37, ATerm r_37, ATerm t);
static ATerm o_8 (ATerm i_82 (ATerm), ATerm g_430, ATerm y_37, ATerm t);
static ATerm q_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm month2abbr_0_0 (ATerm t);
ATerm month2text_0_0 (ATerm t);
ATerm lt_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm day_of_week2abbr_0_0 (ATerm t);
ATerm day_of_week2text_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm t);
ATerm for_3_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm t);
static ATerm t_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
static ATerm q_8 (ATerm r_31, ATerm p_31, ATerm q_31, ATerm t);
static ATerm r_8 (ATerm y_30, ATerm z_30, ATerm a_31, ATerm t);
static ATerm s_8 (ATerm q_25, ATerm r_25, ATerm t);
ATerm month2index_0_0 (ATerm t);
ATerm date_pattern_to_int_0_0 (ATerm t);
static ATerm m_16 (ATerm v_13, ATerm y_13, ATerm t);
ATerm date_pattern_to_string_0_0 (ATerm t);
static ATerm t_8 (ATerm o_50, ATerm n_50, ATerm t);
ATerm index2day_of_week_0_0 (ATerm t);
ATerm index2month_0_0 (ATerm t);
static ATerm u_8 (ATerm n_47, ATerm m_47, ATerm l_47, ATerm k_47, ATerm j_47, ATerm i_47, ATerm o_47, ATerm p_47, ATerm t);
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t);
static ATerm v_8 (ATerm f_47, ATerm t);
ATerm now_epoch_time_0_0 (ATerm t);
ATerm now_local_time_0_0 (ATerm t);
ATerm create_time_0_0 (ATerm t);
ATerm get_title_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm xtc_io_1_0 (ATerm h_95 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm abox2html_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm j_9 (ATerm r_33, ATerm s_33, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm w_8 (ATerm y_24, ATerm z_24, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm x_8 (ATerm t_36, ATerm u_36, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm b_71 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm n_81 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm g_82 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm w_93 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm v_93 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm x_93 (ATerm), ATerm t);
static ATerm a_9 (ATerm w_74 (ATerm), ATerm x_74 (ATerm), ATerm h_21, ATerm g_21, ATerm t);
static ATerm b_9 (ATerm t_74 (ATerm), ATerm d_21, ATerm c_21, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm c_9 (ATerm l_27, ATerm m_27, ATerm n_27, ATerm t);
static ATerm d_9 (ATerm w_78 (ATerm), ATerm v_27, ATerm u_27, ATerm t);
static ATerm h_9 (ATerm w_13, ATerm x_13, ATerm t);
static ATerm x_26 (ATerm l_26, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_9 (ATerm w_37, ATerm t);
static ATerm f_9 (ATerm f_14, ATerm g_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_29 (ATerm s_27, ATerm t);
static ATerm d_29 (ATerm a_28, ATerm b_28, ATerm c_28, ATerm t);
static ATerm e_29 (ATerm m_28, ATerm n_28, ATerm o_28, ATerm t);
static ATerm g_9 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm x_78 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm u_68 (ATerm), ATerm v_68 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm r_34 (ATerm y_33, ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm u_95 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm f_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm n_36 (ATerm d_36, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm i_9 (ATerm t_78 (ATerm), ATerm g_26, ATerm e_26, ATerm t);
static ATerm o_9 (ATerm h_33, ATerm i_33, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_generate_2_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm t);
static ATerm k_9 (ATerm t_26, ATerm u_26, ATerm t);
ATerm end_scope_1_0 (ATerm q_78 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_78 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm g_95 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm abox2html_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_9 (ATerm s_24, ATerm t_24, ATerm t);
ATerm foldr_2_0 (ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm s_93 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm need_help_1_0 (ATerm d_64 (ATerm), ATerm t);
ATerm map_1_0 (ATerm p_70 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_70 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm s_9 (ATerm u_44, ATerm v_44, ATerm t);
static ATerm p_9 (ATerm f_28, ATerm g_28, ATerm t);
static ATerm q_9 (ATerm o_26, ATerm p_26, ATerm n_26, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm o_57 (ATerm), ATerm p_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_84 (ATerm), ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm parse_options_1_0 (ATerm o_84 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm h_64 (ATerm), ATerm i_64 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm xtc_close_fd_0_0 (ATerm t)
{
  ATerm m_0 = NULL;
  m_0 = t;
  {
    ATerm i_2 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 = NULL;
        t = term_t_7;
        t = STDIN__FILENO_0_0(t);
        s_0 = t;
        if((m_0 != t))
          {
            _fail(t);
          }
        t = s_0;
        LocalPopChoice(r_7);
      }
    else
      {
        t = i_2;
        {
          ATerm u_7 = t;
          int w_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_0 = NULL;
              t = term_t_7;
              t = STDOUT__FILENO_0_0(t);
              u_0 = t;
              if((m_0 != t))
                {
                  _fail(t);
                }
              t = u_0;
              LocalPopChoice(w_7);
            }
          else
            {
              t = u_7;
              {
                ATerm x_7 = t;
                int y_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_0 = NULL;
                    t = term_t_7;
                    t = STDERR__FILENO_0_0(t);
                    y_0 = t;
                    if((m_0 != t))
                      {
                        _fail(t);
                      }
                    t = y_0;
                    LocalPopChoice(y_7);
                  }
                else
                  {
                    t = x_7;
                    t = SSL_close(m_0);
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm l_8 (ATerm t_33, ATerm u_33, ATerm t)
{
  t = SSL_fdcopy(t_33, u_33);
  return(t);
}
ATerm File_as_fd_1_0 (ATerm n_94 (ATerm), ATerm t)
{
  ATerm c_1 = NULL;
  t = xtc_open_fd_0_0(t);
  c_1 = t;
  {
    ATerm z_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_94(t);
        LocalPopChoice(a_8);
        {
          ATerm e_1 = NULL;
          e_1 = t;
          {
            ATerm b_8 = t;
            int c_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = c_1;
                t = xtc_close_fd_0_0(t);
                LocalPopChoice(c_8);
              }
            else
              {
                t = b_8;
              }
          }
          t = e_1;
        }
      }
    else
      {
        t = z_7;
        {
          ATerm f_8 = t;
          int j_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_1;
              t = xtc_close_fd_0_0(t);
              LocalPopChoice(j_8);
            }
          else
            {
              t = f_8;
            }
        }
        t = c_1;
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
  ATerm t_1 = NULL,u_1 = NULL;
  u_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      t_1 = ATgetArgument(t, 0);
      t = SSL_open(t_1);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          t = term_t_7;
          t = STDIN__FILENO_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_stdout_0))
            {
              t = term_t_7;
              t = STDOUT__FILENO_0_0(t);
            }
          else
            {
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
              t = term_t_7;
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
  ATerm z_1 = NULL,b_2 = NULL,c_2 = NULL;
  t = term_t_7;
  t = new_0_0(t);
  z_1 = t;
  t = term_k_8;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_1, term_k_8);
  t = o_9(z_1, b_2, t);
  c_2 = t;
  {
    ATerm m_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 = NULL;
        t = (ATerm) ATinsert(ATempty, term_y_8);
        f_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_2, (ATerm) ATinsert(ATempty, term_y_8));
        t = h_9(c_2, f_2, t);
        t = new_file_0_0(t);
        LocalPopChoice(p_8);
      }
    else
      {
        t = m_8;
        t = c_2;
      }
  }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm xtc_new_file_name_0_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL;
  t = new_file_0_0(t);
  j_2 = t;
  t = term_t_7;
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_2, term_t_7);
  t = i_9(a_0, j_2, k_2, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, j_2);
  return(t);
}
ATerm xtc_cat_0_0 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL;
  m_2 = t;
  t = xtc_new_file_name_0_0(t);
  l_2 = t;
  t = xtc_open_fd_0_0(t);
  n_2 = t;
  t = m_2;
  {
    static ATerm f_0 (ATerm t)
    {
      static ATerm h_0 (ATerm t)
      {
        ATerm p_2 = NULL;
        p_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_2, n_2);
        t = l_8(p_2, n_2, t);
        return(t);
      }
      t = File_as_fd_1_0(h_0, t);
      return(t);
    }
    t = map_1_0(f_0, t);
  }
  t = n_2;
  t = xtc_close_fd_0_0(t);
  t = l_2;
  return(t);
}
static ATerm j_3 (ATerm t_2, ATerm t)
{
  t = t_2;
  {
    ATerm t_9 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_9 = ATgetArgument(t, 0);
            ATerm x_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_9;
      }
  }
  t = term_z_9;
  t = debug_1_0(j_0, t);
  t = (ATerm) ATmakeAppl(sym__2, t_2, term_c_10);
  t = open_file_0_0(t);
  return(t);
}
static ATerm k_3 (ATerm v_2, ATerm x_2, ATerm z_2, ATerm t)
{
  t = SSL_open_file(v_2, x_2);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_e_10;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm f_3 = NULL,h_3 = NULL,i_3 = NULL;
  f_3 = t;
  if(match_cons(t, sym__2))
    {
      h_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
      {
        ATerm j_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_3(f_3, t);
            LocalPopChoice(l_10);
          }
        else
          {
            t = j_10;
            t = k_3(h_3, i_3, f_3, t);
          }
      }
    }
  else
    {
      t = j_3(f_3, t);
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm r_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_m_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_y_8);
      u_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_3, (ATerm) ATinsert(ATempty, term_y_8));
      t = h_9(r_3, u_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm n_8 (ATerm q_37, ATerm r_37, ATerm t)
{
  ATerm w_3 = NULL;
  t = SSL_write_term_to_stream_baf(q_37, r_37);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_3);
  return(t);
}
static ATerm o_8 (ATerm i_82 (ATerm), ATerm g_430, ATerm y_37, ATerm t)
{
  ATerm b_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_430, term_c_10);
  t = g_9(t);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_4, y_37);
  t = i_82(t);
  t = fclose_0_0(t);
  t = y_37;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_10 = ATgetArgument(t, 0);
      if(match_cons(n_10, sym_Stream_1))
        {
          f_4 = ATgetArgument(n_10, 0);
        }
      else
        _fail(t);
      g_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_8(f_4, g_4, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  e_4 = t;
  t = xtc_new_file_0_0(t);
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_4, e_4);
  t = o_8(q_0, d_4, e_4, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, d_4);
  t = xtc_transform_file_2_0(t_94, u_94, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL;
  i_4 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm k_4 = NULL,m_4 = NULL;
      t = i_4;
      t = xtc_new_file_0_0(t);
      k_4 = t;
      t = r_0(t);
      m_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_4, (ATerm) ATinsert(ATinsert(ATempty, k_4), term_o_10));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_4);
    }
  else
    {
      ATerm a_5 = NULL,b_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_4;
      t = xtc_new_file_0_0(t);
      a_5 = t;
      t = r_0(t);
      b_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_5), term_o_10), j_4), term_p_10));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_5);
    }
  return(t);
}
ATerm month2abbr_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_q_10;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_s_10;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_t_10;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_u_10;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_v_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_w_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_x_10;
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
                                      t = term_b_11;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_c_11;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_d_11;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_e_11;
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
      t = term_g_11;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_j_11;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_k_11;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_m_11;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_n_11;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_o_11;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_p_11;
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
                                              t = term_v_11;
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
  ATerm y_11 = t;
  if((PushChoice() == 0))
    {
      t = geq_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_11;
    }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm a_12 = t;
  if((PushChoice() == 0))
    {
      ATerm n_5 = NULL,o_5 = NULL;
      if(match_cons(t, sym__2))
        {
          n_5 = ATgetArgument(t, 0);
          o_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, n_5, o_5);
      {
        ATerm b_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(n_5, o_5);
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            t = SSL_gtr(n_5, o_5);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, n_5, o_5);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_12;
    }
  return(t);
}
ATerm day_of_week2abbr_0_0 (ATerm t)
{
  if(match_cons(t, sym_Saturday_0))
    {
      t = term_d_12;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_e_12;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_f_12;
            }
          else
            {
              if(match_cons(t, sym_Wednesday_0))
                {
                  t = term_g_12;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_i_12;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_j_12;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_l_12;
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
      t = term_m_12;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_n_12;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_o_12;
            }
          else
            {
              if(match_cons(t, sym_Wednesday_0))
                {
                  t = term_p_12;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_q_12;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_r_12;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_t_12;
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm while_not_2_0 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm t)
{
  static ATerm r_5 (ATerm t)
  {
    ATerm u_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_69(t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = u_12;
        t = m_69(t);
        t = r_5(t);
      }
    return(t);
  }
  t = r_5(t);
  return(t);
}
ATerm for_3_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm t)
{
  t = o_69(t);
  t = while_not_2_0(p_69, q_69, t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm t_5 = NULL,x_5 = NULL;
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_5, x_5, (ATerm) ATempty);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm y_5 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm x_12 = ATgetArgument(t, 0);
      if(((ATgetType(x_12) != AT_INT) || (ATgetInt((ATermInt) x_12) != 0)))
        _fail(t);
      {
        ATerm y_12 = ATgetArgument(t, 1);
      }
      y_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_5;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm z_5 = NULL,b_6 = NULL,c_6 = NULL,e_6 = NULL,f_6 = NULL;
  if(match_cons(t, sym__3))
    {
      z_5 = ATgetArgument(t, 0);
      b_6 = ATgetArgument(t, 1);
      c_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_5, term_z_12);
  t = geq_0_0(t);
  t = term_z_12;
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_5, term_z_12);
  t = w_8(z_5, f_6, t);
  e_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_6, b_6, (ATerm) ATinsert(CheckATermList(c_6), b_6));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(t_0, v_0, w_0, t);
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm g_6 = NULL;
  t = copy_0_0(t);
  g_6 = t;
  t = SSL_implode_string(g_6);
  return(t);
}
static ATerm q_8 (ATerm r_31, ATerm p_31, ATerm q_31, ATerm t)
{
  ATerm i_6 = NULL;
  t = SSL_strlen(p_31);
  i_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_31, i_6);
  t = w_8(q_31, i_6, t);
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_6 = NULL;
        j_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_6, term_d_13);
        t = geq_0_0(t);
        t = j_6;
        LocalPopChoice(b_13);
        {
          ATerm l_6 = NULL;
          l_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_6, r_31);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = a_13;
        t = term_e_13;
      }
  }
  return(t);
}
static ATerm r_8 (ATerm y_30, ATerm z_30, ATerm a_31, ATerm t)
{
  ATerm n_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, y_30, z_30, a_31);
  t = q_8(y_30, z_30, a_31, t);
  n_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_6, z_30);
  t = o_9(n_6, z_30, t);
  return(t);
}
static ATerm s_8 (ATerm q_25, ATerm r_25, ATerm t)
{
  t = SSL_mod(q_25, r_25);
  return(t);
}
ATerm month2index_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_f_13;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_h_13;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_i_13;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_j_13;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_k_13;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_l_13;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_n_13;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_p_13;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_r_13;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_u_13;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_z_12;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_d_13;
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
  ATerm z_8 = NULL,n_9 = NULL,r_9 = NULL,u_9 = NULL,v_9 = NULL,y_9 = NULL,a_10 = NULL,b_10 = NULL,d_10 = NULL,f_10 = NULL,g_10 = NULL,i_10 = NULL,k_10 = NULL;
  v_9 = t;
  if(match_cons(t, sym__2))
    {
      y_9 = ATgetArgument(t, 0);
      a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9;
  if(match_string(t, "ss"))
    {
      t = a_10;
      if(match_cons(t, sym_ComponentTime_3))
        {
          ATerm z_13 = ATgetArgument(t, 0);
          i_10 = ATgetArgument(t, 1);
          {
            ATerm a_14 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = i_10;
      if(match_cons(t, sym_DayTime_3))
        {
          ATerm h_14 = ATgetArgument(t, 0);
          ATerm j_14 = ATgetArgument(t, 1);
          r_9 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_9;
    }
  else
    {
      if(match_string(t, "mm"))
        {
          t = a_10;
          if(match_cons(t, sym_ComponentTime_3))
            {
              ATerm l_14 = ATgetArgument(t, 0);
              i_10 = ATgetArgument(t, 1);
              {
                ATerm m_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = i_10;
          if(match_cons(t, sym_DayTime_3))
            {
              ATerm p_14 = ATgetArgument(t, 0);
              n_9 = ATgetArgument(t, 1);
              {
                ATerm q_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = n_9;
        }
      else
        {
          if(match_string(t, "KK"))
            {
              t = a_10;
              if(match_cons(t, sym_ComponentTime_3))
                {
                  ATerm s_14 = ATgetArgument(t, 0);
                  i_10 = ATgetArgument(t, 1);
                  {
                    ATerm u_14 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = i_10;
              if(match_cons(t, sym_DayTime_3))
                {
                  z_8 = ATgetArgument(t, 0);
                  {
                    ATerm v_14 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm x_14 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              {
                ATerm a_15 = t;
                int c_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_10 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, term_f_15, z_8);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, z_8, term_g_15);
                    t = leq_0_0(t);
                    t = term_f_15;
                    r_10 = t;
                    t = (ATerm) ATmakeAppl(sym__2, z_8, term_f_15);
                    t = w_8(z_8, r_10, t);
                    LocalPopChoice(c_15);
                  }
                else
                  {
                    t = a_15;
                    t = (ATerm) ATmakeAppl(sym__2, term_d_13, z_8);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, z_8, term_f_15);
                    t = lt_0_0(t);
                    t = z_8;
                  }
              }
            }
          else
            {
              if(match_string(t, "hh"))
                {
                  t = a_10;
                  if(match_cons(t, sym_ComponentTime_3))
                    {
                      ATerm h_15 = ATgetArgument(t, 0);
                      i_10 = ATgetArgument(t, 1);
                      {
                        ATerm i_15 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = i_10;
                  if(match_cons(t, sym_DayTime_3))
                    {
                      z_8 = ATgetArgument(t, 0);
                      {
                        ATerm j_15 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm k_15 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = z_8;
                  if(match_int(t, 0))
                    {
                      ATerm l_15 = t;
                      int m_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_10 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_f_15, z_8);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, z_8, term_g_15);
                          t = leq_0_0(t);
                          t = term_f_15;
                          z_10 = t;
                          t = (ATerm) ATmakeAppl(sym__2, z_8, term_f_15);
                          t = w_8(z_8, z_10, t);
                          LocalPopChoice(m_15);
                        }
                      else
                        {
                          t = l_15;
                          {
                            ATerm n_15 = t;
                            int o_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_z_12, z_8);
                                t = leq_0_0(t);
                                t = (ATerm) ATmakeAppl(sym__2, z_8, term_f_15);
                                t = leq_0_0(t);
                                t = z_8;
                                LocalPopChoice(o_15);
                              }
                            else
                              {
                                t = n_15;
                                t = term_f_15;
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm p_15 = t;
                      int q_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_11 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_f_15, z_8);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, z_8, term_g_15);
                          t = leq_0_0(t);
                          t = term_f_15;
                          i_11 = t;
                          t = (ATerm) ATmakeAppl(sym__2, z_8, term_f_15);
                          t = w_8(z_8, i_11, t);
                          LocalPopChoice(q_15);
                        }
                      else
                        {
                          t = p_15;
                          t = (ATerm) ATmakeAppl(sym__2, term_z_12, z_8);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, z_8, term_f_15);
                          t = leq_0_0(t);
                          t = z_8;
                        }
                    }
                }
              else
                {
                  if(match_string(t, "kk"))
                    {
                      ATerm l_11 = NULL;
                      t = a_10;
                      if(match_cons(t, sym_ComponentTime_3))
                        {
                          ATerm r_15 = ATgetArgument(t, 0);
                          i_10 = ATgetArgument(t, 1);
                          {
                            ATerm s_15 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = i_10;
                      if(match_cons(t, sym_DayTime_3))
                        {
                          z_8 = ATgetArgument(t, 0);
                          {
                            ATerm t_15 = ATgetArgument(t, 1);
                          }
                          {
                            ATerm u_15 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = term_z_12;
                      l_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_8, term_z_12);
                      t = l_9(z_8, l_11, t);
                    }
                  else
                    {
                      if(match_string(t, "HH"))
                        {
                          t = a_10;
                          if(match_cons(t, sym_ComponentTime_3))
                            {
                              ATerm v_15 = ATgetArgument(t, 0);
                              i_10 = ATgetArgument(t, 1);
                              {
                                ATerm w_15 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = i_10;
                          if(match_cons(t, sym_DayTime_3))
                            {
                              z_8 = ATgetArgument(t, 0);
                              {
                                ATerm x_15 = ATgetArgument(t, 1);
                              }
                              {
                                ATerm y_15 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = z_8;
                        }
                      else
                        {
                          if(match_string(t, "DD"))
                            {
                              t = a_10;
                              if(match_cons(t, sym_ComponentTime_3))
                                {
                                  ATerm z_15 = ATgetArgument(t, 0);
                                  ATerm a_16 = ATgetArgument(t, 1);
                                  k_10 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = k_10;
                              if(match_cons(t, sym_Dupl_2))
                                {
                                  ATerm b_16 = ATgetArgument(t, 0);
                                  u_9 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = u_9;
                            }
                          else
                            {
                              if(match_string(t, "D"))
                                {
                                  t = a_10;
                                  if(match_cons(t, sym_ComponentTime_3))
                                    {
                                      ATerm c_16 = ATgetArgument(t, 0);
                                      ATerm d_16 = ATgetArgument(t, 1);
                                      k_10 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = k_10;
                                  if(match_cons(t, sym_Dupl_2))
                                    {
                                      ATerm e_16 = ATgetArgument(t, 0);
                                      u_9 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = u_9;
                                }
                              else
                                {
                                  if(match_string(t, "dd"))
                                    {
                                      t = a_10;
                                      if(match_cons(t, sym_ComponentTime_3))
                                        {
                                          b_10 = ATgetArgument(t, 0);
                                          {
                                            ATerm f_16 = ATgetArgument(t, 1);
                                          }
                                          {
                                            ATerm g_16 = ATgetArgument(t, 2);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      t = b_10;
                                      if(match_cons(t, sym_Date_3))
                                        {
                                          ATerm h_16 = ATgetArgument(t, 0);
                                          ATerm i_16 = ATgetArgument(t, 1);
                                          g_10 = ATgetArgument(t, 2);
                                        }
                                      else
                                        _fail(t);
                                      t = g_10;
                                    }
                                  else
                                    {
                                      if(match_string(t, "d"))
                                        {
                                          t = a_10;
                                          if(match_cons(t, sym_ComponentTime_3))
                                            {
                                              b_10 = ATgetArgument(t, 0);
                                              {
                                                ATerm j_16 = ATgetArgument(t, 1);
                                              }
                                              {
                                                ATerm k_16 = ATgetArgument(t, 2);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          t = b_10;
                                          if(match_cons(t, sym_Date_3))
                                            {
                                              ATerm l_16 = ATgetArgument(t, 0);
                                              ATerm p_16 = ATgetArgument(t, 1);
                                              g_10 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          t = g_10;
                                        }
                                      else
                                        {
                                          if(match_string(t, "MM"))
                                            {
                                              ATerm t_11 = NULL,u_11 = NULL;
                                              t = a_10;
                                              if(match_cons(t, sym_ComponentTime_3))
                                                {
                                                  b_10 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm q_16 = ATgetArgument(t, 1);
                                                  }
                                                  {
                                                    ATerm t_16 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = b_10;
                                              if(match_cons(t, sym_Date_3))
                                                {
                                                  ATerm u_16 = ATgetArgument(t, 0);
                                                  f_10 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm v_16 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = f_10;
                                              t = month2index_0_0(t);
                                              t_11 = t;
                                              t = term_z_12;
                                              u_11 = t;
                                              t = (ATerm) ATmakeAppl(sym__2, t_11, term_z_12);
                                              t = l_9(t_11, u_11, t);
                                            }
                                          else
                                            {
                                              if(match_string(t, "M"))
                                                {
                                                  ATerm w_11 = NULL,x_11 = NULL;
                                                  t = a_10;
                                                  if(match_cons(t, sym_ComponentTime_3))
                                                    {
                                                      b_10 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm w_16 = ATgetArgument(t, 1);
                                                      }
                                                      {
                                                        ATerm x_16 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = b_10;
                                                  if(match_cons(t, sym_Date_3))
                                                    {
                                                      ATerm a_17 = ATgetArgument(t, 0);
                                                      f_10 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm t_17 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = f_10;
                                                  t = month2index_0_0(t);
                                                  w_11 = t;
                                                  t = term_z_12;
                                                  x_11 = t;
                                                  t = (ATerm) ATmakeAppl(sym__2, w_11, term_z_12);
                                                  t = l_9(w_11, x_11, t);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "yy"))
                                                    {
                                                      ATerm z_11 = NULL;
                                                      t = a_10;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          b_10 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm u_17 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm v_17 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = b_10;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          d_10 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm x_17 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm y_17 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = term_a_18;
                                                      z_11 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, d_10, term_a_18);
                                                      t = s_8(d_10, z_11, t);
                                                    }
                                                  else
                                                    {
                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("yyyy", 0, ATtrue)))
                                                        _fail(t);
                                                      t = a_10;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          b_10 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm b_18 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm c_18 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = b_10;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          d_10 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm e_18 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm f_18 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = d_10;
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
static ATerm m_16 (ATerm v_13, ATerm y_13, ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,n_14 = NULL;
  t = y_13;
  t = date_pattern_to_int_0_0(t);
  d_14 = t;
  t = SSL_int_to_string(d_14);
  b_14 = t;
  t = SSL_strlen(v_13);
  c_14 = t;
  t = term_g_18;
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_18, b_14, c_14);
  t = r_8(n_14, b_14, c_14, t);
  return(t);
}
ATerm date_pattern_to_string_0_0 (ATerm t)
{
  ATerm o_14 = NULL,r_14 = NULL,t_14 = NULL,w_14 = NULL,y_14 = NULL,z_14 = NULL,b_15 = NULL,d_15 = NULL,e_15 = NULL;
  t_14 = t;
  if(match_cons(t, sym__2))
    {
      w_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_14;
  if(match_cons(t, sym_ComponentTime_3))
    {
      z_14 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
      e_15 = ATgetArgument(t, 2);
      t = e_15;
      {
        ATerm h_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Dupl_2))
              {
                r_14 = ATgetArgument(t, 0);
                {
                  ATerm j_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_18);
            t = d_15;
            {
              ATerm k_18 = t;
              int l_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      o_14 = ATgetArgument(t, 0);
                      {
                        ATerm n_18 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm o_18 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_18);
                  t = z_14;
                  {
                    ATerm p_18 = t;
                    int q_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm r_18 = ATgetArgument(t, 0);
                            b_15 = ATgetArgument(t, 1);
                            {
                              ATerm s_18 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(q_18);
                        t = w_14;
                        if(match_string(t, "a"))
                          {
                            ATerm t_18 = t;
                            int u_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_16(w_14, t_14, t);
                                LocalPopChoice(u_18);
                              }
                            else
                              {
                                t = t_18;
                                {
                                  ATerm v_18 = t;
                                  int x_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_f_15, o_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, o_14, term_g_15);
                                      t = leq_0_0(t);
                                      t = term_z_18;
                                      LocalPopChoice(x_18);
                                    }
                                  else
                                    {
                                      t = v_18;
                                      t = (ATerm) ATmakeAppl(sym__2, term_d_13, o_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, o_14, term_f_15);
                                      t = lt_0_0(t);
                                      t = term_b_19;
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
                                    t = m_16(w_14, t_14, t);
                                    LocalPopChoice(d_19);
                                  }
                                else
                                  {
                                    t = c_19;
                                    t = r_14;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm e_19 = t;
                                    int h_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = m_16(w_14, t_14, t);
                                        LocalPopChoice(h_19);
                                      }
                                    else
                                      {
                                        t = e_19;
                                        t = r_14;
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
                                            t = m_16(w_14, t_14, t);
                                            LocalPopChoice(j_19);
                                          }
                                        else
                                          {
                                            t = i_19;
                                            t = b_15;
                                            t = month2text_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_string(t, "MMM"))
                                          {
                                            ATerm o_19 = t;
                                            int p_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = m_16(w_14, t_14, t);
                                                LocalPopChoice(p_19);
                                              }
                                            else
                                              {
                                                t = o_19;
                                                t = b_15;
                                                t = month2abbr_0_0(t);
                                              }
                                          }
                                        else
                                          {
                                            t = m_16(w_14, t_14, t);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = p_18;
                        t = w_14;
                        if(match_string(t, "a"))
                          {
                            ATerm q_19 = t;
                            int r_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_16(w_14, t_14, t);
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
                                      t = (ATerm) ATmakeAppl(sym__2, term_f_15, o_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, o_14, term_g_15);
                                      t = leq_0_0(t);
                                      t = term_z_18;
                                      LocalPopChoice(t_19);
                                    }
                                  else
                                    {
                                      t = s_19;
                                      t = (ATerm) ATmakeAppl(sym__2, term_d_13, o_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, o_14, term_f_15);
                                      t = lt_0_0(t);
                                      t = term_b_19;
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
                                    t = m_16(w_14, t_14, t);
                                    LocalPopChoice(v_19);
                                  }
                                else
                                  {
                                    t = u_19;
                                    t = r_14;
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
                                        t = m_16(w_14, t_14, t);
                                        LocalPopChoice(x_19);
                                      }
                                    else
                                      {
                                        t = w_19;
                                        t = r_14;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = m_16(w_14, t_14, t);
                                  }
                              }
                          }
                      }
                  }
                }
              else
                {
                  t = k_18;
                  t = z_14;
                  {
                    ATerm y_19 = t;
                    int z_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm a_20 = ATgetArgument(t, 0);
                            b_15 = ATgetArgument(t, 1);
                            {
                              ATerm b_20 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(z_19);
                        t = w_14;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm c_20 = t;
                            int d_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_16(w_14, t_14, t);
                                LocalPopChoice(d_20);
                              }
                            else
                              {
                                t = c_20;
                                t = r_14;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm e_20 = t;
                                int h_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = m_16(w_14, t_14, t);
                                    LocalPopChoice(h_20);
                                  }
                                else
                                  {
                                    t = e_20;
                                    t = r_14;
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
                                        t = m_16(w_14, t_14, t);
                                        LocalPopChoice(j_20);
                                      }
                                    else
                                      {
                                        t = i_20;
                                        t = b_15;
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
                                            t = m_16(w_14, t_14, t);
                                            LocalPopChoice(l_20);
                                          }
                                        else
                                          {
                                            t = k_20;
                                            t = b_15;
                                            t = month2abbr_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        t = m_16(w_14, t_14, t);
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = y_19;
                        t = w_14;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm m_20 = t;
                            int n_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_16(w_14, t_14, t);
                                LocalPopChoice(n_20);
                              }
                            else
                              {
                                t = m_20;
                                t = r_14;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm o_20 = t;
                                int t_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = m_16(w_14, t_14, t);
                                    LocalPopChoice(t_20);
                                  }
                                else
                                  {
                                    t = o_20;
                                    t = r_14;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = m_16(w_14, t_14, t);
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
            t = d_15;
            {
              ATerm u_20 = t;
              int v_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      o_14 = ATgetArgument(t, 0);
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
                  t = z_14;
                  {
                    ATerm y_20 = t;
                    int z_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm a_21 = ATgetArgument(t, 0);
                            b_15 = ATgetArgument(t, 1);
                            {
                              ATerm b_21 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(z_20);
                        t = w_14;
                        if(match_string(t, "a"))
                          {
                            ATerm e_21 = t;
                            int f_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_16(w_14, t_14, t);
                                LocalPopChoice(f_21);
                              }
                            else
                              {
                                t = e_21;
                                {
                                  ATerm i_21 = t;
                                  int j_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_f_15, o_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, o_14, term_g_15);
                                      t = leq_0_0(t);
                                      t = term_z_18;
                                      LocalPopChoice(j_21);
                                    }
                                  else
                                    {
                                      t = i_21;
                                      t = (ATerm) ATmakeAppl(sym__2, term_d_13, o_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, o_14, term_f_15);
                                      t = lt_0_0(t);
                                      t = term_b_19;
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
                                    t = m_16(w_14, t_14, t);
                                    LocalPopChoice(l_21);
                                  }
                                else
                                  {
                                    t = k_21;
                                    t = b_15;
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
                                        t = m_16(w_14, t_14, t);
                                        LocalPopChoice(n_21);
                                      }
                                    else
                                      {
                                        t = m_21;
                                        t = b_15;
                                        t = month2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = m_16(w_14, t_14, t);
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = y_20;
                        t = w_14;
                        if(match_string(t, "a"))
                          {
                            ATerm o_21 = t;
                            int p_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_16(w_14, t_14, t);
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
                                      t = (ATerm) ATmakeAppl(sym__2, term_f_15, o_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, o_14, term_g_15);
                                      t = leq_0_0(t);
                                      t = term_z_18;
                                      LocalPopChoice(r_21);
                                    }
                                  else
                                    {
                                      t = q_21;
                                      t = (ATerm) ATmakeAppl(sym__2, term_d_13, o_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, o_14, term_f_15);
                                      t = lt_0_0(t);
                                      t = term_b_19;
                                    }
                                }
                              }
                          }
                        else
                          {
                            t = m_16(w_14, t_14, t);
                          }
                      }
                  }
                }
              else
                {
                  t = u_20;
                  t = z_14;
                  {
                    ATerm s_21 = t;
                    int w_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm x_21 = ATgetArgument(t, 0);
                            b_15 = ATgetArgument(t, 1);
                            {
                              ATerm z_21 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(w_21);
                        t = w_14;
                        if(match_string(t, "MMMM"))
                          {
                            ATerm a_22 = t;
                            int b_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_16(w_14, t_14, t);
                                LocalPopChoice(b_22);
                              }
                            else
                              {
                                t = a_22;
                                t = b_15;
                                t = month2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "MMM"))
                              {
                                ATerm c_22 = t;
                                int e_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = m_16(w_14, t_14, t);
                                    LocalPopChoice(e_22);
                                  }
                                else
                                  {
                                    t = c_22;
                                    t = b_15;
                                    t = month2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = m_16(w_14, t_14, t);
                              }
                          }
                      }
                    else
                      {
                        t = s_21;
                        t = w_14;
                        t = m_16(w_14, t_14, t);
                      }
                  }
                }
            }
          }
      }
    }
  else
    {
      t = w_14;
      t = m_16(w_14, t_14, t);
    }
  return(t);
}
static ATerm t_8 (ATerm o_50, ATerm n_50, ATerm t)
{
  ATerm n_16 = NULL;
  t = o_50;
  {
    static ATerm x_0 (ATerm t)
    {
      ATerm o_16 = NULL;
      o_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_16, n_50);
      {
        ATerm f_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = date_pattern_to_string_0_0(t);
            LocalPopChoice(h_22);
          }
        else
          {
            t = f_22;
            {
              ATerm r_16 = NULL,s_16 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, o_16, n_50);
              s_16 = t;
              t = SSL_explode_term(s_16);
              if(match_cons(t, sym__2))
                {
                  ATerm i_22 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_22) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm j_22 = ATgetArgument(t, 1);
                    if(((ATgetType(j_22) == AT_LIST) && !(ATisEmpty(j_22))))
                      {
                        r_16 = ATgetFirst((ATermList) j_22);
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
              t = r_16;
            }
          }
      }
      return(t);
    }
    t = map_1_0(x_0, t);
  }
  n_16 = t;
  t = SSL_concat_strings(n_16);
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
                  t = term_p_22;
                }
              else
                {
                  if(match_int(t, 2))
                    {
                      t = term_q_22;
                    }
                  else
                    {
                      if(match_int(t, 1))
                        {
                          t = term_r_22;
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
                                              t = term_e_23;
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
static ATerm u_8 (ATerm n_47, ATerm m_47, ATerm l_47, ATerm k_47, ATerm j_47, ATerm i_47, ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  t = j_47;
  t = index2month_0_0(t);
  y_16 = t;
  t = o_47;
  t = index2day_of_week_0_0(t);
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym_ComponentTime_3, (ATerm)ATmakeAppl(sym_Date_3, i_47, y_16, k_47), (ATerm)ATmakeAppl(sym_DayTime_3, l_47, m_47, n_47), (ATerm) ATmakeAppl(sym_Dupl_2, z_16, p_47));
  return(t);
}
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  if(match_cons(t, sym__8))
    {
      b_17 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
      d_17 = ATgetArgument(t, 2);
      e_17 = ATgetArgument(t, 3);
      f_17 = ATgetArgument(t, 4);
      g_17 = ATgetArgument(t, 5);
      h_17 = ATgetArgument(t, 6);
      i_17 = ATgetArgument(t, 7);
    }
  else
    _fail(t);
  t = u_8(b_17, c_17, d_17, e_17, f_17, g_17, h_17, i_17, t);
  return(t);
}
static ATerm v_8 (ATerm f_47, ATerm t)
{
  t = SSL_epoch2localtime(f_47);
  t = prim_tuple_to_ComponentTime_0_0(t);
  return(t);
}
ATerm now_epoch_time_0_0 (ATerm t)
{
  ATerm j_17 = NULL;
  t = SSL_now_epoch_time();
  j_17 = t;
  t = (ATerm) ATmakeAppl(sym_EpochTime_1, j_17);
  return(t);
}
ATerm now_local_time_0_0 (ATerm t)
{
  ATerm k_17 = NULL;
  t = now_epoch_time_0_0(t);
  if(match_cons(t, sym_EpochTime_1))
    {
      k_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_8(k_17, t);
  return(t);
}
ATerm create_time_0_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL;
  t = term_t_7;
  t = now_local_time_0_0(t);
  l_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_23), term_w_23), term_y_23), term_w_23), term_u_23), term_h_23), term_m_23), term_h_23), term_j_23), term_h_23), term_i_23), term_h_23), term_g_23);
  m_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_23), term_w_23), term_y_23), term_w_23), term_u_23), term_h_23), term_m_23), term_h_23), term_j_23), term_h_23), term_i_23), term_h_23), term_g_23), l_17);
  t = t_8(m_17, l_17, t);
  return(t);
}
ATerm get_title_0_0 (ATerm t)
{
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_24;
      t = get_config_0_0(t);
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
      {
        ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
        t = term_f_24;
        o_17 = t;
        t = (ATerm) ATinsert(ATempty, term_g_24);
        p_17 = t;
        t = SSL_printnl(o_17, p_17);
        t = term_z_12;
        n_17 = t;
        t = SSL_exit(n_17);
        t = (ATerm) ATinsert(ATempty, term_g_24);
      }
    }
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL;
  t = get_title_0_0(t);
  r_17 = t;
  t = term_t_7;
  t = create_time_0_0(t);
  q_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_25), term_x_24), term_w_24), term_v_24), r_17), term_u_24), term_r_24), term_q_24), term_p_24), term_o_24), term_n_24), term_m_24), q_17), term_k_24), term_i_24);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm e_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_10;
      t = get_config_0_0(t);
      LocalPopChoice(g_25);
    }
  else
    {
      t = e_25;
      t = term_h_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm h_95 (ATerm), ATerm t)
{
  static ATerm a_1 (ATerm t)
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_17 = NULL;
        t = term_p_10;
        t = get_config_0_0(t);
        s_17 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, s_17);
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        t = term_m_10;
      }
    t = h_95(t);
    t = copy_to_1_0(b_1, t);
    return(t);
  }
  t = xtc_temp_files_1_0(a_1, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm w_17 = NULL,z_17 = NULL,s_1 = NULL,w_1 = NULL,f_1 = NULL,k_1 = NULL;
  z_17 = t;
  t = create_header_0_0(t);
  f_1 = t;
  t = xtc_new_file_0_0(t);
  k_1 = t;
  t = open_file_0_0(t);
  t = SSL_print(k_1, f_1);
  t = SSL_close_file(k_1);
  t = z_17;
  {
    ATerm n_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_18 = ATgetArgument(t, 0);
            {
              ATerm m_1 = NULL,b_0 = NULL;
              t = SSLgetAnnotations(z_17);
              m_1 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_18);
              b_0 = t;
              t = SSLsetAnnotations(b_0, m_1);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_17;
          }
        LocalPopChoice(t_25);
        t = xtc_transform_file_2_0(g_1, pass_verbose_0_0, t);
      }
    else
      {
        t = n_25;
        t = xtc_transform_term_2_0(h_1, pass_verbose_0_0, t);
      }
  }
  w_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_25), term_u_25);
  s_1 = t;
  t = xtc_new_file_0_0(t);
  w_1 = t;
  t = open_file_0_0(t);
  t = SSL_print(w_1, s_1);
  t = SSL_close_file(w_1);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FILE_1, w_1)), w_17), (ATerm) ATmakeAppl(sym_FILE_1, k_1));
  t = xtc_cat_0_0(t);
  return(t);
}
static ATerm g_1 (ATerm t)
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
  t = xtc_io_1_0(d_1, t);
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
      ATerm m_18 = NULL;
      m_18 = t;
      t = SSL_is_string(m_18);
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
              ATerm w_18 = NULL,y_18 = NULL,a_19 = NULL;
              w_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_18 = ATgetArgument(t, 0);
                  t = y_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_18 = ATgetArgument(t, 0);
                      t = y_18;
                      {
                        ATerm f_26 = t;
                        int h_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(h_26);
                          }
                        else
                          {
                            t = f_26;
                            t = debug_1_0(j_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_19 = NULL,g_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_18 = ATgetArgument(t, 0);
                          a_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_18;
                      t = eval_config_0_0(t);
                      f_19 = t;
                      t = a_19;
                      t = eval_config_0_0(t);
                      g_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_19, g_19);
                      t = o_9(f_19, g_19, t);
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
  ATerm k_19 = NULL,l_19 = NULL;
  k_19 = t;
  t = term_i_26;
  l_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_26, k_19);
  t = p_9(l_19, k_19, t);
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_19 = NULL,n_19 = NULL;
        t = eval_config_0_0(t);
        m_19 = t;
        t = term_i_26;
        n_19 = t;
        t = SSL_table_put(n_19, k_19, m_19);
        t = m_19;
        LocalPopChoice(k_26);
      }
    else
      {
        t = j_26;
      }
  }
  return(t);
}
static ATerm j_9 (ATerm r_33, ATerm s_33, ATerm t)
{
  t = SSL_copy(r_33, s_33);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL;
  f_20 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_3 = NULL;
        t = f_20;
        t = o_0(t);
        a_3 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = a_3;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = a_3;
          }
        t = (ATerm) ATmakeAppl(sym__2, g_20, a_3);
        t = j_9(g_20, a_3, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, g_20);
        LocalPopChoice(q_26);
      }
    else
      {
        t = m_26;
        {
          ATerm s_26 = t;
          int w_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_3 = NULL;
              t = f_20;
              t = o_0(t);
              s_3 = t;
              {
                ATerm z_26 = t;
                if((PushChoice() == 0))
                  {
                    ATerm v_3 = NULL;
                    v_3 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = v_3;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = v_3;
                          }
                        else
                          {
                            t = v_3;
                            if((g_20 != t))
                              {
                                _fail(t);
                              }
                            t = v_3;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_26;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, g_20, s_3);
              t = j_9(g_20, s_3, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_20);
              LocalPopChoice(w_26);
            }
          else
            {
              t = s_26;
              t = f_20;
              t = o_0(t);
              if((g_20 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_20);
            }
        }
      }
  }
  return(t);
}
static ATerm w_8 (ATerm y_24, ATerm z_24, ATerm t)
{
  ATerm a_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(y_24, z_24);
      LocalPopChoice(d_27);
    }
  else
    {
      t = a_27;
      t = SSL_subtr(y_24, z_24);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
  t = term_e_27;
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        t = term_z_12;
      }
  }
  q_20 = t;
  t = term_z_12;
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_20, term_z_12);
  t = w_8(q_20, s_20, t);
  r_20 = t;
  t = SSL_int_to_string(r_20);
  p_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_20), term_e_27);
  return(t);
}
static ATerm x_8 (ATerm t_36, ATerm u_36, ATerm t)
{
  t = SSL_execvp(t_36, u_36);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL,y_21 = NULL;
  t_21 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      u_21 = ATgetArgument(t, 0);
      {
        ATerm h_4 = NULL,l_4 = NULL;
        t = SSL_int_to_string(u_21);
        h_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_27), h_4), term_i_27);
        l_4 = t;
        t = SSL_concat_strings(l_4);
      }
    }
  else
    {
      ATerm x_4 = NULL,y_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          u_21 = ATgetArgument(t, 0);
          v_21 = ATgetArgument(t, 1);
          y_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(v_21);
      x_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_21), term_o_27), x_4), term_k_27), u_21);
      y_4 = t;
      t = SSL_concat_strings(y_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm b_71 (ATerm), ATerm t)
{
  ATerm d_22 = NULL;
  static ATerm l_1 (ATerm t)
  {
    t = b_71(t);
    if(((d_22 != NULL) && (d_22 != t)))
      _fail(t);
    else
      d_22 = t;
    return(t);
  }
  t = fetch_1_0(l_1, t);
  t = not_null(d_22);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm g_22 = NULL;
  g_22 = t;
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm r_27 = ATgetArgument(t, 0);
              if((g_22 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm w_27 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_35), term_e_35), term_u_34), term_o_34), term_l_34), term_x_33), term_p_33), term_d_33), term_y_32), term_v_32), term_p_32), term_l_32), term_h_32), term_d_32), term_z_31), term_w_31), term_o_31), term_c_31), term_w_30), term_n_30), term_c_30), term_z_29), term_p_29), term_j_29), term_c_29), term_u_28), term_l_28), term_z_27);
        t = fetch_elem_1_0(n_1, t);
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, g_22);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm o_22 = NULL,d_23 = NULL;
  o_22 = t;
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_35 = ATgetArgument(t, 0);
            d_23 = ATgetArgument(t, 1);
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
              ATerm i_5 = NULL,l_5 = NULL,p_5 = NULL;
              t = d_23;
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
              i_5 = t;
              t = term_f_24;
              l_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, i_5), term_q_35);
              p_5 = t;
              t = SSL_printnl(l_5, p_5);
              t = (ATerm) ATmakeAppl(sym__2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, i_5), term_q_35));
              LocalPopChoice(o_35);
            }
          else
            {
              t = n_35;
              t = o_22;
            }
        }
      }
    else
      {
        t = j_35;
        t = o_22;
      }
  }
  t = o_22;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm n_81 (ATerm), ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL;
  l_23 = t;
  t = fork_0_0(t);
  k_23 = t;
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = l_23;
        t = n_81(t);
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
        t = SSL_waitpid(k_23);
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
        t = l_23;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  n_23 = t;
  t = g_82(t);
  o_23 = t;
  t = term_f_24;
  p_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_23), o_23);
  q_23 = t;
  t = SSL_printnl(p_23, q_23);
  t = n_23;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm r_23 = NULL;
  static ATerm o_1 (ATerm t)
  {
    ATerm s_23 = NULL,t_23 = NULL;
    s_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_23), s_23);
    t = p_9(not_null(r_23), s_23, t);
    t_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_23, t_23);
    return(t);
  }
  if(((r_23 != NULL) && (r_23 != t)))
    _fail(t);
  else
    r_23 = t;
  t = SSL_table_keys(r_23);
  t = map_1_0(o_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm w_93 (ATerm), ATerm t)
{
  ATerm v_23 = NULL;
  v_23 = t;
  {
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_23 = NULL;
        t = term_e_27;
        t = get_config_0_0(t);
        x_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_23, term_n_13);
        t = geq_0_0(t);
        t = v_23;
        t = w_93(t);
        LocalPopChoice(b_36);
      }
    else
      {
        t = a_36;
        t = v_23;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  ATerm a_24 = NULL;
  a_24 = t;
  {
    ATerm c_36 = t;
    int f_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_24 = NULL;
        t = term_e_27;
        t = get_config_0_0(t);
        e_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_24, term_p_13);
        t = geq_0_0(t);
        t = a_24;
        t = v_93(t);
        LocalPopChoice(f_36);
      }
    else
      {
        t = c_36;
        t = a_24;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm h_24 = NULL;
  h_24 = t;
  {
    ATerm h_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_24 = NULL;
        t = term_e_27;
        t = get_config_0_0(t);
        j_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_24, term_l_13);
        t = geq_0_0(t);
        t = h_24;
        t = x_93(t);
        LocalPopChoice(k_36);
      }
    else
      {
        t = h_36;
        t = h_24;
      }
  }
  return(t);
}
static ATerm a_9 (ATerm w_74 (ATerm), ATerm x_74 (ATerm), ATerm h_21, ATerm g_21, ATerm t)
{
  t = x_74(t);
  {
    static ATerm p_1 (ATerm t)
    {
      ATerm l_24 = NULL;
      l_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_21, l_24);
      t = w_74(t);
      return(t);
    }
    t = fetch_1_0(p_1, t);
  }
  t = g_21;
  return(t);
}
static ATerm b_9 (ATerm t_74 (ATerm), ATerm d_21, ATerm c_21, ATerm t)
{
  static ATerm f_25 (ATerm t)
  {
    ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
    a_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_25 = ATgetFirst((ATermList) t);
            c_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_36 = t;
          int m_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_25;
              {
                static ATerm v_1 (ATerm t)
                {
                  t = c_21;
                  return(t);
                }
                t = a_9(t_74, v_1, b_25, c_25, t);
              }
              t = f_25(t);
              LocalPopChoice(m_36);
            }
          else
            {
              t = l_36;
              {
                ATerm w_5 = NULL,h_6 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(a_25);
                w_5 = t;
                t = c_25;
                t = f_25(t);
                h_6 = t;
                t = (ATerm) ATinsert(CheckATermList(h_6), b_25);
                z_0 = t;
                t = SSLsetAnnotations(z_0, w_5);
              }
            }
        }
      }
    return(t);
  }
  t = d_21;
  t = f_25(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm o_25 = NULL;
  if(match_cons(t, sym__2))
    {
      o_25 = ATgetArgument(t, 0);
      if((o_25 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_9 (ATerm l_27, ATerm m_27, ATerm n_27, ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
  i_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
  {
    ATerm x_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_37 = ATgetArgument(t, 0);
            ATerm b_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
        t = p_9(l_27, m_27, t);
        LocalPopChoice(z_36);
      }
    else
      {
        t = x_36;
        t = (ATerm) ATempty;
      }
  }
  k_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_25, n_27);
  t = b_9(x_1, k_25, n_27, t);
  j_25 = t;
  t = SSL_table_put(l_27, m_27, j_25);
  t = i_25;
  return(t);
}
static ATerm d_9 (ATerm w_78 (ATerm), ATerm v_27, ATerm u_27, ATerm t)
{
  static ATerm y_1 (ATerm t)
  {
    ATerm p_25 = NULL,s_25 = NULL;
    if(match_cons(t, sym__2))
      {
        p_25 = ATgetArgument(t, 0);
        s_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, v_27, p_25, s_25);
    t = w_78(t);
    return(t);
  }
  t = u_27;
  t = map_1_0(y_1, t);
  return(t);
}
static ATerm h_9 (ATerm w_13, ATerm x_13, ATerm t)
{
  t = SSL_access(w_13, x_13);
  return(t);
}
static ATerm x_26 (ATerm l_26, ATerm t)
{
  t = SSL_fclose(l_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_26 = NULL,v_26 = NULL;
  v_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_26 = ATgetArgument(t, 0);
      {
        ATerm c_37 = t;
        int d_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_26);
            LocalPopChoice(d_37);
          }
        else
          {
            t = c_37;
            t = x_26(v_26, t);
          }
      }
    }
  else
    {
      t = x_26(v_26, t);
    }
  return(t);
}
static ATerm e_9 (ATerm w_37, ATerm t)
{
  t = SSL_read_term_from_stream(w_37);
  return(t);
}
static ATerm f_9 (ATerm f_14, ATerm g_14, ATerm t)
{
  ATerm y_26 = NULL;
  t = SSL_fopen(f_14, g_14);
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_26);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_27 = NULL;
  t = SSL_stdin_stream();
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_27 = NULL;
  t = SSL_stdout_stream();
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_27 = NULL;
  t = SSL_stderr_stream();
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_27);
  return(t);
}
static ATerm a_29 (ATerm s_27, ATerm t)
{
  ATerm t_27 = NULL;
  t = SSL_explode_term(s_27);
  if(match_cons(t, sym__2))
    {
      ATerm f_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_37 = ATgetArgument(t, 1);
        if(((ATgetType(g_37) == AT_LIST) && !(ATisEmpty(g_37))))
          {
            t_27 = ATgetFirst((ATermList) g_37);
            {
              ATerm i_37 = (ATerm) ATgetNext((ATermList) g_37);
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
static ATerm d_29 (ATerm a_28, ATerm b_28, ATerm c_28, ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,h_28 = NULL,k_28 = NULL,q_1 = NULL;
  t = SSLgetAnnotations(c_28);
  h_28 = t;
  t = a_28;
  if(match_cons(t, sym_Path_1))
    {
      k_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_28, b_28);
  q_1 = t;
  t = SSLsetAnnotations(q_1, h_28);
  if(match_cons(t, sym__2))
    {
      d_28 = ATgetArgument(t, 0);
      e_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(d_28, e_28, t);
  return(t);
}
static ATerm e_29 (ATerm m_28, ATerm n_28, ATerm o_28, ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,v_28 = NULL,r_1 = NULL;
  t = SSLgetAnnotations(o_28);
  r_28 = t;
  t = SSL_is_string(m_28);
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_28, n_28);
  r_1 = t;
  t = SSLsetAnnotations(r_1, r_28);
  if(match_cons(t, sym__2))
    {
      p_28 = ATgetArgument(t, 0);
      q_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(p_28, q_28, t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  x_28 = t;
  if(match_cons(t, sym__2))
    {
      y_28 = ATgetArgument(t, 0);
      z_28 = ATgetArgument(t, 1);
      {
        ATerm j_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_29(x_28, t);
            LocalPopChoice(l_37);
          }
        else
          {
            t = j_37;
            {
              ATerm t_37 = t;
              int x_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_29(y_28, z_28, x_28, t);
                  LocalPopChoice(x_37);
                }
              else
                {
                  t = t_37;
                  t = e_29(y_28, z_28, x_28, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_29(x_28, t);
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_z_37;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,k_29 = NULL;
  ATerm a_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_29 = NULL;
      l_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_29, term_f_38);
      t = g_9(t);
      LocalPopChoice(d_38);
    }
  else
    {
      t = a_38;
      t = debug_1_0(a_2, t);
      _fail(t);
    }
  g_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(k_29, t);
  f_29 = t;
  t = g_29;
  t = fclose_0_0(t);
  t = f_29;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_g_38;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_i_38;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm k_38 = t;
  int l_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_29 = NULL,r_29 = NULL;
      q_29 = t;
      t = (ATerm) ATinsert(ATempty, term_m_38);
      r_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_29, (ATerm) ATinsert(ATempty, term_m_38));
      t = h_9(q_29, r_29, t);
      LocalPopChoice(l_38);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = k_38;
      {
        ATerm o_38 = t;
        int q_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_38 = t;
            if((PushChoice() == 0))
              {
                ATerm s_29 = NULL,u_29 = NULL;
                s_29 = t;
                t = (ATerm) ATinsert(ATempty, term_y_8);
                u_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_29, (ATerm) ATinsert(ATempty, term_y_8));
                t = h_9(s_29, u_29, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_38;
              }
            t = debug_1_0(d_2, t);
            LocalPopChoice(q_38);
          }
        else
          {
            t = o_38;
            t = debug_1_0(e_2, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_s_38;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_u_38;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,d_31 = NULL;
  t_30 = t;
  t = term_f_24;
  u_30 = t;
  t = (ATerm) ATinsert(ATempty, term_v_38);
  d_31 = t;
  t = SSL_printnl(u_30, d_31);
  t = t_30;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  if(match_cons(t, sym__3))
    {
      e_31 = ATgetArgument(t, 0);
      f_31 = ATgetArgument(t, 1);
      g_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_9(e_31, f_31, g_31, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,l_31 = NULL;
  h_31 = t;
  t = term_f_24;
  i_31 = t;
  t = (ATerm) ATinsert(ATempty, term_w_38);
  l_31 = t;
  t = SSL_printnl(i_31, l_31);
  t = h_31;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,s_31 = NULL;
  m_31 = t;
  t = term_f_24;
  n_31 = t;
  t = (ATerm) ATinsert(ATempty, term_v_38);
  s_31 = t;
  t = SSL_printnl(n_31, s_31);
  t = m_31;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm w_29 = NULL,y_29 = NULL,f_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,p_30 = NULL;
  w_29 = t;
  t = if_verbose5_1_0(g_2, t);
  {
    ATerm x_38 = t;
    if((PushChoice() == 0))
      {
        ATerm q_30 = NULL,r_30 = NULL;
        t = term_y_38;
        q_30 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, w_29);
        r_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_38, (ATerm) ATmakeAppl(sym_Imported_1, w_29));
        t = p_9(q_30, r_30, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_38;
      }
  }
  f_30 = t;
  t = term_y_38;
  l_30 = t;
  t = term_z_38;
  m_30 = t;
  t = (ATerm) ATinsert(ATempty, w_29);
  p_30 = t;
  t = SSL_table_put(l_30, m_30, p_30);
  t = f_30;
  t = if_verbose4_1_0(o_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(r_2, t);
  y_29 = t;
  t = term_y_38;
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_38, y_29);
  t = d_9(s_2, k_30, y_29, t);
  t = if_verbose6_1_0(u_2, t);
  t = term_y_38;
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, w_29);
  i_30 = t;
  t = (ATerm) ATempty;
  j_30 = t;
  t = SSL_table_put(h_30, i_30, j_30);
  t = (ATerm) ATmakeAppl(sym__3, term_y_38, (ATerm)ATmakeAppl(sym_Imported_1, w_29), (ATerm) ATempty);
  t = if_verbose4_1_0(w_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,u_32 = NULL;
  r_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_32;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_32 = ATgetFirst((ATermList) t);
          u_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_39 = t;
        int c_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_7 = NULL,e_7 = NULL,f_7 = NULL,m_3 = NULL;
            t = SSLgetAnnotations(r_32);
            b_7 = t;
            t = s_32;
            t = x_78(t);
            e_7 = t;
            t = u_32;
            t = filter_1_0(x_78, t);
            f_7 = t;
            t = (ATerm) ATinsert(CheckATermList(f_7), e_7);
            m_3 = t;
            t = SSLsetAnnotations(m_3, b_7);
            LocalPopChoice(c_39);
          }
        else
          {
            t = b_39;
            t = u_32;
            t = filter_1_0(x_78, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm u_68 (ATerm), ATerm v_68 (ATerm), ATerm t)
{
  static ATerm a_33 (ATerm t)
  {
    ATerm g_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_68(t);
        t = a_33(t);
        LocalPopChoice(i_39);
      }
    else
      {
        t = g_39;
        t = v_68(t);
      }
    return(t);
  }
  t = a_33(t);
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
        ATerm n_39 = t;
        int o_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_33 = NULL;
            t = term_p_39;
            c_33 = t;
            t = SSL_getenv(c_33);
            LocalPopChoice(o_39);
          }
        else
          {
            t = n_39;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = debug_1_0(b_3, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_q_39;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL;
  t = term_y_38;
  m_33 = t;
  t = term_s_39;
  n_33 = t;
  t = term_t_39;
  t = p_9(m_33, n_33, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm u_39 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_39;
      }
  }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = debug_1_0(e_3, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_v_39;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm g_33 = NULL;
  t = if_verbose5_1_0(y_2, t);
  g_33 = t;
  {
    ATerm z_39 = t;
    int a_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_33 = NULL,k_33 = NULL;
        t = term_y_38;
        j_33 = t;
        t = term_z_38;
        k_33 = t;
        t = term_b_40;
        t = p_9(j_33, k_33, t);
        LocalPopChoice(a_40);
      }
    else
      {
        t = z_39;
        {
          ATerm l_33 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          l_33 = t;
          t = repeat_2_0(c_3, _id, t);
          t = l_33;
        }
      }
  }
  t = g_33;
  t = if_verbose5_1_0(d_3, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = debug_1_0(l_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_c_40;
  return(t);
}
static ATerm r_34 (ATerm y_33, ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
  t = term_y_38;
  b_34 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, y_33);
  c_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_38, (ATerm) ATmakeAppl(sym_Tool_1, y_33));
  t = p_9(b_34, c_34, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_40 = ATgetFirst((ATermList) t);
      if(match_cons(e_40, sym__2))
        {
          ATerm j_40 = ATgetArgument(e_40, 0);
          a_34 = ATgetArgument(e_40, 1);
        }
      else
        _fail(t);
      {
        ATerm f_40 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_34;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = debug_1_0(p_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_c_40;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_y_38;
  t = table_getlist_0_0(t);
  t = debug_1_0(t_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_k_40;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm n_40 = t;
  int o_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL;
      t = if_verbose5_1_0(g_3, t);
      t = xtc_load_0_0(t);
      f_34 = t;
      if(match_cons(t, sym__2))
        {
          d_34 = ATgetArgument(t, 0);
          e_34 = ATgetArgument(t, 1);
          {
            ATerm p_40 = t;
            int q_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL;
                t = term_y_38;
                j_34 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, d_34);
                k_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_y_38, (ATerm) ATmakeAppl(sym_Tool_1, d_34));
                t = p_9(j_34, k_34, t);
                {
                  static ATerm n_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((e_34 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((i_34 != NULL) && (i_34 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          i_34 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(n_3, t);
                }
                t = not_null(i_34);
                LocalPopChoice(q_40);
              }
            else
              {
                t = p_40;
                t = r_34(f_34, t);
              }
          }
        }
      else
        {
          t = r_34(f_34, t);
        }
      t = if_verbose5_1_0(o_3, t);
      LocalPopChoice(o_40);
    }
  else
    {
      t = n_40;
      {
        ATerm q_34 = NULL,m_7 = NULL,n_7 = NULL;
        q_34 = t;
        t = term_f_24;
        m_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_40), q_34), term_r_40);
        n_7 = t;
        t = SSL_printnl(m_7, n_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_40), q_34), term_r_40);
        t = if_verbose5_1_0(q_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm u_95 (ATerm), ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL;
  x_34 = t;
  t = u_95(t);
  t = xtc_find_0_0(t);
  w_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_34, x_34);
  {
    static ATerm x_3 (ATerm t)
    {
      ATerm y_34 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, w_34, x_34);
      t = x_8(w_34, x_34, t);
      t = term_a_41;
      y_34 = t;
      t = SSL_exit(y_34);
      return(t);
    }
    t = fork_and_wait_1_0(x_3, t);
  }
  t = x_34;
  return(t);
}
ATerm at_end_1_0 (ATerm f_71 (ATerm), ATerm t)
{
  static ATerm z_35 (ATerm t)
  {
    ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
    y_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_35 = ATgetFirst((ATermList) t);
        x_35 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_7 = NULL,v_7 = NULL,g_8 = NULL;
          t = SSLgetAnnotations(y_35);
          s_7 = t;
          t = x_35;
          t = z_35(t);
          v_7 = t;
          t = (ATerm) ATinsert(CheckATermList(v_7), w_35);
          g_8 = t;
          t = SSLsetAnnotations(g_8, s_7);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_35;
        t = f_71(t);
      }
    return(t);
  }
  t = z_35(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  a_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_35;
    }
  else
    {
      static ATerm y_3 (ATerm t)
      {
        t = not_null(c_35);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_35 = ATgetFirst((ATermList) t);
          if(((c_35 != NULL) && (c_35 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_35;
      t = at_end_1_0(y_3, t);
    }
  return(t);
}
static ATerm n_36 (ATerm d_36, ATerm t)
{
  ATerm e_36 = NULL;
  t = SSL_explode_term(d_36);
  if(match_cons(t, sym__2))
    {
      ATerm b_41 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_41) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_36;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_36 = NULL,i_36 = NULL,j_36 = NULL;
  j_36 = t;
  if(match_cons(t, sym__2))
    {
      g_36 = ATgetArgument(t, 0);
      i_36 = ATgetArgument(t, 1);
      {
        ATerm c_41 = t;
        int e_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm z_3 (ATerm t)
            {
              t = i_36;
              return(t);
            }
            t = g_36;
            t = at_end_1_0(z_3, t);
            LocalPopChoice(e_41);
          }
        else
          {
            t = c_41;
            t = n_36(j_36, t);
          }
      }
    }
  else
    {
      t = n_36(j_36, t);
    }
  return(t);
}
static ATerm i_9 (ATerm t_78 (ATerm), ATerm g_26, ATerm e_26, ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL,v_36 = NULL;
  r_36 = t;
  t = t_78(t);
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_36, g_26, e_26);
  t = q_9(o_36, g_26, e_26, t);
  {
    ATerm f_41 = t;
    int g_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_36 = NULL;
        t = term_l_41;
        w_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_36, term_l_41);
        t = p_9(o_36, w_36, t);
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
      p_36 = ATgetFirst((ATermList) t);
      q_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_l_41;
  s_36 = t;
  t = (ATerm) ATinsert(CheckATermList(q_36), (ATerm) ATinsert(CheckATermList(p_36), g_26));
  v_36 = t;
  t = SSL_table_put(o_36, s_36, v_36);
  t = r_36;
  return(t);
}
static ATerm o_9 (ATerm h_33, ATerm i_33, ATerm t)
{
  t = SSL_strcat(h_33, i_33);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm y_36 = NULL,e_37 = NULL,h_37 = NULL,k_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
  t = P__tmpdir_0_0(t);
  k_37 = t;
  t = term_u_41;
  p_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_37, term_u_41);
  t = o_9(k_37, p_37, t);
  n_37 = t;
  t = term_w_41;
  o_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_37, term_w_41);
  t = o_9(n_37, o_37, t);
  m_37 = t;
  t = SSL_mkstemp(m_37);
  if(match_cons(t, sym__2))
    {
      e_37 = ATgetArgument(t, 0);
      y_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_t_7;
  h_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_37, term_t_7);
  t = i_9(a_4, e_37, h_37, t);
  t = SSL_close(y_36);
  t = e_37;
  return(t);
}
ATerm xtc_generate_2_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm t)
{
  ATerm s_37 = NULL,u_37 = NULL;
  t = term_t_7;
  t = xtc_new_file_0_0(t);
  s_37 = t;
  t = z_94(t);
  u_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_37, (ATerm) ATinsert(ATinsert(ATempty, s_37), term_o_10));
  t = conc_0_0(t);
  t = xtc_command_1_0(y_94, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, s_37);
  return(t);
}
static ATerm k_9 (ATerm t_26, ATerm u_26, ATerm t)
{
  ATerm v_37 = NULL,b_38 = NULL;
  b_38 = t;
  {
    ATerm z_41 = t;
    int d_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_26, u_26);
        t = p_9(t_26, u_26, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_42 = ATgetFirst((ATermList) t);
            v_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(d_42);
        t = SSL_table_put(t_26, u_26, v_37);
        t = (ATerm) ATmakeAppl(sym__3, t_26, u_26, v_37);
      }
    else
      {
        t = z_41;
        t = SSL_table_remove(t_26, u_26);
        t = (ATerm) ATmakeAppl(sym__2, t_26, u_26);
      }
  }
  t = b_38;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm c_38 = NULL,e_38 = NULL,h_38 = NULL,j_38 = NULL,n_38 = NULL;
  j_38 = t;
  t = q_78(t);
  h_38 = t;
  {
    ATerm g_42 = t;
    int m_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_38 = NULL;
        t = term_l_41;
        p_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_38, term_l_41);
        t = p_9(h_38, p_38, t);
        LocalPopChoice(m_42);
      }
    else
      {
        t = g_42;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_38 = ATgetFirst((ATermList) t);
      c_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_l_41;
  n_38 = t;
  t = SSL_table_put(h_38, n_38, c_38);
  t = e_38;
  {
    static ATerm c_4 (ATerm t)
    {
      ATerm t_38 = NULL;
      t_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_38, t_38);
      t = k_9(h_38, t_38, t);
      return(t);
    }
    t = map_1_0(c_4, t);
  }
  t = j_38;
  return(t);
}
ATerm restore_always_2_0 (ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm t)
{
  ATerm q_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_68(t);
      t = q_68(t);
      LocalPopChoice(s_42);
    }
  else
    {
      t = q_42;
      t = q_68(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_78 (ATerm), ATerm t)
{
  ATerm a_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,h_39 = NULL;
  d_39 = t;
  t = p_78(t);
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_39, term_l_41);
  {
    ATerm t_42 = t;
    int w_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_39 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_42 = ATgetArgument(t, 0);
            ATerm z_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_41;
        m_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_39, term_l_41);
        t = p_9(a_39, m_39, t);
        LocalPopChoice(w_42);
      }
    else
      {
        t = t_42;
        t = (ATerm) ATempty;
      }
  }
  e_39 = t;
  t = term_l_41;
  f_39 = t;
  t = (ATerm) ATinsert(CheckATermList(e_39), (ATerm) ATempty);
  h_39 = t;
  t = SSL_table_put(a_39, f_39, h_39);
  t = d_39;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_m_9;
  return(t);
}
static ATerm p_4 (ATerm t)
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
static ATerm q_4 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm g_95 (ATerm), ATerm t)
{
  ATerm r_39 = NULL;
  static ATerm o_4 (ATerm t)
  {
    ATerm w_39 = NULL;
    w_39 = t;
    {
      ATerm c_43 = t;
      int d_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_39 = NULL,y_39 = NULL;
          t = term_m_9;
          x_39 = t;
          t = term_l_41;
          y_39 = t;
          t = term_e_43;
          t = p_9(x_39, y_39, t);
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
        if(((r_39 != NULL) && (r_39 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          r_39 = ATgetFirst((ATermList) t);
        {
          ATerm f_43 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = r_39;
    t = map_1_0(p_4, t);
    t = w_39;
    t = end_scope_1_0(q_4, t);
    return(t);
  }
  t = begin_scope_1_0(n_4, t);
  t = restore_always_2_0(g_95, o_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,l_40 = NULL,m_40 = NULL;
  g_40 = t;
  t = term_t_7;
  t = whoami_0_0(t);
  h_40 = t;
  t = term_f_24;
  l_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_43), h_40), term_h_43);
  m_40 = t;
  t = SSL_printnl(l_40, m_40);
  t = term_z_12;
  i_40 = t;
  t = SSL_exit(i_40);
  t = g_40;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL;
      t = term_t_7;
      t = n_0(t);
      x_40 = t;
      t = term_k_43;
      y_40 = t;
      t = term_l_43;
      z_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_43, term_l_43, x_40);
      t = q_9(y_40, z_40, x_40, t);
      _fail(t);
    }
  else
    {
      ATerm d_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_40 = ATgetFirst((ATermList) t);
          u_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_40;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_40 = ATgetFirst((ATermList) t);
          w_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_40;
      t = k_0(t);
      t = v_40;
      t = l_0(t);
      d_41 = t;
      t = (ATerm) ATinsert(CheckATermList(w_40), d_41);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm h_41 = NULL;
  h_41 = t;
  if(match_string(t, "-k"))
    {
      t = h_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_41;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL;
  i_41 = t;
  t = SSL_string_to_int(i_41);
  j_41 = t;
  t = term_m_43;
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_43, j_41);
  t = s_9(k_41, j_41, t);
  t = i_41;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_n_43;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm m_41 = NULL;
  m_41 = t;
  if(match_string(t, "-S"))
    {
      t = m_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_41;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL;
  t = term_e_27;
  n_41 = t;
  t = term_d_13;
  o_41 = t;
  t = term_o_43;
  t = s_9(n_41, o_41, t);
  t = term_p_43;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_q_43;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
  p_41 = t;
  t = SSL_string_to_int(p_41);
  q_41 = t;
  t = term_e_27;
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_27, q_41);
  t = s_9(r_41, q_41, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_41);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_r_43;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL;
  t = term_s_43;
  s_41 = t;
  t = term_t_7;
  t_41 = t;
  t = term_t_43;
  t = s_9(s_41, t_41, t);
  t = term_u_43;
  return(t);
}
static ATerm g_5 (ATerm t)
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
      t = Option_3_0(u_4, v_4, w_4, t);
      LocalPopChoice(x_43);
    }
  else
    {
      t = w_43;
      {
        ATerm b_44 = t;
        int c_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_4, c_5, d_5, t);
            LocalPopChoice(c_44);
          }
        else
          {
            t = b_44;
            t = Option_3_0(e_5, f_5, g_5, t);
          }
      }
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm v_41 = NULL;
  v_41 = t;
  if(match_string(t, "-o"))
    {
      t = v_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_41;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL;
  x_41 = t;
  t = term_o_10;
  y_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_10, x_41);
  t = s_9(y_41, x_41, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_41);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_d_44;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_5, j_5, k_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm a_42 = NULL;
  a_42 = t;
  if(match_string(t, "-i"))
    {
      t = a_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_42;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL;
  b_42 = t;
  t = term_p_10;
  c_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_10, b_42);
  t = s_9(c_42, b_42, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_42);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_e_44;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, q_5, s_5, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm e_42 = NULL,h_42 = NULL,i_42 = NULL;
  e_42 = t;
  t = term_g_44;
  h_42 = t;
  t = term_i_44;
  i_42 = t;
  t = term_l_44;
  t = s_9(h_42, i_42, t);
  t = e_42;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_n_44;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm j_42 = NULL;
  j_42 = t;
  if(match_string(t, "-t"))
    {
      t = j_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--title", 0, ATtrue)))
        _fail(t);
      t = j_42;
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL;
  k_42 = t;
  t = term_d_24;
  l_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_24, k_42);
  t = s_9(l_42, k_42, t);
  t = k_42;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_o_44;
  return(t);
}
ATerm abox2html_options_0_0 (ATerm t)
{
  ATerm q_44 = t;
  int r_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(r_44);
    }
  else
    {
      t = q_44;
      {
        ATerm t_44 = t;
        int w_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(w_44);
          }
        else
          {
            t = t_44;
            {
              ATerm x_44 = t;
              int y_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
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
                        t = keep_option_0_0(t);
                        LocalPopChoice(a_45);
                      }
                    else
                      {
                        t = z_44;
                        {
                          ATerm b_45 = t;
                          int c_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(u_5, v_5, a_6, t);
                              LocalPopChoice(c_45);
                            }
                          else
                            {
                              t = b_45;
                              t = ArgOption_3_0(d_6, k_6, m_6, t);
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
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,r_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_7;
  t = whoami_0_0(t);
  n_42 = t;
  t = term_f_24;
  p_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_45), n_42);
  r_42 = t;
  t = SSL_printnl(p_42, r_42);
  t = term_z_12;
  o_42 = t;
  t = SSL_exit(o_42);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_45;
  t = get_config_0_0(t);
  return(t);
}
static ATerm l_9 (ATerm s_24, ATerm t_24, ATerm t)
{
  ATerm f_45 = t;
  int g_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_24, t_24);
      LocalPopChoice(g_45);
    }
  else
    {
      t = f_45;
      t = SSL_addr(s_24, t_24);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,x_42 = NULL;
  u_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_42;
      t = h_77(t);
    }
  else
    {
      ATerm g_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_42 = ATgetFirst((ATermList) t);
          x_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_42;
      t = foldr_2_0(h_77, i_77, t);
      g_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_42, g_43);
      t = i_77(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_d_13;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL;
  if(match_cons(t, sym__2))
    {
      h_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(h_8, i_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_43 = NULL,d_8 = NULL,e_8 = NULL;
  t = times_0_0(t);
  e_8 = t;
  t = SSL_explode_term(e_8);
  if(match_cons(t, sym__2))
    {
      ATerm h_45 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_8;
  t = foldr_2_0(o_6, p_6, t);
  j_43 = t;
  t = SSL_TicksToSeconds(j_43);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
  y_43 = t;
  if(match_cons(t, sym__2))
    {
      z_43 = ATgetArgument(t, 0);
      a_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_45 = t;
    int j_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_44;
        if((z_43 != t))
          {
            _fail(t);
          }
        t = y_43;
        LocalPopChoice(j_45);
      }
    else
      {
        t = i_45;
        t = (ATerm) ATmakeAppl(sym__2, z_43, a_44);
        {
          ATerm k_45 = t;
          int l_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_43, a_44);
              LocalPopChoice(l_45);
            }
          else
            {
              t = k_45;
              t = SSL_gtr(z_43, a_44);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, z_43, a_44);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_93 (ATerm), ATerm t)
{
  ATerm f_44 = NULL;
  f_44 = t;
  {
    ATerm m_45 = t;
    int n_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_44 = NULL;
        t = term_e_27;
        t = get_config_0_0(t);
        h_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_44, term_z_12);
        t = geq_0_0(t);
        t = f_44;
        t = s_93(t);
        LocalPopChoice(n_45);
      }
    else
      {
        t = m_45;
        t = f_44;
      }
  }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,m_44 = NULL,p_44 = NULL;
  t = run_time_0_0(t);
  j_44 = t;
  t = term_t_7;
  t = whoami_0_0(t);
  k_44 = t;
  t = term_f_24;
  m_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_45), j_44), term_k_27), k_44);
  p_44 = t;
  t = SSL_printnl(m_44, p_44);
  t = (ATerm) ATmakeAppl(sym__2, term_f_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_45), j_44), term_k_27), k_44));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_13;
  s_44 = t;
  t = SSL_exit(s_44);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm q_45 = NULL,r_45 = NULL;
  r_45 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_45;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_45 = ATgetArgument(t, 0);
          {
            ATerm h_10 = NULL,m_13 = NULL;
            t = SSLgetAnnotations(r_45);
            h_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_45);
            m_13 = t;
            t = SSLsetAnnotations(m_13, h_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_45;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_64 (ATerm), ATerm t)
{
  ATerm p_45 = t;
  int s_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_45;
      t = get_config_0_0(t);
      LocalPopChoice(s_45);
    }
  else
    {
      t = p_45;
      t = fetch_1_0(r_6, t);
    }
  t = d_64(t);
  return(t);
}
ATerm map_1_0 (ATerm p_70 (ATerm), ATerm t)
{
  static ATerm q_46 (ATerm t)
  {
    ATerm m_46 = NULL,n_46 = NULL,p_46 = NULL;
    m_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_46;
      }
    else
      {
        ATerm a_11 = NULL,f_11 = NULL,h_11 = NULL,o_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_46 = ATgetFirst((ATermList) t);
            p_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_46);
        a_11 = t;
        t = n_46;
        t = p_70(t);
        f_11 = t;
        t = p_46;
        t = q_46(t);
        h_11 = t;
        t = (ATerm) ATinsert(CheckATermList(h_11), f_11);
        o_13 = t;
        t = SSLsetAnnotations(o_13, a_11);
      }
    return(t);
  }
  t = q_46(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_46 = ATgetFirst((ATermList) t);
      u_46 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_46 = NULL,z_46 = NULL;
        static ATerm s_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_46)), not_null(z_46));
          return(t);
        }
        t = u_46;
        t = i_0(t);
        if(((y_46 != NULL) && (y_46 != t)))
          _fail(t);
        else
          y_46 = t;
        t = t_46;
        t = g_0(t);
        if(((z_46 != NULL) && (z_46 != t)))
          _fail(t);
        else
          z_46 = t;
        t = u_46;
        t = reverse_acc_2_0(g_0, s_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_7;
      t = i_0(t);
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,g_47 = NULL,q_13 = NULL;
  g_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_47);
  d_47 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_47);
  q_13 = t;
  t = SSLsetAnnotations(q_13, d_47);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm x_47 = NULL;
  x_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_47), term_u_45);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL;
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_45;
      t = get_config_0_0(t);
      LocalPopChoice(w_45);
    }
  else
    {
      t = v_45;
      t = fetch_1_0(t_6, t);
    }
  t = term_x_45;
  t = echo_0_0(t);
  t = term_k_43;
  b_47 = t;
  t = term_l_43;
  c_47 = t;
  t = term_y_45;
  t = p_9(b_47, c_47, t);
  t = reverse_acc_2_0(_id, u_6, t);
  t = map_1_0(v_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm z_70 (ATerm), ATerm t)
{
  static ATerm k_49 (ATerm t)
  {
    ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL;
    h_49 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_49 = ATgetFirst((ATermList) t);
        j_49 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_45 = t;
      int a_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_12 = NULL,k_12 = NULL,s_13 = NULL;
          t = SSLgetAnnotations(h_49);
          h_12 = t;
          t = i_49;
          t = z_70(t);
          k_12 = t;
          t = (ATerm) ATinsert(CheckATermList(j_49), k_12);
          s_13 = t;
          t = SSLsetAnnotations(s_13, h_12);
          LocalPopChoice(a_46);
        }
      else
        {
          t = z_45;
          {
            ATerm s_12 = NULL,v_12 = NULL,t_13 = NULL;
            t = SSLgetAnnotations(h_49);
            s_12 = t;
            t = j_49;
            t = k_49(t);
            v_12 = t;
            t = (ATerm) ATinsert(CheckATermList(v_12), i_49);
            t_13 = t;
            t = SSLsetAnnotations(t_13, s_12);
          }
        }
    }
    return(t);
  }
  t = k_49(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,p_50 = NULL;
  o_49 = t;
  {
    ATerm b_46 = t;
    int c_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_49;
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
            t = o_49;
          }
        LocalPopChoice(c_46);
      }
    else
      {
        t = b_46;
        t = (ATerm) ATinsert(ATempty, o_49);
      }
  }
  p_49 = t;
  t = term_h_25;
  p_50 = t;
  t = SSL_printnl(p_50, p_49);
  t = o_49;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_45;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL;
  t = term_f_46;
  t_50 = t;
  t = term_t_7;
  u_50 = t;
  t = term_g_46;
  t = s_9(t_50, u_50, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_h_46;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
  t = term_f_46;
  x_50 = t;
  t = term_t_7;
  y_50 = t;
  t = term_g_46;
  t = s_9(x_50, y_50, t);
  t = term_i_46;
  v_50 = t;
  t = term_t_7;
  w_50 = t;
  t = term_j_46;
  t = s_9(v_50, w_50, t);
  t = term_k_46;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_l_46;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_46 = t;
  int r_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_6, x_6, y_6, t);
      LocalPopChoice(r_46);
    }
  else
    {
      t = o_46;
      t = Option_3_0(z_6, a_7, c_7, t);
    }
  return(t);
}
static ATerm s_9 (ATerm u_44, ATerm v_44, ATerm t)
{
  ATerm z_50 = NULL;
  t = term_i_26;
  z_50 = t;
  t = SSL_table_put(z_50, u_44, v_44);
  t = (ATerm) ATmakeAppl(sym__3, term_i_26, u_44, v_44);
  return(t);
}
static ATerm p_9 (ATerm f_28, ATerm g_28, ATerm t)
{
  t = SSL_table_get(f_28, g_28);
  return(t);
}
static ATerm q_9 (ATerm o_26, ATerm p_26, ATerm n_26, ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
  b_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_26, p_26);
  {
    ATerm s_46 = t;
    int v_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_46 = ATgetArgument(t, 0);
            ATerm x_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_26, p_26);
        t = p_9(o_26, p_26, t);
        LocalPopChoice(v_46);
      }
    else
      {
        t = s_46;
        t = (ATerm) ATempty;
      }
  }
  c_51 = t;
  t = (ATerm) ATinsert(CheckATermList(c_51), n_26);
  d_51 = t;
  t = SSL_table_put(o_26, p_26, d_51);
  t = b_51;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL;
      t = term_t_7;
      t = e_0(t);
      l_51 = t;
      t = term_k_43;
      m_51 = t;
      t = term_l_43;
      n_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_43, term_l_43, l_51);
      t = q_9(m_51, n_51, l_51, t);
      _fail(t);
    }
  else
    {
      ATerm q_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_51 = ATgetFirst((ATermList) t);
          k_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_51;
      t = c_0(t);
      t = term_t_7;
      t = d_0(t);
      q_51 = t;
      t = (ATerm) ATinsert(CheckATermList(k_51), q_51);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_57 (ATerm), ATerm p_57 (ATerm), ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,e_14 = NULL;
  w_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_51 = ATgetFirst((ATermList) t);
      t_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_51);
  r_51 = t;
  t = s_51;
  t = o_57(t);
  u_51 = t;
  t = t_51;
  t = p_57(t);
  v_51 = t;
  t = (ATerm) ATinsert(CheckATermList(v_51), u_51);
  e_14 = t;
  t = SSLsetAnnotations(e_14, r_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_84 (ATerm), ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,g_52 = NULL,h_52 = NULL,i_14 = NULL;
  b_52 = t;
  {
    ATerm a_47 = t;
    int h_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_47;
        t = p_84(t);
        LocalPopChoice(h_47);
      }
    else
      {
        t = a_47;
      }
  }
  t = b_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_52 = ATgetFirst((ATermList) t);
      e_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_52);
  c_52 = t;
  t = term_e_45;
  h_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_45, d_52);
  t = s_9(h_52, d_52, t);
  t = e_52;
  {
    static ATerm r_52 (ATerm t)
    {
      ATerm r_47 = t;
      int s_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_47 = t;
          int u_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_52 = NULL;
              k_52 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_52;
              LocalPopChoice(u_47);
            }
          else
            {
              t = t_47;
              t = p_84(t);
              t = Cons_2_0(_id, r_52, t);
            }
          LocalPopChoice(s_47);
        }
      else
        {
          t = r_47;
          {
            ATerm n_52 = NULL,o_52 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_52 = ATgetFirst((ATermList) t);
                o_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_52), (ATerm) ATmakeAppl(sym_Undefined_1, n_52));
          }
        }
      return(t);
    }
    t = r_52(t);
  }
  g_52 = t;
  t = (ATerm) ATinsert(CheckATermList(g_52), (ATerm) ATmakeAppl(sym_Program_1, d_52));
  i_14 = t;
  t = SSLsetAnnotations(i_14, c_52);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm d_53 = NULL;
  d_53 = t;
  if(match_string(t, "--help"))
    {
      t = d_53;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_53;
        }
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL;
  t = term_t_45;
  e_53 = t;
  t = term_t_7;
  f_53 = t;
  t = term_v_47;
  t = s_9(e_53, f_53, t);
  t = term_w_47;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_y_47;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL;
  y_52 = t;
  t = term_k_43;
  a_53 = t;
  t = term_l_43;
  b_53 = t;
  t = (ATerm) ATempty;
  c_53 = t;
  t = SSL_table_put(a_53, b_53, c_53);
  t = y_52;
  {
    static ATerm d_7 (ATerm t)
    {
      ATerm z_47 = t;
      int a_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_84(t);
          LocalPopChoice(a_48);
        }
      else
        {
          t = z_47;
          {
            ATerm b_48 = t;
            int c_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_7, h_7, i_7, t);
                LocalPopChoice(c_48);
              }
            else
              {
                t = b_48;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_7, t);
  }
  {
    ATerm d_48 = t;
    int e_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_53 = NULL;
        m_53 = t;
        {
          ATerm f_48 = t;
          int g_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_13 = NULL;
              t = m_53;
              {
                ATerm h_48 = t;
                int i_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_t_45;
                    t = get_config_0_0(t);
                    LocalPopChoice(i_48);
                  }
                else
                  {
                    t = h_48;
                    t = fetch_1_0(j_7, t);
                  }
              }
              t = m_53;
              t = default_system_usage_0_0(t);
              t = term_d_13;
              c_13 = t;
              t = SSL_exit(c_13);
              LocalPopChoice(g_48);
            }
          else
            {
              t = f_48;
              {
                ATerm g_13 = NULL;
                t = term_f_46;
                t = get_config_0_0(t);
                t = m_53;
                t = default_system_about_0_0(t);
                t = term_d_13;
                g_13 = t;
                t = SSL_exit(g_13);
              }
            }
        }
        LocalPopChoice(e_48);
      }
    else
      {
        t = d_48;
        {
          ATerm j_48 = t;
          int k_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
              static ATerm k_7 (ATerm t)
              {
                ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,k_14 = NULL;
                s_53 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_53 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_53);
                q_53 = t;
                t = r_53;
                if(((w_52 != NULL) && (w_52 != t)))
                  _fail(t);
                else
                  w_52 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_53);
                k_14 = t;
                t = SSLsetAnnotations(k_14, q_53);
                return(t);
              }
              t = fetch_1_0(k_7, t);
              t = term_f_24;
              o_53 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_52)), term_l_48);
              p_53 = t;
              t = SSL_printnl(o_53, p_53);
              t = (ATerm) ATmakeAppl(sym__2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_52)), term_l_48));
              t = default_system_usage_0_0(t);
              t = term_z_12;
              n_53 = t;
              t = SSL_exit(n_53);
              LocalPopChoice(k_48);
            }
          else
            {
              t = j_48;
            }
        }
      }
  }
  x_52 = t;
  t = term_k_43;
  z_52 = t;
  t = SSL_table_destroy(z_52);
  t = x_52;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm h_64 (ATerm), ATerm i_64 (ATerm), ATerm t)
{
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL;
  t = parse_options_1_0(f_64, t);
  x_53 = t;
  t = term_m_48;
  a_54 = t;
  t = SSL_table_create(a_54);
  t = term_m_48;
  y_53 = t;
  t = term_n_48;
  z_53 = t;
  t = SSL_table_put(y_53, z_53, x_53);
  t = x_53;
  t = h_64(t);
  {
    ATerm o_48 = t;
    int p_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_64, t);
        LocalPopChoice(p_48);
      }
    else
      {
        t = o_48;
        {
          ATerm q_48 = t;
          int r_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_64(t);
              t = report_success_0_0(t);
              LocalPopChoice(r_48);
            }
          else
            {
              t = q_48;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm s_48 = t;
  int t_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_54 = NULL;
      g_54 = t;
      t = term_g_44;
      t = get_config_0_0(t);
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("gen-css", 0, ATtrue)))
        _fail(t);
      t = g_54;
      t = xtc_temp_files_1_0(o_7, t);
      LocalPopChoice(t_48);
    }
  else
    {
      t = s_48;
      t = abox2html_0_0(t);
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = xtc_generate_2_0(p_7, pass_verbose_0_0, t);
  t = copy_to_1_0(q_7, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_u_48;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm v_48 = t;
  int w_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_10;
      t = get_config_0_0(t);
      LocalPopChoice(w_48);
    }
  else
    {
      t = v_48;
      t = term_h_25;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2html_options_0_0, default_usage_0_0, _id, l_7, t);
  return(t);
}
