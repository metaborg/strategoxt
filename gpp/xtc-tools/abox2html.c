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
ATerm term_t_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_k_49;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_o_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_o_47;
ATerm term_l_47;
ATerm term_e_47;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_p_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_a_45;
ATerm term_i_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_w_43;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_f_42;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_q_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_d_41;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_s_39;
ATerm term_p_39;
ATerm term_l_39;
ATerm term_j_39;
ATerm term_g_39;
ATerm term_s_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_e_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_u_34;
ATerm term_s_34;
ATerm term_q_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_g_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_s_33;
ATerm term_n_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_j_32;
ATerm term_g_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_t_31;
ATerm term_q_31;
ATerm term_n_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_f_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_z_30;
ATerm term_x_30;
ATerm term_u_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_i_30;
ATerm term_d_30;
ATerm term_z_29;
ATerm term_x_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_c_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_v_28;
ATerm term_a_28;
ATerm term_m_27;
ATerm term_f_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_u_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_d_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_t_24;
ATerm term_q_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_c_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_u_23;
ATerm term_s_23;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_k_17;
ATerm term_e_17;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_n_12;
ATerm term_e_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_v_7;
void init_constant_terms (void)
{
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Dec", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Nov", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Oct", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Sep", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Aug", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jul", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jun", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("May", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Apr", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Mar", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Feb", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jan", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("December", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("November", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("October", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("September", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("August", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("July", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("June", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("April", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("March", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("February", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("January", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Sat", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Fri", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Thu", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Wed", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Tue", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Mon", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Sun", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Saturday", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Friday", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Thursday", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Wednesday", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuesday", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Monday", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Sunday", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(100);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("p.m.", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("a.m.", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Saturday_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Friday_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Thursday_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Wednesday_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Tuesday_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Monday_0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_Sunday_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_December_0);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_November_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_October_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_September_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_August_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_July_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_June_0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_May_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_April_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_March_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_February_0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_January_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("EEEE", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("d", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("MMMM", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("yyyy", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("HH", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("mm", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ss", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--title", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no title specified for HTML document", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("<!-- \n", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   This file is generated at ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" \n", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   by abox2html (C) 2001 Merijn de Jonge (mdejonge@cwi.nl)\n", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-->\n", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("<!doctype html public \"-//W3C//DTD WWW HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/loose.dtd\"> \n", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<html>\n", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  <head>\n", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("    <title>", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("</title>\n", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("    <link rel=\"stylesheet\" type=\"text/css\" href=\"boxstyle.css\">\n", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  </head>\n", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  <body>\n", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("  </body>\n", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("</html>\n", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-html", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_29, term_e_12, term_h_29);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_29, term_f_13, term_m_29);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_29, term_e_13, term_x_29);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_30, term_b_13, term_i_30);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_30, term_w_12, term_r_30);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_30, term_x_30, term_z_30);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_31, term_d_31, term_f_31);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_31, term_a_13, term_n_31);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_31, term_v_31, term_w_31);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_31, term_b_32, term_c_32);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_32, term_z_12, term_g_32);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_32, term_d_13, term_m_32);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_32, term_q_32, term_r_32);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_32, term_t_12, term_u_32);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_32, term_y_32, term_z_32);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_33, term_d_33, term_e_33);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_33, term_k_33, term_n_33);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_33, term_w_33, term_x_33);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_34, term_v_13, term_d_34);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_34, term_u_12, term_k_34);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_34, term_u_13, term_q_34);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_34, term_x_34, term_y_34);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_35, term_e_35, term_g_35);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_35, term_k_35, term_l_35);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_35, term_c_13, term_p_35);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_35, term_v_35, term_w_35);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_35, term_a_36, term_b_36);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_36, term_e_36, term_f_36);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym__2, term_s_40, term_n_41);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym__2, term_s_40, term_t_40);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym__2, term_t_9, term_w_43);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(sym__2, term_v_28, term_n_12);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_12);
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym__2, term_m_45, term_v_7);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym__2, term_y_45, term_z_45);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Only generate cascading style sheet", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-t title    Title of HTML document", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym__2, term_e_45, term_f_45);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym__2, term_z_47, term_v_7);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym__2, term_c_48, term_v_7);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(sym__2, term_l_47, term_v_7);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css-boxstyle", 0, ATtrue));
}
ATerm xtc_close_fd_0_0 (ATerm);
ATerm j_8 (ATerm c_46, ATerm d_46, ATerm);
ATerm File_as_fd_1_0 (ATerm w_101 (ATerm), ATerm);
ATerm STDERR__FILENO_0_0 (ATerm);
ATerm STDOUT__FILENO_0_0 (ATerm);
ATerm STDIN__FILENO_0_0 (ATerm);
ATerm xtc_open_fd_0_0 (ATerm);
ATerm x_0 (ATerm);
ATerm xtc_new_file_name_0_0 (ATerm);
ATerm xtc_cat_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm l_8 (ATerm v_49, ATerm w_49, ATerm);
ATerm m_8 (ATerm r_91 (ATerm), ATerm k_440, ATerm d_50, ATerm);
ATerm c_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm r_72 (ATerm), ATerm);
ATerm month2abbr_0_0 (ATerm);
ATerm month2text_0_0 (ATerm);
ATerm lt_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm day_of_week2abbr_0_0 (ATerm);
ATerm day_of_week2text_0_0 (ATerm);
ATerm while_not_2_0 (ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm);
ATerm for_3_0 (ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm copy_char_0_0 (ATerm);
ATerm o_8 (ATerm b_44, ATerm z_43, ATerm a_44, ATerm);
ATerm p_8 (ATerm i_43, ATerm j_43, ATerm k_43, ATerm);
ATerm q_8 (ATerm b_38, ATerm c_38, ATerm);
ATerm month2index_0_0 (ATerm);
ATerm date_pattern_to_int_0_0 (ATerm);
ATerm x_13 (ATerm c_12, ATerm d_12, ATerm);
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
ATerm l_1 (ATerm);
ATerm xtc_io_1_0 (ATerm e_102 (ATerm), ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm abox2html_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
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
ATerm l_2 (ATerm);
ATerm a_9 (ATerm w_39, ATerm x_39, ATerm y_39, ATerm);
ATerm b_9 (ATerm l_87 (ATerm), ATerm g_40, ATerm f_40, ATerm);
ATerm i_21 (ATerm c_21, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_9 (ATerm b_50, ATerm);
ATerm d_9 (ATerm s_26, ATerm t_26, ATerm);
ATerm _2_0 (ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm m_87 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm g_89 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm c_26 (ATerm p_24, ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm r_102 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm v_79 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm p_27 (ATerm e_27, ATerm);
ATerm conc_0_0 (ATerm);
ATerm e_9 (ATerm i_87 (ATerm), ATerm r_38, ATerm p_38, ATerm);
ATerm debug_1_0 (ATerm p_91 (ATerm), ATerm);
ATerm s_29 (ATerm b_29, ATerm);
ATerm t_29 (ATerm f_29, ATerm j_29, ATerm k_29, ATerm);
ATerm f_4 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm f_9 (ATerm k_26, ATerm l_26, ATerm);
ATerm l_9 (ATerm q_45, ATerm r_45, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm g_4 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_generate_2_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm);
ATerm h_9 (ATerm e_39, ATerm f_39, ATerm);
ATerm end_scope_1_0 (ATerm f_87 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm e_87 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm d_102 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm s_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm g_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm x_5 (ATerm);
ATerm e_6 (ATerm);
ATerm abox2html_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm i_9 (ATerm d_37, ATerm e_37, ATerm);
ATerm foldr_2_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_6 (ATerm);
ATerm k_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_101 (ATerm), ATerm);
ATerm l_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm need_help_1_0 (ATerm v_73 (ATerm), ATerm);
ATerm map_1_0 (ATerm f_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm w_71 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm x_71 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm p_79 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm p_9 (ATerm n_56, ATerm o_56, ATerm);
ATerm m_9 (ATerm q_40, ATerm r_40, ATerm);
ATerm n_9 (ATerm z_38, ATerm a_39, ATerm y_38, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm x_66 (ATerm), ATerm y_66 (ATerm), ATerm);
ATerm e_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm y_93 (ATerm), ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm parse_options_1_0 (ATerm x_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm xtc_close_fd_0_0 (ATerm t)
{
  ATerm z_0 = NULL;
  z_0 = t;
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 = NULL;
        t = term_v_7;
        t = STDIN__FILENO_0_0(t);
        b_1 = t;
        if((z_0 != t))
          {
            _fail(t);
          }
        t = b_1;
        ;
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        {
          ATerm w_7 = t;
          int x_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_1 = NULL;
              t = term_v_7;
              t = STDOUT__FILENO_0_0(t);
              g_1 = t;
              if((z_0 != t))
                {
                  _fail(t);
                }
              t = g_1;
              ;
              LocalPopChoice(x_7);
            }
          else
            {
              t = w_7;
              {
                ATerm y_7 = t;
                int z_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_1 = NULL;
                    t = term_v_7;
                    t = STDERR__FILENO_0_0(t);
                    j_1 = t;
                    if((z_0 != t))
                      {
                        _fail(t);
                      }
                    t = j_1;
                    ;
                    LocalPopChoice(z_7);
                  }
                else
                  {
                    t = y_7;
                    t = SSL_close(z_0);
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
  ATerm m_1 = NULL;
  t = xtc_open_fd_0_0(t);
  m_1 = t;
  {
    ATerm a_8 = t;
    int b_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_101(t);
        LocalPopChoice(b_8);
        {
          ATerm n_1 = NULL;
          n_1 = t;
          {
            ATerm c_8 = t;
            int f_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = m_1;
                t = xtc_close_fd_0_0(t);
                ;
                LocalPopChoice(f_8);
              }
            else
              {
                t = c_8;
              }
            t = n_1;
          }
        }
      }
    else
      {
        t = a_8;
        {
          ATerm h_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_1;
              t = xtc_close_fd_0_0(t);
              ;
              LocalPopChoice(i_8);
            }
          else
            {
              t = h_8;
            }
          t = m_1;
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
  ATerm v_1 = NULL,z_1 = NULL;
  z_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_1 = ATgetArgument(t, 0);
      t = SSL_open(v_1);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          t = term_v_7;
          t = STDIN__FILENO_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_stdout_0))
            {
              t = term_v_7;
              t = STDOUT__FILENO_0_0(t);
            }
          else
            {
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
              t = term_v_7;
              t = STDERR__FILENO_0_0(t);
            }
        }
    }
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm xtc_new_file_name_0_0 (ATerm t)
{
  ATerm d_2 = NULL,f_2 = NULL;
  t = new_file_0_0(t);
  d_2 = t;
  t = term_v_7;
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_2, term_v_7);
  t = e_9(x_0, d_2, f_2, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, d_2);
  return(t);
}
ATerm xtc_cat_0_0 (ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL;
  g_2 = t;
  t = xtc_new_file_name_0_0(t);
  h_2 = t;
  t = xtc_open_fd_0_0(t);
  i_2 = t;
  t = g_2;
  {
    ATerm y_0 (ATerm t)
    {
      ATerm a_1 (ATerm t)
      {
        ATerm j_2 = NULL;
        j_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_2, i_2);
        t = j_8(j_2, i_2, t);
        return(t);
      }
      t = File_as_fd_1_0(a_1, t);
      return(t);
    }
    t = map_1_0(y_0, t);
    t = i_2;
    t = xtc_close_fd_0_0(t);
    t = h_2;
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm p_2 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_u_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm r_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_v_9);
      r_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_2, (ATerm) ATinsert(ATempty, term_v_9));
      t = f_9(p_2, r_2, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm l_8 (ATerm v_49, ATerm w_49, ATerm t)
{
  ATerm s_2 = NULL;
  t = SSL_write_term_to_stream_baf(v_49, w_49);
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_2);
  return(t);
}
ATerm m_8 (ATerm r_91 (ATerm), ATerm k_440, ATerm d_50, ATerm t)
{
  ATerm t_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_440, term_w_9);
  t = open_stream_0_0(t);
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_2, d_50);
  t = r_91(t);
  t = fclose_0_0(t);
  t = d_50;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm z_2 = NULL,c_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      if(match_cons(x_9, sym_Stream_1))
        {
          z_2 = ATgetArgument(x_9, 0);
        }
      else
        _fail(t);
      c_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_8(z_2, c_3, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm u_2 = NULL,x_2 = NULL;
  u_2 = t;
  t = xtc_new_file_0_0(t);
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_2, u_2);
  t = m_8(c_1, x_2, u_2, t);
  t = SSL_close_file(x_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, x_2);
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
  ATerm a_4 = NULL,e_4 = NULL;
  a_4 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_0 = NULL,w_0 = NULL;
      t = a_4;
      t = xtc_new_file_0_0(t);
      v_0 = t;
      t = m_0(t);
      w_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_0, (ATerm) ATinsert(ATinsert(ATempty, v_0), term_y_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(v_0);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_0);
    }
  else
    {
      ATerm k_1 = NULL,o_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          e_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_4;
      t = xtc_new_file_0_0(t);
      k_1 = t;
      t = m_0(t);
      o_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_1), term_y_9), e_4), term_z_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(k_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm r_72 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,x_4 = NULL,y_4 = NULL,b_0 = NULL,f_0 = NULL;
  y_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_4);
  i_4 = t;
  t = j_4;
  t = r_72(t);
  x_4 = t;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, x_4);
  b_0 = t;
  t = SSLsetAnnotations(b_0, i_4);
  return(t);
}
ATerm month2abbr_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_b_10;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_c_10;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_d_10;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_e_10;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_f_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_h_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_i_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_j_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_k_10;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_m_10;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_n_10;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_o_10;
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
      t = term_p_10;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_r_10;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_s_10;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_t_10;
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
                                  t = term_j_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_x_10;
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
                                              t = term_d_11;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_f_11;
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
  ATerm g_11 = t;
  if((PushChoice() == 0))
    {
      t = geq_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_11;
    }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm h_11 = t;
  if((PushChoice() == 0))
    {
      ATerm m_5 = NULL,q_5 = NULL;
      if(match_cons(t, sym__2))
        {
          m_5 = ATgetArgument(t, 0);
          q_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, m_5, q_5);
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(m_5, q_5);
            ;
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            t = SSL_gtr(m_5, q_5);
          }
        t = (ATerm) ATmakeAppl(sym__2, m_5, q_5);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_11;
    }
  return(t);
}
ATerm day_of_week2abbr_0_0 (ATerm t)
{
  if(match_cons(t, sym_Saturday_0))
    {
      t = term_k_11;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_l_11;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_m_11;
            }
          else
            {
              if(match_cons(t, sym_Wednesday_0))
                {
                  t = term_n_11;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_o_11;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_p_11;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_q_11;
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
      t = term_r_11;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_s_11;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_t_11;
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
  ATerm s_5 (ATerm t)
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
        t = s_5(t);
      }
    return(t);
  }
  t = s_5(t);
  return(t);
}
ATerm for_3_0 (ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm t)
{
  t = y_89(t);
  t = while_not_2_0(z_89, a_90, t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL;
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_5, v_5, (ATerm) ATempty);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm w_5 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm a_12 = ATgetArgument(t, 0);
      if(((ATgetType(a_12) != AT_INT) || (ATgetInt((ATermInt) a_12) != 0)))
        _fail(t);
      {
        ATerm b_12 = ATgetArgument(t, 1);
      }
      w_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_5;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL;
  if(match_cons(t, sym__3))
    {
      y_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
      b_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_5, term_e_12);
  t = geq_0_0(t);
  t = term_e_12;
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_5, term_e_12);
  t = u_8(y_5, d_6, t);
  c_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_6, z_5, (ATerm) ATinsert(CheckATermList(b_6), z_5));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(d_1, e_1, f_1, t);
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm f_6 = NULL;
  t = copy_0_0(t);
  f_6 = t;
  t = SSL_implode_string(f_6);
  return(t);
}
ATerm o_8 (ATerm b_44, ATerm z_43, ATerm a_44, ATerm t)
{
  ATerm g_6 = NULL;
  t = SSL_strlen(z_43);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_44, g_6);
  t = u_8(a_44, g_6, t);
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_6 = NULL;
        i_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_6, term_n_12);
        t = geq_0_0(t);
        t = i_6;
        LocalPopChoice(l_12);
        {
          ATerm j_6 = NULL;
          j_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_6, b_44);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = k_12;
        t = term_s_12;
      }
  }
  return(t);
}
ATerm p_8 (ATerm i_43, ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm o_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__3, i_43, j_43, k_43);
  t = o_8(i_43, j_43, k_43, t);
  o_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_6, j_43);
  t = l_9(o_6, j_43, t);
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
      t = term_t_12;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_u_12;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_w_12;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_z_12;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_a_13;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_b_13;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_c_13;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_d_13;
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
                                              t = term_e_12;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_n_12;
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
  ATerm d_8 = NULL,e_8 = NULL,g_8 = NULL,k_8 = NULL,n_8 = NULL,w_8 = NULL,x_8 = NULL,j_9 = NULL,k_9 = NULL,o_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL;
  n_8 = t;
  if(match_cons(t, sym__2))
    {
      w_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_8;
  if(match_string(t, "ss"))
    {
      t = x_8;
      if(match_cons(t, sym_ComponentTime_3))
        {
          ATerm g_13 = ATgetArgument(t, 0);
          r_9 = ATgetArgument(t, 1);
          {
            ATerm h_13 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = r_9;
      if(match_cons(t, sym_DayTime_3))
        {
          ATerm i_13 = ATgetArgument(t, 0);
          ATerm j_13 = ATgetArgument(t, 1);
          g_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_8;
    }
  else
    {
      if(match_string(t, "mm"))
        {
          t = x_8;
          if(match_cons(t, sym_ComponentTime_3))
            {
              ATerm k_13 = ATgetArgument(t, 0);
              r_9 = ATgetArgument(t, 1);
              {
                ATerm l_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = r_9;
          if(match_cons(t, sym_DayTime_3))
            {
              ATerm m_13 = ATgetArgument(t, 0);
              e_8 = ATgetArgument(t, 1);
              {
                ATerm n_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = e_8;
        }
      else
        {
          if(match_string(t, "KK"))
            {
              t = x_8;
              if(match_cons(t, sym_ComponentTime_3))
                {
                  ATerm o_13 = ATgetArgument(t, 0);
                  r_9 = ATgetArgument(t, 1);
                  {
                    ATerm p_13 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = r_9;
              if(match_cons(t, sym_DayTime_3))
                {
                  d_8 = ATgetArgument(t, 0);
                  {
                    ATerm q_13 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm r_13 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              {
                ATerm s_13 = t;
                int t_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_10 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, term_u_13, d_8);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, d_8, term_v_13);
                    t = leq_0_0(t);
                    t = term_u_13;
                    a_10 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_8, term_u_13);
                    t = u_8(d_8, a_10, t);
                    ;
                    LocalPopChoice(t_13);
                  }
                else
                  {
                    t = s_13;
                    t = (ATerm) ATmakeAppl(sym__2, term_n_12, d_8);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, d_8, term_u_13);
                    t = lt_0_0(t);
                    t = d_8;
                  }
              }
            }
          else
            {
              if(match_string(t, "hh"))
                {
                  t = x_8;
                  if(match_cons(t, sym_ComponentTime_3))
                    {
                      ATerm w_13 = ATgetArgument(t, 0);
                      r_9 = ATgetArgument(t, 1);
                      {
                        ATerm y_13 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = r_9;
                  if(match_cons(t, sym_DayTime_3))
                    {
                      d_8 = ATgetArgument(t, 0);
                      {
                        ATerm z_13 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm d_14 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = d_8;
                  if(match_int(t, 0))
                    {
                      ATerm f_14 = t;
                      int g_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_10 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_u_13, d_8);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, d_8, term_v_13);
                          t = leq_0_0(t);
                          t = term_u_13;
                          g_10 = t;
                          t = (ATerm) ATmakeAppl(sym__2, d_8, term_u_13);
                          t = u_8(d_8, g_10, t);
                          ;
                          LocalPopChoice(g_14);
                        }
                      else
                        {
                          t = f_14;
                          {
                            ATerm h_14 = t;
                            int i_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_e_12, d_8);
                                t = leq_0_0(t);
                                t = (ATerm) ATmakeAppl(sym__2, d_8, term_u_13);
                                t = leq_0_0(t);
                                t = d_8;
                                ;
                                LocalPopChoice(i_14);
                              }
                            else
                              {
                                t = h_14;
                                t = term_u_13;
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm j_14 = t;
                      int d_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_10 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, term_u_13, d_8);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, d_8, term_v_13);
                          t = leq_0_0(t);
                          t = term_u_13;
                          l_10 = t;
                          t = (ATerm) ATmakeAppl(sym__2, d_8, term_u_13);
                          t = u_8(d_8, l_10, t);
                          ;
                          LocalPopChoice(d_15);
                        }
                      else
                        {
                          t = j_14;
                          t = (ATerm) ATmakeAppl(sym__2, term_e_12, d_8);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, d_8, term_u_13);
                          t = leq_0_0(t);
                          t = d_8;
                        }
                    }
                }
              else
                {
                  if(match_string(t, "kk"))
                    {
                      ATerm q_10 = NULL;
                      t = x_8;
                      if(match_cons(t, sym_ComponentTime_3))
                        {
                          ATerm g_15 = ATgetArgument(t, 0);
                          r_9 = ATgetArgument(t, 1);
                          {
                            ATerm i_15 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = r_9;
                      if(match_cons(t, sym_DayTime_3))
                        {
                          d_8 = ATgetArgument(t, 0);
                          {
                            ATerm j_15 = ATgetArgument(t, 1);
                          }
                          {
                            ATerm k_15 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = term_e_12;
                      q_10 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_8, term_e_12);
                      t = i_9(d_8, q_10, t);
                    }
                  else
                    {
                      if(match_string(t, "HH"))
                        {
                          t = x_8;
                          if(match_cons(t, sym_ComponentTime_3))
                            {
                              ATerm l_15 = ATgetArgument(t, 0);
                              r_9 = ATgetArgument(t, 1);
                              {
                                ATerm m_15 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = r_9;
                          if(match_cons(t, sym_DayTime_3))
                            {
                              d_8 = ATgetArgument(t, 0);
                              {
                                ATerm n_15 = ATgetArgument(t, 1);
                              }
                              {
                                ATerm p_15 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = d_8;
                        }
                      else
                        {
                          if(match_string(t, "DD"))
                            {
                              t = x_8;
                              if(match_cons(t, sym_ComponentTime_3))
                                {
                                  ATerm q_15 = ATgetArgument(t, 0);
                                  ATerm r_15 = ATgetArgument(t, 1);
                                  s_9 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = s_9;
                              if(match_cons(t, sym_Dupl_2))
                                {
                                  ATerm v_15 = ATgetArgument(t, 0);
                                  k_8 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = k_8;
                            }
                          else
                            {
                              if(match_string(t, "D"))
                                {
                                  t = x_8;
                                  if(match_cons(t, sym_ComponentTime_3))
                                    {
                                      ATerm w_15 = ATgetArgument(t, 0);
                                      ATerm x_15 = ATgetArgument(t, 1);
                                      s_9 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = s_9;
                                  if(match_cons(t, sym_Dupl_2))
                                    {
                                      ATerm a_16 = ATgetArgument(t, 0);
                                      k_8 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = k_8;
                                }
                              else
                                {
                                  if(match_string(t, "dd"))
                                    {
                                      t = x_8;
                                      if(match_cons(t, sym_ComponentTime_3))
                                        {
                                          j_9 = ATgetArgument(t, 0);
                                          {
                                            ATerm b_16 = ATgetArgument(t, 1);
                                          }
                                          {
                                            ATerm g_16 = ATgetArgument(t, 2);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      t = j_9;
                                      if(match_cons(t, sym_Date_3))
                                        {
                                          ATerm h_16 = ATgetArgument(t, 0);
                                          ATerm i_16 = ATgetArgument(t, 1);
                                          q_9 = ATgetArgument(t, 2);
                                        }
                                      else
                                        _fail(t);
                                      t = q_9;
                                    }
                                  else
                                    {
                                      if(match_string(t, "d"))
                                        {
                                          t = x_8;
                                          if(match_cons(t, sym_ComponentTime_3))
                                            {
                                              j_9 = ATgetArgument(t, 0);
                                              {
                                                ATerm j_16 = ATgetArgument(t, 1);
                                              }
                                              {
                                                ATerm k_16 = ATgetArgument(t, 2);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          t = j_9;
                                          if(match_cons(t, sym_Date_3))
                                            {
                                              ATerm l_16 = ATgetArgument(t, 0);
                                              ATerm m_16 = ATgetArgument(t, 1);
                                              q_9 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          t = q_9;
                                        }
                                      else
                                        {
                                          if(match_string(t, "MM"))
                                            {
                                              ATerm y_10 = NULL,z_10 = NULL;
                                              t = x_8;
                                              if(match_cons(t, sym_ComponentTime_3))
                                                {
                                                  j_9 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm n_16 = ATgetArgument(t, 1);
                                                  }
                                                  {
                                                    ATerm o_16 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = j_9;
                                              if(match_cons(t, sym_Date_3))
                                                {
                                                  ATerm p_16 = ATgetArgument(t, 0);
                                                  o_9 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm q_16 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = o_9;
                                              t = month2index_0_0(t);
                                              y_10 = t;
                                              t = term_e_12;
                                              z_10 = t;
                                              t = (ATerm) ATmakeAppl(sym__2, y_10, term_e_12);
                                              t = i_9(y_10, z_10, t);
                                            }
                                          else
                                            {
                                              if(match_string(t, "M"))
                                                {
                                                  ATerm b_11 = NULL,c_11 = NULL;
                                                  t = x_8;
                                                  if(match_cons(t, sym_ComponentTime_3))
                                                    {
                                                      j_9 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm r_16 = ATgetArgument(t, 1);
                                                      }
                                                      {
                                                        ATerm s_16 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = j_9;
                                                  if(match_cons(t, sym_Date_3))
                                                    {
                                                      ATerm v_16 = ATgetArgument(t, 0);
                                                      o_9 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm w_16 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = o_9;
                                                  t = month2index_0_0(t);
                                                  b_11 = t;
                                                  t = term_e_12;
                                                  c_11 = t;
                                                  t = (ATerm) ATmakeAppl(sym__2, b_11, term_e_12);
                                                  t = i_9(b_11, c_11, t);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "yy"))
                                                    {
                                                      ATerm e_11 = NULL;
                                                      t = x_8;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          j_9 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm x_16 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm z_16 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = j_9;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          k_9 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm a_17 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm d_17 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = term_e_17;
                                                      e_11 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, k_9, term_e_17);
                                                      t = q_8(k_9, e_11, t);
                                                    }
                                                  else
                                                    {
                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("yyyy", 0, ATtrue)))
                                                        _fail(t);
                                                      t = x_8;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          j_9 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm g_17 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm h_17 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = j_9;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          k_9 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm i_17 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm j_17 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = k_9;
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
ATerm x_13 (ATerm c_12, ATerm d_12, ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
  t = d_12;
  t = date_pattern_to_int_0_0(t);
  f_12 = t;
  t = SSL_int_to_string(f_12);
  g_12 = t;
  t = SSL_strlen(c_12);
  h_12 = t;
  t = term_k_17;
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_17, g_12, h_12);
  t = p_8(i_12, g_12, h_12, t);
  return(t);
}
ATerm date_pattern_to_string_0_0 (ATerm t)
{
  ATerm j_12 = NULL,m_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,v_12 = NULL,x_12 = NULL,y_12 = NULL;
  o_12 = t;
  if(match_cons(t, sym__2))
    {
      p_12 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_12;
  if(match_cons(t, sym_ComponentTime_3))
    {
      r_12 = ATgetArgument(t, 0);
      x_12 = ATgetArgument(t, 1);
      y_12 = ATgetArgument(t, 2);
      t = y_12;
      {
        ATerm l_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Dupl_2))
              {
                m_12 = ATgetArgument(t, 0);
                {
                  ATerm n_17 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(m_17);
            t = x_12;
            {
              ATerm o_17 = t;
              int p_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      j_12 = ATgetArgument(t, 0);
                      {
                        ATerm q_17 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm r_17 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(p_17);
                  t = r_12;
                  {
                    ATerm s_17 = t;
                    int t_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm u_17 = ATgetArgument(t, 0);
                            v_12 = ATgetArgument(t, 1);
                            {
                              ATerm v_17 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(t_17);
                        t = p_12;
                        if(match_string(t, "a"))
                          {
                            ATerm w_17 = t;
                            int x_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_13(p_12, o_12, t);
                                ;
                                LocalPopChoice(x_17);
                              }
                            else
                              {
                                t = w_17;
                                {
                                  ATerm y_17 = t;
                                  int z_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_u_13, j_12);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, j_12, term_v_13);
                                      t = leq_0_0(t);
                                      t = term_e_18;
                                      ;
                                      LocalPopChoice(z_17);
                                    }
                                  else
                                    {
                                      t = y_17;
                                      t = (ATerm) ATmakeAppl(sym__2, term_n_12, j_12);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, j_12, term_u_13);
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
                                ATerm i_18 = t;
                                int j_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = x_13(p_12, o_12, t);
                                    ;
                                    LocalPopChoice(j_18);
                                  }
                                else
                                  {
                                    t = i_18;
                                    t = m_12;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm l_18 = t;
                                    int m_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = x_13(p_12, o_12, t);
                                        ;
                                        LocalPopChoice(m_18);
                                      }
                                    else
                                      {
                                        t = l_18;
                                        t = m_12;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    if(match_string(t, "MMMM"))
                                      {
                                        ATerm n_18 = t;
                                        int o_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = x_13(p_12, o_12, t);
                                            ;
                                            LocalPopChoice(o_18);
                                          }
                                        else
                                          {
                                            t = n_18;
                                            t = v_12;
                                            t = month2text_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_string(t, "MMM"))
                                          {
                                            ATerm p_18 = t;
                                            int q_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = x_13(p_12, o_12, t);
                                                ;
                                                LocalPopChoice(q_18);
                                              }
                                            else
                                              {
                                                t = p_18;
                                                t = v_12;
                                                t = month2abbr_0_0(t);
                                              }
                                          }
                                        else
                                          {
                                            t = x_13(p_12, o_12, t);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = s_17;
                        t = p_12;
                        if(match_string(t, "a"))
                          {
                            ATerm r_18 = t;
                            int t_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_13(p_12, o_12, t);
                                ;
                                LocalPopChoice(t_18);
                              }
                            else
                              {
                                t = r_18;
                                {
                                  ATerm u_18 = t;
                                  int v_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_u_13, j_12);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, j_12, term_v_13);
                                      t = leq_0_0(t);
                                      t = term_e_18;
                                      ;
                                      LocalPopChoice(v_18);
                                    }
                                  else
                                    {
                                      t = u_18;
                                      t = (ATerm) ATmakeAppl(sym__2, term_n_12, j_12);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, j_12, term_u_13);
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
                                ATerm w_18 = t;
                                int x_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = x_13(p_12, o_12, t);
                                    ;
                                    LocalPopChoice(x_18);
                                  }
                                else
                                  {
                                    t = w_18;
                                    t = m_12;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm y_18 = t;
                                    int z_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = x_13(p_12, o_12, t);
                                        ;
                                        LocalPopChoice(z_18);
                                      }
                                    else
                                      {
                                        t = y_18;
                                        t = m_12;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = x_13(p_12, o_12, t);
                                  }
                              }
                          }
                      }
                  }
                }
              else
                {
                  t = o_17;
                  t = r_12;
                  {
                    ATerm a_19 = t;
                    int d_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm i_19 = ATgetArgument(t, 0);
                            v_12 = ATgetArgument(t, 1);
                            {
                              ATerm l_19 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(d_19);
                        t = p_12;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm o_19 = t;
                            int r_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_13(p_12, o_12, t);
                                ;
                                LocalPopChoice(r_19);
                              }
                            else
                              {
                                t = o_19;
                                t = m_12;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm s_19 = t;
                                int t_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = x_13(p_12, o_12, t);
                                    ;
                                    LocalPopChoice(t_19);
                                  }
                                else
                                  {
                                    t = s_19;
                                    t = m_12;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "MMMM"))
                                  {
                                    ATerm w_19 = t;
                                    int y_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = x_13(p_12, o_12, t);
                                        ;
                                        LocalPopChoice(y_19);
                                      }
                                    else
                                      {
                                        t = w_19;
                                        t = v_12;
                                        t = month2text_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    if(match_string(t, "MMM"))
                                      {
                                        ATerm z_19 = t;
                                        int a_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = x_13(p_12, o_12, t);
                                            ;
                                            LocalPopChoice(a_20);
                                          }
                                        else
                                          {
                                            t = z_19;
                                            t = v_12;
                                            t = month2abbr_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        t = x_13(p_12, o_12, t);
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = a_19;
                        t = p_12;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm b_20 = t;
                            int d_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_13(p_12, o_12, t);
                                ;
                                LocalPopChoice(d_20);
                              }
                            else
                              {
                                t = b_20;
                                t = m_12;
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
                                    t = x_13(p_12, o_12, t);
                                    ;
                                    LocalPopChoice(f_20);
                                  }
                                else
                                  {
                                    t = e_20;
                                    t = m_12;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = x_13(p_12, o_12, t);
                              }
                          }
                      }
                  }
                }
            }
          }
        else
          {
            t = l_17;
            t = x_12;
            {
              ATerm h_20 = t;
              int i_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      j_12 = ATgetArgument(t, 0);
                      {
                        ATerm l_20 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm m_20 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_20);
                  t = r_12;
                  {
                    ATerm n_20 = t;
                    int o_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm p_20 = ATgetArgument(t, 0);
                            v_12 = ATgetArgument(t, 1);
                            {
                              ATerm r_20 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(o_20);
                        t = p_12;
                        if(match_string(t, "a"))
                          {
                            ATerm s_20 = t;
                            int v_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_13(p_12, o_12, t);
                                ;
                                LocalPopChoice(v_20);
                              }
                            else
                              {
                                t = s_20;
                                {
                                  ATerm w_20 = t;
                                  int x_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_u_13, j_12);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, j_12, term_v_13);
                                      t = leq_0_0(t);
                                      t = term_e_18;
                                      ;
                                      LocalPopChoice(x_20);
                                    }
                                  else
                                    {
                                      t = w_20;
                                      t = (ATerm) ATmakeAppl(sym__2, term_n_12, j_12);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, j_12, term_u_13);
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
                                ATerm y_20 = t;
                                int z_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = x_13(p_12, o_12, t);
                                    ;
                                    LocalPopChoice(z_20);
                                  }
                                else
                                  {
                                    t = y_20;
                                    t = v_12;
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
                                        t = x_13(p_12, o_12, t);
                                        ;
                                        LocalPopChoice(b_21);
                                      }
                                    else
                                      {
                                        t = a_21;
                                        t = v_12;
                                        t = month2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = x_13(p_12, o_12, t);
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = n_20;
                        t = p_12;
                        if(match_string(t, "a"))
                          {
                            ATerm d_21 = t;
                            int e_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_13(p_12, o_12, t);
                                ;
                                LocalPopChoice(e_21);
                              }
                            else
                              {
                                t = d_21;
                                {
                                  ATerm h_21 = t;
                                  int q_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, term_u_13, j_12);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, j_12, term_v_13);
                                      t = leq_0_0(t);
                                      t = term_e_18;
                                      ;
                                      LocalPopChoice(q_21);
                                    }
                                  else
                                    {
                                      t = h_21;
                                      t = (ATerm) ATmakeAppl(sym__2, term_n_12, j_12);
                                      t = leq_0_0(t);
                                      t = (ATerm) ATmakeAppl(sym__2, j_12, term_u_13);
                                      t = lt_0_0(t);
                                      t = term_f_18;
                                    }
                                }
                              }
                          }
                        else
                          {
                            t = x_13(p_12, o_12, t);
                          }
                      }
                  }
                }
              else
                {
                  t = h_20;
                  t = r_12;
                  {
                    ATerm r_21 = t;
                    int v_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm w_21 = ATgetArgument(t, 0);
                            v_12 = ATgetArgument(t, 1);
                            {
                              ATerm x_21 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(v_21);
                        t = p_12;
                        if(match_string(t, "MMMM"))
                          {
                            ATerm y_21 = t;
                            int z_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_13(p_12, o_12, t);
                                ;
                                LocalPopChoice(z_21);
                              }
                            else
                              {
                                t = y_21;
                                t = v_12;
                                t = month2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "MMM"))
                              {
                                ATerm a_22 = t;
                                int b_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = x_13(p_12, o_12, t);
                                    ;
                                    LocalPopChoice(b_22);
                                  }
                                else
                                  {
                                    t = a_22;
                                    t = v_12;
                                    t = month2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = x_13(p_12, o_12, t);
                              }
                          }
                      }
                    else
                      {
                        t = r_21;
                        t = p_12;
                        t = x_13(p_12, o_12, t);
                      }
                  }
                }
            }
          }
      }
    }
  else
    {
      t = p_12;
      t = x_13(p_12, o_12, t);
    }
  return(t);
}
ATerm r_8 (ATerm g_62, ATerm f_62, ATerm t)
{
  ATerm a_14 = NULL;
  t = g_62;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm b_14 = NULL;
      b_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_14, f_62);
      {
        ATerm c_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = date_pattern_to_string_0_0(t);
            ;
            LocalPopChoice(k_22);
          }
        else
          {
            t = c_22;
            {
              ATerm c_14 = NULL,e_14 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, b_14, f_62);
              c_14 = t;
              t = SSL_explode_term(c_14);
              if(match_cons(t, sym__2))
                {
                  ATerm p_22 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) p_22) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm o_23 = ATgetArgument(t, 1);
                    if(((ATgetType(o_23) == AT_LIST) && !(ATisEmpty(o_23))))
                      {
                        e_14 = ATgetFirst((ATermList) o_23);
                        {
                          ATerm q_23 = (ATerm) ATgetNext((ATermList) o_23);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = e_14;
            }
          }
      }
      return(t);
    }
    t = map_1_0(h_1, t);
    a_14 = t;
    t = SSL_concat_strings(a_14);
  }
  return(t);
}
ATerm index2day_of_week_0_0 (ATerm t)
{
  if(match_int(t, 6))
    {
      t = term_s_23;
    }
  else
    {
      if(match_int(t, 5))
        {
          t = term_u_23;
        }
      else
        {
          if(match_int(t, 4))
            {
              t = term_w_23;
            }
          else
            {
              if(match_int(t, 3))
                {
                  t = term_x_23;
                }
              else
                {
                  if(match_int(t, 2))
                    {
                      t = term_y_23;
                    }
                  else
                    {
                      if(match_int(t, 1))
                        {
                          t = term_z_23;
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                            _fail(t);
                          t = term_a_24;
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
      t = term_c_24;
    }
  else
    {
      if(match_int(t, 10))
        {
          t = term_l_24;
        }
      else
        {
          if(match_int(t, 9))
            {
              t = term_m_24;
            }
          else
            {
              if(match_int(t, 8))
                {
                  t = term_n_24;
                }
              else
                {
                  if(match_int(t, 7))
                    {
                      t = term_o_24;
                    }
                  else
                    {
                      if(match_int(t, 6))
                        {
                          t = term_q_24;
                        }
                      else
                        {
                          if(match_int(t, 5))
                            {
                              t = term_t_24;
                            }
                          else
                            {
                              if(match_int(t, 4))
                                {
                                  t = term_x_24;
                                }
                              else
                                {
                                  if(match_int(t, 3))
                                    {
                                      t = term_y_24;
                                    }
                                  else
                                    {
                                      if(match_int(t, 2))
                                        {
                                          t = term_z_24;
                                        }
                                      else
                                        {
                                          if(match_int(t, 1))
                                            {
                                              t = term_a_25;
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                                                _fail(t);
                                              t = term_b_25;
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
  ATerm k_14 = NULL,l_14 = NULL;
  t = c_59;
  t = index2month_0_0(t);
  k_14 = t;
  t = h_59;
  t = index2day_of_week_0_0(t);
  l_14 = t;
  t = (ATerm) ATmakeAppl(sym_ComponentTime_3, (ATerm)ATmakeAppl(sym_Date_3, b_59, k_14, d_59), (ATerm)ATmakeAppl(sym_DayTime_3, e_59, f_59, g_59), (ATerm) ATmakeAppl(sym_Dupl_2, l_14, i_59));
  return(t);
}
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
  if(match_cons(t, sym__8))
    {
      m_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
      o_14 = ATgetArgument(t, 2);
      p_14 = ATgetArgument(t, 3);
      q_14 = ATgetArgument(t, 4);
      r_14 = ATgetArgument(t, 5);
      s_14 = ATgetArgument(t, 6);
      t_14 = ATgetArgument(t, 7);
    }
  else
    _fail(t);
  t = s_8(m_14, n_14, o_14, p_14, q_14, r_14, s_14, t_14, t);
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
  ATerm u_14 = NULL;
  t = SSL_now_epoch_time();
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym_EpochTime_1, u_14);
  return(t);
}
ATerm now_local_time_0_0 (ATerm t)
{
  ATerm v_14 = NULL;
  t = now_epoch_time_0_0(t);
  if(match_cons(t, sym_EpochTime_1))
    {
      v_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_8(v_14, t);
  return(t);
}
ATerm create_time_0_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL;
  t = term_v_7;
  t = now_local_time_0_0(t);
  w_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_25), term_k_25), term_n_25), term_k_25), term_j_25), term_d_25), term_h_25), term_d_25), term_g_25), term_d_25), term_f_25), term_d_25), term_c_25);
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_25), term_k_25), term_n_25), term_k_25), term_j_25), term_d_25), term_h_25), term_d_25), term_g_25), term_d_25), term_f_25), term_d_25), term_c_25), w_14);
  t = r_8(x_14, w_14, t);
  return(t);
}
ATerm get_title_0_0 (ATerm t)
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      {
        ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
        t = term_s_25;
        y_14 = t;
        t = (ATerm) ATinsert(ATempty, term_t_25);
        z_14 = t;
        t = SSL_printnl(y_14, z_14);
        t = term_e_12;
        a_15 = t;
        t = SSL_exit(a_15);
        t = (ATerm) ATinsert(ATempty, term_t_25);
      }
    }
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL;
  t = get_title_0_0(t);
  b_15 = t;
  t = term_v_7;
  t = create_time_0_0(t);
  c_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_26), term_m_26), term_j_26), term_i_26), b_15), term_h_26), term_d_26), term_a_26), term_z_25), term_y_25), term_x_25), term_w_25), c_15), term_v_25), term_u_25);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_9;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      t = term_u_26;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm e_102 (ATerm), ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_15 = NULL;
        t = term_z_9;
        t = get_config_0_0(t);
        e_15 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_15);
        ;
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
        t = term_u_9;
      }
    t = e_102(t);
    t = copy_to_1_0(l_1, t);
    return(t);
  }
  t = xtc_temp_files_1_0(i_1, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm f_15 = NULL,h_15 = NULL,t_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL;
  f_15 = t;
  t = create_header_0_0(t);
  t_1 = t;
  t = xtc_new_file_0_0(t);
  w_1 = t;
  t = SSL_print(w_1, t_1);
  t = SSL_close_file(w_1);
  t = f_15;
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(y_26);
        t = xtc_transform_file_2_0(q_1, pass_verbose_0_0, t);
      }
    else
      {
        t = x_26;
        t = xtc_transform_term_2_0(r_1, pass_verbose_0_0, t);
      }
    h_15 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, term_d_27), term_c_27);
    x_1 = t;
    t = xtc_new_file_0_0(t);
    y_1 = t;
    t = SSL_print(y_1, x_1);
    t = SSL_close_file(y_1);
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FILE_1, y_1)), h_15), (ATerm) ATmakeAppl(sym_FILE_1, w_1));
    t = xtc_cat_0_0(t);
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  t = xtc_io_1_0(p_1, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_m_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_15 = NULL;
      o_15 = t;
      t = SSL_is_string(o_15);
      ;
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      {
        ATerm q_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_1, t);
            ;
            LocalPopChoice(r_27);
          }
        else
          {
            t = q_27;
            {
              ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
              s_15 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_15 = ATgetArgument(t, 0);
                  t = t_15;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_15 = ATgetArgument(t, 0);
                      t = t_15;
                      {
                        ATerm s_27 = t;
                        int z_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(z_27);
                          }
                        else
                          {
                            t = s_27;
                            t = debug_1_0(u_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_15 = NULL,z_15 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_15 = ATgetArgument(t, 0);
                          u_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_15;
                      t = eval_config_0_0(t);
                      y_15 = t;
                      t = u_15;
                      t = eval_config_0_0(t);
                      z_15 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_15, z_15);
                      t = l_9(y_15, z_15, t);
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
  ATerm c_16 = NULL,d_16 = NULL;
  c_16 = t;
  t = term_a_28;
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_28, c_16);
  t = m_9(d_16, c_16, t);
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_16 = NULL,f_16 = NULL;
        t = eval_config_0_0(t);
        e_16 = t;
        t = term_a_28;
        f_16 = t;
        t = SSL_table_put(f_16, c_16, e_16);
        t = e_16;
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
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
  ATerm t_16 = NULL,u_16 = NULL;
  t_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      u_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_3 = NULL;
        t = t_16;
        t = k_0(t);
        e_3 = t;
        {
          ATerm i_28 = t;
          int j_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(j_28);
            }
          else
            {
              t = i_28;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_16, e_3);
          t = g_9(u_16, e_3, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, u_16);
        }
        ;
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        {
          ATerm k_28 = t;
          int l_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_3 = NULL;
              t = t_16;
              t = k_0(t);
              r_3 = t;
              {
                ATerm m_28 = t;
                if((PushChoice() == 0))
                  {
                    ATerm n_28 = t;
                    int o_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(o_28);
                      }
                    else
                      {
                        t = n_28;
                        {
                          ATerm p_28 = t;
                          int q_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(q_28);
                            }
                          else
                            {
                              t = p_28;
                              {
                                ATerm s_3 = NULL;
                                s_3 = t;
                                if((u_16 != t))
                                  {
                                    _fail(t);
                                  }
                                t = s_3;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_28;
                  }
                t = (ATerm) ATmakeAppl(sym__2, u_16, r_3);
                t = g_9(u_16, r_3, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, u_16);
              }
              ;
              LocalPopChoice(l_28);
            }
          else
            {
              t = k_28;
              t = t_16;
              t = k_0(t);
              if((u_16 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_16);
            }
        }
      }
  }
  return(t);
}
ATerm u_8 (ATerm j_37, ATerm k_37, ATerm t)
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(j_37, k_37);
      ;
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      t = SSL_subtr(j_37, k_37);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm y_16 = NULL,b_17 = NULL,c_17 = NULL,f_17 = NULL;
  t = term_v_28;
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        t = term_e_12;
      }
    y_16 = t;
    t = term_e_12;
    c_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_16, term_e_12);
    t = u_8(y_16, c_17, t);
    f_17 = t;
    t = SSL_int_to_string(f_17);
    b_17 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, b_17), term_v_28);
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
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL;
  a_18 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      b_18 = ATgetArgument(t, 0);
      {
        ATerm z_3 = NULL,b_4 = NULL;
        t = SSL_int_to_string(b_18);
        z_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_28), z_3), term_y_28);
        b_4 = t;
        t = SSL_concat_strings(b_4);
      }
    }
  else
    {
      ATerm q_4 = NULL,r_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          b_18 = ATgetArgument(t, 0);
          c_18 = ATgetArgument(t, 1);
          d_18 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(c_18);
      q_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_18), term_c_29), q_4), term_a_29), b_18);
      r_4 = t;
      t = SSL_concat_strings(r_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm r_79 (ATerm), ATerm t)
{
  ATerm g_18 = NULL;
  ATerm a_2 (ATerm t)
  {
    t = r_79(t);
    if(((g_18 != NULL) && (g_18 != t)))
      _fail(t);
    else
      g_18 = t;
    return(t);
  }
  t = fetch_1_0(a_2, t);
  t = not_null(g_18);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm h_18 = NULL;
  h_18 = t;
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_36), term_c_36), term_x_35), term_s_35), term_m_35), term_h_35), term_z_34), term_s_34), term_l_34), term_e_34), term_b_34), term_s_33), term_i_33), term_a_33), term_w_32), term_s_32), term_o_32), term_j_32), term_d_32), term_x_31), term_q_31), term_k_31), term_b_31), term_s_30), term_l_30), term_z_29), term_o_29), term_i_29);
        {
          ATerm b_2 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm h_36 = ATgetArgument(t, 0);
                if((h_18 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm i_36 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(b_2, t);
        }
        ;
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, h_18);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm k_18 = NULL;
  k_18 = t;
  {
    ATerm j_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_18 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_36 = ATgetArgument(t, 0);
            s_18 = ATgetArgument(t, 1);
            {
              ATerm p_36 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = s_18;
        {
          ATerm r_36 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_36;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          d_5 = t;
          t = term_s_25;
          e_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, d_5), term_s_36);
          f_5 = t;
          t = SSL_printnl(e_5, f_5);
          t = (ATerm) ATmakeAppl(sym__2, term_s_25, (ATerm) ATinsert(ATinsert(ATempty, d_5), term_s_36));
        }
        ;
        LocalPopChoice(k_36);
      }
    else
      {
        t = j_36;
      }
    t = k_18;
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
  ATerm b_19 = NULL,c_19 = NULL;
  b_19 = t;
  t = fork_0_0(t);
  c_19 = t;
  {
    ATerm t_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = b_19;
        t = w_90(t);
        ;
        LocalPopChoice(v_36);
      }
    else
      {
        t = t_36;
        t = SSL_waitpid(c_19);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_36 = ATgetArgument(t, 0);
            if(((ATgetType(w_36) != AT_INT) || (ATgetInt((ATermInt) w_36) != 0)))
              _fail(t);
            {
              ATerm f_37 = ATgetArgument(t, 1);
            }
            {
              ATerm h_37 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = b_19;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_19 = NULL;
  e_19 = t;
  t = SSL_table_keys(e_19);
  {
    ATerm c_2 (ATerm t)
    {
      ATerm f_19 = NULL,g_19 = NULL;
      f_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_19, f_19);
      t = m_9(e_19, f_19, t);
      g_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_19, g_19);
      return(t);
    }
    t = map_1_0(c_2, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm f_101 (ATerm), ATerm t)
{
  ATerm l_37 = t;
  int m_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_19 = NULL,j_19 = NULL;
      h_19 = t;
      t = term_v_28;
      t = get_config_0_0(t);
      j_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_19, term_c_13);
      t = geq_0_0(t);
      t = h_19;
      t = f_101(t);
      ;
      LocalPopChoice(m_37);
    }
  else
    {
      t = l_37;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm n_37 = t;
  int o_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_19 = NULL,m_19 = NULL;
      k_19 = t;
      t = term_v_28;
      t = get_config_0_0(t);
      m_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_19, term_d_13);
      t = geq_0_0(t);
      t = k_19;
      t = e_101(t);
      ;
      LocalPopChoice(o_37);
    }
  else
    {
      t = n_37;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm q_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_19 = NULL,p_19 = NULL;
      n_19 = t;
      t = term_v_28;
      t = get_config_0_0(t);
      p_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_19, term_b_13);
      t = geq_0_0(t);
      t = n_19;
      t = g_101(t);
      ;
      LocalPopChoice(t_37);
    }
  else
    {
      t = q_37;
    }
  return(t);
}
ATerm y_8 (ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm u_33, ATerm t_33, ATerm t)
{
  t = n_83(t);
  {
    ATerm e_2 (ATerm t)
    {
      ATerm q_19 = NULL;
      q_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_33, q_19);
      t = m_83(t);
      return(t);
    }
    t = fetch_1_0(e_2, t);
    t = t_33;
  }
  return(t);
}
ATerm z_8 (ATerm j_83 (ATerm), ATerm q_33, ATerm p_33, ATerm t)
{
  t = q_33;
  {
    ATerm c_20 (ATerm t)
    {
      ATerm u_37 = t;
      int v_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_33;
          ;
          LocalPopChoice(v_37);
        }
      else
        {
          t = u_37;
          {
            ATerm w_37 = t;
            int x_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_19 = NULL,v_19 = NULL,x_19 = NULL;
                u_19 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    v_19 = ATgetFirst((ATermList) t);
                    x_19 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = u_19;
                {
                  ATerm k_2 (ATerm t)
                  {
                    t = p_33;
                    return(t);
                  }
                  t = y_8(j_83, k_2, v_19, x_19, t);
                  t = c_20(t);
                }
                ;
                LocalPopChoice(x_37);
              }
            else
              {
                t = w_37;
                t = Cons_2_0(_id, c_20, t);
              }
          }
        }
      return(t);
    }
    t = c_20(t);
  }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm q_20 = NULL;
  if(match_cons(t, sym__2))
    {
      q_20 = ATgetArgument(t, 0);
      if((q_20 != ATgetArgument(t, 1)))
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
  ATerm g_20 = NULL,j_20 = NULL,k_20 = NULL;
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_39, x_39);
  {
    ATerm y_37 = t;
    int e_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_38 = ATgetArgument(t, 0);
            ATerm i_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_39, x_39);
        t = m_9(w_39, x_39, t);
        ;
        LocalPopChoice(e_38);
      }
    else
      {
        t = y_37;
        t = (ATerm) ATempty;
      }
    j_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_20, y_39);
    t = z_8(l_2, j_20, y_39, t);
    k_20 = t;
    t = SSL_table_put(w_39, x_39, k_20);
    t = g_20;
  }
  return(t);
}
ATerm b_9 (ATerm l_87 (ATerm), ATerm g_40, ATerm f_40, ATerm t)
{
  t = f_40;
  {
    ATerm m_2 (ATerm t)
    {
      ATerm t_20 = NULL,u_20 = NULL;
      if(match_cons(t, sym__2))
        {
          t_20 = ATgetArgument(t, 0);
          u_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, g_40, t_20, u_20);
      t = l_87(t);
      return(t);
    }
    t = map_1_0(m_2, t);
  }
  return(t);
}
ATerm i_21 (ATerm c_21, ATerm t)
{
  t = SSL_fclose(c_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL;
  g_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_21 = ATgetArgument(t, 0);
      {
        ATerm j_38 = t;
        int k_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_21);
            ;
            LocalPopChoice(k_38);
          }
        else
          {
            t = j_38;
            t = i_21(g_21, t);
          }
      }
    }
  else
    {
      t = i_21(g_21, t);
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
  ATerm j_21 = NULL;
  t = SSL_fopen(s_26, t_26);
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_21);
  return(t);
}
ATerm _2_0 (ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,n_0 = NULL,o_0 = NULL;
  p_21 = t;
  if(match_cons(t, sym__2))
    {
      l_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_21);
  k_21 = t;
  t = l_21;
  t = i_62(t);
  n_21 = t;
  t = m_21;
  t = j_62(t);
  o_21 = t;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_21, o_21);
  n_0 = t;
  t = SSLsetAnnotations(n_0, k_21);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_21 = NULL;
  t = SSL_stdin_stream();
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_21 = NULL;
  t = SSL_stdout_stream();
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_21 = NULL;
  t = SSL_stderr_stream();
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_21);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm g_22 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      g_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_22;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm j_22 = NULL;
  j_22 = t;
  t = SSL_is_string(j_22);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_38 = ATgetArgument(t, 0);
      ATerm m_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_22 = NULL,a_6 = NULL;
        d_22 = t;
        t = SSL_explode_term(d_22);
        if(match_cons(t, sym__2))
          {
            ATerm q_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_38) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_38 = ATgetArgument(t, 1);
              if(((ATgetType(s_38) == AT_LIST) && !(ATisEmpty(s_38))))
                {
                  a_6 = ATgetFirst((ATermList) s_38);
                  {
                    ATerm t_38 = (ATerm) ATgetNext((ATermList) s_38);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = a_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = a_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = a_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = a_6;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(o_38);
      }
    else
      {
        t = n_38;
        {
          ATerm b_39 = t;
          int d_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_22 = NULL,f_22 = NULL;
              t = _2_0(n_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  e_22 = ATgetArgument(t, 0);
                  f_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_9(e_22, f_22, t);
              ;
              LocalPopChoice(d_39);
            }
          else
            {
              t = b_39;
              {
                ATerm h_22 = NULL,i_22 = NULL;
                t = _2_0(o_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    h_22 = ATgetArgument(t, 0);
                    i_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_9(h_22, i_22, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_g_39;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
  ATerm h_39 = t;
  int i_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_22 = NULL;
      o_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_22, term_j_39);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_39);
    }
  else
    {
      t = h_39;
      t = debug_1_0(q_2, t);
      _fail(t);
    }
  l_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_9(n_22, t);
  m_22 = t;
  t = l_22;
  t = fclose_0_0(t);
  t = m_22;
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_l_39;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_p_39;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_22 = NULL,r_22 = NULL;
      q_22 = t;
      t = (ATerm) ATinsert(ATempty, term_s_39);
      r_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_22, (ATerm) ATinsert(ATempty, term_s_39));
      t = f_9(q_22, r_22, t);
      LocalPopChoice(r_39);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = q_39;
      {
        ATerm u_39 = t;
        int z_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_40 = t;
            if((PushChoice() == 0))
              {
                ATerm s_22 = NULL,t_22 = NULL;
                s_22 = t;
                t = (ATerm) ATinsert(ATempty, term_v_9);
                t_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_22, (ATerm) ATinsert(ATempty, term_v_9));
                t = f_9(s_22, t_22, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_40;
              }
            t = debug_1_0(v_2, t);
            ;
            LocalPopChoice(z_39);
          }
        else
          {
            t = u_39;
            t = debug_1_0(w_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = debug_1_0(a_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_b_40;
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = debug_1_0(d_3, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_c_40;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
  g_23 = t;
  t = term_s_25;
  h_23 = t;
  t = (ATerm) ATinsert(ATempty, term_h_40);
  i_23 = t;
  t = SSL_printnl(h_23, i_23);
  t = g_23;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
  if(match_cons(t, sym__3))
    {
      j_23 = ATgetArgument(t, 0);
      k_23 = ATgetArgument(t, 1);
      l_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_9(j_23, k_23, l_23, t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,p_23 = NULL;
  m_23 = t;
  t = term_s_25;
  n_23 = t;
  t = (ATerm) ATinsert(ATempty, term_i_40);
  p_23 = t;
  t = SSL_printnl(n_23, p_23);
  t = m_23;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm r_23 = NULL,t_23 = NULL,v_23 = NULL;
  r_23 = t;
  t = term_s_25;
  t_23 = t;
  t = (ATerm) ATinsert(ATempty, term_h_40);
  v_23 = t;
  t = SSL_printnl(t_23, v_23);
  t = r_23;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL;
  u_22 = t;
  t = if_verbose5_1_0(y_2, t);
  {
    ATerm m_40 = t;
    if((PushChoice() == 0))
      {
        ATerm e_23 = NULL,f_23 = NULL;
        t = term_s_40;
        e_23 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, u_22);
        f_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_40, (ATerm) ATmakeAppl(sym_Imported_1, u_22));
        t = m_9(e_23, f_23, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_40;
      }
    v_22 = t;
    t = term_s_40;
    x_22 = t;
    t = term_t_40;
    y_22 = t;
    t = (ATerm) ATinsert(ATempty, u_22);
    z_22 = t;
    t = SSL_table_put(x_22, y_22, z_22);
    t = v_22;
    t = if_verbose4_1_0(b_3, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(f_3, t);
    w_22 = t;
    t = term_s_40;
    a_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_40, w_22);
    t = b_9(g_3, a_23, w_22, t);
    t = if_verbose6_1_0(h_3, t);
    t = term_s_40;
    b_23 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, u_22);
    c_23 = t;
    t = (ATerm) ATempty;
    d_23 = t;
    t = SSL_table_put(b_23, c_23, d_23);
    t = (ATerm) ATmakeAppl(sym__3, term_s_40, (ATerm)ATmakeAppl(sym_Imported_1, u_22), (ATerm) ATempty);
    t = if_verbose4_1_0(i_3, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm m_87 (ATerm), ATerm t)
{
  ATerm u_40 = t;
  int v_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_40);
    }
  else
    {
      t = u_40;
      {
        ATerm w_40 = t;
        int x_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              t = filter_1_0(m_87, t);
              return(t);
            }
            t = Cons_2_0(m_87, j_3, t);
            ;
            LocalPopChoice(x_40);
          }
        else
          {
            t = w_40;
            {
              ATerm b_24 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_40 = ATgetFirst((ATermList) t);
                  b_24 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_24;
              t = filter_1_0(m_87, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm g_89 (ATerm), ATerm t)
{
  ATerm d_24 (ATerm t)
  {
    ATerm z_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_89(t);
        t = d_24(t);
        ;
        LocalPopChoice(a_41);
      }
    else
      {
        t = z_40;
      }
    return(t);
  }
  t = d_24(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_41;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_41);
    }
  else
    {
      t = b_41;
      {
        ATerm f_41 = t;
        int g_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_24 = NULL;
            t = term_k_41;
            e_24 = t;
            t = SSL_getenv(e_24);
            ;
            LocalPopChoice(g_41);
          }
        else
          {
            t = f_41;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = debug_1_0(l_3, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_l_41;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL;
  t = term_s_40;
  j_24 = t;
  t = term_n_41;
  k_24 = t;
  t = term_o_41;
  t = m_9(j_24, k_24, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm p_41 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_41;
      }
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
  t = term_q_41;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm f_24 = NULL;
  t = if_verbose5_1_0(k_3, t);
  f_24 = t;
  {
    ATerm r_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_24 = NULL,h_24 = NULL;
        t = term_s_40;
        g_24 = t;
        t = term_t_40;
        h_24 = t;
        t = term_v_41;
        t = m_9(g_24, h_24, t);
        ;
        LocalPopChoice(t_41);
      }
    else
      {
        t = r_41;
        {
          ATerm i_24 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          i_24 = t;
          t = repeat_1_0(m_3, t);
          t = i_24;
        }
      }
    t = f_24;
    t = if_verbose5_1_0(n_3, t);
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = debug_1_0(q_3, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_w_41;
  return(t);
}
ATerm c_26 (ATerm p_24, ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,u_24 = NULL;
  t = term_s_40;
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, p_24);
  u_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_40, (ATerm) ATmakeAppl(sym_Tool_1, p_24));
  t = m_9(s_24, u_24, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_42 = ATgetFirst((ATermList) t);
      if(match_cons(c_42, sym__2))
        {
          ATerm e_42 = ATgetArgument(c_42, 0);
          r_24 = ATgetArgument(c_42, 1);
        }
      else
        _fail(t);
      {
        ATerm d_42 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_24;
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = debug_1_0(v_3, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_w_41;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_s_40;
  t = table_getlist_0_0(t);
  t = debug_1_0(x_3, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_f_42;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm j_42 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(p_3, t);
      t = xtc_load_0_0(t);
      {
        ATerm v_24 = NULL,w_24 = NULL,e_25 = NULL;
        e_25 = t;
        if(match_cons(t, sym__2))
          {
            v_24 = ATgetArgument(t, 0);
            w_24 = ATgetArgument(t, 1);
            {
              ATerm n_42 = t;
              int o_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_25 = NULL,l_25 = NULL,m_25 = NULL;
                  t = term_s_40;
                  l_25 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, v_24);
                  m_25 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_s_40, (ATerm) ATmakeAppl(sym_Tool_1, v_24));
                  t = m_9(l_25, m_25, t);
                  {
                    ATerm t_3 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((w_24 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((i_25 != NULL) && (i_25 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            i_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(t_3, t);
                    t = not_null(i_25);
                  }
                  ;
                  LocalPopChoice(o_42);
                }
              else
                {
                  t = n_42;
                  t = c_26(e_25, t);
                }
            }
          }
        else
          {
            t = c_26(e_25, t);
          }
        t = if_verbose5_1_0(u_3, t);
      }
      ;
      LocalPopChoice(m_42);
    }
  else
    {
      t = j_42;
      {
        ATerm b_26 = NULL,n_6 = NULL,p_6 = NULL;
        b_26 = t;
        t = term_s_25;
        n_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_42), b_26), term_p_42);
        p_6 = t;
        t = SSL_printnl(n_6, p_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_42), b_26), term_p_42);
        t = if_verbose5_1_0(w_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm r_102 (ATerm), ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL;
  e_26 = t;
  t = r_102(t);
  t = xtc_find_0_0(t);
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_26, e_26);
  {
    ATerm y_3 (ATerm t)
    {
      ATerm g_26 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, f_26, e_26);
      t = v_8(f_26, e_26, t);
      t = term_r_42;
      g_26 = t;
      t = SSL_exit(g_26);
      return(t);
    }
    t = fork_and_wait_1_0(y_3, t);
    t = e_26;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm v_79 (ATerm), ATerm t)
{
  ATerm b_27 (ATerm t)
  {
    ATerm c_43 = t;
    int d_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, b_27, t);
        ;
        LocalPopChoice(d_43);
      }
    else
      {
        t = c_43;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_79(t);
      }
    return(t);
  }
  t = b_27(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_43 = t;
  int f_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_43);
    }
  else
    {
      t = e_43;
      {
        ATerm n_26 = NULL,o_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_26 = ATgetFirst((ATermList) t);
            o_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_26;
        {
          ATerm c_4 (ATerm t)
          {
            t = o_26;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(c_4, t);
        }
      }
    }
  return(t);
}
ATerm p_27 (ATerm e_27, ATerm t)
{
  ATerm g_27 = NULL;
  t = SSL_explode_term(e_27);
  if(match_cons(t, sym__2))
    {
      ATerm g_43 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_43) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_27;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
  l_27 = t;
  if(match_cons(t, sym__2))
    {
      j_27 = ATgetArgument(t, 0);
      k_27 = ATgetArgument(t, 1);
      {
        ATerm h_43 = t;
        int l_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 (ATerm t)
            {
              t = k_27;
              return(t);
            }
            t = j_27;
            t = at_end_1_0(d_4, t);
            ;
            LocalPopChoice(l_43);
          }
        else
          {
            t = h_43;
            t = p_27(l_27, t);
          }
      }
    }
  else
    {
      t = p_27(l_27, t);
    }
  return(t);
}
ATerm e_9 (ATerm i_87 (ATerm), ATerm r_38, ATerm p_38, ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
  t_27 = t;
  t = i_87(t);
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_27, r_38, p_38);
  t = n_9(u_27, r_38, p_38, t);
  {
    ATerm q_43 = t;
    int r_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_28 = NULL;
        t = term_w_43;
        b_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_27, term_w_43);
        t = m_9(u_27, b_28, t);
        ;
        LocalPopChoice(r_43);
      }
    else
      {
        t = q_43;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_27 = ATgetFirst((ATermList) t);
        w_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_w_43;
    x_27 = t;
    t = (ATerm) ATinsert(CheckATermList(w_27), (ATerm) ATinsert(CheckATermList(v_27), r_38));
    y_27 = t;
    t = SSL_table_put(u_27, x_27, y_27);
    t = t_27;
  }
  return(t);
}
ATerm debug_1_0 (ATerm p_91 (ATerm), ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,r_28 = NULL,s_28 = NULL;
  c_28 = t;
  t = p_91(t);
  d_28 = t;
  t = term_s_25;
  r_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_28), d_28);
  s_28 = t;
  t = SSL_printnl(r_28, s_28);
  t = c_28;
  return(t);
}
ATerm s_29 (ATerm b_29, ATerm t)
{
  t = b_29;
  {
    ATerm x_43 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_43 = ATgetArgument(t, 0);
            ATerm d_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_43;
      }
    t = term_e_44;
    t = debug_1_0(f_4, t);
    t = (ATerm) ATmakeAppl(sym__2, b_29, term_w_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm t_29 (ATerm f_29, ATerm j_29, ATerm k_29, ATerm t)
{
  t = SSL_open_file(f_29, j_29);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_f_44;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm n_29 = NULL,q_29 = NULL,r_29 = NULL;
  n_29 = t;
  if(match_cons(t, sym__2))
    {
      q_29 = ATgetArgument(t, 0);
      r_29 = ATgetArgument(t, 1);
      {
        ATerm g_44 = t;
        int h_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_29(n_29, t);
            ;
            LocalPopChoice(h_44);
          }
        else
          {
            t = g_44;
            t = t_29(q_29, r_29, n_29, t);
          }
      }
    }
  else
    {
      t = s_29(n_29, t);
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
  ATerm u_29 = NULL,v_29 = NULL;
  t = term_v_7;
  t = new_0_0(t);
  u_29 = t;
  t = term_i_44;
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_29, term_i_44);
  t = l_9(u_29, v_29, t);
  {
    ATerm j_44 = t;
    int k_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_29 = NULL,y_29 = NULL;
        w_29 = t;
        t = (ATerm) ATinsert(ATempty, term_v_9);
        y_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_29, (ATerm) ATinsert(ATempty, term_v_9));
        t = f_9(w_29, y_29, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(k_44);
      }
    else
      {
        t = j_44;
      }
  }
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  t = new_file_0_0(t);
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_30, term_w_9);
  t = open_file_0_0(t);
  t = term_v_7;
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_30, term_v_7);
  t = e_9(g_4, a_30, b_30, t);
  t = a_30;
  return(t);
}
ATerm xtc_generate_2_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm t)
{
  ATerm c_30 = NULL,e_30 = NULL;
  t = term_v_7;
  t = xtc_new_file_0_0(t);
  c_30 = t;
  t = g_103(t);
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_30, (ATerm) ATinsert(ATinsert(ATempty, c_30), term_y_9));
  t = conc_0_0(t);
  t = xtc_command_1_0(f_103, t);
  t = SSL_close_file(c_30);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_30);
  return(t);
}
ATerm h_9 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL;
  f_30 = t;
  {
    ATerm l_44 = t;
    int m_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_39, f_39);
        t = m_9(e_39, f_39, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_44 = ATgetFirst((ATermList) t);
            g_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_44);
        t = SSL_table_put(e_39, f_39, g_30);
        t = (ATerm) ATmakeAppl(sym__3, e_39, f_39, g_30);
      }
    else
      {
        t = l_44;
        t = SSL_table_remove(e_39, f_39);
        t = (ATerm) ATmakeAppl(sym__2, e_39, f_39);
      }
    t = f_30;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm h_30 = NULL,j_30 = NULL,k_30 = NULL,n_30 = NULL,o_30 = NULL;
  h_30 = t;
  t = f_87(t);
  j_30 = t;
  {
    ATerm o_44 = t;
    int p_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_30 = NULL;
        t = term_w_43;
        p_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_30, term_w_43);
        t = m_9(j_30, p_30, t);
        ;
        LocalPopChoice(p_44);
      }
    else
      {
        t = o_44;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_30 = ATgetFirst((ATermList) t);
        k_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_w_43;
    o_30 = t;
    t = SSL_table_put(j_30, o_30, k_30);
    t = n_30;
    {
      ATerm h_4 (ATerm t)
      {
        ATerm q_30 = NULL;
        q_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_30, q_30);
        t = h_9(j_30, q_30, t);
        return(t);
      }
      t = map_1_0(h_4, t);
      t = h_30;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm t)
{
  ATerm q_44 = t;
  int r_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_78(t);
      t = d_78(t);
      ;
      LocalPopChoice(r_44);
    }
  else
    {
      t = q_44;
      t = d_78(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_87 (ATerm), ATerm t)
{
  ATerm t_30 = NULL,v_30 = NULL,w_30 = NULL,y_30 = NULL,a_31 = NULL;
  t_30 = t;
  t = e_87(t);
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_30, term_w_43);
  {
    ATerm s_44 = t;
    int t_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_31 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_44 = ATgetArgument(t, 0);
            ATerm v_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_w_43;
        e_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_30, term_w_43);
        t = m_9(v_30, e_31, t);
        ;
        LocalPopChoice(t_44);
      }
    else
      {
        t = s_44;
        t = (ATerm) ATempty;
      }
    w_30 = t;
    t = term_w_43;
    y_30 = t;
    t = (ATerm) ATinsert(CheckATermList(w_30), (ATerm) ATempty);
    a_31 = t;
    t = SSL_table_put(v_30, y_30, a_31);
    t = t_30;
  }
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm w_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_31 = NULL;
      m_31 = t;
      t = SSL_remove(m_31);
      ;
      LocalPopChoice(x_44);
    }
  else
    {
      t = w_44;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_102 (ATerm), ATerm t)
{
  ATerm g_31 = NULL;
  t = begin_scope_1_0(k_4, t);
  {
    ATerm l_4 (ATerm t)
    {
      ATerm h_31 = NULL;
      h_31 = t;
      {
        ATerm y_44 = t;
        int z_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_31 = NULL,j_31 = NULL;
            t = term_t_9;
            i_31 = t;
            t = term_w_43;
            j_31 = t;
            t = term_a_45;
            t = m_9(i_31, j_31, t);
            ;
            LocalPopChoice(z_44);
          }
        else
          {
            t = y_44;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((g_31 != NULL) && (g_31 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              g_31 = ATgetFirst((ATermList) t);
            {
              ATerm b_45 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(g_31);
        t = map_1_0(m_4, t);
        t = h_31;
        t = end_scope_1_0(n_4, t);
      }
      return(t);
    }
    t = restore_always_2_0(d_102, l_4, t);
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,r_31 = NULL,s_31 = NULL,u_31 = NULL;
  o_31 = t;
  t = term_v_7;
  t = whoami_0_0(t);
  p_31 = t;
  t = term_s_25;
  r_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_45), p_31), term_c_45);
  s_31 = t;
  t = SSL_printnl(r_31, s_31);
  t = term_e_12;
  u_31 = t;
  t = SSL_exit(u_31);
  t = o_31;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,f_32 = NULL,h_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_32 = NULL,k_32 = NULL,n_32 = NULL;
      t = term_v_7;
      t = j_0(t);
      i_32 = t;
      t = term_e_45;
      k_32 = t;
      t = term_f_45;
      n_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_45, term_f_45, i_32);
      t = n_9(k_32, n_32, i_32, t);
      _fail(t);
    }
  else
    {
      ATerm v_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_31 = ATgetFirst((ATermList) t);
          a_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_32 = ATgetFirst((ATermList) t);
          h_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_31;
      t = h_0(t);
      t = f_32;
      t = i_0(t);
      v_32 = t;
      t = (ATerm) ATinsert(CheckATermList(h_32), v_32);
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm b_33 = NULL;
  b_33 = t;
  if(match_string(t, "-k"))
    {
      t = b_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_33;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
  f_33 = t;
  t = SSL_string_to_int(f_33);
  g_33 = t;
  t = term_g_45;
  h_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_45, g_33);
  t = p_9(h_33, g_33, t);
  t = f_33;
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_h_45;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, s_4, t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm l_33 = NULL;
  l_33 = t;
  if(match_string(t, "-S"))
    {
      t = l_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_33;
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm m_33 = NULL,o_33 = NULL;
  t = term_v_28;
  m_33 = t;
  t = term_n_12;
  o_33 = t;
  t = term_i_45;
  t = p_9(m_33, o_33, t);
  t = term_j_45;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_k_45;
  return(t);
}
ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm r_33 = NULL,y_33 = NULL,z_33 = NULL;
  r_33 = t;
  t = SSL_string_to_int(r_33);
  y_33 = t;
  t = term_v_28;
  z_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_28, y_33);
  t = p_9(z_33, y_33, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_33);
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_l_45;
  return(t);
}
ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm a_34 = NULL,f_34 = NULL;
  t = term_m_45;
  a_34 = t;
  t = term_v_7;
  f_34 = t;
  t = term_n_45;
  t = p_9(a_34, f_34, t);
  t = term_o_45;
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_p_45;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_45 = t;
  int t_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_4, u_4, v_4, t);
      ;
      LocalPopChoice(t_45);
    }
  else
    {
      t = s_45;
      {
        ATerm u_45 = t;
        int v_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_4, z_4, a_5, t);
            ;
            LocalPopChoice(v_45);
          }
        else
          {
            t = u_45;
            t = Option_3_0(b_5, c_5, g_5, t);
          }
      }
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm h_34 = NULL;
  h_34 = t;
  if(match_string(t, "-o"))
    {
      t = h_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_34;
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL;
  i_34 = t;
  t = term_y_9;
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_9, i_34);
  t = p_9(j_34, i_34, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_34);
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_w_45;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_5, i_5, j_5, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm n_34 = NULL;
  n_34 = t;
  if(match_string(t, "-i"))
    {
      t = n_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_34;
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  o_34 = t;
  t = term_z_9;
  p_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, o_34);
  t = p_9(p_34, o_34, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_34);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_x_45;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_5, l_5, n_5, t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm r_34 = NULL,t_34 = NULL,v_34 = NULL;
  r_34 = t;
  t = term_y_45;
  t_34 = t;
  t = term_z_45;
  v_34 = t;
  t = term_e_46;
  t = p_9(t_34, v_34, t);
  t = r_34;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_f_46;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm w_34 = NULL;
  w_34 = t;
  if(match_string(t, "-t"))
    {
      t = w_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--title", 0, ATtrue)))
        _fail(t);
      t = w_34;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL;
  b_35 = t;
  t = term_r_25;
  c_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_25, b_35);
  t = p_9(c_35, b_35, t);
  t = b_35;
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_g_46;
  return(t);
}
ATerm abox2html_options_0_0 (ATerm t)
{
  ATerm h_46 = t;
  int i_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(i_46);
    }
  else
    {
      t = h_46;
      {
        ATerm j_46 = t;
        int k_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(k_46);
          }
        else
          {
            t = j_46;
            {
              ATerm l_46 = t;
              int m_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  ;
                  LocalPopChoice(m_46);
                }
              else
                {
                  t = l_46;
                  {
                    ATerm n_46 = t;
                    int o_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        ;
                        LocalPopChoice(o_46);
                      }
                    else
                      {
                        t = n_46;
                        {
                          ATerm p_46 = t;
                          int q_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(o_5, p_5, r_5, t);
                              ;
                              LocalPopChoice(q_46);
                            }
                          else
                            {
                              t = p_46;
                              t = ArgOption_3_0(t_5, x_5, e_6, t);
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
  ATerm d_35 = NULL,f_35 = NULL,i_35 = NULL,n_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_7;
  t = whoami_0_0(t);
  d_35 = t;
  t = term_s_25;
  f_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_46), d_35);
  i_35 = t;
  t = SSL_printnl(f_35, i_35);
  t = term_e_12;
  n_35 = t;
  t = SSL_exit(n_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_s_46;
  t = get_config_0_0(t);
  return(t);
}
ATerm i_9 (ATerm d_37, ATerm e_37, ATerm t)
{
  ATerm t_46 = t;
  int u_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_37, e_37);
      ;
      LocalPopChoice(u_46);
    }
  else
    {
      t = t_46;
      t = SSL_addr(d_37, e_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm t)
{
  ATerm v_46 = t;
  int w_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_85(t);
      ;
      LocalPopChoice(w_46);
    }
  else
    {
      t = v_46;
      {
        ATerm q_35 = NULL,r_35 = NULL,u_35 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_35 = ATgetFirst((ATermList) t);
            r_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_35;
        t = foldr_2_0(x_85, y_85, t);
        u_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_35, u_35);
        t = y_85(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_n_12;
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_9(z_6, a_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_35 = NULL,v_6 = NULL,w_6 = NULL;
  t = times_0_0(t);
  v_6 = t;
  t = SSL_explode_term(v_6);
  if(match_cons(t, sym__2))
    {
      ATerm x_46 = ATgetArgument(t, 0);
      w_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6;
  t = foldr_2_0(h_6, k_6, t);
  z_35 = t;
  t = SSL_TicksToSeconds(z_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
  l_36 = t;
  if(match_cons(t, sym__2))
    {
      m_36 = ATgetArgument(t, 0);
      n_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_46 = t;
    int z_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_36;
        if((m_36 != t))
          {
            _fail(t);
          }
        t = l_36;
        ;
        LocalPopChoice(z_46);
      }
    else
      {
        t = y_46;
        t = (ATerm) ATmakeAppl(sym__2, m_36, n_36);
        {
          ATerm a_47 = t;
          int b_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_36, n_36);
              ;
              LocalPopChoice(b_47);
            }
          else
            {
              t = a_47;
              t = SSL_gtr(m_36, n_36);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_36, n_36);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_101 (ATerm), ATerm t)
{
  ATerm c_47 = t;
  int d_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_36 = NULL,u_36 = NULL;
      q_36 = t;
      t = term_v_28;
      t = get_config_0_0(t);
      u_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_36, term_e_12);
      t = geq_0_0(t);
      t = q_36;
      t = b_101(t);
      ;
      LocalPopChoice(d_47);
    }
  else
    {
      t = c_47;
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
  t = run_time_0_0(t);
  x_36 = t;
  t = term_v_7;
  t = whoami_0_0(t);
  y_36 = t;
  t = term_s_25;
  z_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_47), x_36), term_a_29), y_36);
  a_37 = t;
  t = SSL_printnl(z_36, a_37);
  t = (ATerm) ATmakeAppl(sym__2, term_s_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_47), x_36), term_a_29), y_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_12;
  b_37 = t;
  t = SSL_exit(b_37);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm f_47 = t;
  int g_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(g_47);
    }
  else
    {
      t = f_47;
      {
        ATerm h_47 = t;
        int i_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(i_47);
          }
        else
          {
            t = h_47;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_73 (ATerm), ATerm t)
{
  ATerm j_47 = t;
  int k_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_47;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_47);
    }
  else
    {
      t = j_47;
      t = fetch_1_0(m_6, t);
    }
  t = v_73(t);
  return(t);
}
ATerm map_1_0 (ATerm f_79 (ATerm), ATerm t)
{
  ATerm c_37 (ATerm t)
  {
    ATerm m_47 = t;
    int n_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(n_47);
      }
    else
      {
        t = m_47;
        t = Cons_2_0(f_79, c_37, t);
      }
    return(t);
  }
  t = c_37(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_37 = NULL,i_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_37 = ATgetFirst((ATermList) t);
      i_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_37 = NULL,r_37 = NULL;
        t = i_37;
        t = g_0(t);
        p_37 = t;
        t = g_37;
        t = e_0(t);
        r_37 = t;
        t = i_37;
        {
          ATerm q_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(p_37), r_37);
            return(t);
          }
          t = reverse_acc_2_0(e_0, q_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_7;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm w_71 (ATerm), ATerm t)
{
  ATerm s_37 = NULL,z_37 = NULL,a_38 = NULL,d_38 = NULL,p_0 = NULL,q_0 = NULL;
  d_38 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_38);
  s_37 = t;
  t = z_37;
  t = w_71(t);
  a_38 = t;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_38);
  p_0 = t;
  t = SSLsetAnnotations(p_0, s_37);
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm u_38 = NULL;
  u_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_38), term_o_47);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL;
  ATerm p_47 = t;
  int q_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_46;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_47);
    }
  else
    {
      t = p_47;
      t = fetch_1_0(r_6, t);
    }
  t = term_r_47;
  t = echo_0_0(t);
  t = term_e_45;
  g_38 = t;
  t = term_f_45;
  h_38 = t;
  t = term_s_47;
  t = m_9(g_38, h_38, t);
  t = reverse_acc_2_0(_id, s_6, t);
  t = map_1_0(t_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm x_71 (ATerm), ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL,c_39 = NULL,r_0 = NULL,s_0 = NULL;
  c_39 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      w_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_39);
  v_38 = t;
  t = w_38;
  t = x_71(t);
  x_38 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, x_38);
  r_0 = t;
  t = SSLsetAnnotations(r_0, v_38);
  return(t);
}
ATerm fetch_1_0 (ATerm p_79 (ATerm), ATerm t)
{
  ATerm k_39 (ATerm t)
  {
    ATerm t_47 = t;
    int u_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(p_79, _id, t);
        ;
        LocalPopChoice(u_47);
      }
    else
      {
        t = t_47;
        t = Cons_2_0(_id, k_39, t);
      }
    return(t);
  }
  t = k_39(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL;
  m_39 = t;
  {
    ATerm v_47 = t;
    int w_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_39;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_47 = ATgetFirst((ATermList) t);
                ATerm y_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_39;
          }
        ;
        LocalPopChoice(w_47);
      }
    else
      {
        t = v_47;
        t = (ATerm) ATinsert(ATempty, m_39);
      }
    n_39 = t;
    t = term_u_26;
    o_39 = t;
    t = SSL_printnl(o_39, n_39);
    t = m_39;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_46;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm t_39 = NULL,v_39 = NULL;
  t = term_z_47;
  t_39 = t;
  t = term_v_7;
  v_39 = t;
  t = term_a_48;
  t = p_9(t_39, v_39, t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_b_48;
  return(t);
}
ATerm b_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,j_40 = NULL,k_40 = NULL;
  t = term_z_47;
  d_40 = t;
  t = term_v_7;
  e_40 = t;
  t = term_a_48;
  t = p_9(d_40, e_40, t);
  t = term_c_48;
  j_40 = t;
  t = term_v_7;
  k_40 = t;
  t = term_d_48;
  t = p_9(j_40, k_40, t);
  t = term_e_48;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_f_48;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_48 = t;
  int h_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_6, x_6, y_6, t);
      ;
      LocalPopChoice(h_48);
    }
  else
    {
      t = g_48;
      t = Option_3_0(b_7, c_7, d_7, t);
    }
  return(t);
}
ATerm p_9 (ATerm n_56, ATerm o_56, ATerm t)
{
  ATerm l_40 = NULL;
  t = term_a_28;
  l_40 = t;
  t = SSL_table_put(l_40, n_56, o_56);
  t = (ATerm) ATmakeAppl(sym__3, term_a_28, n_56, o_56);
  return(t);
}
ATerm m_9 (ATerm q_40, ATerm r_40, ATerm t)
{
  t = SSL_table_get(q_40, r_40);
  return(t);
}
ATerm n_9 (ATerm z_38, ATerm a_39, ATerm y_38, ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
  n_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_38, a_39);
  {
    ATerm i_48 = t;
    int j_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_48 = ATgetArgument(t, 0);
            ATerm l_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_38, a_39);
        t = m_9(z_38, a_39, t);
        ;
        LocalPopChoice(j_48);
      }
    else
      {
        t = i_48;
        t = (ATerm) ATempty;
      }
    o_40 = t;
    t = (ATerm) ATinsert(CheckATermList(o_40), y_38);
    p_40 = t;
    t = SSL_table_put(z_38, a_39, p_40);
    t = n_40;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm e_41 = NULL,h_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_41 = NULL,j_41 = NULL,m_41 = NULL;
      t = term_v_7;
      t = d_0(t);
      i_41 = t;
      t = term_e_45;
      j_41 = t;
      t = term_f_45;
      m_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_45, term_f_45, i_41);
      t = n_9(j_41, m_41, i_41, t);
      _fail(t);
    }
  else
    {
      ATerm s_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_41 = ATgetFirst((ATermList) t);
          h_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_41;
      t = a_0(t);
      t = term_v_7;
      t = c_0(t);
      s_41 = t;
      t = (ATerm) ATinsert(CheckATermList(h_41), s_41);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_66 (ATerm), ATerm y_66 (ATerm), ATerm t)
{
  ATerm u_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,t_0 = NULL,u_0 = NULL;
  b_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_41 = ATgetFirst((ATermList) t);
      y_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_42);
  u_41 = t;
  t = x_41;
  t = x_66(t);
  z_41 = t;
  t = y_41;
  t = y_66(t);
  a_42 = t;
  u_0 = t;
  t = (ATerm) ATinsert(CheckATermList(a_42), z_41);
  t_0 = t;
  t = SSLsetAnnotations(t_0, u_41);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL;
  h_42 = t;
  t = term_s_46;
  i_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_46, h_42);
  t = p_9(i_42, h_42, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, h_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_93 (ATerm), ATerm t)
{
  ATerm g_42 = NULL;
  g_42 = t;
  {
    ATerm m_48 = t;
    int n_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_48;
        t = y_93(t);
        ;
        LocalPopChoice(n_48);
      }
    else
      {
        t = m_48;
      }
    t = g_42;
    {
      ATerm f_7 (ATerm t)
      {
        ATerm p_48 = t;
        int q_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_48 = t;
            int s_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(s_48);
              }
            else
              {
                t = r_48;
                t = y_93(t);
                t = Cons_2_0(_id, f_7, t);
              }
            ;
            LocalPopChoice(q_48);
          }
        else
          {
            t = p_48;
            {
              ATerm k_42 = NULL,l_42 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_42 = ATgetFirst((ATermList) t);
                  l_42 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_42), (ATerm) ATmakeAppl(sym_Undefined_1, k_42));
            }
          }
        return(t);
      }
      t = Cons_2_0(e_7, f_7, t);
    }
  }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm z_42 = NULL;
  z_42 = t;
  if(match_string(t, "--help"))
    {
      t = z_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_42;
        }
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL;
  t = term_l_47;
  a_43 = t;
  t = term_v_7;
  b_43 = t;
  t = term_t_48;
  t = p_9(a_43, b_43, t);
  t = term_u_48;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_v_48;
  return(t);
}
ATerm k_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL;
  s_42 = t;
  t = term_e_45;
  v_42 = t;
  t = term_f_45;
  w_42 = t;
  t = (ATerm) ATempty;
  x_42 = t;
  t = SSL_table_put(v_42, w_42, x_42);
  t = s_42;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm w_48 = t;
      int x_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_93(t);
          ;
          LocalPopChoice(x_48);
        }
      else
        {
          t = w_48;
          {
            ATerm y_48 = t;
            int z_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_7, i_7, j_7, t);
                ;
                LocalPopChoice(z_48);
              }
            else
              {
                t = y_48;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_7, t);
    {
      ATerm c_49 = t;
      int d_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_43 = NULL;
          m_43 = t;
          {
            ATerm e_49 = t;
            int f_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_7 = NULL;
                t = m_43;
                {
                  ATerm g_49 = t;
                  int h_49 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_47;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(h_49);
                    }
                  else
                    {
                      t = g_49;
                      t = fetch_1_0(k_7, t);
                    }
                  t = m_43;
                  t = default_system_usage_0_0(t);
                  t = term_n_12;
                  m_7 = t;
                  t = SSL_exit(m_7);
                }
                ;
                LocalPopChoice(f_49);
              }
            else
              {
                t = e_49;
                {
                  ATerm q_7 = NULL;
                  t = term_z_47;
                  t = get_config_0_0(t);
                  t = m_43;
                  t = default_system_about_0_0(t);
                  t = term_n_12;
                  q_7 = t;
                  t = SSL_exit(q_7);
                }
              }
          }
          ;
          LocalPopChoice(d_49);
        }
      else
        {
          t = c_49;
          {
            ATerm i_49 = t;
            int j_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
                ATerm l_7 (ATerm t)
                {
                  ATerm n_7 (ATerm t)
                  {
                    if(((t_42 != NULL) && (t_42 != t)))
                      _fail(t);
                    else
                      t_42 = t;
                    return(t);
                  }
                  t = Undefined_1_0(n_7, t);
                  return(t);
                }
                t = fetch_1_0(l_7, t);
                t = term_s_25;
                n_43 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_42)), term_k_49);
                o_43 = t;
                t = SSL_printnl(n_43, o_43);
                t = (ATerm) ATmakeAppl(sym__2, term_s_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_42)), term_k_49));
                t = default_system_usage_0_0(t);
                t = term_e_12;
                p_43 = t;
                t = SSL_exit(p_43);
                ;
                LocalPopChoice(j_49);
              }
            else
              {
                t = i_49;
              }
          }
        }
      u_42 = t;
      t = term_e_45;
      y_42 = t;
      t = SSL_table_destroy(y_42);
      t = u_42;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL;
  t = parse_options_1_0(x_73, t);
  s_43 = t;
  t = term_l_49;
  t_43 = t;
  t = SSL_table_create(t_43);
  t = term_l_49;
  u_43 = t;
  t = term_m_49;
  v_43 = t;
  t = SSL_table_put(u_43, v_43, s_43);
  t = s_43;
  t = z_73(t);
  {
    ATerm n_49 = t;
    int o_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_73, t);
        ;
        LocalPopChoice(o_49);
      }
    else
      {
        t = n_49;
        {
          ATerm p_49 = t;
          int q_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_74(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(q_49);
            }
          else
            {
              t = p_49;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm r_49 = t;
  int s_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_44 = NULL;
      c_44 = t;
      t = term_y_45;
      t = get_config_0_0(t);
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("gen-css", 0, ATtrue)))
        _fail(t);
      t = c_44;
      t = xtc_temp_files_1_0(p_7, t);
      ;
      LocalPopChoice(s_49);
    }
  else
    {
      t = r_49;
      t = abox2html_0_0(t);
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = xtc_generate_2_0(r_7, pass_verbose_0_0, t);
  t = copy_to_1_0(s_7, t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_t_49;
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm u_49 = t;
  int x_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_9;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_49);
    }
  else
    {
      t = u_49;
      t = term_u_26;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2html_options_0_0, default_usage_0_0, _id, o_7, t);
  return(t);
}
