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
ATerm term_w_57;
ATerm term_l_57;
ATerm term_g_57;
ATerm term_f_57;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_a_57;
ATerm term_z_56;
ATerm term_y_56;
ATerm term_x_56;
ATerm term_w_56;
ATerm term_v_56;
ATerm term_u_56;
ATerm term_p_56;
ATerm term_o_56;
ATerm term_q_55;
ATerm term_p_55;
ATerm term_o_55;
ATerm term_n_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_c_55;
ATerm term_z_54;
ATerm term_p_54;
ATerm term_o_54;
ATerm term_n_54;
ATerm term_m_54;
ATerm term_l_54;
ATerm term_k_54;
ATerm term_j_54;
ATerm term_i_54;
ATerm term_z_53;
ATerm term_y_53;
ATerm term_v_53;
ATerm term_u_53;
ATerm term_t_53;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_h_53;
ATerm term_g_53;
ATerm term_d_53;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_c_52;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_s_51;
ATerm term_p_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_e_51;
ATerm term_b_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_o_50;
ATerm term_n_50;
ATerm term_m_50;
ATerm term_s_49;
ATerm term_r_49;
ATerm term_j_48;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_s_45;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_p_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_m_44;
ATerm term_g_44;
ATerm term_v_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_d_42;
ATerm term_m_41;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_t_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_b_40;
ATerm term_u_39;
ATerm term_n_39;
ATerm term_e_39;
ATerm term_y_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_q_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_d_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_j_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_x_31;
ATerm term_n_31;
ATerm term_l_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_v_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_o_29;
ATerm term_n_28;
ATerm term_t_27;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_y_25;
ATerm term_w_25;
ATerm term_s_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_x_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_e_23;
ATerm term_c_23;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_l_22;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_c_12;
ATerm term_f_11;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_z_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_o_5;
void init_constant_terms (void)
{
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("  </body>\n", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("</html>\n", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Dec", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nov", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Oct", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Sep", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Aug", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Jul", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Jun", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("May", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Apr", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Mar", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Feb", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Jan", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("December", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("November", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("October", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("September", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("August", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("July", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("June", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("April", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("March", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("February", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("January", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Sat", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Fri", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Thu", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Wed", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Tue", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Mon", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Sun", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Saturday", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Friday", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Thursday", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Wednesday", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuesday", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Monday", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Sunday", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(100);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("p.m.", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("a.m.", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Saturday_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Friday_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Thursday_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Wednesday_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Tuesday_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Monday_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Sunday_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_December_0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_November_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_October_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_September_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_August_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_July_0);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_June_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_May_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_April_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_March_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_February_0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_January_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("EEEE", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("d", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("MMMM", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("yyyy", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("HH", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("mm", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ss", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--title", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no title specified for HTML document", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("<!-- \n", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   This file is generated at ", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" \n", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   by abox2html (C) 2001 Merijn de Jonge (mdejonge@cwi.nl)\n", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-->\n", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("<!doctype html public \"-//W3C//DTD WWW HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/loose.dtd\"> \n", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("<html>\n", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("  <head>\n", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("    <title>", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("</title>\n", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("    <link rel=\"stylesheet\" type=\"text/css\" href=\"boxstyle.css\">\n", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("  </head>\n", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("  <body>\n", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-html", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_34, term_v_7, term_g_34);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_34, term_l_8, term_j_34);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_35, term_k_8, term_b_35);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_35, term_h_8, term_h_35);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_35, term_e_8, term_k_35);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_35, term_n_35, term_o_35);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_35, term_r_35, term_s_35);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_35, term_g_8, term_z_35);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_36, term_g_36, term_h_36);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_36, term_t_36, term_u_36);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_36, term_f_8, term_b_37);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_37, term_j_8, term_e_37);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_37, term_j_37, term_k_37);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_37, term_c_8, term_n_37);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_38, term_m_38, term_y_38);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_39, term_u_39, term_b_40);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_40, term_g_40, term_h_40);
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_40, term_w_40, term_x_40);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_41, term_p_8, term_d_42);
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_42, term_d_8, term_n_42);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_42, term_o_8, term_u_42);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_42, term_z_42, term_v_43);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_44, term_h_45, term_i_45);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_45, term_p_45, term_q_45);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_45, term_i_8, term_t_45);
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_45, term_w_45, term_z_45);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_46, term_c_46, term_l_46);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_46, term_o_46, term_p_46);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(sym__2, term_j_48, term_r_49);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(sym__2, term_j_48, term_y_50);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(sym__2, term_t_5, term_x_51);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css-boxstyle", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym__2, term_j_32, term_w_7);
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_7);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(sym__2, term_s_53, term_o_5);
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym__2, term_g_53, term_i_54);
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Only generate cascading style sheet", 0, ATtrue));
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-t title    Title of HTML document", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(sym__2, term_m_55, term_n_55);
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(sym__2, term_u_56, term_o_5);
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(sym__2, term_x_56, term_o_5);
  ATprotect(&(term_z_56));
  term_z_56 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(sym__2, term_c_55, term_o_5);
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(sym__3, term_m_55, term_n_55, (ATerm) ATempty);
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm close_0_0 (ATerm);
ATerm xtc_close_fd_0_0 (ATerm);
ATerm fdcopy_0_0 (ATerm);
ATerm finally_2_0 (ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm);
ATerm File_as_fd_1_0 (ATerm j_95 (ATerm), ATerm);
ATerm STDERR__FILENO_0_0 (ATerm);
ATerm STDOUT__FILENO_0_0 (ATerm);
ATerm STDIN__FILENO_0_0 (ATerm);
ATerm open_0_0 (ATerm);
ATerm xtc_open_fd_0_0 (ATerm);
ATerm xtc_new_file_name_0_0 (ATerm);
ATerm xtc_cat_0_0 (ATerm);
ATerm print_0_0 (ATerm);
ATerm print_to_0_0 (ATerm);
ATerm create_footer_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm e_85 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm stdin_0_0 (ATerm);
ATerm FILE_1_0 (ATerm f_66 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm);
ATerm month2abbr_0_0 (ATerm);
ATerm month2text_0_0 (ATerm);
ATerm day_of_week2abbr_0_0 (ATerm);
ATerm day_of_week2text_0_0 (ATerm);
ATerm lt_0_0 (ATerm);
ATerm leq_lt_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm comp_comp_2_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm);
ATerm leq_leq_0_0 (ATerm);
ATerm while_not_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm);
ATerm for_3_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm);
ATerm copy_0_0 (ATerm);
ATerm copy_char_0_0 (ATerm);
ATerm pos_0_0 (ATerm);
ATerm align_helper_0_0 (ATerm);
ATerm align_right_0_0 (ATerm);
ATerm foldr_3_0 (ATerm m_79 (ATerm), ATerm n_79 (ATerm), ATerm o_79 (ATerm), ATerm);
ATerm length_0_0 (ATerm);
ATerm string_length_0_0 (ATerm);
ATerm mod_0_0 (ATerm);
ATerm inc_0_0 (ATerm);
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
ATerm xtc_io_1_0 (ATerm r_95 (ATerm), ATerm);
ATerm abox2html_0_0 (ATerm);
ATerm subt_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm close_file_0_0 (ATerm);
ATerm execvp_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm g_73 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm waitpid_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm j_84 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm l_94 (ATerm), ATerm);
ATerm error_0_0 (ATerm);
ATerm xtc_find_loc_0_0 (ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm z_80 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm t_82 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm u_84 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm k_94 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm m_94 (ATerm), ATerm);
ATerm set_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm);
ATerm union_1_0 (ATerm x_76 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm get_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm y_80 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm fopen_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm can_read_file_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm getenv_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm e_96 (ATerm), ATerm);
ATerm assert_1_0 (ATerm v_80 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm x_84 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm access_0_0 (ATerm);
ATerm file_exists_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_generate_2_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm);
ATerm copy_file_0_0 (ATerm);
ATerm stderr_0_0 (ATerm);
ATerm stdout_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm s_80 (ATerm), ATerm);
ATerm remove_file_0_0 (ATerm);
ATerm restore_always_2_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm r_80 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_95 (ATerm), ATerm);
ATerm xtc_output_1_0 (ATerm s_95 (ATerm), ATerm);
ATerm gen_css_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm abox2html_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm k_79 (ATerm), ATerm l_79 (ATerm), ATerm);
ATerm crush_2_0 (ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_94 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm j_67 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm j_87 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm i_87 (ATerm), ATerm);
ATerm Program_1_0 (ATerm k_65 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm l_65 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm e_73 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm i_86 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm k_73 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm _2_0 (ATerm c_59 (ATerm), ATerm d_59 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm q_84 (ATerm), ATerm);
ATerm map_1_0 (ATerm t_72 (ATerm), ATerm);
ATerm is_string_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm b_71 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm n_87 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_60 (ATerm), ATerm m_60 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm l_87 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm k_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_67 (ATerm), ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm o_67 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm p_67 (ATerm), ATerm q_67 (ATerm), ATerm);
ATerm io_abox2html_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm close_0_0 (ATerm t)
{
  ATerm u_8 = NULL;
  if(((u_8 != NULL) && (u_8 != t)))
    _fail(t);
  else
    u_8 = t;
  t = SSL_close(not_null(u_8));
  return(t);
}
ATerm xtc_close_fd_0_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    ATerm k_5 = t;
    int l_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_8 = NULL;
        if(((v_8 != NULL) && (v_8 != t)))
          _fail(t);
        else
          v_8 = t;
        {
          ATerm m_5 = t;
          int n_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
              t = not_null(v_8);
              if(((w_8 != NULL) && (w_8 != t)))
                _fail(t);
              else
                w_8 = t;
              t = not_null(v_8);
              if(((x_8 != NULL) && (x_8 != t)))
                _fail(t);
              else
                x_8 = t;
              if(((y_8 != NULL) && (y_8 != t)))
                _fail(t);
              else
                y_8 = t;
              t = not_null(x_8);
              if(((z_8 != NULL) && (z_8 != t)))
                _fail(t);
              else
                z_8 = t;
              t = term_o_5;
              t = STDIN__FILENO_0_0(t);
              if(((a_9 != NULL) && (a_9 != t)))
                _fail(t);
              else
                a_9 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_8), not_null(a_9));
              t = eq_0_0(t);
              t = not_null(w_8);
              ;
              LocalPopChoice(n_5);
            }
          else
            {
              t = m_5;
              {
                ATerm p_5 = t;
                int q_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
                    t = not_null(v_8);
                    if(((b_9 != NULL) && (b_9 != t)))
                      _fail(t);
                    else
                      b_9 = t;
                    t = not_null(v_8);
                    if(((c_9 != NULL) && (c_9 != t)))
                      _fail(t);
                    else
                      c_9 = t;
                    if(((d_9 != NULL) && (d_9 != t)))
                      _fail(t);
                    else
                      d_9 = t;
                    t = not_null(c_9);
                    if(((e_9 != NULL) && (e_9 != t)))
                      _fail(t);
                    else
                      e_9 = t;
                    t = term_o_5;
                    t = STDOUT__FILENO_0_0(t);
                    if(((f_9 != NULL) && (f_9 != t)))
                      _fail(t);
                    else
                      f_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), not_null(f_9));
                    t = eq_0_0(t);
                    t = not_null(b_9);
                    ;
                    LocalPopChoice(q_5);
                  }
                else
                  {
                    t = p_5;
                    {
                      ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
                      t = not_null(v_8);
                      if(((g_9 != NULL) && (g_9 != t)))
                        _fail(t);
                      else
                        g_9 = t;
                      t = not_null(v_8);
                      if(((h_9 != NULL) && (h_9 != t)))
                        _fail(t);
                      else
                        h_9 = t;
                      if(((i_9 != NULL) && (i_9 != t)))
                        _fail(t);
                      else
                        i_9 = t;
                      t = not_null(h_9);
                      if(((j_9 != NULL) && (j_9 != t)))
                        _fail(t);
                      else
                        j_9 = t;
                      t = term_o_5;
                      t = STDERR__FILENO_0_0(t);
                      if(((k_9 != NULL) && (k_9 != t)))
                        _fail(t);
                      else
                        k_9 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), not_null(k_9));
                      t = eq_0_0(t);
                      t = not_null(g_9);
                    }
                  }
              }
            }
        }
        ;
        LocalPopChoice(l_5);
      }
    else
      {
        t = k_5;
        t = close_0_0(t);
      }
    return(t);
  }
  ATerm f_0 (ATerm t)
  {
    t = term_o_5;
    return(t);
  }
  t = finally_2_0(b_0, f_0, t);
  return(t);
}
ATerm fdcopy_0_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_9 != NULL) && (l_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_9 = ATgetArgument(t, 0);
      if(((m_9 != NULL) && (m_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fdcopy(not_null(l_9), not_null(m_9));
  return(t);
}
ATerm finally_2_0 (ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm t)
{
  ATerm r_5 = t;
  int s_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_71(t);
      LocalPopChoice(s_5);
      {
        ATerm n_9 = NULL;
        if(((n_9 != NULL) && (n_9 != t)))
          _fail(t);
        else
          n_9 = t;
        t = t_71(t);
        t = not_null(n_9);
      }
    }
  else
    {
      t = r_5;
      {
        ATerm o_9 = NULL;
        if(((o_9 != NULL) && (o_9 != t)))
          _fail(t);
        else
          o_9 = t;
        t = t_71(t);
        t = not_null(o_9);
        _fail(t);
      }
    }
  return(t);
}
ATerm File_as_fd_1_0 (ATerm j_95 (ATerm), ATerm t)
{
  ATerm p_9 = NULL;
  t = xtc_open_fd_0_0(t);
  if(((p_9 != NULL) && (p_9 != t)))
    _fail(t);
  else
    p_9 = t;
  {
    ATerm n_0 (ATerm t)
    {
      ATerm q_9 = NULL;
      if(((q_9 != NULL) && (q_9 != t)))
        _fail(t);
      else
        q_9 = t;
      {
        ATerm o_0 (ATerm t)
        {
          t = not_null(p_9);
          t = xtc_close_fd_0_0(t);
          return(t);
        }
        t = try_1_0(o_0, t);
        t = not_null(q_9);
      }
      return(t);
    }
    t = finally_2_0(j_95, n_0, t);
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
ATerm open_0_0 (ATerm t)
{
  ATerm r_9 = NULL;
  if(((r_9 != NULL) && (r_9 != t)))
    _fail(t);
  else
    r_9 = t;
  t = SSL_open(not_null(r_9));
  return(t);
}
ATerm xtc_open_fd_0_0 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  if(((u_9 != NULL) && (u_9 != t)))
    _fail(t);
  else
    u_9 = t;
  if(match_cons(t, sym_FILE_1))
    {
      t_9 = ATgetArgument(t, 0);
      {
        ATerm v_9 = NULL;
        t = not_null(t_9);
        if(((v_9 != NULL) && (v_9 != t)))
          _fail(t);
        else
          v_9 = t;
        t = open_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          t = term_o_5;
          t = STDIN__FILENO_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_stdout_0))
            {
              t = term_o_5;
              t = STDOUT__FILENO_0_0(t);
            }
          else
            {
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
              t = term_o_5;
              t = STDERR__FILENO_0_0(t);
            }
        }
    }
  return(t);
}
ATerm xtc_new_file_name_0_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL;
  t = new_file_0_0(t);
  if(((w_9 != NULL) && (w_9 != t)))
    _fail(t);
  else
    w_9 = t;
  if(((x_9 != NULL) && (x_9 != t)))
    _fail(t);
  else
    x_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), term_o_5);
  {
    ATerm p_0 (ATerm t)
    {
      t = term_t_5;
      return(t);
    }
    t = assert_1_0(p_0, t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_9));
  }
  return(t);
}
ATerm xtc_cat_0_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL;
  if(((y_9 != NULL) && (y_9 != t)))
    _fail(t);
  else
    y_9 = t;
  if(((z_9 != NULL) && (z_9 != t)))
    _fail(t);
  else
    z_9 = t;
  t = xtc_new_file_name_0_0(t);
  if(((a_10 != NULL) && (a_10 != t)))
    _fail(t);
  else
    a_10 = t;
  t = xtc_open_fd_0_0(t);
  if(((b_10 != NULL) && (b_10 != t)))
    _fail(t);
  else
    b_10 = t;
  t = not_null(y_9);
  {
    ATerm q_0 (ATerm t)
    {
      ATerm r_0 (ATerm t)
      {
        ATerm c_10 = NULL,d_10 = NULL;
        if(((c_10 != NULL) && (c_10 != t)))
          _fail(t);
        else
          c_10 = t;
        if(((d_10 != NULL) && (d_10 != t)))
          _fail(t);
        else
          d_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_10), not_null(b_10));
        t = fdcopy_0_0(t);
        return(t);
      }
      t = File_as_fd_1_0(r_0, t);
      return(t);
    }
    t = map_1_0(q_0, t);
    t = not_null(b_10);
    t = xtc_close_fd_0_0(t);
    t = not_null(a_10);
  }
  return(t);
}
ATerm print_0_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_10 != NULL) && (e_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_10 = ATgetArgument(t, 0);
      if(((f_10 != NULL) && (f_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((g_10 != NULL) && (g_10 != t)))
    _fail(t);
  else
    g_10 = t;
  t = SSL_print(not_null(e_10), not_null(f_10));
  t = not_null(g_10);
  return(t);
}
ATerm print_to_0_0 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
  if(((h_10 != NULL) && (h_10 != t)))
    _fail(t);
  else
    h_10 = t;
  if(((i_10 != NULL) && (i_10 != t)))
    _fail(t);
  else
    i_10 = t;
  t = xtc_new_file_0_0(t);
  if(((j_10 != NULL) && (j_10 != t)))
    _fail(t);
  else
    j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_10), not_null(h_10));
  t = print_0_0(t);
  t = not_null(j_10);
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_10));
  return(t);
}
ATerm create_footer_0_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_5), term_u_5);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL;
  if(((l_10 != NULL) && (l_10 != t)))
    _fail(t);
  else
    l_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm n_10 = NULL,o_10 = NULL;
      t = not_null(l_10);
      if(((n_10 != NULL) && (n_10 != t)))
        _fail(t);
      else
        n_10 = t;
      t = term_w_5;
      t = ReadFromFile_0_0(t);
      if(((o_10 != NULL) && (o_10 != t)))
        _fail(t);
      else
        o_10 = t;
    }
  else
    {
      ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((m_10 != NULL) && (m_10 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            m_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(m_10);
      if(((p_10 != NULL) && (p_10 != t)))
        _fail(t);
      else
        p_10 = t;
      t = not_null(l_10);
      if(((q_10 != NULL) && (q_10 != t)))
        _fail(t);
      else
        q_10 = t;
      t = not_null(p_10);
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
      if(((r_10 != NULL) && (r_10 != t)))
        _fail(t);
      else
        r_10 = t;
    }
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_5 = ATgetArgument(t, 0);
      if(match_cons(x_5, sym_Stream_1))
        {
          if(((s_10 != NULL) && (s_10 != ATgetArgument(x_5, 0))))
            _fail(ATgetArgument(x_5, 0));
          else
            s_10 = ATgetArgument(x_5, 0);
        }
      else
        _fail(t);
      if(((t_10 != NULL) && (t_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(s_10), not_null(t_10));
  if(((u_10 != NULL) && (u_10 != t)))
    _fail(t);
  else
    u_10 = t;
  if(((v_10 != NULL) && (v_10 != t)))
    _fail(t);
  else
    v_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_10));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm e_85 (ATerm), ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_10 != NULL) && (w_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_10 = ATgetArgument(t, 0);
      if(((x_10 != NULL) && (x_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(w_10);
  if(((y_10 != NULL) && (y_10 != t)))
    _fail(t);
  else
    y_10 = t;
  if(((z_10 != NULL) && (z_10 != t)))
    _fail(t);
  else
    z_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_10), term_y_5);
  t = open_stream_0_0(t);
  if(((a_11 != NULL) && (a_11 != t)))
    _fail(t);
  else
    a_11 = t;
  if(((b_11 != NULL) && (b_11 != t)))
    _fail(t);
  else
    b_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_11), not_null(x_10));
  t = e_85(t);
  t = fclose_0_0(t);
  t = not_null(x_10);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
  if(((c_11 != NULL) && (c_11 != t)))
    _fail(t);
  else
    c_11 = t;
  if(((d_11 != NULL) && (d_11 != t)))
    _fail(t);
  else
    d_11 = t;
  t = xtc_new_file_0_0(t);
  if(((e_11 != NULL) && (e_11 != t)))
    _fail(t);
  else
    e_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_11), not_null(c_11));
  t = WriteToBinaryFile_0_0(t);
  t = not_null(e_11);
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_11));
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_96, o_96, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL;
  if(((g_11 != NULL) && (g_11 != t)))
    _fail(t);
  else
    g_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
      t = not_null(g_11);
      if(((i_11 != NULL) && (i_11 != t)))
        _fail(t);
      else
        i_11 = t;
      t = xtc_new_file_0_0(t);
      if(((j_11 != NULL) && (j_11 != t)))
        _fail(t);
      else
        j_11 = t;
      if(((k_11 != NULL) && (k_11 != t)))
        _fail(t);
      else
        k_11 = t;
      t = m_0(t);
      if(((l_11 != NULL) && (l_11 != t)))
        _fail(t);
      else
        l_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_11), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_11)), term_z_5));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(j_11);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_11));
    }
  else
    {
      ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((h_11 != NULL) && (h_11 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            h_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(h_11);
      if(((m_11 != NULL) && (m_11 != t)))
        _fail(t);
      else
        m_11 = t;
      t = not_null(g_11);
      if(((n_11 != NULL) && (n_11 != t)))
        _fail(t);
      else
        n_11 = t;
      t = not_null(m_11);
      t = xtc_new_file_0_0(t);
      if(((o_11 != NULL) && (o_11 != t)))
        _fail(t);
      else
        o_11 = t;
      if(((p_11 != NULL) && (p_11 != t)))
        _fail(t);
      else
        p_11 = t;
      t = m_0(t);
      if(((q_11 != NULL) && (q_11 != t)))
        _fail(t);
      else
        q_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_11)), term_z_5), not_null(m_11)), term_a_6));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(o_11);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_11));
    }
  return(t);
}
ATerm stdin_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdin_0)))
    _fail(t);
  return(t);
}
ATerm FILE_1_0 (ATerm f_66 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  if(((u_11 != NULL) && (u_11 != t)))
    _fail(t);
  else
    u_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((s_11 != NULL) && (s_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((v_11 != NULL) && (v_11 != t)))
    _fail(t);
  else
    v_11 = t;
  t = SSLgetAnnotations(not_null(u_11));
  if(((r_11 != NULL) && (r_11 != t)))
    _fail(t);
  else
    r_11 = t;
  t = not_null(s_11);
  t = f_66(t);
  if(((t_11 != NULL) && (t_11 != t)))
    _fail(t);
  else
    t_11 = t;
  if(((x_11 != NULL) && (x_11 != t)))
    _fail(t);
  else
    x_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(t_11)), not_null(r_11));
  if(((w_11 != NULL) && (w_11 != t)))
    _fail(t);
  else
    w_11 = t;
  return(t);
}
ATerm xtc_transform_2_0 (ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm t)
{
  ATerm b_6 = t;
  int c_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_6 = t;
      int e_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(e_6);
        }
      else
        {
          t = d_6;
          t = stdin_0_0(t);
        }
      LocalPopChoice(c_6);
      t = xtc_transform_file_2_0(g_96, h_96, t);
    }
  else
    {
      t = b_6;
      t = xtc_transform_term_2_0(g_96, h_96, t);
    }
  return(t);
}
ATerm month2abbr_0_0 (ATerm t)
{
  ATerm z_11 = NULL;
  if(((z_11 != NULL) && (z_11 != t)))
    _fail(t);
  else
    z_11 = t;
  if(match_cons(t, sym_December_0))
    {
      t = term_f_6;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_g_6;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_h_6;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_i_6;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_j_6;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_k_6;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_l_6;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_m_6;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_n_6;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_o_6;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_p_6;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_q_6;
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
  ATerm b_12 = NULL;
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  if(match_cons(t, sym_December_0))
    {
      t = term_r_6;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_s_6;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_t_6;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_u_6;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_v_6;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_w_6;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_x_6;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_m_6;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_y_6;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_z_6;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_a_7;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_b_7;
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
ATerm day_of_week2abbr_0_0 (ATerm t)
{
  ATerm d_12 = NULL;
  if(((d_12 != NULL) && (d_12 != t)))
    _fail(t);
  else
    d_12 = t;
  if(match_cons(t, sym_Saturday_0))
    {
      t = term_c_7;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_d_7;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_e_7;
            }
          else
            {
              if(match_cons(t, sym_Wednesday_0))
                {
                  t = term_f_7;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_g_7;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_h_7;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_i_7;
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
  ATerm f_12 = NULL;
  if(((f_12 != NULL) && (f_12 != t)))
    _fail(t);
  else
    f_12 = t;
  if(match_cons(t, sym_Saturday_0))
    {
      t = term_j_7;
    }
  else
    {
      if(match_cons(t, sym_Friday_0))
        {
          t = term_k_7;
        }
      else
        {
          if(match_cons(t, sym_Thursday_0))
            {
              t = term_l_7;
            }
          else
            {
              if(match_cons(t, sym_Wednesday_0))
                {
                  t = term_m_7;
                }
              else
                {
                  if(match_cons(t, sym_Tuesday_0))
                    {
                      t = term_n_7;
                    }
                  else
                    {
                      if(match_cons(t, sym_Monday_0))
                        {
                          t = term_o_7;
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Sunday_0)))
                            _fail(t);
                          t = term_p_7;
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
  ATerm q_7 = t;
  if((PushChoice() == 0))
    {
      t = geq_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_7;
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
  ATerm r_7 = t;
  if((PushChoice() == 0))
    {
      t = gt_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_7;
    }
  return(t);
}
ATerm comp_comp_2_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((g_12 != NULL) && (g_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_12 = ATgetArgument(t, 0);
      if(((h_12 != NULL) && (h_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_12 = ATgetArgument(t, 1);
      if(((i_12 != NULL) && (i_12 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        i_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((j_12 != NULL) && (j_12 != t)))
    _fail(t);
  else
    j_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_12), not_null(h_12));
  t = n_80(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_12), not_null(i_12));
  t = o_80(t);
  t = not_null(j_12);
  return(t);
}
ATerm leq_leq_0_0 (ATerm t)
{
  t = comp_comp_2_0(leq_0_0, leq_0_0, t);
  return(t);
}
ATerm while_not_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t)
{
  ATerm k_12 (ATerm t)
  {
    ATerm s_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_83(t);
        ;
        LocalPopChoice(t_7);
      }
    else
      {
        t = s_7;
        t = j_83(t);
        t = k_12(t);
      }
    return(t);
  }
  t = k_12(t);
  return(t);
}
ATerm for_3_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm t)
{
  t = l_83(t);
  t = while_not_2_0(m_83, n_83, t);
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm l_12 = NULL,m_12 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((l_12 != NULL) && (l_12 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          l_12 = ATgetArgument(t, 0);
        if(((m_12 != NULL) && (m_12 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          m_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(l_12), not_null(m_12), (ATerm) ATempty);
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm n_12 = NULL,o_12 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm u_7 = ATgetArgument(t, 0);
        if(((ATgetType(u_7) != AT_INT) || (ATgetInt((ATermInt) u_7) != 0)))
          _fail(t);
        if(((n_12 != NULL) && (n_12 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          n_12 = ATgetArgument(t, 1);
        if(((o_12 != NULL) && (o_12 != ATgetArgument(t, 2))))
          _fail(ATgetArgument(t, 2));
        else
          o_12 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = not_null(o_12);
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL;
    if(match_cons(t, sym__3))
      {
        if(((p_12 != NULL) && (p_12 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          p_12 = ATgetArgument(t, 0);
        if(((q_12 != NULL) && (q_12 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          q_12 = ATgetArgument(t, 1);
        if(((r_12 != NULL) && (r_12 != ATgetArgument(t, 2))))
          _fail(ATgetArgument(t, 2));
        else
          r_12 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    if(((s_12 != NULL) && (s_12 != t)))
      _fail(t);
    else
      s_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_12), term_v_7);
    t = geq_0_0(t);
    t = not_null(s_12);
    if(((t_12 != NULL) && (t_12 != t)))
      _fail(t);
    else
      t_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_12), term_v_7);
    t = subt_0_0(t);
    if(((u_12 != NULL) && (u_12 != t)))
      _fail(t);
    else
      u_12 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(u_12), not_null(q_12), (ATerm) ATinsert(CheckATermList(not_null(r_12)), not_null(q_12)));
    return(t);
  }
  t = for_3_0(s_0, t_0, u_0, t);
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  t = copy_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm pos_0_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  if(((v_12 != NULL) && (v_12 != t)))
    _fail(t);
  else
    v_12 = t;
  if(((w_12 != NULL) && (w_12 != t)))
    _fail(t);
  else
    w_12 = t;
  if(((x_12 != NULL) && (x_12 != t)))
    _fail(t);
  else
    x_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_12), term_w_7);
  t = geq_0_0(t);
  t = not_null(v_12);
  return(t);
}
ATerm align_helper_0_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,g_13 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((y_12 != NULL) && (y_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_12 = ATgetArgument(t, 0);
      if(((z_12 != NULL) && (z_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_12 = ATgetArgument(t, 1);
      if(((a_13 != NULL) && (a_13 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        a_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((b_13 != NULL) && (b_13 != t)))
    _fail(t);
  else
    b_13 = t;
  t = not_null(z_12);
  t = string_length_0_0(t);
  if(((c_13 != NULL) && (c_13 != t)))
    _fail(t);
  else
    c_13 = t;
  if(((d_13 != NULL) && (d_13 != t)))
    _fail(t);
  else
    d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_13), not_null(d_13));
  t = subt_0_0(t);
  {
    ATerm x_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pos_0_0(t);
        LocalPopChoice(y_7);
        {
          ATerm e_13 = NULL,f_13 = NULL;
          if(((e_13 != NULL) && (e_13 != t)))
            _fail(t);
          else
            e_13 = t;
          if(((f_13 != NULL) && (f_13 != t)))
            _fail(t);
          else
            f_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), not_null(y_12));
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = x_7;
        t = term_z_7;
      }
    if(((g_13 != NULL) && (g_13 != t)))
      _fail(t);
    else
      g_13 = t;
  }
  return(t);
}
ATerm align_right_0_0 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((h_13 != NULL) && (h_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_13 = ATgetArgument(t, 0);
      if(((i_13 != NULL) && (i_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_13 = ATgetArgument(t, 1);
      if(((j_13 != NULL) && (j_13 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        j_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((k_13 != NULL) && (k_13 != t)))
    _fail(t);
  else
    k_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(h_13), not_null(i_13), not_null(j_13));
  t = align_helper_0_0(t);
  if(((l_13 != NULL) && (l_13 != t)))
    _fail(t);
  else
    l_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_13), not_null(i_13));
  t = conc_strings_0_0(t);
  return(t);
}
ATerm foldr_3_0 (ATerm m_79 (ATerm), ATerm n_79 (ATerm), ATerm o_79 (ATerm), ATerm t)
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = m_79(t);
      ;
      LocalPopChoice(b_8);
    }
  else
    {
      t = a_8;
      {
        ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
        if(((n_13 != NULL) && (n_13 != t)))
          _fail(t);
        else
          n_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((o_13 != NULL) && (o_13 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              o_13 = ATgetFirst((ATermList) t);
            if(((p_13 != NULL) && (p_13 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              p_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(o_13);
        if(((q_13 != NULL) && (q_13 != t)))
          _fail(t);
        else
          q_13 = t;
        t = not_null(p_13);
        if(((r_13 != NULL) && (r_13 != t)))
          _fail(t);
        else
          r_13 = t;
        t = not_null(n_13);
        if(((s_13 != NULL) && (s_13 != t)))
          _fail(t);
        else
          s_13 = t;
        t = not_null(q_13);
        t = o_79(t);
        if(((t_13 != NULL) && (t_13 != t)))
          _fail(t);
        else
          t_13 = t;
        t = not_null(s_13);
        if(((u_13 != NULL) && (u_13 != t)))
          _fail(t);
        else
          u_13 = t;
        t = not_null(r_13);
        t = foldr_3_0(m_79, n_79, o_79, t);
        if(((v_13 != NULL) && (v_13 != t)))
          _fail(t);
        else
          v_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_13), not_null(v_13));
        t = n_79(t);
      }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    t = term_w_7;
    return(t);
  }
  ATerm w_0 (ATerm t)
  {
    t = term_v_7;
    return(t);
  }
  t = foldr_3_0(v_0, add_0_0, w_0, t);
  return(t);
}
ATerm string_length_0_0 (ATerm t)
{
  t = explode_string_0_0(t);
  t = length_0_0(t);
  return(t);
}
ATerm mod_0_0 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_13 != NULL) && (w_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_13 = ATgetArgument(t, 0);
      if(((x_13 != NULL) && (x_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mod(not_null(w_13), not_null(x_13));
  return(t);
}
ATerm inc_0_0 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL;
  if(((y_13 != NULL) && (y_13 != t)))
    _fail(t);
  else
    y_13 = t;
  if(((z_13 != NULL) && (z_13 != t)))
    _fail(t);
  else
    z_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_13), term_v_7);
  t = add_0_0(t);
  return(t);
}
ATerm month2index_0_0 (ATerm t)
{
  ATerm b_14 = NULL;
  if(((b_14 != NULL) && (b_14 != t)))
    _fail(t);
  else
    b_14 = t;
  if(match_cons(t, sym_December_0))
    {
      t = term_c_8;
    }
  else
    {
      if(match_cons(t, sym_November_0))
        {
          t = term_d_8;
        }
      else
        {
          if(match_cons(t, sym_October_0))
            {
              t = term_e_8;
            }
          else
            {
              if(match_cons(t, sym_September_0))
                {
                  t = term_f_8;
                }
              else
                {
                  if(match_cons(t, sym_August_0))
                    {
                      t = term_g_8;
                    }
                  else
                    {
                      if(match_cons(t, sym_July_0))
                        {
                          t = term_h_8;
                        }
                      else
                        {
                          if(match_cons(t, sym_June_0))
                            {
                              t = term_i_8;
                            }
                          else
                            {
                              if(match_cons(t, sym_May_0))
                                {
                                  t = term_j_8;
                                }
                              else
                                {
                                  if(match_cons(t, sym_April_0))
                                    {
                                      t = term_k_8;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_March_0))
                                        {
                                          t = term_l_8;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_February_0))
                                            {
                                              t = term_v_7;
                                            }
                                          else
                                            {
                                              if(!(match_cons(t, sym_January_0)))
                                                _fail(t);
                                              t = term_w_7;
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
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
  if(((m_15 != NULL) && (m_15 != t)))
    _fail(t);
  else
    m_15 = t;
  if(match_cons(t, sym__2))
    {
      if(((n_15 != NULL) && (n_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_15 = ATgetArgument(t, 0);
      if(((o_15 != NULL) && (o_15 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(n_15);
  if(match_string(t, "ss"))
    {
      ATerm v_15 = NULL;
      t = not_null(o_15);
      if(match_cons(t, sym_ComponentTime_3))
        {
          if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            p_15 = ATgetArgument(t, 0);
          if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_15 = ATgetArgument(t, 1);
          if(((u_15 != NULL) && (u_15 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            u_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(t_15);
      if(match_cons(t, sym_DayTime_3))
        {
          if(((h_15 != NULL) && (h_15 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            h_15 = ATgetArgument(t, 0);
          if(((i_15 != NULL) && (i_15 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_15 = ATgetArgument(t, 1);
          if(((j_15 != NULL) && (j_15 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            j_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(j_15);
      if(((v_15 != NULL) && (v_15 != t)))
        _fail(t);
      else
        v_15 = t;
    }
  else
    {
      if(match_string(t, "mm"))
        {
          ATerm w_15 = NULL;
          t = not_null(o_15);
          if(match_cons(t, sym_ComponentTime_3))
            {
              if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_15 = ATgetArgument(t, 0);
              if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                t_15 = ATgetArgument(t, 1);
              if(((u_15 != NULL) && (u_15 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                u_15 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = not_null(t_15);
          if(match_cons(t, sym_DayTime_3))
            {
              if(((h_15 != NULL) && (h_15 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_15 = ATgetArgument(t, 0);
              if(((i_15 != NULL) && (i_15 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                i_15 = ATgetArgument(t, 1);
              if(((j_15 != NULL) && (j_15 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                j_15 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = not_null(i_15);
          if(((w_15 != NULL) && (w_15 != t)))
            _fail(t);
          else
            w_15 = t;
        }
      else
        {
          if(match_string(t, "KK"))
            {
              t = not_null(o_15);
              if(match_cons(t, sym_ComponentTime_3))
                {
                  if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    p_15 = ATgetArgument(t, 0);
                  if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    t_15 = ATgetArgument(t, 1);
                  if(((u_15 != NULL) && (u_15 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    u_15 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = not_null(t_15);
              if(match_cons(t, sym_DayTime_3))
                {
                  if(((h_15 != NULL) && (h_15 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    h_15 = ATgetArgument(t, 0);
                  if(((i_15 != NULL) && (i_15 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    i_15 = ATgetArgument(t, 1);
                  if(((j_15 != NULL) && (j_15 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    j_15 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              {
                ATerm m_8 = t;
                int n_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_15 = NULL,y_15 = NULL;
                    t = not_null(h_15);
                    if(((x_15 != NULL) && (x_15 != t)))
                      _fail(t);
                    else
                      x_15 = t;
                    t = not_null(m_15);
                    if(((y_15 != NULL) && (y_15 != t)))
                      _fail(t);
                    else
                      y_15 = t;
                    t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(x_15), term_p_8);
                    t = leq_leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_15), term_o_8);
                    t = subt_0_0(t);
                    ;
                    LocalPopChoice(n_8);
                  }
                else
                  {
                    t = m_8;
                    {
                      ATerm z_15 = NULL,a_16 = NULL;
                      t = not_null(h_15);
                      if(((z_15 != NULL) && (z_15 != t)))
                        _fail(t);
                      else
                        z_15 = t;
                      t = not_null(m_15);
                      if(((a_16 != NULL) && (a_16 != t)))
                        _fail(t);
                      else
                        a_16 = t;
                      t = (ATerm) ATmakeAppl(sym__3, term_w_7, not_null(z_15), term_o_8);
                      t = leq_lt_0_0(t);
                      t = not_null(z_15);
                    }
                  }
              }
            }
          else
            {
              if(match_string(t, "hh"))
                {
                  t = not_null(o_15);
                  if(match_cons(t, sym_ComponentTime_3))
                    {
                      if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        p_15 = ATgetArgument(t, 0);
                      if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 1))))
                        _fail(ATgetArgument(t, 1));
                      else
                        t_15 = ATgetArgument(t, 1);
                      if(((u_15 != NULL) && (u_15 != ATgetArgument(t, 2))))
                        _fail(ATgetArgument(t, 2));
                      else
                        u_15 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = not_null(t_15);
                  if(match_cons(t, sym_DayTime_3))
                    {
                      if(((h_15 != NULL) && (h_15 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        h_15 = ATgetArgument(t, 0);
                      if(((i_15 != NULL) && (i_15 != ATgetArgument(t, 1))))
                        _fail(ATgetArgument(t, 1));
                      else
                        i_15 = ATgetArgument(t, 1);
                      if(((j_15 != NULL) && (j_15 != ATgetArgument(t, 2))))
                        _fail(ATgetArgument(t, 2));
                      else
                        j_15 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = not_null(h_15);
                  if(match_int(t, 0))
                    {
                      ATerm q_8 = t;
                      int r_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_16 = NULL,c_16 = NULL;
                          t = not_null(h_15);
                          if(((b_16 != NULL) && (b_16 != t)))
                            _fail(t);
                          else
                            b_16 = t;
                          t = not_null(m_15);
                          if(((c_16 != NULL) && (c_16 != t)))
                            _fail(t);
                          else
                            c_16 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(b_16), term_p_8);
                          t = leq_leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, not_null(b_16), term_o_8);
                          t = subt_0_0(t);
                          ;
                          LocalPopChoice(r_8);
                        }
                      else
                        {
                          t = q_8;
                          {
                            ATerm s_8 = t;
                            int t_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_16 = NULL,e_16 = NULL;
                                t = not_null(h_15);
                                if(((d_16 != NULL) && (d_16 != t)))
                                  _fail(t);
                                else
                                  d_16 = t;
                                t = not_null(m_15);
                                if(((e_16 != NULL) && (e_16 != t)))
                                  _fail(t);
                                else
                                  e_16 = t;
                                t = (ATerm) ATmakeAppl(sym__3, term_v_7, not_null(d_16), term_o_8);
                                t = leq_leq_0_0(t);
                                t = not_null(d_16);
                                ;
                                LocalPopChoice(t_8);
                              }
                            else
                              {
                                t = s_8;
                                t = term_o_8;
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm s_9 = t;
                      int k_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_16 = NULL,g_16 = NULL;
                          t = not_null(h_15);
                          if(((f_16 != NULL) && (f_16 != t)))
                            _fail(t);
                          else
                            f_16 = t;
                          t = not_null(m_15);
                          if(((g_16 != NULL) && (g_16 != t)))
                            _fail(t);
                          else
                            g_16 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(f_16), term_p_8);
                          t = leq_leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_16), term_o_8);
                          t = subt_0_0(t);
                          ;
                          LocalPopChoice(k_10);
                        }
                      else
                        {
                          t = s_9;
                          {
                            ATerm h_16 = NULL,i_16 = NULL;
                            t = not_null(h_15);
                            if(((h_16 != NULL) && (h_16 != t)))
                              _fail(t);
                            else
                              h_16 = t;
                            t = not_null(m_15);
                            if(((i_16 != NULL) && (i_16 != t)))
                              _fail(t);
                            else
                              i_16 = t;
                            t = (ATerm) ATmakeAppl(sym__3, term_v_7, not_null(h_16), term_o_8);
                            t = leq_leq_0_0(t);
                            t = not_null(h_16);
                          }
                        }
                    }
                }
              else
                {
                  if(match_string(t, "kk"))
                    {
                      ATerm j_16 = NULL;
                      t = not_null(o_15);
                      if(match_cons(t, sym_ComponentTime_3))
                        {
                          if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            p_15 = ATgetArgument(t, 0);
                          if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            t_15 = ATgetArgument(t, 1);
                          if(((u_15 != NULL) && (u_15 != ATgetArgument(t, 2))))
                            _fail(ATgetArgument(t, 2));
                          else
                            u_15 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = not_null(t_15);
                      if(match_cons(t, sym_DayTime_3))
                        {
                          if(((h_15 != NULL) && (h_15 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            h_15 = ATgetArgument(t, 0);
                          if(((i_15 != NULL) && (i_15 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            i_15 = ATgetArgument(t, 1);
                          if(((j_15 != NULL) && (j_15 != ATgetArgument(t, 2))))
                            _fail(ATgetArgument(t, 2));
                          else
                            j_15 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = not_null(h_15);
                      if(((j_16 != NULL) && (j_16 != t)))
                        _fail(t);
                      else
                        j_16 = t;
                      t = inc_0_0(t);
                    }
                  else
                    {
                      if(match_string(t, "HH"))
                        {
                          ATerm k_16 = NULL;
                          t = not_null(o_15);
                          if(match_cons(t, sym_ComponentTime_3))
                            {
                              if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                p_15 = ATgetArgument(t, 0);
                              if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                t_15 = ATgetArgument(t, 1);
                              if(((u_15 != NULL) && (u_15 != ATgetArgument(t, 2))))
                                _fail(ATgetArgument(t, 2));
                              else
                                u_15 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = not_null(t_15);
                          if(match_cons(t, sym_DayTime_3))
                            {
                              if(((h_15 != NULL) && (h_15 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                h_15 = ATgetArgument(t, 0);
                              if(((i_15 != NULL) && (i_15 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                i_15 = ATgetArgument(t, 1);
                              if(((j_15 != NULL) && (j_15 != ATgetArgument(t, 2))))
                                _fail(ATgetArgument(t, 2));
                              else
                                j_15 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = not_null(h_15);
                          if(((k_16 != NULL) && (k_16 != t)))
                            _fail(t);
                          else
                            k_16 = t;
                        }
                      else
                        {
                          if(match_string(t, "DD"))
                            {
                              ATerm l_16 = NULL;
                              t = not_null(o_15);
                              if(match_cons(t, sym_ComponentTime_3))
                                {
                                  if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 0))))
                                    _fail(ATgetArgument(t, 0));
                                  else
                                    p_15 = ATgetArgument(t, 0);
                                  if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 1))))
                                    _fail(ATgetArgument(t, 1));
                                  else
                                    t_15 = ATgetArgument(t, 1);
                                  if(((u_15 != NULL) && (u_15 != ATgetArgument(t, 2))))
                                    _fail(ATgetArgument(t, 2));
                                  else
                                    u_15 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = not_null(u_15);
                              if(match_cons(t, sym_Dupl_2))
                                {
                                  if(((k_15 != NULL) && (k_15 != ATgetArgument(t, 0))))
                                    _fail(ATgetArgument(t, 0));
                                  else
                                    k_15 = ATgetArgument(t, 0);
                                  if(((l_15 != NULL) && (l_15 != ATgetArgument(t, 1))))
                                    _fail(ATgetArgument(t, 1));
                                  else
                                    l_15 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = not_null(l_15);
                              if(((l_16 != NULL) && (l_16 != t)))
                                _fail(t);
                              else
                                l_16 = t;
                            }
                          else
                            {
                              if(match_string(t, "D"))
                                {
                                  ATerm m_16 = NULL;
                                  t = not_null(o_15);
                                  if(match_cons(t, sym_ComponentTime_3))
                                    {
                                      if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 0))))
                                        _fail(ATgetArgument(t, 0));
                                      else
                                        p_15 = ATgetArgument(t, 0);
                                      if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 1))))
                                        _fail(ATgetArgument(t, 1));
                                      else
                                        t_15 = ATgetArgument(t, 1);
                                      if(((u_15 != NULL) && (u_15 != ATgetArgument(t, 2))))
                                        _fail(ATgetArgument(t, 2));
                                      else
                                        u_15 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = not_null(u_15);
                                  if(match_cons(t, sym_Dupl_2))
                                    {
                                      if(((k_15 != NULL) && (k_15 != ATgetArgument(t, 0))))
                                        _fail(ATgetArgument(t, 0));
                                      else
                                        k_15 = ATgetArgument(t, 0);
                                      if(((l_15 != NULL) && (l_15 != ATgetArgument(t, 1))))
                                        _fail(ATgetArgument(t, 1));
                                      else
                                        l_15 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = not_null(l_15);
                                  if(((m_16 != NULL) && (m_16 != t)))
                                    _fail(t);
                                  else
                                    m_16 = t;
                                }
                              else
                                {
                                  if(match_string(t, "dd"))
                                    {
                                      ATerm n_16 = NULL;
                                      t = not_null(o_15);
                                      if(match_cons(t, sym_ComponentTime_3))
                                        {
                                          if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 0))))
                                            _fail(ATgetArgument(t, 0));
                                          else
                                            p_15 = ATgetArgument(t, 0);
                                          if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 1))))
                                            _fail(ATgetArgument(t, 1));
                                          else
                                            t_15 = ATgetArgument(t, 1);
                                          if(((u_15 != NULL) && (u_15 != ATgetArgument(t, 2))))
                                            _fail(ATgetArgument(t, 2));
                                          else
                                            u_15 = ATgetArgument(t, 2);
                                        }
                                      else
                                        _fail(t);
                                      t = not_null(p_15);
                                      if(match_cons(t, sym_Date_3))
                                        {
                                          if(((q_15 != NULL) && (q_15 != ATgetArgument(t, 0))))
                                            _fail(ATgetArgument(t, 0));
                                          else
                                            q_15 = ATgetArgument(t, 0);
                                          if(((r_15 != NULL) && (r_15 != ATgetArgument(t, 1))))
                                            _fail(ATgetArgument(t, 1));
                                          else
                                            r_15 = ATgetArgument(t, 1);
                                          if(((s_15 != NULL) && (s_15 != ATgetArgument(t, 2))))
                                            _fail(ATgetArgument(t, 2));
                                          else
                                            s_15 = ATgetArgument(t, 2);
                                        }
                                      else
                                        _fail(t);
                                      t = not_null(s_15);
                                      if(((n_16 != NULL) && (n_16 != t)))
                                        _fail(t);
                                      else
                                        n_16 = t;
                                    }
                                  else
                                    {
                                      if(match_string(t, "d"))
                                        {
                                          ATerm o_16 = NULL;
                                          t = not_null(o_15);
                                          if(match_cons(t, sym_ComponentTime_3))
                                            {
                                              if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 0))))
                                                _fail(ATgetArgument(t, 0));
                                              else
                                                p_15 = ATgetArgument(t, 0);
                                              if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 1))))
                                                _fail(ATgetArgument(t, 1));
                                              else
                                                t_15 = ATgetArgument(t, 1);
                                              if(((u_15 != NULL) && (u_15 != ATgetArgument(t, 2))))
                                                _fail(ATgetArgument(t, 2));
                                              else
                                                u_15 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          t = not_null(p_15);
                                          if(match_cons(t, sym_Date_3))
                                            {
                                              if(((q_15 != NULL) && (q_15 != ATgetArgument(t, 0))))
                                                _fail(ATgetArgument(t, 0));
                                              else
                                                q_15 = ATgetArgument(t, 0);
                                              if(((r_15 != NULL) && (r_15 != ATgetArgument(t, 1))))
                                                _fail(ATgetArgument(t, 1));
                                              else
                                                r_15 = ATgetArgument(t, 1);
                                              if(((s_15 != NULL) && (s_15 != ATgetArgument(t, 2))))
                                                _fail(ATgetArgument(t, 2));
                                              else
                                                s_15 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          t = not_null(s_15);
                                          if(((o_16 != NULL) && (o_16 != t)))
                                            _fail(t);
                                          else
                                            o_16 = t;
                                        }
                                      else
                                        {
                                          if(match_string(t, "MM"))
                                            {
                                              ATerm p_16 = NULL;
                                              t = not_null(o_15);
                                              if(match_cons(t, sym_ComponentTime_3))
                                                {
                                                  if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 0))))
                                                    _fail(ATgetArgument(t, 0));
                                                  else
                                                    p_15 = ATgetArgument(t, 0);
                                                  if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 1))))
                                                    _fail(ATgetArgument(t, 1));
                                                  else
                                                    t_15 = ATgetArgument(t, 1);
                                                  if(((u_15 != NULL) && (u_15 != ATgetArgument(t, 2))))
                                                    _fail(ATgetArgument(t, 2));
                                                  else
                                                    u_15 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = not_null(p_15);
                                              if(match_cons(t, sym_Date_3))
                                                {
                                                  if(((q_15 != NULL) && (q_15 != ATgetArgument(t, 0))))
                                                    _fail(ATgetArgument(t, 0));
                                                  else
                                                    q_15 = ATgetArgument(t, 0);
                                                  if(((r_15 != NULL) && (r_15 != ATgetArgument(t, 1))))
                                                    _fail(ATgetArgument(t, 1));
                                                  else
                                                    r_15 = ATgetArgument(t, 1);
                                                  if(((s_15 != NULL) && (s_15 != ATgetArgument(t, 2))))
                                                    _fail(ATgetArgument(t, 2));
                                                  else
                                                    s_15 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = not_null(r_15);
                                              if(((p_16 != NULL) && (p_16 != t)))
                                                _fail(t);
                                              else
                                                p_16 = t;
                                              t = month2index_0_0(t);
                                              t = inc_0_0(t);
                                            }
                                          else
                                            {
                                              if(match_string(t, "M"))
                                                {
                                                  ATerm q_16 = NULL;
                                                  t = not_null(o_15);
                                                  if(match_cons(t, sym_ComponentTime_3))
                                                    {
                                                      if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 0))))
                                                        _fail(ATgetArgument(t, 0));
                                                      else
                                                        p_15 = ATgetArgument(t, 0);
                                                      if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 1))))
                                                        _fail(ATgetArgument(t, 1));
                                                      else
                                                        t_15 = ATgetArgument(t, 1);
                                                      if(((u_15 != NULL) && (u_15 != ATgetArgument(t, 2))))
                                                        _fail(ATgetArgument(t, 2));
                                                      else
                                                        u_15 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = not_null(p_15);
                                                  if(match_cons(t, sym_Date_3))
                                                    {
                                                      if(((q_15 != NULL) && (q_15 != ATgetArgument(t, 0))))
                                                        _fail(ATgetArgument(t, 0));
                                                      else
                                                        q_15 = ATgetArgument(t, 0);
                                                      if(((r_15 != NULL) && (r_15 != ATgetArgument(t, 1))))
                                                        _fail(ATgetArgument(t, 1));
                                                      else
                                                        r_15 = ATgetArgument(t, 1);
                                                      if(((s_15 != NULL) && (s_15 != ATgetArgument(t, 2))))
                                                        _fail(ATgetArgument(t, 2));
                                                      else
                                                        s_15 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = not_null(r_15);
                                                  if(((q_16 != NULL) && (q_16 != t)))
                                                    _fail(t);
                                                  else
                                                    q_16 = t;
                                                  t = month2index_0_0(t);
                                                  t = inc_0_0(t);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "yy"))
                                                    {
                                                      ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
                                                      t = not_null(o_15);
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 0))))
                                                            _fail(ATgetArgument(t, 0));
                                                          else
                                                            p_15 = ATgetArgument(t, 0);
                                                          if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 1))))
                                                            _fail(ATgetArgument(t, 1));
                                                          else
                                                            t_15 = ATgetArgument(t, 1);
                                                          if(((u_15 != NULL) && (u_15 != ATgetArgument(t, 2))))
                                                            _fail(ATgetArgument(t, 2));
                                                          else
                                                            u_15 = ATgetArgument(t, 2);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = not_null(p_15);
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          if(((q_15 != NULL) && (q_15 != ATgetArgument(t, 0))))
                                                            _fail(ATgetArgument(t, 0));
                                                          else
                                                            q_15 = ATgetArgument(t, 0);
                                                          if(((r_15 != NULL) && (r_15 != ATgetArgument(t, 1))))
                                                            _fail(ATgetArgument(t, 1));
                                                          else
                                                            r_15 = ATgetArgument(t, 1);
                                                          if(((s_15 != NULL) && (s_15 != ATgetArgument(t, 2))))
                                                            _fail(ATgetArgument(t, 2));
                                                          else
                                                            s_15 = ATgetArgument(t, 2);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = not_null(q_15);
                                                      if(((r_16 != NULL) && (r_16 != t)))
                                                        _fail(t);
                                                      else
                                                        r_16 = t;
                                                      if(((s_16 != NULL) && (s_16 != t)))
                                                        _fail(t);
                                                      else
                                                        s_16 = t;
                                                      if(((t_16 != NULL) && (t_16 != t)))
                                                        _fail(t);
                                                      else
                                                        t_16 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_16), term_f_11);
                                                      t = mod_0_0(t);
                                                    }
                                                  else
                                                    {
                                                      ATerm u_16 = NULL;
                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("yyyy", 0, ATtrue)))
                                                        _fail(t);
                                                      t = not_null(o_15);
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 0))))
                                                            _fail(ATgetArgument(t, 0));
                                                          else
                                                            p_15 = ATgetArgument(t, 0);
                                                          if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 1))))
                                                            _fail(ATgetArgument(t, 1));
                                                          else
                                                            t_15 = ATgetArgument(t, 1);
                                                          if(((u_15 != NULL) && (u_15 != ATgetArgument(t, 2))))
                                                            _fail(ATgetArgument(t, 2));
                                                          else
                                                            u_15 = ATgetArgument(t, 2);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = not_null(p_15);
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          if(((q_15 != NULL) && (q_15 != ATgetArgument(t, 0))))
                                                            _fail(ATgetArgument(t, 0));
                                                          else
                                                            q_15 = ATgetArgument(t, 0);
                                                          if(((r_15 != NULL) && (r_15 != ATgetArgument(t, 1))))
                                                            _fail(ATgetArgument(t, 1));
                                                          else
                                                            r_15 = ATgetArgument(t, 1);
                                                          if(((s_15 != NULL) && (s_15 != ATgetArgument(t, 2))))
                                                            _fail(ATgetArgument(t, 2));
                                                          else
                                                            s_15 = ATgetArgument(t, 2);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = not_null(q_15);
                                                      if(((u_16 != NULL) && (u_16 != t)))
                                                        _fail(t);
                                                      else
                                                        u_16 = t;
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
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  if(((s_17 != NULL) && (s_17 != t)))
    _fail(t);
  else
    s_17 = t;
  if(match_cons(t, sym__2))
    {
      if(((t_17 != NULL) && (t_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_17 = ATgetArgument(t, 0);
      if(((u_17 != NULL) && (u_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(u_17);
  if(match_cons(t, sym_ComponentTime_3))
    {
      v_17 = ATgetArgument(t, 0);
      z_17 = ATgetArgument(t, 1);
      a_18 = ATgetArgument(t, 2);
      t = not_null(a_18);
      if(match_cons(t, sym_Dupl_2))
        {
          q_17 = ATgetArgument(t, 0);
          r_17 = ATgetArgument(t, 1);
          t = not_null(z_17);
          if(match_cons(t, sym_DayTime_3))
            {
              n_17 = ATgetArgument(t, 0);
              o_17 = ATgetArgument(t, 1);
              p_17 = ATgetArgument(t, 2);
              t = not_null(v_17);
              if(match_cons(t, sym_Date_3))
                {
                  w_17 = ATgetArgument(t, 0);
                  x_17 = ATgetArgument(t, 1);
                  y_17 = ATgetArgument(t, 2);
                  t = not_null(t_17);
                  if(match_string(t, "a"))
                    {
                      ATerm y_11 = t;
                      int a_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
                          t = not_null(t_17);
                          if(((b_18 != NULL) && (b_18 != t)))
                            _fail(t);
                          else
                            b_18 = t;
                          t = not_null(s_17);
                          t = date_pattern_to_int_0_0(t);
                          if(((c_18 != NULL) && (c_18 != t)))
                            _fail(t);
                          else
                            c_18 = t;
                          t = int_to_string_0_0(t);
                          if(((d_18 != NULL) && (d_18 != t)))
                            _fail(t);
                          else
                            d_18 = t;
                          t = not_null(c_18);
                          if(((e_18 != NULL) && (e_18 != t)))
                            _fail(t);
                          else
                            e_18 = t;
                          t = not_null(b_18);
                          t = string_length_0_0(t);
                          if(((f_18 != NULL) && (f_18 != t)))
                            _fail(t);
                          else
                            f_18 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(d_18), not_null(f_18));
                          t = align_right_0_0(t);
                          ;
                          LocalPopChoice(a_12);
                        }
                      else
                        {
                          t = y_11;
                          {
                            ATerm e_12 = t;
                            int m_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm g_18 = NULL,h_18 = NULL;
                                t = not_null(n_17);
                                if(((g_18 != NULL) && (g_18 != t)))
                                  _fail(t);
                                else
                                  g_18 = t;
                                t = not_null(s_17);
                                if(((h_18 != NULL) && (h_18 != t)))
                                  _fail(t);
                                else
                                  h_18 = t;
                                t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(g_18), term_p_8);
                                t = leq_leq_0_0(t);
                                t = term_a_14;
                                ;
                                LocalPopChoice(m_13);
                              }
                            else
                              {
                                t = e_12;
                                {
                                  ATerm i_18 = NULL,j_18 = NULL;
                                  t = not_null(n_17);
                                  if(((i_18 != NULL) && (i_18 != t)))
                                    _fail(t);
                                  else
                                    i_18 = t;
                                  t = not_null(s_17);
                                  if(((j_18 != NULL) && (j_18 != t)))
                                    _fail(t);
                                  else
                                    j_18 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_w_7, not_null(i_18), term_o_8);
                                  t = leq_lt_0_0(t);
                                  t = term_c_14;
                                }
                              }
                          }
                        }
                    }
                  else
                    {
                      if(match_string(t, "EEEE"))
                        {
                          ATerm d_14 = t;
                          int e_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
                              t = not_null(t_17);
                              if(((k_18 != NULL) && (k_18 != t)))
                                _fail(t);
                              else
                                k_18 = t;
                              t = not_null(s_17);
                              t = date_pattern_to_int_0_0(t);
                              if(((l_18 != NULL) && (l_18 != t)))
                                _fail(t);
                              else
                                l_18 = t;
                              t = int_to_string_0_0(t);
                              if(((m_18 != NULL) && (m_18 != t)))
                                _fail(t);
                              else
                                m_18 = t;
                              t = not_null(l_18);
                              if(((n_18 != NULL) && (n_18 != t)))
                                _fail(t);
                              else
                                n_18 = t;
                              t = not_null(k_18);
                              t = string_length_0_0(t);
                              if(((o_18 != NULL) && (o_18 != t)))
                                _fail(t);
                              else
                                o_18 = t;
                              t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(m_18), not_null(o_18));
                              t = align_right_0_0(t);
                              ;
                              LocalPopChoice(e_14);
                            }
                          else
                            {
                              t = d_14;
                              {
                                ATerm p_18 = NULL;
                                t = not_null(q_17);
                                if(((p_18 != NULL) && (p_18 != t)))
                                  _fail(t);
                                else
                                  p_18 = t;
                                t = day_of_week2text_0_0(t);
                              }
                            }
                        }
                      else
                        {
                          if(match_string(t, "EEE"))
                            {
                              ATerm f_14 = t;
                              int g_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
                                  t = not_null(t_17);
                                  if(((q_18 != NULL) && (q_18 != t)))
                                    _fail(t);
                                  else
                                    q_18 = t;
                                  t = not_null(s_17);
                                  t = date_pattern_to_int_0_0(t);
                                  if(((r_18 != NULL) && (r_18 != t)))
                                    _fail(t);
                                  else
                                    r_18 = t;
                                  t = int_to_string_0_0(t);
                                  if(((s_18 != NULL) && (s_18 != t)))
                                    _fail(t);
                                  else
                                    s_18 = t;
                                  t = not_null(r_18);
                                  if(((t_18 != NULL) && (t_18 != t)))
                                    _fail(t);
                                  else
                                    t_18 = t;
                                  t = not_null(q_18);
                                  t = string_length_0_0(t);
                                  if(((u_18 != NULL) && (u_18 != t)))
                                    _fail(t);
                                  else
                                    u_18 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(s_18), not_null(u_18));
                                  t = align_right_0_0(t);
                                  ;
                                  LocalPopChoice(g_14);
                                }
                              else
                                {
                                  t = f_14;
                                  {
                                    ATerm v_18 = NULL;
                                    t = not_null(q_17);
                                    if(((v_18 != NULL) && (v_18 != t)))
                                      _fail(t);
                                    else
                                      v_18 = t;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                                }
                            }
                          else
                            {
                              if(match_string(t, "MMMM"))
                                {
                                  ATerm h_14 = t;
                                  int i_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
                                      t = not_null(t_17);
                                      if(((w_18 != NULL) && (w_18 != t)))
                                        _fail(t);
                                      else
                                        w_18 = t;
                                      t = not_null(s_17);
                                      t = date_pattern_to_int_0_0(t);
                                      if(((x_18 != NULL) && (x_18 != t)))
                                        _fail(t);
                                      else
                                        x_18 = t;
                                      t = int_to_string_0_0(t);
                                      if(((y_18 != NULL) && (y_18 != t)))
                                        _fail(t);
                                      else
                                        y_18 = t;
                                      t = not_null(x_18);
                                      if(((z_18 != NULL) && (z_18 != t)))
                                        _fail(t);
                                      else
                                        z_18 = t;
                                      t = not_null(w_18);
                                      t = string_length_0_0(t);
                                      if(((a_19 != NULL) && (a_19 != t)))
                                        _fail(t);
                                      else
                                        a_19 = t;
                                      t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(y_18), not_null(a_19));
                                      t = align_right_0_0(t);
                                      ;
                                      LocalPopChoice(i_14);
                                    }
                                  else
                                    {
                                      t = h_14;
                                      {
                                        ATerm b_19 = NULL;
                                        t = not_null(x_17);
                                        if(((b_19 != NULL) && (b_19 != t)))
                                          _fail(t);
                                        else
                                          b_19 = t;
                                        t = month2text_0_0(t);
                                      }
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "MMM"))
                                    {
                                      ATerm j_14 = t;
                                      int k_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
                                          t = not_null(t_17);
                                          if(((c_19 != NULL) && (c_19 != t)))
                                            _fail(t);
                                          else
                                            c_19 = t;
                                          t = not_null(s_17);
                                          t = date_pattern_to_int_0_0(t);
                                          if(((d_19 != NULL) && (d_19 != t)))
                                            _fail(t);
                                          else
                                            d_19 = t;
                                          t = int_to_string_0_0(t);
                                          if(((e_19 != NULL) && (e_19 != t)))
                                            _fail(t);
                                          else
                                            e_19 = t;
                                          t = not_null(d_19);
                                          if(((f_19 != NULL) && (f_19 != t)))
                                            _fail(t);
                                          else
                                            f_19 = t;
                                          t = not_null(c_19);
                                          t = string_length_0_0(t);
                                          if(((g_19 != NULL) && (g_19 != t)))
                                            _fail(t);
                                          else
                                            g_19 = t;
                                          t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(e_19), not_null(g_19));
                                          t = align_right_0_0(t);
                                          ;
                                          LocalPopChoice(k_14);
                                        }
                                      else
                                        {
                                          t = j_14;
                                          {
                                            ATerm h_19 = NULL;
                                            t = not_null(x_17);
                                            if(((h_19 != NULL) && (h_19 != t)))
                                              _fail(t);
                                            else
                                              h_19 = t;
                                            t = month2abbr_0_0(t);
                                          }
                                        }
                                    }
                                  else
                                    {
                                      ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
                                      t = not_null(t_17);
                                      if(((i_19 != NULL) && (i_19 != t)))
                                        _fail(t);
                                      else
                                        i_19 = t;
                                      t = not_null(s_17);
                                      t = date_pattern_to_int_0_0(t);
                                      if(((j_19 != NULL) && (j_19 != t)))
                                        _fail(t);
                                      else
                                        j_19 = t;
                                      t = int_to_string_0_0(t);
                                      if(((k_19 != NULL) && (k_19 != t)))
                                        _fail(t);
                                      else
                                        k_19 = t;
                                      t = not_null(j_19);
                                      if(((l_19 != NULL) && (l_19 != t)))
                                        _fail(t);
                                      else
                                        l_19 = t;
                                      t = not_null(i_19);
                                      t = string_length_0_0(t);
                                      if(((m_19 != NULL) && (m_19 != t)))
                                        _fail(t);
                                      else
                                        m_19 = t;
                                      t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(k_19), not_null(m_19));
                                      t = align_right_0_0(t);
                                    }
                                }
                            }
                        }
                    }
                }
              else
                {
                  t = not_null(t_17);
                  if(match_string(t, "a"))
                    {
                      ATerm l_14 = t;
                      int m_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
                          t = not_null(t_17);
                          if(((n_19 != NULL) && (n_19 != t)))
                            _fail(t);
                          else
                            n_19 = t;
                          t = not_null(s_17);
                          t = date_pattern_to_int_0_0(t);
                          if(((o_19 != NULL) && (o_19 != t)))
                            _fail(t);
                          else
                            o_19 = t;
                          t = int_to_string_0_0(t);
                          if(((p_19 != NULL) && (p_19 != t)))
                            _fail(t);
                          else
                            p_19 = t;
                          t = not_null(o_19);
                          if(((q_19 != NULL) && (q_19 != t)))
                            _fail(t);
                          else
                            q_19 = t;
                          t = not_null(n_19);
                          t = string_length_0_0(t);
                          if(((r_19 != NULL) && (r_19 != t)))
                            _fail(t);
                          else
                            r_19 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(p_19), not_null(r_19));
                          t = align_right_0_0(t);
                          ;
                          LocalPopChoice(m_14);
                        }
                      else
                        {
                          t = l_14;
                          {
                            ATerm n_14 = t;
                            int o_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm s_19 = NULL,t_19 = NULL;
                                t = not_null(n_17);
                                if(((s_19 != NULL) && (s_19 != t)))
                                  _fail(t);
                                else
                                  s_19 = t;
                                t = not_null(s_17);
                                if(((t_19 != NULL) && (t_19 != t)))
                                  _fail(t);
                                else
                                  t_19 = t;
                                t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(s_19), term_p_8);
                                t = leq_leq_0_0(t);
                                t = term_a_14;
                                ;
                                LocalPopChoice(o_14);
                              }
                            else
                              {
                                t = n_14;
                                {
                                  ATerm u_19 = NULL,v_19 = NULL;
                                  t = not_null(n_17);
                                  if(((u_19 != NULL) && (u_19 != t)))
                                    _fail(t);
                                  else
                                    u_19 = t;
                                  t = not_null(s_17);
                                  if(((v_19 != NULL) && (v_19 != t)))
                                    _fail(t);
                                  else
                                    v_19 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_w_7, not_null(u_19), term_o_8);
                                  t = leq_lt_0_0(t);
                                  t = term_c_14;
                                }
                              }
                          }
                        }
                    }
                  else
                    {
                      if(match_string(t, "EEEE"))
                        {
                          ATerm p_14 = t;
                          int q_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
                              t = not_null(t_17);
                              if(((w_19 != NULL) && (w_19 != t)))
                                _fail(t);
                              else
                                w_19 = t;
                              t = not_null(s_17);
                              t = date_pattern_to_int_0_0(t);
                              if(((x_19 != NULL) && (x_19 != t)))
                                _fail(t);
                              else
                                x_19 = t;
                              t = int_to_string_0_0(t);
                              if(((y_19 != NULL) && (y_19 != t)))
                                _fail(t);
                              else
                                y_19 = t;
                              t = not_null(x_19);
                              if(((z_19 != NULL) && (z_19 != t)))
                                _fail(t);
                              else
                                z_19 = t;
                              t = not_null(w_19);
                              t = string_length_0_0(t);
                              if(((a_20 != NULL) && (a_20 != t)))
                                _fail(t);
                              else
                                a_20 = t;
                              t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(y_19), not_null(a_20));
                              t = align_right_0_0(t);
                              ;
                              LocalPopChoice(q_14);
                            }
                          else
                            {
                              t = p_14;
                              {
                                ATerm b_20 = NULL;
                                t = not_null(q_17);
                                if(((b_20 != NULL) && (b_20 != t)))
                                  _fail(t);
                                else
                                  b_20 = t;
                                t = day_of_week2text_0_0(t);
                              }
                            }
                        }
                      else
                        {
                          if(match_string(t, "EEE"))
                            {
                              ATerm r_14 = t;
                              int s_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
                                  t = not_null(t_17);
                                  if(((c_20 != NULL) && (c_20 != t)))
                                    _fail(t);
                                  else
                                    c_20 = t;
                                  t = not_null(s_17);
                                  t = date_pattern_to_int_0_0(t);
                                  if(((d_20 != NULL) && (d_20 != t)))
                                    _fail(t);
                                  else
                                    d_20 = t;
                                  t = int_to_string_0_0(t);
                                  if(((e_20 != NULL) && (e_20 != t)))
                                    _fail(t);
                                  else
                                    e_20 = t;
                                  t = not_null(d_20);
                                  if(((f_20 != NULL) && (f_20 != t)))
                                    _fail(t);
                                  else
                                    f_20 = t;
                                  t = not_null(c_20);
                                  t = string_length_0_0(t);
                                  if(((g_20 != NULL) && (g_20 != t)))
                                    _fail(t);
                                  else
                                    g_20 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(e_20), not_null(g_20));
                                  t = align_right_0_0(t);
                                  ;
                                  LocalPopChoice(s_14);
                                }
                              else
                                {
                                  t = r_14;
                                  {
                                    ATerm h_20 = NULL;
                                    t = not_null(q_17);
                                    if(((h_20 != NULL) && (h_20 != t)))
                                      _fail(t);
                                    else
                                      h_20 = t;
                                    t = day_of_week2abbr_0_0(t);
                                  }
                                }
                            }
                          else
                            {
                              ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
                              t = not_null(t_17);
                              if(((i_20 != NULL) && (i_20 != t)))
                                _fail(t);
                              else
                                i_20 = t;
                              t = not_null(s_17);
                              t = date_pattern_to_int_0_0(t);
                              if(((j_20 != NULL) && (j_20 != t)))
                                _fail(t);
                              else
                                j_20 = t;
                              t = int_to_string_0_0(t);
                              if(((k_20 != NULL) && (k_20 != t)))
                                _fail(t);
                              else
                                k_20 = t;
                              t = not_null(j_20);
                              if(((l_20 != NULL) && (l_20 != t)))
                                _fail(t);
                              else
                                l_20 = t;
                              t = not_null(i_20);
                              t = string_length_0_0(t);
                              if(((m_20 != NULL) && (m_20 != t)))
                                _fail(t);
                              else
                                m_20 = t;
                              t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(k_20), not_null(m_20));
                              t = align_right_0_0(t);
                            }
                        }
                    }
                }
            }
          else
            {
              t = not_null(v_17);
              if(match_cons(t, sym_Date_3))
                {
                  w_17 = ATgetArgument(t, 0);
                  x_17 = ATgetArgument(t, 1);
                  y_17 = ATgetArgument(t, 2);
                  t = not_null(t_17);
                  if(match_string(t, "EEEE"))
                    {
                      ATerm t_14 = t;
                      int u_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
                          t = not_null(t_17);
                          if(((n_20 != NULL) && (n_20 != t)))
                            _fail(t);
                          else
                            n_20 = t;
                          t = not_null(s_17);
                          t = date_pattern_to_int_0_0(t);
                          if(((o_20 != NULL) && (o_20 != t)))
                            _fail(t);
                          else
                            o_20 = t;
                          t = int_to_string_0_0(t);
                          if(((p_20 != NULL) && (p_20 != t)))
                            _fail(t);
                          else
                            p_20 = t;
                          t = not_null(o_20);
                          if(((q_20 != NULL) && (q_20 != t)))
                            _fail(t);
                          else
                            q_20 = t;
                          t = not_null(n_20);
                          t = string_length_0_0(t);
                          if(((r_20 != NULL) && (r_20 != t)))
                            _fail(t);
                          else
                            r_20 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(p_20), not_null(r_20));
                          t = align_right_0_0(t);
                          ;
                          LocalPopChoice(u_14);
                        }
                      else
                        {
                          t = t_14;
                          {
                            ATerm s_20 = NULL;
                            t = not_null(q_17);
                            if(((s_20 != NULL) && (s_20 != t)))
                              _fail(t);
                            else
                              s_20 = t;
                            t = day_of_week2text_0_0(t);
                          }
                        }
                    }
                  else
                    {
                      if(match_string(t, "EEE"))
                        {
                          ATerm v_14 = t;
                          int w_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
                              t = not_null(t_17);
                              if(((t_20 != NULL) && (t_20 != t)))
                                _fail(t);
                              else
                                t_20 = t;
                              t = not_null(s_17);
                              t = date_pattern_to_int_0_0(t);
                              if(((u_20 != NULL) && (u_20 != t)))
                                _fail(t);
                              else
                                u_20 = t;
                              t = int_to_string_0_0(t);
                              if(((v_20 != NULL) && (v_20 != t)))
                                _fail(t);
                              else
                                v_20 = t;
                              t = not_null(u_20);
                              if(((w_20 != NULL) && (w_20 != t)))
                                _fail(t);
                              else
                                w_20 = t;
                              t = not_null(t_20);
                              t = string_length_0_0(t);
                              if(((x_20 != NULL) && (x_20 != t)))
                                _fail(t);
                              else
                                x_20 = t;
                              t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(v_20), not_null(x_20));
                              t = align_right_0_0(t);
                              ;
                              LocalPopChoice(w_14);
                            }
                          else
                            {
                              t = v_14;
                              {
                                ATerm y_20 = NULL;
                                t = not_null(q_17);
                                if(((y_20 != NULL) && (y_20 != t)))
                                  _fail(t);
                                else
                                  y_20 = t;
                                t = day_of_week2abbr_0_0(t);
                              }
                            }
                        }
                      else
                        {
                          if(match_string(t, "MMMM"))
                            {
                              ATerm x_14 = t;
                              int y_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
                                  t = not_null(t_17);
                                  if(((z_20 != NULL) && (z_20 != t)))
                                    _fail(t);
                                  else
                                    z_20 = t;
                                  t = not_null(s_17);
                                  t = date_pattern_to_int_0_0(t);
                                  if(((a_21 != NULL) && (a_21 != t)))
                                    _fail(t);
                                  else
                                    a_21 = t;
                                  t = int_to_string_0_0(t);
                                  if(((b_21 != NULL) && (b_21 != t)))
                                    _fail(t);
                                  else
                                    b_21 = t;
                                  t = not_null(a_21);
                                  if(((c_21 != NULL) && (c_21 != t)))
                                    _fail(t);
                                  else
                                    c_21 = t;
                                  t = not_null(z_20);
                                  t = string_length_0_0(t);
                                  if(((d_21 != NULL) && (d_21 != t)))
                                    _fail(t);
                                  else
                                    d_21 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(b_21), not_null(d_21));
                                  t = align_right_0_0(t);
                                  ;
                                  LocalPopChoice(y_14);
                                }
                              else
                                {
                                  t = x_14;
                                  {
                                    ATerm e_21 = NULL;
                                    t = not_null(x_17);
                                    if(((e_21 != NULL) && (e_21 != t)))
                                      _fail(t);
                                    else
                                      e_21 = t;
                                    t = month2text_0_0(t);
                                  }
                                }
                            }
                          else
                            {
                              if(match_string(t, "MMM"))
                                {
                                  ATerm z_14 = t;
                                  int a_15 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
                                      t = not_null(t_17);
                                      if(((f_21 != NULL) && (f_21 != t)))
                                        _fail(t);
                                      else
                                        f_21 = t;
                                      t = not_null(s_17);
                                      t = date_pattern_to_int_0_0(t);
                                      if(((g_21 != NULL) && (g_21 != t)))
                                        _fail(t);
                                      else
                                        g_21 = t;
                                      t = int_to_string_0_0(t);
                                      if(((h_21 != NULL) && (h_21 != t)))
                                        _fail(t);
                                      else
                                        h_21 = t;
                                      t = not_null(g_21);
                                      if(((i_21 != NULL) && (i_21 != t)))
                                        _fail(t);
                                      else
                                        i_21 = t;
                                      t = not_null(f_21);
                                      t = string_length_0_0(t);
                                      if(((j_21 != NULL) && (j_21 != t)))
                                        _fail(t);
                                      else
                                        j_21 = t;
                                      t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(h_21), not_null(j_21));
                                      t = align_right_0_0(t);
                                      ;
                                      LocalPopChoice(a_15);
                                    }
                                  else
                                    {
                                      t = z_14;
                                      {
                                        ATerm k_21 = NULL;
                                        t = not_null(x_17);
                                        if(((k_21 != NULL) && (k_21 != t)))
                                          _fail(t);
                                        else
                                          k_21 = t;
                                        t = month2abbr_0_0(t);
                                      }
                                    }
                                }
                              else
                                {
                                  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL;
                                  t = not_null(t_17);
                                  if(((l_21 != NULL) && (l_21 != t)))
                                    _fail(t);
                                  else
                                    l_21 = t;
                                  t = not_null(s_17);
                                  t = date_pattern_to_int_0_0(t);
                                  if(((m_21 != NULL) && (m_21 != t)))
                                    _fail(t);
                                  else
                                    m_21 = t;
                                  t = int_to_string_0_0(t);
                                  if(((n_21 != NULL) && (n_21 != t)))
                                    _fail(t);
                                  else
                                    n_21 = t;
                                  t = not_null(m_21);
                                  if(((o_21 != NULL) && (o_21 != t)))
                                    _fail(t);
                                  else
                                    o_21 = t;
                                  t = not_null(l_21);
                                  t = string_length_0_0(t);
                                  if(((p_21 != NULL) && (p_21 != t)))
                                    _fail(t);
                                  else
                                    p_21 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(n_21), not_null(p_21));
                                  t = align_right_0_0(t);
                                }
                            }
                        }
                    }
                }
              else
                {
                  t = not_null(t_17);
                  if(match_string(t, "EEEE"))
                    {
                      ATerm b_15 = t;
                      int c_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL;
                          t = not_null(t_17);
                          if(((q_21 != NULL) && (q_21 != t)))
                            _fail(t);
                          else
                            q_21 = t;
                          t = not_null(s_17);
                          t = date_pattern_to_int_0_0(t);
                          if(((r_21 != NULL) && (r_21 != t)))
                            _fail(t);
                          else
                            r_21 = t;
                          t = int_to_string_0_0(t);
                          if(((s_21 != NULL) && (s_21 != t)))
                            _fail(t);
                          else
                            s_21 = t;
                          t = not_null(r_21);
                          if(((t_21 != NULL) && (t_21 != t)))
                            _fail(t);
                          else
                            t_21 = t;
                          t = not_null(q_21);
                          t = string_length_0_0(t);
                          if(((u_21 != NULL) && (u_21 != t)))
                            _fail(t);
                          else
                            u_21 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(s_21), not_null(u_21));
                          t = align_right_0_0(t);
                          ;
                          LocalPopChoice(c_15);
                        }
                      else
                        {
                          t = b_15;
                          {
                            ATerm v_21 = NULL;
                            t = not_null(q_17);
                            if(((v_21 != NULL) && (v_21 != t)))
                              _fail(t);
                            else
                              v_21 = t;
                            t = day_of_week2text_0_0(t);
                          }
                        }
                    }
                  else
                    {
                      if(match_string(t, "EEE"))
                        {
                          ATerm d_15 = t;
                          int e_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
                              t = not_null(t_17);
                              if(((w_21 != NULL) && (w_21 != t)))
                                _fail(t);
                              else
                                w_21 = t;
                              t = not_null(s_17);
                              t = date_pattern_to_int_0_0(t);
                              if(((x_21 != NULL) && (x_21 != t)))
                                _fail(t);
                              else
                                x_21 = t;
                              t = int_to_string_0_0(t);
                              if(((y_21 != NULL) && (y_21 != t)))
                                _fail(t);
                              else
                                y_21 = t;
                              t = not_null(x_21);
                              if(((z_21 != NULL) && (z_21 != t)))
                                _fail(t);
                              else
                                z_21 = t;
                              t = not_null(w_21);
                              t = string_length_0_0(t);
                              if(((a_22 != NULL) && (a_22 != t)))
                                _fail(t);
                              else
                                a_22 = t;
                              t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(y_21), not_null(a_22));
                              t = align_right_0_0(t);
                              ;
                              LocalPopChoice(e_15);
                            }
                          else
                            {
                              t = d_15;
                              {
                                ATerm b_22 = NULL;
                                t = not_null(q_17);
                                if(((b_22 != NULL) && (b_22 != t)))
                                  _fail(t);
                                else
                                  b_22 = t;
                                t = day_of_week2abbr_0_0(t);
                              }
                            }
                        }
                      else
                        {
                          ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL;
                          t = not_null(t_17);
                          if(((c_22 != NULL) && (c_22 != t)))
                            _fail(t);
                          else
                            c_22 = t;
                          t = not_null(s_17);
                          t = date_pattern_to_int_0_0(t);
                          if(((d_22 != NULL) && (d_22 != t)))
                            _fail(t);
                          else
                            d_22 = t;
                          t = int_to_string_0_0(t);
                          if(((e_22 != NULL) && (e_22 != t)))
                            _fail(t);
                          else
                            e_22 = t;
                          t = not_null(d_22);
                          if(((f_22 != NULL) && (f_22 != t)))
                            _fail(t);
                          else
                            f_22 = t;
                          t = not_null(c_22);
                          t = string_length_0_0(t);
                          if(((g_22 != NULL) && (g_22 != t)))
                            _fail(t);
                          else
                            g_22 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(e_22), not_null(g_22));
                          t = align_right_0_0(t);
                        }
                    }
                }
            }
        }
      else
        {
          t = not_null(z_17);
          if(match_cons(t, sym_DayTime_3))
            {
              n_17 = ATgetArgument(t, 0);
              o_17 = ATgetArgument(t, 1);
              p_17 = ATgetArgument(t, 2);
              t = not_null(v_17);
              if(match_cons(t, sym_Date_3))
                {
                  w_17 = ATgetArgument(t, 0);
                  x_17 = ATgetArgument(t, 1);
                  y_17 = ATgetArgument(t, 2);
                  t = not_null(t_17);
                  if(match_string(t, "a"))
                    {
                      ATerm f_15 = t;
                      int g_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,m_22 = NULL;
                          t = not_null(t_17);
                          if(((h_22 != NULL) && (h_22 != t)))
                            _fail(t);
                          else
                            h_22 = t;
                          t = not_null(s_17);
                          t = date_pattern_to_int_0_0(t);
                          if(((i_22 != NULL) && (i_22 != t)))
                            _fail(t);
                          else
                            i_22 = t;
                          t = int_to_string_0_0(t);
                          if(((j_22 != NULL) && (j_22 != t)))
                            _fail(t);
                          else
                            j_22 = t;
                          t = not_null(i_22);
                          if(((k_22 != NULL) && (k_22 != t)))
                            _fail(t);
                          else
                            k_22 = t;
                          t = not_null(h_22);
                          t = string_length_0_0(t);
                          if(((m_22 != NULL) && (m_22 != t)))
                            _fail(t);
                          else
                            m_22 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(j_22), not_null(m_22));
                          t = align_right_0_0(t);
                          ;
                          LocalPopChoice(g_15);
                        }
                      else
                        {
                          t = f_15;
                          {
                            ATerm v_16 = t;
                            int w_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm n_22 = NULL,o_22 = NULL;
                                t = not_null(n_17);
                                if(((n_22 != NULL) && (n_22 != t)))
                                  _fail(t);
                                else
                                  n_22 = t;
                                t = not_null(s_17);
                                if(((o_22 != NULL) && (o_22 != t)))
                                  _fail(t);
                                else
                                  o_22 = t;
                                t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(n_22), term_p_8);
                                t = leq_leq_0_0(t);
                                t = term_a_14;
                                ;
                                LocalPopChoice(w_16);
                              }
                            else
                              {
                                t = v_16;
                                {
                                  ATerm p_22 = NULL,u_22 = NULL;
                                  t = not_null(n_17);
                                  if(((p_22 != NULL) && (p_22 != t)))
                                    _fail(t);
                                  else
                                    p_22 = t;
                                  t = not_null(s_17);
                                  if(((u_22 != NULL) && (u_22 != t)))
                                    _fail(t);
                                  else
                                    u_22 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_w_7, not_null(p_22), term_o_8);
                                  t = leq_lt_0_0(t);
                                  t = term_c_14;
                                }
                              }
                          }
                        }
                    }
                  else
                    {
                      if(match_string(t, "MMMM"))
                        {
                          ATerm x_16 = t;
                          int y_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
                              t = not_null(t_17);
                              if(((v_22 != NULL) && (v_22 != t)))
                                _fail(t);
                              else
                                v_22 = t;
                              t = not_null(s_17);
                              t = date_pattern_to_int_0_0(t);
                              if(((w_22 != NULL) && (w_22 != t)))
                                _fail(t);
                              else
                                w_22 = t;
                              t = int_to_string_0_0(t);
                              if(((x_22 != NULL) && (x_22 != t)))
                                _fail(t);
                              else
                                x_22 = t;
                              t = not_null(w_22);
                              if(((y_22 != NULL) && (y_22 != t)))
                                _fail(t);
                              else
                                y_22 = t;
                              t = not_null(v_22);
                              t = string_length_0_0(t);
                              if(((z_22 != NULL) && (z_22 != t)))
                                _fail(t);
                              else
                                z_22 = t;
                              t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(x_22), not_null(z_22));
                              t = align_right_0_0(t);
                              ;
                              LocalPopChoice(y_16);
                            }
                          else
                            {
                              t = x_16;
                              {
                                ATerm a_23 = NULL;
                                t = not_null(x_17);
                                if(((a_23 != NULL) && (a_23 != t)))
                                  _fail(t);
                                else
                                  a_23 = t;
                                t = month2text_0_0(t);
                              }
                            }
                        }
                      else
                        {
                          if(match_string(t, "MMM"))
                            {
                              ATerm z_16 = t;
                              int a_17 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm b_23 = NULL,d_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
                                  t = not_null(t_17);
                                  if(((b_23 != NULL) && (b_23 != t)))
                                    _fail(t);
                                  else
                                    b_23 = t;
                                  t = not_null(s_17);
                                  t = date_pattern_to_int_0_0(t);
                                  if(((d_23 != NULL) && (d_23 != t)))
                                    _fail(t);
                                  else
                                    d_23 = t;
                                  t = int_to_string_0_0(t);
                                  if(((f_23 != NULL) && (f_23 != t)))
                                    _fail(t);
                                  else
                                    f_23 = t;
                                  t = not_null(d_23);
                                  if(((g_23 != NULL) && (g_23 != t)))
                                    _fail(t);
                                  else
                                    g_23 = t;
                                  t = not_null(b_23);
                                  t = string_length_0_0(t);
                                  if(((h_23 != NULL) && (h_23 != t)))
                                    _fail(t);
                                  else
                                    h_23 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(f_23), not_null(h_23));
                                  t = align_right_0_0(t);
                                  ;
                                  LocalPopChoice(a_17);
                                }
                              else
                                {
                                  t = z_16;
                                  {
                                    ATerm k_23 = NULL;
                                    t = not_null(x_17);
                                    if(((k_23 != NULL) && (k_23 != t)))
                                      _fail(t);
                                    else
                                      k_23 = t;
                                    t = month2abbr_0_0(t);
                                  }
                                }
                            }
                          else
                            {
                              ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
                              t = not_null(t_17);
                              if(((l_23 != NULL) && (l_23 != t)))
                                _fail(t);
                              else
                                l_23 = t;
                              t = not_null(s_17);
                              t = date_pattern_to_int_0_0(t);
                              if(((m_23 != NULL) && (m_23 != t)))
                                _fail(t);
                              else
                                m_23 = t;
                              t = int_to_string_0_0(t);
                              if(((n_23 != NULL) && (n_23 != t)))
                                _fail(t);
                              else
                                n_23 = t;
                              t = not_null(m_23);
                              if(((o_23 != NULL) && (o_23 != t)))
                                _fail(t);
                              else
                                o_23 = t;
                              t = not_null(l_23);
                              t = string_length_0_0(t);
                              if(((p_23 != NULL) && (p_23 != t)))
                                _fail(t);
                              else
                                p_23 = t;
                              t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(n_23), not_null(p_23));
                              t = align_right_0_0(t);
                            }
                        }
                    }
                }
              else
                {
                  t = not_null(t_17);
                  if(match_string(t, "a"))
                    {
                      ATerm b_17 = t;
                      int c_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,y_23 = NULL,z_23 = NULL;
                          t = not_null(t_17);
                          if(((u_23 != NULL) && (u_23 != t)))
                            _fail(t);
                          else
                            u_23 = t;
                          t = not_null(s_17);
                          t = date_pattern_to_int_0_0(t);
                          if(((v_23 != NULL) && (v_23 != t)))
                            _fail(t);
                          else
                            v_23 = t;
                          t = int_to_string_0_0(t);
                          if(((w_23 != NULL) && (w_23 != t)))
                            _fail(t);
                          else
                            w_23 = t;
                          t = not_null(v_23);
                          if(((y_23 != NULL) && (y_23 != t)))
                            _fail(t);
                          else
                            y_23 = t;
                          t = not_null(u_23);
                          t = string_length_0_0(t);
                          if(((z_23 != NULL) && (z_23 != t)))
                            _fail(t);
                          else
                            z_23 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(w_23), not_null(z_23));
                          t = align_right_0_0(t);
                          ;
                          LocalPopChoice(c_17);
                        }
                      else
                        {
                          t = b_17;
                          {
                            ATerm d_17 = t;
                            int e_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm a_24 = NULL,b_24 = NULL;
                                t = not_null(n_17);
                                if(((a_24 != NULL) && (a_24 != t)))
                                  _fail(t);
                                else
                                  a_24 = t;
                                t = not_null(s_17);
                                if(((b_24 != NULL) && (b_24 != t)))
                                  _fail(t);
                                else
                                  b_24 = t;
                                t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(a_24), term_p_8);
                                t = leq_leq_0_0(t);
                                t = term_a_14;
                                ;
                                LocalPopChoice(e_17);
                              }
                            else
                              {
                                t = d_17;
                                {
                                  ATerm c_24 = NULL,d_24 = NULL;
                                  t = not_null(n_17);
                                  if(((c_24 != NULL) && (c_24 != t)))
                                    _fail(t);
                                  else
                                    c_24 = t;
                                  t = not_null(s_17);
                                  if(((d_24 != NULL) && (d_24 != t)))
                                    _fail(t);
                                  else
                                    d_24 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_w_7, not_null(c_24), term_o_8);
                                  t = leq_lt_0_0(t);
                                  t = term_c_14;
                                }
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL;
                      t = not_null(t_17);
                      if(((e_24 != NULL) && (e_24 != t)))
                        _fail(t);
                      else
                        e_24 = t;
                      t = not_null(s_17);
                      t = date_pattern_to_int_0_0(t);
                      if(((f_24 != NULL) && (f_24 != t)))
                        _fail(t);
                      else
                        f_24 = t;
                      t = int_to_string_0_0(t);
                      if(((g_24 != NULL) && (g_24 != t)))
                        _fail(t);
                      else
                        g_24 = t;
                      t = not_null(f_24);
                      if(((h_24 != NULL) && (h_24 != t)))
                        _fail(t);
                      else
                        h_24 = t;
                      t = not_null(e_24);
                      t = string_length_0_0(t);
                      if(((i_24 != NULL) && (i_24 != t)))
                        _fail(t);
                      else
                        i_24 = t;
                      t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(g_24), not_null(i_24));
                      t = align_right_0_0(t);
                    }
                }
            }
          else
            {
              t = not_null(v_17);
              if(match_cons(t, sym_Date_3))
                {
                  w_17 = ATgetArgument(t, 0);
                  x_17 = ATgetArgument(t, 1);
                  y_17 = ATgetArgument(t, 2);
                  t = not_null(t_17);
                  if(match_string(t, "MMMM"))
                    {
                      ATerm f_17 = t;
                      int g_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,o_24 = NULL,p_24 = NULL;
                          t = not_null(t_17);
                          if(((j_24 != NULL) && (j_24 != t)))
                            _fail(t);
                          else
                            j_24 = t;
                          t = not_null(s_17);
                          t = date_pattern_to_int_0_0(t);
                          if(((k_24 != NULL) && (k_24 != t)))
                            _fail(t);
                          else
                            k_24 = t;
                          t = int_to_string_0_0(t);
                          if(((l_24 != NULL) && (l_24 != t)))
                            _fail(t);
                          else
                            l_24 = t;
                          t = not_null(k_24);
                          if(((o_24 != NULL) && (o_24 != t)))
                            _fail(t);
                          else
                            o_24 = t;
                          t = not_null(j_24);
                          t = string_length_0_0(t);
                          if(((p_24 != NULL) && (p_24 != t)))
                            _fail(t);
                          else
                            p_24 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(l_24), not_null(p_24));
                          t = align_right_0_0(t);
                          ;
                          LocalPopChoice(g_17);
                        }
                      else
                        {
                          t = f_17;
                          {
                            ATerm q_24 = NULL;
                            t = not_null(x_17);
                            if(((q_24 != NULL) && (q_24 != t)))
                              _fail(t);
                            else
                              q_24 = t;
                            t = month2text_0_0(t);
                          }
                        }
                    }
                  else
                    {
                      if(match_string(t, "MMM"))
                        {
                          ATerm h_17 = t;
                          int i_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
                              t = not_null(t_17);
                              if(((r_24 != NULL) && (r_24 != t)))
                                _fail(t);
                              else
                                r_24 = t;
                              t = not_null(s_17);
                              t = date_pattern_to_int_0_0(t);
                              if(((s_24 != NULL) && (s_24 != t)))
                                _fail(t);
                              else
                                s_24 = t;
                              t = int_to_string_0_0(t);
                              if(((t_24 != NULL) && (t_24 != t)))
                                _fail(t);
                              else
                                t_24 = t;
                              t = not_null(s_24);
                              if(((u_24 != NULL) && (u_24 != t)))
                                _fail(t);
                              else
                                u_24 = t;
                              t = not_null(r_24);
                              t = string_length_0_0(t);
                              if(((v_24 != NULL) && (v_24 != t)))
                                _fail(t);
                              else
                                v_24 = t;
                              t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(t_24), not_null(v_24));
                              t = align_right_0_0(t);
                              ;
                              LocalPopChoice(i_17);
                            }
                          else
                            {
                              t = h_17;
                              {
                                ATerm w_24 = NULL;
                                t = not_null(x_17);
                                if(((w_24 != NULL) && (w_24 != t)))
                                  _fail(t);
                                else
                                  w_24 = t;
                                t = month2abbr_0_0(t);
                              }
                            }
                        }
                      else
                        {
                          ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
                          t = not_null(t_17);
                          if(((x_24 != NULL) && (x_24 != t)))
                            _fail(t);
                          else
                            x_24 = t;
                          t = not_null(s_17);
                          t = date_pattern_to_int_0_0(t);
                          if(((y_24 != NULL) && (y_24 != t)))
                            _fail(t);
                          else
                            y_24 = t;
                          t = int_to_string_0_0(t);
                          if(((z_24 != NULL) && (z_24 != t)))
                            _fail(t);
                          else
                            z_24 = t;
                          t = not_null(y_24);
                          if(((a_25 != NULL) && (a_25 != t)))
                            _fail(t);
                          else
                            a_25 = t;
                          t = not_null(x_24);
                          t = string_length_0_0(t);
                          if(((b_25 != NULL) && (b_25 != t)))
                            _fail(t);
                          else
                            b_25 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(z_24), not_null(b_25));
                          t = align_right_0_0(t);
                        }
                    }
                }
              else
                {
                  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
                  t = not_null(t_17);
                  if(((c_25 != NULL) && (c_25 != t)))
                    _fail(t);
                  else
                    c_25 = t;
                  t = not_null(s_17);
                  t = date_pattern_to_int_0_0(t);
                  if(((d_25 != NULL) && (d_25 != t)))
                    _fail(t);
                  else
                    d_25 = t;
                  t = int_to_string_0_0(t);
                  if(((e_25 != NULL) && (e_25 != t)))
                    _fail(t);
                  else
                    e_25 = t;
                  t = not_null(d_25);
                  if(((f_25 != NULL) && (f_25 != t)))
                    _fail(t);
                  else
                    f_25 = t;
                  t = not_null(c_25);
                  t = string_length_0_0(t);
                  if(((g_25 != NULL) && (g_25 != t)))
                    _fail(t);
                  else
                    g_25 = t;
                  t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(e_25), not_null(g_25));
                  t = align_right_0_0(t);
                }
            }
        }
    }
  else
    {
      ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
      t = not_null(t_17);
      if(((m_25 != NULL) && (m_25 != t)))
        _fail(t);
      else
        m_25 = t;
      t = not_null(s_17);
      t = date_pattern_to_int_0_0(t);
      if(((n_25 != NULL) && (n_25 != t)))
        _fail(t);
      else
        n_25 = t;
      t = int_to_string_0_0(t);
      if(((o_25 != NULL) && (o_25 != t)))
        _fail(t);
      else
        o_25 = t;
      t = not_null(n_25);
      if(((p_25 != NULL) && (p_25 != t)))
        _fail(t);
      else
        p_25 = t;
      t = not_null(m_25);
      t = string_length_0_0(t);
      if(((q_25 != NULL) && (q_25 != t)))
        _fail(t);
      else
        q_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_12, not_null(o_25), not_null(q_25));
      t = align_right_0_0(t);
    }
  return(t);
}
ATerm date_format_0_0 (ATerm t)
{
  ATerm r_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((t_25 != NULL) && (t_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_25 = ATgetArgument(t, 0);
      if(((r_25 != NULL) && (r_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(t_25);
  {
    ATerm x_0 (ATerm t)
    {
      ATerm u_25 = NULL,v_25 = NULL;
      if(((u_25 != NULL) && (u_25 != t)))
        _fail(t);
      else
        u_25 = t;
      if(((v_25 != NULL) && (v_25 != t)))
        _fail(t);
      else
        v_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_25), not_null(r_25));
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = date_pattern_to_string_0_0(t);
            ;
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            t = Fst_0_0(t);
          }
      }
      return(t);
    }
    t = map_1_0(x_0, t);
    t = concat_strings_0_0(t);
  }
  return(t);
}
ATerm index2day_of_week_0_0 (ATerm t)
{
  ATerm x_25 = NULL;
  if(((x_25 != NULL) && (x_25 != t)))
    _fail(t);
  else
    x_25 = t;
  if(match_int(t, 6))
    {
      t = term_l_17;
    }
  else
    {
      if(match_int(t, 5))
        {
          t = term_m_17;
        }
      else
        {
          if(match_int(t, 4))
            {
              t = term_l_22;
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
                          t = term_t_22;
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
  ATerm z_25 = NULL;
  if(((z_25 != NULL) && (z_25 != t)))
    _fail(t);
  else
    z_25 = t;
  if(match_int(t, 11))
    {
      t = term_c_23;
    }
  else
    {
      if(match_int(t, 10))
        {
          t = term_e_23;
        }
      else
        {
          if(match_int(t, 9))
            {
              t = term_i_23;
            }
          else
            {
              if(match_int(t, 8))
                {
                  t = term_j_23;
                }
              else
                {
                  if(match_int(t, 7))
                    {
                      t = term_q_23;
                    }
                  else
                    {
                      if(match_int(t, 6))
                        {
                          t = term_r_23;
                        }
                      else
                        {
                          if(match_int(t, 5))
                            {
                              t = term_s_23;
                            }
                          else
                            {
                              if(match_int(t, 4))
                                {
                                  t = term_t_23;
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
                                          t = term_m_24;
                                        }
                                      else
                                        {
                                          if(match_int(t, 1))
                                            {
                                              t = term_n_24;
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                                                _fail(t);
                                              t = term_h_25;
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
  ATerm d_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
  if(match_cons(t, sym__8))
    {
      if(((d_26 != NULL) && (d_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_26 = ATgetArgument(t, 0);
      if(((f_26 != NULL) && (f_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_26 = ATgetArgument(t, 1);
      if(((g_26 != NULL) && (g_26 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        g_26 = ATgetArgument(t, 2);
      if(((h_26 != NULL) && (h_26 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        h_26 = ATgetArgument(t, 3);
      if(((i_26 != NULL) && (i_26 != ATgetArgument(t, 4))))
        _fail(ATgetArgument(t, 4));
      else
        i_26 = ATgetArgument(t, 4);
      if(((j_26 != NULL) && (j_26 != ATgetArgument(t, 5))))
        _fail(ATgetArgument(t, 5));
      else
        j_26 = ATgetArgument(t, 5);
      if(((k_26 != NULL) && (k_26 != ATgetArgument(t, 6))))
        _fail(ATgetArgument(t, 6));
      else
        k_26 = ATgetArgument(t, 6);
      if(((l_26 != NULL) && (l_26 != ATgetArgument(t, 7))))
        _fail(ATgetArgument(t, 7));
      else
        l_26 = ATgetArgument(t, 7);
    }
  else
    _fail(t);
  if(((m_26 != NULL) && (m_26 != t)))
    _fail(t);
  else
    m_26 = t;
  t = not_null(i_26);
  t = index2month_0_0(t);
  if(((n_26 != NULL) && (n_26 != t)))
    _fail(t);
  else
    n_26 = t;
  t = not_null(m_26);
  if(((o_26 != NULL) && (o_26 != t)))
    _fail(t);
  else
    o_26 = t;
  t = not_null(k_26);
  t = index2day_of_week_0_0(t);
  if(((p_26 != NULL) && (p_26 != t)))
    _fail(t);
  else
    p_26 = t;
  t = (ATerm) ATmakeAppl(sym_ComponentTime_3, (ATerm)ATmakeAppl(sym_Date_3, not_null(j_26), not_null(n_26), not_null(h_26)), (ATerm)ATmakeAppl(sym_DayTime_3, not_null(g_26), not_null(f_26), not_null(d_26)), (ATerm) ATmakeAppl(sym_Dupl_2, not_null(p_26), not_null(l_26)));
  return(t);
}
ATerm epoch2local_time_0_0 (ATerm t)
{
  ATerm q_26 = NULL;
  if(match_cons(t, sym_EpochTime_1))
    {
      if(((q_26 != NULL) && (q_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_epoch2localtime(not_null(q_26));
  t = prim_tuple_to_ComponentTime_0_0(t);
  return(t);
}
ATerm now_epoch_time_0_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  t = SSL_now_epoch_time();
  if(((r_26 != NULL) && (r_26 != t)))
    _fail(t);
  else
    r_26 = t;
  if(((s_26 != NULL) && (s_26 != t)))
    _fail(t);
  else
    s_26 = t;
  t = (ATerm) ATmakeAppl(sym_EpochTime_1, not_null(s_26));
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
  ATerm t_26 = NULL,u_26 = NULL;
  if(((t_26 != NULL) && (t_26 != t)))
    _fail(t);
  else
    t_26 = t;
  t = term_o_5;
  t = now_local_time_0_0(t);
  if(((u_26 != NULL) && (u_26 != t)))
    _fail(t);
  else
    u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_26), term_y_25), term_a_26), term_y_25), term_w_25), term_j_25), term_s_25), term_j_25), term_l_25), term_j_25), term_k_25), term_j_25), term_i_25), not_null(u_26));
  t = date_format_0_0(t);
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm v_26 = NULL;
  if(((v_26 != NULL) && (v_26 != t)))
    _fail(t);
  else
    v_26 = t;
  t = error_0_0(t);
  t = term_v_7;
  t = exit_0_0(t);
  t = not_null(v_26);
  return(t);
}
ATerm get_title_0_0 (ATerm t)
{
  ATerm c_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = c_26;
      t = (ATerm) ATinsert(ATempty, term_n_28);
      t = fatal_error_0_0(t);
    }
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL;
  t = get_title_0_0(t);
  if(((w_26 != NULL) && (w_26 != t)))
    _fail(t);
  else
    w_26 = t;
  if(((x_26 != NULL) && (x_26 != t)))
    _fail(t);
  else
    x_26 = t;
  t = not_null(w_26);
  if(((y_26 != NULL) && (y_26 != t)))
    _fail(t);
  else
    y_26 = t;
  t = term_o_5;
  t = create_time_0_0(t);
  if(((z_26 != NULL) && (z_26 != t)))
    _fail(t);
  else
    z_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_31), term_n_31), term_l_31), term_h_31), not_null(x_26)), term_g_31), term_f_31), term_v_30), term_t_30), term_s_30), term_r_30), term_o_30), not_null(z_26)), term_n_30), term_o_29);
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_95 (ATerm), ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
        if(((a_27 != NULL) && (a_27 != t)))
          _fail(t);
        else
          a_27 = t;
        if(((b_27 != NULL) && (b_27 != t)))
          _fail(t);
        else
          b_27 = t;
        t = term_a_6;
        t = get_config_0_0(t);
        if(((c_27 != NULL) && (c_27 != t)))
          _fail(t);
        else
          c_27 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_27));
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        t = term_w_5;
      }
    t = r_95(t);
    {
      ATerm z_0 (ATerm t)
      {
        ATerm a_32 = t;
        int e_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_z_5;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(e_32);
          }
        else
          {
            t = a_32;
            t = term_f_32;
          }
        return(t);
      }
      t = copy_to_1_0(z_0, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(y_0, t);
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
    if(((d_27 != NULL) && (d_27 != t)))
      _fail(t);
    else
      d_27 = t;
    t = create_header_0_0(t);
    t = print_to_0_0(t);
    if(((e_27 != NULL) && (e_27 != t)))
      _fail(t);
    else
      e_27 = t;
    t = not_null(d_27);
    if(((f_27 != NULL) && (f_27 != t)))
      _fail(t);
    else
      f_27 = t;
    {
      ATerm b_1 (ATerm t)
      {
        t = term_g_32;
        return(t);
      }
      t = xtc_transform_2_0(b_1, pass_verbose_0_0, t);
      if(((g_27 != NULL) && (g_27 != t)))
        _fail(t);
      else
        g_27 = t;
      t = not_null(f_27);
      if(((h_27 != NULL) && (h_27 != t)))
        _fail(t);
      else
        h_27 = t;
      t = create_footer_0_0(t);
      t = print_to_0_0(t);
      if(((i_27 != NULL) && (i_27 != t)))
        _fail(t);
      else
        i_27 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_27)), not_null(g_27)), not_null(e_27));
      t = xtc_cat_0_0(t);
    }
    return(t);
  }
  t = xtc_io_1_0(a_1, t);
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_27 != NULL) && (j_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_27 = ATgetArgument(t, 0);
      if(((k_27 != NULL) && (k_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(j_27), not_null(k_27));
        ;
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        t = SSL_subtr(not_null(j_27), not_null(k_27));
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL;
  if(((l_27 != NULL) && (l_27 != t)))
    _fail(t);
  else
    l_27 = t;
  if(((m_27 != NULL) && (m_27 != t)))
    _fail(t);
  else
    m_27 = t;
  t = term_j_32;
  {
    ATerm k_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(p_32);
      }
    else
      {
        t = k_32;
        t = term_v_7;
      }
    if(((n_27 != NULL) && (n_27 != t)))
      _fail(t);
    else
      n_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_27), term_v_7);
    t = subt_0_0(t);
    t = int_to_string_0_0(t);
    if(((o_27 != NULL) && (o_27 != t)))
      _fail(t);
    else
      o_27 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_27)), term_j_32);
  }
  return(t);
}
ATerm close_file_0_0 (ATerm t)
{
  ATerm p_27 = NULL;
  if(((p_27 != NULL) && (p_27 != t)))
    _fail(t);
  else
    p_27 = t;
  t = SSL_close_file(not_null(p_27));
  return(t);
}
ATerm execvp_0_0 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((q_27 != NULL) && (q_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_27 = ATgetArgument(t, 0);
      if(((r_27 != NULL) && (r_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(q_27), not_null(r_27));
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  t = map_1_0(explode_string_0_0, t);
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm int_to_string_0_0 (ATerm t)
{
  ATerm s_27 = NULL;
  if(((s_27 != NULL) && (s_27 != t)))
    _fail(t);
  else
    s_27 = t;
  t = SSL_int_to_string(not_null(s_27));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL;
  if(((u_27 != NULL) && (u_27 != t)))
    _fail(t);
  else
    u_27 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      v_27 = ATgetArgument(t, 0);
      {
        ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL;
        t = not_null(v_27);
        if(((y_27 != NULL) && (y_27 != t)))
          _fail(t);
        else
          y_27 = t;
        t = not_null(u_27);
        if(((z_27 != NULL) && (z_27 != t)))
          _fail(t);
        else
          z_27 = t;
        t = not_null(y_27);
        t = int_to_string_0_0(t);
        if(((a_28 != NULL) && (a_28 != t)))
          _fail(t);
        else
          a_28 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_33), not_null(a_28)), term_w_33);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((v_27 != NULL) && (v_27 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_27 = ATgetArgument(t, 0);
          if(((w_27 != NULL) && (w_27 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            w_27 = ATgetArgument(t, 1);
          if(((x_27 != NULL) && (x_27 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            x_27 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(v_27);
      if(((b_28 != NULL) && (b_28 != t)))
        _fail(t);
      else
        b_28 = t;
      t = not_null(w_27);
      if(((c_28 != NULL) && (c_28 != t)))
        _fail(t);
      else
        c_28 = t;
      t = not_null(x_27);
      if(((d_28 != NULL) && (d_28 != t)))
        _fail(t);
      else
        d_28 = t;
      t = not_null(u_27);
      if(((e_28 != NULL) && (e_28 != t)))
        _fail(t);
      else
        e_28 = t;
      t = not_null(c_28);
      t = int_to_string_0_0(t);
      if(((f_28 != NULL) && (f_28 != t)))
        _fail(t);
      else
        f_28 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_28)), term_z_33), not_null(f_28)), term_y_33), not_null(b_28));
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm g_73 (ATerm), ATerm t)
{
  ATerm g_28 = NULL;
  ATerm c_1 (ATerm t)
  {
    t = g_73(t);
    if(((g_28 != NULL) && (g_28 != t)))
      _fail(t);
    else
      g_28 = t;
    return(t);
  }
  t = fetch_1_0(c_1, t);
  t = not_null(g_28);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm h_28 = NULL;
  if(((h_28 != NULL) && (h_28 != t)))
    _fail(t);
  else
    h_28 = t;
  {
    ATerm a_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_46), term_m_46), term_a_46), term_u_45), term_r_45), term_n_45), term_g_44), term_v_42), term_s_42), term_l_42), term_y_40), term_t_40), term_e_40), term_e_39), term_q_37), term_l_37), term_h_37), term_c_37), term_v_36), term_i_36), term_a_36), term_x_35), term_p_35), term_l_35), term_i_35), term_c_35), term_k_34), term_h_34);
        {
          ATerm d_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm v_46 = ATgetArgument(t, 0);
                if(((h_28 != NULL) && (h_28 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  h_28 = ATgetArgument(t, 1);
                {
                  ATerm w_46 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(d_1, t);
        }
        ;
        LocalPopChoice(c_34);
      }
    else
      {
        t = a_34;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(h_28));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm i_28 = NULL;
  if(((i_28 != NULL) && (i_28 != t)))
    _fail(t);
  else
    i_28 = t;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm x_46 = ATgetArgument(t, 0);
          if(((j_28 != NULL) && (j_28 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_28 = ATgetArgument(t, 1);
          {
            ATerm n_47 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = not_null(j_28);
      {
        ATerm u_47 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_47;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        if(((k_28 != NULL) && (k_28 != t)))
          _fail(t);
        else
          k_28 = t;
        if(((l_28 != NULL) && (l_28 != t)))
          _fail(t);
        else
          l_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_47, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_28)), term_w_47));
        t = printnl_0_0(t);
      }
      return(t);
    }
    t = try_1_0(e_1, t);
    t = not_null(i_28);
  }
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm m_28 = NULL;
  if(((m_28 != NULL) && (m_28 != t)))
    _fail(t);
  else
    m_28 = t;
  t = SSL_waitpid(not_null(m_28));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  if(((o_28 != NULL) && (o_28 != t)))
    _fail(t);
  else
    o_28 = t;
  t = fork_0_0(t);
  if(((p_28 != NULL) && (p_28 != t)))
    _fail(t);
  else
    p_28 = t;
  {
    ATerm x_47 = t;
    int y_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_28 = NULL;
        if(((q_28 != NULL) && (q_28 != t)))
          _fail(t);
        else
          q_28 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(o_28);
        t = h_84(t);
        ;
        LocalPopChoice(y_47);
      }
    else
      {
        t = x_47;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_28), not_null(o_28));
        t = i_84(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm r_28 = NULL;
  ATerm f_1 (ATerm t)
  {
    ATerm s_28 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((s_28 != NULL) && (s_28 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          s_28 = ATgetArgument(t, 0);
        if(((r_28 != NULL) && (r_28 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          r_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(s_28);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm b_48 = ATgetArgument(t, 0);
        if(((ATgetType(b_48) != AT_INT) || (ATgetInt((ATermInt) b_48) != 0)))
          _fail(t);
        {
          ATerm h_48 = ATgetArgument(t, 1);
        }
        {
          ATerm i_48 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(r_28);
    return(t);
  }
  t = fork_2_0(j_84, f_1, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((t_28 != NULL) && (t_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_28 = ATgetArgument(t, 0);
      if(((u_28 != NULL) && (u_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_28), not_null(u_28));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(g_1, t);
  }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm v_28 = NULL;
  if(((v_28 != NULL) && (v_28 != t)))
    _fail(t);
  else
    v_28 = t;
  t = SSL_table_keys(not_null(v_28));
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm w_28 = NULL;
  if(((w_28 != NULL) && (w_28 != t)))
    _fail(t);
  else
    w_28 = t;
  t = table_keys_0_0(t);
  {
    ATerm h_1 (ATerm t)
    {
      ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
      if(((x_28 != NULL) && (x_28 != t)))
        _fail(t);
      else
        x_28 = t;
      if(((y_28 != NULL) && (y_28 != t)))
        _fail(t);
      else
        y_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), not_null(x_28));
      t = table_get_0_0(t);
      if(((z_28 != NULL) && (z_28 != t)))
        _fail(t);
      else
        z_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_28), not_null(z_28));
      return(t);
    }
    t = map_1_0(h_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm l_94 (ATerm), ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
    if(((a_29 != NULL) && (a_29 != t)))
      _fail(t);
    else
      a_29 = t;
    if(((b_29 != NULL) && (b_29 != t)))
      _fail(t);
    else
      b_29 = t;
    t = term_j_32;
    t = get_config_0_0(t);
    if(((c_29 != NULL) && (c_29 != t)))
      _fail(t);
    else
      c_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), term_i_8);
    t = geq_0_0(t);
    t = not_null(a_29);
    t = l_94(t);
    return(t);
  }
  t = try_1_0(i_1, t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  if(((d_29 != NULL) && (d_29 != t)))
    _fail(t);
  else
    d_29 = t;
  if(((e_29 != NULL) && (e_29 != t)))
    _fail(t);
  else
    e_29 = t;
  if(((f_29 != NULL) && (f_29 != t)))
    _fail(t);
  else
    f_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_47, not_null(f_29));
  t = printnl_0_0(t);
  t = not_null(d_29);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
  if(((g_29 != NULL) && (g_29 != t)))
    _fail(t);
  else
    g_29 = t;
  if(((h_29 != NULL) && (h_29 != t)))
    _fail(t);
  else
    h_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_48, (ATerm) ATmakeAppl(sym_Tool_1, not_null(g_29)));
  t = table_get_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_48 = ATgetFirst((ATermList) t);
      if(match_cons(k_48, sym__2))
        {
          if(((i_29 != NULL) && (i_29 != ATgetArgument(k_48, 0))))
            _fail(ATgetArgument(k_48, 0));
          else
            i_29 = ATgetArgument(k_48, 0);
          if(((j_29 != NULL) && (j_29 != ATgetArgument(k_48, 1))))
            _fail(ATgetArgument(k_48, 1));
          else
            j_29 = ATgetArgument(k_48, 1);
        }
      else
        _fail(t);
      {
        ATerm a_49 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(j_29);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_29 != NULL) && (k_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_29 = ATgetArgument(t, 0);
      if(((l_29 != NULL) && (l_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((m_29 != NULL) && (m_29 != t)))
    _fail(t);
  else
    m_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_48, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_29)));
  t = table_get_0_0(t);
  {
    ATerm j_1 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if(((l_29 != NULL) && (l_29 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            l_29 = ATgetArgument(t, 0);
          if(((n_29 != NULL) && (n_29 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            n_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(j_1, t);
    t = not_null(n_29);
  }
  return(t);
}
ATerm filter_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm f_49 = t;
  int o_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(o_49);
    }
  else
    {
      t = f_49;
      {
        ATerm p_49 = t;
        int q_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              t = filter_1_0(z_80, t);
              return(t);
            }
            t = Cons_2_0(z_80, k_1, t);
            ;
            LocalPopChoice(q_49);
          }
        else
          {
            t = p_49;
            {
              ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL;
              if(((p_29 != NULL) && (p_29 != t)))
                _fail(t);
              else
                p_29 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((q_29 != NULL) && (q_29 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    q_29 = ATgetFirst((ATermList) t);
                  if(((r_29 != NULL) && (r_29 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    r_29 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(r_29);
              if(((s_29 != NULL) && (s_29 != t)))
                _fail(t);
              else
                s_29 = t;
              t = filter_1_0(z_80, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm t_82 (ATerm), ATerm t)
{
  ATerm t_29 (ATerm t)
  {
    ATerm l_1 (ATerm t)
    {
      t = t_82(t);
      t = t_29(t);
      return(t);
    }
    t = try_1_0(l_1, t);
    return(t);
  }
  t = t_29(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm u_29 = NULL;
  if(((u_29 != NULL) && (u_29 != t)))
    _fail(t);
  else
    u_29 = t;
  {
    ATerm m_1 (ATerm t)
    {
      t = term_s_49;
      t = table_get_0_0(t);
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm t_49 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_49;
          }
      }
      return(t);
    }
    t = repeat_1_0(m_1, t);
    t = not_null(u_29);
  }
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  if(((v_29 != NULL) && (v_29 != t)))
    _fail(t);
  else
    v_29 = t;
  if(((w_29 != NULL) && (w_29 != t)))
    _fail(t);
  else
    w_29 = t;
  if(((x_29 != NULL) && (x_29 != t)))
    _fail(t);
  else
    x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_47, (ATerm) ATinsert(ATempty, not_null(x_29)));
  t = printnl_0_0(t);
  t = not_null(v_29);
  return(t);
}
ATerm say_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  ATerm y_29 = NULL;
  if(((y_29 != NULL) && (y_29 != t)))
    _fail(t);
  else
    y_29 = t;
  t = u_84(t);
  t = debug_0_0(t);
  t = not_null(y_29);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm k_94 (ATerm), ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
    if(((z_29 != NULL) && (z_29 != t)))
      _fail(t);
    else
      z_29 = t;
    if(((a_30 != NULL) && (a_30 != t)))
      _fail(t);
    else
      a_30 = t;
    t = term_j_32;
    t = get_config_0_0(t);
    if(((b_30 != NULL) && (b_30 != t)))
      _fail(t);
    else
      b_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_30), term_j_8);
    t = geq_0_0(t);
    t = not_null(z_29);
    t = k_94(t);
    return(t);
  }
  t = try_1_0(n_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm m_94 (ATerm), ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
    if(((c_30 != NULL) && (c_30 != t)))
      _fail(t);
    else
      c_30 = t;
    if(((d_30 != NULL) && (d_30 != t)))
      _fail(t);
    else
      d_30 = t;
    t = term_j_32;
    t = get_config_0_0(t);
    if(((e_30 != NULL) && (e_30 != t)))
      _fail(t);
    else
      e_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_30), term_h_8);
    t = geq_0_0(t);
    t = not_null(c_30);
    t = m_94(t);
    return(t);
  }
  t = try_1_0(o_1, t);
  return(t);
}
ATerm set_0_0 (ATerm t)
{
  t = table_put_0_0(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm f_30 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((f_30 != NULL) && (f_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_30 = ATgetArgument(t, 0);
      if(((f_30 != NULL) && (f_30 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((g_30 != NULL) && (g_30 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        g_30 = ATgetFirst((ATermList) t);
      if(((h_30 != NULL) && (h_30 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        h_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((i_30 != NULL) && (i_30 != t)))
    _fail(t);
  else
    i_30 = t;
  t = c_77(t);
  {
    ATerm p_1 (ATerm t)
    {
      ATerm j_30 = NULL;
      if(((j_30 != NULL) && (j_30 != t)))
        _fail(t);
      else
        j_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_30), not_null(j_30));
      t = b_77(t);
      return(t);
    }
    t = fetch_1_0(p_1, t);
    t = not_null(h_30);
  }
  return(t);
}
ATerm union_1_0 (ATerm x_76 (ATerm), ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_30 != NULL) && (l_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_30 = ATgetArgument(t, 0);
      if(((k_30 != NULL) && (k_30 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_30);
  {
    ATerm m_30 (ATerm t)
    {
      ATerm u_49 = t;
      int v_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(k_30);
          ;
          LocalPopChoice(v_49);
        }
      else
        {
          t = u_49;
          {
            ATerm w_49 = t;
            int x_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_1 (ATerm t)
                {
                  t = not_null(k_30);
                  return(t);
                }
                t = HdMember_p__2_0(x_76, q_1, t);
                t = m_30(t);
                ;
                LocalPopChoice(x_49);
              }
            else
              {
                t = w_49;
                t = Cons_2_0(_id, m_30, t);
              }
          }
        }
      return(t);
    }
    t = m_30(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
ATerm get_0_0 (ATerm t)
{
  t = table_get_0_0(t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,u_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((p_30 != NULL) && (p_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_30 = ATgetArgument(t, 0);
      if(((q_30 != NULL) && (q_30 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_30 = ATgetArgument(t, 1);
      if(((u_30 != NULL) && (u_30 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        u_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((w_30 != NULL) && (w_30 != t)))
    _fail(t);
  else
    w_30 = t;
  if(((x_30 != NULL) && (x_30 != t)))
    _fail(t);
  else
    x_30 = t;
  if(((y_30 != NULL) && (y_30 != t)))
    _fail(t);
  else
    y_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_30), not_null(q_30));
  {
    ATerm y_49 = t;
    int z_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        ;
        LocalPopChoice(z_49);
      }
    else
      {
        t = y_49;
        t = (ATerm) ATempty;
      }
    if(((z_30 != NULL) && (z_30 != t)))
      _fail(t);
    else
      z_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_30), not_null(u_30));
    t = union_0_0(t);
    if(((a_31 != NULL) && (a_31 != t)))
      _fail(t);
    else
      a_31 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(p_30), not_null(q_30), not_null(a_31));
    t = set_0_0(t);
    t = not_null(w_30);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_31 != NULL) && (c_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_31 = ATgetArgument(t, 0);
      if(((b_31 != NULL) && (b_31 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(b_31);
  {
    ATerm r_1 (ATerm t)
    {
      ATerm d_31 = NULL,e_31 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((d_31 != NULL) && (d_31 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            d_31 = ATgetArgument(t, 0);
          if(((e_31 != NULL) && (e_31 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(c_31), not_null(d_31), not_null(e_31));
      t = y_80(t);
      return(t);
    }
    t = map_1_0(r_1, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_31 (ATerm i_31, ATerm j_31, ATerm t)
  {
    ATerm k_31 = NULL;
    t = not_null(i_31);
    if(((k_31 != NULL) && (k_31 != t)))
      _fail(t);
    else
      k_31 = t;
    t = SSL_fclose(not_null(k_31));
    return(t);
  }
  ATerm s_31 (ATerm m_31, ATerm t)
  {
    ATerm o_31 = NULL;
    t = not_null(m_31);
    if(((o_31 != NULL) && (o_31 != t)))
      _fail(t);
    else
      o_31 = t;
    t = SSL_fclose(not_null(o_31));
    return(t);
  }
  ATerm p_31 = NULL,q_31 = NULL;
  if(((q_31 != NULL) && (q_31 != t)))
    _fail(t);
  else
    q_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_31 = ATgetArgument(t, 0);
      {
        ATerm a_50 = t;
        int b_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_31(not_null(p_31), not_null(q_31), t);
            ;
            LocalPopChoice(b_50);
          }
        else
          {
            t = a_50;
            t = s_31(not_null(q_31), t);
          }
      }
    }
  else
    {
      t = s_31(not_null(q_31), t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm t_31 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((t_31 != NULL) && (t_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(t_31));
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,b_32 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_31 != NULL) && (u_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_31 = ATgetArgument(t, 0);
      if(((v_31 != NULL) && (v_31 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(u_31), not_null(v_31));
  if(((w_31 != NULL) && (w_31 != t)))
    _fail(t);
  else
    w_31 = t;
  if(((b_32 != NULL) && (b_32 != t)))
    _fail(t);
  else
    b_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_32));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL;
  t = SSL_stdin_stream();
  if(((c_32 != NULL) && (c_32 != t)))
    _fail(t);
  else
    c_32 = t;
  if(((d_32 != NULL) && (d_32 != t)))
    _fail(t);
  else
    d_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_32));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL;
  t = SSL_stdout_stream();
  if(((l_32 != NULL) && (l_32 != t)))
    _fail(t);
  else
    l_32 = t;
  if(((m_32 != NULL) && (m_32 != t)))
    _fail(t);
  else
    m_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_32));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL;
  t = SSL_stderr_stream();
  if(((n_32 != NULL) && (n_32 != t)))
    _fail(t);
  else
    n_32 = t;
  if(((o_32 != NULL) && (o_32 != t)))
    _fail(t);
  else
    o_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_32));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm q_32 = NULL;
  if(((q_32 != NULL) && (q_32 != t)))
    _fail(t);
  else
    q_32 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(q_32);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(q_32);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(q_32);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL;
  if(((r_32 != NULL) && (r_32 != t)))
    _fail(t);
  else
    r_32 = t;
  if(((s_32 != NULL) && (s_32 != t)))
    _fail(t);
  else
    s_32 = t;
  t = not_null(r_32);
  if(((t_32 != NULL) && (t_32 != t)))
    _fail(t);
  else
    t_32 = t;
  t = SSL_explode_term(not_null(t_32));
  if(match_cons(t, sym__2))
    {
      ATerm c_50 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_50) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_50 = ATgetArgument(t, 1);
        if(((ATgetType(d_50) == AT_LIST) && !(ATisEmpty(d_50))))
          {
            if(((v_32 != NULL) && (v_32 != ATgetFirst((ATermList) d_50))))
              _fail(ATgetFirst((ATermList) d_50));
            else
              v_32 = ATgetFirst((ATermList) d_50);
            if(((u_32 != NULL) && (u_32 != (ATerm) ATgetNext((ATermList) d_50))))
              _fail((ATerm) ATgetNext((ATermList) d_50));
            else
              u_32 = (ATerm) ATgetNext((ATermList) d_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(v_32);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_50 = ATgetArgument(t, 0);
      ATerm f_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_50 = t;
    int h_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(h_50);
      }
    else
      {
        t = g_50;
        {
          ATerm i_50 = t;
          int j_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_1 (ATerm t)
              {
                ATerm w_32 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    if(((w_32 != NULL) && (w_32 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      w_32 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = not_null(w_32);
                return(t);
              }
              t = _2_0(s_1, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(j_50);
            }
          else
            {
              t = i_50;
              t = _2_0(is_string_0_0, _id, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL;
  ATerm k_50 = t;
  int l_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
      if(((x_32 != NULL) && (x_32 != t)))
        _fail(t);
      else
        x_32 = t;
      if(((y_32 != NULL) && (y_32 != t)))
        _fail(t);
      else
        y_32 = t;
      t = not_null(x_32);
      if(((z_32 != NULL) && (z_32 != t)))
        _fail(t);
      else
        z_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_32), term_m_50);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(l_50);
    }
  else
    {
      t = k_50;
      {
        ATerm t_1 (ATerm t)
        {
          t = term_n_50;
          return(t);
        }
        t = debug_1_0(t_1, t);
        _fail(t);
      }
    }
  if(((a_33 != NULL) && (a_33 != t)))
    _fail(t);
  else
    a_33 = t;
  t = read_from_stream_0_0(t);
  if(((b_33 != NULL) && (b_33 != t)))
    _fail(t);
  else
    b_33 = t;
  t = not_null(a_33);
  t = fclose_0_0(t);
  t = not_null(b_33);
  return(t);
}
ATerm can_read_file_0_0 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL;
  if(((c_33 != NULL) && (c_33 != t)))
    _fail(t);
  else
    c_33 = t;
  if(((d_33 != NULL) && (d_33 != t)))
    _fail(t);
  else
    d_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_33), (ATerm) ATinsert(ATempty, term_o_50));
  t = access_0_0(t);
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm p_50 = t;
  int q_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(q_50);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = p_50;
      {
        ATerm r_50 = t;
        int s_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_50 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_50;
              }
            {
              ATerm u_1 (ATerm t)
              {
                t = term_u_50;
                return(t);
              }
              t = debug_1_0(u_1, t);
            }
            ;
            LocalPopChoice(s_50);
          }
        else
          {
            t = r_50;
            {
              ATerm v_1 (ATerm t)
              {
                t = term_v_50;
                return(t);
              }
              t = debug_1_0(v_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL;
  if(((e_33 != NULL) && (e_33 != t)))
    _fail(t);
  else
    e_33 = t;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm x_1 (ATerm t)
      {
        t = term_w_50;
        return(t);
      }
      t = debug_1_0(x_1, t);
      return(t);
    }
    t = if_verbose5_1_0(w_1, t);
    {
      ATerm x_50 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_48, (ATerm) ATmakeAppl(sym_Imported_1, not_null(e_33)));
          t = table_get_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = x_50;
        }
      if(((f_33 != NULL) && (f_33 != t)))
        _fail(t);
      else
        f_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_48, term_y_50, (ATerm) ATinsert(ATempty, not_null(e_33)));
      t = table_put_0_0(t);
      t = not_null(f_33);
      {
        ATerm y_1 (ATerm t)
        {
          ATerm z_1 (ATerm t)
          {
            t = term_z_50;
            return(t);
          }
          t = debug_1_0(z_1, t);
          return(t);
        }
        t = if_verbose4_1_0(y_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm b_2 (ATerm t)
            {
              t = term_a_51;
              return(t);
            }
            t = say_1_0(b_2, t);
            return(t);
          }
          t = if_verbose6_1_0(a_2, t);
          if(((g_33 != NULL) && (g_33 != t)))
            _fail(t);
          else
            g_33 = t;
          if(((h_33 != NULL) && (h_33 != t)))
            _fail(t);
          else
            h_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_48, not_null(h_33));
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm c_2 (ATerm t)
            {
              ATerm d_2 (ATerm t)
              {
                t = term_b_51;
                return(t);
              }
              t = say_1_0(d_2, t);
              return(t);
            }
            t = if_verbose6_1_0(c_2, t);
            t = (ATerm) ATmakeAppl(sym__3, term_j_48, (ATerm)ATmakeAppl(sym_Imported_1, not_null(e_33)), (ATerm) ATempty);
            t = table_put_0_0(t);
            {
              ATerm e_2 (ATerm t)
              {
                ATerm f_2 (ATerm t)
                {
                  t = term_a_51;
                  return(t);
                }
                t = say_1_0(f_2, t);
                return(t);
              }
              t = if_verbose4_1_0(e_2, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm i_33 = NULL;
  if(((i_33 != NULL) && (i_33 != t)))
    _fail(t);
  else
    i_33 = t;
  t = SSL_getenv(not_null(i_33));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_51 = t;
  int d_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_51;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_51);
    }
  else
    {
      t = c_51;
      {
        ATerm f_51 = t;
        int g_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_h_51;
            t = getenv_0_0(t);
            ;
            LocalPopChoice(g_51);
          }
        else
          {
            t = f_51;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm j_33 = NULL;
  ATerm g_2 (ATerm t)
  {
    ATerm h_2 (ATerm t)
    {
      t = term_i_51;
      return(t);
    }
    t = debug_1_0(h_2, t);
    return(t);
  }
  t = if_verbose5_1_0(g_2, t);
  if(((j_33 != NULL) && (j_33 != t)))
    _fail(t);
  else
    j_33 = t;
  {
    ATerm j_51 = t;
    int k_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_51;
        t = table_get_0_0(t);
        ;
        LocalPopChoice(k_51);
      }
    else
      {
        t = j_51;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = not_null(j_33);
    {
      ATerm i_2 (ATerm t)
      {
        ATerm j_2 (ATerm t)
        {
          t = term_m_51;
          return(t);
        }
        t = debug_1_0(j_2, t);
        return(t);
      }
      t = if_verbose5_1_0(i_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm n_51 = t;
  int o_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 (ATerm t)
      {
        ATerm l_2 (ATerm t)
        {
          t = term_p_51;
          return(t);
        }
        t = debug_1_0(l_2, t);
        return(t);
      }
      t = if_verbose5_1_0(k_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm q_51 = t;
        int r_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(r_51);
          }
        else
          {
            t = q_51;
            t = xtc_find_loc_0_0(t);
          }
        {
          ATerm m_2 (ATerm t)
          {
            ATerm n_2 (ATerm t)
            {
              t = term_p_51;
              return(t);
            }
            t = debug_1_0(n_2, t);
            return(t);
          }
          t = if_verbose5_1_0(m_2, t);
        }
      }
      ;
      LocalPopChoice(o_51);
    }
  else
    {
      t = n_51;
      {
        ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
        if(((k_33 != NULL) && (k_33 != t)))
          _fail(t);
        else
          k_33 = t;
        if(((l_33 != NULL) && (l_33 != t)))
          _fail(t);
        else
          l_33 = t;
        t = not_null(k_33);
        if(((m_33 != NULL) && (m_33 != t)))
          _fail(t);
        else
          m_33 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_51), not_null(m_33)), term_s_51);
        t = error_0_0(t);
        {
          ATerm o_2 (ATerm t)
          {
            t = term_j_48;
            t = table_getlist_0_0(t);
            {
              ATerm p_2 (ATerm t)
              {
                t = term_u_51;
                return(t);
              }
              t = debug_1_0(p_2, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(o_2, t);
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
ATerm xtc_command_1_0 (ATerm e_96 (ATerm), ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL;
  if(((n_33 != NULL) && (n_33 != t)))
    _fail(t);
  else
    n_33 = t;
  t = e_96(t);
  t = xtc_find_warning_0_0(t);
  if(((o_33 != NULL) && (o_33 != t)))
    _fail(t);
  else
    o_33 = t;
  t = not_null(n_33);
  if(((p_33 != NULL) && (p_33 != t)))
    _fail(t);
  else
    p_33 = t;
  if(((q_33 != NULL) && (q_33 != t)))
    _fail(t);
  else
    q_33 = t;
  if(((r_33 != NULL) && (r_33 != t)))
    _fail(t);
  else
    r_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_33), not_null(r_33));
  t = call_0_0(t);
  t = not_null(p_33);
  return(t);
}
ATerm assert_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,b_34 = NULL,e_34 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_33 != NULL) && (s_33 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_33 = ATgetArgument(t, 0);
      if(((t_33 != NULL) && (t_33 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((u_33 != NULL) && (u_33 != t)))
    _fail(t);
  else
    u_33 = t;
  t = v_80(t);
  if(((v_33 != NULL) && (v_33 != t)))
    _fail(t);
  else
    v_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(v_33), not_null(s_33), not_null(t_33));
  t = table_push_0_0(t);
  {
    ATerm v_51 = t;
    int w_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_33), term_x_51);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(w_51);
      }
    else
      {
        t = v_51;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((b_34 != NULL) && (b_34 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          b_34 = ATgetFirst((ATermList) t);
        if(((e_34 != NULL) && (e_34 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          e_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(v_33), term_x_51, (ATerm) ATinsert(CheckATermList(not_null(e_34)), (ATerm) ATinsert(CheckATermList(not_null(b_34)), not_null(s_33))));
    t = table_put_0_0(t);
    t = not_null(u_33);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm x_84 (ATerm), ATerm t)
{
  ATerm f_34 = NULL;
  if(((f_34 != NULL) && (f_34 != t)))
    _fail(t);
  else
    f_34 = t;
  t = x_84(t);
  {
    ATerm q_2 (ATerm t)
    {
      t = term_y_51;
      return(t);
    }
    t = debug_1_0(q_2, t);
    t = not_null(f_34);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm v_34 (ATerm l_34, ATerm t)
  {
    ATerm m_34 = NULL;
    t = not_null(l_34);
    if(((m_34 != NULL) && (m_34 != t)))
      _fail(t);
    else
      m_34 = t;
    t = not_null(l_34);
    {
      ATerm z_51 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm a_52 = ATgetArgument(t, 0);
              ATerm b_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_51;
        }
      {
        ATerm r_2 (ATerm t)
        {
          t = term_c_52;
          return(t);
        }
        t = obsolete_1_0(r_2, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_34), term_y_5);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm w_34 (ATerm n_34, ATerm o_34, ATerm p_34, ATerm t)
  {
    ATerm q_34 = NULL,r_34 = NULL;
    t = not_null(n_34);
    if(((q_34 != NULL) && (q_34 != t)))
      _fail(t);
    else
      q_34 = t;
    t = not_null(o_34);
    if(((r_34 != NULL) && (r_34 != t)))
      _fail(t);
    else
      r_34 = t;
    t = SSL_open_file(not_null(q_34), not_null(r_34));
    return(t);
  }
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
  if(((s_34 != NULL) && (s_34 != t)))
    _fail(t);
  else
    s_34 = t;
  if(match_cons(t, sym__2))
    {
      t_34 = ATgetArgument(t, 0);
      u_34 = ATgetArgument(t, 1);
      {
        ATerm d_52 = t;
        int e_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_34(not_null(s_34), t);
            ;
            LocalPopChoice(e_52);
          }
        else
          {
            t = d_52;
            t = w_34(not_null(t_34), not_null(u_34), not_null(s_34), t);
          }
      }
    }
  else
    {
      t = v_34(not_null(s_34), t);
    }
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_34 != NULL) && (x_34 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_34 = ATgetArgument(t, 0);
      if(((y_34 != NULL) && (y_34 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(x_34), not_null(y_34));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm z_34 = NULL,e_35 = NULL;
  if(((z_34 != NULL) && (z_34 != t)))
    _fail(t);
  else
    z_34 = t;
  if(((e_35 != NULL) && (e_35 != t)))
    _fail(t);
  else
    e_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_35), (ATerm) ATinsert(ATempty, term_f_52));
  t = access_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL;
  if(((f_35 != NULL) && (f_35 != t)))
    _fail(t);
  else
    f_35 = t;
  t = term_o_5;
  t = new_0_0(t);
  if(((g_35 != NULL) && (g_35 != t)))
    _fail(t);
  else
    g_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_35), term_g_52);
  t = conc_strings_0_0(t);
  {
    ATerm s_2 (ATerm t)
    {
      t = file_exists_0_0(t);
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(s_2, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL;
  t = new_file_0_0(t);
  if(((t_35 != NULL) && (t_35 != t)))
    _fail(t);
  else
    t_35 = t;
  if(((u_35 != NULL) && (u_35 != t)))
    _fail(t);
  else
    u_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_35), term_y_5);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_35), term_o_5);
  {
    ATerm t_2 (ATerm t)
    {
      t = term_t_5;
      return(t);
    }
    t = assert_1_0(t_2, t);
    t = not_null(u_35);
  }
  return(t);
}
ATerm xtc_generate_2_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,c_36 = NULL,d_36 = NULL;
  if(((v_35 != NULL) && (v_35 != t)))
    _fail(t);
  else
    v_35 = t;
  t = term_o_5;
  t = xtc_new_file_0_0(t);
  if(((w_35 != NULL) && (w_35 != t)))
    _fail(t);
  else
    w_35 = t;
  if(((c_36 != NULL) && (c_36 != t)))
    _fail(t);
  else
    c_36 = t;
  t = t_96(t);
  if(((d_36 != NULL) && (d_36 != t)))
    _fail(t);
  else
    d_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_36), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_35)), term_z_5));
  t = conc_0_0(t);
  t = xtc_command_1_0(s_96, t);
  t = not_null(w_35);
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_35));
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_36 != NULL) && (e_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_36 = ATgetArgument(t, 0);
      if(((f_36 != NULL) && (f_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_copy(not_null(e_36), not_null(f_36));
  return(t);
}
ATerm stderr_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stderr_0)))
    _fail(t);
  return(t);
}
ATerm stdout_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdout_0)))
    _fail(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm o_37 (ATerm j_36, ATerm k_36, ATerm t)
  {
    ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
    t = not_null(j_36);
    if(((l_36 != NULL) && (l_36 != t)))
      _fail(t);
    else
      l_36 = t;
    t = not_null(k_36);
    if(((m_36 != NULL) && (m_36 != t)))
      _fail(t);
    else
      m_36 = t;
    t = k_0(t);
    if(((n_36 != NULL) && (n_36 != t)))
      _fail(t);
    else
      n_36 = t;
    {
      ATerm h_52 = t;
      int i_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          ;
          LocalPopChoice(i_52);
        }
      else
        {
          t = h_52;
          t = stderr_0_0(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_36), not_null(n_36));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_36));
    }
    return(t);
  }
  ATerm p_37 (ATerm o_36, ATerm p_36, ATerm t)
  {
    ATerm q_36 = NULL,r_36 = NULL,x_36 = NULL;
    t = not_null(o_36);
    if(((q_36 != NULL) && (q_36 != t)))
      _fail(t);
    else
      q_36 = t;
    t = not_null(p_36);
    if(((r_36 != NULL) && (r_36 != t)))
      _fail(t);
    else
      r_36 = t;
    t = k_0(t);
    if(((x_36 != NULL) && (x_36 != t)))
      _fail(t);
    else
      x_36 = t;
    {
      ATerm j_52 = t;
      if((PushChoice() == 0))
        {
          ATerm k_52 = t;
          int l_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              ;
              LocalPopChoice(l_52);
            }
          else
            {
              t = k_52;
              {
                ATerm m_52 = t;
                int n_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = stderr_0_0(t);
                    ;
                    LocalPopChoice(n_52);
                  }
                else
                  {
                    t = m_52;
                    {
                      ATerm y_36 = NULL;
                      if(((y_36 != NULL) && (y_36 != t)))
                        _fail(t);
                      else
                        y_36 = t;
                      if(((q_36 != NULL) && (q_36 != t)))
                        _fail(t);
                      else
                        q_36 = t;
                      t = not_null(y_36);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = j_52;
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_36), not_null(x_36));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_36));
    }
    return(t);
  }
  ATerm z_36 = NULL,a_37 = NULL;
  if(((z_36 != NULL) && (z_36 != t)))
    _fail(t);
  else
    z_36 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((a_37 != NULL) && (a_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_52 = t;
    int p_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_37(not_null(a_37), not_null(z_36), t);
        ;
        LocalPopChoice(p_52);
      }
    else
      {
        t = o_52;
        {
          ATerm q_52 = t;
          int r_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_37(not_null(a_37), not_null(z_36), t);
              ;
              LocalPopChoice(r_52);
            }
          else
            {
              t = q_52;
              {
                ATerm f_37 = NULL,g_37 = NULL;
                t = not_null(a_37);
                if(((f_37 != NULL) && (f_37 != t)))
                  _fail(t);
                else
                  f_37 = t;
                t = not_null(z_36);
                if(((g_37 != NULL) && (g_37 != t)))
                  _fail(t);
                else
                  g_37 = t;
                t = k_0(t);
                if(((f_37 != NULL) && (f_37 != t)))
                  _fail(t);
                else
                  f_37 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_37));
              }
            }
        }
      }
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm r_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_52 = ATgetFirst((ATermList) t);
      if(((r_37 != NULL) && (r_37 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        r_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(r_37);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_37 != NULL) && (s_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_37 = ATgetArgument(t, 0);
      if(((t_37 != NULL) && (t_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((u_37 != NULL) && (u_37 != t)))
    _fail(t);
  else
    u_37 = t;
  if(((v_37 != NULL) && (v_37 != t)))
    _fail(t);
  else
    v_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_37), not_null(t_37));
  {
    ATerm t_52 = t;
    int u_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        t = Tl_0_0(t);
        ;
        LocalPopChoice(u_52);
      }
    else
      {
        t = t_52;
        t = (ATerm) ATempty;
      }
    if(((w_37 != NULL) && (w_37 != t)))
      _fail(t);
    else
      w_37 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(s_37), not_null(t_37), not_null(w_37));
    t = table_put_0_0(t);
    t = not_null(u_37);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm s_80 (ATerm), ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL;
  if(((x_37 != NULL) && (x_37 != t)))
    _fail(t);
  else
    x_37 = t;
  t = s_80(t);
  if(((y_37 != NULL) && (y_37 != t)))
    _fail(t);
  else
    y_37 = t;
  {
    ATerm v_52 = t;
    int w_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_37), term_x_51);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(w_52);
      }
    else
      {
        t = v_52;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((a_38 != NULL) && (a_38 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          a_38 = ATgetFirst((ATermList) t);
        if(((z_37 != NULL) && (z_37 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          z_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(y_37), term_x_51, not_null(z_37));
    t = table_put_0_0(t);
    t = not_null(a_38);
    {
      ATerm u_2 (ATerm t)
      {
        ATerm b_38 = NULL;
        if(((b_38 != NULL) && (b_38 != t)))
          _fail(t);
        else
          b_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_37), not_null(b_38));
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(u_2, t);
      t = not_null(x_37);
    }
  }
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm c_38 = NULL;
  if(((c_38 != NULL) && (c_38 != t)))
    _fail(t);
  else
    c_38 = t;
  t = SSL_remove(not_null(c_38));
  return(t);
}
ATerm restore_always_2_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm t)
{
  ATerm x_52 = t;
  int y_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_71(t);
      t = r_71(t);
      ;
      LocalPopChoice(y_52);
    }
  else
    {
      t = x_52;
      t = r_71(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL;
  if(((d_38 != NULL) && (d_38 != t)))
    _fail(t);
  else
    d_38 = t;
  t = r_80(t);
  if(((e_38 != NULL) && (e_38 != t)))
    _fail(t);
  else
    e_38 = t;
  if(((f_38 != NULL) && (f_38 != t)))
    _fail(t);
  else
    f_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_38), term_x_51);
  {
    ATerm z_52 = t;
    int a_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(a_53);
      }
    else
      {
        t = z_52;
        t = (ATerm) ATempty;
      }
    if(((g_38 != NULL) && (g_38 != t)))
      _fail(t);
    else
      g_38 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(e_38), term_x_51, (ATerm) ATinsert(CheckATermList(not_null(g_38)), (ATerm) ATempty));
    t = table_put_0_0(t);
    t = not_null(d_38);
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL;
  ATerm v_2 (ATerm t)
  {
    t = term_t_5;
    return(t);
  }
  t = begin_scope_1_0(v_2, t);
  {
    ATerm w_2 (ATerm t)
    {
      ATerm j_38 = NULL;
      if(((j_38 != NULL) && (j_38 != t)))
        _fail(t);
      else
        j_38 = t;
      {
        ATerm b_53 = t;
        int c_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_53;
            t = table_get_0_0(t);
            ;
            LocalPopChoice(c_53);
          }
        else
          {
            t = b_53;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((i_38 != NULL) && (i_38 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              i_38 = ATgetFirst((ATermList) t);
            if(((h_38 != NULL) && (h_38 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              h_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(i_38);
        {
          ATerm x_2 (ATerm t)
          {
            t = try_1_0(remove_file_0_0, t);
            return(t);
          }
          t = map_1_0(x_2, t);
          t = not_null(j_38);
          {
            ATerm y_2 (ATerm t)
            {
              t = term_t_5;
              return(t);
            }
            t = end_scope_1_0(y_2, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(q_95, w_2, t);
  }
  return(t);
}
ATerm xtc_output_1_0 (ATerm s_95 (ATerm), ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    t = s_95(t);
    {
      ATerm a_3 (ATerm t)
      {
        ATerm e_53 = t;
        int f_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_z_5;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(f_53);
          }
        else
          {
            t = e_53;
            t = term_f_32;
          }
        return(t);
      }
      t = copy_to_1_0(a_3, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(z_2, t);
  return(t);
}
ATerm gen_css_0_0 (ATerm t)
{
  ATerm k_38 = NULL;
  if(((k_38 != NULL) && (k_38 != t)))
    _fail(t);
  else
    k_38 = t;
  t = term_g_53;
  t = get_config_0_0(t);
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("gen-css", 0, ATtrue)))
    _fail(t);
  t = not_null(k_38);
  {
    ATerm b_3 (ATerm t)
    {
      ATerm c_3 (ATerm t)
      {
        t = term_h_53;
        return(t);
      }
      t = xtc_generate_2_0(c_3, pass_verbose_0_0, t);
      return(t);
    }
    t = xtc_output_1_0(b_3, t);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
  if(((n_38 != NULL) && (n_38 != t)))
    _fail(t);
  else
    n_38 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(n_38);
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((o_38 != NULL) && (o_38 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            o_38 = ATgetFirst((ATermList) t);
          if(((p_38 != NULL) && (p_38 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(p_38);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((q_38 != NULL) && (q_38 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            q_38 = ATgetFirst((ATermList) t);
          if(((r_38 != NULL) && (r_38 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(o_38);
      if(((s_38 != NULL) && (s_38 != t)))
        _fail(t);
      else
        s_38 = t;
      t = not_null(q_38);
      if(((t_38 != NULL) && (t_38 != t)))
        _fail(t);
      else
        t_38 = t;
      t = not_null(r_38);
      if(((u_38 != NULL) && (u_38 != t)))
        _fail(t);
      else
        u_38 = t;
      t = not_null(n_38);
      if(((v_38 != NULL) && (v_38 != t)))
        _fail(t);
      else
        v_38 = t;
      t = not_null(s_38);
      t = h_0(t);
      t = not_null(v_38);
      if(((w_38 != NULL) && (w_38 != t)))
        _fail(t);
      else
        w_38 = t;
      t = not_null(t_38);
      t = i_0(t);
      if(((x_38 != NULL) && (x_38 != t)))
        _fail(t);
      else
        x_38 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(u_38)), not_null(x_38));
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm z_38 = NULL;
    if(((z_38 != NULL) && (z_38 != t)))
      _fail(t);
    else
      z_38 = t;
    if(match_string(t, "-k"))
      {
        t = not_null(z_38);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = not_null(z_38);
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
    if(((a_39 != NULL) && (a_39 != t)))
      _fail(t);
    else
      a_39 = t;
    if(((b_39 != NULL) && (b_39 != t)))
      _fail(t);
    else
      b_39 = t;
    t = string_to_int_0_0(t);
    if(((c_39 != NULL) && (c_39 != t)))
      _fail(t);
    else
      c_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_53, not_null(c_39));
    t = set_config_0_0(t);
    t = not_null(a_39);
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_j_53;
    return(t);
  }
  t = ArgOption_3_0(d_3, e_3, f_3, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm d_39 = NULL;
  if(((d_39 != NULL) && (d_39 != t)))
    _fail(t);
  else
    d_39 = t;
  t = SSL_string_to_int(not_null(d_39));
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_53 = t;
  int l_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 (ATerm t)
      {
        ATerm f_39 = NULL;
        if(((f_39 != NULL) && (f_39 != t)))
          _fail(t);
        else
          f_39 = t;
        if(match_string(t, "-S"))
          {
            t = not_null(f_39);
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = not_null(f_39);
          }
        return(t);
      }
      ATerm h_3 (ATerm t)
      {
        ATerm g_39 = NULL;
        if(((g_39 != NULL) && (g_39 != t)))
          _fail(t);
        else
          g_39 = t;
        t = term_m_53;
        t = set_config_0_0(t);
        t = term_n_53;
        return(t);
      }
      ATerm i_3 (ATerm t)
      {
        t = term_o_53;
        return(t);
      }
      t = Option_3_0(g_3, h_3, i_3, t);
      ;
      LocalPopChoice(l_53);
    }
  else
    {
      t = k_53;
      {
        ATerm p_53 = t;
        int q_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm k_3 (ATerm t)
            {
              ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
              if(((h_39 != NULL) && (h_39 != t)))
                _fail(t);
              else
                h_39 = t;
              if(((i_39 != NULL) && (i_39 != t)))
                _fail(t);
              else
                i_39 = t;
              t = string_to_int_0_0(t);
              if(((j_39 != NULL) && (j_39 != t)))
                _fail(t);
              else
                j_39 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_j_32, not_null(j_39));
              t = set_config_0_0(t);
              t = not_null(h_39);
              if(((k_39 != NULL) && (k_39 != t)))
                _fail(t);
              else
                k_39 = t;
              if(((l_39 != NULL) && (l_39 != t)))
                _fail(t);
              else
                l_39 = t;
              t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(l_39));
              return(t);
            }
            ATerm l_3 (ATerm t)
            {
              t = term_r_53;
              return(t);
            }
            t = ArgOption_3_0(j_3, k_3, l_3, t);
            ;
            LocalPopChoice(q_53);
          }
        else
          {
            t = p_53;
            {
              ATerm m_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm n_3 (ATerm t)
              {
                ATerm m_39 = NULL;
                if(((m_39 != NULL) && (m_39 != t)))
                  _fail(t);
                else
                  m_39 = t;
                t = term_t_53;
                t = set_config_0_0(t);
                t = term_u_53;
                return(t);
              }
              ATerm o_3 (ATerm t)
              {
                t = term_v_53;
                return(t);
              }
              t = Option_3_0(m_3, n_3, o_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm w_53 = t;
  int x_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(x_53);
    }
  else
    {
      t = w_53;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm o_39 = NULL;
    if(((o_39 != NULL) && (o_39 != t)))
      _fail(t);
    else
      o_39 = t;
    if(match_string(t, "-o"))
      {
        t = not_null(o_39);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = not_null(o_39);
      }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
    if(((p_39 != NULL) && (p_39 != t)))
      _fail(t);
    else
      p_39 = t;
    if(((q_39 != NULL) && (q_39 != t)))
      _fail(t);
    else
      q_39 = t;
    if(((r_39 != NULL) && (r_39 != t)))
      _fail(t);
    else
      r_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_5, not_null(r_39));
    t = set_config_0_0(t);
    t = not_null(p_39);
    if(((s_39 != NULL) && (s_39 != t)))
      _fail(t);
    else
      s_39 = t;
    if(((t_39 != NULL) && (t_39 != t)))
      _fail(t);
    else
      t_39 = t;
    t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_39));
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = term_y_53;
    return(t);
  }
  t = ArgOption_3_0(p_3, q_3, r_3, t);
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm v_39 = NULL;
    if(((v_39 != NULL) && (v_39 != t)))
      _fail(t);
    else
      v_39 = t;
    if(match_string(t, "-i"))
      {
        t = not_null(v_39);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = not_null(v_39);
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL;
    if(((w_39 != NULL) && (w_39 != t)))
      _fail(t);
    else
      w_39 = t;
    if(((x_39 != NULL) && (x_39 != t)))
      _fail(t);
    else
      x_39 = t;
    if(((y_39 != NULL) && (y_39 != t)))
      _fail(t);
    else
      y_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_6, not_null(y_39));
    t = set_config_0_0(t);
    t = not_null(w_39);
    if(((z_39 != NULL) && (z_39 != t)))
      _fail(t);
    else
      z_39 = t;
    if(((a_40 != NULL) && (a_40 != t)))
      _fail(t);
    else
      a_40 = t;
    t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_40));
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_z_53;
    return(t);
  }
  t = ArgOption_3_0(s_3, t_3, u_3, t);
  return(t);
}
ATerm abox2html_options_0_0 (ATerm t)
{
  ATerm a_54 = t;
  int b_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(b_54);
    }
  else
    {
      t = a_54;
      {
        ATerm c_54 = t;
        int d_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(d_54);
          }
        else
          {
            t = c_54;
            {
              ATerm e_54 = t;
              int f_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0_0(t);
                  ;
                  LocalPopChoice(f_54);
                }
              else
                {
                  t = e_54;
                  {
                    ATerm g_54 = t;
                    int h_54 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_3 (ATerm t)
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
                            _fail(t);
                          return(t);
                        }
                        ATerm w_3 (ATerm t)
                        {
                          ATerm c_40 = NULL;
                          if(((c_40 != NULL) && (c_40 != t)))
                            _fail(t);
                          else
                            c_40 = t;
                          t = term_j_54;
                          t = set_config_0_0(t);
                          t = not_null(c_40);
                          return(t);
                        }
                        ATerm x_3 (ATerm t)
                        {
                          t = term_k_54;
                          return(t);
                        }
                        t = Option_3_0(v_3, w_3, x_3, t);
                        ;
                        LocalPopChoice(h_54);
                      }
                    else
                      {
                        t = g_54;
                        {
                          ATerm y_3 (ATerm t)
                          {
                            ATerm d_40 = NULL;
                            if(((d_40 != NULL) && (d_40 != t)))
                              _fail(t);
                            else
                              d_40 = t;
                            if(match_string(t, "-t"))
                              {
                                t = not_null(d_40);
                              }
                            else
                              {
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--title", 0, ATtrue)))
                                  _fail(t);
                                t = not_null(d_40);
                              }
                            return(t);
                          }
                          ATerm z_3 (ATerm t)
                          {
                            ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
                            if(((i_40 != NULL) && (i_40 != t)))
                              _fail(t);
                            else
                              i_40 = t;
                            if(((j_40 != NULL) && (j_40 != t)))
                              _fail(t);
                            else
                              j_40 = t;
                            if(((k_40 != NULL) && (k_40 != t)))
                              _fail(t);
                            else
                              k_40 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_t_27, not_null(k_40));
                            t = set_config_0_0(t);
                            t = not_null(i_40);
                            return(t);
                          }
                          ATerm a_4 (ATerm t)
                          {
                            t = term_l_54;
                            return(t);
                          }
                          t = ArgOption_3_0(y_3, z_3, a_4, t);
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
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
  if(((l_40 != NULL) && (l_40 != t)))
    _fail(t);
  else
    l_40 = t;
  if(((m_40 != NULL) && (m_40 != t)))
    _fail(t);
  else
    m_40 = t;
  t = term_o_5;
  t = whoami_0_0(t);
  if(((n_40 != NULL) && (n_40 != t)))
    _fail(t);
  else
    n_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_47, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_54), not_null(n_40)), term_m_54));
  t = printnl_0_0(t);
  t = term_v_7;
  t = exit_0_0(t);
  t = not_null(l_40);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL;
  t = report_run_time_0_0(t);
  if(((o_40 != NULL) && (o_40 != t)))
    _fail(t);
  else
    o_40 = t;
  t = term_o_5;
  t = whoami_0_0(t);
  if(((p_40 != NULL) && (p_40 != t)))
    _fail(t);
  else
    p_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_47, (ATerm) ATinsert(ATinsert(ATempty, term_o_54), not_null(p_40)));
  t = printnl_0_0(t);
  t = term_v_7;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_54;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm q_40 = NULL;
  if(((q_40 != NULL) && (q_40 != t)))
    _fail(t);
  else
    q_40 = t;
  t = SSL_TicksToSeconds(not_null(q_40));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_40 != NULL) && (r_40 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_40 = ATgetArgument(t, 0);
      if(((s_40 != NULL) && (s_40 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_54 = t;
    int r_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(r_40), not_null(s_40));
        ;
        LocalPopChoice(r_54);
      }
    else
      {
        t = q_54;
        t = SSL_addr(not_null(r_40), not_null(s_40));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm k_79 (ATerm), ATerm l_79 (ATerm), ATerm t)
{
  ATerm s_54 = t;
  int t_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = k_79(t);
      ;
      LocalPopChoice(t_54);
    }
  else
    {
      t = s_54;
      {
        ATerm u_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL;
        if(((u_40 != NULL) && (u_40 != t)))
          _fail(t);
        else
          u_40 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((z_40 != NULL) && (z_40 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              z_40 = ATgetFirst((ATermList) t);
            if(((a_41 != NULL) && (a_41 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              a_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(z_40);
        if(((b_41 != NULL) && (b_41 != t)))
          _fail(t);
        else
          b_41 = t;
        t = not_null(a_41);
        if(((c_41 != NULL) && (c_41 != t)))
          _fail(t);
        else
          c_41 = t;
        t = not_null(u_40);
        if(((d_41 != NULL) && (d_41 != t)))
          _fail(t);
        else
          d_41 = t;
        t = not_null(c_41);
        t = foldr_2_0(k_79, l_79, t);
        if(((e_41 != NULL) && (e_41 != t)))
          _fail(t);
        else
          e_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_41), not_null(e_41));
        t = l_79(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL;
  if(((f_41 != NULL) && (f_41 != t)))
    _fail(t);
  else
    f_41 = t;
  if(((g_41 != NULL) && (g_41 != t)))
    _fail(t);
  else
    g_41 = t;
  t = not_null(f_41);
  if(((h_41 != NULL) && (h_41 != t)))
    _fail(t);
  else
    h_41 = t;
  t = SSL_explode_term(not_null(h_41));
  if(match_cons(t, sym__2))
    {
      ATerm u_54 = ATgetArgument(t, 0);
      if(((i_41 != NULL) && (i_41 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(i_41);
  t = foldr_2_0(i_77, j_77, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  {
    ATerm b_4 (ATerm t)
    {
      t = term_w_7;
      return(t);
    }
    t = crush_2_0(b_4, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_41 != NULL) && (j_41 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_41 = ATgetArgument(t, 0);
      if(((k_41 != NULL) && (k_41 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_41 != NULL) && (l_41 != t)))
    _fail(t);
  else
    l_41 = t;
  {
    ATerm v_54 = t;
    int w_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(j_41), not_null(k_41));
        ;
        LocalPopChoice(w_54);
      }
    else
      {
        t = v_54;
        t = SSL_gtr(not_null(j_41), not_null(k_41));
      }
    t = not_null(l_41);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_41 = NULL;
  ATerm x_54 = t;
  int y_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL;
      if(((o_41 != NULL) && (o_41 != t)))
        _fail(t);
      else
        o_41 = t;
      if(match_cons(t, sym__2))
        {
          if(((p_41 != NULL) && (p_41 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            p_41 = ATgetArgument(t, 0);
          if(((q_41 != NULL) && (q_41 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            q_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(p_41);
      if(((n_41 != NULL) && (n_41 != t)))
        _fail(t);
      else
        n_41 = t;
      t = not_null(q_41);
      if(((n_41 != NULL) && (n_41 != t)))
        _fail(t);
      else
        n_41 = t;
      t = not_null(o_41);
      ;
      LocalPopChoice(y_54);
    }
  else
    {
      t = x_54;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_94 (ATerm), ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
    if(((r_41 != NULL) && (r_41 != t)))
      _fail(t);
    else
      r_41 = t;
    if(((s_41 != NULL) && (s_41 != t)))
      _fail(t);
    else
      s_41 = t;
    t = term_j_32;
    t = get_config_0_0(t);
    if(((t_41 != NULL) && (t_41 != t)))
      _fail(t);
    else
      t_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_41), term_v_7);
    t = geq_0_0(t);
    t = not_null(r_41);
    t = h_94(t);
    return(t);
  }
  t = try_1_0(c_4, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL;
    if(((u_41 != NULL) && (u_41 != t)))
      _fail(t);
    else
      u_41 = t;
    t = run_time_0_0(t);
    if(((v_41 != NULL) && (v_41 != t)))
      _fail(t);
    else
      v_41 = t;
    t = not_null(u_41);
    if(((w_41 != NULL) && (w_41 != t)))
      _fail(t);
    else
      w_41 = t;
    t = term_o_5;
    t = whoami_0_0(t);
    if(((x_41 != NULL) && (x_41 != t)))
      _fail(t);
    else
      x_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_47, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_54), not_null(v_41)), term_y_33), not_null(x_41)));
    t = printnl_0_0(t);
    return(t);
  }
  t = if_verbose1_1_0(d_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_w_7;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1_0 (ATerm j_67 (ATerm), ATerm t)
{
  ATerm a_55 = t;
  int b_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_55;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_55);
    }
  else
    {
      t = a_55;
      {
        ATerm e_4 (ATerm t)
        {
          ATerm d_55 = t;
          int e_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(e_55);
            }
          else
            {
              t = d_55;
              {
                ATerm f_55 = t;
                int g_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(g_55);
                  }
                else
                  {
                    t = f_55;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(e_4, t);
      }
    }
  t = j_67(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm y_41 = NULL;
  if(((y_41 != NULL) && (y_41 != t)))
    _fail(t);
  else
    y_41 = t;
  t = SSL_table_create(not_null(y_41));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL;
  if(((z_41 != NULL) && (z_41 != t)))
    _fail(t);
  else
    z_41 = t;
  if(((a_42 != NULL) && (a_42 != t)))
    _fail(t);
  else
    a_42 = t;
  t = term_h_55;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_55, term_i_55, not_null(z_41));
  t = table_put_0_0(t);
  t = not_null(a_42);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm b_42 = NULL;
  if(((b_42 != NULL) && (b_42 != t)))
    _fail(t);
  else
    b_42 = t;
  t = SSL_table_destroy(not_null(b_42));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm c_42 = NULL;
  if(((c_42 != NULL) && (c_42 != t)))
    _fail(t);
  else
    c_42 = t;
  t = SSL_exit(not_null(c_42));
  return(t);
}
ATerm long_description_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL;
  if(((g_42 != NULL) && (g_42 != t)))
    _fail(t);
  else
    g_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_42 = ATgetFirst((ATermList) t);
      f_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
        t = not_null(e_42);
        if(((h_42 != NULL) && (h_42 != t)))
          _fail(t);
        else
          h_42 = t;
        t = not_null(f_42);
        if(((i_42 != NULL) && (i_42 != t)))
          _fail(t);
        else
          i_42 = t;
        if(((j_42 != NULL) && (j_42 != t)))
          _fail(t);
        else
          j_42 = t;
        if(((k_42 != NULL) && (k_42 != t)))
          _fail(t);
        else
          k_42 = t;
        t = g_0(t);
        if(((o_42 != NULL) && (o_42 != t)))
          _fail(t);
        else
          o_42 = t;
        t = not_null(k_42);
        if(((p_42 != NULL) && (p_42 != t)))
          _fail(t);
        else
          p_42 = t;
        t = not_null(h_42);
        t = e_0(t);
        if(((q_42 != NULL) && (q_42 != t)))
          _fail(t);
        else
          q_42 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(o_42)), not_null(q_42));
        if(((r_42 != NULL) && (r_42 != t)))
          _fail(t);
        else
          r_42 = t;
        t = not_null(j_42);
        {
          ATerm f_4 (ATerm t)
          {
            t = not_null(r_42);
            return(t);
          }
          t = reverse_acc_2_0(e_0, f_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_5;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, g_4, t);
  return(t);
}
ATerm short_description_1_0 (ATerm i_87 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm k_65 (ATerm), ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL;
  if(((b_43 != NULL) && (b_43 != t)))
    _fail(t);
  else
    b_43 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((x_42 != NULL) && (x_42 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((c_43 != NULL) && (c_43 != t)))
    _fail(t);
  else
    c_43 = t;
  t = SSLgetAnnotations(not_null(b_43));
  if(((w_42 != NULL) && (w_42 != t)))
    _fail(t);
  else
    w_42 = t;
  t = not_null(x_42);
  t = k_65(t);
  if(((a_43 != NULL) && (a_43 != t)))
    _fail(t);
  else
    a_43 = t;
  if(((e_43 != NULL) && (e_43 != t)))
    _fail(t);
  else
    e_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_43)), not_null(w_42));
  if(((d_43 != NULL) && (d_43 != t)))
    _fail(t);
  else
    d_43 = t;
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_43 = NULL;
  ATerm j_55 = t;
  int k_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_54;
      t = get_config_0_0(t);
      if(((f_43 != NULL) && (f_43 != t)))
        _fail(t);
      else
        f_43 = t;
      ;
      LocalPopChoice(k_55);
    }
  else
    {
      t = j_55;
      {
        ATerm h_4 (ATerm t)
        {
          ATerm i_4 (ATerm t)
          {
            if(((f_43 != NULL) && (f_43 != t)))
              _fail(t);
            else
              f_43 = t;
            return(t);
          }
          t = Program_1_0(i_4, t);
          return(t);
        }
        t = option_defined_1_0(h_4, t);
      }
    }
  {
    ATerm j_4 (ATerm t)
    {
      ATerm k_4 (ATerm t)
      {
        t = not_null(f_43);
        return(t);
      }
      t = short_description_1_0(k_4, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(j_4, t);
    t = term_l_55;
    t = echo_0_0(t);
    t = term_o_55;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm l_4 (ATerm t)
      {
        ATerm g_43 = NULL,h_43 = NULL;
        if(((g_43 != NULL) && (g_43 != t)))
          _fail(t);
        else
          g_43 = t;
        if(((h_43 != NULL) && (h_43 != t)))
          _fail(t);
        else
          h_43 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_43)), term_p_55);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(l_4, t);
      {
        ATerm m_4 (ATerm t)
        {
          ATerm i_43 = NULL,j_43 = NULL;
          if(((i_43 != NULL) && (i_43 != t)))
            _fail(t);
          else
            i_43 = t;
          {
            ATerm n_4 (ATerm t)
            {
              t = not_null(f_43);
              return(t);
            }
            t = long_description_1_0(n_4, t);
            if(((j_43 != NULL) && (j_43 != t)))
              _fail(t);
            else
              j_43 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(j_43)), term_q_55);
            t = echo_0_0(t);
          }
          return(t);
        }
        t = try_1_0(m_4, t);
      }
    }
  }
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm r_55 = t;
  int s_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(s_55);
    }
  else
    {
      t = r_55;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_43 != NULL) && (k_43 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_43 = ATgetArgument(t, 0);
      if(((l_43 != NULL) && (l_43 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((m_43 != NULL) && (m_43 != t)))
    _fail(t);
  else
    m_43 = t;
  t = SSL_printnl(not_null(k_43), not_null(l_43));
  t = not_null(m_43);
  return(t);
}
ATerm Undefined_1_0 (ATerm l_65 (ATerm), ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL;
  if(((q_43 != NULL) && (q_43 != t)))
    _fail(t);
  else
    q_43 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((o_43 != NULL) && (o_43 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((r_43 != NULL) && (r_43 != t)))
    _fail(t);
  else
    r_43 = t;
  t = SSLgetAnnotations(not_null(q_43));
  if(((n_43 != NULL) && (n_43 != t)))
    _fail(t);
  else
    n_43 = t;
  t = not_null(o_43);
  t = l_65(t);
  if(((p_43 != NULL) && (p_43 != t)))
    _fail(t);
  else
    p_43 = t;
  if(((t_43 != NULL) && (t_43 != t)))
    _fail(t);
  else
    t_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_43)), not_null(n_43));
  if(((s_43 != NULL) && (s_43 != t)))
    _fail(t);
  else
    s_43 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm e_73 (ATerm), ATerm t)
{
  ATerm u_43 (ATerm t)
  {
    ATerm t_55 = t;
    int u_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(e_73, _id, t);
        ;
        LocalPopChoice(u_55);
      }
    else
      {
        t = t_55;
        t = Cons_2_0(_id, u_43, t);
      }
    return(t);
  }
  t = u_43(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm i_86 (ATerm), ATerm t)
{
  t = fetch_1_0(i_86, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL;
  if(((w_43 != NULL) && (w_43 != t)))
    _fail(t);
  else
    w_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(w_43);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((x_43 != NULL) && (x_43 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            x_43 = ATgetFirst((ATermList) t);
          if(((y_43 != NULL) && (y_43 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(w_43);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,e_44 = NULL;
  if(((z_43 != NULL) && (z_43 != t)))
    _fail(t);
  else
    z_43 = t;
  if(((a_44 != NULL) && (a_44 != t)))
    _fail(t);
  else
    a_44 = t;
  {
    ATerm v_55 = t;
    int w_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(w_55);
      }
    else
      {
        t = v_55;
        {
          ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
          if(((b_44 != NULL) && (b_44 != t)))
            _fail(t);
          else
            b_44 = t;
          if(((c_44 != NULL) && (c_44 != t)))
            _fail(t);
          else
            c_44 = t;
          t = not_null(b_44);
          if(((d_44 != NULL) && (d_44 != t)))
            _fail(t);
          else
            d_44 = t;
          t = (ATerm) ATinsert(ATempty, not_null(d_44));
        }
      }
    if(((e_44 != NULL) && (e_44 != t)))
      _fail(t);
    else
      e_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_f_32, not_null(e_44));
    t = printnl_0_0(t);
    t = not_null(z_43);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_54;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm override_system_about_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  ATerm x_55 = t;
  int y_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(y_55);
    }
  else
    {
      t = x_55;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm f_44 = NULL;
  if(((f_44 != NULL) && (f_44 != t)))
    _fail(t);
  else
    f_44 = t;
  t = SSL_implode_string(not_null(f_44));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_55 = t;
  int a_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(a_56);
    }
  else
    {
      t = z_55;
      {
        ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL;
        if(((h_44 != NULL) && (h_44 != t)))
          _fail(t);
        else
          h_44 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((i_44 != NULL) && (i_44 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              i_44 = ATgetFirst((ATermList) t);
            if(((j_44 != NULL) && (j_44 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              j_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(i_44);
        if(((k_44 != NULL) && (k_44 != t)))
          _fail(t);
        else
          k_44 = t;
        t = not_null(j_44);
        if(((l_44 != NULL) && (l_44 != t)))
          _fail(t);
        else
          l_44 = t;
        t = not_null(k_44);
        {
          ATerm o_4 (ATerm t)
          {
            t = not_null(l_44);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(o_4, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL;
  if(((n_44 != NULL) && (n_44 != t)))
    _fail(t);
  else
    n_44 = t;
  if(((o_44 != NULL) && (o_44 != t)))
    _fail(t);
  else
    o_44 = t;
  t = not_null(n_44);
  if(((p_44 != NULL) && (p_44 != t)))
    _fail(t);
  else
    p_44 = t;
  t = SSL_explode_term(not_null(p_44));
  if(match_cons(t, sym__2))
    {
      ATerm b_56 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_56) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((q_44 != NULL) && (q_44 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(q_44);
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm k_73 (ATerm), ATerm t)
{
  ATerm r_44 (ATerm t)
  {
    ATerm c_56 = t;
    int d_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, r_44, t);
        ;
        LocalPopChoice(d_56);
      }
    else
      {
        t = c_56;
        t = Nil_0_0(t);
        t = k_73(t);
      }
    return(t);
  }
  t = r_44(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((t_44 != NULL) && (t_44 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_44 = ATgetArgument(t, 0);
      if(((s_44 != NULL) && (s_44 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(t_44);
  {
    ATerm p_4 (ATerm t)
    {
      t = not_null(s_44);
      return(t);
    }
    t = at_end_1_0(p_4, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_56 = t;
  int f_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(f_56);
    }
  else
    {
      t = e_56;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm u_44 = NULL;
  if(((u_44 != NULL) && (u_44 != t)))
    _fail(t);
  else
    u_44 = t;
  t = SSL_explode_string(not_null(u_44));
  return(t);
}
ATerm _2_0 (ATerm c_59 (ATerm), ATerm d_59 (ATerm), ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL;
  if(((a_45 != NULL) && (a_45 != t)))
    _fail(t);
  else
    a_45 = t;
  if(match_cons(t, sym__2))
    {
      if(((w_44 != NULL) && (w_44 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_44 = ATgetArgument(t, 0);
      if(((x_44 != NULL) && (x_44 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((b_45 != NULL) && (b_45 != t)))
    _fail(t);
  else
    b_45 = t;
  t = SSLgetAnnotations(not_null(a_45));
  if(((v_44 != NULL) && (v_44 != t)))
    _fail(t);
  else
    v_44 = t;
  t = not_null(w_44);
  t = c_59(t);
  if(((y_44 != NULL) && (y_44 != t)))
    _fail(t);
  else
    y_44 = t;
  t = not_null(x_44);
  t = d_59(t);
  if(((z_44 != NULL) && (z_44 != t)))
    _fail(t);
  else
    z_44 = t;
  if(((d_45 != NULL) && (d_45 != t)))
    _fail(t);
  else
    d_45 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_44), not_null(z_44)), not_null(v_44));
  if(((c_45 != NULL) && (c_45 != t)))
    _fail(t);
  else
    c_45 = t;
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm q_84 (ATerm), ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL,j_45 = NULL,k_45 = NULL;
  if(((e_45 != NULL) && (e_45 != t)))
    _fail(t);
  else
    e_45 = t;
  if(((f_45 != NULL) && (f_45 != t)))
    _fail(t);
  else
    f_45 = t;
  t = q_84(t);
  if(((g_45 != NULL) && (g_45 != t)))
    _fail(t);
  else
    g_45 = t;
  t = not_null(f_45);
  if(((j_45 != NULL) && (j_45 != t)))
    _fail(t);
  else
    j_45 = t;
  if(((k_45 != NULL) && (k_45 != t)))
    _fail(t);
  else
    k_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_47, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_45)), not_null(g_45)));
  t = printnl_0_0(t);
  t = not_null(e_45);
  return(t);
}
ATerm map_1_0 (ATerm t_72 (ATerm), ATerm t)
{
  ATerm l_45 (ATerm t)
  {
    ATerm g_56 = t;
    int h_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(h_56);
      }
    else
      {
        t = g_56;
        t = Cons_2_0(t_72, l_45, t);
      }
    return(t);
  }
  t = l_45(t);
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm m_45 = NULL;
  if(((m_45 != NULL) && (m_45 != t)))
    _fail(t);
  else
    m_45 = t;
  t = SSL_is_string(not_null(m_45));
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_56 = t;
  int j_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(j_56);
    }
  else
    {
      t = i_56;
      {
        ATerm k_56 = t;
        int l_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_4 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(q_4, t);
            ;
            LocalPopChoice(l_56);
          }
        else
          {
            t = k_56;
            {
              ATerm u_46 (ATerm x_45, ATerm y_45, ATerm t)
              {
                ATerm d_46 = NULL;
                t = not_null(x_45);
                if(((d_46 != NULL) && (d_46 != t)))
                  _fail(t);
                else
                  d_46 = t;
                {
                  ATerm m_56 = t;
                  int n_56 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(n_56);
                    }
                  else
                    {
                      t = m_56;
                      {
                        ATerm r_4 (ATerm t)
                        {
                          t = term_o_56;
                          return(t);
                        }
                        t = debug_1_0(r_4, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL;
              if(((e_46 != NULL) && (e_46 != t)))
                _fail(t);
              else
                e_46 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_46 = ATgetArgument(t, 0);
                  {
                    ATerm h_46 = NULL;
                    t = not_null(f_46);
                    if(((h_46 != NULL) && (h_46 != t)))
                      _fail(t);
                    else
                      h_46 = t;
                  }
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_46 = ATgetArgument(t, 0);
                      t = u_46(not_null(f_46), not_null(e_46), t);
                    }
                  else
                    {
                      ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          if(((f_46 != NULL) && (f_46 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            f_46 = ATgetArgument(t, 0);
                          if(((g_46 != NULL) && (g_46 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            g_46 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = not_null(f_46);
                      if(((i_46 != NULL) && (i_46 != t)))
                        _fail(t);
                      else
                        i_46 = t;
                      t = not_null(g_46);
                      if(((j_46 != NULL) && (j_46 != t)))
                        _fail(t);
                      else
                        j_46 = t;
                      t = not_null(e_46);
                      if(((k_46 != NULL) && (k_46 != t)))
                        _fail(t);
                      else
                        k_46 = t;
                      t = not_null(i_46);
                      t = eval_config_0_0(t);
                      if(((r_46 != NULL) && (r_46 != t)))
                        _fail(t);
                      else
                        r_46 = t;
                      t = not_null(k_46);
                      if(((s_46 != NULL) && (s_46 != t)))
                        _fail(t);
                      else
                        s_46 = t;
                      t = not_null(j_46);
                      t = eval_config_0_0(t);
                      if(((t_46 != NULL) && (t_46 != t)))
                        _fail(t);
                      else
                        t_46 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_46), not_null(t_46));
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
  ATerm y_46 = NULL;
  if(((y_46 != NULL) && (y_46 != t)))
    _fail(t);
  else
    y_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_56, not_null(y_46));
  t = table_get_0_0(t);
  {
    ATerm s_4 (ATerm t)
    {
      ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL;
      t = eval_config_0_0(t);
      if(((z_46 != NULL) && (z_46 != t)))
        _fail(t);
      else
        z_46 = t;
      if(((a_47 != NULL) && (a_47 != t)))
        _fail(t);
      else
        a_47 = t;
      if(((b_47 != NULL) && (b_47 != t)))
        _fail(t);
      else
        b_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_56, not_null(y_46), not_null(b_47));
      t = table_put_0_0(t);
      t = not_null(z_46);
      return(t);
    }
    t = try_1_0(s_4, t);
  }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm b_71 (ATerm), ATerm t)
{
  ATerm q_56 = t;
  int r_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_71(t);
      ;
      LocalPopChoice(r_56);
    }
  else
    {
      t = q_56;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_56 = t;
  int t_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm u_4 (ATerm t)
      {
        t = term_v_56;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm v_4 (ATerm t)
      {
        t = term_w_56;
        return(t);
      }
      t = Option_3_0(t_4, u_4, v_4, t);
      ;
      LocalPopChoice(t_56);
    }
  else
    {
      t = s_56;
      {
        ATerm w_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm x_4 (ATerm t)
        {
          ATerm c_47 = NULL;
          if(((c_47 != NULL) && (c_47 != t)))
            _fail(t);
          else
            c_47 = t;
          t = term_v_56;
          t = set_config_0_0(t);
          t = term_y_56;
          t = set_config_0_0(t);
          t = term_z_56;
          return(t);
        }
        ATerm y_4 (ATerm t)
        {
          t = term_a_57;
          return(t);
        }
        t = Option_3_0(w_4, x_4, y_4, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_47 != NULL) && (d_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_47 = ATgetArgument(t, 0);
      if(((e_47 != NULL) && (e_47 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(d_47), not_null(e_47));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((f_47 != NULL) && (f_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_47 = ATgetArgument(t, 0);
      if(((g_47 != NULL) && (g_47 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_47 = ATgetArgument(t, 1);
      if(((h_47 != NULL) && (h_47 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        h_47 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((i_47 != NULL) && (i_47 != t)))
    _fail(t);
  else
    i_47 = t;
  if(((j_47 != NULL) && (j_47 != t)))
    _fail(t);
  else
    j_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_47), not_null(g_47));
  {
    ATerm b_57 = t;
    int c_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(c_57);
      }
    else
      {
        t = b_57;
        t = (ATerm) ATempty;
      }
    if(((k_47 != NULL) && (k_47 != t)))
      _fail(t);
    else
      k_47 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(f_47), not_null(g_47), (ATerm) ATinsert(CheckATermList(not_null(k_47)), not_null(h_47)));
    t = table_put_0_0(t);
    t = not_null(i_47);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm n_87 (ATerm), ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL;
  if(((l_47 != NULL) && (l_47 != t)))
    _fail(t);
  else
    l_47 = t;
  t = term_o_5;
  t = n_87(t);
  if(((m_47 != NULL) && (m_47 != t)))
    _fail(t);
  else
    m_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_55, term_n_55, not_null(m_47));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL;
  if(((o_47 != NULL) && (o_47 != t)))
    _fail(t);
  else
    o_47 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(o_47);
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,z_47 = NULL,a_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((p_47 != NULL) && (p_47 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            p_47 = ATgetFirst((ATermList) t);
          if(((q_47 != NULL) && (q_47 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(p_47);
      if(((r_47 != NULL) && (r_47 != t)))
        _fail(t);
      else
        r_47 = t;
      t = not_null(q_47);
      if(((s_47 != NULL) && (s_47 != t)))
        _fail(t);
      else
        s_47 = t;
      t = not_null(o_47);
      if(((t_47 != NULL) && (t_47 != t)))
        _fail(t);
      else
        t_47 = t;
      t = not_null(r_47);
      t = a_0(t);
      t = not_null(t_47);
      if(((z_47 != NULL) && (z_47 != t)))
        _fail(t);
      else
        z_47 = t;
      t = term_o_5;
      t = c_0(t);
      if(((a_48 != NULL) && (a_48 != t)))
        _fail(t);
      else
        a_48 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(s_47)), not_null(a_48));
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm c_48 = NULL;
    if(((c_48 != NULL) && (c_48 != t)))
      _fail(t);
    else
      c_48 = t;
    if(match_string(t, "--help"))
      {
        t = not_null(c_48);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(c_48);
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = not_null(c_48);
          }
      }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = term_d_57;
    t = set_config_0_0(t);
    t = term_e_57;
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_f_57;
    return(t);
  }
  t = Option_3_0(z_4, a_5, b_5, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((d_48 != NULL) && (d_48 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        d_48 = ATgetFirst((ATermList) t);
      if(((e_48 != NULL) && (e_48 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        e_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(e_48)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_48)));
  return(t);
}
ATerm Cons_2_0 (ATerm l_60 (ATerm), ATerm m_60 (ATerm), ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL;
  if(((o_48 != NULL) && (o_48 != t)))
    _fail(t);
  else
    o_48 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((g_48 != NULL) && (g_48 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        g_48 = ATgetFirst((ATermList) t);
      if(((l_48 != NULL) && (l_48 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        l_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((p_48 != NULL) && (p_48 != t)))
    _fail(t);
  else
    p_48 = t;
  t = SSLgetAnnotations(not_null(o_48));
  if(((f_48 != NULL) && (f_48 != t)))
    _fail(t);
  else
    f_48 = t;
  t = not_null(g_48);
  t = l_60(t);
  if(((m_48 != NULL) && (m_48 != t)))
    _fail(t);
  else
    m_48 = t;
  t = not_null(l_48);
  t = m_60(t);
  if(((n_48 != NULL) && (n_48 != t)))
    _fail(t);
  else
    n_48 = t;
  if(((r_48 != NULL) && (r_48 != t)))
    _fail(t);
  else
    r_48 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(n_48)), not_null(m_48)), not_null(f_48));
  if(((q_48 != NULL) && (q_48 != t)))
    _fail(t);
  else
    q_48 = t;
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_48 != NULL) && (s_48 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_48 = ATgetArgument(t, 0);
      if(((t_48 != NULL) && (t_48 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_56, not_null(s_48), not_null(t_48));
  t = table_put_0_0(t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_87 (ATerm), ATerm t)
{
  ATerm u_48 = NULL;
  if(((u_48 != NULL) && (u_48 != t)))
    _fail(t);
  else
    u_48 = t;
  {
    ATerm c_5 (ATerm t)
    {
      t = term_g_57;
      t = l_87(t);
      return(t);
    }
    t = try_1_0(c_5, t);
    t = not_null(u_48);
    {
      ATerm d_5 (ATerm t)
      {
        ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL;
        if(((v_48 != NULL) && (v_48 != t)))
          _fail(t);
        else
          v_48 = t;
        if(((w_48 != NULL) && (w_48 != t)))
          _fail(t);
        else
          w_48 = t;
        if(((x_48 != NULL) && (x_48 != t)))
          _fail(t);
        else
          x_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_54, not_null(x_48));
        t = set_config_0_0(t);
        t = not_null(v_48);
        if(((y_48 != NULL) && (y_48 != t)))
          _fail(t);
        else
          y_48 = t;
        if(((z_48 != NULL) && (z_48 != t)))
          _fail(t);
        else
          z_48 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_48));
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        ATerm h_57 = t;
        int i_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_57 = t;
            int k_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(k_57);
              }
            else
              {
                t = j_57;
                t = l_87(t);
                t = Cons_2_0(_id, e_5, t);
              }
            ;
            LocalPopChoice(i_57);
          }
        else
          {
            t = h_57;
            t = UndefinedOption_0_0(t);
          }
        return(t);
      }
      t = Cons_2_0(d_5, e_5, t);
    }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL;
  if(((b_49 != NULL) && (b_49 != t)))
    _fail(t);
  else
    b_49 = t;
  if(match_cons(t, sym__3))
    {
      if(((c_49 != NULL) && (c_49 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_49 = ATgetArgument(t, 0);
      if(((d_49 != NULL) && (d_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_49 = ATgetArgument(t, 1);
      if(((e_49 != NULL) && (e_49 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        e_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(c_49), not_null(d_49), not_null(e_49));
  t = not_null(b_49);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,m_49 = NULL;
  if(((g_49 != NULL) && (g_49 != t)))
    _fail(t);
  else
    g_49 = t;
  t = term_l_57;
  t = table_put_0_0(t);
  t = not_null(g_49);
  {
    ATerm f_5 (ATerm t)
    {
      ATerm m_57 = t;
      int n_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_87(t);
          ;
          LocalPopChoice(n_57);
        }
      else
        {
          t = m_57;
          {
            ATerm o_57 = t;
            int p_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(p_57);
              }
            else
              {
                t = o_57;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_5, t);
    {
      ATerm g_5 (ATerm t)
      {
        ATerm q_57 = t;
        int r_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_49 (ATerm i_49, ATerm t)
            {
              ATerm j_49 = NULL;
              t = not_null(i_49);
              if(((j_49 != NULL) && (j_49 != t)))
                _fail(t);
              else
                j_49 = t;
              t = not_null(i_49);
              {
                ATerm s_57 = t;
                int t_57 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_c_55;
                    t = get_config_0_0(t);
                    ;
                    LocalPopChoice(t_57);
                  }
                else
                  {
                    t = s_57;
                    t = option_defined_1_0(Help_0_0, t);
                  }
                t = not_null(j_49);
                t = system_usage_0_0(t);
                t = term_w_7;
                t = exit_0_0(t);
              }
              return(t);
            }
            ATerm k_49 = NULL;
            if(((k_49 != NULL) && (k_49 != t)))
              _fail(t);
            else
              k_49 = t;
            {
              ATerm u_57 = t;
              int v_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_49(not_null(k_49), t);
                  ;
                  LocalPopChoice(v_57);
                }
              else
                {
                  t = u_57;
                  {
                    ATerm l_49 = NULL;
                    t = not_null(k_49);
                    if(((l_49 != NULL) && (l_49 != t)))
                      _fail(t);
                    else
                      l_49 = t;
                    t = term_u_56;
                    t = get_config_0_0(t);
                    t = not_null(l_49);
                    t = system_about_0_0(t);
                    t = term_w_7;
                    t = exit_0_0(t);
                  }
                }
            }
            ;
            LocalPopChoice(r_57);
          }
        else
          {
            t = q_57;
            {
              ATerm h_5 (ATerm t)
              {
                ATerm i_5 (ATerm t)
                {
                  if(((h_49 != NULL) && (h_49 != t)))
                    _fail(t);
                  else
                    h_49 = t;
                  return(t);
                }
                t = Undefined_1_0(i_5, t);
                return(t);
              }
              t = option_defined_1_0(h_5, t);
              t = (ATerm) ATmakeAppl(sym__2, term_v_47, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_49)), term_w_57));
              t = printnl_0_0(t);
              t = system_usage_0_0(t);
              t = term_v_7;
              t = exit_0_0(t);
            }
          }
        return(t);
      }
      t = try_1_0(g_5, t);
      if(((m_49 != NULL) && (m_49 != t)))
        _fail(t);
      else
        m_49 = t;
      t = term_m_55;
      t = table_destroy_0_0(t);
      t = not_null(m_49);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_67 (ATerm), ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm o_67 (ATerm), ATerm t)
{
  t = parse_options_1_0(l_67, t);
  t = store_options_0_0(t);
  t = n_67(t);
  {
    ATerm x_57 = t;
    int y_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_67, t);
        ;
        LocalPopChoice(y_57);
      }
    else
      {
        t = x_57;
        {
          ATerm z_57 = t;
          int a_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_67(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_58);
            }
          else
            {
              t = z_57;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm p_67 (ATerm), ATerm q_67 (ATerm), ATerm t)
{
  t = option_wrap_4_0(p_67, default_usage_0_0, _id, q_67, t);
  return(t);
}
ATerm io_abox2html_0_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm b_58 = t;
    int c_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = gen_css_0_0(t);
        ;
        LocalPopChoice(c_58);
      }
    else
      {
        t = b_58;
        t = abox2html_0_0(t);
      }
    return(t);
  }
  t = option_wrap_2_0(abox2html_options_0_0, j_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_abox2html_0_0(t);
  return(t);
}
