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
ATerm term_j_48;
ATerm term_i_48;
ATerm term_h_48;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_z_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_g_46;
ATerm term_z_45;
ATerm term_v_45;
ATerm term_r_45;
ATerm term_p_45;
ATerm term_m_45;
ATerm term_z_44;
ATerm term_x_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_t_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_l_43;
ATerm term_g_43;
ATerm term_e_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_s_42;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_z_40;
ATerm term_v_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_h_40;
ATerm term_z_39;
ATerm term_u_39;
ATerm term_p_39;
ATerm term_h_39;
ATerm term_f_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_m_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_l_37;
ATerm term_h_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_c_37;
ATerm term_p_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_f_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_s_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
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
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_s_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_w_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_l_29;
ATerm term_c_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_e_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_z_26;
ATerm term_i_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_j_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_n_24;
ATerm term_l_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_e_24;
ATerm term_b_24;
ATerm term_z_23;
ATerm term_x_23;
ATerm term_p_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_e_23;
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
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_i_18;
ATerm term_y_17;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_w_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_k_8;
ATerm term_h_8;
ATerm term_e_8;
ATerm term_q_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Dec", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Nov", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Oct", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Sep", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Aug", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jul", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jun", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("May", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Apr", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Mar", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Feb", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Jan", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("December", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("November", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("October", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("September", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("August", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("July", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("June", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("April", 0, ATtrue));
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
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Wed", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Tue", 0, ATtrue));
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
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Wednesday", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuesday", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Monday", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Sunday", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(100);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("p.m.", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("a.m.", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Saturday_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Friday_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Thursday_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Wednesday_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Tuesday_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Monday_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Sunday_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_December_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_November_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_October_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_September_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_August_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_July_0);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_June_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_May_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_April_0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_March_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_February_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_January_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("EEEE", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("d", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("MMMM", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("yyyy", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("HH", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("mm", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ss", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--title", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no title specified for HTML document", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<!-- \n", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   This file is generated at ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" \n", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   by abox2html (C) 2001 Merijn de Jonge (mdejonge@cwi.nl)\n", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-->\n", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<!doctype html public \"-//W3C//DTD WWW HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/loose.dtd\"> \n", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<html>\n", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  <head>\n", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("    <title>", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("</title>\n", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("    <link rel=\"stylesheet\" type=\"text/css\" href=\"boxstyle.css\">\n", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  </head>\n", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("  <body>\n", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("  </body>\n", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("</html>\n", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-html", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_28, term_w_12, term_b_28);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_28, term_o_13, term_j_28);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_28, term_n_13, term_q_28);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_28, term_j_13, term_u_28);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_28, term_f_13, term_z_28);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_29, term_l_29, term_o_29);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_29, term_s_29, term_t_29);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_29, term_i_13, term_w_29);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_29, term_z_29, term_b_30);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_30, term_e_30, term_f_30);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_30, term_g_13, term_i_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_30, term_m_13, term_r_30);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_30, term_z_30, term_a_31);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_31, term_d_13, term_j_31);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_31, term_p_31, term_q_31);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_32, term_d_32, term_e_32);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_32, term_i_32, term_j_32);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_32, term_m_32, term_n_32);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_32, term_d_15, term_t_32);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_32, term_e_13, term_w_32);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_32, term_a_15, term_z_32);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_33, term_c_33, term_d_33);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_33, term_g_33, term_h_33);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_33, term_n_33, term_o_33);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_33, term_k_13, term_z_33);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_34, term_c_34, term_d_34);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_34, term_p_34, term_q_34);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_34, term_a_35, term_b_35);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_a_39);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_e_38);
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_v_40);
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym__2, term_z_26, term_b_13);
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_13);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(sym__2, term_p_43, term_q_7);
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym__2, term_h_44, term_i_44);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Only generate cascading style sheet", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-t title    Title of HTML document", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym__2, term_y_42, term_z_42);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(sym__2, term_g_46, term_q_7);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(sym__2, term_l_46, term_q_7);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym__2, term_p_45, term_q_7);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css-boxstyle", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm xtc_close_fd_0_0 (ATerm t);
static ATerm m_8 (ATerm u_34, ATerm v_34, ATerm t);
ATerm File_as_fd_1_0 (ATerm w_96 (ATerm), ATerm t);
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
ATerm print_to_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm o_8 (ATerm r_38, ATerm s_38, ATerm t);
static ATerm p_8 (ATerm k_84 (ATerm), ATerm w_441, ATerm b_39, ATerm t);
static ATerm q_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm month2abbr_0_0 (ATerm t);
ATerm month2text_0_0 (ATerm t);
ATerm lt_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm day_of_week2abbr_0_0 (ATerm t);
ATerm day_of_week2text_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm e_71 (ATerm), ATerm f_71 (ATerm), ATerm t);
ATerm for_3_0 (ATerm h_71 (ATerm), ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm t);
static ATerm t_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
static ATerm r_8 (ATerm s_32, ATerm q_32, ATerm r_32, ATerm t);
static ATerm s_8 (ATerm z_31, ATerm a_32, ATerm b_32, ATerm t);
static ATerm t_8 (ATerm v_25, ATerm w_25, ATerm t);
ATerm month2index_0_0 (ATerm t);
ATerm date_pattern_to_int_0_0 (ATerm t);
static ATerm p_16 (ATerm y_13, ATerm z_13, ATerm t);
ATerm date_pattern_to_string_0_0 (ATerm t);
static ATerm u_8 (ATerm h_52, ATerm g_52, ATerm t);
ATerm index2day_of_week_0_0 (ATerm t);
ATerm index2month_0_0 (ATerm t);
static ATerm v_8 (ATerm g_49, ATerm f_49, ATerm e_49, ATerm d_49, ATerm c_49, ATerm b_49, ATerm h_49, ATerm i_49, ATerm t);
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t);
static ATerm w_8 (ATerm y_48, ATerm t);
ATerm now_epoch_time_0_0 (ATerm t);
ATerm now_local_time_0_0 (ATerm t);
ATerm create_time_0_0 (ATerm t);
ATerm get_title_0_0 (ATerm t);
ATerm create_header_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm xtc_io_1_0 (ATerm q_97 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm abox2html_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm k_9 (ATerm s_34, ATerm t_34, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm x_8 (ATerm d_25, ATerm e_25, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm y_8 (ATerm u_37, ATerm v_37, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm u_72 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm p_83 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm i_84 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm f_96 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm e_96 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm g_96 (ATerm), ATerm t);
static ATerm b_9 (ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm k_21, ATerm j_21, ATerm t);
static ATerm c_9 (ATerm n_76 (ATerm), ATerm g_21, ATerm f_21, ATerm t);
static ATerm p_1 (ATerm t);
static ATerm d_9 (ATerm m_28, ATerm n_28, ATerm o_28, ATerm t);
static ATerm e_9 (ATerm y_80 (ATerm), ATerm w_28, ATerm v_28, ATerm t);
static ATerm i_9 (ATerm w_13, ATerm x_13, ATerm t);
static ATerm w_26 (ATerm o_26, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_9 (ATerm x_38, ATerm t);
static ATerm g_9 (ATerm f_14, ATerm g_14, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_29 (ATerm k_27, ATerm t);
static ATerm j_29 (ATerm r_27, ATerm s_27, ATerm w_27, ATerm t);
static ATerm k_29 (ATerm f_28, ATerm g_28, ATerm h_28, ATerm t);
static ATerm h_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm z_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm i_35 (ATerm e_34, ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm d_98 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm z_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_37 (ATerm w_36, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm j_9 (ATerm q_80 (ATerm), ATerm l_26, ATerm j_26, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm p_9 (ATerm i_34, ATerm j_34, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_generate_2_0 (ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm t);
static ATerm l_9 (ATerm u_27, ATerm v_27, ATerm t);
ATerm end_scope_1_0 (ATerm n_80 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm m_80 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm p_97 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm abox2html_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_9 (ATerm x_24, ATerm y_24, ATerm t);
ATerm foldr_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_96 (ATerm), ATerm t);
static ATerm i_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm need_help_1_0 (ATerm w_65 (ATerm), ATerm t);
ATerm map_1_0 (ATerm i_72 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_72 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm t_9 (ATerm n_46, ATerm o_46, ATerm t);
static ATerm q_9 (ATerm g_29, ATerm h_29, ATerm t);
static ATerm r_9 (ATerm p_27, ATerm q_27, ATerm o_27, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm h_59 (ATerm), ATerm i_59 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm r_86 (ATerm), ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm parse_options_1_0 (ATerm q_86 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm y_65 (ATerm), ATerm z_65 (ATerm), ATerm a_66 (ATerm), ATerm b_66 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
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
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 = NULL;
        t = term_q_7;
        t = STDIN__FILENO_0_0(t);
        s_0 = t;
        if((m_0 != t))
          {
            _fail(t);
          }
        t = s_0;
        LocalPopChoice(p_7);
      }
    else
      {
        t = i_2;
        {
          ATerm r_7 = t;
          int s_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_0 = NULL;
              t = term_q_7;
              t = STDOUT__FILENO_0_0(t);
              u_0 = t;
              if((m_0 != t))
                {
                  _fail(t);
                }
              t = u_0;
              LocalPopChoice(s_7);
            }
          else
            {
              t = r_7;
              {
                ATerm u_7 = t;
                int v_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_0 = NULL;
                    t = term_q_7;
                    t = STDERR__FILENO_0_0(t);
                    y_0 = t;
                    if((m_0 != t))
                      {
                        _fail(t);
                      }
                    t = y_0;
                    LocalPopChoice(v_7);
                  }
                else
                  {
                    t = u_7;
                    t = SSL_close(m_0);
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm m_8 (ATerm u_34, ATerm v_34, ATerm t)
{
  t = SSL_fdcopy(u_34, v_34);
  return(t);
}
ATerm File_as_fd_1_0 (ATerm w_96 (ATerm), ATerm t)
{
  ATerm c_1 = NULL;
  t = xtc_open_fd_0_0(t);
  c_1 = t;
  {
    ATerm x_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_96(t);
        LocalPopChoice(y_7);
        {
          ATerm e_1 = NULL;
          e_1 = t;
          {
            ATerm z_7 = t;
            int a_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = c_1;
                t = xtc_close_fd_0_0(t);
                LocalPopChoice(a_8);
              }
            else
              {
                t = z_7;
              }
          }
          t = e_1;
        }
      }
    else
      {
        t = x_7;
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
  ATerm z_1 = NULL,b_2 = NULL,c_2 = NULL;
  t = term_q_7;
  t = new_0_0(t);
  z_1 = t;
  t = term_e_8;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_1, term_e_8);
  t = p_9(z_1, b_2, t);
  c_2 = t;
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 = NULL;
        t = (ATerm) ATinsert(ATempty, term_h_8);
        f_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_2, (ATerm) ATinsert(ATempty, term_h_8));
        t = i_9(c_2, f_2, t);
        t = new_file_0_0(t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        t = c_2;
      }
  }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_k_8;
  return(t);
}
ATerm xtc_new_file_name_0_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL;
  t = new_file_0_0(t);
  j_2 = t;
  t = term_q_7;
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_2, term_q_7);
  t = j_9(a_0, j_2, k_2, t);
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
        t = m_8(p_2, n_2, t);
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
    ATerm z_8 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_9 = ATgetArgument(t, 0);
            ATerm o_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_8;
      }
  }
  t = term_v_9;
  t = debug_1_0(j_0, t);
  t = (ATerm) ATmakeAppl(sym__2, t_2, term_y_9);
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
  t = term_a_10;
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
        ATerm d_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_3(f_3, t);
            LocalPopChoice(f_10);
          }
        else
          {
            t = d_10;
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
ATerm print_to_0_0 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL;
  l_3 = t;
  t = xtc_new_file_0_0(t);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_3, term_y_9);
  t = open_file_0_0(t);
  t = SSL_print(m_3, l_3);
  t = SSL_close_file(m_3);
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_3);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm r_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_i_10;
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
      t = (ATerm) ATinsert(ATempty, term_h_8);
      u_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_3, (ATerm) ATinsert(ATempty, term_h_8));
      t = i_9(r_3, u_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm o_8 (ATerm r_38, ATerm s_38, ATerm t)
{
  ATerm w_3 = NULL;
  t = SSL_write_term_to_stream_baf(r_38, s_38);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_3);
  return(t);
}
static ATerm p_8 (ATerm k_84 (ATerm), ATerm w_441, ATerm b_39, ATerm t)
{
  ATerm b_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_441, term_y_9);
  t = h_9(t);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_4, b_39);
  t = k_84(t);
  t = fclose_0_0(t);
  t = b_39;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      if(match_cons(k_10, sym_Stream_1))
        {
          f_4 = ATgetArgument(k_10, 0);
        }
      else
        _fail(t);
      g_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8(f_4, g_4, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  e_4 = t;
  t = xtc_new_file_0_0(t);
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_4, e_4);
  t = p_8(q_0, d_4, e_4, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, d_4);
  t = xtc_transform_file_2_0(c_97, d_97, t);
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
      t = (ATerm) ATmakeAppl(sym__2, m_4, (ATerm) ATinsert(ATinsert(ATempty, k_4), term_m_10));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_4);
    }
  else
    {
      ATerm b_5 = NULL,c_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_4;
      t = xtc_new_file_0_0(t);
      b_5 = t;
      t = r_0(t);
      c_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_5), term_m_10), j_4), term_n_10));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_5);
    }
  return(t);
}
ATerm month2abbr_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_o_10;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_p_10;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_q_10;
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
                      t = term_u_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_v_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_w_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_x_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_y_10;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_z_10;
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
                                              t = term_c_11;
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
      t = term_d_11;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_e_11;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_f_11;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_g_11;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_h_11;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_j_11;
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
                                  t = term_x_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_m_11;
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
      ATerm o_5 = NULL,p_5 = NULL;
      if(match_cons(t, sym__2))
        {
          o_5 = ATgetArgument(t, 0);
          p_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, o_5, p_5);
      {
        ATerm t_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(o_5, p_5);
            LocalPopChoice(w_11);
          }
        else
          {
            t = t_11;
            t = SSL_gtr(o_5, p_5);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, o_5, p_5);
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
                  t = term_f_12;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_g_12;
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
                  t = term_n_12;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_o_12;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_q_12;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_r_12;
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm while_not_2_0 (ATerm e_71 (ATerm), ATerm f_71 (ATerm), ATerm t)
{
  static ATerm s_5 (ATerm t)
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_71(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        t = f_71(t);
        t = s_5(t);
      }
    return(t);
  }
  t = s_5(t);
  return(t);
}
ATerm for_3_0 (ATerm h_71 (ATerm), ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm t)
{
  t = h_71(t);
  t = while_not_2_0(i_71, j_71, t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm u_5 = NULL,y_5 = NULL;
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_5, y_5, (ATerm) ATempty);
  return(t);
}
static ATerm v_0 (ATerm t)
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
static ATerm w_0 (ATerm t)
{
  ATerm a_6 = NULL,c_6 = NULL,d_6 = NULL,f_6 = NULL,g_6 = NULL;
  if(match_cons(t, sym__3))
    {
      a_6 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
      d_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_6, term_w_12);
  t = geq_0_0(t);
  t = term_w_12;
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_6, term_w_12);
  t = x_8(a_6, g_6, t);
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_6, c_6, (ATerm) ATinsert(CheckATermList(d_6), c_6));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(t_0, v_0, w_0, t);
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm h_6 = NULL;
  t = copy_0_0(t);
  h_6 = t;
  t = SSL_implode_string(h_6);
  return(t);
}
static ATerm r_8 (ATerm s_32, ATerm q_32, ATerm r_32, ATerm t)
{
  ATerm j_6 = NULL;
  t = SSL_strlen(q_32);
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_32, j_6);
  t = x_8(r_32, j_6, t);
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_6 = NULL;
        k_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_6, term_b_13);
        t = geq_0_0(t);
        t = k_6;
        LocalPopChoice(z_12);
        {
          ATerm m_6 = NULL;
          m_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_6, s_32);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = y_12;
        t = term_c_13;
      }
  }
  return(t);
}
static ATerm s_8 (ATerm z_31, ATerm a_32, ATerm b_32, ATerm t)
{
  ATerm o_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, z_31, a_32, b_32);
  t = r_8(z_31, a_32, b_32, t);
  o_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_6, a_32);
  t = p_9(o_6, a_32, t);
  return(t);
}
static ATerm t_8 (ATerm v_25, ATerm w_25, ATerm t)
{
  t = SSL_mod(v_25, w_25);
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
                      t = term_i_13;
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
                              t = term_k_13;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_m_13;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_n_13;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_o_13;
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
                                              t = term_b_13;
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
  ATerm n_9 = NULL,s_9 = NULL,u_9 = NULL,w_9 = NULL,x_9 = NULL,z_9 = NULL,b_10 = NULL,c_10 = NULL,e_10 = NULL,g_10 = NULL,h_10 = NULL,j_10 = NULL,l_10 = NULL;
  x_9 = t;
  if(match_cons(t, sym__2))
    {
      z_9 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9;
  if(match_string(t, "ss"))
    {
      t = b_10;
      if(match_cons(t, sym_ComponentTime_3))
        {
          ATerm p_13 = ATgetArgument(t, 0);
          j_10 = ATgetArgument(t, 1);
          {
            ATerm q_13 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = j_10;
      if(match_cons(t, sym_DayTime_3))
        {
          ATerm s_13 = ATgetArgument(t, 0);
          ATerm u_13 = ATgetArgument(t, 1);
          u_9 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = u_9;
    }
  else
    {
      if(match_string(t, "mm"))
        {
          t = b_10;
          if(match_cons(t, sym_ComponentTime_3))
            {
              ATerm a_14 = ATgetArgument(t, 0);
              j_10 = ATgetArgument(t, 1);
              {
                ATerm b_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = j_10;
          if(match_cons(t, sym_DayTime_3))
            {
              ATerm d_14 = ATgetArgument(t, 0);
              s_9 = ATgetArgument(t, 1);
              {
                ATerm l_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = s_9;
        }
      else
        {
          if(match_string(t, "KK"))
            {
              t = b_10;
              if(match_cons(t, sym_ComponentTime_3))
                {
                  ATerm m_14 = ATgetArgument(t, 0);
                  j_10 = ATgetArgument(t, 1);
                  {
                    ATerm o_14 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = j_10;
              if(match_cons(t, sym_DayTime_3))
                {
                  n_9 = ATgetArgument(t, 0);
                  {
                    ATerm s_14 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm t_14 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              {
                ATerm v_14 = t;
                int x_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_10 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, term_a_15, n_9);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, n_9, term_d_15);
                    t = leq_0_0(t);
                    t = term_a_15;
                    s_10 = t;
                    t = (ATerm) ATmakeAppl(sym__2, n_9, term_a_15);
                    t = x_8(n_9, s_10, t);
                    LocalPopChoice(x_14);
                  }
                else
                  {
                    t = v_14;
                    t = (ATerm) ATmakeAppl(sym__2, term_b_13, n_9);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, n_9, term_a_15);
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
                      ATerm f_15 = ATgetArgument(t, 0);
                      j_10 = ATgetArgument(t, 1);
                      {
                        ATerm g_15 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = j_10;
                  if(match_cons(t, sym_DayTime_3))
                    {
                      n_9 = ATgetArgument(t, 0);
                      {
                        ATerm h_15 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm k_15 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = n_9;
                  if(match_int(t, 0))
                    {
                      ATerm l_15 = t;
                      int m_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_11 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_a_15, n_9);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, n_9, term_d_15);
                          t = leq_0_0(t);
                          t = term_a_15;
                          a_11 = t;
                          t = (ATerm) ATmakeAppl(sym__2, n_9, term_a_15);
                          t = x_8(n_9, a_11, t);
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
                                t = (ATerm) ATmakeAppl(sym__2, term_w_12, n_9);
                                t = leq_0_0(t);
                                t = (ATerm) ATmakeAppl(sym__2, n_9, term_a_15);
                                t = leq_0_0(t);
                                t = n_9;
                                LocalPopChoice(o_15);
                              }
                            else
                              {
                                t = n_15;
                                t = term_a_15;
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
                          ATerm k_11 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_a_15, n_9);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, n_9, term_d_15);
                          t = leq_0_0(t);
                          t = term_a_15;
                          k_11 = t;
                          t = (ATerm) ATmakeAppl(sym__2, n_9, term_a_15);
                          t = x_8(n_9, k_11, t);
                          LocalPopChoice(q_15);
                        }
                      else
                        {
                          t = p_15;
                          t = (ATerm) ATmakeAppl(sym__2, term_w_12, n_9);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, n_9, term_a_15);
                          t = leq_0_0(t);
                          t = n_9;
                        }
                    }
                }
              else
                {
                  if(match_string(t, "kk"))
                    {
                      ATerm n_11 = NULL;
                      t = b_10;
                      if(match_cons(t, sym_ComponentTime_3))
                        {
                          ATerm r_15 = ATgetArgument(t, 0);
                          j_10 = ATgetArgument(t, 1);
                          {
                            ATerm s_15 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = j_10;
                      if(match_cons(t, sym_DayTime_3))
                        {
                          n_9 = ATgetArgument(t, 0);
                          {
                            ATerm t_15 = ATgetArgument(t, 1);
                          }
                          {
                            ATerm u_15 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = term_w_12;
                      n_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_9, term_w_12);
                      t = m_9(n_9, n_11, t);
                    }
                  else
                    {
                      if(match_string(t, "HH"))
                        {
                          t = b_10;
                          if(match_cons(t, sym_ComponentTime_3))
                            {
                              ATerm v_15 = ATgetArgument(t, 0);
                              j_10 = ATgetArgument(t, 1);
                              {
                                ATerm w_15 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = j_10;
                          if(match_cons(t, sym_DayTime_3))
                            {
                              n_9 = ATgetArgument(t, 0);
                              {
                                ATerm x_15 = ATgetArgument(t, 1);
                              }
                              {
                                ATerm y_15 = ATgetArgument(t, 2);
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
                                  ATerm z_15 = ATgetArgument(t, 0);
                                  ATerm a_16 = ATgetArgument(t, 1);
                                  l_10 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = l_10;
                              if(match_cons(t, sym_Dupl_2))
                                {
                                  ATerm b_16 = ATgetArgument(t, 0);
                                  w_9 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = w_9;
                            }
                          else
                            {
                              if(match_string(t, "D"))
                                {
                                  t = b_10;
                                  if(match_cons(t, sym_ComponentTime_3))
                                    {
                                      ATerm c_16 = ATgetArgument(t, 0);
                                      ATerm d_16 = ATgetArgument(t, 1);
                                      l_10 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = l_10;
                                  if(match_cons(t, sym_Dupl_2))
                                    {
                                      ATerm e_16 = ATgetArgument(t, 0);
                                      w_9 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = w_9;
                                }
                              else
                                {
                                  if(match_string(t, "dd"))
                                    {
                                      t = b_10;
                                      if(match_cons(t, sym_ComponentTime_3))
                                        {
                                          c_10 = ATgetArgument(t, 0);
                                          {
                                            ATerm f_16 = ATgetArgument(t, 1);
                                          }
                                          {
                                            ATerm g_16 = ATgetArgument(t, 2);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      t = c_10;
                                      if(match_cons(t, sym_Date_3))
                                        {
                                          ATerm h_16 = ATgetArgument(t, 0);
                                          ATerm i_16 = ATgetArgument(t, 1);
                                          h_10 = ATgetArgument(t, 2);
                                        }
                                      else
                                        _fail(t);
                                      t = h_10;
                                    }
                                  else
                                    {
                                      if(match_string(t, "d"))
                                        {
                                          t = b_10;
                                          if(match_cons(t, sym_ComponentTime_3))
                                            {
                                              c_10 = ATgetArgument(t, 0);
                                              {
                                                ATerm j_16 = ATgetArgument(t, 1);
                                              }
                                              {
                                                ATerm k_16 = ATgetArgument(t, 2);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          t = c_10;
                                          if(match_cons(t, sym_Date_3))
                                            {
                                              ATerm l_16 = ATgetArgument(t, 0);
                                              ATerm m_16 = ATgetArgument(t, 1);
                                              h_10 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          t = h_10;
                                        }
                                      else
                                        {
                                          if(match_string(t, "MM"))
                                            {
                                              ATerm u_11 = NULL,v_11 = NULL;
                                              t = b_10;
                                              if(match_cons(t, sym_ComponentTime_3))
                                                {
                                                  c_10 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm n_16 = ATgetArgument(t, 1);
                                                  }
                                                  {
                                                    ATerm o_16 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = c_10;
                                              if(match_cons(t, sym_Date_3))
                                                {
                                                  ATerm r_16 = ATgetArgument(t, 0);
                                                  g_10 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm s_16 = ATgetArgument(t, 2);
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
                                              t = m_9(u_11, v_11, t);
                                            }
                                          else
                                            {
                                              if(match_string(t, "M"))
                                                {
                                                  ATerm x_11 = NULL,y_11 = NULL;
                                                  t = b_10;
                                                  if(match_cons(t, sym_ComponentTime_3))
                                                    {
                                                      c_10 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm t_16 = ATgetArgument(t, 1);
                                                      }
                                                      {
                                                        ATerm x_16 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = c_10;
                                                  if(match_cons(t, sym_Date_3))
                                                    {
                                                      ATerm y_16 = ATgetArgument(t, 0);
                                                      g_10 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm z_16 = ATgetArgument(t, 2);
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
                                                  t = m_9(x_11, y_11, t);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "yy"))
                                                    {
                                                      ATerm a_12 = NULL;
                                                      t = b_10;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          c_10 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm a_17 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm d_17 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = c_10;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          e_10 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm w_17 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm x_17 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = term_y_17;
                                                      a_12 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, e_10, term_y_17);
                                                      t = t_8(e_10, a_12, t);
                                                    }
                                                  else
                                                    {
                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("yyyy", 0, ATtrue)))
                                                        _fail(t);
                                                      t = b_10;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          c_10 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm d_18 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm e_18 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = c_10;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          e_10 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm f_18 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm h_18 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = e_10;
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
static ATerm p_16 (ATerm y_13, ATerm z_13, ATerm t)
{
  ATerm e_14 = NULL,j_14 = NULL,k_14 = NULL,q_14 = NULL;
  t = z_13;
  t = date_pattern_to_int_0_0(t);
  k_14 = t;
  t = SSL_int_to_string(k_14);
  e_14 = t;
  t = SSL_strlen(y_13);
  j_14 = t;
  t = term_i_18;
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_18, e_14, j_14);
  t = s_8(q_14, e_14, j_14, t);
  return(t);
}
ATerm date_pattern_to_string_0_0 (ATerm t)
{
  ATerm r_14 = NULL,u_14 = NULL,w_14 = NULL,z_14 = NULL,b_15 = NULL,c_15 = NULL,e_15 = NULL,i_15 = NULL,j_15 = NULL;
  w_14 = t;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      b_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_15;
  if(match_cons(t, sym_ComponentTime_3))
    {
      c_15 = ATgetArgument(t, 0);
      i_15 = ATgetArgument(t, 1);
      j_15 = ATgetArgument(t, 2);
      t = j_15;
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Dupl_2))
              {
                u_14 = ATgetArgument(t, 0);
                {
                  ATerm l_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(k_18);
            t = i_15;
            {
              ATerm m_18 = t;
              int n_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      r_14 = ATgetArgument(t, 0);
                      {
                        ATerm o_18 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm q_18 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(n_18);
                  t = c_15;
                  {
                    ATerm r_18 = t;
                    int s_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm t_18 = ATgetArgument(t, 0);
                            e_15 = ATgetArgument(t, 1);
                            {
                              ATerm u_18 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(s_18);
                        t = z_14;
                        if(match_string(t, "a"))
                          {
                            ATerm v_18 = t;
                            int w_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_16(z_14, w_14, t);
                                LocalPopChoice(w_18);
                              }
                            else
                              {
                                t = v_18;
                                {
                                  ATerm x_18 = t;
                                  int y_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_a_15, r_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_14, term_d_15);
                                      t = leq_0_0(t);
                                      t = term_z_18;
                                      LocalPopChoice(y_18);
                                    }
                                  else
                                    {
                                      t = x_18;
                                      t = (ATerm) ATmakeAppl(sym__2, term_b_13, r_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_14, term_a_15);
                                      t = lt_0_0(t);
                                      t = term_a_19;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEEE"))
                              {
                                ATerm d_19 = t;
                                int f_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = p_16(z_14, w_14, t);
                                    LocalPopChoice(f_19);
                                  }
                                else
                                  {
                                    t = d_19;
                                    t = u_14;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm g_19 = t;
                                    int h_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = p_16(z_14, w_14, t);
                                        LocalPopChoice(h_19);
                                      }
                                    else
                                      {
                                        t = g_19;
                                        t = u_14;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    if(match_string(t, "MMMM"))
                                      {
                                        ATerm k_19 = t;
                                        int l_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = p_16(z_14, w_14, t);
                                            LocalPopChoice(l_19);
                                          }
                                        else
                                          {
                                            t = k_19;
                                            t = e_15;
                                            t = month2text_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_string(t, "MMM"))
                                          {
                                            ATerm m_19 = t;
                                            int r_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = p_16(z_14, w_14, t);
                                                LocalPopChoice(r_19);
                                              }
                                            else
                                              {
                                                t = m_19;
                                                t = e_15;
                                                t = month2abbr_0_0(t);
                                              }
                                          }
                                        else
                                          {
                                            t = p_16(z_14, w_14, t);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = r_18;
                        t = z_14;
                        if(match_string(t, "a"))
                          {
                            ATerm s_19 = t;
                            int t_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_16(z_14, w_14, t);
                                LocalPopChoice(t_19);
                              }
                            else
                              {
                                t = s_19;
                                {
                                  ATerm u_19 = t;
                                  int v_19 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_a_15, r_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_14, term_d_15);
                                      t = leq_0_0(t);
                                      t = term_z_18;
                                      LocalPopChoice(v_19);
                                    }
                                  else
                                    {
                                      t = u_19;
                                      t = (ATerm) ATmakeAppl(sym__2, term_b_13, r_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_14, term_a_15);
                                      t = lt_0_0(t);
                                      t = term_a_19;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEEE"))
                              {
                                ATerm w_19 = t;
                                int x_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = p_16(z_14, w_14, t);
                                    LocalPopChoice(x_19);
                                  }
                                else
                                  {
                                    t = w_19;
                                    t = u_14;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm y_19 = t;
                                    int z_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = p_16(z_14, w_14, t);
                                        LocalPopChoice(z_19);
                                      }
                                    else
                                      {
                                        t = y_19;
                                        t = u_14;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = p_16(z_14, w_14, t);
                                  }
                              }
                          }
                      }
                  }
                }
              else
                {
                  t = m_18;
                  t = c_15;
                  {
                    ATerm a_20 = t;
                    int b_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm c_20 = ATgetArgument(t, 0);
                            e_15 = ATgetArgument(t, 1);
                            {
                              ATerm d_20 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(b_20);
                        t = z_14;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm e_20 = t;
                            int f_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_16(z_14, w_14, t);
                                LocalPopChoice(f_20);
                              }
                            else
                              {
                                t = e_20;
                                t = u_14;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm g_20 = t;
                                int h_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = p_16(z_14, w_14, t);
                                    LocalPopChoice(h_20);
                                  }
                                else
                                  {
                                    t = g_20;
                                    t = u_14;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "MMMM"))
                                  {
                                    ATerm j_20 = t;
                                    int l_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = p_16(z_14, w_14, t);
                                        LocalPopChoice(l_20);
                                      }
                                    else
                                      {
                                        t = j_20;
                                        t = e_15;
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
                                            t = p_16(z_14, w_14, t);
                                            LocalPopChoice(n_20);
                                          }
                                        else
                                          {
                                            t = m_20;
                                            t = e_15;
                                            t = month2abbr_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        t = p_16(z_14, w_14, t);
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = a_20;
                        t = z_14;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm o_20 = t;
                            int p_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_16(z_14, w_14, t);
                                LocalPopChoice(p_20);
                              }
                            else
                              {
                                t = o_20;
                                t = u_14;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm q_20 = t;
                                int r_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = p_16(z_14, w_14, t);
                                    LocalPopChoice(r_20);
                                  }
                                else
                                  {
                                    t = q_20;
                                    t = u_14;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = p_16(z_14, w_14, t);
                              }
                          }
                      }
                  }
                }
            }
          }
        else
          {
            t = j_18;
            t = i_15;
            {
              ATerm w_20 = t;
              int x_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      r_14 = ATgetArgument(t, 0);
                      {
                        ATerm y_20 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm z_20 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(x_20);
                  t = c_15;
                  {
                    ATerm a_21 = t;
                    int b_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm c_21 = ATgetArgument(t, 0);
                            e_15 = ATgetArgument(t, 1);
                            {
                              ATerm d_21 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(b_21);
                        t = z_14;
                        if(match_string(t, "a"))
                          {
                            ATerm e_21 = t;
                            int h_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_16(z_14, w_14, t);
                                LocalPopChoice(h_21);
                              }
                            else
                              {
                                t = e_21;
                                {
                                  ATerm i_21 = t;
                                  int l_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_a_15, r_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_14, term_d_15);
                                      t = leq_0_0(t);
                                      t = term_z_18;
                                      LocalPopChoice(l_21);
                                    }
                                  else
                                    {
                                      t = i_21;
                                      t = (ATerm) ATmakeAppl(sym__2, term_b_13, r_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_14, term_a_15);
                                      t = lt_0_0(t);
                                      t = term_a_19;
                                    }
                                }
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
                                    t = p_16(z_14, w_14, t);
                                    LocalPopChoice(n_21);
                                  }
                                else
                                  {
                                    t = m_21;
                                    t = e_15;
                                    t = month2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "MMM"))
                                  {
                                    ATerm o_21 = t;
                                    int p_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = p_16(z_14, w_14, t);
                                        LocalPopChoice(p_21);
                                      }
                                    else
                                      {
                                        t = o_21;
                                        t = e_15;
                                        t = month2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = p_16(z_14, w_14, t);
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = a_21;
                        t = z_14;
                        if(match_string(t, "a"))
                          {
                            ATerm q_21 = t;
                            int r_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_16(z_14, w_14, t);
                                LocalPopChoice(r_21);
                              }
                            else
                              {
                                t = q_21;
                                {
                                  ATerm s_21 = t;
                                  int t_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_a_15, r_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_14, term_d_15);
                                      t = leq_0_0(t);
                                      t = term_z_18;
                                      LocalPopChoice(t_21);
                                    }
                                  else
                                    {
                                      t = s_21;
                                      t = (ATerm) ATmakeAppl(sym__2, term_b_13, r_14);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, r_14, term_a_15);
                                      t = lt_0_0(t);
                                      t = term_a_19;
                                    }
                                }
                              }
                          }
                        else
                          {
                            t = p_16(z_14, w_14, t);
                          }
                      }
                  }
                }
              else
                {
                  t = w_20;
                  t = c_15;
                  {
                    ATerm u_21 = t;
                    int v_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm x_21 = ATgetArgument(t, 0);
                            e_15 = ATgetArgument(t, 1);
                            {
                              ATerm y_21 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(v_21);
                        t = z_14;
                        if(match_string(t, "MMMM"))
                          {
                            ATerm a_22 = t;
                            int c_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_16(z_14, w_14, t);
                                LocalPopChoice(c_22);
                              }
                            else
                              {
                                t = a_22;
                                t = e_15;
                                t = month2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "MMM"))
                              {
                                ATerm e_22 = t;
                                int f_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = p_16(z_14, w_14, t);
                                    LocalPopChoice(f_22);
                                  }
                                else
                                  {
                                    t = e_22;
                                    t = e_15;
                                    t = month2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = p_16(z_14, w_14, t);
                              }
                          }
                      }
                    else
                      {
                        t = u_21;
                        t = z_14;
                        t = p_16(z_14, w_14, t);
                      }
                  }
                }
            }
          }
      }
    }
  else
    {
      t = z_14;
      t = p_16(z_14, w_14, t);
    }
  return(t);
}
static ATerm u_8 (ATerm h_52, ATerm g_52, ATerm t)
{
  ATerm q_16 = NULL;
  t = h_52;
  {
    static ATerm x_0 (ATerm t)
    {
      ATerm u_16 = NULL;
      u_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_16, g_52);
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = date_pattern_to_string_0_0(t);
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            {
              ATerm v_16 = NULL,w_16 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, u_16, g_52);
              w_16 = t;
              t = SSL_explode_term(w_16);
              if(match_cons(t, sym__2))
                {
                  ATerm j_22 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) j_22) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm k_22 = ATgetArgument(t, 1);
                    if(((ATgetType(k_22) == AT_LIST) && !(ATisEmpty(k_22))))
                      {
                        v_16 = ATgetFirst((ATermList) k_22);
                        {
                          ATerm m_22 = (ATerm) ATgetNext((ATermList) k_22);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = v_16;
            }
          }
      }
      return(t);
    }
    t = map_1_0(x_0, t);
  }
  q_16 = t;
  t = SSL_concat_strings(q_16);
  return(t);
}
ATerm index2day_of_week_0_0 (ATerm t)
{
  if(match_int(t, 6))
    {
      t = term_n_22;
    }
  else
    {
      if(match_int(t, 5))
        {
          t = term_o_22;
        }
      else
        {
          if(match_int(t, 4))
            {
              t = term_p_22;
            }
          else
            {
              if(match_int(t, 3))
                {
                  t = term_q_22;
                }
              else
                {
                  if(match_int(t, 2))
                    {
                      t = term_r_22;
                    }
                  else
                    {
                      if(match_int(t, 1))
                        {
                          t = term_s_22;
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                            _fail(t);
                          t = term_u_22;
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
      t = term_v_22;
    }
  else
    {
      if(match_int(t, 10))
        {
          t = term_w_22;
        }
      else
        {
          if(match_int(t, 9))
            {
              t = term_x_22;
            }
          else
            {
              if(match_int(t, 8))
                {
                  t = term_y_22;
                }
              else
                {
                  if(match_int(t, 7))
                    {
                      t = term_z_22;
                    }
                  else
                    {
                      if(match_int(t, 6))
                        {
                          t = term_a_23;
                        }
                      else
                        {
                          if(match_int(t, 5))
                            {
                              t = term_b_23;
                            }
                          else
                            {
                              if(match_int(t, 4))
                                {
                                  t = term_c_23;
                                }
                              else
                                {
                                  if(match_int(t, 3))
                                    {
                                      t = term_d_23;
                                    }
                                  else
                                    {
                                      if(match_int(t, 2))
                                        {
                                          t = term_e_23;
                                        }
                                      else
                                        {
                                          if(match_int(t, 1))
                                            {
                                              t = term_f_23;
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                                                _fail(t);
                                              t = term_h_23;
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
static ATerm v_8 (ATerm g_49, ATerm f_49, ATerm e_49, ATerm d_49, ATerm c_49, ATerm b_49, ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL;
  t = c_49;
  t = index2month_0_0(t);
  b_17 = t;
  t = h_49;
  t = index2day_of_week_0_0(t);
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym_ComponentTime_3, (ATerm)ATmakeAppl(sym_Date_3, b_49, b_17, d_49), (ATerm)ATmakeAppl(sym_DayTime_3, e_49, f_49, g_49), (ATerm) ATmakeAppl(sym_Dupl_2, c_17, i_49));
  return(t);
}
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  if(match_cons(t, sym__8))
    {
      e_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
      g_17 = ATgetArgument(t, 2);
      h_17 = ATgetArgument(t, 3);
      i_17 = ATgetArgument(t, 4);
      j_17 = ATgetArgument(t, 5);
      k_17 = ATgetArgument(t, 6);
      l_17 = ATgetArgument(t, 7);
    }
  else
    _fail(t);
  t = v_8(e_17, f_17, g_17, h_17, i_17, j_17, k_17, l_17, t);
  return(t);
}
static ATerm w_8 (ATerm y_48, ATerm t)
{
  t = SSL_epoch2localtime(y_48);
  t = prim_tuple_to_ComponentTime_0_0(t);
  return(t);
}
ATerm now_epoch_time_0_0 (ATerm t)
{
  ATerm m_17 = NULL;
  t = SSL_now_epoch_time();
  m_17 = t;
  t = (ATerm) ATmakeAppl(sym_EpochTime_1, m_17);
  return(t);
}
ATerm now_local_time_0_0 (ATerm t)
{
  ATerm n_17 = NULL;
  t = now_epoch_time_0_0(t);
  if(match_cons(t, sym_EpochTime_1))
    {
      n_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(n_17, t);
  return(t);
}
ATerm create_time_0_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL;
  t = term_q_7;
  t = now_local_time_0_0(t);
  o_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_24), term_x_23), term_z_23), term_x_23), term_p_23), term_j_23), term_m_23), term_j_23), term_l_23), term_j_23), term_k_23), term_j_23), term_i_23);
  p_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_24), term_x_23), term_z_23), term_x_23), term_p_23), term_j_23), term_m_23), term_j_23), term_l_23), term_j_23), term_k_23), term_j_23), term_i_23), o_17);
  t = u_8(p_17, o_17, t);
  return(t);
}
ATerm get_title_0_0 (ATerm t)
{
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_24;
      t = get_config_0_0(t);
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      {
        ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL;
        t = term_g_24;
        r_17 = t;
        t = (ATerm) ATinsert(ATempty, term_i_24);
        s_17 = t;
        t = SSL_printnl(r_17, s_17);
        t = term_w_12;
        q_17 = t;
        t = SSL_exit(q_17);
        t = (ATerm) ATinsert(ATempty, term_i_24);
      }
    }
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL;
  t = get_title_0_0(t);
  u_17 = t;
  t = term_q_7;
  t = create_time_0_0(t);
  t_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_25), term_z_24), term_w_24), term_v_24), u_17), term_u_24), term_t_24), term_s_24), term_r_24), term_q_24), term_p_24), term_n_24), t_17), term_l_24), term_j_24);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_10;
      t = get_config_0_0(t);
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      t = term_j_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  static ATerm a_1 (ATerm t)
  {
    ATerm k_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_17 = NULL;
        t = term_n_10;
        t = get_config_0_0(t);
        v_17 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_17);
        LocalPopChoice(o_25);
      }
    else
      {
        t = k_25;
        t = term_i_10;
      }
    t = q_97(t);
    t = copy_to_1_0(b_1, t);
    return(t);
  }
  t = xtc_temp_files_1_0(a_1, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  c_18 = t;
  t = create_header_0_0(t);
  t = print_to_0_0(t);
  z_17 = t;
  t = c_18;
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_18 = ATgetArgument(t, 0);
            {
              ATerm k_1 = NULL,b_0 = NULL;
              t = SSLgetAnnotations(c_18);
              k_1 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_18);
              b_0 = t;
              t = SSLsetAnnotations(b_0, k_1);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_18;
          }
        LocalPopChoice(q_25);
        t = xtc_transform_file_2_0(f_1, pass_verbose_0_0, t);
      }
    else
      {
        t = p_25;
        t = xtc_transform_term_2_0(g_1, pass_verbose_0_0, t);
      }
  }
  a_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_25), term_u_25);
  t = print_to_0_0(t);
  b_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_18), a_18), z_17);
  t = xtc_cat_0_0(t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_y_25;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  t = xtc_io_1_0(d_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_18 = NULL;
      p_18 = t;
      t = SSL_is_string(p_18);
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_1, t);
            LocalPopChoice(f_26);
          }
        else
          {
            t = e_26;
            {
              ATerm b_19 = NULL,c_19 = NULL,e_19 = NULL;
              b_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_19 = ATgetArgument(t, 0);
                  t = c_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_19 = ATgetArgument(t, 0);
                      t = c_19;
                      {
                        ATerm g_26 = t;
                        int h_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(h_26);
                          }
                        else
                          {
                            t = g_26;
                            t = debug_1_0(i_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_19 = NULL,j_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_19 = ATgetArgument(t, 0);
                          e_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_19;
                      t = eval_config_0_0(t);
                      i_19 = t;
                      t = e_19;
                      t = eval_config_0_0(t);
                      j_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_19, j_19);
                      t = p_9(i_19, j_19, t);
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
  ATerm n_19 = NULL,o_19 = NULL;
  n_19 = t;
  t = term_i_26;
  o_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_26, n_19);
  t = q_9(o_19, n_19, t);
  {
    ATerm k_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_19 = NULL,q_19 = NULL;
        t = eval_config_0_0(t);
        p_19 = t;
        t = term_i_26;
        q_19 = t;
        t = SSL_table_put(q_19, n_19, p_19);
        t = p_19;
        LocalPopChoice(m_26);
      }
    else
      {
        t = k_26;
      }
  }
  return(t);
}
static ATerm k_9 (ATerm s_34, ATerm t_34, ATerm t)
{
  t = SSL_copy(s_34, t_34);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm i_20 = NULL,k_20 = NULL;
  i_20 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2 = NULL;
        t = i_20;
        t = o_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, k_20, r_2);
        t = k_9(k_20, r_2, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_20);
        LocalPopChoice(p_26);
      }
    else
      {
        t = n_26;
        {
          ATerm q_26 = t;
          int t_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_3 = NULL;
              t = i_20;
              t = o_0(t);
              g_3 = t;
              {
                ATerm u_26 = t;
                if((PushChoice() == 0))
                  {
                    ATerm n_3 = NULL;
                    n_3 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = n_3;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = n_3;
                          }
                        else
                          {
                            t = n_3;
                            if((k_20 != t))
                              {
                                _fail(t);
                              }
                            t = n_3;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_26;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, k_20, g_3);
              t = k_9(k_20, g_3, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_20);
              LocalPopChoice(t_26);
            }
          else
            {
              t = q_26;
              t = i_20;
              t = o_0(t);
              if((k_20 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_20);
            }
        }
      }
  }
  return(t);
}
static ATerm x_8 (ATerm d_25, ATerm e_25, ATerm t)
{
  ATerm v_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(d_25, e_25);
      LocalPopChoice(y_26);
    }
  else
    {
      t = v_26;
      t = SSL_subtr(d_25, e_25);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t = term_z_26;
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        t = term_w_12;
      }
  }
  t_20 = t;
  t = term_w_12;
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_20, term_w_12);
  t = x_8(t_20, v_20, t);
  u_20 = t;
  t = SSL_int_to_string(u_20);
  s_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_20), term_z_26);
  return(t);
}
static ATerm y_8 (ATerm u_37, ATerm v_37, ATerm t)
{
  t = SSL_execvp(u_37, v_37);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_21 = NULL,z_21 = NULL,b_22 = NULL,d_22 = NULL;
  w_21 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      z_21 = ATgetArgument(t, 0);
      {
        ATerm y_3 = NULL,z_3 = NULL;
        t = SSL_int_to_string(z_21);
        y_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_27), y_3), term_f_27);
        z_3 = t;
        t = SSL_concat_strings(z_3);
      }
    }
  else
    {
      ATerm t_4 = NULL,u_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          z_21 = ATgetArgument(t, 0);
          b_22 = ATgetArgument(t, 1);
          d_22 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(b_22);
      t_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_22), term_i_27), t_4), term_h_27), z_21);
      u_4 = t;
      t = SSL_concat_strings(u_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_72 (ATerm), ATerm t)
{
  ATerm i_22 = NULL;
  static ATerm j_1 (ATerm t)
  {
    t = u_72(t);
    if(((i_22 != NULL) && (i_22 != t)))
      _fail(t);
    else
      i_22 = t;
    return(t);
  }
  t = fetch_1_0(j_1, t);
  t = not_null(i_22);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  {
    ATerm j_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm l_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm n_27 = ATgetArgument(t, 0);
              if((l_22 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm t_27 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_35), term_w_34), term_f_34), term_a_34), term_p_33), term_i_33), term_e_33), term_a_33), term_x_32), term_u_32), term_o_32), term_k_32), term_g_32), term_s_31), term_k_31), term_b_31), term_s_30), term_j_30), term_g_30), term_c_30), term_x_29), term_u_29), term_p_29), term_a_29), term_x_28), term_s_28), term_k_28), term_c_28);
        t = fetch_elem_1_0(l_1, t);
        LocalPopChoice(m_27);
      }
    else
      {
        t = j_27;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, l_22);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm t_22 = NULL,g_23 = NULL;
  t_22 = t;
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm f_35 = ATgetArgument(t, 0);
            g_23 = ATgetArgument(t, 1);
            {
              ATerm h_35 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(e_35);
        {
          ATerm j_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_5 = NULL,f_5 = NULL,h_5 = NULL;
              t = g_23;
              {
                ATerm m_35 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_35;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              a_5 = t;
              t = term_g_24;
              f_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_5), term_p_35);
              h_5 = t;
              t = SSL_printnl(f_5, h_5);
              t = (ATerm) ATmakeAppl(sym__2, term_g_24, (ATerm) ATinsert(ATinsert(ATempty, a_5), term_p_35));
              LocalPopChoice(k_35);
            }
          else
            {
              t = j_35;
              t = t_22;
            }
        }
      }
    else
      {
        t = d_35;
        t = t_22;
      }
  }
  t = t_22;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL;
  o_23 = t;
  t = fork_0_0(t);
  n_23 = t;
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = o_23;
        t = p_83(t);
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        t = SSL_waitpid(n_23);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_35 = ATgetArgument(t, 0);
            if(((ATgetType(v_35) != AT_INT) || (ATgetInt((ATermInt) v_35) != 0)))
              _fail(t);
            {
              ATerm w_35 = ATgetArgument(t, 1);
            }
            {
              ATerm x_35 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = o_23;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  q_23 = t;
  t = i_84(t);
  r_23 = t;
  t = term_g_24;
  s_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_23), r_23);
  t_23 = t;
  t = SSL_printnl(s_23, t_23);
  t = q_23;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm u_23 = NULL;
  static ATerm m_1 (ATerm t)
  {
    ATerm v_23 = NULL,w_23 = NULL;
    v_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_23), v_23);
    t = q_9(not_null(u_23), v_23, t);
    w_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_23, w_23);
    return(t);
  }
  if(((u_23 != NULL) && (u_23 != t)))
    _fail(t);
  else
    u_23 = t;
  t = SSL_table_keys(u_23);
  t = map_1_0(m_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm f_96 (ATerm), ATerm t)
{
  ATerm y_23 = NULL;
  y_23 = t;
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_24 = NULL;
        t = term_z_26;
        t = get_config_0_0(t);
        a_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_24, term_k_13);
        t = geq_0_0(t);
        t = y_23;
        t = f_96(t);
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
        t = y_23;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm e_96 (ATerm), ATerm t)
{
  ATerm f_24 = NULL;
  f_24 = t;
  {
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_24 = NULL;
        t = term_z_26;
        t = get_config_0_0(t);
        h_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_24, term_m_13);
        t = geq_0_0(t);
        t = f_24;
        t = e_96(t);
        LocalPopChoice(b_36);
      }
    else
      {
        t = a_36;
        t = f_24;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm g_96 (ATerm), ATerm t)
{
  ATerm k_24 = NULL;
  k_24 = t;
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_24 = NULL;
        t = term_z_26;
        t = get_config_0_0(t);
        m_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_24, term_j_13);
        t = geq_0_0(t);
        t = k_24;
        t = g_96(t);
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
        t = k_24;
      }
  }
  return(t);
}
static ATerm b_9 (ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm k_21, ATerm j_21, ATerm t)
{
  t = r_76(t);
  {
    static ATerm n_1 (ATerm t)
    {
      ATerm o_24 = NULL;
      o_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_21, o_24);
      t = q_76(t);
      return(t);
    }
    t = fetch_1_0(n_1, t);
  }
  t = j_21;
  return(t);
}
static ATerm c_9 (ATerm n_76 (ATerm), ATerm g_21, ATerm f_21, ATerm t)
{
  static ATerm i_25 (ATerm t)
  {
    ATerm b_25 = NULL,c_25 = NULL,f_25 = NULL;
    b_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_25 = ATgetFirst((ATermList) t);
            f_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_36 = t;
          int f_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_25;
              {
                static ATerm o_1 (ATerm t)
                {
                  t = f_21;
                  return(t);
                }
                t = b_9(n_76, o_1, c_25, f_25, t);
              }
              t = i_25(t);
              LocalPopChoice(f_36);
            }
          else
            {
              t = e_36;
              {
                ATerm q_5 = NULL,v_5 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(b_25);
                q_5 = t;
                t = f_25;
                t = i_25(t);
                v_5 = t;
                t = (ATerm) ATinsert(CheckATermList(v_5), c_25);
                z_0 = t;
                t = SSLsetAnnotations(z_0, q_5);
              }
            }
        }
      }
    return(t);
  }
  t = g_21;
  t = i_25(t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm r_25 = NULL;
  if(match_cons(t, sym__2))
    {
      r_25 = ATgetArgument(t, 0);
      if((r_25 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_9 (ATerm m_28, ATerm n_28, ATerm o_28, ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  l_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_28, n_28);
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_36 = ATgetArgument(t, 0);
            ATerm n_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_28, n_28);
        t = q_9(m_28, n_28, t);
        LocalPopChoice(h_36);
      }
    else
      {
        t = g_36;
        t = (ATerm) ATempty;
      }
  }
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_25, o_28);
  t = c_9(p_1, n_25, o_28, t);
  m_25 = t;
  t = SSL_table_put(m_28, n_28, m_25);
  t = l_25;
  return(t);
}
static ATerm e_9 (ATerm y_80 (ATerm), ATerm w_28, ATerm v_28, ATerm t)
{
  static ATerm s_1 (ATerm t)
  {
    ATerm s_25 = NULL,t_25 = NULL;
    if(match_cons(t, sym__2))
      {
        s_25 = ATgetArgument(t, 0);
        t_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, w_28, s_25, t_25);
    t = y_80(t);
    return(t);
  }
  t = v_28;
  t = map_1_0(s_1, t);
  return(t);
}
static ATerm i_9 (ATerm w_13, ATerm x_13, ATerm t)
{
  t = SSL_access(w_13, x_13);
  return(t);
}
static ATerm w_26 (ATerm o_26, ATerm t)
{
  t = SSL_fclose(o_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  s_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_26 = ATgetArgument(t, 0);
      {
        ATerm o_36 = t;
        int p_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_26);
            LocalPopChoice(p_36);
          }
        else
          {
            t = o_36;
            t = w_26(s_26, t);
          }
      }
    }
  else
    {
      t = w_26(s_26, t);
    }
  return(t);
}
static ATerm f_9 (ATerm x_38, ATerm t)
{
  t = SSL_read_term_from_stream(x_38);
  return(t);
}
static ATerm g_9 (ATerm f_14, ATerm g_14, ATerm t)
{
  ATerm x_26 = NULL;
  t = SSL_fopen(f_14, g_14);
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_26);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_27 = NULL;
  t = SSL_stdin_stream();
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_27 = NULL;
  t = SSL_stdout_stream();
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_27 = NULL;
  t = SSL_stderr_stream();
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_27);
  return(t);
}
static ATerm i_29 (ATerm k_27, ATerm t)
{
  ATerm l_27 = NULL;
  t = SSL_explode_term(k_27);
  if(match_cons(t, sym__2))
    {
      ATerm q_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_36 = ATgetArgument(t, 1);
        if(((ATgetType(r_36) == AT_LIST) && !(ATisEmpty(r_36))))
          {
            l_27 = ATgetFirst((ATermList) r_36);
            {
              ATerm s_36 = (ATerm) ATgetNext((ATermList) r_36);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_27;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_27;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_27;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_27;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_29 (ATerm r_27, ATerm s_27, ATerm w_27, ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,d_28 = NULL,q_1 = NULL;
  t = SSLgetAnnotations(w_27);
  z_27 = t;
  t = r_27;
  if(match_cons(t, sym_Path_1))
    {
      d_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_28, s_27);
  q_1 = t;
  t = SSLsetAnnotations(q_1, z_27);
  if(match_cons(t, sym__2))
    {
      x_27 = ATgetArgument(t, 0);
      y_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(x_27, y_27, t);
  return(t);
}
static ATerm k_29 (ATerm f_28, ATerm g_28, ATerm h_28, ATerm t)
{
  ATerm i_28 = NULL,l_28 = NULL,r_28 = NULL,b_29 = NULL,r_1 = NULL;
  t = SSLgetAnnotations(h_28);
  r_28 = t;
  t = SSL_is_string(f_28);
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_29, g_28);
  r_1 = t;
  t = SSLsetAnnotations(r_1, r_28);
  if(match_cons(t, sym__2))
    {
      i_28 = ATgetArgument(t, 0);
      l_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(i_28, l_28, t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  d_29 = t;
  if(match_cons(t, sym__2))
    {
      e_29 = ATgetArgument(t, 0);
      f_29 = ATgetArgument(t, 1);
      {
        ATerm t_36 = t;
        int u_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_29(d_29, t);
            LocalPopChoice(u_36);
          }
        else
          {
            t = t_36;
            {
              ATerm v_36 = t;
              int y_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_29(e_29, f_29, d_29, t);
                  LocalPopChoice(y_36);
                }
              else
                {
                  t = v_36;
                  t = k_29(e_29, f_29, d_29, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_29(d_29, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,r_29 = NULL,a_30 = NULL;
  a_30 = t;
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_30, term_c_37);
        t = h_9(t);
        LocalPopChoice(a_37);
      }
    else
      {
        t = z_36;
        {
          ATerm w_6 = NULL,x_6 = NULL;
          t = term_e_37;
          x_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_37, a_30);
          t = p_9(x_6, a_30, t);
          w_6 = t;
          t = SSL_perror(w_6);
          _fail(t);
        }
      }
  }
  n_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(r_29, t);
  m_29 = t;
  t = n_29;
  t = fclose_0_0(t);
  t = m_29;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_f_37;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_h_37;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm i_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_30 = NULL,m_30 = NULL;
      l_30 = t;
      t = (ATerm) ATinsert(ATempty, term_l_37);
      m_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_30, (ATerm) ATinsert(ATempty, term_l_37));
      t = i_9(l_30, m_30, t);
      LocalPopChoice(j_37);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = i_37;
      {
        ATerm m_37 = t;
        int q_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_37 = t;
            if((PushChoice() == 0))
              {
                ATerm n_30 = NULL,o_30 = NULL;
                n_30 = t;
                t = (ATerm) ATinsert(ATempty, term_h_8);
                o_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, n_30, (ATerm) ATinsert(ATempty, term_h_8));
                t = i_9(n_30, o_30, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_37;
              }
            t = debug_1_0(v_1, t);
            LocalPopChoice(q_37);
          }
        else
          {
            t = m_37;
            t = debug_1_0(w_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_y_37;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_z_37;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm i_31 = NULL,l_31 = NULL,m_31 = NULL;
  i_31 = t;
  t = term_g_24;
  l_31 = t;
  t = (ATerm) ATinsert(ATempty, term_a_38);
  m_31 = t;
  t = SSL_printnl(l_31, m_31);
  t = i_31;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm n_31 = NULL,r_31 = NULL,t_31 = NULL;
  if(match_cons(t, sym__3))
    {
      n_31 = ATgetArgument(t, 0);
      r_31 = ATgetArgument(t, 1);
      t_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_9(n_31, r_31, t_31, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  u_31 = t;
  t = term_g_24;
  v_31 = t;
  t = (ATerm) ATinsert(ATempty, term_b_38);
  w_31 = t;
  t = SSL_printnl(v_31, w_31);
  t = u_31;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,f_32 = NULL;
  x_31 = t;
  t = term_g_24;
  y_31 = t;
  t = (ATerm) ATinsert(ATempty, term_a_38);
  f_32 = t;
  t = SSL_printnl(y_31, f_32);
  t = x_31;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,x_30 = NULL,y_30 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL;
  p_30 = t;
  t = if_verbose5_1_0(x_1, t);
  {
    ATerm c_38 = t;
    if((PushChoice() == 0))
      {
        ATerm g_31 = NULL,h_31 = NULL;
        t = term_d_38;
        g_31 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, p_30);
        h_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_38, (ATerm) ATmakeAppl(sym_Imported_1, p_30));
        t = q_9(g_31, h_31, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_38;
      }
  }
  t_30 = t;
  t = term_d_38;
  d_31 = t;
  t = term_e_38;
  e_31 = t;
  t = (ATerm) ATinsert(ATempty, p_30);
  f_31 = t;
  t = SSL_table_put(d_31, e_31, f_31);
  t = t_30;
  t = if_verbose4_1_0(a_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(e_2, t);
  q_30 = t;
  t = term_d_38;
  y_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_38, q_30);
  t = e_9(g_2, y_30, q_30, t);
  t = if_verbose6_1_0(h_2, t);
  t = term_d_38;
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, p_30);
  v_30 = t;
  t = (ATerm) ATempty;
  x_30 = t;
  t = SSL_table_put(u_30, v_30, x_30);
  t = (ATerm) ATmakeAppl(sym__3, term_d_38, (ATerm)ATmakeAppl(sym_Imported_1, p_30), (ATerm) ATempty);
  t = if_verbose4_1_0(o_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
  j_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_33;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_33 = ATgetFirst((ATermList) t);
          l_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm f_38 = t;
        int g_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_7 = NULL,f_7 = NULL,g_7 = NULL,l_8 = NULL;
            t = SSLgetAnnotations(j_33);
            c_7 = t;
            t = k_33;
            t = z_80(t);
            f_7 = t;
            t = l_33;
            t = filter_1_0(z_80, t);
            g_7 = t;
            t = (ATerm) ATinsert(CheckATermList(g_7), f_7);
            l_8 = t;
            t = SSLsetAnnotations(l_8, c_7);
            LocalPopChoice(g_38);
          }
        else
          {
            t = f_38;
            t = l_33;
            t = filter_1_0(z_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm t)
{
  static ATerm q_33 (ATerm t)
  {
    ATerm i_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_70(t);
        t = q_33(t);
        LocalPopChoice(j_38);
      }
    else
      {
        t = i_38;
        t = o_70(t);
      }
    return(t);
  }
  t = q_33(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm k_38 = t;
  int l_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_38;
      t = get_config_0_0(t);
      LocalPopChoice(l_38);
    }
  else
    {
      t = k_38;
      {
        ATerm p_38 = t;
        int u_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_33 = NULL;
            t = term_y_38;
            r_33 = t;
            t = SSL_getenv(r_33);
            LocalPopChoice(u_38);
          }
        else
          {
            t = p_38;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = debug_1_0(s_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_z_38;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  t = term_d_38;
  x_33 = t;
  t = term_a_39;
  y_33 = t;
  t = term_f_39;
  t = q_9(x_33, y_33, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm g_39 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_39;
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
  t = term_h_39;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm t_33 = NULL;
  t = if_verbose5_1_0(q_2, t);
  t_33 = t;
  {
    ATerm i_39 = t;
    int o_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_33 = NULL,v_33 = NULL;
        t = term_d_38;
        u_33 = t;
        t = term_e_38;
        v_33 = t;
        t = term_p_39;
        t = q_9(u_33, v_33, t);
        LocalPopChoice(o_39);
      }
    else
      {
        t = i_39;
        {
          ATerm w_33 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          w_33 = t;
          t = repeat_2_0(u_2, _id, t);
          t = w_33;
        }
      }
  }
  t = t_33;
  t = if_verbose5_1_0(w_2, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = debug_1_0(b_3, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_u_39;
  return(t);
}
static ATerm i_35 (ATerm e_34, ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,k_34 = NULL;
  t = term_d_38;
  h_34 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, e_34);
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_38, (ATerm) ATmakeAppl(sym_Tool_1, e_34));
  t = q_9(h_34, k_34, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_39 = ATgetFirst((ATermList) t);
      if(match_cons(w_39, sym__2))
        {
          ATerm y_39 = ATgetArgument(w_39, 0);
          g_34 = ATgetArgument(w_39, 1);
        }
      else
        _fail(t);
      {
        ATerm x_39 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_34;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = debug_1_0(e_3, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_u_39;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_d_38;
  t = table_getlist_0_0(t);
  t = debug_1_0(p_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_z_39;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm a_40 = t;
  int b_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
      t = if_verbose5_1_0(a_3, t);
      t = xtc_load_0_0(t);
      n_34 = t;
      if(match_cons(t, sym__2))
        {
          l_34 = ATgetArgument(t, 0);
          m_34 = ATgetArgument(t, 1);
          {
            ATerm c_40 = t;
            int g_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_34 = NULL,y_34 = NULL,z_34 = NULL;
                t = term_d_38;
                y_34 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, l_34);
                z_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_38, (ATerm) ATmakeAppl(sym_Tool_1, l_34));
                t = q_9(y_34, z_34, t);
                {
                  static ATerm c_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((m_34 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((r_34 != NULL) && (r_34 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_34 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(c_3, t);
                }
                t = not_null(r_34);
                LocalPopChoice(g_40);
              }
            else
              {
                t = c_40;
                t = i_35(n_34, t);
              }
          }
        }
      else
        {
          t = i_35(n_34, t);
        }
      t = if_verbose5_1_0(d_3, t);
      LocalPopChoice(b_40);
    }
  else
    {
      t = a_40;
      {
        ATerm g_35 = NULL,n_7 = NULL,o_7 = NULL;
        g_35 = t;
        t = term_g_24;
        n_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_40), g_35), term_h_40);
        o_7 = t;
        t = SSL_printnl(n_7, o_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_40), g_35), term_h_40);
        t = if_verbose5_1_0(o_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm d_98 (ATerm), ATerm t)
{
  ATerm l_35 = NULL,n_35 = NULL;
  n_35 = t;
  t = d_98(t);
  t = xtc_find_0_0(t);
  l_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_35, n_35);
  {
    static ATerm q_3 (ATerm t)
    {
      ATerm o_35 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, l_35, n_35);
      t = y_8(l_35, n_35, t);
      t = term_k_40;
      o_35 = t;
      t = SSL_exit(o_35);
      return(t);
    }
    t = fork_and_wait_1_0(q_3, t);
  }
  t = n_35;
  return(t);
}
ATerm at_end_1_0 (ATerm z_72 (ATerm), ATerm t)
{
  static ATerm m_36 (ATerm t)
  {
    ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
    k_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_36 = ATgetFirst((ATermList) t);
        j_36 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_7 = NULL,w_7 = NULL,r_13 = NULL;
          t = SSLgetAnnotations(k_36);
          t_7 = t;
          t = j_36;
          t = m_36(t);
          w_7 = t;
          t = (ATerm) ATinsert(CheckATermList(w_7), i_36);
          r_13 = t;
          t = SSLsetAnnotations(r_13, t_7);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_36;
        t = z_72(t);
      }
    return(t);
  }
  t = m_36(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
  q_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_35;
    }
  else
    {
      static ATerm s_3 (ATerm t)
      {
        t = not_null(s_35);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_35 = ATgetFirst((ATermList) t);
          if(((s_35 != NULL) && (s_35 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_35;
      t = at_end_1_0(s_3, t);
    }
  return(t);
}
static ATerm k_37 (ATerm w_36, ATerm t)
{
  ATerm x_36 = NULL;
  t = SSL_explode_term(w_36);
  if(match_cons(t, sym__2))
    {
      ATerm l_40 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_40) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_36;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_37 = NULL,d_37 = NULL,g_37 = NULL;
  g_37 = t;
  if(match_cons(t, sym__2))
    {
      b_37 = ATgetArgument(t, 0);
      d_37 = ATgetArgument(t, 1);
      {
        ATerm n_40 = t;
        int o_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_3 (ATerm t)
            {
              t = d_37;
              return(t);
            }
            t = b_37;
            t = at_end_1_0(t_3, t);
            LocalPopChoice(o_40);
          }
        else
          {
            t = n_40;
            t = k_37(g_37, t);
          }
      }
    }
  else
    {
      t = k_37(g_37, t);
    }
  return(t);
}
static ATerm j_9 (ATerm q_80 (ATerm), ATerm l_26, ATerm j_26, ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL;
  r_37 = t;
  t = q_80(t);
  n_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_37, l_26, j_26);
  t = r_9(n_37, l_26, j_26, t);
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_37 = NULL;
        t = term_v_40;
        x_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_37, term_v_40);
        t = q_9(n_37, x_37, t);
        LocalPopChoice(q_40);
      }
    else
      {
        t = p_40;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_37 = ATgetFirst((ATermList) t);
      p_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_v_40;
  s_37 = t;
  t = (ATerm) ATinsert(CheckATermList(p_37), (ATerm) ATinsert(CheckATermList(o_37), l_26));
  t_37 = t;
  t = SSL_table_put(n_37, s_37, t_37);
  t = r_37;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm h_38 = NULL;
  ATerm w_40 = t;
  int y_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_38 = NULL,d_8 = NULL;
      n_38 = t;
      t = term_z_40;
      d_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_38, term_z_40);
      t = p_9(n_38, d_8, t);
      h_38 = t;
      t = SSL_mkstemp(h_38);
      LocalPopChoice(y_40);
    }
  else
    {
      t = w_40;
      {
        ATerm o_38 = NULL;
        t = term_b_41;
        o_38 = t;
        t = SSL_perror(o_38);
        _fail(t);
      }
    }
  return(t);
}
static ATerm p_9 (ATerm i_34, ATerm j_34, ATerm t)
{
  t = SSL_strcat(i_34, j_34);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_k_8;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm q_38 = NULL,t_38 = NULL,v_38 = NULL,w_38 = NULL,c_39 = NULL;
  t = P__tmpdir_0_0(t);
  w_38 = t;
  t = term_c_41;
  c_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_38, term_c_41);
  t = p_9(w_38, c_39, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      t_38 = ATgetArgument(t, 0);
      q_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_q_7;
  v_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_38, term_q_7);
  t = j_9(v_3, t_38, v_38, t);
  t = SSL_close(q_38);
  t = t_38;
  return(t);
}
ATerm xtc_generate_2_0 (ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL;
  t = term_q_7;
  t = xtc_new_file_0_0(t);
  d_39 = t;
  t = i_97(t);
  e_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_39, (ATerm) ATinsert(ATinsert(ATempty, d_39), term_m_10));
  t = conc_0_0(t);
  t = xtc_command_1_0(h_97, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, d_39);
  return(t);
}
static ATerm l_9 (ATerm u_27, ATerm v_27, ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL;
  k_39 = t;
  {
    ATerm h_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_27, v_27);
        t = q_9(u_27, v_27, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_41 = ATgetFirst((ATermList) t);
            j_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_41);
        t = SSL_table_put(u_27, v_27, j_39);
        t = (ATerm) ATmakeAppl(sym__3, u_27, v_27, j_39);
      }
    else
      {
        t = h_41;
        t = SSL_table_remove(u_27, v_27);
        t = (ATerm) ATmakeAppl(sym__2, u_27, v_27);
      }
  }
  t = k_39;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_80 (ATerm), ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL,q_39 = NULL,r_39 = NULL;
  q_39 = t;
  t = n_80(t);
  n_39 = t;
  {
    ATerm r_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_39 = NULL;
        t = term_v_40;
        s_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_39, term_v_40);
        t = q_9(n_39, s_39, t);
        LocalPopChoice(s_41);
      }
    else
      {
        t = r_41;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_39 = ATgetFirst((ATermList) t);
      l_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_v_40;
  r_39 = t;
  t = SSL_table_put(n_39, r_39, l_39);
  t = m_39;
  {
    static ATerm x_3 (ATerm t)
    {
      ATerm t_39 = NULL;
      t_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_39, t_39);
      t = l_9(n_39, t_39, t);
      return(t);
    }
    t = map_1_0(x_3, t);
  }
  t = q_39;
  return(t);
}
ATerm restore_always_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm t)
{
  ATerm t_41 = t;
  int u_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_70(t);
      t = j_70(t);
      LocalPopChoice(u_41);
    }
  else
    {
      t = t_41;
      t = j_70(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm v_39 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,i_40 = NULL;
  d_40 = t;
  t = m_80(t);
  v_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_39, term_v_40);
  {
    ATerm w_41 = t;
    int b_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_40 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_42 = ATgetArgument(t, 0);
            ATerm d_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_40;
        m_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_39, term_v_40);
        t = q_9(v_39, m_40, t);
        LocalPopChoice(b_42);
      }
    else
      {
        t = w_41;
        t = (ATerm) ATempty;
      }
  }
  e_40 = t;
  t = term_v_40;
  f_40 = t;
  t = (ATerm) ATinsert(CheckATermList(e_40), (ATerm) ATempty);
  i_40 = t;
  t = SSL_table_put(v_39, f_40, i_40);
  t = d_40;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_k_8;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm x_40 = NULL;
  x_40 = t;
  {
    ATerm i_42 = t;
    int m_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(x_40);
        LocalPopChoice(m_42);
      }
    else
      {
        t = i_42;
        t = x_40;
      }
  }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_k_8;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm p_97 (ATerm), ATerm t)
{
  ATerm r_40 = NULL;
  static ATerm c_4 (ATerm t)
  {
    ATerm s_40 = NULL;
    s_40 = t;
    {
      ATerm o_42 = t;
      int p_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_40 = NULL,u_40 = NULL;
          t = term_k_8;
          t_40 = t;
          t = term_v_40;
          u_40 = t;
          t = term_s_42;
          t = q_9(t_40, u_40, t);
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
        if(((r_40 != NULL) && (r_40 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          r_40 = ATgetFirst((ATermList) t);
        {
          ATerm u_42 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = r_40;
    t = map_1_0(h_4, t);
    t = s_40;
    t = end_scope_1_0(l_4, t);
    return(t);
  }
  t = begin_scope_1_0(a_4, t);
  t = restore_always_2_0(p_97, c_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL;
  a_41 = t;
  t = term_q_7;
  t = whoami_0_0(t);
  d_41 = t;
  t = term_g_24;
  f_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_42), d_41), term_w_42);
  g_41 = t;
  t = SSL_printnl(f_41, g_41);
  t = term_w_12;
  e_41 = t;
  t = SSL_exit(e_41);
  t = a_41;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL;
      t = term_q_7;
      t = n_0(t);
      o_41 = t;
      t = term_y_42;
      p_41 = t;
      t = term_z_42;
      q_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_42, term_z_42, o_41);
      t = r_9(p_41, q_41, o_41, t);
      _fail(t);
    }
  else
    {
      ATerm v_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_41 = ATgetFirst((ATermList) t);
          l_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_41 = ATgetFirst((ATermList) t);
          n_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_41;
      t = k_0(t);
      t = m_41;
      t = l_0(t);
      v_41 = t;
      t = (ATerm) ATinsert(CheckATermList(n_41), v_41);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm x_41 = NULL;
  x_41 = t;
  if(match_string(t, "-k"))
    {
      t = x_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_41;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
  y_41 = t;
  t = SSL_string_to_int(y_41);
  z_41 = t;
  t = term_a_43;
  a_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_43, z_41);
  t = t_9(a_42, z_41, t);
  t = y_41;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_b_43;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, o_4, p_4, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm e_42 = NULL;
  e_42 = t;
  if(match_string(t, "-S"))
    {
      t = e_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_42;
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL;
  t = term_z_26;
  f_42 = t;
  t = term_b_13;
  g_42 = t;
  t = term_e_43;
  t = t_9(f_42, g_42, t);
  t = term_g_43;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_l_43;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm h_42 = NULL,j_42 = NULL,k_42 = NULL;
  h_42 = t;
  t = SSL_string_to_int(h_42);
  j_42 = t;
  t = term_z_26;
  k_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_26, j_42);
  t = t_9(k_42, j_42, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_42);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_o_43;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm l_42 = NULL,n_42 = NULL;
  t = term_p_43;
  l_42 = t;
  t = term_q_7;
  n_42 = t;
  t = term_t_43;
  t = t_9(l_42, n_42, t);
  t = term_x_43;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_y_43;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_43 = t;
  int b_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_4, r_4, s_4, t);
      LocalPopChoice(b_44);
    }
  else
    {
      t = z_43;
      {
        ATerm c_44 = t;
        int e_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_4, w_4, x_4, t);
            LocalPopChoice(e_44);
          }
        else
          {
            t = c_44;
            t = Option_3_0(y_4, z_4, d_5, t);
          }
      }
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm q_42 = NULL;
  q_42 = t;
  if(match_string(t, "-o"))
    {
      t = q_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_42;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm r_42 = NULL,t_42 = NULL;
  r_42 = t;
  t = term_m_10;
  t_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, r_42);
  t = t_9(t_42, r_42, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_42);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_f_44;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_5, g_5, i_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm v_42 = NULL;
  v_42 = t;
  if(match_string(t, "-i"))
    {
      t = v_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_42;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL;
  c_43 = t;
  t = term_n_10;
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, c_43);
  t = t_9(d_43, c_43, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_43);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_g_44;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_5, k_5, l_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm f_43 = NULL,h_43 = NULL,i_43 = NULL;
  f_43 = t;
  t = term_h_44;
  h_43 = t;
  t = term_i_44;
  i_43 = t;
  t = term_j_44;
  t = t_9(h_43, i_43, t);
  t = f_43;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_k_44;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm j_43 = NULL;
  j_43 = t;
  if(match_string(t, "-t"))
    {
      t = j_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--title", 0, ATtrue)))
        _fail(t);
      t = j_43;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm k_43 = NULL,m_43 = NULL;
  k_43 = t;
  t = term_e_24;
  m_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_24, k_43);
  t = t_9(m_43, k_43, t);
  t = k_43;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_l_44;
  return(t);
}
ATerm abox2html_options_0_0 (ATerm t)
{
  ATerm m_44 = t;
  int n_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(n_44);
    }
  else
    {
      t = m_44;
      {
        ATerm o_44 = t;
        int p_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(p_44);
          }
        else
          {
            t = o_44;
            {
              ATerm q_44 = t;
              int r_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(r_44);
                }
              else
                {
                  t = q_44;
                  {
                    ATerm s_44 = t;
                    int t_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(t_44);
                      }
                    else
                      {
                        t = s_44;
                        {
                          ATerm u_44 = t;
                          int w_44 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(m_5, n_5, r_5, t);
                              LocalPopChoice(w_44);
                            }
                          else
                            {
                              t = u_44;
                              t = ArgOption_3_0(t_5, w_5, x_5, t);
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
  ATerm n_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_7;
  t = whoami_0_0(t);
  n_43 = t;
  t = term_g_24;
  r_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_44), n_43);
  s_43 = t;
  t = SSL_printnl(r_43, s_43);
  t = term_w_12;
  q_43 = t;
  t = SSL_exit(q_43);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_44;
  t = get_config_0_0(t);
  return(t);
}
static ATerm m_9 (ATerm x_24, ATerm y_24, ATerm t)
{
  ATerm a_45 = t;
  int c_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_24, y_24);
      LocalPopChoice(c_45);
    }
  else
    {
      t = a_45;
      t = SSL_addr(x_24, y_24);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
  u_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_43;
      t = e_79(t);
    }
  else
    {
      ATerm a_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_43 = ATgetFirst((ATermList) t);
          w_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_43;
      t = foldr_2_0(e_79, f_79, t);
      a_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_43, a_44);
      t = f_79(t);
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
  t = term_b_13;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm n_8 = NULL,q_8 = NULL;
  if(match_cons(t, sym__2))
    {
      n_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(n_8, q_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_44 = NULL,i_8 = NULL,j_8 = NULL;
  t = times_0_0(t);
  j_8 = t;
  t = SSL_explode_term(j_8);
  if(match_cons(t, sym__2))
    {
      ATerm d_45 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8;
  t = foldr_2_0(b_6, e_6, t);
  d_44 = t;
  t = SSL_TicksToSeconds(d_44);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_44 = NULL,y_44 = NULL,b_45 = NULL;
  v_44 = t;
  if(match_cons(t, sym__2))
    {
      y_44 = ATgetArgument(t, 0);
      b_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_45 = t;
    int f_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_45;
        if((y_44 != t))
          {
            _fail(t);
          }
        t = v_44;
        LocalPopChoice(f_45);
      }
    else
      {
        t = e_45;
        t = (ATerm) ATmakeAppl(sym__2, y_44, b_45);
        {
          ATerm g_45 = t;
          int i_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_44, b_45);
              LocalPopChoice(i_45);
            }
          else
            {
              t = g_45;
              t = SSL_gtr(y_44, b_45);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, y_44, b_45);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_96 (ATerm), ATerm t)
{
  ATerm h_45 = NULL;
  h_45 = t;
  {
    ATerm j_45 = t;
    int k_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_45 = NULL;
        t = term_z_26;
        t = get_config_0_0(t);
        l_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_45, term_w_12);
        t = geq_0_0(t);
        t = h_45;
        t = b_96(t);
        LocalPopChoice(k_45);
      }
    else
      {
        t = j_45;
        t = h_45;
      }
  }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm q_45 = NULL,u_45 = NULL,w_45 = NULL,x_45 = NULL;
  t = run_time_0_0(t);
  q_45 = t;
  t = term_q_7;
  t = whoami_0_0(t);
  u_45 = t;
  t = term_g_24;
  w_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_45), q_45), term_h_27), u_45);
  x_45 = t;
  t = SSL_printnl(w_45, x_45);
  t = (ATerm) ATmakeAppl(sym__2, term_g_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_45), q_45), term_h_27), u_45));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_45 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_13;
  y_45 = t;
  t = SSL_exit(y_45);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL;
  i_46 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_46;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_46 = ATgetArgument(t, 0);
          {
            ATerm t_10 = NULL,t_13 = NULL;
            t = SSLgetAnnotations(i_46);
            t_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_46);
            t_13 = t;
            t = SSLsetAnnotations(t_13, t_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_46;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_65 (ATerm), ATerm t)
{
  ATerm n_45 = t;
  int o_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_45;
      t = get_config_0_0(t);
      LocalPopChoice(o_45);
    }
  else
    {
      t = n_45;
      t = fetch_1_0(l_6, t);
    }
  t = w_65(t);
  return(t);
}
ATerm map_1_0 (ATerm i_72 (ATerm), ATerm t)
{
  static ATerm f_47 (ATerm t)
  {
    ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
    c_47 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_47;
      }
    else
      {
        ATerm i_11 = NULL,d_12 = NULL,e_12 = NULL,v_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_47 = ATgetFirst((ATermList) t);
            e_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_47);
        i_11 = t;
        t = d_47;
        t = i_72(t);
        d_12 = t;
        t = e_47;
        t = f_47(t);
        e_12 = t;
        t = (ATerm) ATinsert(CheckATermList(e_12), d_12);
        v_13 = t;
        t = SSLsetAnnotations(v_13, i_11);
      }
    return(t);
  }
  t = f_47(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_47 = ATgetFirst((ATermList) t);
      j_47 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_47 = NULL,o_47 = NULL;
        static ATerm n_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_47)), not_null(o_47));
          return(t);
        }
        t = j_47;
        t = i_0(t);
        if(((n_47 != NULL) && (n_47 != t)))
          _fail(t);
        else
          n_47 = t;
        t = i_47;
        t = g_0(t);
        if(((o_47 != NULL) && (o_47 != t)))
          _fail(t);
        else
          o_47 = t;
        t = j_47;
        t = reverse_acc_2_0(g_0, n_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_7;
      t = i_0(t);
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,c_14 = NULL;
  u_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_47);
  s_47 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_47);
  c_14 = t;
  t = SSLsetAnnotations(c_14, s_47);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm w_47 = NULL;
  w_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_47), term_r_45);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL;
  ATerm s_45 = t;
  int t_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_44;
      t = get_config_0_0(t);
      LocalPopChoice(t_45);
    }
  else
    {
      t = s_45;
      t = fetch_1_0(p_6, t);
    }
  t = term_v_45;
  t = echo_0_0(t);
  t = term_y_42;
  q_47 = t;
  t = term_z_42;
  r_47 = t;
  t = term_z_45;
  t = q_9(q_47, r_47, t);
  t = reverse_acc_2_0(_id, q_6, t);
  t = map_1_0(r_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_72 (ATerm), ATerm t)
{
  static ATerm t_48 (ATerm t)
  {
    ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL;
    q_48 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_48 = ATgetFirst((ATermList) t);
        s_48 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_46 = t;
      int b_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_12 = NULL,p_12 = NULL,h_14 = NULL;
          t = SSLgetAnnotations(q_48);
          m_12 = t;
          t = r_48;
          t = s_72(t);
          p_12 = t;
          t = (ATerm) ATinsert(CheckATermList(s_48), p_12);
          h_14 = t;
          t = SSLsetAnnotations(h_14, m_12);
          LocalPopChoice(b_46);
        }
      else
        {
          t = a_46;
          {
            ATerm x_12 = NULL,a_13 = NULL,i_14 = NULL;
            t = SSLgetAnnotations(q_48);
            x_12 = t;
            t = s_48;
            t = t_48(t);
            a_13 = t;
            t = (ATerm) ATinsert(CheckATermList(a_13), r_48);
            i_14 = t;
            t = SSLsetAnnotations(i_14, x_12);
          }
        }
    }
    return(t);
  }
  t = t_48(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_48 = NULL,z_48 = NULL,a_49 = NULL;
  x_48 = t;
  {
    ATerm c_46 = t;
    int d_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_48;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_46 = ATgetFirst((ATermList) t);
                ATerm f_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_48;
          }
        LocalPopChoice(d_46);
      }
    else
      {
        t = c_46;
        t = (ATerm) ATinsert(ATempty, x_48);
      }
  }
  z_48 = t;
  t = term_j_25;
  a_49 = t;
  t = SSL_printnl(a_49, z_48);
  t = x_48;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_44;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL;
  t = term_g_46;
  x_49 = t;
  t = term_q_7;
  y_49 = t;
  t = term_j_46;
  t = t_9(x_49, y_49, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_k_46;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,h_50 = NULL,i_50 = NULL;
  t = term_g_46;
  h_50 = t;
  t = term_q_7;
  i_50 = t;
  t = term_j_46;
  t = t_9(h_50, i_50, t);
  t = term_l_46;
  z_49 = t;
  t = term_q_7;
  a_50 = t;
  t = term_m_46;
  t = t_9(z_49, a_50, t);
  t = term_p_46;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_q_46;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_6, t_6, u_6, t);
      LocalPopChoice(s_46);
    }
  else
    {
      t = r_46;
      t = Option_3_0(v_6, y_6, z_6, t);
    }
  return(t);
}
static ATerm t_9 (ATerm n_46, ATerm o_46, ATerm t)
{
  ATerm j_50 = NULL;
  t = term_i_26;
  j_50 = t;
  t = SSL_table_put(j_50, n_46, o_46);
  t = (ATerm) ATmakeAppl(sym__3, term_i_26, n_46, o_46);
  return(t);
}
static ATerm q_9 (ATerm g_29, ATerm h_29, ATerm t)
{
  t = SSL_table_get(g_29, h_29);
  return(t);
}
static ATerm r_9 (ATerm p_27, ATerm q_27, ATerm o_27, ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,r_50 = NULL;
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_27, q_27);
  {
    ATerm t_46 = t;
    int u_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_46 = ATgetArgument(t, 0);
            ATerm w_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_27, q_27);
        t = q_9(p_27, q_27, t);
        LocalPopChoice(u_46);
      }
    else
      {
        t = t_46;
        t = (ATerm) ATempty;
      }
  }
  m_50 = t;
  t = (ATerm) ATinsert(CheckATermList(m_50), o_27);
  r_50 = t;
  t = SSL_table_put(p_27, q_27, r_50);
  t = l_50;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
      t = term_q_7;
      t = e_0(t);
      b_51 = t;
      t = term_y_42;
      c_51 = t;
      t = term_z_42;
      d_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_42, term_z_42, b_51);
      t = r_9(c_51, d_51, b_51, t);
      _fail(t);
    }
  else
    {
      ATerm g_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_50 = ATgetFirst((ATermList) t);
          a_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_50;
      t = c_0(t);
      t = term_q_7;
      t = d_0(t);
      g_51 = t;
      t = (ATerm) ATinsert(CheckATermList(a_51), g_51);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_59 (ATerm), ATerm i_59 (ATerm), ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,n_14 = NULL;
  l_52 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_51 = ATgetFirst((ATermList) t);
      i_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_52);
  h_51 = t;
  t = i_51;
  t = h_59(t);
  j_52 = t;
  t = i_52;
  t = i_59(t);
  k_52 = t;
  t = (ATerm) ATinsert(CheckATermList(k_52), j_52);
  n_14 = t;
  t = SSLsetAnnotations(n_14, h_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_86 (ATerm), ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,v_52 = NULL,w_52 = NULL,p_14 = NULL;
  q_52 = t;
  {
    ATerm x_46 = t;
    int y_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_46;
        t = r_86(t);
        LocalPopChoice(y_46);
      }
    else
      {
        t = x_46;
      }
  }
  t = q_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_52 = ATgetFirst((ATermList) t);
      t_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_52);
  r_52 = t;
  t = term_z_44;
  w_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_44, s_52);
  t = t_9(w_52, s_52, t);
  t = t_52;
  {
    static ATerm g_53 (ATerm t)
    {
      ATerm a_47 = t;
      int b_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_47 = t;
          int h_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_52 = NULL;
              z_52 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_52;
              LocalPopChoice(h_47);
            }
          else
            {
              t = g_47;
              t = r_86(t);
              t = Cons_2_0(_id, g_53, t);
            }
          LocalPopChoice(b_47);
        }
      else
        {
          t = a_47;
          {
            ATerm c_53 = NULL,d_53 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_53 = ATgetFirst((ATermList) t);
                d_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_53), (ATerm) ATmakeAppl(sym_Undefined_1, c_53));
          }
        }
      return(t);
    }
    t = g_53(t);
  }
  v_52 = t;
  t = (ATerm) ATinsert(CheckATermList(v_52), (ATerm) ATmakeAppl(sym_Program_1, s_52));
  p_14 = t;
  t = SSLsetAnnotations(p_14, r_52);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm s_53 = NULL;
  s_53 = t;
  if(match_string(t, "--help"))
    {
      t = s_53;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_53;
        }
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL;
  t = term_p_45;
  t_53 = t;
  t = term_q_7;
  u_53 = t;
  t = term_k_47;
  t = t_9(t_53, u_53, t);
  t = term_l_47;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_m_47;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL;
  n_53 = t;
  t = term_y_42;
  p_53 = t;
  t = term_z_42;
  q_53 = t;
  t = (ATerm) ATempty;
  r_53 = t;
  t = SSL_table_put(p_53, q_53, r_53);
  t = n_53;
  {
    static ATerm a_7 (ATerm t)
    {
      ATerm p_47 = t;
      int v_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_86(t);
          LocalPopChoice(v_47);
        }
      else
        {
          t = p_47;
          {
            ATerm x_47 = t;
            int y_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_7, d_7, e_7, t);
                LocalPopChoice(y_47);
              }
            else
              {
                t = x_47;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_7, t);
  }
  {
    ATerm z_47 = t;
    int a_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_54 = NULL;
        b_54 = t;
        {
          ATerm b_48 = t;
          int c_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_13 = NULL;
              t = b_54;
              {
                ATerm d_48 = t;
                int e_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_p_45;
                    t = get_config_0_0(t);
                    LocalPopChoice(e_48);
                  }
                else
                  {
                    t = d_48;
                    t = fetch_1_0(h_7, t);
                  }
              }
              t = b_54;
              t = default_system_usage_0_0(t);
              t = term_b_13;
              h_13 = t;
              t = SSL_exit(h_13);
              LocalPopChoice(c_48);
            }
          else
            {
              t = b_48;
              {
                ATerm l_13 = NULL;
                t = term_g_46;
                t = get_config_0_0(t);
                t = b_54;
                t = default_system_about_0_0(t);
                t = term_b_13;
                l_13 = t;
                t = SSL_exit(l_13);
              }
            }
        }
        LocalPopChoice(a_48);
      }
    else
      {
        t = z_47;
        {
          ATerm f_48 = t;
          int g_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
              static ATerm i_7 (ATerm t)
              {
                ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,y_14 = NULL;
                h_54 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_54 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_54);
                f_54 = t;
                t = g_54;
                if(((l_53 != NULL) && (l_53 != t)))
                  _fail(t);
                else
                  l_53 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_54);
                y_14 = t;
                t = SSLsetAnnotations(y_14, f_54);
                return(t);
              }
              t = fetch_1_0(i_7, t);
              t = term_g_24;
              d_54 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_53)), term_h_48);
              e_54 = t;
              t = SSL_printnl(d_54, e_54);
              t = (ATerm) ATmakeAppl(sym__2, term_g_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_53)), term_h_48));
              t = default_system_usage_0_0(t);
              t = term_w_12;
              c_54 = t;
              t = SSL_exit(c_54);
              LocalPopChoice(g_48);
            }
          else
            {
              t = f_48;
            }
        }
      }
  }
  m_53 = t;
  t = term_y_42;
  o_53 = t;
  t = SSL_table_destroy(o_53);
  t = m_53;
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_65 (ATerm), ATerm z_65 (ATerm), ATerm a_66 (ATerm), ATerm b_66 (ATerm), ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
  t = parse_options_1_0(y_65, t);
  m_54 = t;
  t = term_i_48;
  p_54 = t;
  t = SSL_table_create(p_54);
  t = term_i_48;
  n_54 = t;
  t = term_j_48;
  o_54 = t;
  t = SSL_table_put(n_54, o_54, m_54);
  t = m_54;
  t = a_66(t);
  {
    ATerm k_48 = t;
    int l_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_65, t);
        LocalPopChoice(l_48);
      }
    else
      {
        t = k_48;
        {
          ATerm m_48 = t;
          int n_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_66(t);
              t = report_success_0_0(t);
              LocalPopChoice(n_48);
            }
          else
            {
              t = m_48;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm o_48 = t;
  int p_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_54 = NULL;
      v_54 = t;
      t = term_h_44;
      t = get_config_0_0(t);
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("gen-css", 0, ATtrue)))
        _fail(t);
      t = v_54;
      t = xtc_temp_files_1_0(k_7, t);
      LocalPopChoice(p_48);
    }
  else
    {
      t = o_48;
      t = abox2html_0_0(t);
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = xtc_generate_2_0(l_7, pass_verbose_0_0, t);
  t = copy_to_1_0(m_7, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_u_48;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm v_48 = t;
  int w_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_10;
      t = get_config_0_0(t);
      LocalPopChoice(w_48);
    }
  else
    {
      t = v_48;
      t = term_j_25;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2html_options_0_0, default_usage_0_0, _id, j_7, t);
  return(t);
}
