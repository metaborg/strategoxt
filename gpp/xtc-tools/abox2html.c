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
ATerm term_i_49;
ATerm term_w_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_h_47;
ATerm term_d_47;
ATerm term_c_47;
ATerm term_t_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_h_45;
ATerm term_c_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_v_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_c_42;
ATerm term_d_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_n_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_q_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_e_38;
ATerm term_a_38;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_u_37;
ATerm term_p_37;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_h_36;
ATerm term_d_36;
ATerm term_y_35;
ATerm term_w_35;
ATerm term_p_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_g_35;
ATerm term_i_33;
ATerm term_y_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
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
ATerm term_w_31;
ATerm term_s_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_i_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_v_30;
ATerm term_t_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_d_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_b_26;
ATerm term_n_25;
ATerm term_a_25;
ATerm term_u_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_h_24;
ATerm term_z_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_y_22;
ATerm term_w_22;
ATerm term_v_22;
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
ATerm term_g_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_m_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_f_17;
ATerm term_z_16;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_i_12;
ATerm term_c_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
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
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_j_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_i_8;
ATerm term_i_7;
void init_constant_terms (void)
{
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Dec", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Nov", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Oct", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Sep", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Aug", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jul", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jun", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("May", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Apr", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Mar", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Feb", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jan", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("December", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("November", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("October", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("September", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("August", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("July", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("June", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("April", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("March", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("February", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("January", 0, ATtrue));
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
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Wednesday", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuesday", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Monday", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Sunday", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(100);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("p.m.", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("a.m.", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Saturday_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Friday_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Thursday_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Wednesday_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Tuesday_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Monday_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Sunday_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_December_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_November_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_October_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_September_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_August_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_July_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_June_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_May_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_April_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_March_0);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_February_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_January_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("EEEE", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("d", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("MMMM", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("yyyy", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("HH", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("mm", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ss", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--title", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no title specified for HTML document", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<!-- \n", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   This file is generated at ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" \n", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   by abox2html (C) 2001 Merijn de Jonge (mdejonge@cwi.nl)\n", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-->\n", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<!doctype html public \"-//W3C//DTD WWW HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/loose.dtd\"> \n", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<html>\n", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("  <head>\n", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("    <title>", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("</title>\n", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("    <link rel=\"stylesheet\" type=\"text/css\" href=\"boxstyle.css\">\n", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("  </head>\n", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("  <body>\n", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  </body>\n", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("</html>\n", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-html", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_27, term_c_12, term_b_27);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_27, term_b_13, term_j_27);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_27, term_z_12, term_u_27);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_27, term_t_12, term_a_28);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_28, term_p_12, term_j_28);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_28, term_m_28, term_n_28);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_28, term_t_28, term_u_28);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_28, term_s_12, term_x_28);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_28, term_a_29, term_b_29);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_29, term_e_29, term_f_29);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_29, term_r_12, term_i_29);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_29, term_y_12, term_l_29);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_29, term_o_29, term_p_29);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_29, term_m_12, term_s_29);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_29, term_v_29, term_z_29);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_30, term_c_30, term_d_30);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_30, term_o_30, term_p_30);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_30, term_t_30, term_v_30);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_30, term_b_14, term_d_31);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_31, term_n_12, term_i_31);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_31, term_a_14, term_m_31);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_31, term_p_31, term_s_31);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_32, term_b_32, term_c_32);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_32, term_f_32, term_g_32);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_32, term_v_12, term_j_32);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_32, term_m_32, term_n_32);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_32, term_q_32, term_r_32);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_32, term_u_32, term_v_32);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym__2, term_k_36, term_y_37);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym__2, term_k_36, term_l_36);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym__2, term_i_8, term_n_39);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(sym__2, term_b_26, term_i_12);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_12);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(sym__2, term_s_42, term_i_7);
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(sym__2, term_d_43, term_e_43);
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Only generate cascading style sheet", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-t title    Title of HTML document", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(sym__2, term_g_42, term_i_42);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym__2, term_e_46, term_i_7);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(sym__2, term_h_46, term_i_7);
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(sym__2, term_y_44, term_i_7);
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css-boxstyle", 0, ATtrue));
}
ATerm xtc_close_fd_0_0 (ATerm);
ATerm j_8 (ATerm c_46, ATerm d_46, ATerm);
ATerm File_as_fd_1_0 (ATerm w_101 (ATerm), ATerm);
ATerm STDERR__FILENO_0_0 (ATerm);
ATerm STDOUT__FILENO_0_0 (ATerm);
ATerm STDIN__FILENO_0_0 (ATerm);
ATerm xtc_open_fd_0_0 (ATerm);
ATerm b_0 (ATerm);
ATerm xtc_new_file_name_0_0 (ATerm);
ATerm xtc_cat_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm l_8 (ATerm v_49, ATerm w_49, ATerm);
ATerm m_8 (ATerm r_91 (ATerm), ATerm k_440, ATerm d_50, ATerm);
ATerm p_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm month2abbr_0_0 (ATerm);
ATerm month2text_0_0 (ATerm);
ATerm lt_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm day_of_week2abbr_0_0 (ATerm);
ATerm day_of_week2text_0_0 (ATerm);
ATerm while_not_2_0 (ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm);
ATerm for_3_0 (ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm copy_char_0_0 (ATerm);
ATerm o_8 (ATerm b_44, ATerm z_43, ATerm a_44, ATerm);
ATerm p_8 (ATerm i_43, ATerm j_43, ATerm k_43, ATerm);
ATerm q_8 (ATerm b_38, ATerm c_38, ATerm);
ATerm month2index_0_0 (ATerm);
ATerm date_pattern_to_int_0_0 (ATerm);
ATerm a_15 (ATerm f_12, ATerm h_12, ATerm);
ATerm date_pattern_to_string_0_0 (ATerm);
ATerm r_8 (ATerm g_62, ATerm f_62, ATerm);
ATerm index2day_of_week_0_0 (ATerm);
ATerm index2month_0_0 (ATerm);
ATerm s_8 (ATerm g_59, ATerm f_59, ATerm e_59, ATerm d_59, ATerm c_59, ATerm b_59, ATerm h_59, ATerm i_59, ATerm);
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm);
ATerm t_8 (ATerm y_58, ATerm);
ATerm now_epoch_time_0_0 (ATerm);
ATerm now_local_time_0_0 (ATerm);
ATerm create_time_0_0 (ATerm);
ATerm get_title_0_0 (ATerm);
ATerm create_header_0_0 (ATerm);
ATerm a_1 (ATerm);
ATerm xtc_io_1_0 (ATerm e_102 (ATerm), ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm abox2html_0_0 (ATerm);
ATerm h_1 (ATerm);
ATerm j_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm g_9 (ATerm a_46, ATerm b_46, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm u_8 (ATerm j_37, ATerm k_37, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm v_8 (ATerm a_49, ATerm b_49, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm r_79 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm w_90 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm f_101 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm e_101 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm g_101 (ATerm), ATerm);
ATerm y_8 (ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm u_33, ATerm t_33, ATerm);
ATerm z_8 (ATerm j_83 (ATerm), ATerm q_33, ATerm p_33, ATerm);
ATerm p_1 (ATerm);
ATerm a_9 (ATerm w_39, ATerm x_39, ATerm y_39, ATerm);
ATerm b_9 (ATerm l_87 (ATerm), ATerm g_40, ATerm f_40, ATerm);
ATerm a_24 (ATerm q_23, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_9 (ATerm b_50, ATerm);
ATerm d_9 (ATerm s_26, ATerm t_26, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm c_26 (ATerm m_24, ATerm);
ATerm e_26 (ATerm q_24, ATerm r_24, ATerm s_24, ATerm);
ATerm g_26 (ATerm d_25, ATerm e_25, ATerm f_25, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm o_2 (ATerm);
ATerm u_2 (ATerm);
ATerm w_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm m_87 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm g_89 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm g_3 (ATerm);
ATerm i_3 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm o_3 (ATerm);
ATerm r_31 (ATerm s_30, ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm r_102 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm v_79 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm h_34 (ATerm m_33, ATerm);
ATerm conc_0_0 (ATerm);
ATerm e_9 (ATerm i_87 (ATerm), ATerm r_38, ATerm p_38, ATerm);
ATerm debug_1_0 (ATerm p_91 (ATerm), ATerm);
ATerm b_36 (ATerm i_35, ATerm);
ATerm c_36 (ATerm q_35, ATerm r_35, ATerm s_35, ATerm);
ATerm z_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm f_9 (ATerm k_26, ATerm l_26, ATerm);
ATerm l_9 (ATerm q_45, ATerm r_45, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_generate_2_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm);
ATerm h_9 (ATerm e_39, ATerm f_39, ATerm);
ATerm end_scope_1_0 (ATerm f_87 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm e_87 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm d_102 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm l_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm d_5 (ATerm);
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
ATerm i_9 (ATerm d_37, ATerm e_37, ATerm);
ATerm foldr_2_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_101 (ATerm), ATerm);
ATerm f_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm g_6 (ATerm);
ATerm need_help_1_0 (ATerm v_73 (ATerm), ATerm);
ATerm map_1_0 (ATerm f_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm p_79 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm p_9 (ATerm n_56, ATerm o_56, ATerm);
ATerm m_9 (ATerm q_40, ATerm r_40, ATerm);
ATerm n_9 (ATerm z_38, ATerm a_39, ATerm y_38, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm x_66 (ATerm), ATerm y_66 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm y_93 (ATerm), ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm parse_options_1_0 (ATerm x_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm);
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
  ATerm q_0 = NULL;
  q_0 = t;
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 = NULL;
        t = term_i_7;
        t = STDIN__FILENO_0_0(t);
        s_0 = t;
        if((q_0 != t))
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
          int m_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_0 = NULL;
              t = term_i_7;
              t = STDOUT__FILENO_0_0(t);
              u_0 = t;
              if((q_0 != t))
                {
                  _fail(t);
                }
              t = u_0;
              ;
              LocalPopChoice(m_7);
            }
          else
            {
              t = l_7;
              {
                ATerm n_7 = t;
                int r_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_0 = NULL;
                    t = term_i_7;
                    t = STDERR__FILENO_0_0(t);
                    y_0 = t;
                    if((q_0 != t))
                      {
                        _fail(t);
                      }
                    t = y_0;
                    ;
                    LocalPopChoice(r_7);
                  }
                else
                  {
                    t = n_7;
                    t = SSL_close(q_0);
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm j_8 (ATerm c_46, ATerm d_46, ATerm t)
{
  t = SSL_fdcopy(c_46, d_46);
  return(t);
}
ATerm File_as_fd_1_0 (ATerm w_101 (ATerm), ATerm t)
{
  ATerm d_1 = NULL;
  t = xtc_open_fd_0_0(t);
  d_1 = t;
  {
    ATerm t_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_101(t);
        LocalPopChoice(x_7);
        {
          ATerm g_1 = NULL;
          g_1 = t;
          {
            ATerm a_8 = t;
            int d_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = d_1;
                t = xtc_close_fd_0_0(t);
                ;
                LocalPopChoice(d_8);
              }
            else
              {
                t = a_8;
              }
            t = g_1;
          }
        }
      }
    else
      {
        t = t_7;
        {
          ATerm e_8 = t;
          int f_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_1;
              t = xtc_close_fd_0_0(t);
              ;
              LocalPopChoice(f_8);
            }
          else
            {
              t = e_8;
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
  ATerm s_1 = NULL,x_1 = NULL;
  x_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_1 = ATgetArgument(t, 0);
      t = SSL_open(s_1);
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
ATerm b_0 (ATerm t)
{
  t = term_i_8;
  return(t);
}
ATerm xtc_new_file_name_0_0 (ATerm t)
{
  ATerm a_2 = NULL,c_2 = NULL;
  t = new_file_0_0(t);
  a_2 = t;
  t = term_i_7;
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_2, term_i_7);
  t = e_9(b_0, a_2, c_2, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, a_2);
  return(t);
}
ATerm xtc_cat_0_0 (ATerm t)
{
  ATerm d_2 = NULL,f_2 = NULL,g_2 = NULL;
  if(((f_2 != NULL) && (f_2 != t)))
    _fail(t);
  else
    f_2 = t;
  t = xtc_new_file_name_0_0(t);
  if(((d_2 != NULL) && (d_2 != t)))
    _fail(t);
  else
    d_2 = t;
  t = xtc_open_fd_0_0(t);
  if(((g_2 != NULL) && (g_2 != t)))
    _fail(t);
  else
    g_2 = t;
  t = not_null(f_2);
  {
    ATerm n_0 (ATerm t)
    {
      ATerm o_0 (ATerm t)
      {
        ATerm h_2 = NULL;
        h_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_2, not_null(g_2));
        t = j_8(h_2, not_null(g_2), t);
        return(t);
      }
      t = File_as_fd_1_0(o_0, t);
      return(t);
    }
    t = map_1_0(n_0, t);
    t = not_null(g_2);
    t = xtc_close_fd_0_0(t);
    t = not_null(d_2);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm n_2 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_w_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm p_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_x_8);
      p_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_2, (ATerm) ATinsert(ATempty, term_x_8));
      t = f_9(n_2, p_2, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm l_8 (ATerm v_49, ATerm w_49, ATerm t)
{
  ATerm q_2 = NULL;
  t = SSL_write_term_to_stream_baf(v_49, w_49);
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_2);
  return(t);
}
ATerm m_8 (ATerm r_91 (ATerm), ATerm k_440, ATerm d_50, ATerm t)
{
  ATerm r_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_440, term_j_9);
  t = open_stream_0_0(t);
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_2, d_50);
  t = r_91(t);
  t = fclose_0_0(t);
  t = d_50;
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm v_2 = NULL,x_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_9 = ATgetArgument(t, 0);
      if(match_cons(k_9, sym_Stream_1))
        {
          v_2 = ATgetArgument(k_9, 0);
        }
      else
        _fail(t);
      x_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_8(v_2, x_2, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL;
  s_2 = t;
  t = xtc_new_file_0_0(t);
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_2, s_2);
  t = m_8(p_0, t_2, s_2, t);
  t = SSL_close_file(t_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_2);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(a_103, b_103, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL;
  m_3 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_1 = NULL,i_1 = NULL;
      t = m_3;
      t = xtc_new_file_0_0(t);
      f_1 = t;
      t = m_0(t);
      i_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_1, (ATerm) ATinsert(ATinsert(ATempty, f_1), term_o_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(f_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_1);
    }
  else
    {
      ATerm u_1 = NULL,v_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_3;
      t = xtc_new_file_0_0(t);
      u_1 = t;
      t = m_0(t);
      v_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_1), term_o_9), n_3), term_q_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(u_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_1);
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
              t = term_v_9;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_x_9;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_a_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_b_10;
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
                                  t = term_d_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_h_10;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_i_10;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_k_10;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_l_10;
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
      t = term_m_10;
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
                          t = term_r_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_t_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_d_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_u_10;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_w_10;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_x_10;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_y_10;
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
      ATerm i_4 = NULL,o_4 = NULL;
      if(match_cons(t, sym__2))
        {
          i_4 = ATgetArgument(t, 0);
          o_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, i_4, o_4);
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(i_4, o_4);
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            t = SSL_gtr(i_4, o_4);
          }
        t = (ATerm) ATmakeAppl(sym__2, i_4, o_4);
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
                  t = term_s_11;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_t_11;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_w_11;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_x_11;
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm while_not_2_0 (ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_89(t);
        ;
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        t = w_89(t);
        t = r_4(t);
      }
    return(t);
  }
  t = r_4(t);
  return(t);
}
ATerm for_3_0 (ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm t)
{
  t = y_89(t);
  t = while_not_2_0(z_89, a_90, t);
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL;
  if(match_cons(t, sym__2))
    {
      x_4 = ATgetArgument(t, 0);
      y_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_4, y_4, (ATerm) ATempty);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm z_4 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm a_12 = ATgetArgument(t, 0);
      if(((ATgetType(a_12) != AT_INT) || (ATgetInt((ATermInt) a_12) != 0)))
        _fail(t);
      {
        ATerm b_12 = ATgetArgument(t, 1);
      }
      z_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_4;
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,e_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym__3))
    {
      a_5 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
      c_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_5, term_c_12);
  t = geq_0_0(t);
  t = term_c_12;
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_5, term_c_12);
  t = u_8(a_5, f_5, t);
  e_5 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_5, b_5, (ATerm) ATinsert(CheckATermList(c_5), b_5));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(r_0, t_0, v_0, t);
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm g_5 = NULL;
  t = copy_0_0(t);
  g_5 = t;
  t = SSL_implode_string(g_5);
  return(t);
}
ATerm o_8 (ATerm b_44, ATerm z_43, ATerm a_44, ATerm t)
{
  ATerm h_5 = NULL;
  t = SSL_strlen(z_43);
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_44, h_5);
  t = u_8(a_44, h_5, t);
  {
    ATerm e_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_5 = NULL;
        i_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_5, term_i_12);
        t = geq_0_0(t);
        t = i_5;
        LocalPopChoice(g_12);
        {
          ATerm j_5 = NULL;
          j_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_5, b_44);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = e_12;
        t = term_l_12;
      }
  }
  return(t);
}
ATerm p_8 (ATerm i_43, ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm k_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, i_43, j_43, k_43);
  t = o_8(i_43, j_43, k_43, t);
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_5, j_43);
  t = l_9(k_5, j_43, t);
  return(t);
}
ATerm q_8 (ATerm b_38, ATerm c_38, ATerm t)
{
  t = SSL_mod(b_38, c_38);
  return(t);
}
ATerm month2index_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_m_12;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_n_12;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_p_12;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_r_12;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_s_12;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_t_12;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_v_12;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_y_12;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_z_12;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_b_13;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_c_12;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_i_12;
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
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,s_7 = NULL,u_7 = NULL,v_7 = NULL,y_7 = NULL,z_7 = NULL,c_8 = NULL,g_8 = NULL,h_8 = NULL,k_8 = NULL,n_8 = NULL;
  u_7 = t;
  if(match_cons(t, sym__2))
    {
      v_7 = ATgetArgument(t, 0);
      y_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_7;
  if(match_string(t, "ss"))
    {
      t = y_7;
      if(match_cons(t, sym_ComponentTime_3))
        {
          ATerm c_13 = ATgetArgument(t, 0);
          k_8 = ATgetArgument(t, 1);
          {
            ATerm i_13 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = k_8;
      if(match_cons(t, sym_DayTime_3))
        {
          ATerm j_13 = ATgetArgument(t, 0);
          ATerm k_13 = ATgetArgument(t, 1);
          q_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_7;
    }
  else
    {
      if(match_string(t, "mm"))
        {
          t = y_7;
          if(match_cons(t, sym_ComponentTime_3))
            {
              ATerm l_13 = ATgetArgument(t, 0);
              k_8 = ATgetArgument(t, 1);
              {
                ATerm m_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = k_8;
          if(match_cons(t, sym_DayTime_3))
            {
              ATerm n_13 = ATgetArgument(t, 0);
              p_7 = ATgetArgument(t, 1);
              {
                ATerm o_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = p_7;
        }
      else
        {
          if(match_string(t, "KK"))
            {
              t = y_7;
              if(match_cons(t, sym_ComponentTime_3))
                {
                  ATerm q_13 = ATgetArgument(t, 0);
                  k_8 = ATgetArgument(t, 1);
                  {
                    ATerm t_13 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = k_8;
              if(match_cons(t, sym_DayTime_3))
                {
                  o_7 = ATgetArgument(t, 0);
                  {
                    ATerm u_13 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm v_13 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              {
                ATerm y_13 = t;
                int z_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_9 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, term_a_14, o_7);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, o_7, term_b_14);
                    t = leq_0_0(t);
                    t = term_a_14;
                    r_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_7, term_a_14);
                    t = u_8(o_7, r_9, t);
                    ;
                    LocalPopChoice(z_13);
                  }
                else
                  {
                    t = y_13;
                    t = (ATerm) ATmakeAppl(sym__2, term_i_12, o_7);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, o_7, term_a_14);
                    t = lt_0_0(t);
                    t = o_7;
                  }
              }
            }
          else
            {
              if(match_string(t, "hh"))
                {
                  t = y_7;
                  if(match_cons(t, sym_ComponentTime_3))
                    {
                      ATerm c_14 = ATgetArgument(t, 0);
                      k_8 = ATgetArgument(t, 1);
                      {
                        ATerm d_14 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = k_8;
                  if(match_cons(t, sym_DayTime_3))
                    {
                      o_7 = ATgetArgument(t, 0);
                      {
                        ATerm e_14 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm f_14 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = o_7;
                  if(match_int(t, 0))
                    {
                      ATerm g_14 = t;
                      int h_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_9 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_a_14, o_7);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, o_7, term_b_14);
                          t = leq_0_0(t);
                          t = term_a_14;
                          y_9 = t;
                          t = (ATerm) ATmakeAppl(sym__2, o_7, term_a_14);
                          t = u_8(o_7, y_9, t);
                          ;
                          LocalPopChoice(h_14);
                        }
                      else
                        {
                          t = g_14;
                          {
                            ATerm i_14 = t;
                            int j_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_c_12, o_7);
                                t = leq_0_0(t);
                                t = (ATerm) ATmakeAppl(sym__2, o_7, term_a_14);
                                t = leq_0_0(t);
                                t = o_7;
                                ;
                                LocalPopChoice(j_14);
                              }
                            else
                              {
                                t = i_14;
                                t = term_a_14;
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm k_14 = t;
                      int l_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_10 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_a_14, o_7);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, o_7, term_b_14);
                          t = leq_0_0(t);
                          t = term_a_14;
                          f_10 = t;
                          t = (ATerm) ATmakeAppl(sym__2, o_7, term_a_14);
                          t = u_8(o_7, f_10, t);
                          ;
                          LocalPopChoice(l_14);
                        }
                      else
                        {
                          t = k_14;
                          t = (ATerm) ATmakeAppl(sym__2, term_c_12, o_7);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, o_7, term_a_14);
                          t = leq_0_0(t);
                          t = o_7;
                        }
                    }
                }
              else
                {
                  if(match_string(t, "kk"))
                    {
                      ATerm j_10 = NULL;
                      t = y_7;
                      if(match_cons(t, sym_ComponentTime_3))
                        {
                          ATerm m_14 = ATgetArgument(t, 0);
                          k_8 = ATgetArgument(t, 1);
                          {
                            ATerm n_14 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = k_8;
                      if(match_cons(t, sym_DayTime_3))
                        {
                          o_7 = ATgetArgument(t, 0);
                          {
                            ATerm o_14 = ATgetArgument(t, 1);
                          }
                          {
                            ATerm p_14 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = term_c_12;
                      j_10 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_7, term_c_12);
                      t = i_9(o_7, j_10, t);
                    }
                  else
                    {
                      if(match_string(t, "HH"))
                        {
                          t = y_7;
                          if(match_cons(t, sym_ComponentTime_3))
                            {
                              ATerm q_14 = ATgetArgument(t, 0);
                              k_8 = ATgetArgument(t, 1);
                              {
                                ATerm r_14 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = k_8;
                          if(match_cons(t, sym_DayTime_3))
                            {
                              o_7 = ATgetArgument(t, 0);
                              {
                                ATerm s_14 = ATgetArgument(t, 1);
                              }
                              {
                                ATerm t_14 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = o_7;
                        }
                      else
                        {
                          if(match_string(t, "DD"))
                            {
                              t = y_7;
                              if(match_cons(t, sym_ComponentTime_3))
                                {
                                  ATerm u_14 = ATgetArgument(t, 0);
                                  ATerm v_14 = ATgetArgument(t, 1);
                                  n_8 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = n_8;
                              if(match_cons(t, sym_Dupl_2))
                                {
                                  ATerm w_14 = ATgetArgument(t, 0);
                                  s_7 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = s_7;
                            }
                          else
                            {
                              if(match_string(t, "D"))
                                {
                                  t = y_7;
                                  if(match_cons(t, sym_ComponentTime_3))
                                    {
                                      ATerm x_14 = ATgetArgument(t, 0);
                                      ATerm y_14 = ATgetArgument(t, 1);
                                      n_8 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = n_8;
                                  if(match_cons(t, sym_Dupl_2))
                                    {
                                      ATerm z_14 = ATgetArgument(t, 0);
                                      s_7 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = s_7;
                                }
                              else
                                {
                                  if(match_string(t, "dd"))
                                    {
                                      t = y_7;
                                      if(match_cons(t, sym_ComponentTime_3))
                                        {
                                          z_7 = ATgetArgument(t, 0);
                                          {
                                            ATerm e_15 = ATgetArgument(t, 1);
                                          }
                                          {
                                            ATerm h_15 = ATgetArgument(t, 2);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      t = z_7;
                                      if(match_cons(t, sym_Date_3))
                                        {
                                          ATerm i_15 = ATgetArgument(t, 0);
                                          ATerm k_15 = ATgetArgument(t, 1);
                                          h_8 = ATgetArgument(t, 2);
                                        }
                                      else
                                        _fail(t);
                                      t = h_8;
                                    }
                                  else
                                    {
                                      if(match_string(t, "d"))
                                        {
                                          t = y_7;
                                          if(match_cons(t, sym_ComponentTime_3))
                                            {
                                              z_7 = ATgetArgument(t, 0);
                                              {
                                                ATerm n_15 = ATgetArgument(t, 1);
                                              }
                                              {
                                                ATerm o_15 = ATgetArgument(t, 2);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          t = z_7;
                                          if(match_cons(t, sym_Date_3))
                                            {
                                              ATerm i_16 = ATgetArgument(t, 0);
                                              ATerm j_16 = ATgetArgument(t, 1);
                                              h_8 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          t = h_8;
                                        }
                                      else
                                        {
                                          if(match_string(t, "MM"))
                                            {
                                              ATerm s_10 = NULL,v_10 = NULL;
                                              t = y_7;
                                              if(match_cons(t, sym_ComponentTime_3))
                                                {
                                                  z_7 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm k_16 = ATgetArgument(t, 1);
                                                  }
                                                  {
                                                    ATerm m_16 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = z_7;
                                              if(match_cons(t, sym_Date_3))
                                                {
                                                  ATerm o_16 = ATgetArgument(t, 0);
                                                  g_8 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm p_16 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = g_8;
                                              t = month2index_0_0(t);
                                              s_10 = t;
                                              t = term_c_12;
                                              v_10 = t;
                                              t = (ATerm) ATmakeAppl(sym__2, s_10, term_c_12);
                                              t = i_9(s_10, v_10, t);
                                            }
                                          else
                                            {
                                              if(match_string(t, "M"))
                                                {
                                                  ATerm z_10 = NULL,a_11 = NULL;
                                                  t = y_7;
                                                  if(match_cons(t, sym_ComponentTime_3))
                                                    {
                                                      z_7 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm q_16 = ATgetArgument(t, 1);
                                                      }
                                                      {
                                                        ATerm s_16 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_7;
                                                  if(match_cons(t, sym_Date_3))
                                                    {
                                                      ATerm t_16 = ATgetArgument(t, 0);
                                                      g_8 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm u_16 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = g_8;
                                                  t = month2index_0_0(t);
                                                  z_10 = t;
                                                  t = term_c_12;
                                                  a_11 = t;
                                                  t = (ATerm) ATmakeAppl(sym__2, z_10, term_c_12);
                                                  t = i_9(z_10, a_11, t);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "yy"))
                                                    {
                                                      ATerm f_11 = NULL;
                                                      t = y_7;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          z_7 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm v_16 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm w_16 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = z_7;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          c_8 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm x_16 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm y_16 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = term_z_16;
                                                      f_11 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, c_8, term_z_16);
                                                      t = q_8(c_8, f_11, t);
                                                    }
                                                  else
                                                    {
                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("yyyy", 0, ATtrue)))
                                                        _fail(t);
                                                      t = y_7;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          z_7 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm a_17 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm c_17 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = z_7;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          c_8 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm d_17 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm e_17 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = c_8;
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
ATerm a_15 (ATerm f_12, ATerm h_12, ATerm t)
{
  ATerm j_12 = NULL,o_12 = NULL,q_12 = NULL,w_12 = NULL;
  t = h_12;
  t = date_pattern_to_int_0_0(t);
  q_12 = t;
  t = SSL_int_to_string(q_12);
  j_12 = t;
  t = SSL_strlen(f_12);
  o_12 = t;
  t = term_f_17;
  w_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_17, j_12, o_12);
  t = p_8(w_12, j_12, o_12, t);
  return(t);
}
ATerm date_pattern_to_string_0_0 (ATerm t)
{
  ATerm x_12 = NULL,a_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,p_13 = NULL,r_13 = NULL,x_13 = NULL;
  e_13 = t;
  if(match_cons(t, sym__2))
    {
      f_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_13;
  if(match_cons(t, sym_ComponentTime_3))
    {
      h_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
      x_13 = ATgetArgument(t, 2);
      t = x_13;
      {
        ATerm g_17 = t;
        int h_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Dupl_2))
              {
                a_13 = ATgetArgument(t, 0);
                {
                  ATerm i_17 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_17);
            t = r_13;
            {
              ATerm j_17 = t;
              int k_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      x_12 = ATgetArgument(t, 0);
                      {
                        ATerm l_17 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm n_17 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(k_17);
                  t = h_13;
                  {
                    ATerm q_17 = t;
                    int r_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm s_17 = ATgetArgument(t, 0);
                            p_13 = ATgetArgument(t, 1);
                            {
                              ATerm v_17 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(r_17);
                        t = f_13;
                        if(match_string(t, "a"))
                          {
                            ATerm w_17 = t;
                            int x_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_15(f_13, e_13, t);
                                ;
                                LocalPopChoice(x_17);
                              }
                            else
                              {
                                t = w_17;
                                {
                                  ATerm c_18 = t;
                                  int d_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_a_14, x_12);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, x_12, term_b_14);
                                      t = leq_0_0(t);
                                      t = term_e_18;
                                      ;
                                      LocalPopChoice(d_18);
                                    }
                                  else
                                    {
                                      t = c_18;
                                      t = (ATerm) ATmakeAppl(sym__2, term_i_12, x_12);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, x_12, term_a_14);
                                      t = lt_0_0(t);
                                      t = term_f_18;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEEE"))
                              {
                                ATerm g_18 = t;
                                int h_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = a_15(f_13, e_13, t);
                                    ;
                                    LocalPopChoice(h_18);
                                  }
                                else
                                  {
                                    t = g_18;
                                    t = a_13;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm i_18 = t;
                                    int j_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = a_15(f_13, e_13, t);
                                        ;
                                        LocalPopChoice(j_18);
                                      }
                                    else
                                      {
                                        t = i_18;
                                        t = a_13;
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
                                            t = a_15(f_13, e_13, t);
                                            ;
                                            LocalPopChoice(l_18);
                                          }
                                        else
                                          {
                                            t = k_18;
                                            t = p_13;
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
                                                t = a_15(f_13, e_13, t);
                                                ;
                                                LocalPopChoice(n_18);
                                              }
                                            else
                                              {
                                                t = m_18;
                                                t = p_13;
                                                t = month2abbr_0_0(t);
                                              }
                                          }
                                        else
                                          {
                                            t = a_15(f_13, e_13, t);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = q_17;
                        t = f_13;
                        if(match_string(t, "a"))
                          {
                            ATerm o_18 = t;
                            int p_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_15(f_13, e_13, t);
                                ;
                                LocalPopChoice(p_18);
                              }
                            else
                              {
                                t = o_18;
                                {
                                  ATerm q_18 = t;
                                  int r_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_a_14, x_12);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, x_12, term_b_14);
                                      t = leq_0_0(t);
                                      t = term_e_18;
                                      ;
                                      LocalPopChoice(r_18);
                                    }
                                  else
                                    {
                                      t = q_18;
                                      t = (ATerm) ATmakeAppl(sym__2, term_i_12, x_12);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, x_12, term_a_14);
                                      t = lt_0_0(t);
                                      t = term_f_18;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEEE"))
                              {
                                ATerm s_18 = t;
                                int t_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = a_15(f_13, e_13, t);
                                    ;
                                    LocalPopChoice(t_18);
                                  }
                                else
                                  {
                                    t = s_18;
                                    t = a_13;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm w_18 = t;
                                    int x_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = a_15(f_13, e_13, t);
                                        ;
                                        LocalPopChoice(x_18);
                                      }
                                    else
                                      {
                                        t = w_18;
                                        t = a_13;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = a_15(f_13, e_13, t);
                                  }
                              }
                          }
                      }
                  }
                }
              else
                {
                  t = j_17;
                  t = h_13;
                  {
                    ATerm y_18 = t;
                    int z_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm a_19 = ATgetArgument(t, 0);
                            p_13 = ATgetArgument(t, 1);
                            {
                              ATerm b_19 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(z_18);
                        t = f_13;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm c_19 = t;
                            int h_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_15(f_13, e_13, t);
                                ;
                                LocalPopChoice(h_19);
                              }
                            else
                              {
                                t = c_19;
                                t = a_13;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm i_19 = t;
                                int j_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = a_15(f_13, e_13, t);
                                    ;
                                    LocalPopChoice(j_19);
                                  }
                                else
                                  {
                                    t = i_19;
                                    t = a_13;
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
                                        t = a_15(f_13, e_13, t);
                                        ;
                                        LocalPopChoice(l_19);
                                      }
                                    else
                                      {
                                        t = k_19;
                                        t = p_13;
                                        t = month2text_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    if(match_string(t, "MMM"))
                                      {
                                        ATerm m_19 = t;
                                        int n_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = a_15(f_13, e_13, t);
                                            ;
                                            LocalPopChoice(n_19);
                                          }
                                        else
                                          {
                                            t = m_19;
                                            t = p_13;
                                            t = month2abbr_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        t = a_15(f_13, e_13, t);
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = y_18;
                        t = f_13;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm o_19 = t;
                            int p_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_15(f_13, e_13, t);
                                ;
                                LocalPopChoice(p_19);
                              }
                            else
                              {
                                t = o_19;
                                t = a_13;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm q_19 = t;
                                int r_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = a_15(f_13, e_13, t);
                                    ;
                                    LocalPopChoice(r_19);
                                  }
                                else
                                  {
                                    t = q_19;
                                    t = a_13;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = a_15(f_13, e_13, t);
                              }
                          }
                      }
                  }
                }
            }
          }
        else
          {
            t = g_17;
            t = r_13;
            {
              ATerm s_19 = t;
              int t_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      x_12 = ATgetArgument(t, 0);
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
                  t = h_13;
                  {
                    ATerm w_19 = t;
                    int x_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm y_19 = ATgetArgument(t, 0);
                            p_13 = ATgetArgument(t, 1);
                            {
                              ATerm z_19 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(x_19);
                        t = f_13;
                        if(match_string(t, "a"))
                          {
                            ATerm a_20 = t;
                            int c_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_15(f_13, e_13, t);
                                ;
                                LocalPopChoice(c_20);
                              }
                            else
                              {
                                t = a_20;
                                {
                                  ATerm d_20 = t;
                                  int f_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_a_14, x_12);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, x_12, term_b_14);
                                      t = leq_0_0(t);
                                      t = term_e_18;
                                      ;
                                      LocalPopChoice(f_20);
                                    }
                                  else
                                    {
                                      t = d_20;
                                      t = (ATerm) ATmakeAppl(sym__2, term_i_12, x_12);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, x_12, term_a_14);
                                      t = lt_0_0(t);
                                      t = term_f_18;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "MMMM"))
                              {
                                ATerm h_20 = t;
                                int j_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = a_15(f_13, e_13, t);
                                    ;
                                    LocalPopChoice(j_20);
                                  }
                                else
                                  {
                                    t = h_20;
                                    t = p_13;
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
                                        t = a_15(f_13, e_13, t);
                                        ;
                                        LocalPopChoice(l_20);
                                      }
                                    else
                                      {
                                        t = k_20;
                                        t = p_13;
                                        t = month2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = a_15(f_13, e_13, t);
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = w_19;
                        t = f_13;
                        if(match_string(t, "a"))
                          {
                            ATerm m_20 = t;
                            int o_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_15(f_13, e_13, t);
                                ;
                                LocalPopChoice(o_20);
                              }
                            else
                              {
                                t = m_20;
                                {
                                  ATerm p_20 = t;
                                  int r_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_a_14, x_12);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, x_12, term_b_14);
                                      t = leq_0_0(t);
                                      t = term_e_18;
                                      ;
                                      LocalPopChoice(r_20);
                                    }
                                  else
                                    {
                                      t = p_20;
                                      t = (ATerm) ATmakeAppl(sym__2, term_i_12, x_12);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, x_12, term_a_14);
                                      t = lt_0_0(t);
                                      t = term_f_18;
                                    }
                                }
                              }
                          }
                        else
                          {
                            t = a_15(f_13, e_13, t);
                          }
                      }
                  }
                }
              else
                {
                  t = s_19;
                  t = h_13;
                  {
                    ATerm s_20 = t;
                    int t_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm u_20 = ATgetArgument(t, 0);
                            p_13 = ATgetArgument(t, 1);
                            {
                              ATerm v_20 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(t_20);
                        t = f_13;
                        if(match_string(t, "MMMM"))
                          {
                            ATerm x_20 = t;
                            int y_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_15(f_13, e_13, t);
                                ;
                                LocalPopChoice(y_20);
                              }
                            else
                              {
                                t = x_20;
                                t = p_13;
                                t = month2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "MMM"))
                              {
                                ATerm z_20 = t;
                                int a_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = a_15(f_13, e_13, t);
                                    ;
                                    LocalPopChoice(a_21);
                                  }
                                else
                                  {
                                    t = z_20;
                                    t = p_13;
                                    t = month2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = a_15(f_13, e_13, t);
                              }
                          }
                      }
                    else
                      {
                        t = s_20;
                        t = f_13;
                        t = a_15(f_13, e_13, t);
                      }
                  }
                }
            }
          }
      }
    }
  else
    {
      t = f_13;
      t = a_15(f_13, e_13, t);
    }
  return(t);
}
ATerm r_8 (ATerm g_62, ATerm f_62, ATerm t)
{
  ATerm b_15 = NULL;
  t = not_null(g_62);
  {
    ATerm w_0 (ATerm t)
    {
      ATerm c_15 = NULL;
      c_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_15, not_null(f_62));
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = date_pattern_to_string_0_0(t);
            ;
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            {
              ATerm d_15 = NULL,f_15 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, c_15, not_null(f_62));
              f_15 = t;
              t = SSL_explode_term(f_15);
              if(match_cons(t, sym__2))
                {
                  ATerm e_21 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_21) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm f_21 = ATgetArgument(t, 1);
                    if(((ATgetType(f_21) == AT_LIST) && !(ATisEmpty(f_21))))
                      {
                        d_15 = ATgetFirst((ATermList) f_21);
                        {
                          ATerm g_21 = (ATerm) ATgetNext((ATermList) f_21);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = d_15;
            }
          }
      }
      return(t);
    }
    t = map_1_0(w_0, t);
    if(((b_15 != NULL) && (b_15 != t)))
      _fail(t);
    else
      b_15 = t;
    t = SSL_concat_strings(not_null(b_15));
  }
  return(t);
}
ATerm index2day_of_week_0_0 (ATerm t)
{
  if(match_int(t, 6))
    {
      t = term_h_21;
    }
  else
    {
      if(match_int(t, 5))
        {
          t = term_i_21;
        }
      else
        {
          if(match_int(t, 4))
            {
              t = term_j_21;
            }
          else
            {
              if(match_int(t, 3))
                {
                  t = term_m_21;
                }
              else
                {
                  if(match_int(t, 2))
                    {
                      t = term_q_21;
                    }
                  else
                    {
                      if(match_int(t, 1))
                        {
                          t = term_s_21;
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
          t = term_x_21;
        }
      else
        {
          if(match_int(t, 9))
            {
              t = term_z_21;
            }
          else
            {
              if(match_int(t, 8))
                {
                  t = term_a_22;
                }
              else
                {
                  if(match_int(t, 7))
                    {
                      t = term_b_22;
                    }
                  else
                    {
                      if(match_int(t, 6))
                        {
                          t = term_c_22;
                        }
                      else
                        {
                          if(match_int(t, 5))
                            {
                              t = term_e_22;
                            }
                          else
                            {
                              if(match_int(t, 4))
                                {
                                  t = term_g_22;
                                }
                              else
                                {
                                  if(match_int(t, 3))
                                    {
                                      t = term_i_22;
                                    }
                                  else
                                    {
                                      if(match_int(t, 2))
                                        {
                                          t = term_j_22;
                                        }
                                      else
                                        {
                                          if(match_int(t, 1))
                                            {
                                              t = term_k_22;
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                                                _fail(t);
                                              t = term_l_22;
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
ATerm s_8 (ATerm g_59, ATerm f_59, ATerm e_59, ATerm d_59, ATerm c_59, ATerm b_59, ATerm h_59, ATerm i_59, ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL;
  t = c_59;
  t = index2month_0_0(t);
  l_15 = t;
  t = h_59;
  t = index2day_of_week_0_0(t);
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym_ComponentTime_3, (ATerm)ATmakeAppl(sym_Date_3, b_59, l_15, d_59), (ATerm)ATmakeAppl(sym_DayTime_3, e_59, f_59, g_59), (ATerm) ATmakeAppl(sym_Dupl_2, m_15, i_59));
  return(t);
}
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
  if(match_cons(t, sym__8))
    {
      p_15 = ATgetArgument(t, 0);
      q_15 = ATgetArgument(t, 1);
      r_15 = ATgetArgument(t, 2);
      s_15 = ATgetArgument(t, 3);
      t_15 = ATgetArgument(t, 4);
      u_15 = ATgetArgument(t, 5);
      v_15 = ATgetArgument(t, 6);
      w_15 = ATgetArgument(t, 7);
    }
  else
    _fail(t);
  t = s_8(p_15, q_15, r_15, s_15, t_15, u_15, v_15, w_15, t);
  return(t);
}
ATerm t_8 (ATerm y_58, ATerm t)
{
  t = SSL_epoch2localtime(y_58);
  t = prim_tuple_to_ComponentTime_0_0(t);
  return(t);
}
ATerm now_epoch_time_0_0 (ATerm t)
{
  ATerm x_15 = NULL;
  t = SSL_now_epoch_time();
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym_EpochTime_1, x_15);
  return(t);
}
ATerm now_local_time_0_0 (ATerm t)
{
  ATerm y_15 = NULL;
  t = now_epoch_time_0_0(t);
  if(match_cons(t, sym_EpochTime_1))
    {
      y_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_8(y_15, t);
  return(t);
}
ATerm create_time_0_0 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  t = term_i_7;
  t = now_local_time_0_0(t);
  z_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_22), term_v_22), term_w_22), term_v_22), term_r_22), term_n_22), term_q_22), term_n_22), term_p_22), term_n_22), term_o_22), term_n_22), term_m_22);
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_22), term_v_22), term_w_22), term_v_22), term_r_22), term_n_22), term_q_22), term_n_22), term_p_22), term_n_22), term_o_22), term_n_22), term_m_22), z_15);
  t = r_8(a_16, z_15, t);
  return(t);
}
ATerm get_title_0_0 (ATerm t)
{
  ATerm z_22 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = z_22;
      {
        ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
        t = term_f_23;
        c_16 = t;
        t = (ATerm) ATinsert(ATempty, term_j_23);
        d_16 = t;
        t = SSL_printnl(c_16, d_16);
        t = term_c_12;
        b_16 = t;
        t = SSL_exit(b_16);
        t = (ATerm) ATinsert(ATempty, term_j_23);
      }
    }
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL;
  t = get_title_0_0(t);
  f_16 = t;
  t = term_i_7;
  t = create_time_0_0(t);
  e_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_23), term_x_23), term_w_23), term_u_23), f_16), term_t_23), term_s_23), term_r_23), term_p_23), term_o_23), term_n_23), term_m_23), e_16), term_l_23), term_k_23);
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
      t = term_h_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm e_102 (ATerm), ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_16 = NULL;
        t = term_q_9;
        t = get_config_0_0(t);
        g_16 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, g_16);
        ;
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        t = term_w_8;
      }
    t = e_102(t);
    t = copy_to_1_0(a_1, t);
    return(t);
  }
  t = xtc_temp_files_1_0(x_0, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm l_16 = NULL,n_16 = NULL,y_2 = NULL,z_2 = NULL,b_2 = NULL,e_2 = NULL;
  n_16 = t;
  t = create_header_0_0(t);
  b_2 = t;
  t = xtc_new_file_0_0(t);
  e_2 = t;
  t = SSL_print(e_2, b_2);
  t = SSL_close_file(e_2);
  t = n_16;
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_16 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_16 = ATgetArgument(t, 0);
            {
              ATerm m_2 = NULL,f_0 = NULL;
              t = SSLgetAnnotations(n_16);
              m_2 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_16);
              f_0 = t;
              t = SSLsetAnnotations(f_0, m_2);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_16;
          }
        LocalPopChoice(l_24);
        t = xtc_transform_file_2_0(c_1, pass_verbose_0_0, t);
      }
    else
      {
        t = k_24;
        t = xtc_transform_term_2_0(e_1, pass_verbose_0_0, t);
      }
    l_16 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_o_24);
    y_2 = t;
    t = xtc_new_file_0_0(t);
    z_2 = t;
    t = SSL_print(z_2, y_2);
    t = SSL_close_file(z_2);
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FILE_1, z_2)), l_16), (ATerm) ATmakeAppl(sym_FILE_1, e_2));
    t = xtc_cat_0_0(t);
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  t = xtc_io_1_0(b_1, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_24);
    }
  else
    {
      t = x_24;
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_17 = NULL;
      b_17 = t;
      t = SSL_is_string(b_17);
      ;
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_1, t);
            ;
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            {
              ATerm m_17 = NULL,o_17 = NULL,p_17 = NULL;
              m_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_17 = ATgetArgument(t, 0);
                  t = o_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_17 = ATgetArgument(t, 0);
                      t = o_17;
                      {
                        ATerm i_25 = t;
                        int m_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(m_25);
                          }
                        else
                          {
                            t = i_25;
                            t = debug_1_0(j_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_17 = NULL,u_17 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_17 = ATgetArgument(t, 0);
                          p_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_17;
                      t = eval_config_0_0(t);
                      t_17 = t;
                      t = p_17;
                      t = eval_config_0_0(t);
                      u_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_17, u_17);
                      t = l_9(t_17, u_17, t);
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
  ATerm y_17 = NULL,z_17 = NULL;
  y_17 = t;
  t = term_n_25;
  z_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_25, y_17);
  t = m_9(z_17, y_17, t);
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_18 = NULL,b_18 = NULL;
        t = eval_config_0_0(t);
        a_18 = t;
        t = term_n_25;
        b_18 = t;
        t = SSL_table_put(b_18, y_17, a_18);
        t = a_18;
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
      }
  }
  return(t);
}
ATerm g_9 (ATerm a_46, ATerm b_46, ATerm t)
{
  t = SSL_copy(a_46, b_46);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL;
  u_18 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 = NULL;
        t = u_18;
        t = k_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, v_18, y_3);
        t = g_9(v_18, y_3, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_18);
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = q_25;
        {
          ATerm t_25 = t;
          int v_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_4 = NULL;
              t = u_18;
              t = k_0(t);
              j_4 = t;
              {
                ATerm x_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm k_4 = NULL;
                    k_4 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = k_4;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = k_4;
                          }
                        else
                          {
                            t = k_4;
                            if((v_18 != t))
                              {
                                _fail(t);
                              }
                            t = k_4;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_25;
                  }
                t = (ATerm) ATmakeAppl(sym__2, v_18, j_4);
                t = g_9(v_18, j_4, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, v_18);
              }
              ;
              LocalPopChoice(v_25);
            }
          else
            {
              t = t_25;
              t = u_18;
              t = k_0(t);
              if((v_18 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_18);
            }
        }
      }
  }
  return(t);
}
ATerm u_8 (ATerm j_37, ATerm k_37, ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(j_37, k_37);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      t = SSL_subtr(j_37, k_37);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
  t = term_b_26;
  {
    ATerm d_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = d_26;
        t = term_c_12;
      }
    e_19 = t;
    t = term_c_12;
    g_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_19, term_c_12);
    t = u_8(e_19, g_19, t);
    f_19 = t;
    t = SSL_int_to_string(f_19);
    d_19 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, d_19), term_b_26);
  }
  return(t);
}
ATerm v_8 (ATerm a_49, ATerm b_49, ATerm t)
{
  t = SSL_execvp(a_49, b_49);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm b_20 = NULL,e_20 = NULL,g_20 = NULL,i_20 = NULL;
  b_20 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      e_20 = ATgetArgument(t, 0);
      {
        ATerm s_4 = NULL,t_4 = NULL;
        t = SSL_int_to_string(e_20);
        s_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_26), s_4), term_h_26);
        t_4 = t;
        t = SSL_concat_strings(t_4);
      }
    }
  else
    {
      ATerm s_5 = NULL,t_5 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          e_20 = ATgetArgument(t, 0);
          g_20 = ATgetArgument(t, 1);
          i_20 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(g_20);
      s_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_20), term_m_26), s_5), term_j_26), e_20);
      t_5 = t;
      t = SSL_concat_strings(t_5);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm r_79 (ATerm), ATerm t)
{
  ATerm n_20 = NULL;
  ATerm k_1 (ATerm t)
  {
    t = r_79(t);
    if(((n_20 != NULL) && (n_20 != t)))
      _fail(t);
    else
      n_20 = t;
    return(t);
  }
  t = fetch_1_0(k_1, t);
  t = not_null(n_20);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm q_20 = NULL;
  if(((q_20 != NULL) && (q_20 != t)))
    _fail(t);
  else
    q_20 = t;
  {
    ATerm o_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm v_26 = ATgetArgument(t, 0);
              if(((q_20 != NULL) && (q_20 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                q_20 = ATgetArgument(t, 1);
              {
                ATerm w_26 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_32), term_s_32), term_o_32), term_k_32), term_h_32), term_d_32), term_w_31), term_n_31), term_k_31), term_e_31), term_x_30), term_q_30), term_e_30), term_a_30), term_t_29), term_q_29), term_m_29), term_j_29), term_g_29), term_c_29), term_y_28), term_v_28), term_p_28), term_k_28), term_b_28), term_v_27), term_k_27), term_f_27);
        t = fetch_elem_1_0(l_1, t);
        ;
        LocalPopChoice(u_26);
      }
    else
      {
        t = o_26;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(q_20));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm w_20 = NULL,d_21 = NULL;
  w_20 = t;
  {
    ATerm z_32 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_33 = ATgetArgument(t, 0);
            d_21 = ATgetArgument(t, 1);
            {
              ATerm e_33 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_33);
        {
          ATerm f_33 = t;
          int g_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_5 = NULL,b_6 = NULL,c_6 = NULL;
              t = d_21;
              {
                ATerm h_33 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_33;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                z_5 = t;
                t = term_f_23;
                b_6 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, z_5), term_i_33);
                c_6 = t;
                t = SSL_printnl(b_6, c_6);
                t = (ATerm) ATmakeAppl(sym__2, term_f_23, (ATerm) ATinsert(ATinsert(ATempty, z_5), term_i_33));
              }
              ;
              LocalPopChoice(g_33);
            }
          else
            {
              t = f_33;
              t = w_20;
            }
        }
      }
    else
      {
        t = z_32;
        t = w_20;
      }
    t = w_20;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm w_90 (ATerm), ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL;
  l_21 = t;
  t = fork_0_0(t);
  k_21 = t;
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = l_21;
        t = w_90(t);
        ;
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        t = SSL_waitpid(k_21);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_33 = ATgetArgument(t, 0);
            if(((ATgetType(l_33) != AT_INT) || (ATgetInt((ATermInt) l_33) != 0)))
              _fail(t);
            {
              ATerm n_33 = ATgetArgument(t, 1);
            }
            {
              ATerm r_33 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = l_21;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm n_21 = NULL;
  ATerm m_1 (ATerm t)
  {
    ATerm o_21 = NULL,p_21 = NULL;
    o_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_21), o_21);
    t = m_9(not_null(n_21), o_21, t);
    p_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_21, p_21);
    return(t);
  }
  if(((n_21 != NULL) && (n_21 != t)))
    _fail(t);
  else
    n_21 = t;
  t = SSL_table_keys(not_null(n_21));
  t = map_1_0(m_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm f_101 (ATerm), ATerm t)
{
  ATerm r_21 = NULL;
  r_21 = t;
  {
    ATerm s_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_21 = NULL;
        t = term_b_26;
        t = get_config_0_0(t);
        t_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_21, term_v_12);
        t = geq_0_0(t);
        t = r_21;
        t = f_101(t);
        ;
        LocalPopChoice(v_33);
      }
    else
      {
        t = s_33;
        t = r_21;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm w_21 = NULL;
  w_21 = t;
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_21 = NULL;
        t = term_b_26;
        t = get_config_0_0(t);
        y_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_21, term_y_12);
        t = geq_0_0(t);
        t = w_21;
        t = e_101(t);
        ;
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        t = w_21;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm d_22 = NULL;
  d_22 = t;
  {
    ATerm y_33 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_22 = NULL;
        t = term_b_26;
        t = get_config_0_0(t);
        f_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_22, term_t_12);
        t = geq_0_0(t);
        t = d_22;
        t = g_101(t);
        ;
        LocalPopChoice(b_34);
      }
    else
      {
        t = y_33;
        t = d_22;
      }
  }
  return(t);
}
ATerm y_8 (ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm u_33, ATerm t_33, ATerm t)
{
  t = n_83(t);
  {
    ATerm n_1 (ATerm t)
    {
      ATerm h_22 = NULL;
      h_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_33), h_22);
      t = m_83(t);
      return(t);
    }
    t = fetch_1_0(n_1, t);
    t = not_null(t_33);
  }
  return(t);
}
ATerm z_8 (ATerm j_83 (ATerm), ATerm q_33, ATerm p_33, ATerm t)
{
  ATerm x_22 (ATerm t)
  {
    ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
    s_22 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(p_33);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_22 = ATgetFirst((ATermList) t);
            u_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_34 = t;
          int e_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_22;
              {
                ATerm o_1 (ATerm t)
                {
                  t = not_null(p_33);
                  return(t);
                }
                t = y_8(j_83, o_1, not_null(t_22), not_null(u_22), t);
                t = x_22(t);
              }
              ;
              LocalPopChoice(e_34);
            }
          else
            {
              t = c_34;
              {
                ATerm h_6 = NULL,k_6 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(s_22);
                h_6 = t;
                t = u_22;
                t = x_22(t);
                k_6 = t;
                t = (ATerm) ATinsert(CheckATermList(k_6), t_22);
                z_0 = t;
                t = SSLsetAnnotations(z_0, h_6);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(q_33);
  t = x_22(t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm g_23 = NULL;
  if(match_cons(t, sym__2))
    {
      g_23 = ATgetArgument(t, 0);
      if((g_23 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm a_9 (ATerm w_39, ATerm x_39, ATerm y_39, ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL;
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_39, x_39);
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_34 = ATgetArgument(t, 0);
            ATerm k_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_39, x_39);
        t = m_9(w_39, x_39, t);
        ;
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        t = (ATerm) ATempty;
      }
    c_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_23, y_39);
    t = z_8(p_1, c_23, y_39, t);
    b_23 = t;
    t = SSL_table_put(w_39, x_39, b_23);
    t = a_23;
  }
  return(t);
}
ATerm b_9 (ATerm l_87 (ATerm), ATerm g_40, ATerm f_40, ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm h_23 = NULL,i_23 = NULL;
    if(match_cons(t, sym__2))
      {
        h_23 = ATgetArgument(t, 0);
        i_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(g_40), h_23, i_23);
    t = l_87(t);
    return(t);
  }
  t = not_null(f_40);
  t = map_1_0(t_1, t);
  return(t);
}
ATerm a_24 (ATerm q_23, ATerm t)
{
  t = SSL_fclose(q_23);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_23 = NULL,y_23 = NULL;
  y_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_23 = ATgetArgument(t, 0);
      {
        ATerm o_34 = t;
        int p_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_23);
            ;
            LocalPopChoice(p_34);
          }
        else
          {
            t = o_34;
            t = a_24(y_23, t);
          }
      }
    }
  else
    {
      t = a_24(y_23, t);
    }
  return(t);
}
ATerm c_9 (ATerm b_50, ATerm t)
{
  t = SSL_read_term_from_stream(b_50);
  return(t);
}
ATerm d_9 (ATerm s_26, ATerm t_26, ATerm t)
{
  ATerm b_24 = NULL;
  t = SSL_fopen(s_26, t_26);
  b_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_24);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_24 = NULL;
  t = SSL_stdin_stream();
  c_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_24);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_24 = NULL;
  t = SSL_stdout_stream();
  f_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_24);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_24 = NULL;
  t = SSL_stderr_stream();
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_24);
  return(t);
}
ATerm c_26 (ATerm m_24, ATerm t)
{
  ATerm n_24 = NULL;
  t = SSL_explode_term(m_24);
  if(match_cons(t, sym__2))
    {
      ATerm q_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_34 = ATgetArgument(t, 1);
        if(((ATgetType(r_34) == AT_LIST) && !(ATisEmpty(r_34))))
          {
            n_24 = ATgetFirst((ATermList) r_34);
            {
              ATerm x_34 = (ATerm) ATgetNext((ATermList) r_34);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_24;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_24;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_24;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_24;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm e_26 (ATerm q_24, ATerm r_24, ATerm s_24, ATerm t)
{
  ATerm t_24 = NULL,v_24 = NULL,w_24 = NULL,z_24 = NULL,q_1 = NULL;
  t = SSLgetAnnotations(s_24);
  w_24 = t;
  t = q_24;
  if(match_cons(t, sym_Path_1))
    {
      z_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_24, r_24);
  q_1 = t;
  t = SSLsetAnnotations(q_1, w_24);
  if(match_cons(t, sym__2))
    {
      t_24 = ATgetArgument(t, 0);
      v_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_9(t_24, v_24, t);
  return(t);
}
ATerm g_26 (ATerm d_25, ATerm e_25, ATerm f_25, ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,r_25 = NULL,r_1 = NULL;
  t = SSLgetAnnotations(f_25);
  l_25 = t;
  t = SSL_is_string(d_25);
  r_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_25, e_25);
  r_1 = t;
  t = SSLsetAnnotations(r_1, l_25);
  if(match_cons(t, sym__2))
    {
      j_25 = ATgetArgument(t, 0);
      k_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_9(j_25, k_25, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm u_25 = NULL,w_25 = NULL,a_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_34 = ATgetArgument(t, 0);
      ATerm z_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  u_25 = t;
  if(match_cons(t, sym__2))
    {
      w_25 = ATgetArgument(t, 0);
      a_26 = ATgetArgument(t, 1);
      {
        ATerm a_35 = t;
        int d_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_26(u_25, t);
            ;
            LocalPopChoice(d_35);
          }
        else
          {
            t = a_35;
            {
              ATerm e_35 = t;
              int f_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_26(w_25, a_26, u_25, t);
                  ;
                  LocalPopChoice(f_35);
                }
              else
                {
                  t = e_35;
                  t = g_26(w_25, a_26, u_25, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_26(u_25, t);
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_g_35;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_26 = NULL,p_26 = NULL,q_26 = NULL;
  ATerm h_35 = t;
  int j_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_26 = NULL;
      r_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_26, term_k_35);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_35);
    }
  else
    {
      t = h_35;
      t = debug_1_0(w_1, t);
      _fail(t);
    }
  p_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_9(q_26, t);
  n_26 = t;
  t = p_26;
  t = fclose_0_0(t);
  t = n_26;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_l_35;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_m_35;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_26 = NULL,y_26 = NULL;
      x_26 = t;
      t = (ATerm) ATinsert(ATempty, term_p_35);
      y_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_26, (ATerm) ATinsert(ATempty, term_p_35));
      t = f_9(x_26, y_26, t);
      LocalPopChoice(o_35);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_35;
      {
        ATerm t_35 = t;
        int u_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_35 = t;
            if((PushChoice() == 0))
              {
                ATerm z_26 = NULL,c_27 = NULL;
                z_26 = t;
                t = (ATerm) ATinsert(ATempty, term_x_8);
                c_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_26, (ATerm) ATinsert(ATempty, term_x_8));
                t = f_9(z_26, c_27, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_35;
              }
            t = debug_1_0(y_1, t);
            ;
            LocalPopChoice(u_35);
          }
        else
          {
            t = t_35;
            t = debug_1_0(z_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_w_35;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_y_35;
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
  w_27 = t;
  t = term_f_23;
  x_27 = t;
  t = (ATerm) ATinsert(ATempty, term_d_36);
  y_27 = t;
  t = SSL_printnl(x_27, y_27);
  t = w_27;
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm c_28 = NULL,e_28 = NULL,f_28 = NULL;
  if(match_cons(t, sym__3))
    {
      c_28 = ATgetArgument(t, 0);
      e_28 = ATgetArgument(t, 1);
      f_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_9(c_28, e_28, f_28, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  g_28 = t;
  t = term_f_23;
  h_28 = t;
  t = (ATerm) ATinsert(ATempty, term_h_36);
  i_28 = t;
  t = SSL_printnl(h_28, i_28);
  t = g_28;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm o_28 = NULL,r_28 = NULL,s_28 = NULL;
  o_28 = t;
  t = term_f_23;
  r_28 = t;
  t = (ATerm) ATinsert(ATempty, term_d_36);
  s_28 = t;
  t = SSL_printnl(r_28, s_28);
  t = o_28;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,g_27 = NULL,h_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  d_27 = t;
  t = if_verbose5_1_0(i_2, t);
  {
    ATerm j_36 = t;
    if((PushChoice() == 0))
      {
        ATerm s_27 = NULL,t_27 = NULL;
        t = term_k_36;
        s_27 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, d_27);
        t_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_36, (ATerm) ATmakeAppl(sym_Imported_1, d_27));
        t = m_9(s_27, t_27, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_36;
      }
    g_27 = t;
    t = term_k_36;
    p_27 = t;
    t = term_l_36;
    q_27 = t;
    t = (ATerm) ATinsert(ATempty, d_27);
    r_27 = t;
    t = SSL_table_put(p_27, q_27, r_27);
    t = g_27;
    t = if_verbose4_1_0(l_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(u_2, t);
    e_27 = t;
    t = term_k_36;
    o_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_k_36, e_27);
    t = b_9(w_2, o_27, e_27, t);
    t = if_verbose6_1_0(a_3, t);
    t = term_k_36;
    h_27 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, d_27);
    m_27 = t;
    t = (ATerm) ATempty;
    n_27 = t;
    t = SSL_table_put(h_27, m_27, n_27);
    t = (ATerm) ATmakeAppl(sym__3, term_k_36, (ATerm)ATmakeAppl(sym_Imported_1, d_27), (ATerm) ATempty);
    t = if_verbose4_1_0(b_3, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm m_87 (ATerm), ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
  w_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_29;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_29 = ATgetFirst((ATermList) t);
          y_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_36 = t;
        int a_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_6 = NULL,b_7 = NULL,c_7 = NULL,j_2 = NULL;
            t = SSLgetAnnotations(w_29);
            y_6 = t;
            t = x_29;
            t = m_87(t);
            b_7 = t;
            t = y_29;
            t = filter_1_0(m_87, t);
            c_7 = t;
            t = (ATerm) ATinsert(CheckATermList(c_7), b_7);
            j_2 = t;
            t = SSLsetAnnotations(j_2, y_6);
            ;
            LocalPopChoice(a_37);
          }
        else
          {
            t = m_36;
            t = y_29;
            t = filter_1_0(m_87, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm g_89 (ATerm), ATerm t)
{
  ATerm g_30 (ATerm t)
  {
    ATerm i_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_89(t);
        t = g_30(t);
        ;
        LocalPopChoice(l_37);
      }
    else
      {
        t = i_37;
      }
    return(t);
  }
  t = g_30(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm m_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_37;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_37);
    }
  else
    {
      t = m_37;
      {
        ATerm q_37 = t;
        int t_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_30 = NULL;
            t = term_u_37;
            h_30 = t;
            t = SSL_getenv(h_30);
            ;
            LocalPopChoice(t_37);
          }
        else
          {
            t = q_37;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = debug_1_0(d_3, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_x_37;
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL;
  t = term_k_36;
  m_30 = t;
  t = term_y_37;
  n_30 = t;
  t = term_a_38;
  t = m_9(m_30, n_30, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm d_38 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_38;
      }
  }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = debug_1_0(i_3, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_e_38;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm i_30 = NULL;
  t = if_verbose5_1_0(c_3, t);
  i_30 = t;
  {
    ATerm i_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_30 = NULL,k_30 = NULL;
        t = term_k_36;
        j_30 = t;
        t = term_l_36;
        k_30 = t;
        t = term_k_38;
        t = m_9(j_30, k_30, t);
        ;
        LocalPopChoice(j_38);
      }
    else
      {
        t = i_38;
        {
          ATerm l_30 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          l_30 = t;
          t = repeat_1_0(e_3, t);
          t = l_30;
        }
      }
    t = i_30;
    t = if_verbose5_1_0(g_3, t);
  }
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_l_38;
  return(t);
}
ATerm r_31 (ATerm s_30, ATerm t)
{
  ATerm u_30 = NULL,w_30 = NULL,z_30 = NULL;
  t = term_k_36;
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, s_30);
  z_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_36, (ATerm) ATmakeAppl(sym_Tool_1, s_30));
  t = m_9(w_30, z_30, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_38 = ATgetFirst((ATermList) t);
      if(match_cons(m_38, sym__2))
        {
          ATerm o_38 = ATgetArgument(m_38, 0);
          u_30 = ATgetArgument(m_38, 1);
        }
      else
        _fail(t);
      {
        ATerm n_38 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_30;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = debug_1_0(r_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_l_38;
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_k_36;
  t = table_getlist_0_0(t);
  t = debug_1_0(u_3, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm s_38 = t;
  int t_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
      t = if_verbose5_1_0(k_3, t);
      t = xtc_load_0_0(t);
      if(((c_31 != NULL) && (c_31 != t)))
        _fail(t);
      else
        c_31 = t;
      if(match_cons(t, sym__2))
        {
          a_31 = ATgetArgument(t, 0);
          b_31 = ATgetArgument(t, 1);
          {
            ATerm w_38 = t;
            int x_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_31 = NULL,h_31 = NULL,j_31 = NULL;
                t = term_k_36;
                if(((h_31 != NULL) && (h_31 != t)))
                  _fail(t);
                else
                  h_31 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_31));
                if(((j_31 != NULL) && (j_31 != t)))
                  _fail(t);
                else
                  j_31 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_k_36, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_31)));
                t = m_9(not_null(h_31), not_null(j_31), t);
                {
                  ATerm p_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((b_31 != NULL) && (b_31 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          b_31 = ATgetArgument(t, 0);
                        if(((g_31 != NULL) && (g_31 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_31 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(p_3, t);
                  t = not_null(g_31);
                }
                ;
                LocalPopChoice(x_38);
              }
            else
              {
                t = w_38;
                t = r_31(not_null(c_31), t);
              }
          }
        }
      else
        {
          t = r_31(not_null(c_31), t);
        }
      t = if_verbose5_1_0(q_3, t);
      ;
      LocalPopChoice(t_38);
    }
  else
    {
      t = s_38;
      {
        ATerm q_31 = NULL,j_7 = NULL,k_7 = NULL;
        q_31 = t;
        t = term_f_23;
        j_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_39), q_31), term_b_39);
        k_7 = t;
        t = SSL_printnl(j_7, k_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_39), q_31), term_b_39);
        t = if_verbose5_1_0(s_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm r_102 (ATerm), ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL;
  if(((u_31 != NULL) && (u_31 != t)))
    _fail(t);
  else
    u_31 = t;
  t = r_102(t);
  t = xtc_find_0_0(t);
  if(((t_31 != NULL) && (t_31 != t)))
    _fail(t);
  else
    t_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_31), not_null(u_31));
  {
    ATerm v_3 (ATerm t)
    {
      ATerm v_31 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_31), not_null(u_31));
      t = v_8(not_null(t_31), not_null(u_31), t);
      t = term_d_39;
      v_31 = t;
      t = SSL_exit(v_31);
      return(t);
    }
    t = fork_and_wait_1_0(v_3, t);
    t = not_null(u_31);
  }
  return(t);
}
ATerm at_end_1_0 (ATerm v_79 (ATerm), ATerm t)
{
  ATerm b_33 (ATerm t)
  {
    ATerm w_32 = NULL,x_32 = NULL,a_33 = NULL;
    a_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_32 = ATgetFirst((ATermList) t);
        x_32 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_7 = NULL,b_8 = NULL,f_3 = NULL;
          t = SSLgetAnnotations(a_33);
          w_7 = t;
          t = x_32;
          t = b_33(t);
          b_8 = t;
          t = (ATerm) ATinsert(CheckATermList(b_8), w_32);
          f_3 = t;
          t = SSLsetAnnotations(f_3, w_7);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_33;
        t = v_79(t);
      }
    return(t);
  }
  t = b_33(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
  x_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_31;
    }
  else
    {
      ATerm w_3 (ATerm t)
      {
        t = not_null(z_31);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((y_31 != NULL) && (y_31 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            y_31 = ATgetFirst((ATermList) t);
          if(((z_31 != NULL) && (z_31 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(y_31);
      t = at_end_1_0(w_3, t);
    }
  return(t);
}
ATerm h_34 (ATerm m_33, ATerm t)
{
  ATerm o_33 = NULL;
  t = SSL_explode_term(m_33);
  if(match_cons(t, sym__2))
    {
      ATerm g_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_39) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_33;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,d_34 = NULL;
  if(((d_34 != NULL) && (d_34 != t)))
    _fail(t);
  else
    d_34 = t;
  if(match_cons(t, sym__2))
    {
      z_33 = ATgetArgument(t, 0);
      a_34 = ATgetArgument(t, 1);
      {
        ATerm j_39 = t;
        int k_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_3 (ATerm t)
            {
              t = not_null(a_34);
              return(t);
            }
            t = not_null(z_33);
            t = at_end_1_0(x_3, t);
            ;
            LocalPopChoice(k_39);
          }
        else
          {
            t = j_39;
            t = h_34(not_null(d_34), t);
          }
      }
    }
  else
    {
      t = h_34(not_null(d_34), t);
    }
  return(t);
}
ATerm e_9 (ATerm i_87 (ATerm), ATerm r_38, ATerm p_38, ATerm t)
{
  ATerm i_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,s_34 = NULL,t_34 = NULL;
  n_34 = t;
  t = i_87(t);
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_34, r_38, p_38);
  t = n_9(i_34, r_38, p_38, t);
  {
    ATerm l_39 = t;
    int m_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_34 = NULL;
        t = term_n_39;
        u_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_34, term_n_39);
        t = m_9(i_34, u_34, t);
        ;
        LocalPopChoice(m_39);
      }
    else
      {
        t = l_39;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_34 = ATgetFirst((ATermList) t);
        m_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_n_39;
    s_34 = t;
    t = (ATerm) ATinsert(CheckATermList(m_34), (ATerm) ATinsert(CheckATermList(l_34), r_38));
    t_34 = t;
    t = SSL_table_put(i_34, s_34, t_34);
    t = n_34;
  }
  return(t);
}
ATerm debug_1_0 (ATerm p_91 (ATerm), ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,b_35 = NULL,c_35 = NULL;
  v_34 = t;
  t = p_91(t);
  w_34 = t;
  t = term_f_23;
  b_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_34), w_34);
  c_35 = t;
  t = SSL_printnl(b_35, c_35);
  t = v_34;
  return(t);
}
ATerm b_36 (ATerm i_35, ATerm t)
{
  t = i_35;
  {
    ATerm o_39 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_39 = ATgetArgument(t, 0);
            ATerm v_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_39;
      }
    t = term_z_39;
    t = debug_1_0(z_3, t);
    t = (ATerm) ATmakeAppl(sym__2, i_35, term_j_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm c_36 (ATerm q_35, ATerm r_35, ATerm s_35, ATerm t)
{
  t = SSL_open_file(q_35, r_35);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_a_40;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm x_35 = NULL,z_35 = NULL,a_36 = NULL;
  x_35 = t;
  if(match_cons(t, sym__2))
    {
      z_35 = ATgetArgument(t, 0);
      a_36 = ATgetArgument(t, 1);
      {
        ATerm b_40 = t;
        int c_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_36(x_35, t);
            ;
            LocalPopChoice(c_40);
          }
        else
          {
            t = b_40;
            t = c_36(z_35, a_36, x_35, t);
          }
      }
    }
  else
    {
      t = b_36(x_35, t);
    }
  return(t);
}
ATerm f_9 (ATerm k_26, ATerm l_26, ATerm t)
{
  t = SSL_access(k_26, l_26);
  return(t);
}
ATerm l_9 (ATerm q_45, ATerm r_45, ATerm t)
{
  t = SSL_strcat(q_45, r_45);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
  t = term_i_7;
  t = new_0_0(t);
  e_36 = t;
  t = term_d_40;
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_36, term_d_40);
  t = l_9(e_36, f_36, t);
  g_36 = t;
  {
    ATerm h_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_36 = NULL;
        t = (ATerm) ATinsert(ATempty, term_x_8);
        i_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_36, (ATerm) ATinsert(ATempty, term_x_8));
        t = f_9(g_36, i_36, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(i_40);
      }
    else
      {
        t = h_40;
        t = g_36;
      }
  }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_i_8;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL;
  t = new_file_0_0(t);
  n_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_36, term_j_9);
  t = open_file_0_0(t);
  t = term_i_7;
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_36, term_i_7);
  t = e_9(a_4, n_36, o_36, t);
  t = n_36;
  return(t);
}
ATerm xtc_generate_2_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL;
  t = term_i_7;
  t = xtc_new_file_0_0(t);
  p_36 = t;
  t = g_103(t);
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_36, (ATerm) ATinsert(ATinsert(ATempty, p_36), term_o_9));
  t = conc_0_0(t);
  t = xtc_command_1_0(f_103, t);
  t = SSL_close_file(p_36);
  t = (ATerm) ATmakeAppl(sym_FILE_1, p_36);
  return(t);
}
ATerm h_9 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL;
  s_36 = t;
  {
    ATerm j_40 = t;
    int k_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_39, f_39);
        t = m_9(e_39, f_39, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_40 = ATgetFirst((ATermList) t);
            r_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(k_40);
        t = SSL_table_put(e_39, f_39, r_36);
        t = (ATerm) ATmakeAppl(sym__3, e_39, f_39, r_36);
      }
    else
      {
        t = j_40;
        t = SSL_table_remove(e_39, f_39);
        t = (ATerm) ATmakeAppl(sym__2, e_39, f_39);
      }
    t = s_36;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL;
  if(((w_36 != NULL) && (w_36 != t)))
    _fail(t);
  else
    w_36 = t;
  t = f_87(t);
  if(((v_36 != NULL) && (v_36 != t)))
    _fail(t);
  else
    v_36 = t;
  {
    ATerm v_40 = t;
    int b_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_36 = NULL;
        t = term_n_39;
        y_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_36), term_n_39);
        t = m_9(not_null(v_36), y_36, t);
        ;
        LocalPopChoice(b_41);
      }
    else
      {
        t = v_40;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((u_36 != NULL) && (u_36 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          u_36 = ATgetFirst((ATermList) t);
        if(((t_36 != NULL) && (t_36 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          t_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_n_39;
    if(((x_36 != NULL) && (x_36 != t)))
      _fail(t);
    else
      x_36 = t;
    t = SSL_table_put(not_null(v_36), not_null(x_36), not_null(t_36));
    t = not_null(u_36);
    {
      ATerm b_4 (ATerm t)
      {
        ATerm z_36 = NULL;
        z_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_36), z_36);
        t = h_9(not_null(v_36), z_36, t);
        return(t);
      }
      t = map_1_0(b_4, t);
      t = not_null(w_36);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm t)
{
  ATerm d_41 = t;
  int g_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_78(t);
      t = d_78(t);
      ;
      LocalPopChoice(g_41);
    }
  else
    {
      t = d_41;
      t = d_78(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_87 (ATerm), ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
  c_37 = t;
  t = e_87(t);
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_37, term_n_39);
  {
    ATerm k_41 = t;
    int p_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_37 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_41 = ATgetArgument(t, 0);
            ATerm s_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_39;
        o_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_37, term_n_39);
        t = m_9(b_37, o_37, t);
        ;
        LocalPopChoice(p_41);
      }
    else
      {
        t = k_41;
        t = (ATerm) ATempty;
      }
    f_37 = t;
    t = term_n_39;
    g_37 = t;
    t = (ATerm) ATinsert(CheckATermList(f_37), (ATerm) ATempty);
    h_37 = t;
    t = SSL_table_put(b_37, g_37, h_37);
    t = c_37;
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_i_8;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm z_37 = NULL;
  z_37 = t;
  {
    ATerm t_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(z_37);
        ;
        LocalPopChoice(y_41);
      }
    else
      {
        t = t_41;
        t = z_37;
      }
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_i_8;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_102 (ATerm), ATerm t)
{
  ATerm r_37 = NULL;
  ATerm d_4 (ATerm t)
  {
    ATerm s_37 = NULL;
    s_37 = t;
    {
      ATerm z_41 = t;
      int a_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_37 = NULL,w_37 = NULL;
          t = term_i_8;
          v_37 = t;
          t = term_n_39;
          w_37 = t;
          t = term_c_42;
          t = m_9(v_37, w_37, t);
          ;
          LocalPopChoice(a_42);
        }
      else
        {
          t = z_41;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((r_37 != NULL) && (r_37 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            r_37 = ATgetFirst((ATermList) t);
          {
            ATerm d_42 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(r_37);
      t = map_1_0(e_4, t);
      t = s_37;
      t = end_scope_1_0(f_4, t);
    }
    return(t);
  }
  t = begin_scope_1_0(c_4, t);
  t = restore_always_2_0(d_102, d_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,u_38 = NULL,v_38 = NULL;
  f_38 = t;
  t = term_i_7;
  t = whoami_0_0(t);
  g_38 = t;
  t = term_f_23;
  u_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_42), g_38), term_e_42);
  v_38 = t;
  t = SSL_printnl(u_38, v_38);
  t = term_c_12;
  h_38 = t;
  t = SSL_exit(h_38);
  t = f_38;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,p_39 = NULL,q_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_39 = NULL,s_39 = NULL,u_39 = NULL;
      t = term_i_7;
      t = j_0(t);
      r_39 = t;
      t = term_g_42;
      s_39 = t;
      t = term_i_42;
      u_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_42, term_i_42, r_39);
      t = n_9(s_39, u_39, r_39, t);
      _fail(t);
    }
  else
    {
      ATerm e_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_39 = ATgetFirst((ATermList) t);
          i_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_39;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_39 = ATgetFirst((ATermList) t);
          q_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_39;
      t = h_0(t);
      t = p_39;
      t = i_0(t);
      e_40 = t;
      t = (ATerm) ATinsert(CheckATermList(q_39), e_40);
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm l_40 = NULL;
  l_40 = t;
  if(match_string(t, "-k"))
    {
      t = l_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_40;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  m_40 = t;
  t = SSL_string_to_int(m_40);
  n_40 = t;
  t = term_j_42;
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_42, n_40);
  t = p_9(o_40, n_40, t);
  t = m_40;
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_m_42;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, h_4, l_4, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm s_40 = NULL;
  s_40 = t;
  if(match_string(t, "-S"))
    {
      t = s_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_40;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL;
  t = term_b_26;
  t_40 = t;
  t = term_i_12;
  u_40 = t;
  t = term_n_42;
  t = p_9(t_40, u_40, t);
  t = term_o_42;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_p_42;
  return(t);
}
ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
  w_40 = t;
  t = SSL_string_to_int(w_40);
  x_40 = t;
  t = term_b_26;
  y_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_26, x_40);
  t = p_9(y_40, x_40, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_40);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_r_42;
  return(t);
}
ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL;
  t = term_s_42;
  z_40 = t;
  t = term_i_7;
  a_41 = t;
  t = term_t_42;
  t = p_9(z_40, a_41, t);
  t = term_u_42;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_v_42;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_42 = t;
  int y_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_4, n_4, p_4, t);
      ;
      LocalPopChoice(y_42);
    }
  else
    {
      t = x_42;
      {
        ATerm z_42 = t;
        int a_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_4, u_4, v_4, t);
            ;
            LocalPopChoice(a_43);
          }
        else
          {
            t = z_42;
            t = Option_3_0(w_4, d_5, l_5, t);
          }
      }
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm c_41 = NULL;
  c_41 = t;
  if(match_string(t, "-o"))
    {
      t = c_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_41;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL;
  e_41 = t;
  t = term_o_9;
  f_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_9, e_41);
  t = p_9(f_41, e_41, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_41);
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_b_43;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, n_5, o_5, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm h_41 = NULL;
  h_41 = t;
  if(match_string(t, "-i"))
    {
      t = h_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_41;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL;
  i_41 = t;
  t = term_q_9;
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_9, i_41);
  t = p_9(j_41, i_41, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_41);
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_c_43;
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
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
  l_41 = t;
  t = term_d_43;
  m_41 = t;
  t = term_e_43;
  n_41 = t;
  t = term_f_43;
  t = p_9(m_41, n_41, t);
  t = l_41;
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_g_43;
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm o_41 = NULL;
  o_41 = t;
  if(match_string(t, "-t"))
    {
      t = o_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--title", 0, ATtrue)))
        _fail(t);
      t = o_41;
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm r_41 = NULL,u_41 = NULL;
  r_41 = t;
  t = term_e_23;
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_23, r_41);
  t = p_9(u_41, r_41, t);
  t = r_41;
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_h_43;
  return(t);
}
ATerm abox2html_options_0_0 (ATerm t)
{
  ATerm l_43 = t;
  int m_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(m_43);
    }
  else
    {
      t = l_43;
      {
        ATerm n_43 = t;
        int o_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(o_43);
          }
        else
          {
            t = n_43;
            {
              ATerm s_43 = t;
              int t_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  ;
                  LocalPopChoice(t_43);
                }
              else
                {
                  t = s_43;
                  {
                    ATerm u_43 = t;
                    int w_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        ;
                        LocalPopChoice(w_43);
                      }
                    else
                      {
                        t = u_43;
                        {
                          ATerm y_43 = t;
                          int e_44 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(u_5, v_5, w_5, t);
                              ;
                              LocalPopChoice(e_44);
                            }
                          else
                            {
                              t = y_43;
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
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,b_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_7;
  t = whoami_0_0(t);
  v_41 = t;
  t = term_f_23;
  x_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_44), v_41);
  b_42 = t;
  t = SSL_printnl(x_41, b_42);
  t = term_c_12;
  w_41 = t;
  t = SSL_exit(w_41);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_44;
  t = get_config_0_0(t);
  return(t);
}
ATerm i_9 (ATerm d_37, ATerm e_37, ATerm t)
{
  ATerm k_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_37, e_37);
      ;
      LocalPopChoice(l_44);
    }
  else
    {
      t = k_44;
      t = SSL_addr(d_37, e_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm t)
{
  ATerm h_42 = NULL,k_42 = NULL,l_42 = NULL;
  h_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_42;
      t = x_85(t);
    }
  else
    {
      ATerm q_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_42 = ATgetFirst((ATermList) t);
          l_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_42;
      t = foldr_2_0(x_85, y_85, t);
      q_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_42, q_42);
      t = y_85(t);
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
  t = term_i_12;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm e_10 = NULL,g_10 = NULL;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_9(e_10, g_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_42 = NULL,u_9 = NULL,w_9 = NULL;
  t = times_0_0(t);
  w_9 = t;
  t = SSL_explode_term(w_9);
  if(match_cons(t, sym__2))
    {
      ATerm m_44 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_9;
  t = foldr_2_0(d_6, e_6, t);
  w_42 = t;
  t = SSL_TicksToSeconds(w_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
  p_43 = t;
  if(match_cons(t, sym__2))
    {
      q_43 = ATgetArgument(t, 0);
      r_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_44 = t;
    int o_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_43;
        if((q_43 != t))
          {
            _fail(t);
          }
        t = p_43;
        ;
        LocalPopChoice(o_44);
      }
    else
      {
        t = n_44;
        t = (ATerm) ATmakeAppl(sym__2, q_43, r_43);
        {
          ATerm r_44 = t;
          int s_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_43, r_43);
              ;
              LocalPopChoice(s_44);
            }
          else
            {
              t = r_44;
              t = SSL_gtr(q_43, r_43);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_43, r_43);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_101 (ATerm), ATerm t)
{
  ATerm v_43 = NULL;
  v_43 = t;
  {
    ATerm t_44 = t;
    int u_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_43 = NULL;
        t = term_b_26;
        t = get_config_0_0(t);
        x_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_43, term_c_12);
        t = geq_0_0(t);
        t = v_43;
        t = b_101(t);
        ;
        LocalPopChoice(u_44);
      }
    else
      {
        t = t_44;
        t = v_43;
      }
  }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,f_44 = NULL,g_44 = NULL;
  t = run_time_0_0(t);
  c_44 = t;
  t = term_i_7;
  t = whoami_0_0(t);
  d_44 = t;
  t = term_f_23;
  f_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_44), c_44), term_j_26), d_44);
  g_44 = t;
  t = SSL_printnl(f_44, g_44);
  t = (ATerm) ATmakeAppl(sym__2, term_f_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_44), c_44), term_j_26), d_44));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_12;
  h_44 = t;
  t = SSL_exit(h_44);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL;
  q_44 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_44;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_44 = ATgetArgument(t, 0);
          {
            ATerm j_11 = NULL,h_3 = NULL;
            t = SSLgetAnnotations(q_44);
            j_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_44);
            h_3 = t;
            t = SSLsetAnnotations(h_3, j_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_44;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_73 (ATerm), ATerm t)
{
  ATerm w_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_44;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_44);
    }
  else
    {
      t = w_44;
      t = fetch_1_0(g_6, t);
    }
  t = v_73(t);
  return(t);
}
ATerm map_1_0 (ATerm f_79 (ATerm), ATerm t)
{
  ATerm g_45 (ATerm t)
  {
    ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
    d_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_45;
      }
    else
      {
        ATerm r_11 = NULL,u_11 = NULL,v_11 = NULL,j_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_45 = ATgetFirst((ATermList) t);
            f_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_45);
        r_11 = t;
        t = e_45;
        t = f_79(t);
        u_11 = t;
        t = f_45;
        t = g_45(t);
        v_11 = t;
        t = (ATerm) ATinsert(CheckATermList(v_11), u_11);
        j_3 = t;
        t = SSLsetAnnotations(j_3, r_11);
      }
    return(t);
  }
  t = g_45(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_45 = ATgetFirst((ATermList) t);
      k_45 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_45 = NULL,p_45 = NULL;
        ATerm i_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_45)), not_null(p_45));
          return(t);
        }
        t = not_null(k_45);
        t = g_0(t);
        if(((o_45 != NULL) && (o_45 != t)))
          _fail(t);
        else
          o_45 = t;
        t = not_null(j_45);
        t = e_0(t);
        if(((p_45 != NULL) && (p_45 != t)))
          _fail(t);
        else
          p_45 = t;
        t = not_null(k_45);
        t = reverse_acc_2_0(e_0, i_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_7;
      t = g_0(t);
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,l_3 = NULL;
  x_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_45);
  v_45 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_45);
  l_3 = t;
  t = SSLsetAnnotations(l_3, v_45);
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm z_45 = NULL;
  z_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_45), term_z_44);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL;
  ATerm a_45 = t;
  int b_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_44;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_45);
    }
  else
    {
      t = a_45;
      t = fetch_1_0(j_6, t);
    }
  t = term_c_45;
  t = echo_0_0(t);
  t = term_g_42;
  t_45 = t;
  t = term_i_42;
  u_45 = t;
  t = term_h_45;
  t = m_9(t_45, u_45, t);
  t = reverse_acc_2_0(_id, l_6, t);
  t = map_1_0(m_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm p_79 (ATerm), ATerm t)
{
  ATerm a_47 (ATerm t)
  {
    ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
    x_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_46 = ATgetFirst((ATermList) t);
        z_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_45 = t;
      int l_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_12 = NULL,k_12 = NULL,t_3 = NULL;
          t = SSLgetAnnotations(x_46);
          d_12 = t;
          t = y_46;
          t = p_79(t);
          k_12 = t;
          t = (ATerm) ATinsert(CheckATermList(z_46), k_12);
          t_3 = t;
          t = SSLsetAnnotations(t_3, d_12);
          ;
          LocalPopChoice(l_45);
        }
      else
        {
          t = i_45;
          {
            ATerm u_12 = NULL,d_13 = NULL,z_9 = NULL;
            t = SSLgetAnnotations(x_46);
            u_12 = t;
            t = z_46;
            t = a_47(t);
            d_13 = t;
            t = (ATerm) ATinsert(CheckATermList(d_13), y_46);
            z_9 = t;
            t = SSLsetAnnotations(z_9, u_12);
          }
        }
    }
    return(t);
  }
  t = a_47(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
  e_47 = t;
  {
    ATerm m_45 = t;
    int n_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_47;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_45 = ATgetFirst((ATermList) t);
                ATerm y_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_47;
          }
        ;
        LocalPopChoice(n_45);
      }
    else
      {
        t = m_45;
        t = (ATerm) ATinsert(ATempty, e_47);
      }
    f_47 = t;
    t = term_h_24;
    g_47 = t;
    t = SSL_printnl(g_47, f_47);
    t = e_47;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_44;
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
  ATerm k_47 = NULL,l_47 = NULL;
  t = term_e_46;
  k_47 = t;
  t = term_i_7;
  l_47 = t;
  t = term_f_46;
  t = p_9(k_47, l_47, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_g_46;
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
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL;
  t = term_e_46;
  o_47 = t;
  t = term_i_7;
  p_47 = t;
  t = term_f_46;
  t = p_9(o_47, p_47, t);
  t = term_h_46;
  m_47 = t;
  t = term_i_7;
  n_47 = t;
  t = term_i_46;
  t = p_9(m_47, n_47, t);
  t = term_j_46;
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = term_k_46;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_46 = t;
  int m_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_6, o_6, p_6, t);
      ;
      LocalPopChoice(m_46);
    }
  else
    {
      t = l_46;
      t = Option_3_0(q_6, r_6, s_6, t);
    }
  return(t);
}
ATerm p_9 (ATerm n_56, ATerm o_56, ATerm t)
{
  ATerm q_47 = NULL;
  t = term_n_25;
  q_47 = t;
  t = SSL_table_put(q_47, n_56, o_56);
  t = (ATerm) ATmakeAppl(sym__3, term_n_25, n_56, o_56);
  return(t);
}
ATerm m_9 (ATerm q_40, ATerm r_40, ATerm t)
{
  t = SSL_table_get(q_40, r_40);
  return(t);
}
ATerm n_9 (ATerm z_38, ATerm a_39, ATerm y_38, ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL;
  s_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_38, a_39);
  {
    ATerm n_46 = t;
    int o_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_46 = ATgetArgument(t, 0);
            ATerm q_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_38, a_39);
        t = m_9(z_38, a_39, t);
        ;
        LocalPopChoice(o_46);
      }
    else
      {
        t = n_46;
        t = (ATerm) ATempty;
      }
    t_47 = t;
    t = (ATerm) ATinsert(CheckATermList(t_47), y_38);
    u_47 = t;
    t = SSL_table_put(z_38, a_39, u_47);
    t = s_47;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL;
      t = term_i_7;
      t = d_0(t);
      c_48 = t;
      t = term_g_42;
      d_48 = t;
      t = term_i_42;
      e_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_42, term_i_42, c_48);
      t = n_9(d_48, e_48, c_48, t);
      _fail(t);
    }
  else
    {
      ATerm h_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_48 = ATgetFirst((ATermList) t);
          b_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_48;
      t = a_0(t);
      t = term_i_7;
      t = c_0(t);
      h_48 = t;
      t = (ATerm) ATinsert(CheckATermList(b_48), h_48);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_66 (ATerm), ATerm y_66 (ATerm), ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,g_15 = NULL;
  n_48 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_48 = ATgetFirst((ATermList) t);
      k_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_48);
  i_48 = t;
  t = j_48;
  t = x_66(t);
  l_48 = t;
  t = k_48;
  t = y_66(t);
  m_48 = t;
  t = (ATerm) ATinsert(CheckATermList(m_48), l_48);
  g_15 = t;
  t = SSLsetAnnotations(g_15, i_48);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_93 (ATerm), ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,x_48 = NULL,y_48 = NULL,j_15 = NULL;
  if(((s_48 != NULL) && (s_48 != t)))
    _fail(t);
  else
    s_48 = t;
  {
    ATerm r_46 = t;
    int s_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_46;
        t = y_93(t);
        ;
        LocalPopChoice(s_46);
      }
    else
      {
        t = r_46;
      }
    t = not_null(s_48);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((u_48 != NULL) && (u_48 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          u_48 = ATgetFirst((ATermList) t);
        if(((v_48 != NULL) && (v_48 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          v_48 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(s_48));
    if(((t_48 != NULL) && (t_48 != t)))
      _fail(t);
    else
      t_48 = t;
    t = term_j_44;
    if(((y_48 != NULL) && (y_48 != t)))
      _fail(t);
    else
      y_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_44, not_null(u_48));
    t = p_9(not_null(y_48), not_null(u_48), t);
    t = not_null(v_48);
    {
      ATerm p_49 (ATerm t)
      {
        ATerm u_46 = t;
        int v_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_46 = t;
            int b_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_49 = NULL;
                e_49 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_49;
                ;
                LocalPopChoice(b_47);
              }
            else
              {
                t = w_46;
                t = y_93(t);
                t = Cons_2_0(_id, p_49, t);
              }
            ;
            LocalPopChoice(v_46);
          }
        else
          {
            t = u_46;
            {
              ATerm l_49 = NULL,m_49 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_49 = ATgetFirst((ATermList) t);
                  m_49 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_49), (ATerm) ATmakeAppl(sym_Undefined_1, l_49));
            }
          }
        return(t);
      }
      t = p_49(t);
      if(((x_48 != NULL) && (x_48 != t)))
        _fail(t);
      else
        x_48 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(x_48)), (ATerm) ATmakeAppl(sym_Program_1, not_null(u_48)));
      if(((j_15 != NULL) && (j_15 != t)))
        _fail(t);
      else
        j_15 = t;
      t = SSLsetAnnotations(not_null(j_15), not_null(t_48));
    }
  }
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm g_50 = NULL;
  g_50 = t;
  if(match_string(t, "--help"))
    {
      t = g_50;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_50;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_50;
        }
    }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL;
  t = term_y_44;
  h_50 = t;
  t = term_i_7;
  i_50 = t;
  t = term_c_47;
  t = p_9(h_50, i_50, t);
  t = term_d_47;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_h_47;
  return(t);
}
ATerm x_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm u_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,e_50 = NULL,f_50 = NULL;
  if(((y_49 != NULL) && (y_49 != t)))
    _fail(t);
  else
    y_49 = t;
  t = term_g_42;
  if(((a_50 != NULL) && (a_50 != t)))
    _fail(t);
  else
    a_50 = t;
  t = term_i_42;
  if(((e_50 != NULL) && (e_50 != t)))
    _fail(t);
  else
    e_50 = t;
  t = (ATerm) ATempty;
  if(((f_50 != NULL) && (f_50 != t)))
    _fail(t);
  else
    f_50 = t;
  t = SSL_table_put(not_null(a_50), not_null(e_50), not_null(f_50));
  t = not_null(y_49);
  {
    ATerm t_6 (ATerm t)
    {
      ATerm i_47 = t;
      int j_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_93(t);
          ;
          LocalPopChoice(j_47);
        }
      else
        {
          t = i_47;
          {
            ATerm r_47 = t;
            int v_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_6, v_6, w_6, t);
                ;
                LocalPopChoice(v_47);
              }
            else
              {
                t = r_47;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_6, t);
    {
      ATerm w_47 = t;
      int x_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_50 = NULL;
          p_50 = t;
          {
            ATerm y_47 = t;
            int z_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_13 = NULL;
                t = p_50;
                {
                  ATerm f_48 = t;
                  int g_48 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_y_44;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(g_48);
                    }
                  else
                    {
                      t = f_48;
                      t = fetch_1_0(x_6, t);
                    }
                  t = p_50;
                  t = default_system_usage_0_0(t);
                  t = term_i_12;
                  s_13 = t;
                  t = SSL_exit(s_13);
                }
                ;
                LocalPopChoice(z_47);
              }
            else
              {
                t = y_47;
                {
                  ATerm w_13 = NULL;
                  t = term_e_46;
                  t = get_config_0_0(t);
                  t = p_50;
                  t = default_system_about_0_0(t);
                  t = term_i_12;
                  w_13 = t;
                  t = SSL_exit(w_13);
                }
              }
          }
          ;
          LocalPopChoice(x_47);
        }
      else
        {
          t = w_47;
          {
            ATerm o_48 = t;
            int p_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL;
                ATerm z_6 (ATerm t)
                {
                  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL,h_16 = NULL;
                  v_50 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      u_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_50);
                  t_50 = t;
                  t = u_50;
                  if(((u_49 != NULL) && (u_49 != t)))
                    _fail(t);
                  else
                    u_49 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_50);
                  h_16 = t;
                  t = SSLsetAnnotations(h_16, t_50);
                  return(t);
                }
                t = fetch_1_0(z_6, t);
                t = term_f_23;
                if(((r_50 != NULL) && (r_50 != t)))
                  _fail(t);
                else
                  r_50 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_49)), term_q_48);
                if(((s_50 != NULL) && (s_50 != t)))
                  _fail(t);
                else
                  s_50 = t;
                t = SSL_printnl(not_null(r_50), not_null(s_50));
                t = (ATerm) ATmakeAppl(sym__2, term_f_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_49)), term_q_48));
                t = default_system_usage_0_0(t);
                t = term_c_12;
                if(((q_50 != NULL) && (q_50 != t)))
                  _fail(t);
                else
                  q_50 = t;
                t = SSL_exit(not_null(q_50));
                ;
                LocalPopChoice(p_48);
              }
            else
              {
                t = o_48;
              }
          }
        }
      if(((x_49 != NULL) && (x_49 != t)))
        _fail(t);
      else
        x_49 = t;
      t = term_g_42;
      if(((z_49 != NULL) && (z_49 != t)))
        _fail(t);
      else
        z_49 = t;
      t = SSL_table_destroy(not_null(z_49));
      t = not_null(x_49);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL;
  t = parse_options_1_0(x_73, t);
  f_51 = t;
  t = term_r_48;
  i_51 = t;
  t = SSL_table_create(i_51);
  t = term_r_48;
  g_51 = t;
  t = term_w_48;
  h_51 = t;
  t = SSL_table_put(g_51, h_51, f_51);
  t = f_51;
  t = z_73(t);
  {
    ATerm z_48 = t;
    int c_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_73, t);
        ;
        LocalPopChoice(c_49);
      }
    else
      {
        t = z_48;
        {
          ATerm d_49 = t;
          int f_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_74(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_49);
            }
          else
            {
              t = d_49;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm g_49 = t;
  int h_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_51 = NULL;
      o_51 = t;
      t = term_d_43;
      t = get_config_0_0(t);
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("gen-css", 0, ATtrue)))
        _fail(t);
      t = o_51;
      t = xtc_temp_files_1_0(d_7, t);
      ;
      LocalPopChoice(h_49);
    }
  else
    {
      t = g_49;
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
  t = term_i_49;
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm j_49 = t;
  int k_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_9;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_49);
    }
  else
    {
      t = j_49;
      t = term_h_24;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2html_options_0_0, default_usage_0_0, _id, a_7, t);
  return(t);
}
