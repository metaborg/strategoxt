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
ATerm term_o_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_g_42;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_c_41;
ATerm term_z_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_f_39;
ATerm term_k_38;
ATerm term_h_38;
ATerm term_d_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_s_37;
ATerm term_p_37;
ATerm term_m_37;
ATerm term_j_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
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
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
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
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_f_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_y_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_m_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_e_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_m_29;
ATerm term_d_29;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_f_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_t_25;
ATerm term_r_25;
ATerm term_p_25;
ATerm term_m_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_o_18;
ATerm term_b_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_h_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_x_10;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_w_8;
void init_constant_terms (void)
{
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Dec", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Nov", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Oct", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Sep", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Aug", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Jul", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Jun", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("May", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Apr", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Mar", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Feb", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Jan", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("December", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("November", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("October", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("September", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("August", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("July", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("June", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("April", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("March", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("February", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("January", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Sat", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Fri", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Thu", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Wed", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Tue", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Mon", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Sun", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Saturday", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Friday", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Thursday", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Wednesday", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuesday", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Monday", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Sunday", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("p.m.", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("a.m.", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Saturday_0);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Friday_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Thursday_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Wednesday_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Tuesday_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Monday_0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_Sunday_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_December_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_November_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_October_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_September_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_August_0);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_July_0);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_June_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_May_0);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_April_0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_March_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_February_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_January_0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("EEEE", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("d", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("MMMM", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("yyyy", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("HH", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("mm", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ss", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--title", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no title specified for HTML document", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("<!-- \n", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   This file is generated at ", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" \n", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   by abox2html (C) 2001 Merijn de Jonge (mdejonge@cwi.nl)\n", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-->\n", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("<!doctype html public \"-//W3C//DTD WWW HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/loose.dtd\"> \n", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("<html>\n", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("  <head>\n", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("    <title>", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("</title>\n", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("    <link rel=\"stylesheet\" type=\"text/css\" href=\"boxstyle.css\">\n", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("  </head>\n", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("  <body>\n", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-html", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("  </body>\n", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("</html>\n", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_30, term_z_11, term_r_30);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_30, term_x_12, term_u_30);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_30, term_w_12, term_y_30);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_31, term_t_12, term_f_31);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_31, term_q_12, term_p_31);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_31, term_s_31, term_v_31);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_31, term_y_31, term_z_31);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_32, term_s_12, term_e_32);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_32, term_h_32, term_i_32);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_32, term_l_32, term_m_32);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_32, term_r_12, term_s_32);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_32, term_v_12, term_w_32);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_32, term_z_32, term_a_33);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_33, term_o_12, term_d_33);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_33, term_g_33, term_h_33);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_33, term_k_33, term_l_33);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_33, term_o_33, term_p_33);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_33, term_s_33, term_t_33);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_33, term_b_13, term_w_33);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_33, term_p_12, term_z_33);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_34, term_y_12, term_c_34);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_34, term_f_34, term_g_34);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_34, term_j_34, term_k_34);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_34, term_n_34, term_o_34);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_34, term_u_12, term_r_34);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_34, term_u_34, term_v_34);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_34, term_y_34, term_z_34);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_35, term_c_35, term_d_35);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css-boxstyle", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_12);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Only generate cascading style sheet", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-t title    Title of HTML document", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(sym__3, term_l_42, term_m_42, term_w_8);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm xtc_close_fd_0_0 (ATerm);
ATerm finally_2_0 (ATerm l_71 (ATerm), ATerm m_71 (ATerm), ATerm);
ATerm File_as_fd_1_0 (ATerm y_94 (ATerm), ATerm);
ATerm STDERR__FILENO_0_0 (ATerm);
ATerm STDOUT__FILENO_0_0 (ATerm);
ATerm STDIN__FILENO_0_0 (ATerm);
ATerm xtc_open_fd_0_0 (ATerm);
ATerm xtc_new_file_name_0_0 (ATerm);
ATerm xtc_cat_0_0 (ATerm);
ATerm print_to_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm w_84 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm y_65 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm);
ATerm month2abbr_0_0 (ATerm);
ATerm month2text_0_0 (ATerm);
ATerm lt_0_0 (ATerm);
ATerm leq_lt_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm comp_comp_2_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm);
ATerm leq_leq_0_0 (ATerm);
ATerm day_of_week2abbr_0_0 (ATerm);
ATerm day_of_week2text_0_0 (ATerm);
ATerm while_not_2_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm);
ATerm for_3_0 (ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm);
ATerm copy_0_0 (ATerm);
ATerm copy_char_0_0 (ATerm);
ATerm pos_0_0 (ATerm);
ATerm align_helper_0_0 (ATerm);
ATerm align_right_0_0 (ATerm);
ATerm foldr_3_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm);
ATerm length_0_0 (ATerm);
ATerm string_length_0_0 (ATerm);
ATerm month2index_0_0 (ATerm);
ATerm date_pattern_to_int_0_0 (ATerm);
ATerm date_pattern_to_string_0_0 (ATerm);
ATerm date_format_0_0 (ATerm);
ATerm index2day_of_week_0_0 (ATerm);
ATerm index2month_0_0 (ATerm);
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm);
ATerm epoch2local_time_0_0 (ATerm);
ATerm now_epoch_time_0_0 (ATerm);
ATerm now_local_time_0_0 (ATerm);
ATerm create_time_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm get_title_0_0 (ATerm);
ATerm create_header_0_0 (ATerm);
ATerm xtc_io_1_0 (ATerm g_95 (ATerm), ATerm);
ATerm abox2html_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm y_72 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm a_94 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_80 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm l_82 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm m_84 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm z_93 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm b_94 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm t_76 (ATerm), ATerm u_76 (ATerm), ATerm);
ATerm union_1_0 (ATerm p_76 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm q_80 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm t_95 (ATerm), ATerm);
ATerm assert_1_0 (ATerm n_80 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm p_84 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_generate_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm k_80 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm j_71 (ATerm), ATerm k_71 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm j_80 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm f_95 (ATerm), ATerm);
ATerm xtc_output_1_0 (ATerm h_95 (ATerm), ATerm);
ATerm gen_css_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm abox2html_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm);
ATerm crush_2_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_93 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm c_67 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm d_65 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm e_65 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm w_72 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm a_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm c_73 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm i_84 (ATerm), ATerm);
ATerm map_1_0 (ATerm m_72 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm u_70 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm f_87 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm e_60 (ATerm), ATerm f_60 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_87 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm c_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_67 (ATerm), ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm h_67 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm i_67 (ATerm), ATerm j_67 (ATerm), ATerm);
ATerm io_abox2html_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm xtc_close_fd_0_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm j_1 = NULL;
    j_1 = t;
    {
      ATerm u_8 = t;
      int v_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_1 = NULL;
          t = term_w_8;
          t = STDIN__FILENO_0_0(t);
          l_1 = t;
          if((j_1 != t))
            {
              _fail(t);
            }
          t = l_1;
          ;
          LocalPopChoice(v_8);
        }
      else
        {
          t = u_8;
          {
            ATerm x_8 = t;
            int y_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_1 = NULL;
                t = term_w_8;
                t = STDOUT__FILENO_0_0(t);
                n_1 = t;
                if((j_1 != t))
                  {
                    _fail(t);
                  }
                t = n_1;
                ;
                LocalPopChoice(y_8);
              }
            else
              {
                t = x_8;
                {
                  ATerm z_8 = t;
                  int a_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_1 = NULL;
                      t = term_w_8;
                      t = STDERR__FILENO_0_0(t);
                      q_1 = t;
                      if((j_1 != t))
                        {
                          _fail(t);
                        }
                      t = q_1;
                      ;
                      LocalPopChoice(a_9);
                    }
                  else
                    {
                      t = z_8;
                      t = SSL_close(j_1);
                    }
                }
              }
          }
        }
    }
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    t = term_w_8;
    return(t);
  }
  t = finally_2_0(c_0, e_0, t);
  return(t);
}
ATerm finally_2_0 (ATerm l_71 (ATerm), ATerm m_71 (ATerm), ATerm t)
{
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_71(t);
      LocalPopChoice(c_9);
      {
        ATerm u_1 = NULL;
        u_1 = t;
        t = m_71(t);
        t = u_1;
      }
    }
  else
    {
      t = b_9;
      {
        ATerm v_1 = NULL;
        v_1 = t;
        t = m_71(t);
        t = v_1;
        _fail(t);
      }
    }
  return(t);
}
ATerm File_as_fd_1_0 (ATerm y_94 (ATerm), ATerm t)
{
  ATerm w_1 = NULL;
  t = xtc_open_fd_0_0(t);
  w_1 = t;
  {
    ATerm n_0 (ATerm t)
    {
      ATerm y_1 = NULL;
      y_1 = t;
      {
        ATerm o_0 (ATerm t)
        {
          t = w_1;
          t = xtc_close_fd_0_0(t);
          return(t);
        }
        t = try_1_0(o_0, t);
        t = y_1;
      }
      return(t);
    }
    t = finally_2_0(y_94, n_0, t);
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
  ATerm f_2 = NULL,g_2 = NULL;
  g_2 = t;
  if(match_cons(t, sym_FILE_1))
    {
      f_2 = ATgetArgument(t, 0);
      t = SSL_open(f_2);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          t = term_w_8;
          t = STDIN__FILENO_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_stdout_0))
            {
              t = term_w_8;
              t = STDOUT__FILENO_0_0(t);
            }
          else
            {
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
              t = term_w_8;
              t = STDERR__FILENO_0_0(t);
            }
        }
    }
  return(t);
}
ATerm xtc_new_file_name_0_0 (ATerm t)
{
  ATerm j_2 = NULL;
  t = new_file_0_0(t);
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_2, term_w_8);
  {
    ATerm p_0 (ATerm t)
    {
      t = term_d_9;
      return(t);
    }
    t = assert_1_0(p_0, t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, j_2);
  }
  return(t);
}
ATerm xtc_cat_0_0 (ATerm t)
{
  ATerm l_2 = NULL,o_2 = NULL,p_2 = NULL;
  l_2 = t;
  t = xtc_new_file_name_0_0(t);
  o_2 = t;
  t = xtc_open_fd_0_0(t);
  p_2 = t;
  t = l_2;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm r_0 (ATerm t)
      {
        ATerm r_2 = NULL;
        r_2 = t;
        t = SSL_fdcopy(r_2, p_2);
        return(t);
      }
      t = File_as_fd_1_0(r_0, t);
      return(t);
    }
    t = map_1_0(q_0, t);
    t = p_2;
    t = xtc_close_fd_0_0(t);
    t = o_2;
  }
  return(t);
}
ATerm print_to_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL;
  s_2 = t;
  t = xtc_new_file_0_0(t);
  t_2 = t;
  t = SSL_print(t_2, s_2);
  t = SSL_close_file(t_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_2);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL;
  v_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = v_2;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          w_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(w_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm w_84 (ATerm), ATerm t)
{
  ATerm b_3 = NULL,d_3 = NULL,e_3 = NULL;
  if(match_cons(t, sym__2))
    {
      b_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_3, term_e_9);
  t = open_stream_0_0(t);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_3, d_3);
  t = w_84(t);
  t = fclose_0_0(t);
  t = d_3;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm f_3 = NULL,i_3 = NULL,l_3 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm f_9 = ATgetArgument(t, 0);
        if(match_cons(f_9, sym_Stream_1))
          {
            f_3 = ATgetArgument(f_9, 0);
          }
        else
          _fail(t);
        i_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(f_3, i_3);
    l_3 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, l_3);
    return(t);
  }
  t = WriteToFile_1_0(s_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL;
  n_3 = t;
  t = xtc_new_file_0_0(t);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_3, n_3);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(o_3);
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_3);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(c_96, d_96, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL;
  o_4 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm u_0 = NULL,v_0 = NULL;
      t = o_4;
      t = xtc_new_file_0_0(t);
      u_0 = t;
      t = m_0(t);
      v_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_0, (ATerm) ATinsert(ATinsert(ATempty, u_0), term_g_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(u_0);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_0);
    }
  else
    {
      ATerm z_0 = NULL,a_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_4;
      t = xtc_new_file_0_0(t);
      z_0 = t;
      t = m_0(t);
      a_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_0), term_g_9), p_4), term_h_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(z_0);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_0);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm y_65 (ATerm), ATerm t)
{
  ATerm s_4 = NULL,v_4 = NULL,y_4 = NULL,z_4 = NULL;
  z_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_4);
  s_4 = t;
  t = v_4;
  t = y_65(t);
  y_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, y_4), s_4);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm t)
{
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_9 = t;
      int l_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(l_9);
        }
      else
        {
          t = k_9;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(j_9);
      t = xtc_transform_file_2_0(v_95, w_95, t);
    }
  else
    {
      t = i_9;
      t = xtc_transform_term_2_0(v_95, w_95, t);
    }
  return(t);
}
ATerm month2abbr_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_m_9;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_n_9;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_o_9;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_p_9;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_q_9;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_r_9;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_s_9;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_t_9;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_u_9;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_v_9;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_w_9;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_x_9;
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
      t = term_y_9;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_z_9;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_a_10;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_b_10;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_c_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_d_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_f_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_t_9;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_g_10;
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
                                              t = term_i_10;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_j_10;
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
  ATerm k_10 = t;
  if((PushChoice() == 0))
    {
      t = geq_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_10;
    }
  return(t);
}
ATerm leq_lt_0_0 (ATerm t)
{
  t = comp_comp_2_0(leq_0_0, lt_0_0, t);
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm m_10 = t;
  if((PushChoice() == 0))
    {
      ATerm s_5 = NULL,t_5 = NULL;
      if(match_cons(t, sym__2))
        {
          s_5 = ATgetArgument(t, 0);
          t_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(s_5, t_5);
            ;
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            t = SSL_gtr(s_5, t_5);
          }
        t = (ATerm) ATmakeAppl(sym__2, s_5, t_5);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_10;
    }
  return(t);
}
ATerm comp_comp_2_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,x_5 = NULL,z_5 = NULL;
  if(match_cons(t, sym__3))
    {
      u_5 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
      z_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_5, x_5);
  t = f_80(t);
  t = (ATerm) ATmakeAppl(sym__2, x_5, z_5);
  t = g_80(t);
  t = (ATerm) ATmakeAppl(sym__3, u_5, x_5, z_5);
  return(t);
}
ATerm leq_leq_0_0 (ATerm t)
{
  t = comp_comp_2_0(leq_0_0, leq_0_0, t);
  return(t);
}
ATerm day_of_week2abbr_0_0 (ATerm t)
{
  if(match_cons(t, sym_Saturday_0))
    {
      t = term_q_10;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_t_10;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_x_10;
            }
          else
            {
              if(match_cons(t, sym_Wednesday_0))
                {
                  t = term_i_11;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_j_11;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_k_11;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_l_11;
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
      t = term_m_11;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_n_11;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_o_11;
            }
          else
            {
              if(match_cons(t, sym_Wednesday_0))
                {
                  t = term_p_11;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_q_11;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_r_11;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_s_11;
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm while_not_2_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_83(t);
        ;
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        t = b_83(t);
        t = a_6(t);
      }
    return(t);
  }
  t = a_6(t);
  return(t);
}
ATerm for_3_0 (ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm t)
{
  t = d_83(t);
  t = while_not_2_0(e_83, f_83, t);
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm b_6 = NULL,c_6 = NULL;
    if(match_cons(t, sym__2))
      {
        b_6 = ATgetArgument(t, 0);
        c_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, b_6, c_6, (ATerm) ATempty);
    return(t);
  }
  ATerm w_0 (ATerm t)
  {
    ATerm d_6 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm v_11 = ATgetArgument(t, 0);
        if(((ATgetType(v_11) != AT_INT) || (ATgetInt((ATermInt) v_11) != 0)))
          _fail(t);
        {
          ATerm w_11 = ATgetArgument(t, 1);
        }
        d_6 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = d_6;
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    ATerm f_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
    if(match_cons(t, sym__3))
      {
        f_6 = ATgetArgument(t, 0);
        i_6 = ATgetArgument(t, 1);
        j_6 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, f_6, term_z_11);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, f_6, term_z_11);
    {
      ATerm a_12 = t;
      int b_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(f_6, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(b_12);
        }
      else
        {
          t = a_12;
          t = SSL_subtr(f_6, (ATerm) ATmakeInt(1));
        }
      k_6 = t;
      t = (ATerm) ATmakeAppl(sym__3, k_6, i_6, (ATerm) ATinsert(CheckATermList(j_6), i_6));
    }
    return(t);
  }
  t = for_3_0(t_0, w_0, x_0, t);
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  ATerm m_6 = NULL;
  t = copy_0_0(t);
  m_6 = t;
  t = SSL_implode_string(m_6);
  return(t);
}
ATerm pos_0_0 (ATerm t)
{
  ATerm n_6 = NULL;
  n_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_6, term_c_12);
  t = geq_0_0(t);
  t = n_6;
  return(t);
}
ATerm align_helper_0_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,r_6 = NULL,s_6 = NULL;
  if(match_cons(t, sym__3))
    {
      o_6 = ATgetArgument(t, 0);
      p_6 = ATgetArgument(t, 1);
      r_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_6;
  t = string_length_0_0(t);
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_6, s_6);
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(r_6, s_6);
        ;
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        t = SSL_subtr(r_6, s_6);
      }
    {
      ATerm f_12 = t;
      int g_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = pos_0_0(t);
          LocalPopChoice(g_12);
          {
            ATerm t_6 = NULL;
            t_6 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_6, o_6);
            t = copy_char_0_0(t);
          }
        }
      else
        {
          t = f_12;
          t = term_h_12;
        }
    }
  }
  return(t);
}
ATerm align_right_0_0 (ATerm t)
{
  ATerm v_6 = NULL,x_6 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm i_12 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
      {
        ATerm j_12 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = align_helper_0_0(t);
  x_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_6, v_6);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm foldr_3_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm t)
{
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_79(t);
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      {
        ATerm i_7 = NULL,k_7 = NULL,t_7 = NULL,u_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_7 = ATgetFirst((ATermList) t);
            k_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_7;
        t = g_79(t);
        t_7 = t;
        t = k_7;
        t = foldr_3_0(e_79, f_79, g_79, t);
        u_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_7, u_7);
        t = f_79(t);
      }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    t = term_c_12;
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    ATerm y_7 = NULL,z_7 = NULL;
    if(match_cons(t, sym__2))
      {
        y_7 = ATgetArgument(t, 0);
        z_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm m_12 = t;
      int n_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(y_7, z_7);
          ;
          LocalPopChoice(n_12);
        }
      else
        {
          t = m_12;
          t = SSL_addr(y_7, z_7);
        }
    }
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    t = term_z_11;
    return(t);
  }
  t = foldr_3_0(y_0, b_1, c_1, t);
  return(t);
}
ATerm string_length_0_0 (ATerm t)
{
  ATerm a_8 = NULL;
  a_8 = t;
  t = SSL_explode_string(a_8);
  t = length_0_0(t);
  return(t);
}
ATerm month2index_0_0 (ATerm t)
{
  if(match_cons(t, sym_December_0))
    {
      t = term_o_12;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_p_12;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_q_12;
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
                              t = term_u_12;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_v_12;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_w_12;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_x_12;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_z_11;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_c_12;
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
  ATerm x_11 (ATerm l_10, ATerm n_10, ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_12, l_10, term_b_13);
    t = leq_leq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, l_10, term_y_12);
    {
      ATerm d_13 = t;
      int e_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(l_10, (ATerm) ATmakeInt(12));
          ;
          LocalPopChoice(e_13);
        }
      else
        {
          t = d_13;
          t = SSL_subtr(l_10, (ATerm) ATmakeInt(12));
        }
    }
    return(t);
  }
  ATerm y_11 (ATerm r_10, ATerm s_10, ATerm t)
  {
    t = SSL_mod(r_10, (ATerm) ATmakeInt(100));
    return(t);
  }
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
  z_10 = t;
  if(match_cons(t, sym__2))
    {
      a_11 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11;
  if(match_string(t, "ss"))
    {
      t = b_11;
      if(match_cons(t, sym_ComponentTime_3))
        {
          ATerm f_13 = ATgetArgument(t, 0);
          g_11 = ATgetArgument(t, 1);
          {
            ATerm i_13 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = g_11;
      if(match_cons(t, sym_DayTime_3))
        {
          ATerm k_13 = ATgetArgument(t, 0);
          ATerm l_13 = ATgetArgument(t, 1);
          w_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_10;
    }
  else
    {
      if(match_string(t, "mm"))
        {
          t = b_11;
          if(match_cons(t, sym_ComponentTime_3))
            {
              ATerm n_13 = ATgetArgument(t, 0);
              g_11 = ATgetArgument(t, 1);
              {
                ATerm o_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = g_11;
          if(match_cons(t, sym_DayTime_3))
            {
              ATerm p_13 = ATgetArgument(t, 0);
              v_10 = ATgetArgument(t, 1);
              {
                ATerm q_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = v_10;
        }
      else
        {
          if(match_string(t, "KK"))
            {
              t = b_11;
              if(match_cons(t, sym_ComponentTime_3))
                {
                  ATerm s_13 = ATgetArgument(t, 0);
                  g_11 = ATgetArgument(t, 1);
                  {
                    ATerm w_13 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = g_11;
              if(match_cons(t, sym_DayTime_3))
                {
                  u_10 = ATgetArgument(t, 0);
                  {
                    ATerm y_13 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm b_14 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              {
                ATerm c_14 = t;
                int d_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__3, term_y_12, u_10, term_b_13);
                    t = leq_leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, u_10, term_y_12);
                    {
                      ATerm e_14 = t;
                      int f_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = SSL_subti(u_10, (ATerm) ATmakeInt(12));
                          ;
                          LocalPopChoice(f_14);
                        }
                      else
                        {
                          t = e_14;
                          t = SSL_subtr(u_10, (ATerm) ATmakeInt(12));
                        }
                    }
                    ;
                    LocalPopChoice(d_14);
                  }
                else
                  {
                    t = c_14;
                    t = (ATerm) ATmakeAppl(sym__3, term_c_12, u_10, term_y_12);
                    t = leq_lt_0_0(t);
                    t = u_10;
                  }
              }
            }
          else
            {
              if(match_string(t, "hh"))
                {
                  t = b_11;
                  if(match_cons(t, sym_ComponentTime_3))
                    {
                      ATerm g_14 = ATgetArgument(t, 0);
                      g_11 = ATgetArgument(t, 1);
                      {
                        ATerm h_14 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = g_11;
                  if(match_cons(t, sym_DayTime_3))
                    {
                      u_10 = ATgetArgument(t, 0);
                      {
                        ATerm i_14 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm j_14 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = u_10;
                  if(match_int(t, 0))
                    {
                      ATerm k_14 = t;
                      int l_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_11(u_10, z_10, t);
                          ;
                          LocalPopChoice(l_14);
                        }
                      else
                        {
                          t = k_14;
                          {
                            ATerm m_14 = t;
                            int n_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATmakeAppl(sym__3, term_z_11, u_10, term_y_12);
                                t = leq_leq_0_0(t);
                                t = u_10;
                                ;
                                LocalPopChoice(n_14);
                              }
                            else
                              {
                                t = m_14;
                                t = term_y_12;
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm o_14 = t;
                      int p_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_11(u_10, z_10, t);
                          ;
                          LocalPopChoice(p_14);
                        }
                      else
                        {
                          t = o_14;
                          t = (ATerm) ATmakeAppl(sym__3, term_z_11, u_10, term_y_12);
                          t = leq_leq_0_0(t);
                          t = u_10;
                        }
                    }
                }
              else
                {
                  if(match_string(t, "kk"))
                    {
                      t = b_11;
                      if(match_cons(t, sym_ComponentTime_3))
                        {
                          ATerm q_14 = ATgetArgument(t, 0);
                          g_11 = ATgetArgument(t, 1);
                          {
                            ATerm r_14 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = g_11;
                      if(match_cons(t, sym_DayTime_3))
                        {
                          u_10 = ATgetArgument(t, 0);
                          {
                            ATerm s_14 = ATgetArgument(t, 1);
                          }
                          {
                            ATerm t_14 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, u_10, term_z_11);
                      {
                        ATerm u_14 = t;
                        int v_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_addi(u_10, (ATerm) ATmakeInt(1));
                            ;
                            LocalPopChoice(v_14);
                          }
                        else
                          {
                            t = u_14;
                            t = SSL_addr(u_10, (ATerm) ATmakeInt(1));
                          }
                      }
                    }
                  else
                    {
                      if(match_string(t, "HH"))
                        {
                          t = b_11;
                          if(match_cons(t, sym_ComponentTime_3))
                            {
                              ATerm w_14 = ATgetArgument(t, 0);
                              g_11 = ATgetArgument(t, 1);
                              {
                                ATerm x_14 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = g_11;
                          if(match_cons(t, sym_DayTime_3))
                            {
                              u_10 = ATgetArgument(t, 0);
                              {
                                ATerm y_14 = ATgetArgument(t, 1);
                              }
                              {
                                ATerm d_15 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = u_10;
                        }
                      else
                        {
                          if(match_string(t, "DD"))
                            {
                              t = b_11;
                              if(match_cons(t, sym_ComponentTime_3))
                                {
                                  ATerm e_15 = ATgetArgument(t, 0);
                                  ATerm f_15 = ATgetArgument(t, 1);
                                  h_11 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = h_11;
                              if(match_cons(t, sym_Dupl_2))
                                {
                                  ATerm g_15 = ATgetArgument(t, 0);
                                  y_10 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = y_10;
                            }
                          else
                            {
                              if(match_string(t, "D"))
                                {
                                  t = b_11;
                                  if(match_cons(t, sym_ComponentTime_3))
                                    {
                                      ATerm c_16 = ATgetArgument(t, 0);
                                      ATerm i_16 = ATgetArgument(t, 1);
                                      h_11 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = h_11;
                                  if(match_cons(t, sym_Dupl_2))
                                    {
                                      ATerm j_16 = ATgetArgument(t, 0);
                                      y_10 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = y_10;
                                }
                              else
                                {
                                  if(match_string(t, "dd"))
                                    {
                                      t = b_11;
                                      if(match_cons(t, sym_ComponentTime_3))
                                        {
                                          c_11 = ATgetArgument(t, 0);
                                          {
                                            ATerm k_16 = ATgetArgument(t, 1);
                                          }
                                          {
                                            ATerm l_16 = ATgetArgument(t, 2);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      t = c_11;
                                      if(match_cons(t, sym_Date_3))
                                        {
                                          ATerm m_16 = ATgetArgument(t, 0);
                                          ATerm n_16 = ATgetArgument(t, 1);
                                          f_11 = ATgetArgument(t, 2);
                                        }
                                      else
                                        _fail(t);
                                      t = f_11;
                                    }
                                  else
                                    {
                                      if(match_string(t, "d"))
                                        {
                                          t = b_11;
                                          if(match_cons(t, sym_ComponentTime_3))
                                            {
                                              c_11 = ATgetArgument(t, 0);
                                              {
                                                ATerm o_16 = ATgetArgument(t, 1);
                                              }
                                              {
                                                ATerm p_16 = ATgetArgument(t, 2);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          t = c_11;
                                          if(match_cons(t, sym_Date_3))
                                            {
                                              ATerm q_16 = ATgetArgument(t, 0);
                                              ATerm r_16 = ATgetArgument(t, 1);
                                              f_11 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          t = f_11;
                                        }
                                      else
                                        {
                                          if(match_string(t, "MM"))
                                            {
                                              ATerm p_1 = NULL;
                                              t = b_11;
                                              if(match_cons(t, sym_ComponentTime_3))
                                                {
                                                  c_11 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm s_16 = ATgetArgument(t, 1);
                                                  }
                                                  {
                                                    ATerm t_16 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = c_11;
                                              if(match_cons(t, sym_Date_3))
                                                {
                                                  ATerm u_16 = ATgetArgument(t, 0);
                                                  e_11 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm v_16 = ATgetArgument(t, 2);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = e_11;
                                              t = month2index_0_0(t);
                                              p_1 = t;
                                              t = (ATerm) ATmakeAppl(sym__2, p_1, term_z_11);
                                              {
                                                ATerm w_16 = t;
                                                int b_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = SSL_addi(p_1, (ATerm) ATmakeInt(1));
                                                    ;
                                                    LocalPopChoice(b_17);
                                                  }
                                                else
                                                  {
                                                    t = w_16;
                                                    t = SSL_addr(p_1, (ATerm) ATmakeInt(1));
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_string(t, "M"))
                                                {
                                                  ATerm t_1 = NULL;
                                                  t = b_11;
                                                  if(match_cons(t, sym_ComponentTime_3))
                                                    {
                                                      c_11 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm c_17 = ATgetArgument(t, 1);
                                                      }
                                                      {
                                                        ATerm i_17 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = c_11;
                                                  if(match_cons(t, sym_Date_3))
                                                    {
                                                      ATerm l_17 = ATgetArgument(t, 0);
                                                      e_11 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm o_17 = ATgetArgument(t, 2);
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = e_11;
                                                  t = month2index_0_0(t);
                                                  t_1 = t;
                                                  t = (ATerm) ATmakeAppl(sym__2, t_1, term_z_11);
                                                  {
                                                    ATerm w_17 = t;
                                                    int x_17 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = SSL_addi(t_1, (ATerm) ATmakeInt(1));
                                                        ;
                                                        LocalPopChoice(x_17);
                                                      }
                                                    else
                                                      {
                                                        t = w_17;
                                                        t = SSL_addr(t_1, (ATerm) ATmakeInt(1));
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_string(t, "yy"))
                                                    {
                                                      t = b_11;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          c_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm y_17 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm c_18 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = c_11;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          d_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm d_18 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm e_18 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = y_11(d_11, z_10, t);
                                                    }
                                                  else
                                                    {
                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("yyyy", 0, ATtrue)))
                                                        _fail(t);
                                                      t = b_11;
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          c_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm g_18 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm j_18 = ATgetArgument(t, 2);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = c_11;
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          d_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm l_18 = ATgetArgument(t, 1);
                                                          }
                                                          {
                                                            ATerm m_18 = ATgetArgument(t, 2);
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
ATerm date_pattern_to_string_0_0 (ATerm t)
{
  ATerm z_14 (ATerm z_12, ATerm a_13, ATerm t)
  {
    ATerm c_13 = NULL,g_13 = NULL,h_13 = NULL;
    t = a_13;
    t = date_pattern_to_int_0_0(t);
    c_13 = t;
    t = SSL_int_to_string(c_13);
    g_13 = t;
    t = z_12;
    t = string_length_0_0(t);
    h_13 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_o_18, g_13, h_13);
    t = align_right_0_0(t);
    return(t);
  }
  ATerm j_13 = NULL,m_13 = NULL,r_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,x_13 = NULL,z_13 = NULL,a_14 = NULL;
  r_13 = t;
  if(match_cons(t, sym__2))
    {
      t_13 = ATgetArgument(t, 0);
      u_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_13;
  if(match_cons(t, sym_ComponentTime_3))
    {
      v_13 = ATgetArgument(t, 0);
      z_13 = ATgetArgument(t, 1);
      a_14 = ATgetArgument(t, 2);
      t = a_14;
      {
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Dupl_2))
              {
                m_13 = ATgetArgument(t, 0);
                {
                  ATerm u_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(t_18);
            t = z_13;
            {
              ATerm v_18 = t;
              int w_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      j_13 = ATgetArgument(t, 0);
                      {
                        ATerm x_18 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm f_19 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(w_18);
                  t = v_13;
                  {
                    ATerm g_19 = t;
                    int q_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm r_19 = ATgetArgument(t, 0);
                            x_13 = ATgetArgument(t, 1);
                            {
                              ATerm s_19 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(q_19);
                        t = t_13;
                        if(match_string(t, "a"))
                          {
                            ATerm t_19 = t;
                            int u_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_14(t_13, r_13, t);
                                ;
                                LocalPopChoice(u_19);
                              }
                            else
                              {
                                t = t_19;
                                {
                                  ATerm v_19 = t;
                                  int w_19 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__3, term_y_12, j_13, term_b_13);
                                      t = leq_leq_0_0(t);
                                      t = term_y_19;
                                      ;
                                      LocalPopChoice(w_19);
                                    }
                                  else
                                    {
                                      t = v_19;
                                      t = (ATerm) ATmakeAppl(sym__3, term_c_12, j_13, term_y_12);
                                      t = leq_lt_0_0(t);
                                      t = term_z_19;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEEE"))
                              {
                                ATerm a_20 = t;
                                int c_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = z_14(t_13, r_13, t);
                                    ;
                                    LocalPopChoice(c_20);
                                  }
                                else
                                  {
                                    t = a_20;
                                    t = m_13;
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
                                        t = z_14(t_13, r_13, t);
                                        ;
                                        LocalPopChoice(f_20);
                                      }
                                    else
                                      {
                                        t = e_20;
                                        t = m_13;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    if(match_string(t, "MMMM"))
                                      {
                                        ATerm k_20 = t;
                                        int m_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = z_14(t_13, r_13, t);
                                            ;
                                            LocalPopChoice(m_20);
                                          }
                                        else
                                          {
                                            t = k_20;
                                            t = x_13;
                                            t = month2text_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_string(t, "MMM"))
                                          {
                                            ATerm n_20 = t;
                                            int o_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = z_14(t_13, r_13, t);
                                                ;
                                                LocalPopChoice(o_20);
                                              }
                                            else
                                              {
                                                t = n_20;
                                                t = x_13;
                                                t = month2abbr_0_0(t);
                                              }
                                          }
                                        else
                                          {
                                            t = z_14(t_13, r_13, t);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = g_19;
                        t = t_13;
                        if(match_string(t, "a"))
                          {
                            ATerm b_21 = t;
                            int c_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_14(t_13, r_13, t);
                                ;
                                LocalPopChoice(c_21);
                              }
                            else
                              {
                                t = b_21;
                                {
                                  ATerm i_21 = t;
                                  int r_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__3, term_y_12, j_13, term_b_13);
                                      t = leq_leq_0_0(t);
                                      t = term_y_19;
                                      ;
                                      LocalPopChoice(r_21);
                                    }
                                  else
                                    {
                                      t = i_21;
                                      t = (ATerm) ATmakeAppl(sym__3, term_c_12, j_13, term_y_12);
                                      t = leq_lt_0_0(t);
                                      t = term_z_19;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEEE"))
                              {
                                ATerm s_21 = t;
                                int t_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = z_14(t_13, r_13, t);
                                    ;
                                    LocalPopChoice(t_21);
                                  }
                                else
                                  {
                                    t = s_21;
                                    t = m_13;
                                    t = day_of_week2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "EEE"))
                                  {
                                    ATerm v_21 = t;
                                    int w_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = z_14(t_13, r_13, t);
                                        ;
                                        LocalPopChoice(w_21);
                                      }
                                    else
                                      {
                                        t = v_21;
                                        t = m_13;
                                        t = day_of_week2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = z_14(t_13, r_13, t);
                                  }
                              }
                          }
                      }
                  }
                }
              else
                {
                  t = v_18;
                  t = v_13;
                  {
                    ATerm x_21 = t;
                    int b_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm c_22 = ATgetArgument(t, 0);
                            x_13 = ATgetArgument(t, 1);
                            {
                              ATerm i_22 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(b_22);
                        t = t_13;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm k_22 = t;
                            int l_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_14(t_13, r_13, t);
                                ;
                                LocalPopChoice(l_22);
                              }
                            else
                              {
                                t = k_22;
                                t = m_13;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm p_22 = t;
                                int q_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = z_14(t_13, r_13, t);
                                    ;
                                    LocalPopChoice(q_22);
                                  }
                                else
                                  {
                                    t = p_22;
                                    t = m_13;
                                    t = day_of_week2abbr_0_0(t);
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
                                        t = z_14(t_13, r_13, t);
                                        ;
                                        LocalPopChoice(s_22);
                                      }
                                    else
                                      {
                                        t = r_22;
                                        t = x_13;
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
                                            t = z_14(t_13, r_13, t);
                                            ;
                                            LocalPopChoice(u_22);
                                          }
                                        else
                                          {
                                            t = t_22;
                                            t = x_13;
                                            t = month2abbr_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        t = z_14(t_13, r_13, t);
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = x_21;
                        t = t_13;
                        if(match_string(t, "EEEE"))
                          {
                            ATerm v_22 = t;
                            int w_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_14(t_13, r_13, t);
                                ;
                                LocalPopChoice(w_22);
                              }
                            else
                              {
                                t = v_22;
                                t = m_13;
                                t = day_of_week2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "EEE"))
                              {
                                ATerm x_22 = t;
                                int y_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = z_14(t_13, r_13, t);
                                    ;
                                    LocalPopChoice(y_22);
                                  }
                                else
                                  {
                                    t = x_22;
                                    t = m_13;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = z_14(t_13, r_13, t);
                              }
                          }
                      }
                  }
                }
            }
          }
        else
          {
            t = s_18;
            t = z_13;
            {
              ATerm z_22 = t;
              int a_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_DayTime_3))
                    {
                      j_13 = ATgetArgument(t, 0);
                      {
                        ATerm b_23 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm c_23 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_23);
                  t = v_13;
                  {
                    ATerm d_23 = t;
                    int g_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm h_23 = ATgetArgument(t, 0);
                            x_13 = ATgetArgument(t, 1);
                            {
                              ATerm i_23 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(g_23);
                        t = t_13;
                        if(match_string(t, "a"))
                          {
                            ATerm j_23 = t;
                            int k_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_14(t_13, r_13, t);
                                ;
                                LocalPopChoice(k_23);
                              }
                            else
                              {
                                t = j_23;
                                {
                                  ATerm o_23 = t;
                                  int p_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__3, term_y_12, j_13, term_b_13);
                                      t = leq_leq_0_0(t);
                                      t = term_y_19;
                                      ;
                                      LocalPopChoice(p_23);
                                    }
                                  else
                                    {
                                      t = o_23;
                                      t = (ATerm) ATmakeAppl(sym__3, term_c_12, j_13, term_y_12);
                                      t = leq_lt_0_0(t);
                                      t = term_z_19;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_string(t, "MMMM"))
                              {
                                ATerm q_23 = t;
                                int r_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = z_14(t_13, r_13, t);
                                    ;
                                    LocalPopChoice(r_23);
                                  }
                                else
                                  {
                                    t = q_23;
                                    t = x_13;
                                    t = month2text_0_0(t);
                                  }
                              }
                            else
                              {
                                if(match_string(t, "MMM"))
                                  {
                                    ATerm s_23 = t;
                                    int t_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = z_14(t_13, r_13, t);
                                        ;
                                        LocalPopChoice(t_23);
                                      }
                                    else
                                      {
                                        t = s_23;
                                        t = x_13;
                                        t = month2abbr_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    t = z_14(t_13, r_13, t);
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = d_23;
                        t = t_13;
                        if(match_string(t, "a"))
                          {
                            ATerm u_23 = t;
                            int a_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_14(t_13, r_13, t);
                                ;
                                LocalPopChoice(a_24);
                              }
                            else
                              {
                                t = u_23;
                                {
                                  ATerm b_24 = t;
                                  int f_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__3, term_y_12, j_13, term_b_13);
                                      t = leq_leq_0_0(t);
                                      t = term_y_19;
                                      ;
                                      LocalPopChoice(f_24);
                                    }
                                  else
                                    {
                                      t = b_24;
                                      t = (ATerm) ATmakeAppl(sym__3, term_c_12, j_13, term_y_12);
                                      t = leq_lt_0_0(t);
                                      t = term_z_19;
                                    }
                                }
                              }
                          }
                        else
                          {
                            t = z_14(t_13, r_13, t);
                          }
                      }
                  }
                }
              else
                {
                  t = z_22;
                  t = v_13;
                  {
                    ATerm g_24 = t;
                    int h_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Date_3))
                          {
                            ATerm i_24 = ATgetArgument(t, 0);
                            x_13 = ATgetArgument(t, 1);
                            {
                              ATerm m_24 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(h_24);
                        t = t_13;
                        if(match_string(t, "MMMM"))
                          {
                            ATerm o_24 = t;
                            int p_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_14(t_13, r_13, t);
                                ;
                                LocalPopChoice(p_24);
                              }
                            else
                              {
                                t = o_24;
                                t = x_13;
                                t = month2text_0_0(t);
                              }
                          }
                        else
                          {
                            if(match_string(t, "MMM"))
                              {
                                ATerm v_24 = t;
                                int w_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = z_14(t_13, r_13, t);
                                    ;
                                    LocalPopChoice(w_24);
                                  }
                                else
                                  {
                                    t = v_24;
                                    t = x_13;
                                    t = month2abbr_0_0(t);
                                  }
                              }
                            else
                              {
                                t = z_14(t_13, r_13, t);
                              }
                          }
                      }
                    else
                      {
                        t = g_24;
                        t = t_13;
                        t = z_14(t_13, r_13, t);
                      }
                  }
                }
            }
          }
      }
    }
  else
    {
      t = t_13;
      t = z_14(t_13, r_13, t);
    }
  return(t);
}
ATerm date_format_0_0 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL;
  if(match_cons(t, sym__2))
    {
      b_15 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_15;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm c_15 = NULL;
      c_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_15, a_15);
      {
        ATerm x_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = date_pattern_to_string_0_0(t);
            ;
            LocalPopChoice(z_24);
          }
        else
          {
            t = x_24;
            {
              ATerm d_2 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, c_15, a_15));
              if(match_cons(t, sym__2))
                {
                  ATerm d_25 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) d_25) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm g_25 = ATgetArgument(t, 1);
                    if(((ATgetType(g_25) == AT_LIST) && !(ATisEmpty(g_25))))
                      {
                        d_2 = ATgetFirst((ATermList) g_25);
                        {
                          ATerm h_25 = (ATerm) ATgetNext((ATermList) g_25);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = d_2;
            }
          }
      }
      return(t);
    }
    t = map_1_0(d_1, t);
    t = concat_strings_0_0(t);
  }
  return(t);
}
ATerm index2day_of_week_0_0 (ATerm t)
{
  if(match_int(t, 6))
    {
      t = term_i_25;
    }
  else
    {
      if(match_int(t, 5))
        {
          t = term_j_25;
        }
      else
        {
          if(match_int(t, 4))
            {
              t = term_k_25;
            }
          else
            {
              if(match_int(t, 3))
                {
                  t = term_m_25;
                }
              else
                {
                  if(match_int(t, 2))
                    {
                      t = term_p_25;
                    }
                  else
                    {
                      if(match_int(t, 1))
                        {
                          t = term_r_25;
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                            _fail(t);
                          t = term_t_25;
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
      t = term_z_25;
    }
  else
    {
      if(match_int(t, 10))
        {
          t = term_a_26;
        }
      else
        {
          if(match_int(t, 9))
            {
              t = term_c_26;
            }
          else
            {
              if(match_int(t, 8))
                {
                  t = term_d_26;
                }
              else
                {
                  if(match_int(t, 7))
                    {
                      t = term_g_26;
                    }
                  else
                    {
                      if(match_int(t, 6))
                        {
                          t = term_h_26;
                        }
                      else
                        {
                          if(match_int(t, 5))
                            {
                              t = term_o_26;
                            }
                          else
                            {
                              if(match_int(t, 4))
                                {
                                  t = term_p_26;
                                }
                              else
                                {
                                  if(match_int(t, 3))
                                    {
                                      t = term_q_26;
                                    }
                                  else
                                    {
                                      if(match_int(t, 2))
                                        {
                                          t = term_r_26;
                                        }
                                      else
                                        {
                                          if(match_int(t, 1))
                                            {
                                              t = term_s_26;
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                                                _fail(t);
                                              t = term_t_26;
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
ATerm prim_tuple_to_ComponentTime_0_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
  if(match_cons(t, sym__8))
    {
      h_15 = ATgetArgument(t, 0);
      i_15 = ATgetArgument(t, 1);
      j_15 = ATgetArgument(t, 2);
      k_15 = ATgetArgument(t, 3);
      l_15 = ATgetArgument(t, 4);
      m_15 = ATgetArgument(t, 5);
      n_15 = ATgetArgument(t, 6);
      o_15 = ATgetArgument(t, 7);
    }
  else
    _fail(t);
  t = l_15;
  t = index2month_0_0(t);
  p_15 = t;
  t = n_15;
  t = index2day_of_week_0_0(t);
  q_15 = t;
  t = (ATerm) ATmakeAppl(sym_ComponentTime_3, (ATerm)ATmakeAppl(sym_Date_3, m_15, p_15, k_15), (ATerm)ATmakeAppl(sym_DayTime_3, j_15, i_15, h_15), (ATerm) ATmakeAppl(sym_Dupl_2, q_15, o_15));
  return(t);
}
ATerm epoch2local_time_0_0 (ATerm t)
{
  ATerm r_15 = NULL;
  if(match_cons(t, sym_EpochTime_1))
    {
      r_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_epoch2localtime(r_15);
  t = prim_tuple_to_ComponentTime_0_0(t);
  return(t);
}
ATerm now_epoch_time_0_0 (ATerm t)
{
  ATerm s_15 = NULL;
  t = SSL_now_epoch_time();
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym_EpochTime_1, s_15);
  return(t);
}
ATerm now_local_time_0_0 (ATerm t)
{
  t = now_epoch_time_0_0(t);
  t = epoch2local_time_0_0(t);
  return(t);
}
ATerm create_time_0_0 (ATerm t)
{
  ATerm t_15 = NULL;
  t = term_w_8;
  t = now_local_time_0_0(t);
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_27), term_h_27), term_k_27), term_h_27), term_g_27), term_v_26), term_d_27), term_v_26), term_a_27), term_v_26), term_z_26), term_v_26), term_u_26), t_15);
  t = date_format_0_0(t);
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm u_15 = NULL;
  u_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), u_15);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = u_15;
  return(t);
}
ATerm get_title_0_0 (ATerm t)
{
  ATerm m_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_27);
    }
  else
    {
      t = m_27;
      t = (ATerm) ATinsert(ATempty, term_v_27);
      t = fatal_error_0_0(t);
    }
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL;
  t = get_title_0_0(t);
  v_15 = t;
  t = term_w_8;
  t = create_time_0_0(t);
  w_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_29), term_r_28), term_q_28), term_p_28), v_15), term_m_28), term_l_28), term_k_28), term_j_28), term_i_28), term_f_28), term_d_28), w_15), term_c_28), term_b_28);
  return(t);
}
ATerm xtc_io_1_0 (ATerm g_95 (ATerm), ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_15 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        x_15 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, x_15);
        ;
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        t = term_m_29;
      }
    t = g_95(t);
    {
      ATerm f_1 (ATerm t)
      {
        ATerm n_29 = t;
        int o_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_9;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(o_29);
          }
        else
          {
            t = n_29;
            t = term_p_29;
          }
        return(t);
      }
      t = copy_to_1_0(f_1, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(e_1, t);
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
    y_15 = t;
    t = create_header_0_0(t);
    t = print_to_0_0(t);
    z_15 = t;
    t = y_15;
    {
      ATerm h_1 (ATerm t)
      {
        t = term_q_29;
        return(t);
      }
      t = xtc_transform_2_0(h_1, pass_verbose_0_0, t);
      a_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, term_t_29), term_s_29);
      t = print_to_0_0(t);
      b_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_16), a_16), z_15);
      t = xtc_cat_0_0(t);
    }
    return(t);
  }
  t = xtc_io_1_0(g_1, t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
  t = term_u_29;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        t = term_z_11;
      }
    d_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_16, term_z_11);
    {
      ATerm a_30 = t;
      int d_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(d_16, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(d_30);
        }
      else
        {
          t = a_30;
          t = SSL_subtr(d_16, (ATerm) ATmakeInt(1));
        }
      f_16 = t;
      t = SSL_int_to_string(f_16);
      e_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, e_16), term_u_29);
    }
  }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm g_16 = NULL;
  ATerm i_1 (ATerm t)
  {
    ATerm h_16 = NULL;
    h_16 = t;
    t = SSL_explode_string(h_16);
    return(t);
  }
  t = map_1_0(i_1, t);
  t = concat_0_0(t);
  g_16 = t;
  t = SSL_implode_string(g_16);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
  x_16 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      y_16 = ATgetArgument(t, 0);
      {
        ATerm u_2 = NULL;
        t = SSL_int_to_string(y_16);
        u_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_30), u_2), term_e_30);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm k_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          y_16 = ATgetArgument(t, 0);
          z_16 = ATgetArgument(t, 1);
          a_17 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(z_16);
      k_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_17), term_m_30), k_3), term_i_30), y_16);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm y_72 (ATerm), ATerm t)
{
  ATerm d_17 = NULL;
  ATerm k_1 (ATerm t)
  {
    t = y_72(t);
    d_17 = t;
    return(t);
  }
  t = fetch_1_0(k_1, t);
  t = not_null(d_17);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm e_17 = NULL;
  e_17 = t;
  {
    ATerm n_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_35), term_a_35), term_w_34), term_s_34), term_p_34), term_l_34), term_h_34), term_d_34), term_a_34), term_x_33), term_u_33), term_q_33), term_m_33), term_i_33), term_e_33), term_b_33), term_x_32), term_t_32), term_q_32), term_j_32), term_f_32), term_c_32), term_w_31), term_q_31), term_n_31), term_c_31), term_v_30), term_s_30);
        {
          ATerm m_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm f_35 = ATgetArgument(t, 0);
                if((e_17 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm g_35 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(m_1, t);
        }
        ;
        LocalPopChoice(p_30);
      }
    else
      {
        t = n_30;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, e_17);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm f_17 = NULL;
  f_17 = t;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm g_17 = NULL,h_17 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm h_35 = ATgetArgument(t, 0);
          g_17 = ATgetArgument(t, 1);
          {
            ATerm i_35 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = g_17;
      {
        ATerm j_35 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_35;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        h_17 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_17), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_k_35, (ATerm) ATinsert(ATinsert(ATempty, h_17), term_l_35));
      }
      return(t);
    }
    t = try_1_0(o_1, t);
    t = f_17;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  j_17 = t;
  t = fork_0_0(t);
  k_17 = t;
  {
    ATerm m_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = j_17;
        t = z_83(t);
        ;
        LocalPopChoice(n_35);
      }
    else
      {
        t = m_35;
        t = (ATerm) ATmakeAppl(sym__2, k_17, j_17);
        t = a_84(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm m_17 = NULL;
  ATerm r_1 (ATerm t)
  {
    ATerm n_17 = NULL;
    if(match_cons(t, sym__2))
      {
        n_17 = ATgetArgument(t, 0);
        m_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(n_17);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm o_35 = ATgetArgument(t, 0);
        if(((ATgetType(o_35) != AT_INT) || (ATgetInt((ATermInt) o_35) != 0)))
          _fail(t);
        {
          ATerm p_35 = ATgetArgument(t, 1);
        }
        {
          ATerm q_35 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = m_17;
    return(t);
  }
  t = fork_2_0(b_84, r_1, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL;
  if(match_cons(t, sym__2))
    {
      p_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_1 (ATerm t)
    {
      t = SSL_execvp(p_17, q_17);
      return(t);
    }
    t = fork_and_wait_1_0(s_1, t);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm r_17 = NULL;
  r_17 = t;
  t = SSL_table_keys(r_17);
  {
    ATerm x_1 (ATerm t)
    {
      ATerm s_17 = NULL,t_17 = NULL;
      s_17 = t;
      t = SSL_table_get(r_17, s_17);
      t_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_17, t_17);
      return(t);
    }
    t = map_1_0(x_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm a_94 (ATerm), ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm u_17 = NULL,v_17 = NULL;
    u_17 = t;
    t = term_u_29;
    t = get_config_0_0(t);
    v_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_17, term_u_12);
    t = geq_0_0(t);
    t = u_17;
    t = a_94(t);
    return(t);
  }
  t = try_1_0(z_1, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  if(match_cons(t, sym__2))
    {
      z_17 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, z_17));
  {
    ATerm a_2 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((a_18 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          b_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(a_2, t);
    t = not_null(b_18);
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm r_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(s_35);
    }
  else
    {
      t = r_35;
      {
        ATerm t_35 = t;
        int u_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              t = filter_1_0(r_80, t);
              return(t);
            }
            t = Cons_2_0(r_80, b_2, t);
            ;
            LocalPopChoice(u_35);
          }
        else
          {
            t = t_35;
            {
              ATerm f_18 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm v_35 = ATgetFirst((ATermList) t);
                  f_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = f_18;
              t = filter_1_0(r_80, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_82 (ATerm), ATerm t)
{
  ATerm h_18 (ATerm t)
  {
    ATerm c_2 (ATerm t)
    {
      t = l_82(t);
      t = h_18(t);
      return(t);
    }
    t = try_1_0(c_2, t);
    return(t);
  }
  t = h_18(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm i_18 = NULL;
  i_18 = t;
  {
    ATerm e_2 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm w_35 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_35;
          }
      }
      return(t);
    }
    t = repeat_1_0(e_2, t);
    t = i_18;
  }
  return(t);
}
ATerm say_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  ATerm k_18 = NULL,p_3 = NULL;
  k_18 = t;
  t = m_84(t);
  p_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, p_3));
  t = k_18;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm z_93 (ATerm), ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm n_18 = NULL,p_18 = NULL;
    n_18 = t;
    t = term_u_29;
    t = get_config_0_0(t);
    p_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_18, term_v_12);
    t = geq_0_0(t);
    t = n_18;
    t = z_93(t);
    return(t);
  }
  t = try_1_0(h_2, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm b_94 (ATerm), ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm q_18 = NULL,r_18 = NULL;
    q_18 = t;
    t = term_u_29;
    t = get_config_0_0(t);
    r_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_18, term_t_12);
    t = geq_0_0(t);
    t = q_18;
    t = b_94(t);
    return(t);
  }
  t = try_1_0(i_2, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm t_76 (ATerm), ATerm u_76 (ATerm), ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_18 = ATgetFirst((ATermList) t);
      z_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_76(t);
  {
    ATerm k_2 (ATerm t)
    {
      ATerm a_19 = NULL;
      a_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_18, a_19);
      t = t_76(t);
      return(t);
    }
    t = fetch_1_0(k_2, t);
    t = z_18;
  }
  return(t);
}
ATerm union_1_0 (ATerm p_76 (ATerm), ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  if(match_cons(t, sym__2))
    {
      c_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_19;
  {
    ATerm d_19 (ATerm t)
    {
      ATerm x_35 = t;
      int y_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_19;
          ;
          LocalPopChoice(y_35);
        }
      else
        {
          t = x_35;
          {
            ATerm z_35 = t;
            int a_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_2 (ATerm t)
                {
                  t = b_19;
                  return(t);
                }
                t = HdMember_p__2_0(p_76, m_2, t);
                t = d_19(t);
                ;
                LocalPopChoice(a_36);
              }
            else
              {
                t = z_35;
                t = Cons_2_0(_id, d_19, t);
              }
          }
        }
      return(t);
    }
    t = d_19(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm e_19 = NULL;
    if(match_cons(t, sym__2))
      {
        e_19 = ATgetArgument(t, 0);
        if((e_19 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(n_2, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  if(match_cons(t, sym__3))
    {
      h_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
      j_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_19, i_19);
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_36 = ATgetArgument(t, 0);
            ATerm e_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_19, i_19);
        ;
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        t = (ATerm) ATempty;
      }
    k_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_19, j_19);
    t = union_0_0(t);
    l_19 = t;
    t = SSL_table_put(h_19, i_19, l_19);
    t = (ATerm) ATmakeAppl(sym__3, h_19, i_19, j_19);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm q_80 (ATerm), ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL;
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_19;
  {
    ATerm q_2 (ATerm t)
    {
      ATerm o_19 = NULL,p_19 = NULL;
      if(match_cons(t, sym__2))
        {
          o_19 = ATgetArgument(t, 0);
          p_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, n_19, o_19, p_19);
      t = q_80(t);
      return(t);
    }
    t = map_1_0(q_2, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_20 (ATerm x_19, ATerm t)
  {
    t = SSL_fclose(x_19);
    return(t);
  }
  ATerm b_20 = NULL,d_20 = NULL;
  d_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_20 = ATgetArgument(t, 0);
      {
        ATerm f_36 = t;
        int g_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_20);
            ;
            LocalPopChoice(g_36);
          }
        else
          {
            t = f_36;
            t = g_20(d_20, t);
          }
      }
    }
  else
    {
      t = g_20(d_20, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_20 = NULL;
  t = SSL_stdin_stream();
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_20);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_20 = NULL;
  t = SSL_stdout_stream();
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_20);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_20 = NULL;
  t = SSL_stderr_stream();
  j_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_20);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm l_20 = NULL;
  l_20 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_20;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_20;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_20;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_36 = ATgetArgument(t, 0);
      ATerm i_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_4 = NULL,x_4 = NULL;
        w_4 = t;
        t = SSL_explode_term(w_4);
        if(match_cons(t, sym__2))
          {
            ATerm l_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_36) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_36 = ATgetArgument(t, 1);
              if(((ATgetType(m_36) == AT_LIST) && !(ATisEmpty(m_36))))
                {
                  x_4 = ATgetFirst((ATermList) m_36);
                  {
                    ATerm n_36 = (ATerm) ATgetNext((ATermList) m_36);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_4;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(k_36);
      }
    else
      {
        t = j_36;
        {
          ATerm o_36 = t;
          int p_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
              ATerm x_2 (ATerm t)
              {
                ATerm s_20 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    s_20 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = s_20;
                return(t);
              }
              t = _2_0(x_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_20 = ATgetArgument(t, 0);
                  q_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(p_20, q_20);
              r_20 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, r_20);
              ;
              LocalPopChoice(p_36);
            }
          else
            {
              t = o_36;
              {
                ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
                ATerm y_2 (ATerm t)
                {
                  ATerm w_20 = NULL;
                  w_20 = t;
                  t = SSL_is_string(w_20);
                  return(t);
                }
                t = _2_0(y_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    t_20 = ATgetArgument(t, 0);
                    u_20 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(t_20, u_20);
                v_20 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, v_20);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL;
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_21 = NULL;
      a_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_21, term_s_36);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_36);
    }
  else
    {
      t = q_36;
      {
        ATerm z_2 (ATerm t)
        {
          t = term_t_36;
          return(t);
        }
        t = debug_1_0(z_2, t);
        _fail(t);
      }
    }
  x_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(z_20);
  y_20 = t;
  t = x_20;
  t = fclose_0_0(t);
  t = y_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm u_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_5 = NULL;
      d_5 = t;
      t = SSL_access(d_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(v_36);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = u_36;
      {
        ATerm w_36 = t;
        int x_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_36 = t;
            if((PushChoice() == 0))
              {
                ATerm h_5 = NULL;
                h_5 = t;
                t = SSL_access(h_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_36;
              }
            {
              ATerm a_3 (ATerm t)
              {
                t = term_z_36;
                return(t);
              }
              t = debug_1_0(a_3, t);
            }
            ;
            LocalPopChoice(x_36);
          }
        else
          {
            t = w_36;
            {
              ATerm c_3 (ATerm t)
              {
                t = term_a_37;
                return(t);
              }
              t = debug_1_0(c_3, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
  d_21 = t;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm h_3 (ATerm t)
      {
        t = term_b_37;
        return(t);
      }
      t = debug_1_0(h_3, t);
      return(t);
    }
    t = if_verbose5_1_0(g_3, t);
    {
      ATerm c_37 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, d_21));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = c_37;
        }
      e_21 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, d_21));
      t = e_21;
      {
        ATerm j_3 (ATerm t)
        {
          ATerm m_3 (ATerm t)
          {
            t = term_d_37;
            return(t);
          }
          t = debug_1_0(m_3, t);
          return(t);
        }
        t = if_verbose4_1_0(j_3, t);
        t = read_repository_file_0_0(t);
        {
          ATerm q_3 (ATerm t)
          {
            ATerm r_3 (ATerm t)
            {
              t = term_e_37;
              return(t);
            }
            t = say_1_0(r_3, t);
            return(t);
          }
          t = if_verbose6_1_0(q_3, t);
          f_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_37, f_21);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm s_3 (ATerm t)
            {
              ATerm t_3 (ATerm t)
              {
                t = term_g_37;
                return(t);
              }
              t = say_1_0(t_3, t);
              return(t);
            }
            t = if_verbose6_1_0(s_3, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, d_21), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_f_37, (ATerm)ATmakeAppl(sym_Imported_1, d_21), (ATerm) ATempty);
            {
              ATerm u_3 (ATerm t)
              {
                ATerm v_3 (ATerm t)
                {
                  t = term_e_37;
                  return(t);
                }
                t = say_1_0(v_3, t);
                return(t);
              }
              t = if_verbose4_1_0(u_3, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm h_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_37;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_37);
    }
  else
    {
      t = h_37;
      {
        ATerm k_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(l_37);
          }
        else
          {
            t = k_37;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm g_21 = NULL;
  ATerm w_3 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      t = term_m_37;
      return(t);
    }
    t = debug_1_0(x_3, t);
    return(t);
  }
  t = if_verbose5_1_0(w_3, t);
  g_21 = t;
  {
    ATerm n_37 = t;
    int o_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(o_37);
      }
    else
      {
        t = n_37;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = g_21;
    {
      ATerm y_3 (ATerm t)
      {
        ATerm z_3 (ATerm t)
        {
          t = term_p_37;
          return(t);
        }
        t = debug_1_0(z_3, t);
        return(t);
      }
      t = if_verbose5_1_0(y_3, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm q_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_4 (ATerm t)
      {
        ATerm b_4 (ATerm t)
        {
          t = term_s_37;
          return(t);
        }
        t = debug_1_0(b_4, t);
        return(t);
      }
      t = if_verbose5_1_0(a_4, t);
      t = xtc_load_0_0(t);
      {
        ATerm t_37 = t;
        int u_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(u_37);
          }
        else
          {
            t = t_37;
            {
              ATerm l_5 = NULL,n_5 = NULL;
              l_5 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, l_5));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm v_37 = ATgetFirst((ATermList) t);
                  if(match_cons(v_37, sym__2))
                    {
                      ATerm x_37 = ATgetArgument(v_37, 0);
                      n_5 = ATgetArgument(v_37, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm w_37 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = n_5;
            }
          }
        {
          ATerm c_4 (ATerm t)
          {
            ATerm d_4 (ATerm t)
            {
              t = term_s_37;
              return(t);
            }
            t = debug_1_0(d_4, t);
            return(t);
          }
          t = if_verbose5_1_0(c_4, t);
        }
      }
      ;
      LocalPopChoice(r_37);
    }
  else
    {
      t = q_37;
      {
        ATerm h_21 = NULL;
        h_21 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), h_21), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_37), h_21), term_y_37);
        {
          ATerm e_4 (ATerm t)
          {
            t = term_f_37;
            t = table_getlist_0_0(t);
            {
              ATerm f_4 (ATerm t)
              {
                t = term_a_38;
                return(t);
              }
              t = debug_1_0(f_4, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(e_4, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm t_95 (ATerm), ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL;
  j_21 = t;
  t = t_95(t);
  t = xtc_find_warning_0_0(t);
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_21, j_21);
  t = call_0_0(t);
  t = j_21;
  return(t);
}
ATerm assert_1_0 (ATerm n_80 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL;
  if(match_cons(t, sym__2))
    {
      l_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_80(t);
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_21, l_21, m_21);
  t = table_push_0_0(t);
  {
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_21, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(c_38);
      }
    else
      {
        t = b_38;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_21 = ATgetFirst((ATermList) t);
        p_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_21, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(p_21), (ATerm) ATinsert(CheckATermList(o_21), l_21)));
    t = (ATerm) ATmakeAppl(sym__2, l_21, m_21);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm p_84 (ATerm), ATerm t)
{
  ATerm q_21 = NULL;
  q_21 = t;
  t = p_84(t);
  {
    ATerm g_4 (ATerm t)
    {
      t = term_d_38;
      return(t);
    }
    t = debug_1_0(g_4, t);
    t = q_21;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm g_22 (ATerm u_21, ATerm t)
  {
    t = u_21;
    {
      ATerm e_38 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm f_38 = ATgetArgument(t, 0);
              ATerm g_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_38;
        }
      {
        ATerm h_4 (ATerm t)
        {
          t = term_h_38;
          return(t);
        }
        t = obsolete_1_0(h_4, t);
        t = (ATerm) ATmakeAppl(sym__2, u_21, term_e_9);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm h_22 (ATerm y_21, ATerm z_21, ATerm a_22, ATerm t)
  {
    t = SSL_open_file(y_21, z_21);
    return(t);
  }
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
  d_22 = t;
  if(match_cons(t, sym__2))
    {
      e_22 = ATgetArgument(t, 0);
      f_22 = ATgetArgument(t, 1);
      {
        ATerm i_38 = t;
        int j_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_22(d_22, t);
            ;
            LocalPopChoice(j_38);
          }
        else
          {
            t = i_38;
            t = h_22(e_22, f_22, d_22, t);
          }
      }
    }
  else
    {
      t = g_22(d_22, t);
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
  ATerm j_22 = NULL;
  t = term_w_8;
  t = new_0_0(t);
  j_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_22, term_k_38);
  t = conc_strings_0_0(t);
  {
    ATerm i_4 (ATerm t)
    {
      ATerm v_5 = NULL;
      v_5 = t;
      t = SSL_access(v_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(i_4, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm m_22 = NULL;
  t = new_file_0_0(t);
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_22, term_e_9);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, m_22, term_w_8);
  {
    ATerm j_4 (ATerm t)
    {
      t = term_d_9;
      return(t);
    }
    t = assert_1_0(j_4, t);
    t = m_22;
  }
  return(t);
}
ATerm xtc_generate_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL;
  t = term_w_8;
  t = xtc_new_file_0_0(t);
  n_22 = t;
  t = i_96(t);
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_22, (ATerm) ATinsert(ATinsert(ATempty, n_22), term_g_9));
  t = conc_0_0(t);
  t = xtc_command_1_0(h_96, t);
  t = SSL_close_file(n_22);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_22);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL;
  e_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      f_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_6 = NULL;
        t = e_23;
        t = k_0(t);
        g_6 = t;
        {
          ATerm n_38 = t;
          int o_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(o_38);
            }
          else
            {
              t = n_38;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(f_23, g_6);
          t = (ATerm) ATmakeAppl(sym_FILE_1, f_23);
        }
        ;
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        {
          ATerm p_38 = t;
          int q_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_6 = NULL;
              t = e_23;
              t = k_0(t);
              y_6 = t;
              {
                ATerm r_38 = t;
                if((PushChoice() == 0))
                  {
                    ATerm s_38 = t;
                    int t_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(t_38);
                      }
                    else
                      {
                        t = s_38;
                        {
                          ATerm u_38 = t;
                          int v_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(v_38);
                            }
                          else
                            {
                              t = u_38;
                              {
                                ATerm z_6 = NULL;
                                z_6 = t;
                                if((f_23 != t))
                                  {
                                    _fail(t);
                                  }
                                t = z_6;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_38;
                  }
                t = SSL_copy(f_23, y_6);
                t = (ATerm) ATmakeAppl(sym_FILE_1, f_23);
              }
              ;
              LocalPopChoice(q_38);
            }
          else
            {
              t = p_38;
              t = e_23;
              t = k_0(t);
              if((f_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_23);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  if(match_cons(t, sym__2))
    {
      l_23 = ATgetArgument(t, 0);
      m_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_7 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_38 = ATgetArgument(t, 0);
            ATerm z_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_23, m_23);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_39 = ATgetFirst((ATermList) t);
            c_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_7;
        ;
        LocalPopChoice(x_38);
      }
    else
      {
        t = w_38;
        t = (ATerm) ATempty;
      }
    n_23 = t;
    t = SSL_table_put(l_23, m_23, n_23);
    t = (ATerm) ATmakeAppl(sym__2, l_23, m_23);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm k_80 (ATerm), ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  v_23 = t;
  t = k_80(t);
  w_23 = t;
  {
    ATerm b_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(w_23, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(c_39);
      }
    else
      {
        t = b_39;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_23 = ATgetFirst((ATermList) t);
        x_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(w_23, (ATerm)ATmakeAppl(sym_Scopes_0), x_23);
    t = y_23;
    {
      ATerm k_4 (ATerm t)
      {
        ATerm z_23 = NULL;
        z_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_23, z_23);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(k_4, t);
      t = v_23;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm j_71 (ATerm), ATerm k_71 (ATerm), ATerm t)
{
  ATerm d_39 = t;
  int e_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_71(t);
      t = k_71(t);
      ;
      LocalPopChoice(e_39);
    }
  else
    {
      t = d_39;
      t = k_71(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
  c_24 = t;
  t = j_80(t);
  d_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_24, term_f_39);
  {
    ATerm g_39 = t;
    int h_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_39 = ATgetArgument(t, 0);
            ATerm j_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(d_24, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(h_39);
      }
    else
      {
        t = g_39;
        t = (ATerm) ATempty;
      }
    e_24 = t;
    t = SSL_table_put(d_24, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(e_24), (ATerm) ATempty));
    t = c_24;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm f_95 (ATerm), ATerm t)
{
  ATerm j_24 = NULL;
  ATerm l_4 (ATerm t)
  {
    t = term_d_9;
    return(t);
  }
  t = begin_scope_1_0(l_4, t);
  {
    ATerm m_4 (ATerm t)
    {
      ATerm k_24 = NULL;
      k_24 = t;
      {
        ATerm k_39 = t;
        int l_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(l_39);
          }
        else
          {
            t = k_39;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_24 = ATgetFirst((ATermList) t);
            {
              ATerm m_39 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = j_24;
        {
          ATerm n_4 (ATerm t)
          {
            ATerm q_4 (ATerm t)
            {
              ATerm l_24 = NULL;
              l_24 = t;
              t = SSL_remove(l_24);
              return(t);
            }
            t = try_1_0(q_4, t);
            return(t);
          }
          t = map_1_0(n_4, t);
          t = k_24;
          {
            ATerm r_4 (ATerm t)
            {
              t = term_d_9;
              return(t);
            }
            t = end_scope_1_0(r_4, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(f_95, m_4, t);
  }
  return(t);
}
ATerm xtc_output_1_0 (ATerm h_95 (ATerm), ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    t = h_95(t);
    {
      ATerm u_4 (ATerm t)
      {
        ATerm n_39 = t;
        int o_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_9;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(o_39);
          }
        else
          {
            t = n_39;
            t = term_p_29;
          }
        return(t);
      }
      t = copy_to_1_0(u_4, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(t_4, t);
  return(t);
}
ATerm gen_css_0_0 (ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  t = term_p_39;
  t = get_config_0_0(t);
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("gen-css", 0, ATtrue)))
    _fail(t);
  t = n_24;
  {
    ATerm a_5 (ATerm t)
    {
      ATerm b_5 (ATerm t)
      {
        t = term_q_39;
        return(t);
      }
      t = xtc_generate_2_0(b_5, pass_verbose_0_0, t);
      return(t);
    }
    t = xtc_output_1_0(a_5, t);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
  q_24 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = q_24;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm y_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_24 = ATgetFirst((ATermList) t);
          s_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_24 = ATgetFirst((ATermList) t);
          u_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_24;
      t = h_0(t);
      t = t_24;
      t = i_0(t);
      y_24 = t;
      t = (ATerm) ATinsert(CheckATermList(u_24), y_24);
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm a_25 = NULL;
    a_25 = t;
    if(match_string(t, "-k"))
      {
        t = a_25;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = a_25;
      }
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    ATerm b_25 = NULL,c_25 = NULL;
    b_25 = t;
    t = SSL_string_to_int(b_25);
    c_25 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), c_25);
    t = b_25;
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    t = term_r_39;
    return(t);
  }
  t = ArgOption_3_0(c_5, e_5, f_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_39 = t;
  int t_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 (ATerm t)
      {
        ATerm e_25 = NULL;
        e_25 = t;
        if(match_string(t, "-S"))
          {
            t = e_25;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = e_25;
          }
        return(t);
      }
      ATerm i_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_u_39;
        return(t);
      }
      ATerm j_5 (ATerm t)
      {
        t = term_v_39;
        return(t);
      }
      t = Option_3_0(g_5, i_5, j_5, t);
      ;
      LocalPopChoice(t_39);
    }
  else
    {
      t = s_39;
      {
        ATerm w_39 = t;
        int x_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm m_5 (ATerm t)
            {
              ATerm f_25 = NULL,l_25 = NULL;
              f_25 = t;
              t = SSL_string_to_int(f_25);
              l_25 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_25);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, f_25);
              return(t);
            }
            ATerm o_5 (ATerm t)
            {
              t = term_y_39;
              return(t);
            }
            t = ArgOption_3_0(k_5, m_5, o_5, t);
            ;
            LocalPopChoice(x_39);
          }
        else
          {
            t = w_39;
            {
              ATerm p_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm q_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_z_39;
                return(t);
              }
              ATerm r_5 (ATerm t)
              {
                t = term_a_40;
                return(t);
              }
              t = Option_3_0(p_5, q_5, r_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(c_40);
    }
  else
    {
      t = b_40;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm n_25 = NULL;
    n_25 = t;
    if(match_string(t, "-o"))
      {
        t = n_25;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = n_25;
      }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    ATerm o_25 = NULL;
    o_25 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), o_25);
    t = (ATerm) ATmakeAppl(sym_Output_1, o_25);
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    t = term_d_40;
    return(t);
  }
  t = ArgOption_3_0(w_5, y_5, e_6, t);
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    ATerm q_25 = NULL;
    q_25 = t;
    if(match_string(t, "-i"))
      {
        t = q_25;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = q_25;
      }
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    ATerm s_25 = NULL;
    s_25 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), s_25);
    t = (ATerm) ATmakeAppl(sym_Input_1, s_25);
    return(t);
  }
  ATerm q_6 (ATerm t)
  {
    t = term_e_40;
    return(t);
  }
  t = ArgOption_3_0(h_6, l_6, q_6, t);
  return(t);
}
ATerm abox2html_options_0_0 (ATerm t)
{
  ATerm f_40 = t;
  int g_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(g_40);
    }
  else
    {
      t = f_40;
      {
        ATerm h_40 = t;
        int i_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(i_40);
          }
        else
          {
            t = h_40;
            {
              ATerm j_40 = t;
              int k_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0_0(t);
                  ;
                  LocalPopChoice(k_40);
                }
              else
                {
                  t = j_40;
                  {
                    ATerm l_40 = t;
                    int m_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_6 (ATerm t)
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
                            _fail(t);
                          return(t);
                        }
                        ATerm w_6 (ATerm t)
                        {
                          ATerm u_25 = NULL;
                          u_25 = t;
                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("gen-css", 0, ATtrue)));
                          t = u_25;
                          return(t);
                        }
                        ATerm a_7 (ATerm t)
                        {
                          t = term_n_40;
                          return(t);
                        }
                        t = Option_3_0(u_6, w_6, a_7, t);
                        ;
                        LocalPopChoice(m_40);
                      }
                    else
                      {
                        t = l_40;
                        {
                          ATerm b_7 (ATerm t)
                          {
                            ATerm v_25 = NULL;
                            v_25 = t;
                            if(match_string(t, "-t"))
                              {
                                t = v_25;
                              }
                            else
                              {
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--title", 0, ATtrue)))
                                  _fail(t);
                                t = v_25;
                              }
                            return(t);
                          }
                          ATerm d_7 (ATerm t)
                          {
                            ATerm w_25 = NULL;
                            w_25 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--title", 0, ATtrue)), w_25);
                            t = w_25;
                            return(t);
                          }
                          ATerm e_7 (ATerm t)
                          {
                            t = term_o_40;
                            return(t);
                          }
                          t = ArgOption_3_0(b_7, d_7, e_7, t);
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
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  x_25 = t;
  t = term_w_8;
  t = whoami_0_0(t);
  y_25 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), y_25), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = x_25;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_26 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_8;
  t = whoami_0_0(t);
  b_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), b_26));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_40;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm t)
{
  ATerm q_40 = t;
  int r_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_79(t);
      ;
      LocalPopChoice(r_40);
    }
  else
    {
      t = q_40;
      {
        ATerm e_26 = NULL,f_26 = NULL,i_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_26 = ATgetFirst((ATermList) t);
            f_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_26;
        t = foldr_2_0(c_79, d_79, t);
        i_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_26, i_26);
        t = d_79(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL;
  j_26 = t;
  t = SSL_explode_term(j_26);
  if(match_cons(t, sym__2))
    {
      ATerm s_40 = ATgetArgument(t, 0);
      k_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_26;
  t = foldr_2_0(a_77, b_77, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_26 = NULL;
  t = times_0_0(t);
  {
    ATerm f_7 (ATerm t)
    {
      t = term_c_12;
      return(t);
    }
    ATerm g_7 (ATerm t)
    {
      ATerm m_26 = NULL,n_26 = NULL;
      if(match_cons(t, sym__2))
        {
          m_26 = ATgetArgument(t, 0);
          n_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm t_40 = t;
        int u_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(m_26, n_26);
            ;
            LocalPopChoice(u_40);
          }
        else
          {
            t = t_40;
            t = SSL_addr(m_26, n_26);
          }
      }
      return(t);
    }
    t = crush_2_0(f_7, g_7, t);
    l_26 = t;
    t = SSL_TicksToSeconds(l_26);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  w_26 = t;
  if(match_cons(t, sym__2))
    {
      x_26 = ATgetArgument(t, 0);
      y_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_40 = t;
    int w_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_26;
        if((x_26 != t))
          {
            _fail(t);
          }
        t = w_26;
        ;
        LocalPopChoice(w_40);
      }
    else
      {
        t = v_40;
        t = w_26;
        {
          ATerm x_40 = t;
          int y_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_26, y_26);
              ;
              LocalPopChoice(y_40);
            }
          else
            {
              t = x_40;
              t = SSL_gtr(x_26, y_26);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_26, y_26);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_93 (ATerm), ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm b_27 = NULL,c_27 = NULL;
    b_27 = t;
    t = term_u_29;
    t = get_config_0_0(t);
    c_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_27, term_z_11);
    t = geq_0_0(t);
    t = b_27;
    t = w_93(t);
    return(t);
  }
  t = try_1_0(h_7, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm j_7 (ATerm t)
  {
    ATerm e_27 = NULL,f_27 = NULL;
    t = run_time_0_0(t);
    e_27 = t;
    t = term_w_8;
    t = whoami_0_0(t);
    f_27 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), e_27), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), f_27));
    t = (ATerm) ATmakeAppl(sym__2, term_k_35, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_40), e_27), term_i_30), f_27));
    return(t);
  }
  t = if_verbose1_1_0(j_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm c_67 (ATerm), ATerm t)
{
  ATerm a_41 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_41;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_41);
    }
  else
    {
      t = a_41;
      {
        ATerm l_7 (ATerm t)
        {
          ATerm d_41 = t;
          int e_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(e_41);
            }
          else
            {
              t = d_41;
              {
                ATerm f_41 = t;
                int g_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(g_41);
                  }
                else
                  {
                    t = f_41;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(l_7, t);
      }
    }
  t = c_67(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_27 = ATgetFirst((ATermList) t);
      j_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_27 = NULL,o_27 = NULL;
        t = j_27;
        t = g_0(t);
        n_27 = t;
        t = i_27;
        t = f_0(t);
        o_27 = t;
        t = j_27;
        {
          ATerm m_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(n_27), o_27);
            return(t);
          }
          t = reverse_acc_2_0(f_0, m_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_8;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm n_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, n_7, t);
  return(t);
}
ATerm Program_1_0 (ATerm d_65 (ATerm), ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  s_27 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_27);
  p_27 = t;
  t = q_27;
  t = d_65(t);
  r_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, r_27), p_27);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_40;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_41);
    }
  else
    {
      t = h_41;
      {
        ATerm o_7 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(o_7, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_j_41;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm p_7 (ATerm t)
    {
      ATerm w_27 = NULL;
      w_27 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, w_27), term_k_41);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(p_7, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm e_65 (ATerm), ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
  a_28 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      y_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_28);
  x_27 = t;
  t = y_27;
  t = e_65(t);
  z_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, z_27), x_27);
  return(t);
}
ATerm fetch_1_0 (ATerm w_72 (ATerm), ATerm t)
{
  ATerm e_28 (ATerm t)
  {
    ATerm l_41 = t;
    int m_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(w_72, _id, t);
        ;
        LocalPopChoice(m_41);
      }
    else
      {
        t = l_41;
        t = Cons_2_0(_id, e_28, t);
      }
    return(t);
  }
  t = e_28(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm a_86 (ATerm), ATerm t)
{
  t = fetch_1_0(a_86, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL;
  g_28 = t;
  {
    ATerm n_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_41 = ATgetFirst((ATermList) t);
                ATerm q_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_28;
          }
        ;
        LocalPopChoice(o_41);
      }
    else
      {
        t = n_41;
        t = (ATerm) ATinsert(ATempty, g_28);
      }
    h_28 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), h_28);
    t = g_28;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_40;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_41 = t;
  int s_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(s_41);
    }
  else
    {
      t = r_41;
      {
        ATerm n_28 = NULL,o_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_28 = ATgetFirst((ATermList) t);
            o_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_28;
        {
          ATerm q_7 (ATerm t)
          {
            t = o_28;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(q_7, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL;
  s_28 = t;
  t = SSL_explode_term(s_28);
  if(match_cons(t, sym__2))
    {
      ATerm t_41 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_41) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_28;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm c_73 (ATerm), ATerm t)
{
  ATerm u_28 (ATerm t)
  {
    ATerm u_41 = t;
    int v_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_28, t);
        ;
        LocalPopChoice(v_41);
      }
    else
      {
        t = u_41;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_73(t);
      }
    return(t);
  }
  t = u_28(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL;
  if(match_cons(t, sym__2))
    {
      w_28 = ATgetArgument(t, 0);
      v_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_28;
  {
    ATerm r_7 (ATerm t)
    {
      t = v_28;
      return(t);
    }
    t = at_end_1_0(r_7, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_41 = t;
  int x_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(x_41);
    }
  else
    {
      t = w_41;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL;
  c_29 = t;
  if(match_cons(t, sym__2))
    {
      y_28 = ATgetArgument(t, 0);
      z_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_29);
  x_28 = t;
  t = y_28;
  t = v_58(t);
  a_29 = t;
  t = z_28;
  t = w_58(t);
  b_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, a_29, b_29), x_28);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm g_29 = NULL;
  ATerm s_7 (ATerm t)
  {
    ATerm h_29 = NULL;
    h_29 = t;
    t = SSL_explode_string(h_29);
    return(t);
  }
  ATerm v_7 (ATerm t)
  {
    ATerm i_29 = NULL;
    i_29 = t;
    t = SSL_explode_string(i_29);
    return(t);
  }
  t = _2_0(s_7, v_7, t);
  t = conc_0_0(t);
  g_29 = t;
  t = SSL_implode_string(g_29);
  return(t);
}
ATerm debug_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL;
  j_29 = t;
  t = i_84(t);
  k_29 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_29), k_29));
  t = j_29;
  return(t);
}
ATerm map_1_0 (ATerm m_72 (ATerm), ATerm t)
{
  ATerm l_29 (ATerm t)
  {
    ATerm y_41 = t;
    int z_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_41);
      }
    else
      {
        t = y_41;
        t = Cons_2_0(m_72, l_29, t);
      }
    return(t);
  }
  t = l_29(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_42 = t;
  int b_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_29 = NULL;
      r_29 = t;
      t = SSL_is_string(r_29);
      ;
      LocalPopChoice(b_42);
    }
  else
    {
      t = a_42;
      {
        ATerm c_42 = t;
        int d_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_7 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(w_7, t);
            ;
            LocalPopChoice(d_42);
          }
        else
          {
            t = c_42;
            {
              ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
              v_29 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_29 = ATgetArgument(t, 0);
                  t = w_29;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_29 = ATgetArgument(t, 0);
                      t = w_29;
                      {
                        ATerm e_42 = t;
                        int f_42 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(f_42);
                          }
                        else
                          {
                            t = e_42;
                            {
                              ATerm x_7 (ATerm t)
                              {
                                t = term_g_42;
                                return(t);
                              }
                              t = debug_1_0(x_7, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm b_30 = NULL,c_30 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_29 = ATgetArgument(t, 0);
                          x_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_29;
                      t = eval_config_0_0(t);
                      b_30 = t;
                      t = x_29;
                      t = eval_config_0_0(t);
                      c_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_30, c_30);
                      t = conc_strings_0_0(t);
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
  ATerm f_30 = NULL;
  f_30 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), f_30);
  {
    ATerm b_8 (ATerm t)
    {
      ATerm g_30 = NULL;
      t = eval_config_0_0(t);
      g_30 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), f_30, g_30);
      t = g_30;
      return(t);
    }
    t = try_1_0(b_8, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm u_70 (ATerm), ATerm t)
{
  ATerm h_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_70(t);
      ;
      LocalPopChoice(i_42);
    }
  else
    {
      t = h_42;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_42 = t;
  int k_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_8 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm d_8 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_n_42;
        return(t);
      }
      ATerm e_8 (ATerm t)
      {
        t = term_o_42;
        return(t);
      }
      t = Option_3_0(c_8, d_8, e_8, t);
      ;
      LocalPopChoice(k_42);
    }
  else
    {
      t = j_42;
      {
        ATerm f_8 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm g_8 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_p_42;
          return(t);
        }
        ATerm h_8 (ATerm t)
        {
          t = term_q_42;
          return(t);
        }
        t = Option_3_0(f_8, g_8, h_8, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,o_30 = NULL;
  if(match_cons(t, sym__3))
    {
      j_30 = ATgetArgument(t, 0);
      k_30 = ATgetArgument(t, 1);
      l_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_30, k_30);
  {
    ATerm r_42 = t;
    int s_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_42 = ATgetArgument(t, 0);
            ATerm u_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_30, k_30);
        ;
        LocalPopChoice(s_42);
      }
    else
      {
        t = r_42;
        t = (ATerm) ATempty;
      }
    o_30 = t;
    t = SSL_table_put(j_30, k_30, (ATerm) ATinsert(CheckATermList(o_30), l_30));
    t = (ATerm) ATmakeAppl(sym__3, j_30, k_30, l_30);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm x_30 = NULL;
  t = term_w_8;
  t = f_87(t);
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_42, term_w_42, x_30);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  z_30 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = z_30;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm e_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_31 = ATgetFirst((ATermList) t);
          b_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_31;
      t = a_0(t);
      t = term_w_8;
      t = b_0(t);
      e_31 = t;
      t = (ATerm) ATinsert(CheckATermList(b_31), e_31);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm i_8 (ATerm t)
  {
    ATerm g_31 = NULL;
    g_31 = t;
    if(match_string(t, "--help"))
      {
        t = g_31;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = g_31;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = g_31;
          }
      }
    return(t);
  }
  ATerm j_8 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_x_42;
    return(t);
  }
  ATerm k_8 (ATerm t)
  {
    t = term_y_42;
    return(t);
  }
  t = Option_3_0(i_8, j_8, k_8, t);
  return(t);
}
ATerm Cons_2_0 (ATerm e_60 (ATerm), ATerm f_60 (ATerm), ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
  m_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_31 = ATgetFirst((ATermList) t);
      j_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_31);
  h_31 = t;
  t = i_31;
  t = e_60(t);
  k_31 = t;
  t = j_31;
  t = f_60(t);
  l_31 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(l_31), k_31), h_31);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm t_31 = NULL;
  t_31 = t;
  {
    ATerm l_8 (ATerm t)
    {
      t = term_z_42;
      t = d_87(t);
      return(t);
    }
    t = try_1_0(l_8, t);
    t = t_31;
    {
      ATerm m_8 (ATerm t)
      {
        ATerm u_31 = NULL;
        u_31 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_31);
        t = (ATerm) ATmakeAppl(sym_Program_1, u_31);
        return(t);
      }
      ATerm n_8 (ATerm t)
      {
        ATerm a_43 = t;
        int b_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_43 = t;
            int d_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_43);
              }
            else
              {
                t = c_43;
                t = d_87(t);
                t = Cons_2_0(_id, n_8, t);
              }
            ;
            LocalPopChoice(b_43);
          }
        else
          {
            t = a_43;
            {
              ATerm a_32 = NULL,b_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_32 = ATgetFirst((ATermList) t);
                  b_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_32), (ATerm) ATmakeAppl(sym_Undefined_1, a_32));
            }
          }
        return(t);
      }
      t = Cons_2_0(m_8, n_8, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = n_32;
  {
    ATerm o_8 (ATerm t)
    {
      ATerm e_43 = t;
      int f_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_87(t);
          ;
          LocalPopChoice(f_43);
        }
      else
        {
          t = e_43;
          {
            ATerm g_43 = t;
            int h_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(h_43);
              }
            else
              {
                t = g_43;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_8, t);
    {
      ATerm p_8 (ATerm t)
      {
        ATerm i_43 = t;
        int j_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_32 = NULL;
            u_32 = t;
            {
              ATerm k_43 = t;
              int l_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_32;
                  {
                    ATerm m_43 = t;
                    int n_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_c_41;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(n_43);
                      }
                    else
                      {
                        t = m_43;
                        {
                          ATerm q_8 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(q_8, t);
                        }
                      }
                    t = u_32;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(l_43);
                }
              else
                {
                  t = k_43;
                  t = term_m_42;
                  t = get_config_0_0(t);
                  t = u_32;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(j_43);
          }
        else
          {
            t = i_43;
            {
              ATerm r_8 (ATerm t)
              {
                ATerm s_8 (ATerm t)
                {
                  o_32 = t;
                  return(t);
                }
                t = Undefined_1_0(s_8, t);
                return(t);
              }
              t = option_defined_1_0(r_8, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_32)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_k_35, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_32)), term_o_43));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(p_8, t);
      p_32 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = p_32;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_67 (ATerm), ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm h_67 (ATerm), ATerm t)
{
  ATerm e_10 = NULL;
  t = parse_options_1_0(e_67, t);
  e_10 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), e_10);
  t = e_10;
  t = g_67(t);
  {
    ATerm p_43 = t;
    int q_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_67, t);
        ;
        LocalPopChoice(q_43);
      }
    else
      {
        t = p_43;
        {
          ATerm r_43 = t;
          int s_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_67(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_43);
            }
          else
            {
              t = r_43;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm i_67 (ATerm), ATerm j_67 (ATerm), ATerm t)
{
  t = option_wrap_4_0(i_67, default_usage_0_0, _id, j_67, t);
  return(t);
}
ATerm io_abox2html_0_0 (ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    ATerm t_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = gen_css_0_0(t);
        ;
        LocalPopChoice(u_43);
      }
    else
      {
        t = t_43;
        t = abox2html_0_0(t);
      }
    return(t);
  }
  t = option_wrap_2_0(abox2html_options_0_0, t_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_abox2html_0_0(t);
  return(t);
}
