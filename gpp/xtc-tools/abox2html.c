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
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_b_48;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_o_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_u_46;
ATerm term_l_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_s_45;
ATerm term_r_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_j_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_q_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_f_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_z_42;
ATerm term_u_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_l_42;
ATerm term_z_40;
ATerm term_w_40;
ATerm term_o_40;
ATerm term_h_40;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_r_39;
ATerm term_m_39;
ATerm term_d_39;
ATerm term_x_38;
ATerm term_u_38;
ATerm term_p_38;
ATerm term_m_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_d_38;
ATerm term_v_37;
ATerm term_t_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_l_37;
ATerm term_e_37;
ATerm term_b_37;
ATerm term_z_36;
ATerm term_w_36;
ATerm term_t_36;
ATerm term_q_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_x_33;
ATerm term_u_33;
ATerm term_s_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_k_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_y_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_p_29;
ATerm term_n_29;
ATerm term_l_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_t_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_h_28;
ATerm term_f_28;
ATerm term_v_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_d_26;
ATerm term_l_25;
ATerm term_x_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_f_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_y_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_o_23;
ATerm term_m_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_a_23;
ATerm term_y_22;
ATerm term_u_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_i_17;
ATerm term_b_17;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_g_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_o_9;
ATerm term_j_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_n_8;
ATerm term_i_7;
void init_constant_terms (void)
{
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Dec", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Nov", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Oct", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Sep", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Aug", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jul", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jun", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("May", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Apr", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Mar", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Feb", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jan", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("December", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("November", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("October", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("September", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("August", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("July", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("June", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("April", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("March", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("February", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("January", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Sat", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Fri", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Thu", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Wed", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Tue", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Mon", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Sun", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Saturday", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Friday", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Thursday", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Wednesday", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuesday", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Monday", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Sunday", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(100);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("p.m.", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("a.m.", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Saturday_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Friday_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Thursday_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Wednesday_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Tuesday_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Monday_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Sunday_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_December_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_November_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_October_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_September_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_August_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_July_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_June_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_May_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_April_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_March_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_February_0);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_January_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("EEEE", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("d", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("MMMM", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("yyyy", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("HH", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("mm", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ss", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--title", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no title specified for HTML document", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<!-- \n", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   This file is generated at ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" \n", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   by abox2html (C) 2001 Merijn de Jonge (mdejonge@cwi.nl)\n", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-->\n", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<!doctype html public \"-//W3C//DTD WWW HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/loose.dtd\"> \n", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<html>\n", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("  <head>\n", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("    <title>", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("</title>\n", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("    <link rel=\"stylesheet\" type=\"text/css\" href=\"boxstyle.css\">\n", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  </head>\n", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  <body>\n", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  </body>\n", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("</html>\n", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-html", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_27, term_g_12, term_e_27);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_27, term_f_13, term_i_27);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_27, term_e_13, term_p_27);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_27, term_w_12, term_v_27);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_28, term_t_12, term_l_28);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_28, term_v_28, term_w_28);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_29, term_c_29, term_d_29);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_29, term_v_12, term_p_29);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_29, term_t_29, term_u_29);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_29, term_y_29, term_f_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_30, term_u_12, term_m_30);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_30, term_b_13, term_p_30);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_30, term_s_30, term_t_30);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_30, term_p_12, term_w_30);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_30, term_z_30, term_c_31);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_31, term_i_31, term_j_31);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_31, term_q_31, term_r_31);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_31, term_u_31, term_z_31);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_32, term_d_14, term_f_32);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_32, term_q_12, term_i_32);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_32, term_c_14, term_l_32);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_32, term_p_32, term_q_32);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_32, term_u_32, term_v_32);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_32, term_z_32, term_f_33);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_33, term_a_13, term_i_33);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_33, term_o_33, term_p_33);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_33, term_x_33, term_b_34);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_34, term_e_34, term_f_34);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(sym__2, term_t_37, term_m_38);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym__2, term_t_37, term_v_37);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_h_40);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym__2, term_d_26, term_l_12);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_12);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(sym__2, term_l_43, term_i_7);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym__2, term_x_43, term_y_43);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Only generate cascading style sheet", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-t title    Title of HTML document", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(sym__2, term_q_42, term_u_42);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym__2, term_c_46, term_i_7);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym__2, term_f_46, term_i_7);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(sym__2, term_m_45, term_i_7);
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css-boxstyle", 0, ATtrue));
}
ATerm xtc_close_fd_0_0 (ATerm);
ATerm j_8 (ATerm m_31, ATerm n_31, ATerm);
ATerm File_as_fd_1_0 (ATerm m_87 (ATerm), ATerm);
ATerm STDERR__FILENO_0_0 (ATerm);
ATerm STDOUT__FILENO_0_0 (ATerm);
ATerm STDIN__FILENO_0_0 (ATerm);
ATerm xtc_open_fd_0_0 (ATerm);
ATerm a_0 (ATerm);
ATerm xtc_new_file_name_0_0 (ATerm);
ATerm xtc_cat_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm l_8 (ATerm f_35, ATerm g_35, ATerm);
ATerm m_8 (ATerm h_77 (ATerm), ATerm v_415, ATerm n_35, ATerm);
ATerm f_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm month2abbr_0_0 (ATerm);
ATerm month2text_0_0 (ATerm);
ATerm lt_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm day_of_week2abbr_0_0 (ATerm);
ATerm day_of_week2text_0_0 (ATerm);
ATerm while_not_2_0 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm);
ATerm for_3_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm);
ATerm q_0 (ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm copy_char_0_0 (ATerm);
ATerm o_8 (ATerm j_29, ATerm h_29, ATerm i_29, ATerm);
ATerm p_8 (ATerm q_28, ATerm r_28, ATerm s_28, ATerm);
ATerm q_8 (ATerm j_23, ATerm k_23, ATerm);
ATerm month2index_0_0 (ATerm);
ATerm date_pattern_to_int_0_0 (ATerm);
ATerm s_15 (ATerm m_12, ATerm n_12, ATerm);
ATerm date_pattern_to_string_0_0 (ATerm);
ATerm r_8 (ATerm q_47, ATerm p_47, ATerm);
ATerm index2day_of_week_0_0 (ATerm);
ATerm index2month_0_0 (ATerm);
ATerm s_8 (ATerm q_44, ATerm p_44, ATerm o_44, ATerm n_44, ATerm m_44, ATerm l_44, ATerm r_44, ATerm s_44, ATerm);
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm);
ATerm t_8 (ATerm i_44, ATerm);
ATerm now_epoch_time_0_0 (ATerm);
ATerm now_local_time_0_0 (ATerm);
ATerm create_time_0_0 (ATerm);
ATerm get_title_0_0 (ATerm);
ATerm create_header_0_0 (ATerm);
ATerm a_1 (ATerm);
ATerm xtc_io_1_0 (ATerm u_87 (ATerm), ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm abox2html_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm g_9 (ATerm k_31, ATerm l_31, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm u_8 (ATerm r_22, ATerm s_22, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm v_8 (ATerm k_34, ATerm l_34, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm b_65 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm u_86 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm w_86 (ATerm), ATerm);
ATerm y_8 (ATerm w_68 (ATerm), ATerm x_68 (ATerm), ATerm c_19, ATerm b_19, ATerm);
ATerm z_8 (ATerm t_68 (ATerm), ATerm y_18, ATerm x_18, ATerm);
ATerm t_1 (ATerm);
ATerm a_9 (ATerm e_25, ATerm f_25, ATerm g_25, ATerm);
ATerm b_9 (ATerm w_72 (ATerm), ATerm o_25, ATerm n_25, ATerm);
ATerm i_26 (ATerm c_26, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_9 (ATerm l_35, ATerm);
ATerm d_9 (ATerm a_12, ATerm b_12, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_27 (ATerm s_26, ATerm);
ATerm a_28 (ATerm w_26, ATerm x_26, ATerm y_26, ATerm);
ATerm b_28 (ATerm k_27, ATerm l_27, ATerm m_27, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm b_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm h_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm x_72 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm w_74 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm r_33 (ATerm r_32, ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm f_65 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm w_35 (ATerm j_35, ATerm);
ATerm conc_0_0 (ATerm);
ATerm e_9 (ATerm t_72 (ATerm), ATerm z_23, ATerm x_23, ATerm);
ATerm debug_1_0 (ATerm f_77 (ATerm), ATerm);
ATerm m_37 (ATerm s_36, ATerm);
ATerm n_37 (ATerm x_36, ATerm y_36, ATerm a_37, ATerm);
ATerm z_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm f_9 (ATerm s_11, ATerm t_11, ATerm);
ATerm l_9 (ATerm a_31, ATerm b_31, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_generate_2_0 (ATerm v_88 (ATerm), ATerm w_88 (ATerm), ATerm);
ATerm h_9 (ATerm m_24, ATerm n_24, ATerm);
ATerm end_scope_1_0 (ATerm q_72 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_63 (ATerm), ATerm n_63 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm p_72 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm t_87 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm j_4 (ATerm);
ATerm m_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm d_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm a_6 (ATerm);
ATerm abox2html_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm i_9 (ATerm l_22, ATerm m_22, ATerm);
ATerm foldr_2_0 (ATerm h_71 (ATerm), ATerm i_71 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_86 (ATerm), ATerm);
ATerm f_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm g_6 (ATerm);
ATerm need_help_1_0 (ATerm f_59 (ATerm), ATerm);
ATerm map_1_0 (ATerm p_64 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm z_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm p_9 (ATerm x_41, ATerm y_41, ATerm);
ATerm m_9 (ATerm y_25, ATerm z_25, ATerm);
ATerm n_9 (ATerm h_24, ATerm i_24, ATerm g_24, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm h_52 (ATerm), ATerm i_52 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm o_79 (ATerm), ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm parse_options_1_0 (ATerm n_79 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_59 (ATerm), ATerm i_59 (ATerm), ATerm j_59 (ATerm), ATerm k_59 (ATerm), ATerm);
ATerm a_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm xtc_close_fd_0_0 (ATerm t)
{
  ATerm o_0 = NULL;
  o_0 = t;
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 = NULL;
        t = term_i_7;
        t = STDIN__FILENO_0_0(t);
        s_0 = t;
        if((o_0 != t))
          {
            _fail(t);
          }
        t = s_0;
        ;
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
        {
          ATerm l_7 = t;
          int n_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_0 = NULL;
              t = term_i_7;
              t = STDOUT__FILENO_0_0(t);
              u_0 = t;
              if((o_0 != t))
                {
                  _fail(t);
                }
              t = u_0;
              ;
              LocalPopChoice(n_7);
            }
          else
            {
              t = l_7;
              {
                ATerm q_7 = t;
                int t_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_0 = NULL;
                    t = term_i_7;
                    t = STDERR__FILENO_0_0(t);
                    y_0 = t;
                    if((o_0 != t))
                      {
                        _fail(t);
                      }
                    t = y_0;
                    ;
                    LocalPopChoice(t_7);
                  }
                else
                  {
                    t = q_7;
                    t = SSL_close(o_0);
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm j_8 (ATerm m_31, ATerm n_31, ATerm t)
{
  t = SSL_fdcopy(m_31, n_31);
  return(t);
}
ATerm File_as_fd_1_0 (ATerm m_87 (ATerm), ATerm t)
{
  ATerm d_1 = NULL;
  t = xtc_open_fd_0_0(t);
  d_1 = t;
  {
    ATerm w_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_87(t);
        LocalPopChoice(a_8);
        {
          ATerm f_1 = NULL;
          f_1 = t;
          {
            ATerm b_8 = t;
            int e_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = d_1;
                t = xtc_close_fd_0_0(t);
                ;
                LocalPopChoice(e_8);
              }
            else
              {
                t = b_8;
              }
            t = f_1;
          }
        }
      }
    else
      {
        t = w_7;
        {
          ATerm f_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_1;
              t = xtc_close_fd_0_0(t);
              ;
              LocalPopChoice(i_8);
            }
          else
            {
              t = f_8;
            }
          t = d_1;
          _fail(t);
        }
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
  ATerm r_1 = NULL,s_1 = NULL;
  s_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_1 = ATgetArgument(t, 0);
      t = SSL_open(r_1);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          t = term_i_7;
          t = STDIN__FILENO_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_stdout_0))
            {
              t = term_i_7;
              t = STDOUT__FILENO_0_0(t);
            }
          else
            {
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
              t = term_i_7;
              t = STDERR__FILENO_0_0(t);
            }
        }
    }
  return(t);
}
ATerm a_0 (ATerm t)
{
  t = term_n_8;
  return(t);
}
ATerm xtc_new_file_name_0_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL;
  t = new_file_0_0(t);
  z_1 = t;
  t = term_i_7;
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_1, term_i_7);
  t = e_9(a_0, z_1, a_2, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_1);
  return(t);
}
ATerm xtc_cat_0_0 (ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,f_2 = NULL;
  d_2 = t;
  t = xtc_new_file_name_0_0(t);
  c_2 = t;
  t = xtc_open_fd_0_0(t);
  f_2 = t;
  t = d_2;
  {
    ATerm c_0 (ATerm t)
    {
      ATerm e_0 (ATerm t)
      {
        ATerm g_2 = NULL;
        g_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_2, f_2);
        t = j_8(g_2, f_2, t);
        return(t);
      }
      t = File_as_fd_1_0(e_0, t);
      return(t);
    }
    t = map_1_0(c_0, t);
    t = f_2;
    t = xtc_close_fd_0_0(t);
    t = c_2;
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm l_2 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_w_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm o_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          l_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_x_8);
      o_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_2, (ATerm) ATinsert(ATempty, term_x_8));
      t = f_9(l_2, o_2, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm l_8 (ATerm f_35, ATerm g_35, ATerm t)
{
  ATerm p_2 = NULL;
  t = SSL_write_term_to_stream_baf(f_35, g_35);
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_2);
  return(t);
}
ATerm m_8 (ATerm h_77 (ATerm), ATerm v_415, ATerm n_35, ATerm t)
{
  ATerm q_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_415, term_j_9);
  t = open_stream_0_0(t);
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_2, n_35);
  t = h_77(t);
  t = fclose_0_0(t);
  t = n_35;
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm t_2 = NULL,v_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_9 = ATgetArgument(t, 0);
      if(match_cons(k_9, sym_Stream_1))
        {
          t_2 = ATgetArgument(k_9, 0);
        }
      else
        _fail(t);
      v_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_8(t_2, v_2, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL;
  r_2 = t;
  t = xtc_new_file_0_0(t);
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_2, r_2);
  t = m_8(f_0, s_2, r_2, t);
  t = SSL_close_file(s_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, s_2);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(q_88, r_88, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL;
  l_3 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_1 = NULL,k_1 = NULL;
      t = l_3;
      t = xtc_new_file_0_0(t);
      i_1 = t;
      t = r_0(t);
      k_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_1, (ATerm) ATinsert(ATinsert(ATempty, i_1), term_o_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(i_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_1);
    }
  else
    {
      ATerm v_1 = NULL,w_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_3;
      t = xtc_new_file_0_0(t);
      v_1 = t;
      t = r_0(t);
      w_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_1), term_o_9), m_3), term_r_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(v_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
    }
  return(t);
}
ATerm month2abbr_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_s_9;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_t_9;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_u_9;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_v_9;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_y_9;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_a_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_c_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_e_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_f_10;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_h_10;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_j_10;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_k_10;
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
      t = term_l_10;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_n_10;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_o_10;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_p_10;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_q_10;
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
                              t = term_u_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_e_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_v_10;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_x_10;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_y_10;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_z_10;
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
  ATerm b_11 = t;
  if((PushChoice() == 0))
    {
      t = geq_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_11;
    }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm c_11 = t;
  if((PushChoice() == 0))
    {
      ATerm h_4 = NULL,i_4 = NULL;
      if(match_cons(t, sym__2))
        {
          h_4 = ATgetArgument(t, 0);
          i_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, h_4, i_4);
      {
        ATerm d_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(h_4, i_4);
            ;
            LocalPopChoice(f_11);
          }
        else
          {
            t = d_11;
            t = SSL_gtr(h_4, i_4);
          }
        t = (ATerm) ATmakeAppl(sym__2, h_4, i_4);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_11;
    }
  return(t);
}
ATerm day_of_week2abbr_0_0 (ATerm t)
{
  if(match_cons(t, sym_Saturday_0))
    {
      t = term_g_11;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_h_11;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_i_11;
            }
          else
            {
              if(match_cons(t, sym_Wednesday_0))
                {
                  t = term_k_11;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_l_11;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_m_11;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_n_11;
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
      t = term_o_11;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_p_11;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_q_11;
            }
          else
            {
              if(match_cons(t, sym_Wednesday_0))
                {
                  t = term_u_11;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_v_11;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_y_11;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_z_11;
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm while_not_2_0 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_75(t);
        ;
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        t = m_75(t);
        t = o_4(t);
      }
    return(t);
  }
  t = o_4(t);
  return(t);
}
ATerm for_3_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm t)
{
  t = o_75(t);
  t = while_not_2_0(p_75, q_75, t);
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm r_4 = NULL,x_4 = NULL;
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_4, x_4, (ATerm) ATempty);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm y_4 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm e_12 = ATgetArgument(t, 0);
      if(((ATgetType(e_12) != AT_INT) || (ATgetInt((ATermInt) e_12) != 0)))
        _fail(t);
      {
        ATerm f_12 = ATgetArgument(t, 1);
      }
      y_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_4;
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,e_5 = NULL;
  if(match_cons(t, sym__3))
    {
      z_4 = ATgetArgument(t, 0);
      a_5 = ATgetArgument(t, 1);
      b_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_4, term_g_12);
  t = geq_0_0(t);
  t = term_g_12;
  e_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_4, term_g_12);
  t = u_8(z_4, e_5, t);
  c_5 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_5, a_5, (ATerm) ATinsert(CheckATermList(b_5), a_5));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(q_0, t_0, v_0, t);
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm f_5 = NULL;
  t = copy_0_0(t);
  f_5 = t;
  t = SSL_implode_string(f_5);
  return(t);
}
ATerm o_8 (ATerm j_29, ATerm h_29, ATerm i_29, ATerm t)
{
  ATerm g_5 = NULL;
  t = SSL_strlen(h_29);
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_29, g_5);
  t = u_8(i_29, g_5, t);
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_5 = NULL;
        h_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_5, term_l_12);
        t = geq_0_0(t);
        t = h_5;
        LocalPopChoice(j_12);
        {
          ATerm i_5 = NULL;
          i_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_5, j_29);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = i_12;
        t = term_o_12;
      }
  }
  return(t);
}
ATerm p_8 (ATerm q_28, ATerm r_28, ATerm s_28, ATerm t)
{
  ATerm j_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, q_28, r_28, s_28);
  t = o_8(q_28, r_28, s_28, t);
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_5, r_28);
  t = l_9(j_5, r_28, t);
  return(t);
}
ATerm q_8 (ATerm j_23, ATerm k_23, ATerm t)
{
  t = SSL_mod(j_23, k_23);
  return(t);
}
ATerm month2index_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_p_12;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_q_12;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_t_12;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_u_12;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_v_12;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_w_12;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_a_13;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_b_13;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_e_13;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_f_13;
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
                                              t = term_l_12;
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
  ATerm m_7 = NULL,o_7 = NULL,p_7 = NULL,r_7 = NULL,s_7 = NULL,u_7 = NULL,v_7 = NULL,y_7 = NULL,z_7 = NULL,c_8 = NULL,g_8 = NULL,h_8 = NULL,k_8 = NULL;
  s_7 = t;
  if(match_cons(t, sym__2))
    {
      u_7 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7;
  if(match_string(t, "ss"))
    {
      t = v_7;
      if(match_cons(t, sym_ComponentTime_3))
        {
          ATerm g_13 = ATgetArgument(t, 0);
          h_8 = ATgetArgument(t, 1);
          {
            ATerm h_13 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = h_8;
      if(match_cons(t, sym_DayTime_3))
        {
          ATerm j_13 = ATgetArgument(t, 0);
          ATerm k_13 = ATgetArgument(t, 1);
          p_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_7;
    }
  else
    {
      if(match_string(t, "mm"))
        {
          t = v_7;
          if(match_cons(t, sym_ComponentTime_3))
            {
              ATerm l_13 = ATgetArgument(t, 0);
              h_8 = ATgetArgument(t, 1);
              {
                ATerm q_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = h_8;
          if(match_cons(t, sym_DayTime_3))
            {
              ATerm r_13 = ATgetArgument(t, 0);
              o_7 = ATgetArgument(t, 1);
              {
                ATerm s_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = o_7;
        }
      else
        {
          if(match_string(t, "KK"))
            {
              t = v_7;
              if(match_cons(t, sym_ComponentTime_3))
                {
                  ATerm u_13 = ATgetArgument(t, 0);
                  h_8 = ATgetArgument(t, 1);
                  {
                    ATerm v_13 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = h_8;
              if(match_cons(t, sym_DayTime_3))
                {
                  m_7 = ATgetArgument(t, 0);
                  {
                    ATerm x_13 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm z_13 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              {
                ATerm a_14 = t;
                int b_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_9 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, term_c_14, m_7);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, m_7, term_d_14);
                    t = leq_0_0(t);
                    t = term_c_14;
                    q_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, m_7, term_c_14);
                    t = u_8(m_7, q_9, t);
                    ;
                    LocalPopChoice(b_14);
                  }
                else
                  {
                    t = a_14;
                    t = (ATerm) ATmakeAppl(sym__2, term_l_12, m_7);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, m_7, term_c_14);
                    t = lt_0_0(t);
                    t = m_7;
                  }
              }
            }
          else
            {
              if(match_string(t, "hh"))
                {
                  t = v_7;
                  if(match_cons(t, sym_ComponentTime_3))
                    {
                      ATerm e_14 = ATgetArgument(t, 0);
                      h_8 = ATgetArgument(t, 1);
                      {
                        ATerm i_14 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = h_8;
                  if(match_cons(t, sym_DayTime_3))
                    {
                      m_7 = ATgetArgument(t, 0);
                      {
                        ATerm k_14 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm m_14 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = m_7;
                  if(match_int(t, 0))
                    {
                      ATerm n_14 = t;
                      int o_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_9 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_c_14, m_7);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, m_7, term_d_14);
                          t = leq_0_0(t);
                          t = term_c_14;
                          x_9 = t;
                          t = (ATerm) ATmakeAppl(sym__2, m_7, term_c_14);
                          t = u_8(m_7, x_9, t);
                          ;
                          LocalPopChoice(o_14);
                        }
                      else
                        {
                          t = n_14;
                          {
                            ATerm p_14 = t;
                            int q_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_g_12, m_7);
                                t = leq_0_0(t);
                                t = (ATerm) ATmakeAppl(sym__2, m_7, term_c_14);
                                t = leq_0_0(t);
                                t = m_7;
                                ;
                                LocalPopChoice(q_14);
                              }
                            else
                              {
                                t = p_14;
                                t = term_c_14;
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm r_14 = t;
                      int s_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_10 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_c_14, m_7);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, m_7, term_d_14);
                          t = leq_0_0(t);
                          t = term_c_14;
                          d_10 = t;
                          t = (ATerm) ATmakeAppl(sym__2, m_7, term_c_14);
                          t = u_8(m_7, d_10, t);
                          ;
                          LocalPopChoice(s_14);
                        }
                      else
                        {
                          t = r_14;
                          t = (ATerm) ATmakeAppl(sym__2, term_g_12, m_7);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, m_7, term_c_14);
                          t = leq_0_0(t);
                          t = m_7;
                        }
                    }
                }
              else
                {
                  if(match_string(t, "kk"))
                    {
                      ATerm i_10 = NULL;
                      t = v_7;
                      if(match_cons(t, sym_ComponentTime_3))
                        {
                          ATerm t_14 = ATgetArgument(t, 0);
                          h_8 = ATgetArgument(t, 1);
                          {
                            ATerm u_14 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = h_8;
                      if(match_cons(t, sym_DayTime_3))
                        {
                          m_7 = ATgetArgument(t, 0);
                          {
                            ATerm v_14 = ATgetArgument(t, 1);
                          }
                          {
                            ATerm w_14 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = term_g_12;
                      i_10 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_7, term_g_12);
                      t = i_9(m_7, i_10, t);
                    }
                  else
                    {
                      if(match_string(t, "HH"))
                        {
                          t = v_7;
                          if(match_cons(t, sym_ComponentTime_3))
                            {
                              ATerm x_14 = ATgetArgument(t, 0);
                              h_8 = ATgetArgument(t, 1);
                              {
                                ATerm y_14 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = h_8;
                          if(match_cons(t, sym_DayTime_3))
                            {
                              m_7 = ATgetArgument(t, 0);
                              {
                                ATerm z_14 = ATgetArgument(t, 1);
                              }
                              {
                                ATerm a_15 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = m_7;
                        }
                      else
                        {
                          if(match_string(t, "DD"))
                            {
                              t = v_7;
                              if(match_cons(t, sym_ComponentTime_3))
                                {
                                  ATerm b_15 = ATgetArgument(t, 0);
                                  ATerm c_15 = ATgetArgument(t, 1);
                                  k_8 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = k_8;
                              if(match_cons(t, sym_Dupl_2))
                                {
                                  ATerm d_15 = ATgetArgument(t, 0);
                                  r_7 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = r_7;
                            }
                          else
                            {
                              if(match_string(t, "D"))
                                {
                                  t = v_7;
                                  if(match_cons(t, sym_ComponentTime_3))
                                    {
                                      ATerm e_15 = ATgetArgument(t, 0);
                                      ATerm f_15 = ATgetArgument(t, 1);
                                      k_8 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = k_8;
                                  if(match_cons(t, sym_Dupl_2))
                                    {
                                      ATerm g_15 = ATgetArgument(t, 0);
                                      r_7 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = r_7;
                                }
                              else
                                {
                                  if(match_string(t, "dd"))
                                    {
                                      t = v_7;
                                      if(match_cons(t, sym_ComponentTime_3))
                                        {
                                          y_7 = ATgetArgument(t, 0);
                                          {
                                            ATerm h_15 = ATgetArgument(t, 1);
                                          }
                                          {
                                            ATerm i_15 = ATgetArgument(t, 2);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      t = y_7;
                                      if(match_cons(t, sym_Date_3))
                                        {
                                          ATerm j_15 = ATgetArgument(t, 0);
                                          ATerm k_15 = ATgetArgument(t, 1);
                                          g_8 = ATgetArgument(t, 2);
                                        }
                                      else
                                        _fail(t);
                                      t = g_8;
                                    }
                                  else
                                    {
                                      if(match_string(t, "d"))
                                        {
                                          t = v_7;
                                          if(match_cons(t, sym_ComponentTime_3))
                                            {
                                              y_7 = ATgetArgument(t, 0);
                                              {
                                                ATerm l_15 = ATgetArgument(t, 1);
                                              }
                                              {
                                                ATerm m_15 = ATgetArgument(t, 2);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          t = y_7;
                                          if(match_cons(t, sym_Date_3))
                                            {
                                              ATerm n_15 = ATgetArgument(t, 0);
                                              ATerm o_15 = ATgetArgument(t, 1);
                                              g_8 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          t = g_8;
                                        }
                                      else
                                        {
                                          if(match_string(t, "MM"))
                                            {
                                              ATerm r_10 = NULL,s_10 = NULL;
                                              t = v_7;
                                              if(match_cons(t, sym_ComponentTime_3))
                                                {
                                                  y_7 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm p_15 = ATgetArgument(t, 1);
                                                  }
                                                  {
                                                    ATerm q_15 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = y_7;
                                              if(match_cons(t, sym_Date_3))
                                                {
                                                  ATerm r_15 = ATgetArgument(t, 0);
                                                  c_8 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm x_15 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = c_8;
                                              t = month2index_0_0(t);
                                              r_10 = t;
                                              t = term_g_12;
                                              s_10 = t;
                                              t = (ATerm) ATmakeAppl(sym__2, r_10, term_g_12);
                                              t = i_9(r_10, s_10, t);
                                            }
                                          else
                                            {
                                              if(match_string(t, "M"))
                                                {
                                                  ATerm w_10 = NULL,a_11 = NULL;
                                                  t = v_7;
                                                  if(match_cons(t, sym_ComponentTime_3))
                                                    {
                                                      y_7 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm y_15 = ATgetArgument(t, 1);
                                                      }
                                                      {
                                                        ATerm z_15 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = y_7;
                                                  if(match_cons(t, sym_Date_3))
                                                    {
                                                      ATerm a_16 = ATgetArgument(t, 0);
                                                      c_8 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm d_16 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = c_8;
                                                  t = month2index_0_0(t);
                                                  w_10 = t;
                                                  t = term_g_12;
                                                  a_11 = t;
                                                  t = (ATerm) ATmakeAppl(sym__2, w_10, term_g_12);
                                                  t = i_9(w_10, a_11, t);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "yy"))
                                                    {
                                                      ATerm e_11 = NULL;
                                                      t = v_7;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          y_7 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm e_16 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm x_16 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = y_7;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          z_7 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm y_16 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm z_16 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = term_b_17;
                                                      e_11 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, z_7, term_b_17);
                                                      t = q_8(z_7, e_11, t);
                                                    }
                                                  else
                                                    {
                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("yyyy", 0, ATtrue)))
                                                        _fail(t);
                                                      t = v_7;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          y_7 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm d_17 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm e_17 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = y_7;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          z_7 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm f_17 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm h_17 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = z_7;
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
ATerm s_15 (ATerm m_12, ATerm n_12, ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,x_12 = NULL,z_12 = NULL;
  t = n_12;
  t = date_pattern_to_int_0_0(t);
  x_12 = t;
  t = SSL_int_to_string(x_12);
  r_12 = t;
  t = SSL_strlen(m_12);
  s_12 = t;
  t = term_i_17;
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_17, r_12, s_12);
  t = p_8(z_12, r_12, s_12, t);
  return(t);
}
ATerm date_pattern_to_string_0_0 (ATerm t)
{
  ATerm d_13 = NULL,i_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,w_13 = NULL,f_14 = NULL,g_14 = NULL;
  m_13 = t;
  if(match_cons(t, sym__2))
    {
      n_13 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_13;
  if(match_cons(t, sym_ComponentTime_3))
    {
      p_13 = ATgetArgument(t, 0);
      f_14 = ATgetArgument(t, 1);
      g_14 = ATgetArgument(t, 2);
      t = g_14;
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Dupl_2))
              {
                i_13 = ATgetArgument(t, 0);
                {
                  ATerm l_17 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(k_17);
            t = f_14;
            {
              ATerm m_17 = t;
              int n_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      d_13 = ATgetArgument(t, 0);
                      {
                        ATerm o_17 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm p_17 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(n_17);
                  t = p_13;
                  {
                    ATerm r_17 = t;
                    int s_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm t_17 = ATgetArgument(t, 0);
                            w_13 = ATgetArgument(t, 1);
                            {
                              ATerm u_17 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(s_17);
                        t = n_13;
                        if(match_string(t, "a"))
                          {
                            ATerm v_17 = t;
                            int z_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = s_15(n_13, m_13, t);
                                ;
                                LocalPopChoice(z_17);
                              }
                            else
                              {
                                t = v_17;
                                {
                                  ATerm a_18 = t;
                                  int b_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_c_14, d_13);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, d_13, term_d_14);
                                      t = leq_0_0(t);
                                      t = term_c_18;
                                      ;
                                      LocalPopChoice(b_18);
                                    }
                                  else
                                    {
                                      t = a_18;
                                      t = (ATerm) ATmakeAppl(sym__2, term_l_12, d_13);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, d_13, term_c_14);
                                      t = lt_0_0(t);
                                      t = term_d_18;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEEE"))
                              {
                                ATerm e_18 = t;
                                int f_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = s_15(n_13, m_13, t);
                                    ;
                                    LocalPopChoice(f_18);
                                  }
                                else
                                  {
                                    t = e_18;
                                    t = i_13;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm h_18 = t;
                                    int j_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = s_15(n_13, m_13, t);
                                        ;
                                        LocalPopChoice(j_18);
                                      }
                                    else
                                      {
                                        t = h_18;
                                        t = i_13;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    if(match_string(t, "MMMM"))
                                      {
                                        ATerm k_18 = t;
                                        int l_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = s_15(n_13, m_13, t);
                                            ;
                                            LocalPopChoice(l_18);
                                          }
                                        else
                                          {
                                            t = k_18;
                                            t = w_13;
                                            t = month2text_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_string(t, "MMM"))
                                          {
                                            ATerm m_18 = t;
                                            int n_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = s_15(n_13, m_13, t);
                                                ;
                                                LocalPopChoice(n_18);
                                              }
                                            else
                                              {
                                                t = m_18;
                                                t = w_13;
                                                t = month2abbr_0_0(t);
                                              }
                                          }
                                        else
                                          {
                                            t = s_15(n_13, m_13, t);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = r_17;
                        t = n_13;
                        if(match_string(t, "a"))
                          {
                            ATerm s_18 = t;
                            int t_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = s_15(n_13, m_13, t);
                                ;
                                LocalPopChoice(t_18);
                              }
                            else
                              {
                                t = s_18;
                                {
                                  ATerm u_18 = t;
                                  int v_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_c_14, d_13);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, d_13, term_d_14);
                                      t = leq_0_0(t);
                                      t = term_c_18;
                                      ;
                                      LocalPopChoice(v_18);
                                    }
                                  else
                                    {
                                      t = u_18;
                                      t = (ATerm) ATmakeAppl(sym__2, term_l_12, d_13);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, d_13, term_c_14);
                                      t = lt_0_0(t);
                                      t = term_d_18;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEEE"))
                              {
                                ATerm w_18 = t;
                                int z_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = s_15(n_13, m_13, t);
                                    ;
                                    LocalPopChoice(z_18);
                                  }
                                else
                                  {
                                    t = w_18;
                                    t = i_13;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm a_19 = t;
                                    int d_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = s_15(n_13, m_13, t);
                                        ;
                                        LocalPopChoice(d_19);
                                      }
                                    else
                                      {
                                        t = a_19;
                                        t = i_13;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = s_15(n_13, m_13, t);
                                  }
                              }
                          }
                      }
                  }
                }
              else
                {
                  t = m_17;
                  t = p_13;
                  {
                    ATerm e_19 = t;
                    int f_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm g_19 = ATgetArgument(t, 0);
                            w_13 = ATgetArgument(t, 1);
                            {
                              ATerm h_19 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(f_19);
                        t = n_13;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm i_19 = t;
                            int j_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = s_15(n_13, m_13, t);
                                ;
                                LocalPopChoice(j_19);
                              }
                            else
                              {
                                t = i_19;
                                t = i_13;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm k_19 = t;
                                int l_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = s_15(n_13, m_13, t);
                                    ;
                                    LocalPopChoice(l_19);
                                  }
                                else
                                  {
                                    t = k_19;
                                    t = i_13;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "MMMM"))
                                  {
                                    ATerm m_19 = t;
                                    int n_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = s_15(n_13, m_13, t);
                                        ;
                                        LocalPopChoice(n_19);
                                      }
                                    else
                                      {
                                        t = m_19;
                                        t = w_13;
                                        t = month2text_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    if(match_string(t, "MMM"))
                                      {
                                        ATerm o_19 = t;
                                        int r_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = s_15(n_13, m_13, t);
                                            ;
                                            LocalPopChoice(r_19);
                                          }
                                        else
                                          {
                                            t = o_19;
                                            t = w_13;
                                            t = month2abbr_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        t = s_15(n_13, m_13, t);
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = e_19;
                        t = n_13;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm s_19 = t;
                            int t_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = s_15(n_13, m_13, t);
                                ;
                                LocalPopChoice(t_19);
                              }
                            else
                              {
                                t = s_19;
                                t = i_13;
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
                                    t = s_15(n_13, m_13, t);
                                    ;
                                    LocalPopChoice(z_19);
                                  }
                                else
                                  {
                                    t = y_19;
                                    t = i_13;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = s_15(n_13, m_13, t);
                              }
                          }
                      }
                  }
                }
            }
          }
        else
          {
            t = j_17;
            t = f_14;
            {
              ATerm a_20 = t;
              int b_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      d_13 = ATgetArgument(t, 0);
                      {
                        ATerm c_20 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm d_20 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(b_20);
                  t = p_13;
                  {
                    ATerm e_20 = t;
                    int f_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm g_20 = ATgetArgument(t, 0);
                            w_13 = ATgetArgument(t, 1);
                            {
                              ATerm h_20 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(f_20);
                        t = n_13;
                        if(match_string(t, "a"))
                          {
                            ATerm i_20 = t;
                            int j_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = s_15(n_13, m_13, t);
                                ;
                                LocalPopChoice(j_20);
                              }
                            else
                              {
                                t = i_20;
                                {
                                  ATerm k_20 = t;
                                  int l_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_c_14, d_13);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, d_13, term_d_14);
                                      t = leq_0_0(t);
                                      t = term_c_18;
                                      ;
                                      LocalPopChoice(l_20);
                                    }
                                  else
                                    {
                                      t = k_20;
                                      t = (ATerm) ATmakeAppl(sym__2, term_l_12, d_13);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, d_13, term_c_14);
                                      t = lt_0_0(t);
                                      t = term_d_18;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "MMMM"))
                              {
                                ATerm m_20 = t;
                                int n_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = s_15(n_13, m_13, t);
                                    ;
                                    LocalPopChoice(n_20);
                                  }
                                else
                                  {
                                    t = m_20;
                                    t = w_13;
                                    t = month2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "MMM"))
                                  {
                                    ATerm o_20 = t;
                                    int p_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = s_15(n_13, m_13, t);
                                        ;
                                        LocalPopChoice(p_20);
                                      }
                                    else
                                      {
                                        t = o_20;
                                        t = w_13;
                                        t = month2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = s_15(n_13, m_13, t);
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = e_20;
                        t = n_13;
                        if(match_string(t, "a"))
                          {
                            ATerm q_20 = t;
                            int r_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = s_15(n_13, m_13, t);
                                ;
                                LocalPopChoice(r_20);
                              }
                            else
                              {
                                t = q_20;
                                {
                                  ATerm s_20 = t;
                                  int t_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_c_14, d_13);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, d_13, term_d_14);
                                      t = leq_0_0(t);
                                      t = term_c_18;
                                      ;
                                      LocalPopChoice(t_20);
                                    }
                                  else
                                    {
                                      t = s_20;
                                      t = (ATerm) ATmakeAppl(sym__2, term_l_12, d_13);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, d_13, term_c_14);
                                      t = lt_0_0(t);
                                      t = term_d_18;
                                    }
                                }
                              }
                          }
                        else
                          {
                            t = s_15(n_13, m_13, t);
                          }
                      }
                  }
                }
              else
                {
                  t = a_20;
                  t = p_13;
                  {
                    ATerm u_20 = t;
                    int v_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm w_20 = ATgetArgument(t, 0);
                            w_13 = ATgetArgument(t, 1);
                            {
                              ATerm x_20 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(v_20);
                        t = n_13;
                        if(match_string(t, "MMMM"))
                          {
                            ATerm y_20 = t;
                            int z_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = s_15(n_13, m_13, t);
                                ;
                                LocalPopChoice(z_20);
                              }
                            else
                              {
                                t = y_20;
                                t = w_13;
                                t = month2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "MMM"))
                              {
                                ATerm a_21 = t;
                                int b_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = s_15(n_13, m_13, t);
                                    ;
                                    LocalPopChoice(b_21);
                                  }
                                else
                                  {
                                    t = a_21;
                                    t = w_13;
                                    t = month2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = s_15(n_13, m_13, t);
                              }
                          }
                      }
                    else
                      {
                        t = u_20;
                        t = n_13;
                        t = s_15(n_13, m_13, t);
                      }
                  }
                }
            }
          }
      }
    }
  else
    {
      t = n_13;
      t = s_15(n_13, m_13, t);
    }
  return(t);
}
ATerm r_8 (ATerm q_47, ATerm p_47, ATerm t)
{
  ATerm t_15 = NULL;
  t = q_47;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm u_15 = NULL;
      u_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_15, p_47);
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = date_pattern_to_string_0_0(t);
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            {
              ATerm v_15 = NULL,w_15 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, u_15, p_47);
              w_15 = t;
              t = SSL_explode_term(w_15);
              if(match_cons(t, sym__2))
                {
                  ATerm i_21 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_21) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm j_21 = ATgetArgument(t, 1);
                    if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
                      {
                        v_15 = ATgetFirst((ATermList) j_21);
                        {
                          ATerm l_21 = (ATerm) ATgetNext((ATermList) j_21);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = v_15;
            }
          }
      }
      return(t);
    }
    t = map_1_0(w_0, t);
    t_15 = t;
    t = SSL_concat_strings(t_15);
  }
  return(t);
}
ATerm index2day_of_week_0_0 (ATerm t)
{
  if(match_int(t, 6))
    {
      t = term_n_21;
    }
  else
    {
      if(match_int(t, 5))
        {
          t = term_o_21;
        }
      else
        {
          if(match_int(t, 4))
            {
              t = term_p_21;
            }
          else
            {
              if(match_int(t, 3))
                {
                  t = term_q_21;
                }
              else
                {
                  if(match_int(t, 2))
                    {
                      t = term_r_21;
                    }
                  else
                    {
                      if(match_int(t, 1))
                        {
                          t = term_t_21;
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                            _fail(t);
                          t = term_u_21;
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
      t = term_v_21;
    }
  else
    {
      if(match_int(t, 10))
        {
          t = term_w_21;
        }
      else
        {
          if(match_int(t, 9))
            {
              t = term_x_21;
            }
          else
            {
              if(match_int(t, 8))
                {
                  t = term_y_21;
                }
              else
                {
                  if(match_int(t, 7))
                    {
                      t = term_z_21;
                    }
                  else
                    {
                      if(match_int(t, 6))
                        {
                          t = term_a_22;
                        }
                      else
                        {
                          if(match_int(t, 5))
                            {
                              t = term_b_22;
                            }
                          else
                            {
                              if(match_int(t, 4))
                                {
                                  t = term_c_22;
                                }
                              else
                                {
                                  if(match_int(t, 3))
                                    {
                                      t = term_d_22;
                                    }
                                  else
                                    {
                                      if(match_int(t, 2))
                                        {
                                          t = term_e_22;
                                        }
                                      else
                                        {
                                          if(match_int(t, 1))
                                            {
                                              t = term_g_22;
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                                                _fail(t);
                                              t = term_h_22;
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
ATerm s_8 (ATerm q_44, ATerm p_44, ATerm o_44, ATerm n_44, ATerm m_44, ATerm l_44, ATerm r_44, ATerm s_44, ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL;
  t = m_44;
  t = index2month_0_0(t);
  b_16 = t;
  t = r_44;
  t = index2day_of_week_0_0(t);
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym_ComponentTime_3, (ATerm)ATmakeAppl(sym_Date_3, l_44, b_16, n_44), (ATerm)ATmakeAppl(sym_DayTime_3, o_44, p_44, q_44), (ATerm) ATmakeAppl(sym_Dupl_2, c_16, s_44));
  return(t);
}
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  if(match_cons(t, sym__8))
    {
      f_16 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
      h_16 = ATgetArgument(t, 2);
      i_16 = ATgetArgument(t, 3);
      j_16 = ATgetArgument(t, 4);
      k_16 = ATgetArgument(t, 5);
      l_16 = ATgetArgument(t, 6);
      m_16 = ATgetArgument(t, 7);
    }
  else
    _fail(t);
  t = s_8(f_16, g_16, h_16, i_16, j_16, k_16, l_16, m_16, t);
  return(t);
}
ATerm t_8 (ATerm i_44, ATerm t)
{
  t = SSL_epoch2localtime(i_44);
  t = prim_tuple_to_ComponentTime_0_0(t);
  return(t);
}
ATerm now_epoch_time_0_0 (ATerm t)
{
  ATerm n_16 = NULL;
  t = SSL_now_epoch_time();
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym_EpochTime_1, n_16);
  return(t);
}
ATerm now_local_time_0_0 (ATerm t)
{
  ATerm o_16 = NULL;
  t = now_epoch_time_0_0(t);
  if(match_cons(t, sym_EpochTime_1))
    {
      o_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_8(o_16, t);
  return(t);
}
ATerm create_time_0_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL;
  t = term_i_7;
  t = now_local_time_0_0(t);
  p_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_23), term_u_22), term_y_22), term_u_22), term_p_22), term_j_22), term_o_22), term_j_22), term_n_22), term_j_22), term_k_22), term_j_22), term_i_22);
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_23), term_u_22), term_y_22), term_u_22), term_p_22), term_j_22), term_o_22), term_j_22), term_n_22), term_j_22), term_k_22), term_j_22), term_i_22), p_16);
  t = r_8(q_16, p_16, t);
  return(t);
}
ATerm get_title_0_0 (ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
        t = term_h_23;
        s_16 = t;
        t = (ATerm) ATinsert(ATempty, term_i_23);
        t_16 = t;
        t = SSL_printnl(s_16, t_16);
        t = term_g_12;
        r_16 = t;
        t = SSL_exit(r_16);
        t = (ATerm) ATinsert(ATempty, term_i_23);
      }
    }
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL;
  t = get_title_0_0(t);
  v_16 = t;
  t = term_i_7;
  t = create_time_0_0(t);
  u_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_24), term_b_24), term_a_24), term_y_23), v_16), term_w_23), term_v_23), term_u_23), term_t_23), term_s_23), term_r_23), term_q_23), u_16), term_o_23), term_m_23);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_9;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      t = term_f_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_16 = NULL;
        t = term_r_9;
        t = get_config_0_0(t);
        w_16 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, w_16);
        ;
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        t = term_w_8;
      }
    t = u_87(t);
    t = copy_to_1_0(a_1, t);
    return(t);
  }
  t = xtc_temp_files_1_0(x_0, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm a_17 = NULL,c_17 = NULL,y_2 = NULL,z_2 = NULL,e_2 = NULL,j_2 = NULL;
  c_17 = t;
  t = create_header_0_0(t);
  e_2 = t;
  t = xtc_new_file_0_0(t);
  j_2 = t;
  t = SSL_print(j_2, e_2);
  t = SSL_close_file(j_2);
  t = c_17;
  {
    ATerm l_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_17 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_17 = ATgetArgument(t, 0);
            {
              ATerm u_2 = NULL,b_0 = NULL;
              t = SSLgetAnnotations(c_17);
              u_2 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_17);
              b_0 = t;
              t = SSLsetAnnotations(b_0, u_2);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_17;
          }
        LocalPopChoice(o_24);
        t = xtc_transform_file_2_0(c_1, pass_verbose_0_0, t);
      }
    else
      {
        t = l_24;
        t = xtc_transform_term_2_0(e_1, pass_verbose_0_0, t);
      }
    a_17 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, term_q_24), term_p_24);
    y_2 = t;
    t = xtc_new_file_0_0(t);
    z_2 = t;
    t = SSL_print(z_2, y_2);
    t = SSL_close_file(z_2);
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FILE_1, z_2)), a_17), (ATerm) ATmakeAppl(sym_FILE_1, j_2));
    t = xtc_cat_0_0(t);
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  t = xtc_io_1_0(b_1, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm s_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(w_24);
    }
  else
    {
      t = s_24;
    }
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_x_24;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_17 = NULL;
      q_17 = t;
      t = SSL_is_string(q_17);
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_1, t);
            ;
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            {
              ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
              w_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_17 = ATgetArgument(t, 0);
                  t = x_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_17 = ATgetArgument(t, 0);
                      t = x_17;
                      {
                        ATerm j_25 = t;
                        int k_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_25);
                          }
                        else
                          {
                            t = j_25;
                            t = debug_1_0(h_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_18 = NULL,i_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_17 = ATgetArgument(t, 0);
                          y_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_17;
                      t = eval_config_0_0(t);
                      g_18 = t;
                      t = y_17;
                      t = eval_config_0_0(t);
                      i_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_18, i_18);
                      t = l_9(g_18, i_18, t);
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
  ATerm o_18 = NULL,p_18 = NULL;
  o_18 = t;
  t = term_l_25;
  p_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_25, o_18);
  t = m_9(p_18, o_18, t);
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_18 = NULL,r_18 = NULL;
        t = eval_config_0_0(t);
        q_18 = t;
        t = term_l_25;
        r_18 = t;
        t = SSL_table_put(r_18, o_18, q_18);
        t = q_18;
        ;
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
      }
  }
  return(t);
}
ATerm g_9 (ATerm k_31, ATerm l_31, ATerm t)
{
  t = SSL_copy(k_31, l_31);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL;
  p_19 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 = NULL;
        t = p_19;
        t = n_0(t);
        y_3 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = y_3;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = y_3;
          }
        t = (ATerm) ATmakeAppl(sym__2, q_19, y_3);
        t = g_9(q_19, y_3, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_19);
        ;
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        {
          ATerm v_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_4 = NULL;
              t = p_19;
              t = n_0(t);
              k_4 = t;
              {
                ATerm x_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm l_4 = NULL;
                    l_4 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = l_4;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = l_4;
                          }
                        else
                          {
                            t = l_4;
                            if((q_19 != t))
                              {
                                _fail(t);
                              }
                            t = l_4;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_25;
                  }
                t = (ATerm) ATmakeAppl(sym__2, q_19, k_4);
                t = g_9(q_19, k_4, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, q_19);
              }
              ;
              LocalPopChoice(w_25);
            }
          else
            {
              t = v_25;
              t = p_19;
              t = n_0(t);
              if((q_19 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_19);
            }
        }
      }
  }
  return(t);
}
ATerm u_8 (ATerm r_22, ATerm s_22, ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(r_22, s_22);
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
      t = SSL_subtr(r_22, s_22);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  t = term_d_26;
  {
    ATerm e_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = e_26;
        t = term_g_12;
      }
    v_19 = t;
    t = term_g_12;
    x_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_19, term_g_12);
    t = u_8(v_19, x_19, t);
    w_19 = t;
    t = SSL_int_to_string(w_19);
    u_19 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, u_19), term_d_26);
  }
  return(t);
}
ATerm v_8 (ATerm k_34, ATerm l_34, ATerm t)
{
  t = SSL_execvp(k_34, l_34);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
  c_21 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      d_21 = ATgetArgument(t, 0);
      {
        ATerm t_4 = NULL,u_4 = NULL;
        t = SSL_int_to_string(d_21);
        t_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_26), t_4), term_n_26);
        u_4 = t;
        t = SSL_concat_strings(u_4);
      }
    }
  else
    {
      ATerm s_5 = NULL,t_5 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          d_21 = ATgetArgument(t, 0);
          e_21 = ATgetArgument(t, 1);
          f_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(e_21);
      s_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_21), term_q_26), s_5), term_p_26), d_21);
      t_5 = t;
      t = SSL_concat_strings(t_5);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm b_65 (ATerm), ATerm t)
{
  ATerm k_21 = NULL;
  ATerm j_1 (ATerm t)
  {
    t = b_65(t);
    if(((k_21 != NULL) && (k_21 != t)))
      _fail(t);
    else
      k_21 = t;
    return(t);
  }
  t = fetch_1_0(j_1, t);
  t = not_null(k_21);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm m_21 = NULL;
  m_21 = t;
  {
    ATerm r_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm v_26 = ATgetArgument(t, 0);
              if((m_21 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm c_27 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_34), term_c_34), term_s_33), term_m_33), term_g_33), term_w_32), term_s_32), term_n_32), term_j_32), term_g_32), term_a_32), term_s_31), term_o_31), term_d_31), term_x_30), term_u_30), term_q_30), term_n_30), term_g_30), term_v_29), term_r_29), term_l_29), term_x_28), term_m_28), term_f_28), term_s_27), term_j_27), term_f_27);
        t = fetch_elem_1_0(l_1, t);
        ;
        LocalPopChoice(u_26);
      }
    else
      {
        t = r_26;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, m_21);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm s_21 = NULL,f_22 = NULL;
  s_21 = t;
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_34 = ATgetArgument(t, 0);
            f_22 = ATgetArgument(t, 1);
            {
              ATerm m_34 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(i_34);
        {
          ATerm n_34 = t;
          int o_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_5 = NULL,b_6 = NULL,c_6 = NULL;
              t = f_22;
              {
                ATerm p_34 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_34;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                z_5 = t;
                t = term_h_23;
                b_6 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, z_5), term_q_34);
                c_6 = t;
                t = SSL_printnl(b_6, c_6);
                t = (ATerm) ATmakeAppl(sym__2, term_h_23, (ATerm) ATinsert(ATinsert(ATempty, z_5), term_q_34));
              }
              ;
              LocalPopChoice(o_34);
            }
          else
            {
              t = n_34;
              t = s_21;
            }
        }
      }
    else
      {
        t = h_34;
        t = s_21;
      }
    t = s_21;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm q_22 = NULL,t_22 = NULL;
  t_22 = t;
  t = fork_0_0(t);
  q_22 = t;
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = t_22;
        t = m_76(t);
        ;
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        t = SSL_waitpid(q_22);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm t_34 = ATgetArgument(t, 0);
            if(((ATgetType(t_34) != AT_INT) || (ATgetInt((ATermInt) t_34) != 0)))
              _fail(t);
            {
              ATerm u_34 = ATgetArgument(t, 1);
            }
            {
              ATerm v_34 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = t_22;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm v_22 = NULL;
  ATerm m_1 (ATerm t)
  {
    ATerm w_22 = NULL,x_22 = NULL;
    w_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_22), w_22);
    t = m_9(not_null(v_22), w_22, t);
    x_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_22, x_22);
    return(t);
  }
  if(((v_22 != NULL) && (v_22 != t)))
    _fail(t);
  else
    v_22 = t;
  t = SSL_table_keys(v_22);
  t = map_1_0(m_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm z_22 = NULL;
  z_22 = t;
  {
    ATerm w_34 = t;
    int x_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_23 = NULL;
        t = term_d_26;
        t = get_config_0_0(t);
        b_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_23, term_a_13);
        t = geq_0_0(t);
        t = z_22;
        t = v_86(t);
        ;
        LocalPopChoice(x_34);
      }
    else
      {
        t = w_34;
        t = z_22;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm e_23 = NULL;
  e_23 = t;
  {
    ATerm z_34 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_23 = NULL;
        t = term_d_26;
        t = get_config_0_0(t);
        g_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_23, term_b_13);
        t = geq_0_0(t);
        t = e_23;
        t = u_86(t);
        ;
        LocalPopChoice(d_35);
      }
    else
      {
        t = z_34;
        t = e_23;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_86 (ATerm), ATerm t)
{
  ATerm l_23 = NULL;
  l_23 = t;
  {
    ATerm e_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_23 = NULL;
        t = term_d_26;
        t = get_config_0_0(t);
        n_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_23, term_w_12);
        t = geq_0_0(t);
        t = l_23;
        t = w_86(t);
        ;
        LocalPopChoice(h_35);
      }
    else
      {
        t = e_35;
        t = l_23;
      }
  }
  return(t);
}
ATerm y_8 (ATerm w_68 (ATerm), ATerm x_68 (ATerm), ATerm c_19, ATerm b_19, ATerm t)
{
  t = x_68(t);
  {
    ATerm n_1 (ATerm t)
    {
      ATerm p_23 = NULL;
      p_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_19, p_23);
      t = w_68(t);
      return(t);
    }
    t = fetch_1_0(n_1, t);
    t = b_19;
  }
  return(t);
}
ATerm z_8 (ATerm t_68 (ATerm), ATerm y_18, ATerm x_18, ATerm t)
{
  ATerm y_24 (ATerm t)
  {
    ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
    t_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_18;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_24 = ATgetFirst((ATermList) t);
            v_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_24;
              {
                ATerm o_1 (ATerm t)
                {
                  t = x_18;
                  return(t);
                }
                t = y_8(t_68, o_1, u_24, v_24, t);
                t = y_24(t);
              }
              ;
              LocalPopChoice(k_35);
            }
          else
            {
              t = i_35;
              {
                ATerm h_6 = NULL,k_6 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(t_24);
                h_6 = t;
                t = v_24;
                t = y_24(t);
                k_6 = t;
                t = (ATerm) ATinsert(CheckATermList(k_6), u_24);
                z_0 = t;
                t = SSLsetAnnotations(z_0, h_6);
              }
            }
        }
      }
    return(t);
  }
  t = y_18;
  t = y_24(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm m_25 = NULL;
  if(match_cons(t, sym__2))
    {
      m_25 = ATgetArgument(t, 0);
      if((m_25 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm a_9 (ATerm e_25, ATerm f_25, ATerm g_25, ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
  b_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_25, f_25);
  {
    ATerm m_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_35 = ATgetArgument(t, 0);
            ATerm u_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_25, f_25);
        t = m_9(e_25, f_25, t);
        ;
        LocalPopChoice(p_35);
      }
    else
      {
        t = m_35;
        t = (ATerm) ATempty;
      }
    d_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_25, g_25);
    t = z_8(t_1, d_25, g_25, t);
    c_25 = t;
    t = SSL_table_put(e_25, f_25, c_25);
    t = b_25;
  }
  return(t);
}
ATerm b_9 (ATerm w_72 (ATerm), ATerm o_25, ATerm n_25, ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm r_25 = NULL,s_25 = NULL;
    if(match_cons(t, sym__2))
      {
        r_25 = ATgetArgument(t, 0);
        s_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, o_25, r_25, s_25);
    t = w_72(t);
    return(t);
  }
  t = n_25;
  t = map_1_0(u_1, t);
  return(t);
}
ATerm i_26 (ATerm c_26, ATerm t)
{
  t = SSL_fclose(c_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL;
  g_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_26 = ATgetArgument(t, 0);
      {
        ATerm v_35 = t;
        int g_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_26);
            ;
            LocalPopChoice(g_36);
          }
        else
          {
            t = v_35;
            t = i_26(g_26, t);
          }
      }
    }
  else
    {
      t = i_26(g_26, t);
    }
  return(t);
}
ATerm c_9 (ATerm l_35, ATerm t)
{
  t = SSL_read_term_from_stream(l_35);
  return(t);
}
ATerm d_9 (ATerm a_12, ATerm b_12, ATerm t)
{
  ATerm j_26 = NULL;
  t = SSL_fopen(a_12, b_12);
  j_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_26);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_26 = NULL;
  t = SSL_stdin_stream();
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_26);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_26 = NULL;
  t = SSL_stdout_stream();
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_26);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_26 = NULL;
  t = SSL_stderr_stream();
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_26);
  return(t);
}
ATerm z_27 (ATerm s_26, ATerm t)
{
  ATerm t_26 = NULL;
  t = SSL_explode_term(s_26);
  if(match_cons(t, sym__2))
    {
      ATerm i_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_36 = ATgetArgument(t, 1);
        if(((ATgetType(k_36) == AT_LIST) && !(ATisEmpty(k_36))))
          {
            t_26 = ATgetFirst((ATermList) k_36);
            {
              ATerm l_36 = (ATerm) ATgetNext((ATermList) k_36);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_26;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_26;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_26;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_26;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm a_28 (ATerm w_26, ATerm x_26, ATerm y_26, ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,g_27 = NULL,p_1 = NULL;
  t = SSLgetAnnotations(y_26);
  b_27 = t;
  t = w_26;
  if(match_cons(t, sym_Path_1))
    {
      g_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_27, x_26);
  p_1 = t;
  t = SSLsetAnnotations(p_1, b_27);
  if(match_cons(t, sym__2))
    {
      z_26 = ATgetArgument(t, 0);
      a_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_9(z_26, a_27, t);
  return(t);
}
ATerm b_28 (ATerm k_27, ATerm l_27, ATerm m_27, ATerm t)
{
  ATerm n_27 = NULL,q_27 = NULL,r_27 = NULL,u_27 = NULL,q_1 = NULL;
  t = SSLgetAnnotations(m_27);
  r_27 = t;
  t = SSL_is_string(k_27);
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_27, l_27);
  q_1 = t;
  t = SSLsetAnnotations(q_1, r_27);
  if(match_cons(t, sym__2))
    {
      n_27 = ATgetArgument(t, 0);
      q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_9(n_27, q_27, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_36 = ATgetArgument(t, 0);
      ATerm n_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  w_27 = t;
  if(match_cons(t, sym__2))
    {
      x_27 = ATgetArgument(t, 0);
      y_27 = ATgetArgument(t, 1);
      {
        ATerm o_36 = t;
        int p_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_27(w_27, t);
            ;
            LocalPopChoice(p_36);
          }
        else
          {
            t = o_36;
            {
              ATerm q_36 = t;
              int r_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_28(x_27, y_27, w_27, t);
                  ;
                  LocalPopChoice(r_36);
                }
              else
                {
                  t = q_36;
                  t = b_28(x_27, y_27, w_27, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_27(w_27, t);
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_t_36;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
  ATerm u_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_28 = NULL;
      g_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_28, term_w_36);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_36);
    }
  else
    {
      t = u_36;
      t = debug_1_0(x_1, t);
      _fail(t);
    }
  d_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_9(e_28, t);
  c_28 = t;
  t = d_28;
  t = fclose_0_0(t);
  t = c_28;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_z_36;
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_b_37;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm c_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_28 = NULL,j_28 = NULL;
      i_28 = t;
      t = (ATerm) ATinsert(ATempty, term_e_37);
      j_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_28, (ATerm) ATinsert(ATempty, term_e_37));
      t = f_9(i_28, j_28, t);
      LocalPopChoice(d_37);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = c_37;
      {
        ATerm f_37 = t;
        int h_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_37 = t;
            if((PushChoice() == 0))
              {
                ATerm k_28 = NULL,n_28 = NULL;
                k_28 = t;
                t = (ATerm) ATinsert(ATempty, term_x_8);
                n_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_28, (ATerm) ATinsert(ATempty, term_x_8));
                t = f_9(k_28, n_28, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_37;
              }
            t = debug_1_0(y_1, t);
            ;
            LocalPopChoice(h_37);
          }
        else
          {
            t = f_37;
            t = debug_1_0(b_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_l_37;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_o_37;
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm q_29 = NULL,x_29 = NULL,z_29 = NULL;
  q_29 = t;
  t = term_h_23;
  x_29 = t;
  t = (ATerm) ATinsert(ATempty, term_p_37);
  z_29 = t;
  t = SSL_printnl(x_29, z_29);
  t = q_29;
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  if(match_cons(t, sym__3))
    {
      a_30 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
      c_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_9(a_30, b_30, c_30, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,h_30 = NULL;
  d_30 = t;
  t = term_h_23;
  e_30 = t;
  t = (ATerm) ATinsert(ATempty, term_q_37);
  h_30 = t;
  t = SSL_printnl(e_30, h_30);
  t = d_30;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,l_30 = NULL;
  i_30 = t;
  t = term_h_23;
  j_30 = t;
  t = (ATerm) ATinsert(ATempty, term_p_37);
  l_30 = t;
  t = SSL_printnl(j_30, l_30);
  t = i_30;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,u_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,k_29 = NULL;
  o_28 = t;
  t = if_verbose5_1_0(h_2, t);
  {
    ATerm r_37 = t;
    if((PushChoice() == 0))
      {
        ATerm m_29 = NULL,o_29 = NULL;
        t = term_t_37;
        m_29 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, o_28);
        o_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_37, (ATerm) ATmakeAppl(sym_Imported_1, o_28));
        t = m_9(m_29, o_29, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_37;
      }
    u_28 = t;
    t = term_t_37;
    f_29 = t;
    t = term_v_37;
    g_29 = t;
    t = (ATerm) ATinsert(ATempty, o_28);
    k_29 = t;
    t = SSL_table_put(f_29, g_29, k_29);
    t = u_28;
    t = if_verbose4_1_0(m_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(w_2, t);
    p_28 = t;
    t = term_t_37;
    e_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_37, p_28);
    t = b_9(x_2, e_29, p_28, t);
    t = if_verbose6_1_0(a_3, t);
    t = term_t_37;
    y_28 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, o_28);
    z_28 = t;
    t = (ATerm) ATempty;
    a_29 = t;
    t = SSL_table_put(y_28, z_28, a_29);
    t = (ATerm) ATmakeAppl(sym__3, term_t_37, (ATerm)ATmakeAppl(sym_Imported_1, o_28), (ATerm) ATempty);
    t = if_verbose4_1_0(b_3, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm x_72 (ATerm), ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  f_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_31;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_31 = ATgetFirst((ATermList) t);
          h_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm w_37 = t;
        int x_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_6 = NULL,b_7 = NULL,c_7 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(f_31);
            y_6 = t;
            t = g_31;
            t = x_72(t);
            b_7 = t;
            t = h_31;
            t = filter_1_0(x_72, t);
            c_7 = t;
            t = (ATerm) ATinsert(CheckATermList(c_7), b_7);
            i_2 = t;
            t = SSLsetAnnotations(i_2, y_6);
            ;
            LocalPopChoice(x_37);
          }
        else
          {
            t = w_37;
            t = h_31;
            t = filter_1_0(x_72, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm w_74 (ATerm), ATerm t)
{
  ATerm v_31 (ATerm t)
  {
    ATerm z_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_74(t);
        t = v_31(t);
        ;
        LocalPopChoice(a_38);
      }
    else
      {
        t = z_37;
      }
    return(t);
  }
  t = v_31(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm b_38 = t;
  int c_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_38;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_38);
    }
  else
    {
      t = b_38;
      {
        ATerm f_38 = t;
        int g_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_31 = NULL;
            t = term_h_38;
            w_31 = t;
            t = SSL_getenv(w_31);
            ;
            LocalPopChoice(g_38);
          }
        else
          {
            t = f_38;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = debug_1_0(e_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_i_38;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm d_32 = NULL,m_32 = NULL;
  t = term_t_37;
  d_32 = t;
  t = term_m_38;
  m_32 = t;
  t = term_p_38;
  t = m_9(d_32, m_32, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm q_38 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_38;
      }
  }
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = debug_1_0(j_3, t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_u_38;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm x_31 = NULL;
  t = if_verbose5_1_0(c_3, t);
  x_31 = t;
  {
    ATerm v_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_31 = NULL,b_32 = NULL;
        t = term_t_37;
        y_31 = t;
        t = term_v_37;
        b_32 = t;
        t = term_x_38;
        t = m_9(y_31, b_32, t);
        ;
        LocalPopChoice(w_38);
      }
    else
      {
        t = v_38;
        {
          ATerm c_32 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          c_32 = t;
          t = repeat_1_0(f_3, t);
          t = c_32;
        }
      }
    t = x_31;
    t = if_verbose5_1_0(h_3, t);
  }
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_d_39;
  return(t);
}
ATerm r_33 (ATerm r_32, ATerm t)
{
  ATerm x_32 = NULL,a_33 = NULL,b_33 = NULL;
  t = term_t_37;
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, r_32);
  b_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_37, (ATerm) ATmakeAppl(sym_Tool_1, r_32));
  t = m_9(a_33, b_33, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_39 = ATgetFirst((ATermList) t);
      if(match_cons(e_39, sym__2))
        {
          ATerm l_39 = ATgetArgument(e_39, 0);
          x_32 = ATgetArgument(e_39, 1);
        }
      else
        _fail(t);
      {
        ATerm f_39 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_32;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = debug_1_0(s_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_d_39;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_t_37;
  t = table_getlist_0_0(t);
  t = debug_1_0(u_3, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm n_39 = t;
  int o_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
      t = if_verbose5_1_0(n_3, t);
      t = xtc_load_0_0(t);
      e_33 = t;
      if(match_cons(t, sym__2))
        {
          c_33 = ATgetArgument(t, 0);
          d_33 = ATgetArgument(t, 1);
          {
            ATerm p_39 = t;
            int q_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
                t = term_t_37;
                k_33 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, c_33);
                l_33 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_t_37, (ATerm) ATmakeAppl(sym_Tool_1, c_33));
                t = m_9(k_33, l_33, t);
                {
                  ATerm q_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((d_33 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((j_33 != NULL) && (j_33 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_33 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(q_3, t);
                  t = not_null(j_33);
                }
                ;
                LocalPopChoice(q_39);
              }
            else
              {
                t = p_39;
                t = r_33(e_33, t);
              }
          }
        }
      else
        {
          t = r_33(e_33, t);
        }
      t = if_verbose5_1_0(r_3, t);
      ;
      LocalPopChoice(o_39);
    }
  else
    {
      t = n_39;
      {
        ATerm q_33 = NULL,j_7 = NULL,k_7 = NULL;
        q_33 = t;
        t = term_h_23;
        j_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_39), q_33), term_r_39);
        k_7 = t;
        t = SSL_printnl(j_7, k_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_39), q_33), term_r_39);
        t = if_verbose5_1_0(t_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm t_33 = NULL,v_33 = NULL;
  v_33 = t;
  t = h_88(t);
  t = xtc_find_0_0(t);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_33, v_33);
  {
    ATerm v_3 (ATerm t)
    {
      ATerm w_33 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, t_33, v_33);
      t = v_8(t_33, v_33, t);
      t = term_u_39;
      w_33 = t;
      t = SSL_exit(w_33);
      return(t);
    }
    t = fork_and_wait_1_0(v_3, t);
    t = v_33;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm f_65 (ATerm), ATerm t)
{
  ATerm c_35 (ATerm t)
  {
    ATerm y_34 = NULL,a_35 = NULL,b_35 = NULL;
    b_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_34 = ATgetFirst((ATermList) t);
        a_35 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_7 = NULL,d_8 = NULL,d_3 = NULL;
          t = SSLgetAnnotations(b_35);
          x_7 = t;
          t = a_35;
          t = c_35(t);
          d_8 = t;
          t = (ATerm) ATinsert(CheckATermList(d_8), y_34);
          d_3 = t;
          t = SSLsetAnnotations(d_3, x_7);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_35;
        t = f_65(t);
      }
    return(t);
  }
  t = c_35(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL;
  y_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_33;
    }
  else
    {
      ATerm w_3 (ATerm t)
      {
        t = not_null(a_34);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_33 = ATgetFirst((ATermList) t);
          if(((a_34 != NULL) && (a_34 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_33;
      t = at_end_1_0(w_3, t);
    }
  return(t);
}
ATerm w_35 (ATerm j_35, ATerm t)
{
  ATerm o_35 = NULL;
  t = SSL_explode_term(j_35);
  if(match_cons(t, sym__2))
    {
      ATerm v_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_39) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_35;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
  t_35 = t;
  if(match_cons(t, sym__2))
    {
      r_35 = ATgetArgument(t, 0);
      s_35 = ATgetArgument(t, 1);
      {
        ATerm a_40 = t;
        int b_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_3 (ATerm t)
            {
              t = s_35;
              return(t);
            }
            t = r_35;
            t = at_end_1_0(x_3, t);
            ;
            LocalPopChoice(b_40);
          }
        else
          {
            t = a_40;
            t = w_35(t_35, t);
          }
      }
    }
  else
    {
      t = w_35(t_35, t);
    }
  return(t);
}
ATerm e_9 (ATerm t_72 (ATerm), ATerm z_23, ATerm x_23, ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  t = t_72(t);
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_35, z_23, x_23);
  t = n_9(x_35, z_23, x_23, t);
  {
    ATerm d_40 = t;
    int e_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_36 = NULL;
        t = term_h_40;
        d_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_35, term_h_40);
        t = m_9(x_35, d_36, t);
        ;
        LocalPopChoice(e_40);
      }
    else
      {
        t = d_40;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_35 = ATgetFirst((ATermList) t);
        z_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_h_40;
    b_36 = t;
    t = (ATerm) ATinsert(CheckATermList(z_35), (ATerm) ATinsert(CheckATermList(y_35), z_23));
    c_36 = t;
    t = SSL_table_put(x_35, b_36, c_36);
    t = a_36;
  }
  return(t);
}
ATerm debug_1_0 (ATerm f_77 (ATerm), ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,h_36 = NULL,j_36 = NULL;
  e_36 = t;
  t = f_77(t);
  f_36 = t;
  t = term_h_23;
  h_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_36), f_36);
  j_36 = t;
  t = SSL_printnl(h_36, j_36);
  t = e_36;
  return(t);
}
ATerm m_37 (ATerm s_36, ATerm t)
{
  t = s_36;
  {
    ATerm i_40 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_40 = ATgetArgument(t, 0);
            ATerm n_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_40;
      }
    t = term_o_40;
    t = debug_1_0(z_3, t);
    t = (ATerm) ATmakeAppl(sym__2, s_36, term_j_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm n_37 (ATerm x_36, ATerm y_36, ATerm a_37, ATerm t)
{
  t = SSL_open_file(x_36, y_36);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_w_40;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm g_37 = NULL,i_37 = NULL,j_37 = NULL;
  g_37 = t;
  if(match_cons(t, sym__2))
    {
      i_37 = ATgetArgument(t, 0);
      j_37 = ATgetArgument(t, 1);
      {
        ATerm x_40 = t;
        int y_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_37(g_37, t);
            ;
            LocalPopChoice(y_40);
          }
        else
          {
            t = x_40;
            t = n_37(i_37, j_37, g_37, t);
          }
      }
    }
  else
    {
      t = m_37(g_37, t);
    }
  return(t);
}
ATerm f_9 (ATerm s_11, ATerm t_11, ATerm t)
{
  t = SSL_access(s_11, t_11);
  return(t);
}
ATerm l_9 (ATerm a_31, ATerm b_31, ATerm t)
{
  t = SSL_strcat(a_31, b_31);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm s_37 = NULL,u_37 = NULL,y_37 = NULL;
  t = term_i_7;
  t = new_0_0(t);
  s_37 = t;
  t = term_z_40;
  u_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_37, term_z_40);
  t = l_9(s_37, u_37, t);
  y_37 = t;
  {
    ATerm b_41 = t;
    int g_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_38 = NULL;
        t = (ATerm) ATinsert(ATempty, term_x_8);
        e_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_37, (ATerm) ATinsert(ATempty, term_x_8));
        t = f_9(y_37, e_38, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(g_41);
      }
    else
      {
        t = b_41;
        t = y_37;
      }
  }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_n_8;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL;
  t = new_file_0_0(t);
  j_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_38, term_j_9);
  t = open_file_0_0(t);
  t = term_i_7;
  k_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_38, term_i_7);
  t = e_9(a_4, j_38, k_38, t);
  t = j_38;
  return(t);
}
ATerm xtc_generate_2_0 (ATerm v_88 (ATerm), ATerm w_88 (ATerm), ATerm t)
{
  ATerm l_38 = NULL,n_38 = NULL;
  t = term_i_7;
  t = xtc_new_file_0_0(t);
  l_38 = t;
  t = w_88(t);
  n_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_38, (ATerm) ATinsert(ATinsert(ATempty, l_38), term_o_9));
  t = conc_0_0(t);
  t = xtc_command_1_0(v_88, t);
  t = SSL_close_file(l_38);
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_38);
  return(t);
}
ATerm h_9 (ATerm m_24, ATerm n_24, ATerm t)
{
  ATerm o_38 = NULL,r_38 = NULL;
  r_38 = t;
  {
    ATerm h_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_24, n_24);
        t = m_9(m_24, n_24, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_41 = ATgetFirst((ATermList) t);
            o_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_41);
        t = SSL_table_put(m_24, n_24, o_38);
        t = (ATerm) ATmakeAppl(sym__3, m_24, n_24, o_38);
      }
    else
      {
        t = h_41;
        t = SSL_table_remove(m_24, n_24);
        t = (ATerm) ATmakeAppl(sym__2, m_24, n_24);
      }
    t = r_38;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm q_72 (ATerm), ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL;
  z_38 = t;
  t = q_72(t);
  y_38 = t;
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_39 = NULL;
        t = term_h_40;
        b_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_38, term_h_40);
        t = m_9(y_38, b_39, t);
        ;
        LocalPopChoice(t_41);
      }
    else
      {
        t = s_41;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_38 = ATgetFirst((ATermList) t);
        s_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_h_40;
    a_39 = t;
    t = SSL_table_put(y_38, a_39, s_38);
    t = t_38;
    {
      ATerm b_4 (ATerm t)
      {
        ATerm c_39 = NULL;
        c_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_38, c_39);
        t = h_9(y_38, c_39, t);
        return(t);
      }
      t = map_1_0(b_4, t);
      t = z_38;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_63 (ATerm), ATerm n_63 (ATerm), ATerm t)
{
  ATerm v_41 = t;
  int a_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_63(t);
      t = n_63(t);
      ;
      LocalPopChoice(a_42);
    }
  else
    {
      t = v_41;
      t = n_63(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_72 (ATerm), ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
  h_39 = t;
  t = p_72(t);
  g_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_39, term_h_40);
  {
    ATerm b_42 = t;
    int e_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_39 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_42 = ATgetArgument(t, 0);
            ATerm g_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_40;
        s_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_39, term_h_40);
        t = m_9(g_39, s_39, t);
        ;
        LocalPopChoice(e_42);
      }
    else
      {
        t = b_42;
        t = (ATerm) ATempty;
      }
    i_39 = t;
    t = term_h_40;
    j_39 = t;
    t = (ATerm) ATinsert(CheckATermList(i_39), (ATerm) ATempty);
    k_39 = t;
    t = SSL_table_put(g_39, j_39, k_39);
    t = h_39;
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_n_8;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm c_40 = NULL;
  c_40 = t;
  {
    ATerm h_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(c_40);
        ;
        LocalPopChoice(i_42);
      }
    else
      {
        t = h_42;
        t = c_40;
      }
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_n_8;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  ATerm w_39 = NULL;
  ATerm d_4 (ATerm t)
  {
    ATerm x_39 = NULL;
    x_39 = t;
    {
      ATerm j_42 = t;
      int k_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_39 = NULL,z_39 = NULL;
          t = term_n_8;
          y_39 = t;
          t = term_h_40;
          z_39 = t;
          t = term_l_42;
          t = m_9(y_39, z_39, t);
          ;
          LocalPopChoice(k_42);
        }
      else
        {
          t = j_42;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_39 != NULL) && (w_39 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_39 = ATgetFirst((ATermList) t);
          {
            ATerm n_42 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = w_39;
      t = map_1_0(e_4, t);
      t = x_39;
      t = end_scope_1_0(f_4, t);
    }
    return(t);
  }
  t = begin_scope_1_0(c_4, t);
  t = restore_always_2_0(t_87, d_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
  f_40 = t;
  t = term_i_7;
  t = whoami_0_0(t);
  g_40 = t;
  t = term_h_23;
  k_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_42), g_40), term_o_42);
  l_40 = t;
  t = SSL_printnl(k_40, l_40);
  t = term_g_12;
  j_40 = t;
  t = SSL_exit(j_40);
  t = f_40;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
      t = term_i_7;
      t = m_0(t);
      t_40 = t;
      t = term_q_42;
      u_40 = t;
      t = term_u_42;
      v_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_42, term_u_42, t_40);
      t = n_9(u_40, v_40, t_40, t);
      _fail(t);
    }
  else
    {
      ATerm a_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_40 = ATgetFirst((ATermList) t);
          q_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_40;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_40 = ATgetFirst((ATermList) t);
          s_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_40;
      t = k_0(t);
      t = r_40;
      t = l_0(t);
      a_41 = t;
      t = (ATerm) ATinsert(CheckATermList(s_40), a_41);
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm c_41 = NULL;
  c_41 = t;
  if(match_string(t, "-k"))
    {
      t = c_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_41;
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
  d_41 = t;
  t = SSL_string_to_int(d_41);
  e_41 = t;
  t = term_z_42;
  f_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_42, e_41);
  t = p_9(f_41, e_41, t);
  t = d_41;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_c_43;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, j_4, m_4, t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm j_41 = NULL;
  j_41 = t;
  if(match_string(t, "-S"))
    {
      t = j_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_41;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL;
  t = term_d_26;
  k_41 = t;
  t = term_l_12;
  l_41 = t;
  t = term_d_43;
  t = p_9(k_41, l_41, t);
  t = term_f_43;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_j_43;
  return(t);
}
ATerm s_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,p_41 = NULL;
  m_41 = t;
  t = SSL_string_to_int(m_41);
  n_41 = t;
  t = term_d_26;
  p_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_26, n_41);
  t = p_9(p_41, n_41, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_41);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_k_43;
  return(t);
}
ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL;
  t = term_l_43;
  q_41 = t;
  t = term_i_7;
  r_41 = t;
  t = term_n_43;
  t = p_9(q_41, r_41, t);
  t = term_o_43;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_q_43;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_43 = t;
  int s_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_4, p_4, q_4, t);
      ;
      LocalPopChoice(s_43);
    }
  else
    {
      t = r_43;
      {
        ATerm t_43 = t;
        int u_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_4, v_4, w_4, t);
            ;
            LocalPopChoice(u_43);
          }
        else
          {
            t = t_43;
            t = Option_3_0(d_5, k_5, l_5, t);
          }
      }
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm u_41 = NULL;
  u_41 = t;
  if(match_string(t, "-o"))
    {
      t = u_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_41;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm w_41 = NULL,z_41 = NULL;
  w_41 = t;
  t = term_o_9;
  z_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_9, w_41);
  t = p_9(z_41, w_41, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_41);
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_v_43;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, n_5, o_5, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm c_42 = NULL;
  c_42 = t;
  if(match_string(t, "-i"))
    {
      t = c_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_42;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm d_42 = NULL,m_42 = NULL;
  d_42 = t;
  t = term_r_9;
  m_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, d_42);
  t = p_9(m_42, d_42, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_42);
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_w_43;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, q_5, r_5, t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
  r_42 = t;
  t = term_x_43;
  s_42 = t;
  t = term_y_43;
  t_42 = t;
  t = term_z_43;
  t = p_9(s_42, t_42, t);
  t = r_42;
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_a_44;
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm v_42 = NULL;
  v_42 = t;
  if(match_string(t, "-t"))
    {
      t = v_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--title", 0, ATtrue)))
        _fail(t);
      t = v_42;
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL;
  w_42 = t;
  t = term_f_23;
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_23, w_42);
  t = p_9(x_42, w_42, t);
  t = w_42;
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_b_44;
  return(t);
}
ATerm abox2html_options_0_0 (ATerm t)
{
  ATerm c_44 = t;
  int d_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(d_44);
    }
  else
    {
      t = c_44;
      {
        ATerm g_44 = t;
        int h_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(h_44);
          }
        else
          {
            t = g_44;
            {
              ATerm j_44 = t;
              int t_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  ;
                  LocalPopChoice(t_44);
                }
              else
                {
                  t = j_44;
                  {
                    ATerm u_44 = t;
                    int v_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        ;
                        LocalPopChoice(v_44);
                      }
                    else
                      {
                        t = u_44;
                        {
                          ATerm w_44 = t;
                          int x_44 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(u_5, v_5, w_5, t);
                              ;
                              LocalPopChoice(x_44);
                            }
                          else
                            {
                              t = w_44;
                              t = ArgOption_3_0(x_5, y_5, a_6, t);
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
  ATerm y_42 = NULL,a_43 = NULL,b_43 = NULL,e_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_7;
  t = whoami_0_0(t);
  y_42 = t;
  t = term_h_23;
  b_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_44), y_42);
  e_43 = t;
  t = SSL_printnl(b_43, e_43);
  t = term_g_12;
  a_43 = t;
  t = SSL_exit(a_43);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_44;
  t = get_config_0_0(t);
  return(t);
}
ATerm i_9 (ATerm l_22, ATerm m_22, ATerm t)
{
  ATerm a_45 = t;
  int b_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_22, m_22);
      ;
      LocalPopChoice(b_45);
    }
  else
    {
      t = a_45;
      t = SSL_addr(l_22, m_22);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_71 (ATerm), ATerm i_71 (ATerm), ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
  g_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_43;
      t = h_71(t);
    }
  else
    {
      ATerm m_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_43 = ATgetFirst((ATermList) t);
          i_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_43;
      t = foldr_2_0(h_71, i_71, t);
      m_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_43, m_43);
      t = i_71(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_l_12;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm g_10 = NULL,m_10 = NULL;
  if(match_cons(t, sym__2))
    {
      g_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_9(g_10, m_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_43 = NULL,w_9 = NULL,z_9 = NULL;
  t = times_0_0(t);
  z_9 = t;
  t = SSL_explode_term(z_9);
  if(match_cons(t, sym__2))
    {
      ATerm c_45 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9;
  t = foldr_2_0(d_6, e_6, t);
  p_43 = t;
  t = SSL_TicksToSeconds(p_43);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,k_44 = NULL;
  e_44 = t;
  if(match_cons(t, sym__2))
    {
      f_44 = ATgetArgument(t, 0);
      k_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_45 = t;
    int e_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_44;
        if((f_44 != t))
          {
            _fail(t);
          }
        t = e_44;
        ;
        LocalPopChoice(e_45);
      }
    else
      {
        t = d_45;
        t = (ATerm) ATmakeAppl(sym__2, f_44, k_44);
        {
          ATerm f_45 = t;
          int g_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_44, k_44);
              ;
              LocalPopChoice(g_45);
            }
          else
            {
              t = f_45;
              t = SSL_gtr(f_44, k_44);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_44, k_44);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_86 (ATerm), ATerm t)
{
  ATerm p_45 = NULL;
  p_45 = t;
  {
    ATerm h_45 = t;
    int i_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_45 = NULL;
        t = term_d_26;
        t = get_config_0_0(t);
        x_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_45, term_g_12);
        t = geq_0_0(t);
        t = p_45;
        t = r_86(t);
        ;
        LocalPopChoice(i_45);
      }
    else
      {
        t = h_45;
        t = p_45;
      }
  }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,i_46 = NULL,j_46 = NULL;
  t = run_time_0_0(t);
  a_46 = t;
  t = term_i_7;
  t = whoami_0_0(t);
  b_46 = t;
  t = term_h_23;
  i_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_45), a_46), term_p_26), b_46);
  j_46 = t;
  t = SSL_printnl(i_46, j_46);
  t = (ATerm) ATmakeAppl(sym__2, term_h_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_45), a_46), term_p_26), b_46));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_12;
  k_46 = t;
  t = SSL_exit(k_46);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm v_47 = NULL,z_47 = NULL;
  z_47 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_47;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_47 = ATgetArgument(t, 0);
          {
            ATerm j_11 = NULL,g_3 = NULL;
            t = SSLgetAnnotations(z_47);
            j_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_47);
            g_3 = t;
            t = SSLsetAnnotations(g_3, j_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_47;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_59 (ATerm), ATerm t)
{
  ATerm k_45 = t;
  int l_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_45;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_45);
    }
  else
    {
      t = k_45;
      t = fetch_1_0(g_6, t);
    }
  t = f_59(t);
  return(t);
}
ATerm map_1_0 (ATerm p_64 (ATerm), ATerm t)
{
  ATerm q_48 (ATerm t)
  {
    ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL;
    n_48 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_48;
      }
    else
      {
        ATerm r_11 = NULL,w_11 = NULL,x_11 = NULL,i_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_48 = ATgetFirst((ATermList) t);
            p_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_48);
        r_11 = t;
        t = o_48;
        t = p_64(t);
        w_11 = t;
        t = p_48;
        t = q_48(t);
        x_11 = t;
        t = (ATerm) ATinsert(CheckATermList(x_11), w_11);
        i_3 = t;
        t = SSLsetAnnotations(i_3, r_11);
      }
    return(t);
  }
  t = q_48(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_48 = ATgetFirst((ATermList) t);
      u_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_48 = NULL,z_48 = NULL;
        ATerm i_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_48)), not_null(z_48));
          return(t);
        }
        t = u_48;
        t = j_0(t);
        if(((y_48 != NULL) && (y_48 != t)))
          _fail(t);
        else
          y_48 = t;
        t = t_48;
        t = i_0(t);
        if(((z_48 != NULL) && (z_48 != t)))
          _fail(t);
        else
          z_48 = t;
        t = u_48;
        t = reverse_acc_2_0(i_0, i_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_7;
      t = j_0(t);
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL,k_3 = NULL;
  f_49 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_49);
  d_49 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_49);
  k_3 = t;
  t = SSLsetAnnotations(k_3, d_49);
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm h_49 = NULL;
  h_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_49), term_n_45);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL;
  ATerm o_45 = t;
  int q_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_44;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_45);
    }
  else
    {
      t = o_45;
      t = fetch_1_0(j_6, t);
    }
  t = term_r_45;
  t = echo_0_0(t);
  t = term_q_42;
  b_49 = t;
  t = term_u_42;
  c_49 = t;
  t = term_s_45;
  t = m_9(b_49, c_49, t);
  t = reverse_acc_2_0(_id, l_6, t);
  t = map_1_0(m_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm z_64 (ATerm), ATerm t)
{
  ATerm e_50 (ATerm t)
  {
    ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
    b_50 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_50 = ATgetFirst((ATermList) t);
        d_50 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_45 = t;
      int u_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_12 = NULL,k_12 = NULL,p_3 = NULL;
          t = SSLgetAnnotations(b_50);
          h_12 = t;
          t = c_50;
          t = z_64(t);
          k_12 = t;
          t = (ATerm) ATinsert(CheckATermList(d_50), k_12);
          p_3 = t;
          t = SSLsetAnnotations(p_3, h_12);
          ;
          LocalPopChoice(u_45);
        }
      else
        {
          t = t_45;
          {
            ATerm y_12 = NULL,c_13 = NULL,b_10 = NULL;
            t = SSLgetAnnotations(b_50);
            y_12 = t;
            t = d_50;
            t = e_50(t);
            c_13 = t;
            t = (ATerm) ATinsert(CheckATermList(c_13), c_50);
            b_10 = t;
            t = SSLsetAnnotations(b_10, y_12);
          }
        }
    }
    return(t);
  }
  t = e_50(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL;
  i_50 = t;
  {
    ATerm v_45 = t;
    int w_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_50;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_45 = ATgetFirst((ATermList) t);
                ATerm z_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_50;
          }
        ;
        LocalPopChoice(w_45);
      }
    else
      {
        t = v_45;
        t = (ATerm) ATinsert(ATempty, i_50);
      }
    j_50 = t;
    t = term_f_24;
    k_50 = t;
    t = SSL_printnl(k_50, j_50);
    t = i_50;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_44;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL;
  t = term_c_46;
  o_50 = t;
  t = term_i_7;
  p_50 = t;
  t = term_d_46;
  t = p_9(o_50, p_50, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_e_46;
  return(t);
}
ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL;
  t = term_c_46;
  s_50 = t;
  t = term_i_7;
  t_50 = t;
  t = term_d_46;
  t = p_9(s_50, t_50, t);
  t = term_f_46;
  q_50 = t;
  t = term_i_7;
  r_50 = t;
  t = term_g_46;
  t = p_9(q_50, r_50, t);
  t = term_h_46;
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = term_l_46;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_46 = t;
  int n_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_6, o_6, p_6, t);
      ;
      LocalPopChoice(n_46);
    }
  else
    {
      t = m_46;
      t = Option_3_0(q_6, r_6, s_6, t);
    }
  return(t);
}
ATerm p_9 (ATerm x_41, ATerm y_41, ATerm t)
{
  ATerm u_50 = NULL;
  t = term_l_25;
  u_50 = t;
  t = SSL_table_put(u_50, x_41, y_41);
  t = (ATerm) ATmakeAppl(sym__3, term_l_25, x_41, y_41);
  return(t);
}
ATerm m_9 (ATerm y_25, ATerm z_25, ATerm t)
{
  t = SSL_table_get(y_25, z_25);
  return(t);
}
ATerm n_9 (ATerm h_24, ATerm i_24, ATerm g_24, ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL;
  w_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_24, i_24);
  {
    ATerm o_46 = t;
    int p_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_46 = ATgetArgument(t, 0);
            ATerm r_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_24, i_24);
        t = m_9(h_24, i_24, t);
        ;
        LocalPopChoice(p_46);
      }
    else
      {
        t = o_46;
        t = (ATerm) ATempty;
      }
    x_50 = t;
    t = (ATerm) ATinsert(CheckATermList(x_50), g_24);
    y_50 = t;
    t = SSL_table_put(h_24, i_24, y_50);
    t = w_50;
  }
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
      t = term_i_7;
      t = h_0(t);
      g_51 = t;
      t = term_q_42;
      h_51 = t;
      t = term_u_42;
      i_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_42, term_u_42, g_51);
      t = n_9(h_51, i_51, g_51, t);
      _fail(t);
    }
  else
    {
      ATerm l_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_51 = ATgetFirst((ATermList) t);
          f_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_51;
      t = d_0(t);
      t = term_i_7;
      t = g_0(t);
      l_51 = t;
      t = (ATerm) ATinsert(CheckATermList(f_51), l_51);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_52 (ATerm), ATerm i_52 (ATerm), ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,h_14 = NULL;
  r_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_51 = ATgetFirst((ATermList) t);
      o_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_51);
  m_51 = t;
  t = n_51;
  t = h_52(t);
  p_51 = t;
  t = o_51;
  t = i_52(t);
  q_51 = t;
  t = (ATerm) ATinsert(CheckATermList(q_51), p_51);
  h_14 = t;
  t = SSLsetAnnotations(h_14, m_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_79 (ATerm), ATerm t)
{
  ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,b_52 = NULL,c_52 = NULL,j_14 = NULL;
  w_51 = t;
  {
    ATerm s_46 = t;
    int t_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_46;
        t = o_79(t);
        ;
        LocalPopChoice(t_46);
      }
    else
      {
        t = s_46;
      }
    t = w_51;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_51 = ATgetFirst((ATermList) t);
        z_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(w_51);
    x_51 = t;
    t = term_z_44;
    c_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_44, y_51);
    t = p_9(c_52, y_51, t);
    t = z_51;
    {
      ATerm o_52 (ATerm t)
      {
        ATerm v_46 = t;
        int w_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_46 = t;
            int y_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_52 = NULL;
                f_52 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_52;
                ;
                LocalPopChoice(y_46);
              }
            else
              {
                t = x_46;
                t = o_79(t);
                t = Cons_2_0(_id, o_52, t);
              }
            ;
            LocalPopChoice(w_46);
          }
        else
          {
            t = v_46;
            {
              ATerm k_52 = NULL,l_52 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_52 = ATgetFirst((ATermList) t);
                  l_52 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_52), (ATerm) ATmakeAppl(sym_Undefined_1, k_52));
            }
          }
        return(t);
      }
      t = o_52(t);
      b_52 = t;
      t = (ATerm) ATinsert(CheckATermList(b_52), (ATerm) ATmakeAppl(sym_Program_1, y_51));
      j_14 = t;
      t = SSLsetAnnotations(j_14, x_51);
    }
  }
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm a_53 = NULL;
  a_53 = t;
  if(match_string(t, "--help"))
    {
      t = a_53;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_53;
        }
    }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL;
  t = term_m_45;
  b_53 = t;
  t = term_i_7;
  c_53 = t;
  t = term_z_46;
  t = p_9(b_53, c_53, t);
  t = term_a_47;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_b_47;
  return(t);
}
ATerm x_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_79 (ATerm), ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL;
  v_52 = t;
  t = term_q_42;
  x_52 = t;
  t = term_u_42;
  y_52 = t;
  t = (ATerm) ATempty;
  z_52 = t;
  t = SSL_table_put(x_52, y_52, z_52);
  t = v_52;
  {
    ATerm t_6 (ATerm t)
    {
      ATerm c_47 = t;
      int d_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_79(t);
          ;
          LocalPopChoice(d_47);
        }
      else
        {
          t = c_47;
          {
            ATerm e_47 = t;
            int f_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_6, v_6, w_6, t);
                ;
                LocalPopChoice(f_47);
              }
            else
              {
                t = e_47;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_6, t);
    {
      ATerm g_47 = t;
      int h_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_53 = NULL;
          j_53 = t;
          {
            ATerm i_47 = t;
            int j_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_13 = NULL;
                t = j_53;
                {
                  ATerm k_47 = t;
                  int l_47 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_m_45;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(l_47);
                    }
                  else
                    {
                      t = k_47;
                      t = fetch_1_0(x_6, t);
                    }
                  t = j_53;
                  t = default_system_usage_0_0(t);
                  t = term_l_12;
                  t_13 = t;
                  t = SSL_exit(t_13);
                }
                ;
                LocalPopChoice(j_47);
              }
            else
              {
                t = i_47;
                {
                  ATerm y_13 = NULL;
                  t = term_c_46;
                  t = get_config_0_0(t);
                  t = j_53;
                  t = default_system_about_0_0(t);
                  t = term_l_12;
                  y_13 = t;
                  t = SSL_exit(y_13);
                }
              }
          }
          ;
          LocalPopChoice(h_47);
        }
      else
        {
          t = g_47;
          {
            ATerm m_47 = t;
            int n_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL;
                ATerm z_6 (ATerm t)
                {
                  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,l_14 = NULL;
                  p_53 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      o_53 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_53);
                  n_53 = t;
                  t = o_53;
                  if(((t_52 != NULL) && (t_52 != t)))
                    _fail(t);
                  else
                    t_52 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, o_53);
                  l_14 = t;
                  t = SSLsetAnnotations(l_14, n_53);
                  return(t);
                }
                t = fetch_1_0(z_6, t);
                t = term_h_23;
                l_53 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_52)), term_o_47);
                m_53 = t;
                t = SSL_printnl(l_53, m_53);
                t = (ATerm) ATmakeAppl(sym__2, term_h_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_52)), term_o_47));
                t = default_system_usage_0_0(t);
                t = term_g_12;
                k_53 = t;
                t = SSL_exit(k_53);
                ;
                LocalPopChoice(n_47);
              }
            else
              {
                t = m_47;
              }
          }
        }
      u_52 = t;
      t = term_q_42;
      w_52 = t;
      t = SSL_table_destroy(w_52);
      t = u_52;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_59 (ATerm), ATerm i_59 (ATerm), ATerm j_59 (ATerm), ATerm k_59 (ATerm), ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL;
  t = parse_options_1_0(h_59, t);
  u_53 = t;
  t = term_r_47;
  x_53 = t;
  t = SSL_table_create(x_53);
  t = term_r_47;
  v_53 = t;
  t = term_s_47;
  w_53 = t;
  t = SSL_table_put(v_53, w_53, u_53);
  t = u_53;
  t = j_59(t);
  {
    ATerm t_47 = t;
    int u_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_59, t);
        ;
        LocalPopChoice(u_47);
      }
    else
      {
        t = t_47;
        {
          ATerm w_47 = t;
          int x_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_59(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(x_47);
            }
          else
            {
              t = w_47;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm y_47 = t;
  int a_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_54 = NULL;
      d_54 = t;
      t = term_x_43;
      t = get_config_0_0(t);
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("gen-css", 0, ATtrue)))
        _fail(t);
      t = d_54;
      t = xtc_temp_files_1_0(d_7, t);
      ;
      LocalPopChoice(a_48);
    }
  else
    {
      t = y_47;
      t = abox2html_0_0(t);
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = xtc_generate_2_0(e_7, pass_verbose_0_0, t);
  t = copy_to_1_0(f_7, t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_b_48;
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm c_48 = t;
  int d_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_9;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_48);
    }
  else
    {
      t = c_48;
      t = term_f_24;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2html_options_0_0, default_usage_0_0, _id, a_7, t);
  return(t);
}
