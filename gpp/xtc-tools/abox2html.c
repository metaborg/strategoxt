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
ATerm term_g_61;
ATerm term_x_60;
ATerm term_q_60;
ATerm term_p_60;
ATerm term_o_60;
ATerm term_n_60;
ATerm term_i_60;
ATerm term_h_60;
ATerm term_g_60;
ATerm term_f_60;
ATerm term_e_60;
ATerm term_d_60;
ATerm term_c_60;
ATerm term_z_59;
ATerm term_u_59;
ATerm term_a_59;
ATerm term_z_58;
ATerm term_y_58;
ATerm term_x_58;
ATerm term_w_58;
ATerm term_t_58;
ATerm term_s_58;
ATerm term_r_58;
ATerm term_q_58;
ATerm term_j_58;
ATerm term_z_57;
ATerm term_y_57;
ATerm term_x_57;
ATerm term_w_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_l_57;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_i_57;
ATerm term_b_57;
ATerm term_a_57;
ATerm term_z_56;
ATerm term_y_56;
ATerm term_x_56;
ATerm term_w_56;
ATerm term_v_56;
ATerm term_u_56;
ATerm term_t_56;
ATerm term_s_56;
ATerm term_r_56;
ATerm term_q_56;
ATerm term_n_56;
ATerm term_q_55;
ATerm term_p_55;
ATerm term_m_55;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_e_55;
ATerm term_d_55;
ATerm term_y_54;
ATerm term_x_54;
ATerm term_w_54;
ATerm term_t_54;
ATerm term_s_54;
ATerm term_r_54;
ATerm term_o_54;
ATerm term_l_54;
ATerm term_j_54;
ATerm term_i_54;
ATerm term_h_54;
ATerm term_g_54;
ATerm term_u_52;
ATerm term_l_52;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_d_51;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_u_48;
ATerm term_a_48;
ATerm term_n_46;
ATerm term_x_45;
ATerm term_s_45;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_n_45;
ATerm term_u_44;
ATerm term_g_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_v_43;
ATerm term_o_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_b_43;
ATerm term_v_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_v_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_s_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_k_36;
ATerm term_t_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_b_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_f_33;
ATerm term_e_32;
ATerm term_n_29;
ATerm term_k_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_r_28;
ATerm term_o_28;
ATerm term_s_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_k_26;
ATerm term_i_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_r_25;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_z_8;
ATerm term_w_8;
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
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(100);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("p.m.", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("a.m.", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Saturday_0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Friday_0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Thursday_0);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Wednesday_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Tuesday_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Monday_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Sunday_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_December_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_November_0);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_October_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_September_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_August_0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_July_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_June_0);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_May_0);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_April_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_March_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_February_0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_January_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("EEEE", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("d", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("MMMM", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("yyyy", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("HH", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("mm", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ss", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--title", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no title specified for HTML document", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("<!-- \n", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   This file is generated at ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" \n", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   by abox2html (C) 2001 Merijn de Jonge (mdejonge@cwi.nl)\n", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-->\n", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("<!doctype html public \"-//W3C//DTD WWW HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/loose.dtd\"> \n", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<html>\n", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  <head>\n", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("    <title>", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("</title>\n", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("    <link rel=\"stylesheet\" type=\"text/css\" href=\"boxstyle.css\">\n", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  </head>\n", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  <body>\n", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-html", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_32, term_v_7, term_f_33);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_33, term_l_8, term_x_33);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_33, term_k_8, term_b_34);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_35, term_h_8, term_c_35);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_35, term_e_8, term_f_35);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_35, term_l_35, term_m_35);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_35, term_p_35, term_q_35);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_35, term_g_8, term_k_36);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_37, term_d_37, term_e_37);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_37, term_i_37, term_n_37);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_38, term_f_8, term_e_38);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_38, term_j_8, term_h_38);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_38, term_n_38, term_o_38);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_38, term_c_8, term_r_38);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_38, term_u_38, term_v_38);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_38, term_c_39, term_d_39);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_39, term_g_39, term_s_39);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_39, term_z_39, term_a_40);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_40, term_p_8, term_h_40);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_40, term_d_8, term_k_40);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_40, term_o_8, term_n_40);
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_40, term_q_40, term_r_40);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_40, term_v_40, term_i_42);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_42, term_b_43, term_j_43);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_43, term_i_8, term_m_43);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_43, term_a_44, term_b_44);
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_44, term_g_44, term_u_44);
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_45, term_r_45, term_s_45);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(sym__2, term_u_48, term_e_49);
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(sym__2, term_u_48, term_l_54);
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(sym__2, term_t_5, term_h_55);
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css-boxstyle", 0, ATtrue));
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(sym__2, term_r_28, term_w_7);
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_7);
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_56));
  term_z_56 = (ATerm) ATmakeAppl(sym__2, term_y_56, term_o_5);
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(sym__2, term_r_56, term_k_57);
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Only generate cascading style sheet", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-t title    Title of HTML document", 0, ATtrue));
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(sym__2, term_x_58, term_y_58);
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(sym__2, term_c_60, term_o_5);
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(sym__2, term_f_60, term_o_5);
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(sym__2, term_q_58, term_o_5);
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(sym__3, term_x_58, term_y_58, (ATerm) ATempty);
  ATprotect(&(term_g_61));
  term_g_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm close_0_0 (ATerm);
ATerm c_0 (ATerm);
ATerm e_0 (ATerm);
ATerm xtc_close_fd_0_0 (ATerm);
ATerm fdcopy_0_0 (ATerm);
ATerm finally_2_0 (ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm);
ATerm File_as_fd_1_0 (ATerm u_101 (ATerm), ATerm);
ATerm STDERR__FILENO_0_0 (ATerm);
ATerm STDOUT__FILENO_0_0 (ATerm);
ATerm STDIN__FILENO_0_0 (ATerm);
ATerm open_0_0 (ATerm);
ATerm xtc_open_fd_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm xtc_new_file_name_0_0 (ATerm);
ATerm xtc_cat_0_0 (ATerm);
ATerm print_0_0 (ATerm);
ATerm print_to_0_0 (ATerm);
ATerm create_footer_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm p_91 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm stdin_0_0 (ATerm);
ATerm FILE_1_0 (ATerm q_72 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm);
ATerm month2abbr_0_0 (ATerm);
ATerm month2text_0_0 (ATerm);
ATerm day_of_week2abbr_0_0 (ATerm);
ATerm day_of_week2text_0_0 (ATerm);
ATerm lt_0_0 (ATerm);
ATerm leq_lt_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm comp_comp_2_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm);
ATerm leq_leq_0_0 (ATerm);
ATerm while_not_2_0 (ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm);
ATerm for_3_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm copy_char_0_0 (ATerm);
ATerm pos_0_0 (ATerm);
ATerm align_helper_0_0 (ATerm);
ATerm align_right_0_0 (ATerm);
ATerm foldr_3_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
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
ATerm z_0 (ATerm);
ATerm xtc_io_1_0 (ATerm c_102 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm abox2html_0_0 (ATerm);
ATerm subt_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm close_file_0_0 (ATerm);
ATerm execvp_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm r_79 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm waitpid_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm u_90 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm d_101 (ATerm), ATerm);
ATerm error_0_0 (ATerm);
ATerm xtc_find_loc_0_0 (ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm k_87 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm e_89 (ATerm), ATerm);
ATerm m_1 (ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm b_91 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm c_101 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm e_101 (ATerm), ATerm);
ATerm set_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm);
ATerm union_1_0 (ATerm j_83 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm get_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm j_87 (ATerm), ATerm);
ATerm x_35 (ATerm h_35, ATerm i_35, ATerm);
ATerm y_35 (ATerm s_35, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm fopen_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm t_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm can_read_file_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm getenv_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm p_102 (ATerm), ATerm);
ATerm assert_1_0 (ATerm g_87 (ATerm), ATerm);
ATerm q_2 (ATerm);
ATerm obsolete_1_0 (ATerm e_91 (ATerm), ATerm);
ATerm k_39 (ATerm k_38, ATerm);
ATerm l_39 (ATerm m_38, ATerm y_38, ATerm z_38, ATerm);
ATerm r_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm access_0_0 (ATerm);
ATerm file_exists_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_generate_2_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm);
ATerm copy_file_0_0 (ATerm);
ATerm stderr_0_0 (ATerm);
ATerm stdout_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm d_87 (ATerm), ATerm);
ATerm remove_file_0_0 (ATerm);
ATerm restore_always_2_0 (ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm c_87 (ATerm), ATerm);
ATerm v_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm b_102 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm xtc_output_1_0 (ATerm d_102 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm gen_css_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm abox2html_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm);
ATerm crush_2_0 (ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_100 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm e_4 (ATerm);
ATerm need_help_1_0 (ATerm u_73 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm u_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm Program_1_0 (ATerm v_71 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_71 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm p_79 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm t_92 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm v_79 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm _2_0 (ATerm h_62 (ATerm), ATerm i_62 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm n_91 (ATerm), ATerm);
ATerm map_1_0 (ATerm e_79 (ATerm), ATerm);
ATerm is_string_0_0 (ATerm);
ATerm q_4 (ATerm);
ATerm v_51 (ATerm v_50, ATerm w_50, ATerm);
ATerm r_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm m_77 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm y_93 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm w_66 (ATerm), ATerm x_66 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm parse_options_p__1_0 (ATerm w_93 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm c_54 (ATerm x_53, ATerm);
ATerm parse_options_1_0 (ATerm v_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm io_abox2html_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm close_0_0 (ATerm t)
{
  ATerm z_9 = NULL;
  if(((z_9 != NULL) && (z_9 != t)))
    _fail(t);
  else
    z_9 = t;
  t = SSL_close(not_null(z_9));
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm k_5 = t;
  int l_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_10 = NULL;
      if(((a_10 != NULL) && (a_10 != t)))
        _fail(t);
      else
        a_10 = t;
      {
        ATerm m_5 = t;
        int n_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
            t = not_null(a_10);
            if(((b_10 != NULL) && (b_10 != t)))
              _fail(t);
            else
              b_10 = t;
            t = not_null(a_10);
            if(((c_10 != NULL) && (c_10 != t)))
              _fail(t);
            else
              c_10 = t;
            if(((d_10 != NULL) && (d_10 != t)))
              _fail(t);
            else
              d_10 = t;
            t = not_null(c_10);
            if(((e_10 != NULL) && (e_10 != t)))
              _fail(t);
            else
              e_10 = t;
            t = term_o_5;
            t = STDIN__FILENO_0_0(t);
            if(((f_10 != NULL) && (f_10 != t)))
              _fail(t);
            else
              f_10 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_10), not_null(f_10));
            t = eq_0_0(t);
            t = not_null(b_10);
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
                  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
                  t = not_null(a_10);
                  if(((g_10 != NULL) && (g_10 != t)))
                    _fail(t);
                  else
                    g_10 = t;
                  t = not_null(a_10);
                  if(((h_10 != NULL) && (h_10 != t)))
                    _fail(t);
                  else
                    h_10 = t;
                  if(((i_10 != NULL) && (i_10 != t)))
                    _fail(t);
                  else
                    i_10 = t;
                  t = not_null(h_10);
                  if(((j_10 != NULL) && (j_10 != t)))
                    _fail(t);
                  else
                    j_10 = t;
                  t = term_o_5;
                  t = STDOUT__FILENO_0_0(t);
                  if(((k_10 != NULL) && (k_10 != t)))
                    _fail(t);
                  else
                    k_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_10), not_null(k_10));
                  t = eq_0_0(t);
                  t = not_null(g_10);
                  ;
                  LocalPopChoice(q_5);
                }
              else
                {
                  t = p_5;
                  {
                    ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
                    t = not_null(a_10);
                    if(((l_10 != NULL) && (l_10 != t)))
                      _fail(t);
                    else
                      l_10 = t;
                    t = not_null(a_10);
                    if(((m_10 != NULL) && (m_10 != t)))
                      _fail(t);
                    else
                      m_10 = t;
                    if(((n_10 != NULL) && (n_10 != t)))
                      _fail(t);
                    else
                      n_10 = t;
                    t = not_null(m_10);
                    if(((o_10 != NULL) && (o_10 != t)))
                      _fail(t);
                    else
                      o_10 = t;
                    t = term_o_5;
                    t = STDERR__FILENO_0_0(t);
                    if(((p_10 != NULL) && (p_10 != t)))
                      _fail(t);
                    else
                      p_10 = t;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_10), not_null(p_10));
                    t = eq_0_0(t);
                    t = not_null(l_10);
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
ATerm e_0 (ATerm t)
{
  t = term_o_5;
  return(t);
}
ATerm xtc_close_fd_0_0 (ATerm t)
{
  t = finally_2_0(c_0, e_0, t);
  return(t);
}
ATerm fdcopy_0_0 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((q_10 != NULL) && (q_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_10 = ATgetArgument(t, 0);
      if(((r_10 != NULL) && (r_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fdcopy(not_null(q_10), not_null(r_10));
  return(t);
}
ATerm finally_2_0 (ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm t)
{
  ATerm r_5 = t;
  int s_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_78(t);
      LocalPopChoice(s_5);
      {
        ATerm s_10 = NULL;
        if(((s_10 != NULL) && (s_10 != t)))
          _fail(t);
        else
          s_10 = t;
        t = e_78(t);
        t = not_null(s_10);
      }
    }
  else
    {
      t = r_5;
      {
        ATerm t_10 = NULL;
        if(((t_10 != NULL) && (t_10 != t)))
          _fail(t);
        else
          t_10 = t;
        t = e_78(t);
        t = not_null(t_10);
        _fail(t);
      }
    }
  return(t);
}
ATerm File_as_fd_1_0 (ATerm u_101 (ATerm), ATerm t)
{
  ATerm u_10 = NULL;
  t = xtc_open_fd_0_0(t);
  if(((u_10 != NULL) && (u_10 != t)))
    _fail(t);
  else
    u_10 = t;
  {
    ATerm n_0 (ATerm t)
    {
      ATerm v_10 = NULL;
      if(((v_10 != NULL) && (v_10 != t)))
        _fail(t);
      else
        v_10 = t;
      {
        ATerm o_0 (ATerm t)
        {
          t = not_null(u_10);
          t = xtc_close_fd_0_0(t);
          return(t);
        }
        t = try_1_0(o_0, t);
        t = not_null(v_10);
      }
      return(t);
    }
    t = finally_2_0(u_101, n_0, t);
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
  ATerm w_10 = NULL;
  if(((w_10 != NULL) && (w_10 != t)))
    _fail(t);
  else
    w_10 = t;
  t = SSL_open(not_null(w_10));
  return(t);
}
ATerm xtc_open_fd_0_0 (ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL;
  if(((z_10 != NULL) && (z_10 != t)))
    _fail(t);
  else
    z_10 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_10 = ATgetArgument(t, 0);
      {
        ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL;
        t = not_null(y_10);
        if(((a_11 != NULL) && (a_11 != t)))
          _fail(t);
        else
          a_11 = t;
        t = not_null(z_10);
        if(((b_11 != NULL) && (b_11 != t)))
          _fail(t);
        else
          b_11 = t;
        t = not_null(a_11);
        t = open_0_0(t);
        if(((c_11 != NULL) && (c_11 != t)))
          _fail(t);
        else
          c_11 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          ATerm d_11 = NULL,e_11 = NULL;
          t = not_null(z_10);
          if(((d_11 != NULL) && (d_11 != t)))
            _fail(t);
          else
            d_11 = t;
          t = term_o_5;
          t = STDIN__FILENO_0_0(t);
          if(((e_11 != NULL) && (e_11 != t)))
            _fail(t);
          else
            e_11 = t;
        }
      else
        {
          if(match_cons(t, sym_stdout_0))
            {
              ATerm f_11 = NULL,g_11 = NULL;
              t = not_null(z_10);
              if(((f_11 != NULL) && (f_11 != t)))
                _fail(t);
              else
                f_11 = t;
              t = term_o_5;
              t = STDOUT__FILENO_0_0(t);
              if(((g_11 != NULL) && (g_11 != t)))
                _fail(t);
              else
                g_11 = t;
            }
          else
            {
              ATerm h_11 = NULL,i_11 = NULL;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
              t = not_null(z_10);
              if(((h_11 != NULL) && (h_11 != t)))
                _fail(t);
              else
                h_11 = t;
              t = term_o_5;
              t = STDERR__FILENO_0_0(t);
              if(((i_11 != NULL) && (i_11 != t)))
                _fail(t);
              else
                i_11 = t;
            }
        }
    }
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_t_5;
  return(t);
}
ATerm xtc_new_file_name_0_0 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL;
  t = new_file_0_0(t);
  if(((j_11 != NULL) && (j_11 != t)))
    _fail(t);
  else
    j_11 = t;
  if(((k_11 != NULL) && (k_11 != t)))
    _fail(t);
  else
    k_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_11), term_o_5);
  t = assert_1_0(p_0, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_11));
  return(t);
}
ATerm xtc_cat_0_0 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
  if(((l_11 != NULL) && (l_11 != t)))
    _fail(t);
  else
    l_11 = t;
  if(((m_11 != NULL) && (m_11 != t)))
    _fail(t);
  else
    m_11 = t;
  t = xtc_new_file_name_0_0(t);
  if(((n_11 != NULL) && (n_11 != t)))
    _fail(t);
  else
    n_11 = t;
  t = xtc_open_fd_0_0(t);
  if(((o_11 != NULL) && (o_11 != t)))
    _fail(t);
  else
    o_11 = t;
  t = not_null(l_11);
  {
    ATerm q_0 (ATerm t)
    {
      ATerm r_0 (ATerm t)
      {
        ATerm p_11 = NULL,q_11 = NULL;
        if(((p_11 != NULL) && (p_11 != t)))
          _fail(t);
        else
          p_11 = t;
        if(((q_11 != NULL) && (q_11 != t)))
          _fail(t);
        else
          q_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), not_null(o_11));
        t = fdcopy_0_0(t);
        return(t);
      }
      t = File_as_fd_1_0(r_0, t);
      return(t);
    }
    t = map_1_0(q_0, t);
    t = not_null(o_11);
    t = xtc_close_fd_0_0(t);
    t = not_null(n_11);
  }
  return(t);
}
ATerm print_0_0 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_11 != NULL) && (r_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_11 = ATgetArgument(t, 0);
      if(((s_11 != NULL) && (s_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((t_11 != NULL) && (t_11 != t)))
    _fail(t);
  else
    t_11 = t;
  t = SSL_print(not_null(r_11), not_null(s_11));
  t = not_null(t_11);
  return(t);
}
ATerm print_to_0_0 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
  if(((u_11 != NULL) && (u_11 != t)))
    _fail(t);
  else
    u_11 = t;
  if(((v_11 != NULL) && (v_11 != t)))
    _fail(t);
  else
    v_11 = t;
  t = xtc_new_file_0_0(t);
  if(((w_11 != NULL) && (w_11 != t)))
    _fail(t);
  else
    w_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_11), not_null(u_11));
  t = print_0_0(t);
  t = not_null(w_11);
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_11));
  return(t);
}
ATerm create_footer_0_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_5), term_u_5);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL;
  if(((y_11 != NULL) && (y_11 != t)))
    _fail(t);
  else
    y_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm a_12 = NULL,b_12 = NULL;
      t = not_null(y_11);
      if(((a_12 != NULL) && (a_12 != t)))
        _fail(t);
      else
        a_12 = t;
      t = term_w_5;
      t = ReadFromFile_0_0(t);
      if(((b_12 != NULL) && (b_12 != t)))
        _fail(t);
      else
        b_12 = t;
    }
  else
    {
      ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((z_11 != NULL) && (z_11 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            z_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(z_11);
      if(((c_12 != NULL) && (c_12 != t)))
        _fail(t);
      else
        c_12 = t;
      t = not_null(y_11);
      if(((d_12 != NULL) && (d_12 != t)))
        _fail(t);
      else
        d_12 = t;
      t = not_null(c_12);
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
      if(((e_12 != NULL) && (e_12 != t)))
        _fail(t);
      else
        e_12 = t;
    }
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_5 = ATgetArgument(t, 0);
      if(match_cons(x_5, sym_Stream_1))
        {
          if(((f_12 != NULL) && (f_12 != ATgetArgument(x_5, 0))))
            _fail(ATgetArgument(x_5, 0));
          else
            f_12 = ATgetArgument(x_5, 0);
        }
      else
        _fail(t);
      if(((g_12 != NULL) && (g_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(f_12), not_null(g_12));
  if(((h_12 != NULL) && (h_12 != t)))
    _fail(t);
  else
    h_12 = t;
  if(((i_12 != NULL) && (i_12 != t)))
    _fail(t);
  else
    i_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_12));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm p_91 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_12 != NULL) && (j_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_12 = ATgetArgument(t, 0);
      if(((k_12 != NULL) && (k_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(j_12);
  if(((l_12 != NULL) && (l_12 != t)))
    _fail(t);
  else
    l_12 = t;
  if(((m_12 != NULL) && (m_12 != t)))
    _fail(t);
  else
    m_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_12), term_y_5);
  t = open_stream_0_0(t);
  if(((n_12 != NULL) && (n_12 != t)))
    _fail(t);
  else
    n_12 = t;
  if(((o_12 != NULL) && (o_12 != t)))
    _fail(t);
  else
    o_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_12), not_null(k_12));
  t = p_91(t);
  t = fclose_0_0(t);
  t = not_null(k_12);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
  if(((p_12 != NULL) && (p_12 != t)))
    _fail(t);
  else
    p_12 = t;
  if(((q_12 != NULL) && (q_12 != t)))
    _fail(t);
  else
    q_12 = t;
  t = xtc_new_file_0_0(t);
  if(((r_12 != NULL) && (r_12 != t)))
    _fail(t);
  else
    r_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_12), not_null(p_12));
  t = WriteToBinaryFile_0_0(t);
  t = not_null(r_12);
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_12));
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(y_102, z_102, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL;
  if(((t_12 != NULL) && (t_12 != t)))
    _fail(t);
  else
    t_12 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
      t = not_null(t_12);
      if(((v_12 != NULL) && (v_12 != t)))
        _fail(t);
      else
        v_12 = t;
      t = xtc_new_file_0_0(t);
      if(((w_12 != NULL) && (w_12 != t)))
        _fail(t);
      else
        w_12 = t;
      if(((x_12 != NULL) && (x_12 != t)))
        _fail(t);
      else
        x_12 = t;
      t = m_0(t);
      if(((y_12 != NULL) && (y_12 != t)))
        _fail(t);
      else
        y_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_12), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_12)), term_z_5));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(w_12);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_12));
    }
  else
    {
      ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((u_12 != NULL) && (u_12 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            u_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(u_12);
      if(((z_12 != NULL) && (z_12 != t)))
        _fail(t);
      else
        z_12 = t;
      t = not_null(t_12);
      if(((a_13 != NULL) && (a_13 != t)))
        _fail(t);
      else
        a_13 = t;
      t = not_null(z_12);
      t = xtc_new_file_0_0(t);
      if(((b_13 != NULL) && (b_13 != t)))
        _fail(t);
      else
        b_13 = t;
      if(((c_13 != NULL) && (c_13 != t)))
        _fail(t);
      else
        c_13 = t;
      t = m_0(t);
      if(((d_13 != NULL) && (d_13 != t)))
        _fail(t);
      else
        d_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_13)), term_z_5), not_null(z_12)), term_a_6));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(b_13);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_13));
    }
  return(t);
}
ATerm stdin_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdin_0)))
    _fail(t);
  return(t);
}
ATerm FILE_1_0 (ATerm q_72 (ATerm), ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL;
  if(((h_13 != NULL) && (h_13 != t)))
    _fail(t);
  else
    h_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((f_13 != NULL) && (f_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((i_13 != NULL) && (i_13 != t)))
    _fail(t);
  else
    i_13 = t;
  t = SSLgetAnnotations(not_null(h_13));
  if(((e_13 != NULL) && (e_13 != t)))
    _fail(t);
  else
    e_13 = t;
  t = not_null(f_13);
  t = q_72(t);
  if(((g_13 != NULL) && (g_13 != t)))
    _fail(t);
  else
    g_13 = t;
  if(((k_13 != NULL) && (k_13 != t)))
    _fail(t);
  else
    k_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(g_13)), not_null(e_13));
  if(((j_13 != NULL) && (j_13 != t)))
    _fail(t);
  else
    j_13 = t;
  return(t);
}
ATerm xtc_transform_2_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t)
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
      t = xtc_transform_file_2_0(r_102, s_102, t);
    }
  else
    {
      t = b_6;
      t = xtc_transform_term_2_0(r_102, s_102, t);
    }
  return(t);
}
ATerm month2abbr_0_0 (ATerm t)
{
  ATerm m_13 = NULL;
  if(((m_13 != NULL) && (m_13 != t)))
    _fail(t);
  else
    m_13 = t;
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
  ATerm o_13 = NULL;
  if(((o_13 != NULL) && (o_13 != t)))
    _fail(t);
  else
    o_13 = t;
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
  ATerm q_13 = NULL;
  if(((q_13 != NULL) && (q_13 != t)))
    _fail(t);
  else
    q_13 = t;
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
  ATerm s_13 = NULL;
  if(((s_13 != NULL) && (s_13 != t)))
    _fail(t);
  else
    s_13 = t;
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
ATerm comp_comp_2_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((t_13 != NULL) && (t_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_13 = ATgetArgument(t, 0);
      if(((u_13 != NULL) && (u_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_13 = ATgetArgument(t, 1);
      if(((v_13 != NULL) && (v_13 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        v_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((w_13 != NULL) && (w_13 != t)))
    _fail(t);
  else
    w_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_13), not_null(u_13));
  t = y_86(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_13), not_null(v_13));
  t = z_86(t);
  t = not_null(w_13);
  return(t);
}
ATerm leq_leq_0_0 (ATerm t)
{
  t = comp_comp_2_0(leq_0_0, leq_0_0, t);
  return(t);
}
ATerm while_not_2_0 (ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm t)
{
  ATerm x_13 (ATerm t)
  {
    ATerm s_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_89(t);
        ;
        LocalPopChoice(t_7);
      }
    else
      {
        t = s_7;
        t = u_89(t);
        t = x_13(t);
      }
    return(t);
  }
  t = x_13(t);
  return(t);
}
ATerm for_3_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm t)
{
  t = w_89(t);
  t = while_not_2_0(x_89, y_89, t);
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_13 != NULL) && (y_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_13 = ATgetArgument(t, 0);
      if(((z_13 != NULL) && (z_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(y_13), not_null(z_13), (ATerm) ATempty);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm u_7 = ATgetArgument(t, 0);
      if(((ATgetType(u_7) != AT_INT) || (ATgetInt((ATermInt) u_7) != 0)))
        _fail(t);
      if(((a_14 != NULL) && (a_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_14 = ATgetArgument(t, 1);
      if(((b_14 != NULL) && (b_14 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        b_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(b_14);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((c_14 != NULL) && (c_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_14 = ATgetArgument(t, 0);
      if(((d_14 != NULL) && (d_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_14 = ATgetArgument(t, 1);
      if(((e_14 != NULL) && (e_14 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        e_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((f_14 != NULL) && (f_14 != t)))
    _fail(t);
  else
    f_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_14), term_v_7);
  t = geq_0_0(t);
  t = not_null(f_14);
  if(((g_14 != NULL) && (g_14 != t)))
    _fail(t);
  else
    g_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_14), term_v_7);
  t = subt_0_0(t);
  if(((h_14 != NULL) && (h_14 != t)))
    _fail(t);
  else
    h_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(h_14), not_null(d_14), (ATerm) ATinsert(CheckATermList(not_null(e_14)), not_null(d_14)));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
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
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  if(((i_14 != NULL) && (i_14 != t)))
    _fail(t);
  else
    i_14 = t;
  if(((j_14 != NULL) && (j_14 != t)))
    _fail(t);
  else
    j_14 = t;
  if(((k_14 != NULL) && (k_14 != t)))
    _fail(t);
  else
    k_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_14), term_w_7);
  t = geq_0_0(t);
  t = not_null(i_14);
  return(t);
}
ATerm align_helper_0_0 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,t_14 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((l_14 != NULL) && (l_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_14 = ATgetArgument(t, 0);
      if(((m_14 != NULL) && (m_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_14 = ATgetArgument(t, 1);
      if(((n_14 != NULL) && (n_14 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        n_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((o_14 != NULL) && (o_14 != t)))
    _fail(t);
  else
    o_14 = t;
  t = not_null(m_14);
  t = string_length_0_0(t);
  if(((p_14 != NULL) && (p_14 != t)))
    _fail(t);
  else
    p_14 = t;
  if(((q_14 != NULL) && (q_14 != t)))
    _fail(t);
  else
    q_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), not_null(q_14));
  t = subt_0_0(t);
  {
    ATerm x_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pos_0_0(t);
        LocalPopChoice(y_7);
        {
          ATerm r_14 = NULL,s_14 = NULL;
          if(((r_14 != NULL) && (r_14 != t)))
            _fail(t);
          else
            r_14 = t;
          if(((s_14 != NULL) && (s_14 != t)))
            _fail(t);
          else
            s_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_14), not_null(l_14));
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = x_7;
        t = term_z_7;
      }
    if(((t_14 != NULL) && (t_14 != t)))
      _fail(t);
    else
      t_14 = t;
  }
  return(t);
}
ATerm align_right_0_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((u_14 != NULL) && (u_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_14 = ATgetArgument(t, 0);
      if(((v_14 != NULL) && (v_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_14 = ATgetArgument(t, 1);
      if(((w_14 != NULL) && (w_14 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        w_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((x_14 != NULL) && (x_14 != t)))
    _fail(t);
  else
    x_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(u_14), not_null(v_14), not_null(w_14));
  t = align_helper_0_0(t);
  if(((y_14 != NULL) && (y_14 != t)))
    _fail(t);
  else
    y_14 = t;
  t = not_null(x_14);
  if(((z_14 != NULL) && (z_14 != t)))
    _fail(t);
  else
    z_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_14), not_null(v_14));
  t = conc_strings_0_0(t);
  if(((a_15 != NULL) && (a_15 != t)))
    _fail(t);
  else
    a_15 = t;
  return(t);
}
ATerm foldr_3_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm t)
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = x_85(t);
      ;
      LocalPopChoice(b_8);
    }
  else
    {
      t = a_8;
      {
        ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL;
        if(((c_15 != NULL) && (c_15 != t)))
          _fail(t);
        else
          c_15 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((d_15 != NULL) && (d_15 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              d_15 = ATgetFirst((ATermList) t);
            if(((e_15 != NULL) && (e_15 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              e_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(d_15);
        if(((f_15 != NULL) && (f_15 != t)))
          _fail(t);
        else
          f_15 = t;
        t = not_null(e_15);
        if(((g_15 != NULL) && (g_15 != t)))
          _fail(t);
        else
          g_15 = t;
        t = not_null(c_15);
        if(((h_15 != NULL) && (h_15 != t)))
          _fail(t);
        else
          h_15 = t;
        if(((i_15 != NULL) && (i_15 != t)))
          _fail(t);
        else
          i_15 = t;
        t = not_null(f_15);
        t = z_85(t);
        if(((j_15 != NULL) && (j_15 != t)))
          _fail(t);
        else
          j_15 = t;
        t = not_null(i_15);
        if(((k_15 != NULL) && (k_15 != t)))
          _fail(t);
        else
          k_15 = t;
        t = not_null(g_15);
        t = foldr_3_0(x_85, y_85, z_85, t);
        if(((l_15 != NULL) && (l_15 != t)))
          _fail(t);
        else
          l_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), not_null(l_15));
        t = y_85(t);
        if(((m_15 != NULL) && (m_15 != t)))
          _fail(t);
        else
          m_15 = t;
      }
    }
  return(t);
}
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
ATerm length_0_0 (ATerm t)
{
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
  ATerm n_15 = NULL,o_15 = NULL;
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
  t = SSL_mod(not_null(n_15), not_null(o_15));
  return(t);
}
ATerm inc_0_0 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL;
  if(((p_15 != NULL) && (p_15 != t)))
    _fail(t);
  else
    p_15 = t;
  if(((q_15 != NULL) && (q_15 != t)))
    _fail(t);
  else
    q_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_15), term_v_7);
  t = add_0_0(t);
  return(t);
}
ATerm month2index_0_0 (ATerm t)
{
  ATerm s_15 = NULL;
  if(((s_15 != NULL) && (s_15 != t)))
    _fail(t);
  else
    s_15 = t;
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
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  if(((d_17 != NULL) && (d_17 != t)))
    _fail(t);
  else
    d_17 = t;
  if(match_cons(t, sym__2))
    {
      if(((e_17 != NULL) && (e_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_17 = ATgetArgument(t, 0);
      if(((f_17 != NULL) && (f_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(e_17);
  if(match_string(t, "ss"))
    {
      ATerm m_17 = NULL;
      t = not_null(f_17);
      if(match_cons(t, sym_ComponentTime_3))
        {
          if(((g_17 != NULL) && (g_17 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            g_17 = ATgetArgument(t, 0);
          if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_17 = ATgetArgument(t, 1);
          if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            l_17 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(k_17);
      if(match_cons(t, sym_DayTime_3))
        {
          if(((y_16 != NULL) && (y_16 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            y_16 = ATgetArgument(t, 0);
          if(((z_16 != NULL) && (z_16 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_16 = ATgetArgument(t, 1);
          if(((a_17 != NULL) && (a_17 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            a_17 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(a_17);
      if(((m_17 != NULL) && (m_17 != t)))
        _fail(t);
      else
        m_17 = t;
    }
  else
    {
      if(match_string(t, "mm"))
        {
          ATerm n_17 = NULL;
          t = not_null(f_17);
          if(match_cons(t, sym_ComponentTime_3))
            {
              if(((g_17 != NULL) && (g_17 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_17 = ATgetArgument(t, 0);
              if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                k_17 = ATgetArgument(t, 1);
              if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                l_17 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = not_null(k_17);
          if(match_cons(t, sym_DayTime_3))
            {
              if(((y_16 != NULL) && (y_16 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_16 = ATgetArgument(t, 0);
              if(((z_16 != NULL) && (z_16 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                z_16 = ATgetArgument(t, 1);
              if(((a_17 != NULL) && (a_17 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                a_17 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = not_null(z_16);
          if(((n_17 != NULL) && (n_17 != t)))
            _fail(t);
          else
            n_17 = t;
        }
      else
        {
          if(match_string(t, "KK"))
            {
              t = not_null(f_17);
              if(match_cons(t, sym_ComponentTime_3))
                {
                  if(((g_17 != NULL) && (g_17 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    g_17 = ATgetArgument(t, 0);
                  if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    k_17 = ATgetArgument(t, 1);
                  if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    l_17 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = not_null(k_17);
              if(match_cons(t, sym_DayTime_3))
                {
                  if(((y_16 != NULL) && (y_16 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    y_16 = ATgetArgument(t, 0);
                  if(((z_16 != NULL) && (z_16 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    z_16 = ATgetArgument(t, 1);
                  if(((a_17 != NULL) && (a_17 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    a_17 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              {
                ATerm m_8 = t;
                int n_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
                    t = not_null(y_16);
                    if(((o_17 != NULL) && (o_17 != t)))
                      _fail(t);
                    else
                      o_17 = t;
                    t = not_null(d_17);
                    if(((p_17 != NULL) && (p_17 != t)))
                      _fail(t);
                    else
                      p_17 = t;
                    t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(o_17), term_p_8);
                    t = leq_leq_0_0(t);
                    t = not_null(p_17);
                    if(((q_17 != NULL) && (q_17 != t)))
                      _fail(t);
                    else
                      q_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_17), term_o_8);
                    t = subt_0_0(t);
                    if(((r_17 != NULL) && (r_17 != t)))
                      _fail(t);
                    else
                      r_17 = t;
                    ;
                    LocalPopChoice(n_8);
                  }
                else
                  {
                    t = m_8;
                    {
                      ATerm s_17 = NULL,t_17 = NULL;
                      t = not_null(y_16);
                      if(((s_17 != NULL) && (s_17 != t)))
                        _fail(t);
                      else
                        s_17 = t;
                      t = not_null(d_17);
                      if(((t_17 != NULL) && (t_17 != t)))
                        _fail(t);
                      else
                        t_17 = t;
                      t = (ATerm) ATmakeAppl(sym__3, term_w_7, not_null(s_17), term_o_8);
                      t = leq_lt_0_0(t);
                      t = not_null(s_17);
                    }
                  }
              }
            }
          else
            {
              if(match_string(t, "hh"))
                {
                  t = not_null(f_17);
                  if(match_cons(t, sym_ComponentTime_3))
                    {
                      if(((g_17 != NULL) && (g_17 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        g_17 = ATgetArgument(t, 0);
                      if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 1))))
                        _fail(ATgetArgument(t, 1));
                      else
                        k_17 = ATgetArgument(t, 1);
                      if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 2))))
                        _fail(ATgetArgument(t, 2));
                      else
                        l_17 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = not_null(k_17);
                  if(match_cons(t, sym_DayTime_3))
                    {
                      if(((y_16 != NULL) && (y_16 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_16 = ATgetArgument(t, 0);
                      if(((z_16 != NULL) && (z_16 != ATgetArgument(t, 1))))
                        _fail(ATgetArgument(t, 1));
                      else
                        z_16 = ATgetArgument(t, 1);
                      if(((a_17 != NULL) && (a_17 != ATgetArgument(t, 2))))
                        _fail(ATgetArgument(t, 2));
                      else
                        a_17 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = not_null(y_16);
                  if(match_int(t, 0))
                    {
                      ATerm q_8 = t;
                      int r_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
                          t = not_null(y_16);
                          if(((u_17 != NULL) && (u_17 != t)))
                            _fail(t);
                          else
                            u_17 = t;
                          t = not_null(d_17);
                          if(((v_17 != NULL) && (v_17 != t)))
                            _fail(t);
                          else
                            v_17 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(u_17), term_p_8);
                          t = leq_leq_0_0(t);
                          t = not_null(v_17);
                          if(((w_17 != NULL) && (w_17 != t)))
                            _fail(t);
                          else
                            w_17 = t;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), term_o_8);
                          t = subt_0_0(t);
                          if(((x_17 != NULL) && (x_17 != t)))
                            _fail(t);
                          else
                            x_17 = t;
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
                                ATerm y_17 = NULL,z_17 = NULL;
                                t = not_null(y_16);
                                if(((y_17 != NULL) && (y_17 != t)))
                                  _fail(t);
                                else
                                  y_17 = t;
                                t = not_null(d_17);
                                if(((z_17 != NULL) && (z_17 != t)))
                                  _fail(t);
                                else
                                  z_17 = t;
                                t = (ATerm) ATmakeAppl(sym__3, term_v_7, not_null(y_17), term_o_8);
                                t = leq_leq_0_0(t);
                                t = not_null(y_17);
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
                      ATerm u_8 = t;
                      int v_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL;
                          t = not_null(y_16);
                          if(((a_18 != NULL) && (a_18 != t)))
                            _fail(t);
                          else
                            a_18 = t;
                          t = not_null(d_17);
                          if(((b_18 != NULL) && (b_18 != t)))
                            _fail(t);
                          else
                            b_18 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(a_18), term_p_8);
                          t = leq_leq_0_0(t);
                          t = not_null(b_18);
                          if(((c_18 != NULL) && (c_18 != t)))
                            _fail(t);
                          else
                            c_18 = t;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_18), term_o_8);
                          t = subt_0_0(t);
                          if(((d_18 != NULL) && (d_18 != t)))
                            _fail(t);
                          else
                            d_18 = t;
                          ;
                          LocalPopChoice(v_8);
                        }
                      else
                        {
                          t = u_8;
                          {
                            ATerm e_18 = NULL,f_18 = NULL;
                            t = not_null(y_16);
                            if(((e_18 != NULL) && (e_18 != t)))
                              _fail(t);
                            else
                              e_18 = t;
                            t = not_null(d_17);
                            if(((f_18 != NULL) && (f_18 != t)))
                              _fail(t);
                            else
                              f_18 = t;
                            t = (ATerm) ATmakeAppl(sym__3, term_v_7, not_null(e_18), term_o_8);
                            t = leq_leq_0_0(t);
                            t = not_null(e_18);
                          }
                        }
                    }
                }
              else
                {
                  if(match_string(t, "kk"))
                    {
                      ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL;
                      t = not_null(f_17);
                      if(match_cons(t, sym_ComponentTime_3))
                        {
                          if(((g_17 != NULL) && (g_17 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            g_17 = ATgetArgument(t, 0);
                          if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            k_17 = ATgetArgument(t, 1);
                          if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 2))))
                            _fail(ATgetArgument(t, 2));
                          else
                            l_17 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = not_null(k_17);
                      if(match_cons(t, sym_DayTime_3))
                        {
                          if(((y_16 != NULL) && (y_16 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            y_16 = ATgetArgument(t, 0);
                          if(((z_16 != NULL) && (z_16 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            z_16 = ATgetArgument(t, 1);
                          if(((a_17 != NULL) && (a_17 != ATgetArgument(t, 2))))
                            _fail(ATgetArgument(t, 2));
                          else
                            a_17 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = not_null(y_16);
                      if(((g_18 != NULL) && (g_18 != t)))
                        _fail(t);
                      else
                        g_18 = t;
                      t = not_null(d_17);
                      if(((h_18 != NULL) && (h_18 != t)))
                        _fail(t);
                      else
                        h_18 = t;
                      t = not_null(g_18);
                      t = inc_0_0(t);
                      if(((i_18 != NULL) && (i_18 != t)))
                        _fail(t);
                      else
                        i_18 = t;
                    }
                  else
                    {
                      if(match_string(t, "HH"))
                        {
                          ATerm j_18 = NULL;
                          t = not_null(f_17);
                          if(match_cons(t, sym_ComponentTime_3))
                            {
                              if(((g_17 != NULL) && (g_17 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                g_17 = ATgetArgument(t, 0);
                              if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                k_17 = ATgetArgument(t, 1);
                              if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 2))))
                                _fail(ATgetArgument(t, 2));
                              else
                                l_17 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = not_null(k_17);
                          if(match_cons(t, sym_DayTime_3))
                            {
                              if(((y_16 != NULL) && (y_16 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                y_16 = ATgetArgument(t, 0);
                              if(((z_16 != NULL) && (z_16 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                z_16 = ATgetArgument(t, 1);
                              if(((a_17 != NULL) && (a_17 != ATgetArgument(t, 2))))
                                _fail(ATgetArgument(t, 2));
                              else
                                a_17 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = not_null(y_16);
                          if(((j_18 != NULL) && (j_18 != t)))
                            _fail(t);
                          else
                            j_18 = t;
                        }
                      else
                        {
                          if(match_string(t, "DD"))
                            {
                              ATerm k_18 = NULL;
                              t = not_null(f_17);
                              if(match_cons(t, sym_ComponentTime_3))
                                {
                                  if(((g_17 != NULL) && (g_17 != ATgetArgument(t, 0))))
                                    _fail(ATgetArgument(t, 0));
                                  else
                                    g_17 = ATgetArgument(t, 0);
                                  if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 1))))
                                    _fail(ATgetArgument(t, 1));
                                  else
                                    k_17 = ATgetArgument(t, 1);
                                  if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 2))))
                                    _fail(ATgetArgument(t, 2));
                                  else
                                    l_17 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = not_null(l_17);
                              if(match_cons(t, sym_Dupl_2))
                                {
                                  if(((b_17 != NULL) && (b_17 != ATgetArgument(t, 0))))
                                    _fail(ATgetArgument(t, 0));
                                  else
                                    b_17 = ATgetArgument(t, 0);
                                  if(((c_17 != NULL) && (c_17 != ATgetArgument(t, 1))))
                                    _fail(ATgetArgument(t, 1));
                                  else
                                    c_17 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = not_null(c_17);
                              if(((k_18 != NULL) && (k_18 != t)))
                                _fail(t);
                              else
                                k_18 = t;
                            }
                          else
                            {
                              if(match_string(t, "D"))
                                {
                                  ATerm l_18 = NULL;
                                  t = not_null(f_17);
                                  if(match_cons(t, sym_ComponentTime_3))
                                    {
                                      if(((g_17 != NULL) && (g_17 != ATgetArgument(t, 0))))
                                        _fail(ATgetArgument(t, 0));
                                      else
                                        g_17 = ATgetArgument(t, 0);
                                      if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 1))))
                                        _fail(ATgetArgument(t, 1));
                                      else
                                        k_17 = ATgetArgument(t, 1);
                                      if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 2))))
                                        _fail(ATgetArgument(t, 2));
                                      else
                                        l_17 = ATgetArgument(t, 2);
                                    }
                                  else
                                    _fail(t);
                                  t = not_null(l_17);
                                  if(match_cons(t, sym_Dupl_2))
                                    {
                                      if(((b_17 != NULL) && (b_17 != ATgetArgument(t, 0))))
                                        _fail(ATgetArgument(t, 0));
                                      else
                                        b_17 = ATgetArgument(t, 0);
                                      if(((c_17 != NULL) && (c_17 != ATgetArgument(t, 1))))
                                        _fail(ATgetArgument(t, 1));
                                      else
                                        c_17 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = not_null(c_17);
                                  if(((l_18 != NULL) && (l_18 != t)))
                                    _fail(t);
                                  else
                                    l_18 = t;
                                }
                              else
                                {
                                  if(match_string(t, "dd"))
                                    {
                                      ATerm m_18 = NULL;
                                      t = not_null(f_17);
                                      if(match_cons(t, sym_ComponentTime_3))
                                        {
                                          if(((g_17 != NULL) && (g_17 != ATgetArgument(t, 0))))
                                            _fail(ATgetArgument(t, 0));
                                          else
                                            g_17 = ATgetArgument(t, 0);
                                          if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 1))))
                                            _fail(ATgetArgument(t, 1));
                                          else
                                            k_17 = ATgetArgument(t, 1);
                                          if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 2))))
                                            _fail(ATgetArgument(t, 2));
                                          else
                                            l_17 = ATgetArgument(t, 2);
                                        }
                                      else
                                        _fail(t);
                                      t = not_null(g_17);
                                      if(match_cons(t, sym_Date_3))
                                        {
                                          if(((h_17 != NULL) && (h_17 != ATgetArgument(t, 0))))
                                            _fail(ATgetArgument(t, 0));
                                          else
                                            h_17 = ATgetArgument(t, 0);
                                          if(((i_17 != NULL) && (i_17 != ATgetArgument(t, 1))))
                                            _fail(ATgetArgument(t, 1));
                                          else
                                            i_17 = ATgetArgument(t, 1);
                                          if(((j_17 != NULL) && (j_17 != ATgetArgument(t, 2))))
                                            _fail(ATgetArgument(t, 2));
                                          else
                                            j_17 = ATgetArgument(t, 2);
                                        }
                                      else
                                        _fail(t);
                                      t = not_null(j_17);
                                      if(((m_18 != NULL) && (m_18 != t)))
                                        _fail(t);
                                      else
                                        m_18 = t;
                                    }
                                  else
                                    {
                                      if(match_string(t, "d"))
                                        {
                                          ATerm n_18 = NULL;
                                          t = not_null(f_17);
                                          if(match_cons(t, sym_ComponentTime_3))
                                            {
                                              if(((g_17 != NULL) && (g_17 != ATgetArgument(t, 0))))
                                                _fail(ATgetArgument(t, 0));
                                              else
                                                g_17 = ATgetArgument(t, 0);
                                              if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 1))))
                                                _fail(ATgetArgument(t, 1));
                                              else
                                                k_17 = ATgetArgument(t, 1);
                                              if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 2))))
                                                _fail(ATgetArgument(t, 2));
                                              else
                                                l_17 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          t = not_null(g_17);
                                          if(match_cons(t, sym_Date_3))
                                            {
                                              if(((h_17 != NULL) && (h_17 != ATgetArgument(t, 0))))
                                                _fail(ATgetArgument(t, 0));
                                              else
                                                h_17 = ATgetArgument(t, 0);
                                              if(((i_17 != NULL) && (i_17 != ATgetArgument(t, 1))))
                                                _fail(ATgetArgument(t, 1));
                                              else
                                                i_17 = ATgetArgument(t, 1);
                                              if(((j_17 != NULL) && (j_17 != ATgetArgument(t, 2))))
                                                _fail(ATgetArgument(t, 2));
                                              else
                                                j_17 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          t = not_null(j_17);
                                          if(((n_18 != NULL) && (n_18 != t)))
                                            _fail(t);
                                          else
                                            n_18 = t;
                                        }
                                      else
                                        {
                                          if(match_string(t, "MM"))
                                            {
                                              ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
                                              t = not_null(f_17);
                                              if(match_cons(t, sym_ComponentTime_3))
                                                {
                                                  if(((g_17 != NULL) && (g_17 != ATgetArgument(t, 0))))
                                                    _fail(ATgetArgument(t, 0));
                                                  else
                                                    g_17 = ATgetArgument(t, 0);
                                                  if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 1))))
                                                    _fail(ATgetArgument(t, 1));
                                                  else
                                                    k_17 = ATgetArgument(t, 1);
                                                  if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 2))))
                                                    _fail(ATgetArgument(t, 2));
                                                  else
                                                    l_17 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = not_null(g_17);
                                              if(match_cons(t, sym_Date_3))
                                                {
                                                  if(((h_17 != NULL) && (h_17 != ATgetArgument(t, 0))))
                                                    _fail(ATgetArgument(t, 0));
                                                  else
                                                    h_17 = ATgetArgument(t, 0);
                                                  if(((i_17 != NULL) && (i_17 != ATgetArgument(t, 1))))
                                                    _fail(ATgetArgument(t, 1));
                                                  else
                                                    i_17 = ATgetArgument(t, 1);
                                                  if(((j_17 != NULL) && (j_17 != ATgetArgument(t, 2))))
                                                    _fail(ATgetArgument(t, 2));
                                                  else
                                                    j_17 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = not_null(i_17);
                                              if(((o_18 != NULL) && (o_18 != t)))
                                                _fail(t);
                                              else
                                                o_18 = t;
                                              t = not_null(d_17);
                                              if(((p_18 != NULL) && (p_18 != t)))
                                                _fail(t);
                                              else
                                                p_18 = t;
                                              t = not_null(o_18);
                                              t = month2index_0_0(t);
                                              t = inc_0_0(t);
                                              if(((q_18 != NULL) && (q_18 != t)))
                                                _fail(t);
                                              else
                                                q_18 = t;
                                            }
                                          else
                                            {
                                              if(match_string(t, "M"))
                                                {
                                                  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
                                                  t = not_null(f_17);
                                                  if(match_cons(t, sym_ComponentTime_3))
                                                    {
                                                      if(((g_17 != NULL) && (g_17 != ATgetArgument(t, 0))))
                                                        _fail(ATgetArgument(t, 0));
                                                      else
                                                        g_17 = ATgetArgument(t, 0);
                                                      if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 1))))
                                                        _fail(ATgetArgument(t, 1));
                                                      else
                                                        k_17 = ATgetArgument(t, 1);
                                                      if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 2))))
                                                        _fail(ATgetArgument(t, 2));
                                                      else
                                                        l_17 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = not_null(g_17);
                                                  if(match_cons(t, sym_Date_3))
                                                    {
                                                      if(((h_17 != NULL) && (h_17 != ATgetArgument(t, 0))))
                                                        _fail(ATgetArgument(t, 0));
                                                      else
                                                        h_17 = ATgetArgument(t, 0);
                                                      if(((i_17 != NULL) && (i_17 != ATgetArgument(t, 1))))
                                                        _fail(ATgetArgument(t, 1));
                                                      else
                                                        i_17 = ATgetArgument(t, 1);
                                                      if(((j_17 != NULL) && (j_17 != ATgetArgument(t, 2))))
                                                        _fail(ATgetArgument(t, 2));
                                                      else
                                                        j_17 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = not_null(i_17);
                                                  if(((r_18 != NULL) && (r_18 != t)))
                                                    _fail(t);
                                                  else
                                                    r_18 = t;
                                                  t = not_null(d_17);
                                                  if(((s_18 != NULL) && (s_18 != t)))
                                                    _fail(t);
                                                  else
                                                    s_18 = t;
                                                  t = not_null(r_18);
                                                  t = month2index_0_0(t);
                                                  t = inc_0_0(t);
                                                  if(((t_18 != NULL) && (t_18 != t)))
                                                    _fail(t);
                                                  else
                                                    t_18 = t;
                                                }
                                              else
                                                {
                                                  if(match_string(t, "yy"))
                                                    {
                                                      ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
                                                      t = not_null(f_17);
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          if(((g_17 != NULL) && (g_17 != ATgetArgument(t, 0))))
                                                            _fail(ATgetArgument(t, 0));
                                                          else
                                                            g_17 = ATgetArgument(t, 0);
                                                          if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 1))))
                                                            _fail(ATgetArgument(t, 1));
                                                          else
                                                            k_17 = ATgetArgument(t, 1);
                                                          if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 2))))
                                                            _fail(ATgetArgument(t, 2));
                                                          else
                                                            l_17 = ATgetArgument(t, 2);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = not_null(g_17);
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          if(((h_17 != NULL) && (h_17 != ATgetArgument(t, 0))))
                                                            _fail(ATgetArgument(t, 0));
                                                          else
                                                            h_17 = ATgetArgument(t, 0);
                                                          if(((i_17 != NULL) && (i_17 != ATgetArgument(t, 1))))
                                                            _fail(ATgetArgument(t, 1));
                                                          else
                                                            i_17 = ATgetArgument(t, 1);
                                                          if(((j_17 != NULL) && (j_17 != ATgetArgument(t, 2))))
                                                            _fail(ATgetArgument(t, 2));
                                                          else
                                                            j_17 = ATgetArgument(t, 2);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = not_null(h_17);
                                                      if(((u_18 != NULL) && (u_18 != t)))
                                                        _fail(t);
                                                      else
                                                        u_18 = t;
                                                      t = not_null(d_17);
                                                      if(((v_18 != NULL) && (v_18 != t)))
                                                        _fail(t);
                                                      else
                                                        v_18 = t;
                                                      t = not_null(u_18);
                                                      if(((w_18 != NULL) && (w_18 != t)))
                                                        _fail(t);
                                                      else
                                                        w_18 = t;
                                                      if(((x_18 != NULL) && (x_18 != t)))
                                                        _fail(t);
                                                      else
                                                        x_18 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_18), term_w_8);
                                                      t = mod_0_0(t);
                                                      if(((y_18 != NULL) && (y_18 != t)))
                                                        _fail(t);
                                                      else
                                                        y_18 = t;
                                                    }
                                                  else
                                                    {
                                                      ATerm z_18 = NULL;
                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("yyyy", 0, ATtrue)))
                                                        _fail(t);
                                                      t = not_null(f_17);
                                                      if(match_cons(t, sym_ComponentTime_3))
                                                        {
                                                          if(((g_17 != NULL) && (g_17 != ATgetArgument(t, 0))))
                                                            _fail(ATgetArgument(t, 0));
                                                          else
                                                            g_17 = ATgetArgument(t, 0);
                                                          if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 1))))
                                                            _fail(ATgetArgument(t, 1));
                                                          else
                                                            k_17 = ATgetArgument(t, 1);
                                                          if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 2))))
                                                            _fail(ATgetArgument(t, 2));
                                                          else
                                                            l_17 = ATgetArgument(t, 2);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = not_null(g_17);
                                                      if(match_cons(t, sym_Date_3))
                                                        {
                                                          if(((h_17 != NULL) && (h_17 != ATgetArgument(t, 0))))
                                                            _fail(ATgetArgument(t, 0));
                                                          else
                                                            h_17 = ATgetArgument(t, 0);
                                                          if(((i_17 != NULL) && (i_17 != ATgetArgument(t, 1))))
                                                            _fail(ATgetArgument(t, 1));
                                                          else
                                                            i_17 = ATgetArgument(t, 1);
                                                          if(((j_17 != NULL) && (j_17 != ATgetArgument(t, 2))))
                                                            _fail(ATgetArgument(t, 2));
                                                          else
                                                            j_17 = ATgetArgument(t, 2);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = not_null(h_17);
                                                      if(((z_18 != NULL) && (z_18 != t)))
                                                        _fail(t);
                                                      else
                                                        z_18 = t;
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
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
  if(((x_19 != NULL) && (x_19 != t)))
    _fail(t);
  else
    x_19 = t;
  if(match_cons(t, sym__2))
    {
      if(((y_19 != NULL) && (y_19 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_19 = ATgetArgument(t, 0);
      if(((z_19 != NULL) && (z_19 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(z_19);
  if(match_cons(t, sym_ComponentTime_3))
    {
      a_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
      f_20 = ATgetArgument(t, 2);
      t = not_null(f_20);
      if(match_cons(t, sym_Dupl_2))
        {
          v_19 = ATgetArgument(t, 0);
          w_19 = ATgetArgument(t, 1);
          t = not_null(e_20);
          if(match_cons(t, sym_DayTime_3))
            {
              s_19 = ATgetArgument(t, 0);
              t_19 = ATgetArgument(t, 1);
              u_19 = ATgetArgument(t, 2);
              t = not_null(a_20);
              if(match_cons(t, sym_Date_3))
                {
                  b_20 = ATgetArgument(t, 0);
                  c_20 = ATgetArgument(t, 1);
                  d_20 = ATgetArgument(t, 2);
                  t = not_null(y_19);
                  if(match_string(t, "a"))
                    {
                      ATerm x_8 = t;
                      int y_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
                          t = not_null(y_19);
                          if(((g_20 != NULL) && (g_20 != t)))
                            _fail(t);
                          else
                            g_20 = t;
                          t = not_null(x_19);
                          t = date_pattern_to_int_0_0(t);
                          if(((h_20 != NULL) && (h_20 != t)))
                            _fail(t);
                          else
                            h_20 = t;
                          t = int_to_string_0_0(t);
                          if(((i_20 != NULL) && (i_20 != t)))
                            _fail(t);
                          else
                            i_20 = t;
                          t = not_null(h_20);
                          if(((j_20 != NULL) && (j_20 != t)))
                            _fail(t);
                          else
                            j_20 = t;
                          t = not_null(g_20);
                          t = string_length_0_0(t);
                          if(((k_20 != NULL) && (k_20 != t)))
                            _fail(t);
                          else
                            k_20 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(i_20), not_null(k_20));
                          t = align_right_0_0(t);
                          ;
                          LocalPopChoice(y_8);
                        }
                      else
                        {
                          t = x_8;
                          {
                            ATerm a_9 = t;
                            int b_9 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_20 = NULL,m_20 = NULL;
                                t = not_null(s_19);
                                if(((l_20 != NULL) && (l_20 != t)))
                                  _fail(t);
                                else
                                  l_20 = t;
                                t = not_null(x_19);
                                if(((m_20 != NULL) && (m_20 != t)))
                                  _fail(t);
                                else
                                  m_20 = t;
                                t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(l_20), term_p_8);
                                t = leq_leq_0_0(t);
                                t = term_c_9;
                                ;
                                LocalPopChoice(b_9);
                              }
                            else
                              {
                                t = a_9;
                                {
                                  ATerm n_20 = NULL,o_20 = NULL;
                                  t = not_null(s_19);
                                  if(((n_20 != NULL) && (n_20 != t)))
                                    _fail(t);
                                  else
                                    n_20 = t;
                                  t = not_null(x_19);
                                  if(((o_20 != NULL) && (o_20 != t)))
                                    _fail(t);
                                  else
                                    o_20 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_w_7, not_null(n_20), term_o_8);
                                  t = leq_lt_0_0(t);
                                  t = term_d_9;
                                }
                              }
                          }
                        }
                    }
                  else
                    {
                      if(match_string(t, "EEEE"))
                        {
                          ATerm e_9 = t;
                          int f_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
                              t = not_null(y_19);
                              if(((p_20 != NULL) && (p_20 != t)))
                                _fail(t);
                              else
                                p_20 = t;
                              t = not_null(x_19);
                              t = date_pattern_to_int_0_0(t);
                              if(((q_20 != NULL) && (q_20 != t)))
                                _fail(t);
                              else
                                q_20 = t;
                              t = int_to_string_0_0(t);
                              if(((r_20 != NULL) && (r_20 != t)))
                                _fail(t);
                              else
                                r_20 = t;
                              t = not_null(q_20);
                              if(((s_20 != NULL) && (s_20 != t)))
                                _fail(t);
                              else
                                s_20 = t;
                              t = not_null(p_20);
                              t = string_length_0_0(t);
                              if(((t_20 != NULL) && (t_20 != t)))
                                _fail(t);
                              else
                                t_20 = t;
                              t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(r_20), not_null(t_20));
                              t = align_right_0_0(t);
                              ;
                              LocalPopChoice(f_9);
                            }
                          else
                            {
                              t = e_9;
                              {
                                ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
                                t = not_null(v_19);
                                if(((u_20 != NULL) && (u_20 != t)))
                                  _fail(t);
                                else
                                  u_20 = t;
                                t = not_null(x_19);
                                if(((v_20 != NULL) && (v_20 != t)))
                                  _fail(t);
                                else
                                  v_20 = t;
                                t = not_null(u_20);
                                t = day_of_week2text_0_0(t);
                                if(((w_20 != NULL) && (w_20 != t)))
                                  _fail(t);
                                else
                                  w_20 = t;
                              }
                            }
                        }
                      else
                        {
                          if(match_string(t, "EEE"))
                            {
                              ATerm g_9 = t;
                              int h_9 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
                                  t = not_null(y_19);
                                  if(((x_20 != NULL) && (x_20 != t)))
                                    _fail(t);
                                  else
                                    x_20 = t;
                                  t = not_null(x_19);
                                  t = date_pattern_to_int_0_0(t);
                                  if(((y_20 != NULL) && (y_20 != t)))
                                    _fail(t);
                                  else
                                    y_20 = t;
                                  t = int_to_string_0_0(t);
                                  if(((z_20 != NULL) && (z_20 != t)))
                                    _fail(t);
                                  else
                                    z_20 = t;
                                  t = not_null(y_20);
                                  if(((a_21 != NULL) && (a_21 != t)))
                                    _fail(t);
                                  else
                                    a_21 = t;
                                  t = not_null(x_20);
                                  t = string_length_0_0(t);
                                  if(((b_21 != NULL) && (b_21 != t)))
                                    _fail(t);
                                  else
                                    b_21 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(z_20), not_null(b_21));
                                  t = align_right_0_0(t);
                                  ;
                                  LocalPopChoice(h_9);
                                }
                              else
                                {
                                  t = g_9;
                                  {
                                    ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
                                    t = not_null(v_19);
                                    if(((c_21 != NULL) && (c_21 != t)))
                                      _fail(t);
                                    else
                                      c_21 = t;
                                    t = not_null(x_19);
                                    if(((d_21 != NULL) && (d_21 != t)))
                                      _fail(t);
                                    else
                                      d_21 = t;
                                    t = not_null(c_21);
                                    t = day_of_week2abbr_0_0(t);
                                    if(((e_21 != NULL) && (e_21 != t)))
                                      _fail(t);
                                    else
                                      e_21 = t;
                                  }
                                }
                            }
                          else
                            {
                              if(match_string(t, "MMMM"))
                                {
                                  ATerm i_9 = t;
                                  int j_9 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
                                      t = not_null(y_19);
                                      if(((f_21 != NULL) && (f_21 != t)))
                                        _fail(t);
                                      else
                                        f_21 = t;
                                      t = not_null(x_19);
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
                                      t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(h_21), not_null(j_21));
                                      t = align_right_0_0(t);
                                      ;
                                      LocalPopChoice(j_9);
                                    }
                                  else
                                    {
                                      t = i_9;
                                      {
                                        ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
                                        t = not_null(c_20);
                                        if(((k_21 != NULL) && (k_21 != t)))
                                          _fail(t);
                                        else
                                          k_21 = t;
                                        t = not_null(x_19);
                                        if(((l_21 != NULL) && (l_21 != t)))
                                          _fail(t);
                                        else
                                          l_21 = t;
                                        t = not_null(k_21);
                                        t = month2text_0_0(t);
                                        if(((m_21 != NULL) && (m_21 != t)))
                                          _fail(t);
                                        else
                                          m_21 = t;
                                      }
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "MMM"))
                                    {
                                      ATerm k_9 = t;
                                      int l_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
                                          t = not_null(y_19);
                                          if(((n_21 != NULL) && (n_21 != t)))
                                            _fail(t);
                                          else
                                            n_21 = t;
                                          t = not_null(x_19);
                                          t = date_pattern_to_int_0_0(t);
                                          if(((o_21 != NULL) && (o_21 != t)))
                                            _fail(t);
                                          else
                                            o_21 = t;
                                          t = int_to_string_0_0(t);
                                          if(((p_21 != NULL) && (p_21 != t)))
                                            _fail(t);
                                          else
                                            p_21 = t;
                                          t = not_null(o_21);
                                          if(((q_21 != NULL) && (q_21 != t)))
                                            _fail(t);
                                          else
                                            q_21 = t;
                                          t = not_null(n_21);
                                          t = string_length_0_0(t);
                                          if(((r_21 != NULL) && (r_21 != t)))
                                            _fail(t);
                                          else
                                            r_21 = t;
                                          t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(p_21), not_null(r_21));
                                          t = align_right_0_0(t);
                                          ;
                                          LocalPopChoice(l_9);
                                        }
                                      else
                                        {
                                          t = k_9;
                                          {
                                            ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
                                            t = not_null(c_20);
                                            if(((s_21 != NULL) && (s_21 != t)))
                                              _fail(t);
                                            else
                                              s_21 = t;
                                            t = not_null(x_19);
                                            if(((t_21 != NULL) && (t_21 != t)))
                                              _fail(t);
                                            else
                                              t_21 = t;
                                            t = not_null(s_21);
                                            t = month2abbr_0_0(t);
                                            if(((u_21 != NULL) && (u_21 != t)))
                                              _fail(t);
                                            else
                                              u_21 = t;
                                          }
                                        }
                                    }
                                  else
                                    {
                                      ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
                                      t = not_null(y_19);
                                      if(((v_21 != NULL) && (v_21 != t)))
                                        _fail(t);
                                      else
                                        v_21 = t;
                                      t = not_null(x_19);
                                      t = date_pattern_to_int_0_0(t);
                                      if(((w_21 != NULL) && (w_21 != t)))
                                        _fail(t);
                                      else
                                        w_21 = t;
                                      t = int_to_string_0_0(t);
                                      if(((x_21 != NULL) && (x_21 != t)))
                                        _fail(t);
                                      else
                                        x_21 = t;
                                      t = not_null(w_21);
                                      if(((y_21 != NULL) && (y_21 != t)))
                                        _fail(t);
                                      else
                                        y_21 = t;
                                      t = not_null(v_21);
                                      t = string_length_0_0(t);
                                      if(((z_21 != NULL) && (z_21 != t)))
                                        _fail(t);
                                      else
                                        z_21 = t;
                                      t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(x_21), not_null(z_21));
                                      t = align_right_0_0(t);
                                    }
                                }
                            }
                        }
                    }
                }
              else
                {
                  t = not_null(y_19);
                  if(match_string(t, "a"))
                    {
                      ATerm m_9 = t;
                      int n_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
                          t = not_null(y_19);
                          if(((a_22 != NULL) && (a_22 != t)))
                            _fail(t);
                          else
                            a_22 = t;
                          t = not_null(x_19);
                          t = date_pattern_to_int_0_0(t);
                          if(((b_22 != NULL) && (b_22 != t)))
                            _fail(t);
                          else
                            b_22 = t;
                          t = int_to_string_0_0(t);
                          if(((c_22 != NULL) && (c_22 != t)))
                            _fail(t);
                          else
                            c_22 = t;
                          t = not_null(b_22);
                          if(((d_22 != NULL) && (d_22 != t)))
                            _fail(t);
                          else
                            d_22 = t;
                          t = not_null(a_22);
                          t = string_length_0_0(t);
                          if(((e_22 != NULL) && (e_22 != t)))
                            _fail(t);
                          else
                            e_22 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(c_22), not_null(e_22));
                          t = align_right_0_0(t);
                          ;
                          LocalPopChoice(n_9);
                        }
                      else
                        {
                          t = m_9;
                          {
                            ATerm o_9 = t;
                            int p_9 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm f_22 = NULL,g_22 = NULL;
                                t = not_null(s_19);
                                if(((f_22 != NULL) && (f_22 != t)))
                                  _fail(t);
                                else
                                  f_22 = t;
                                t = not_null(x_19);
                                if(((g_22 != NULL) && (g_22 != t)))
                                  _fail(t);
                                else
                                  g_22 = t;
                                t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(f_22), term_p_8);
                                t = leq_leq_0_0(t);
                                t = term_c_9;
                                ;
                                LocalPopChoice(p_9);
                              }
                            else
                              {
                                t = o_9;
                                {
                                  ATerm h_22 = NULL,i_22 = NULL;
                                  t = not_null(s_19);
                                  if(((h_22 != NULL) && (h_22 != t)))
                                    _fail(t);
                                  else
                                    h_22 = t;
                                  t = not_null(x_19);
                                  if(((i_22 != NULL) && (i_22 != t)))
                                    _fail(t);
                                  else
                                    i_22 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_w_7, not_null(h_22), term_o_8);
                                  t = leq_lt_0_0(t);
                                  t = term_d_9;
                                }
                              }
                          }
                        }
                    }
                  else
                    {
                      if(match_string(t, "EEEE"))
                        {
                          ATerm q_9 = t;
                          int r_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
                              t = not_null(y_19);
                              if(((j_22 != NULL) && (j_22 != t)))
                                _fail(t);
                              else
                                j_22 = t;
                              t = not_null(x_19);
                              t = date_pattern_to_int_0_0(t);
                              if(((k_22 != NULL) && (k_22 != t)))
                                _fail(t);
                              else
                                k_22 = t;
                              t = int_to_string_0_0(t);
                              if(((l_22 != NULL) && (l_22 != t)))
                                _fail(t);
                              else
                                l_22 = t;
                              t = not_null(k_22);
                              if(((m_22 != NULL) && (m_22 != t)))
                                _fail(t);
                              else
                                m_22 = t;
                              t = not_null(j_22);
                              t = string_length_0_0(t);
                              if(((n_22 != NULL) && (n_22 != t)))
                                _fail(t);
                              else
                                n_22 = t;
                              t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(l_22), not_null(n_22));
                              t = align_right_0_0(t);
                              ;
                              LocalPopChoice(r_9);
                            }
                          else
                            {
                              t = q_9;
                              {
                                ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
                                t = not_null(v_19);
                                if(((o_22 != NULL) && (o_22 != t)))
                                  _fail(t);
                                else
                                  o_22 = t;
                                t = not_null(x_19);
                                if(((p_22 != NULL) && (p_22 != t)))
                                  _fail(t);
                                else
                                  p_22 = t;
                                t = not_null(o_22);
                                t = day_of_week2text_0_0(t);
                                if(((q_22 != NULL) && (q_22 != t)))
                                  _fail(t);
                                else
                                  q_22 = t;
                              }
                            }
                        }
                      else
                        {
                          if(match_string(t, "EEE"))
                            {
                              ATerm s_9 = t;
                              int t_9 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL;
                                  t = not_null(y_19);
                                  if(((r_22 != NULL) && (r_22 != t)))
                                    _fail(t);
                                  else
                                    r_22 = t;
                                  t = not_null(x_19);
                                  t = date_pattern_to_int_0_0(t);
                                  if(((s_22 != NULL) && (s_22 != t)))
                                    _fail(t);
                                  else
                                    s_22 = t;
                                  t = int_to_string_0_0(t);
                                  if(((t_22 != NULL) && (t_22 != t)))
                                    _fail(t);
                                  else
                                    t_22 = t;
                                  t = not_null(s_22);
                                  if(((u_22 != NULL) && (u_22 != t)))
                                    _fail(t);
                                  else
                                    u_22 = t;
                                  t = not_null(r_22);
                                  t = string_length_0_0(t);
                                  if(((v_22 != NULL) && (v_22 != t)))
                                    _fail(t);
                                  else
                                    v_22 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(t_22), not_null(v_22));
                                  t = align_right_0_0(t);
                                  ;
                                  LocalPopChoice(t_9);
                                }
                              else
                                {
                                  t = s_9;
                                  {
                                    ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
                                    t = not_null(v_19);
                                    if(((w_22 != NULL) && (w_22 != t)))
                                      _fail(t);
                                    else
                                      w_22 = t;
                                    t = not_null(x_19);
                                    if(((x_22 != NULL) && (x_22 != t)))
                                      _fail(t);
                                    else
                                      x_22 = t;
                                    t = not_null(w_22);
                                    t = day_of_week2abbr_0_0(t);
                                    if(((y_22 != NULL) && (y_22 != t)))
                                      _fail(t);
                                    else
                                      y_22 = t;
                                  }
                                }
                            }
                          else
                            {
                              ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL;
                              t = not_null(y_19);
                              if(((z_22 != NULL) && (z_22 != t)))
                                _fail(t);
                              else
                                z_22 = t;
                              t = not_null(x_19);
                              t = date_pattern_to_int_0_0(t);
                              if(((a_23 != NULL) && (a_23 != t)))
                                _fail(t);
                              else
                                a_23 = t;
                              t = int_to_string_0_0(t);
                              if(((b_23 != NULL) && (b_23 != t)))
                                _fail(t);
                              else
                                b_23 = t;
                              t = not_null(a_23);
                              if(((c_23 != NULL) && (c_23 != t)))
                                _fail(t);
                              else
                                c_23 = t;
                              t = not_null(z_22);
                              t = string_length_0_0(t);
                              if(((d_23 != NULL) && (d_23 != t)))
                                _fail(t);
                              else
                                d_23 = t;
                              t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(b_23), not_null(d_23));
                              t = align_right_0_0(t);
                            }
                        }
                    }
                }
            }
          else
            {
              t = not_null(a_20);
              if(match_cons(t, sym_Date_3))
                {
                  b_20 = ATgetArgument(t, 0);
                  c_20 = ATgetArgument(t, 1);
                  d_20 = ATgetArgument(t, 2);
                  t = not_null(y_19);
                  if(match_string(t, "EEEE"))
                    {
                      ATerm u_9 = t;
                      int v_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL;
                          t = not_null(y_19);
                          if(((e_23 != NULL) && (e_23 != t)))
                            _fail(t);
                          else
                            e_23 = t;
                          t = not_null(x_19);
                          t = date_pattern_to_int_0_0(t);
                          if(((f_23 != NULL) && (f_23 != t)))
                            _fail(t);
                          else
                            f_23 = t;
                          t = int_to_string_0_0(t);
                          if(((g_23 != NULL) && (g_23 != t)))
                            _fail(t);
                          else
                            g_23 = t;
                          t = not_null(f_23);
                          if(((h_23 != NULL) && (h_23 != t)))
                            _fail(t);
                          else
                            h_23 = t;
                          t = not_null(e_23);
                          t = string_length_0_0(t);
                          if(((i_23 != NULL) && (i_23 != t)))
                            _fail(t);
                          else
                            i_23 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(g_23), not_null(i_23));
                          t = align_right_0_0(t);
                          ;
                          LocalPopChoice(v_9);
                        }
                      else
                        {
                          t = u_9;
                          {
                            ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
                            t = not_null(v_19);
                            if(((j_23 != NULL) && (j_23 != t)))
                              _fail(t);
                            else
                              j_23 = t;
                            t = not_null(x_19);
                            if(((k_23 != NULL) && (k_23 != t)))
                              _fail(t);
                            else
                              k_23 = t;
                            t = not_null(j_23);
                            t = day_of_week2text_0_0(t);
                            if(((l_23 != NULL) && (l_23 != t)))
                              _fail(t);
                            else
                              l_23 = t;
                          }
                        }
                    }
                  else
                    {
                      if(match_string(t, "EEE"))
                        {
                          ATerm w_9 = t;
                          int x_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
                              t = not_null(y_19);
                              if(((m_23 != NULL) && (m_23 != t)))
                                _fail(t);
                              else
                                m_23 = t;
                              t = not_null(x_19);
                              t = date_pattern_to_int_0_0(t);
                              if(((n_23 != NULL) && (n_23 != t)))
                                _fail(t);
                              else
                                n_23 = t;
                              t = int_to_string_0_0(t);
                              if(((o_23 != NULL) && (o_23 != t)))
                                _fail(t);
                              else
                                o_23 = t;
                              t = not_null(n_23);
                              if(((p_23 != NULL) && (p_23 != t)))
                                _fail(t);
                              else
                                p_23 = t;
                              t = not_null(m_23);
                              t = string_length_0_0(t);
                              if(((q_23 != NULL) && (q_23 != t)))
                                _fail(t);
                              else
                                q_23 = t;
                              t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(o_23), not_null(q_23));
                              t = align_right_0_0(t);
                              ;
                              LocalPopChoice(x_9);
                            }
                          else
                            {
                              t = w_9;
                              {
                                ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
                                t = not_null(v_19);
                                if(((r_23 != NULL) && (r_23 != t)))
                                  _fail(t);
                                else
                                  r_23 = t;
                                t = not_null(x_19);
                                if(((s_23 != NULL) && (s_23 != t)))
                                  _fail(t);
                                else
                                  s_23 = t;
                                t = not_null(r_23);
                                t = day_of_week2abbr_0_0(t);
                                if(((t_23 != NULL) && (t_23 != t)))
                                  _fail(t);
                                else
                                  t_23 = t;
                              }
                            }
                        }
                      else
                        {
                          if(match_string(t, "MMMM"))
                            {
                              ATerm y_9 = t;
                              int x_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
                                  t = not_null(y_19);
                                  if(((u_23 != NULL) && (u_23 != t)))
                                    _fail(t);
                                  else
                                    u_23 = t;
                                  t = not_null(x_19);
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
                                  if(((x_23 != NULL) && (x_23 != t)))
                                    _fail(t);
                                  else
                                    x_23 = t;
                                  t = not_null(u_23);
                                  t = string_length_0_0(t);
                                  if(((y_23 != NULL) && (y_23 != t)))
                                    _fail(t);
                                  else
                                    y_23 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(w_23), not_null(y_23));
                                  t = align_right_0_0(t);
                                  ;
                                  LocalPopChoice(x_10);
                                }
                              else
                                {
                                  t = y_9;
                                  {
                                    ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
                                    t = not_null(c_20);
                                    if(((z_23 != NULL) && (z_23 != t)))
                                      _fail(t);
                                    else
                                      z_23 = t;
                                    t = not_null(x_19);
                                    if(((a_24 != NULL) && (a_24 != t)))
                                      _fail(t);
                                    else
                                      a_24 = t;
                                    t = not_null(z_23);
                                    t = month2text_0_0(t);
                                    if(((b_24 != NULL) && (b_24 != t)))
                                      _fail(t);
                                    else
                                      b_24 = t;
                                  }
                                }
                            }
                          else
                            {
                              if(match_string(t, "MMM"))
                                {
                                  ATerm x_11 = t;
                                  int s_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
                                      t = not_null(y_19);
                                      if(((c_24 != NULL) && (c_24 != t)))
                                        _fail(t);
                                      else
                                        c_24 = t;
                                      t = not_null(x_19);
                                      t = date_pattern_to_int_0_0(t);
                                      if(((d_24 != NULL) && (d_24 != t)))
                                        _fail(t);
                                      else
                                        d_24 = t;
                                      t = int_to_string_0_0(t);
                                      if(((e_24 != NULL) && (e_24 != t)))
                                        _fail(t);
                                      else
                                        e_24 = t;
                                      t = not_null(d_24);
                                      if(((f_24 != NULL) && (f_24 != t)))
                                        _fail(t);
                                      else
                                        f_24 = t;
                                      t = not_null(c_24);
                                      t = string_length_0_0(t);
                                      if(((g_24 != NULL) && (g_24 != t)))
                                        _fail(t);
                                      else
                                        g_24 = t;
                                      t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(e_24), not_null(g_24));
                                      t = align_right_0_0(t);
                                      ;
                                      LocalPopChoice(s_12);
                                    }
                                  else
                                    {
                                      t = x_11;
                                      {
                                        ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
                                        t = not_null(c_20);
                                        if(((h_24 != NULL) && (h_24 != t)))
                                          _fail(t);
                                        else
                                          h_24 = t;
                                        t = not_null(x_19);
                                        if(((i_24 != NULL) && (i_24 != t)))
                                          _fail(t);
                                        else
                                          i_24 = t;
                                        t = not_null(h_24);
                                        t = month2abbr_0_0(t);
                                        if(((j_24 != NULL) && (j_24 != t)))
                                          _fail(t);
                                        else
                                          j_24 = t;
                                      }
                                    }
                                }
                              else
                                {
                                  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL;
                                  t = not_null(y_19);
                                  if(((k_24 != NULL) && (k_24 != t)))
                                    _fail(t);
                                  else
                                    k_24 = t;
                                  t = not_null(x_19);
                                  t = date_pattern_to_int_0_0(t);
                                  if(((l_24 != NULL) && (l_24 != t)))
                                    _fail(t);
                                  else
                                    l_24 = t;
                                  t = int_to_string_0_0(t);
                                  if(((m_24 != NULL) && (m_24 != t)))
                                    _fail(t);
                                  else
                                    m_24 = t;
                                  t = not_null(l_24);
                                  if(((n_24 != NULL) && (n_24 != t)))
                                    _fail(t);
                                  else
                                    n_24 = t;
                                  t = not_null(k_24);
                                  t = string_length_0_0(t);
                                  if(((o_24 != NULL) && (o_24 != t)))
                                    _fail(t);
                                  else
                                    o_24 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(m_24), not_null(o_24));
                                  t = align_right_0_0(t);
                                }
                            }
                        }
                    }
                }
              else
                {
                  t = not_null(y_19);
                  if(match_string(t, "EEEE"))
                    {
                      ATerm l_13 = t;
                      int n_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL;
                          t = not_null(y_19);
                          if(((p_24 != NULL) && (p_24 != t)))
                            _fail(t);
                          else
                            p_24 = t;
                          t = not_null(x_19);
                          t = date_pattern_to_int_0_0(t);
                          if(((q_24 != NULL) && (q_24 != t)))
                            _fail(t);
                          else
                            q_24 = t;
                          t = int_to_string_0_0(t);
                          if(((r_24 != NULL) && (r_24 != t)))
                            _fail(t);
                          else
                            r_24 = t;
                          t = not_null(q_24);
                          if(((s_24 != NULL) && (s_24 != t)))
                            _fail(t);
                          else
                            s_24 = t;
                          t = not_null(p_24);
                          t = string_length_0_0(t);
                          if(((t_24 != NULL) && (t_24 != t)))
                            _fail(t);
                          else
                            t_24 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(r_24), not_null(t_24));
                          t = align_right_0_0(t);
                          ;
                          LocalPopChoice(n_13);
                        }
                      else
                        {
                          t = l_13;
                          {
                            ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
                            t = not_null(v_19);
                            if(((u_24 != NULL) && (u_24 != t)))
                              _fail(t);
                            else
                              u_24 = t;
                            t = not_null(x_19);
                            if(((v_24 != NULL) && (v_24 != t)))
                              _fail(t);
                            else
                              v_24 = t;
                            t = not_null(u_24);
                            t = day_of_week2text_0_0(t);
                            if(((w_24 != NULL) && (w_24 != t)))
                              _fail(t);
                            else
                              w_24 = t;
                          }
                        }
                    }
                  else
                    {
                      if(match_string(t, "EEE"))
                        {
                          ATerm p_13 = t;
                          int r_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
                              t = not_null(y_19);
                              if(((x_24 != NULL) && (x_24 != t)))
                                _fail(t);
                              else
                                x_24 = t;
                              t = not_null(x_19);
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
                              t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(z_24), not_null(b_25));
                              t = align_right_0_0(t);
                              ;
                              LocalPopChoice(r_13);
                            }
                          else
                            {
                              t = p_13;
                              {
                                ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
                                t = not_null(v_19);
                                if(((c_25 != NULL) && (c_25 != t)))
                                  _fail(t);
                                else
                                  c_25 = t;
                                t = not_null(x_19);
                                if(((d_25 != NULL) && (d_25 != t)))
                                  _fail(t);
                                else
                                  d_25 = t;
                                t = not_null(c_25);
                                t = day_of_week2abbr_0_0(t);
                                if(((e_25 != NULL) && (e_25 != t)))
                                  _fail(t);
                                else
                                  e_25 = t;
                              }
                            }
                        }
                      else
                        {
                          ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
                          t = not_null(y_19);
                          if(((f_25 != NULL) && (f_25 != t)))
                            _fail(t);
                          else
                            f_25 = t;
                          t = not_null(x_19);
                          t = date_pattern_to_int_0_0(t);
                          if(((g_25 != NULL) && (g_25 != t)))
                            _fail(t);
                          else
                            g_25 = t;
                          t = int_to_string_0_0(t);
                          if(((h_25 != NULL) && (h_25 != t)))
                            _fail(t);
                          else
                            h_25 = t;
                          t = not_null(g_25);
                          if(((i_25 != NULL) && (i_25 != t)))
                            _fail(t);
                          else
                            i_25 = t;
                          t = not_null(f_25);
                          t = string_length_0_0(t);
                          if(((j_25 != NULL) && (j_25 != t)))
                            _fail(t);
                          else
                            j_25 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(h_25), not_null(j_25));
                          t = align_right_0_0(t);
                        }
                    }
                }
            }
        }
      else
        {
          t = not_null(e_20);
          if(match_cons(t, sym_DayTime_3))
            {
              s_19 = ATgetArgument(t, 0);
              t_19 = ATgetArgument(t, 1);
              u_19 = ATgetArgument(t, 2);
              t = not_null(a_20);
              if(match_cons(t, sym_Date_3))
                {
                  b_20 = ATgetArgument(t, 0);
                  c_20 = ATgetArgument(t, 1);
                  d_20 = ATgetArgument(t, 2);
                  t = not_null(y_19);
                  if(match_string(t, "a"))
                    {
                      ATerm b_15 = t;
                      int r_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
                          t = not_null(y_19);
                          if(((k_25 != NULL) && (k_25 != t)))
                            _fail(t);
                          else
                            k_25 = t;
                          t = not_null(x_19);
                          t = date_pattern_to_int_0_0(t);
                          if(((l_25 != NULL) && (l_25 != t)))
                            _fail(t);
                          else
                            l_25 = t;
                          t = int_to_string_0_0(t);
                          if(((m_25 != NULL) && (m_25 != t)))
                            _fail(t);
                          else
                            m_25 = t;
                          t = not_null(l_25);
                          if(((n_25 != NULL) && (n_25 != t)))
                            _fail(t);
                          else
                            n_25 = t;
                          t = not_null(k_25);
                          t = string_length_0_0(t);
                          if(((o_25 != NULL) && (o_25 != t)))
                            _fail(t);
                          else
                            o_25 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(m_25), not_null(o_25));
                          t = align_right_0_0(t);
                          ;
                          LocalPopChoice(r_15);
                        }
                      else
                        {
                          t = b_15;
                          {
                            ATerm t_15 = t;
                            int u_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_25 = NULL,q_25 = NULL;
                                t = not_null(s_19);
                                if(((p_25 != NULL) && (p_25 != t)))
                                  _fail(t);
                                else
                                  p_25 = t;
                                t = not_null(x_19);
                                if(((q_25 != NULL) && (q_25 != t)))
                                  _fail(t);
                                else
                                  q_25 = t;
                                t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(p_25), term_p_8);
                                t = leq_leq_0_0(t);
                                t = term_c_9;
                                ;
                                LocalPopChoice(u_15);
                              }
                            else
                              {
                                t = t_15;
                                {
                                  ATerm s_25 = NULL,t_25 = NULL;
                                  t = not_null(s_19);
                                  if(((s_25 != NULL) && (s_25 != t)))
                                    _fail(t);
                                  else
                                    s_25 = t;
                                  t = not_null(x_19);
                                  if(((t_25 != NULL) && (t_25 != t)))
                                    _fail(t);
                                  else
                                    t_25 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_w_7, not_null(s_25), term_o_8);
                                  t = leq_lt_0_0(t);
                                  t = term_d_9;
                                }
                              }
                          }
                        }
                    }
                  else
                    {
                      if(match_string(t, "MMMM"))
                        {
                          ATerm v_15 = t;
                          int w_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_25 = NULL,v_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
                              t = not_null(y_19);
                              if(((u_25 != NULL) && (u_25 != t)))
                                _fail(t);
                              else
                                u_25 = t;
                              t = not_null(x_19);
                              t = date_pattern_to_int_0_0(t);
                              if(((v_25 != NULL) && (v_25 != t)))
                                _fail(t);
                              else
                                v_25 = t;
                              t = int_to_string_0_0(t);
                              if(((a_26 != NULL) && (a_26 != t)))
                                _fail(t);
                              else
                                a_26 = t;
                              t = not_null(v_25);
                              if(((b_26 != NULL) && (b_26 != t)))
                                _fail(t);
                              else
                                b_26 = t;
                              t = not_null(u_25);
                              t = string_length_0_0(t);
                              if(((c_26 != NULL) && (c_26 != t)))
                                _fail(t);
                              else
                                c_26 = t;
                              t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(a_26), not_null(c_26));
                              t = align_right_0_0(t);
                              ;
                              LocalPopChoice(w_15);
                            }
                          else
                            {
                              t = v_15;
                              {
                                ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
                                t = not_null(c_20);
                                if(((d_26 != NULL) && (d_26 != t)))
                                  _fail(t);
                                else
                                  d_26 = t;
                                t = not_null(x_19);
                                if(((e_26 != NULL) && (e_26 != t)))
                                  _fail(t);
                                else
                                  e_26 = t;
                                t = not_null(d_26);
                                t = month2text_0_0(t);
                                if(((f_26 != NULL) && (f_26 != t)))
                                  _fail(t);
                                else
                                  f_26 = t;
                              }
                            }
                        }
                      else
                        {
                          if(match_string(t, "MMM"))
                            {
                              ATerm x_15 = t;
                              int y_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm g_26 = NULL,h_26 = NULL,j_26 = NULL,l_26 = NULL,m_26 = NULL;
                                  t = not_null(y_19);
                                  if(((g_26 != NULL) && (g_26 != t)))
                                    _fail(t);
                                  else
                                    g_26 = t;
                                  t = not_null(x_19);
                                  t = date_pattern_to_int_0_0(t);
                                  if(((h_26 != NULL) && (h_26 != t)))
                                    _fail(t);
                                  else
                                    h_26 = t;
                                  t = int_to_string_0_0(t);
                                  if(((j_26 != NULL) && (j_26 != t)))
                                    _fail(t);
                                  else
                                    j_26 = t;
                                  t = not_null(h_26);
                                  if(((l_26 != NULL) && (l_26 != t)))
                                    _fail(t);
                                  else
                                    l_26 = t;
                                  t = not_null(g_26);
                                  t = string_length_0_0(t);
                                  if(((m_26 != NULL) && (m_26 != t)))
                                    _fail(t);
                                  else
                                    m_26 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(j_26), not_null(m_26));
                                  t = align_right_0_0(t);
                                  ;
                                  LocalPopChoice(y_15);
                                }
                              else
                                {
                                  t = x_15;
                                  {
                                    ATerm n_26 = NULL,q_26 = NULL,r_26 = NULL;
                                    t = not_null(c_20);
                                    if(((n_26 != NULL) && (n_26 != t)))
                                      _fail(t);
                                    else
                                      n_26 = t;
                                    t = not_null(x_19);
                                    if(((q_26 != NULL) && (q_26 != t)))
                                      _fail(t);
                                    else
                                      q_26 = t;
                                    t = not_null(n_26);
                                    t = month2abbr_0_0(t);
                                    if(((r_26 != NULL) && (r_26 != t)))
                                      _fail(t);
                                    else
                                      r_26 = t;
                                  }
                                }
                            }
                          else
                            {
                              ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,a_27 = NULL;
                              t = not_null(y_19);
                              if(((s_26 != NULL) && (s_26 != t)))
                                _fail(t);
                              else
                                s_26 = t;
                              t = not_null(x_19);
                              t = date_pattern_to_int_0_0(t);
                              if(((t_26 != NULL) && (t_26 != t)))
                                _fail(t);
                              else
                                t_26 = t;
                              t = int_to_string_0_0(t);
                              if(((u_26 != NULL) && (u_26 != t)))
                                _fail(t);
                              else
                                u_26 = t;
                              t = not_null(t_26);
                              if(((v_26 != NULL) && (v_26 != t)))
                                _fail(t);
                              else
                                v_26 = t;
                              t = not_null(s_26);
                              t = string_length_0_0(t);
                              if(((a_27 != NULL) && (a_27 != t)))
                                _fail(t);
                              else
                                a_27 = t;
                              t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(u_26), not_null(a_27));
                              t = align_right_0_0(t);
                            }
                        }
                    }
                }
              else
                {
                  t = not_null(y_19);
                  if(match_string(t, "a"))
                    {
                      ATerm z_15 = t;
                      int a_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_27 = NULL,c_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
                          t = not_null(y_19);
                          if(((b_27 != NULL) && (b_27 != t)))
                            _fail(t);
                          else
                            b_27 = t;
                          t = not_null(x_19);
                          t = date_pattern_to_int_0_0(t);
                          if(((c_27 != NULL) && (c_27 != t)))
                            _fail(t);
                          else
                            c_27 = t;
                          t = int_to_string_0_0(t);
                          if(((e_27 != NULL) && (e_27 != t)))
                            _fail(t);
                          else
                            e_27 = t;
                          t = not_null(c_27);
                          if(((f_27 != NULL) && (f_27 != t)))
                            _fail(t);
                          else
                            f_27 = t;
                          t = not_null(b_27);
                          t = string_length_0_0(t);
                          if(((g_27 != NULL) && (g_27 != t)))
                            _fail(t);
                          else
                            g_27 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(e_27), not_null(g_27));
                          t = align_right_0_0(t);
                          ;
                          LocalPopChoice(a_16);
                        }
                      else
                        {
                          t = z_15;
                          {
                            ATerm b_16 = t;
                            int c_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_27 = NULL,i_27 = NULL;
                                t = not_null(s_19);
                                if(((h_27 != NULL) && (h_27 != t)))
                                  _fail(t);
                                else
                                  h_27 = t;
                                t = not_null(x_19);
                                if(((i_27 != NULL) && (i_27 != t)))
                                  _fail(t);
                                else
                                  i_27 = t;
                                t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(h_27), term_p_8);
                                t = leq_leq_0_0(t);
                                t = term_c_9;
                                ;
                                LocalPopChoice(c_16);
                              }
                            else
                              {
                                t = b_16;
                                {
                                  ATerm j_27 = NULL,k_27 = NULL;
                                  t = not_null(s_19);
                                  if(((j_27 != NULL) && (j_27 != t)))
                                    _fail(t);
                                  else
                                    j_27 = t;
                                  t = not_null(x_19);
                                  if(((k_27 != NULL) && (k_27 != t)))
                                    _fail(t);
                                  else
                                    k_27 = t;
                                  t = (ATerm) ATmakeAppl(sym__3, term_w_7, not_null(j_27), term_o_8);
                                  t = leq_lt_0_0(t);
                                  t = term_d_9;
                                }
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL;
                      t = not_null(y_19);
                      if(((l_27 != NULL) && (l_27 != t)))
                        _fail(t);
                      else
                        l_27 = t;
                      t = not_null(x_19);
                      t = date_pattern_to_int_0_0(t);
                      if(((m_27 != NULL) && (m_27 != t)))
                        _fail(t);
                      else
                        m_27 = t;
                      t = int_to_string_0_0(t);
                      if(((n_27 != NULL) && (n_27 != t)))
                        _fail(t);
                      else
                        n_27 = t;
                      t = not_null(m_27);
                      if(((o_27 != NULL) && (o_27 != t)))
                        _fail(t);
                      else
                        o_27 = t;
                      t = not_null(l_27);
                      t = string_length_0_0(t);
                      if(((p_27 != NULL) && (p_27 != t)))
                        _fail(t);
                      else
                        p_27 = t;
                      t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(n_27), not_null(p_27));
                      t = align_right_0_0(t);
                    }
                }
            }
          else
            {
              t = not_null(a_20);
              if(match_cons(t, sym_Date_3))
                {
                  b_20 = ATgetArgument(t, 0);
                  c_20 = ATgetArgument(t, 1);
                  d_20 = ATgetArgument(t, 2);
                  t = not_null(y_19);
                  if(match_string(t, "MMMM"))
                    {
                      ATerm d_16 = t;
                      int e_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm q_27 = NULL,r_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
                          t = not_null(y_19);
                          if(((q_27 != NULL) && (q_27 != t)))
                            _fail(t);
                          else
                            q_27 = t;
                          t = not_null(x_19);
                          t = date_pattern_to_int_0_0(t);
                          if(((r_27 != NULL) && (r_27 != t)))
                            _fail(t);
                          else
                            r_27 = t;
                          t = int_to_string_0_0(t);
                          if(((u_27 != NULL) && (u_27 != t)))
                            _fail(t);
                          else
                            u_27 = t;
                          t = not_null(r_27);
                          if(((v_27 != NULL) && (v_27 != t)))
                            _fail(t);
                          else
                            v_27 = t;
                          t = not_null(q_27);
                          t = string_length_0_0(t);
                          if(((w_27 != NULL) && (w_27 != t)))
                            _fail(t);
                          else
                            w_27 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(u_27), not_null(w_27));
                          t = align_right_0_0(t);
                          ;
                          LocalPopChoice(e_16);
                        }
                      else
                        {
                          t = d_16;
                          {
                            ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
                            t = not_null(c_20);
                            if(((x_27 != NULL) && (x_27 != t)))
                              _fail(t);
                            else
                              x_27 = t;
                            t = not_null(x_19);
                            if(((y_27 != NULL) && (y_27 != t)))
                              _fail(t);
                            else
                              y_27 = t;
                            t = not_null(x_27);
                            t = month2text_0_0(t);
                            if(((z_27 != NULL) && (z_27 != t)))
                              _fail(t);
                            else
                              z_27 = t;
                          }
                        }
                    }
                  else
                    {
                      if(match_string(t, "MMM"))
                        {
                          ATerm f_16 = t;
                          int g_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
                              t = not_null(y_19);
                              if(((a_28 != NULL) && (a_28 != t)))
                                _fail(t);
                              else
                                a_28 = t;
                              t = not_null(x_19);
                              t = date_pattern_to_int_0_0(t);
                              if(((b_28 != NULL) && (b_28 != t)))
                                _fail(t);
                              else
                                b_28 = t;
                              t = int_to_string_0_0(t);
                              if(((c_28 != NULL) && (c_28 != t)))
                                _fail(t);
                              else
                                c_28 = t;
                              t = not_null(b_28);
                              if(((d_28 != NULL) && (d_28 != t)))
                                _fail(t);
                              else
                                d_28 = t;
                              t = not_null(a_28);
                              t = string_length_0_0(t);
                              if(((e_28 != NULL) && (e_28 != t)))
                                _fail(t);
                              else
                                e_28 = t;
                              t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(c_28), not_null(e_28));
                              t = align_right_0_0(t);
                              ;
                              LocalPopChoice(g_16);
                            }
                          else
                            {
                              t = f_16;
                              {
                                ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
                                t = not_null(c_20);
                                if(((f_28 != NULL) && (f_28 != t)))
                                  _fail(t);
                                else
                                  f_28 = t;
                                t = not_null(x_19);
                                if(((g_28 != NULL) && (g_28 != t)))
                                  _fail(t);
                                else
                                  g_28 = t;
                                t = not_null(f_28);
                                t = month2abbr_0_0(t);
                                if(((h_28 != NULL) && (h_28 != t)))
                                  _fail(t);
                                else
                                  h_28 = t;
                              }
                            }
                        }
                      else
                        {
                          ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL;
                          t = not_null(y_19);
                          if(((i_28 != NULL) && (i_28 != t)))
                            _fail(t);
                          else
                            i_28 = t;
                          t = not_null(x_19);
                          t = date_pattern_to_int_0_0(t);
                          if(((j_28 != NULL) && (j_28 != t)))
                            _fail(t);
                          else
                            j_28 = t;
                          t = int_to_string_0_0(t);
                          if(((k_28 != NULL) && (k_28 != t)))
                            _fail(t);
                          else
                            k_28 = t;
                          t = not_null(j_28);
                          if(((l_28 != NULL) && (l_28 != t)))
                            _fail(t);
                          else
                            l_28 = t;
                          t = not_null(i_28);
                          t = string_length_0_0(t);
                          if(((m_28 != NULL) && (m_28 != t)))
                            _fail(t);
                          else
                            m_28 = t;
                          t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(k_28), not_null(m_28));
                          t = align_right_0_0(t);
                        }
                    }
                }
              else
                {
                  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
                  t = not_null(y_19);
                  if(((s_28 != NULL) && (s_28 != t)))
                    _fail(t);
                  else
                    s_28 = t;
                  t = not_null(x_19);
                  t = date_pattern_to_int_0_0(t);
                  if(((t_28 != NULL) && (t_28 != t)))
                    _fail(t);
                  else
                    t_28 = t;
                  t = int_to_string_0_0(t);
                  if(((u_28 != NULL) && (u_28 != t)))
                    _fail(t);
                  else
                    u_28 = t;
                  t = not_null(t_28);
                  if(((v_28 != NULL) && (v_28 != t)))
                    _fail(t);
                  else
                    v_28 = t;
                  t = not_null(s_28);
                  t = string_length_0_0(t);
                  if(((w_28 != NULL) && (w_28 != t)))
                    _fail(t);
                  else
                    w_28 = t;
                  t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(u_28), not_null(w_28));
                  t = align_right_0_0(t);
                }
            }
        }
    }
  else
    {
      ATerm x_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL;
      t = not_null(y_19);
      if(((x_28 != NULL) && (x_28 != t)))
        _fail(t);
      else
        x_28 = t;
      t = not_null(x_19);
      t = date_pattern_to_int_0_0(t);
      if(((z_28 != NULL) && (z_28 != t)))
        _fail(t);
      else
        z_28 = t;
      t = int_to_string_0_0(t);
      if(((a_29 != NULL) && (a_29 != t)))
        _fail(t);
      else
        a_29 = t;
      t = not_null(z_28);
      if(((b_29 != NULL) && (b_29 != t)))
        _fail(t);
      else
        b_29 = t;
      t = not_null(x_28);
      t = string_length_0_0(t);
      if(((c_29 != NULL) && (c_29 != t)))
        _fail(t);
      else
        c_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(a_29), not_null(c_29));
      t = align_right_0_0(t);
    }
  return(t);
}
ATerm date_format_0_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL,m_29 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_29 != NULL) && (d_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_29 = ATgetArgument(t, 0);
      if(((e_29 != NULL) && (e_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((f_29 != NULL) && (f_29 != t)))
    _fail(t);
  else
    f_29 = t;
  t = not_null(d_29);
  {
    ATerm x_0 (ATerm t)
    {
      ATerm j_29 = NULL,l_29 = NULL;
      if(((j_29 != NULL) && (j_29 != t)))
        _fail(t);
      else
        j_29 = t;
      if(((l_29 != NULL) && (l_29 != t)))
        _fail(t);
      else
        l_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), not_null(e_29));
      {
        ATerm h_16 = t;
        int i_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = date_pattern_to_string_0_0(t);
            ;
            LocalPopChoice(i_16);
          }
        else
          {
            t = h_16;
            t = Fst_0_0(t);
          }
      }
      return(t);
    }
    t = map_1_0(x_0, t);
    t = concat_strings_0_0(t);
    if(((m_29 != NULL) && (m_29 != t)))
      _fail(t);
    else
      m_29 = t;
  }
  return(t);
}
ATerm index2day_of_week_0_0 (ATerm t)
{
  ATerm o_29 = NULL;
  if(((o_29 != NULL) && (o_29 != t)))
    _fail(t);
  else
    o_29 = t;
  if(match_int(t, 6))
    {
      t = term_j_16;
    }
  else
    {
      if(match_int(t, 5))
        {
          t = term_k_16;
        }
      else
        {
          if(match_int(t, 4))
            {
              t = term_l_16;
            }
          else
            {
              if(match_int(t, 3))
                {
                  t = term_m_16;
                }
              else
                {
                  if(match_int(t, 2))
                    {
                      t = term_n_16;
                    }
                  else
                    {
                      if(match_int(t, 1))
                        {
                          t = term_o_16;
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                            _fail(t);
                          t = term_p_16;
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
  ATerm q_29 = NULL;
  if(((q_29 != NULL) && (q_29 != t)))
    _fail(t);
  else
    q_29 = t;
  if(match_int(t, 11))
    {
      t = term_q_16;
    }
  else
    {
      if(match_int(t, 10))
        {
          t = term_r_16;
        }
      else
        {
          if(match_int(t, 9))
            {
              t = term_s_16;
            }
          else
            {
              if(match_int(t, 8))
                {
                  t = term_t_16;
                }
              else
                {
                  if(match_int(t, 7))
                    {
                      t = term_u_16;
                    }
                  else
                    {
                      if(match_int(t, 6))
                        {
                          t = term_v_16;
                        }
                      else
                        {
                          if(match_int(t, 5))
                            {
                              t = term_w_16;
                            }
                          else
                            {
                              if(match_int(t, 4))
                                {
                                  t = term_x_16;
                                }
                              else
                                {
                                  if(match_int(t, 3))
                                    {
                                      t = term_a_19;
                                    }
                                  else
                                    {
                                      if(match_int(t, 2))
                                        {
                                          t = term_b_19;
                                        }
                                      else
                                        {
                                          if(match_int(t, 1))
                                            {
                                              t = term_c_19;
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                                                _fail(t);
                                              t = term_d_19;
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
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  if(match_cons(t, sym__8))
    {
      if(((r_29 != NULL) && (r_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_29 = ATgetArgument(t, 0);
      if(((s_29 != NULL) && (s_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_29 = ATgetArgument(t, 1);
      if(((t_29 != NULL) && (t_29 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        t_29 = ATgetArgument(t, 2);
      if(((u_29 != NULL) && (u_29 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        u_29 = ATgetArgument(t, 3);
      if(((v_29 != NULL) && (v_29 != ATgetArgument(t, 4))))
        _fail(ATgetArgument(t, 4));
      else
        v_29 = ATgetArgument(t, 4);
      if(((w_29 != NULL) && (w_29 != ATgetArgument(t, 5))))
        _fail(ATgetArgument(t, 5));
      else
        w_29 = ATgetArgument(t, 5);
      if(((x_29 != NULL) && (x_29 != ATgetArgument(t, 6))))
        _fail(ATgetArgument(t, 6));
      else
        x_29 = ATgetArgument(t, 6);
      if(((y_29 != NULL) && (y_29 != ATgetArgument(t, 7))))
        _fail(ATgetArgument(t, 7));
      else
        y_29 = ATgetArgument(t, 7);
    }
  else
    _fail(t);
  if(((z_29 != NULL) && (z_29 != t)))
    _fail(t);
  else
    z_29 = t;
  t = not_null(v_29);
  t = index2month_0_0(t);
  if(((a_30 != NULL) && (a_30 != t)))
    _fail(t);
  else
    a_30 = t;
  t = not_null(z_29);
  if(((b_30 != NULL) && (b_30 != t)))
    _fail(t);
  else
    b_30 = t;
  t = not_null(x_29);
  t = index2day_of_week_0_0(t);
  if(((c_30 != NULL) && (c_30 != t)))
    _fail(t);
  else
    c_30 = t;
  t = (ATerm) ATmakeAppl(sym_ComponentTime_3, (ATerm)ATmakeAppl(sym_Date_3, not_null(w_29), not_null(a_30), not_null(u_29)), (ATerm)ATmakeAppl(sym_DayTime_3, not_null(t_29), not_null(s_29), not_null(r_29)), (ATerm) ATmakeAppl(sym_Dupl_2, not_null(c_30), not_null(y_29)));
  return(t);
}
ATerm epoch2local_time_0_0 (ATerm t)
{
  ATerm d_30 = NULL;
  if(match_cons(t, sym_EpochTime_1))
    {
      if(((d_30 != NULL) && (d_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_epoch2localtime(not_null(d_30));
  t = prim_tuple_to_ComponentTime_0_0(t);
  return(t);
}
ATerm now_epoch_time_0_0 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL;
  t = SSL_now_epoch_time();
  if(((e_30 != NULL) && (e_30 != t)))
    _fail(t);
  else
    e_30 = t;
  if(((f_30 != NULL) && (f_30 != t)))
    _fail(t);
  else
    f_30 = t;
  t = (ATerm) ATmakeAppl(sym_EpochTime_1, not_null(f_30));
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
  ATerm g_30 = NULL,h_30 = NULL;
  if(((g_30 != NULL) && (g_30 != t)))
    _fail(t);
  else
    g_30 = t;
  t = term_o_5;
  t = now_local_time_0_0(t);
  if(((h_30 != NULL) && (h_30 != t)))
    _fail(t);
  else
    h_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_19), term_k_19), term_l_19), term_k_19), term_j_19), term_f_19), term_i_19), term_f_19), term_h_19), term_f_19), term_g_19), term_f_19), term_e_19), not_null(h_30));
  t = date_format_0_0(t);
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm i_30 = NULL;
  if(((i_30 != NULL) && (i_30 != t)))
    _fail(t);
  else
    i_30 = t;
  t = error_0_0(t);
  t = term_v_7;
  t = exit_0_0(t);
  t = not_null(i_30);
  return(t);
}
ATerm get_title_0_0 (ATerm t)
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      t = (ATerm) ATinsert(ATempty, term_q_19);
      t = fatal_error_0_0(t);
    }
  return(t);
}
ATerm create_header_0_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL;
  t = get_title_0_0(t);
  if(((j_30 != NULL) && (j_30 != t)))
    _fail(t);
  else
    j_30 = t;
  if(((k_30 != NULL) && (k_30 != t)))
    _fail(t);
  else
    k_30 = t;
  t = not_null(j_30);
  if(((l_30 != NULL) && (l_30 != t)))
    _fail(t);
  else
    l_30 = t;
  t = term_o_5;
  t = create_time_0_0(t);
  if(((m_30 != NULL) && (m_30 != t)))
    _fail(t);
  else
    m_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_26), term_x_26), term_w_26), term_p_26), not_null(k_30)), term_o_26), term_k_26), term_i_26), term_z_25), term_y_25), term_x_25), term_w_25), not_null(m_30)), term_r_25), term_r_19);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm z_26 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_5;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_27);
    }
  else
    {
      t = z_26;
      t = term_s_27;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm c_102 (ATerm), ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm t_27 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
        if(((n_30 != NULL) && (n_30 != t)))
          _fail(t);
        else
          n_30 = t;
        if(((o_30 != NULL) && (o_30 != t)))
          _fail(t);
        else
          o_30 = t;
        t = term_a_6;
        t = get_config_0_0(t);
        if(((p_30 != NULL) && (p_30 != t)))
          _fail(t);
        else
          p_30 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_30));
        ;
        LocalPopChoice(n_28);
      }
    else
      {
        t = t_27;
        t = term_w_5;
      }
    t = c_102(t);
    t = copy_to_1_0(z_0, t);
    return(t);
  }
  t = xtc_temp_files_1_0(y_0, t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL;
  if(((q_30 != NULL) && (q_30 != t)))
    _fail(t);
  else
    q_30 = t;
  t = create_header_0_0(t);
  t = print_to_0_0(t);
  if(((r_30 != NULL) && (r_30 != t)))
    _fail(t);
  else
    r_30 = t;
  t = not_null(q_30);
  if(((s_30 != NULL) && (s_30 != t)))
    _fail(t);
  else
    s_30 = t;
  t = xtc_transform_2_0(b_1, pass_verbose_0_0, t);
  if(((t_30 != NULL) && (t_30 != t)))
    _fail(t);
  else
    t_30 = t;
  t = not_null(s_30);
  if(((u_30 != NULL) && (u_30 != t)))
    _fail(t);
  else
    u_30 = t;
  t = create_footer_0_0(t);
  t = print_to_0_0(t);
  if(((v_30 != NULL) && (v_30 != t)))
    _fail(t);
  else
    v_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(v_30)), not_null(t_30)), not_null(r_30));
  t = xtc_cat_0_0(t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_o_28;
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  t = xtc_io_1_0(a_1, t);
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_30 != NULL) && (w_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_30 = ATgetArgument(t, 0);
      if(((x_30 != NULL) && (x_30 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(w_30), not_null(x_30));
        ;
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = SSL_subtr(not_null(w_30), not_null(x_30));
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  if(((y_30 != NULL) && (y_30 != t)))
    _fail(t);
  else
    y_30 = t;
  if(((z_30 != NULL) && (z_30 != t)))
    _fail(t);
  else
    z_30 = t;
  t = term_r_28;
  {
    ATerm y_28 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(g_29);
      }
    else
      {
        t = y_28;
        t = term_v_7;
      }
    if(((a_31 != NULL) && (a_31 != t)))
      _fail(t);
    else
      a_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_31), term_v_7);
    t = subt_0_0(t);
    t = int_to_string_0_0(t);
    if(((b_31 != NULL) && (b_31 != t)))
      _fail(t);
    else
      b_31 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_31)), term_r_28);
  }
  return(t);
}
ATerm close_file_0_0 (ATerm t)
{
  ATerm c_31 = NULL;
  if(((c_31 != NULL) && (c_31 != t)))
    _fail(t);
  else
    c_31 = t;
  t = SSL_close_file(not_null(c_31));
  return(t);
}
ATerm execvp_0_0 (ATerm t)
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
  t = SSL_execvp(not_null(d_31), not_null(e_31));
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
  ATerm f_31 = NULL;
  if(((f_31 != NULL) && (f_31 != t)))
    _fail(t);
  else
    f_31 = t;
  t = SSL_int_to_string(not_null(f_31));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL;
  if(((h_31 != NULL) && (h_31 != t)))
    _fail(t);
  else
    h_31 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      i_31 = ATgetArgument(t, 0);
      {
        ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL;
        t = not_null(i_31);
        if(((l_31 != NULL) && (l_31 != t)))
          _fail(t);
        else
          l_31 = t;
        t = not_null(h_31);
        if(((m_31 != NULL) && (m_31 != t)))
          _fail(t);
        else
          m_31 = t;
        if(((n_31 != NULL) && (n_31 != t)))
          _fail(t);
        else
          n_31 = t;
        t = not_null(l_31);
        t = int_to_string_0_0(t);
        if(((o_31 != NULL) && (o_31 != t)))
          _fail(t);
        else
          o_31 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_29), not_null(o_31)), term_h_29);
        t = concat_strings_0_0(t);
        if(((p_31 != NULL) && (p_31 != t)))
          _fail(t);
        else
          p_31 = t;
      }
    }
  else
    {
      ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((i_31 != NULL) && (i_31 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_31 = ATgetArgument(t, 0);
          if(((j_31 != NULL) && (j_31 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_31 = ATgetArgument(t, 1);
          if(((k_31 != NULL) && (k_31 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            k_31 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(i_31);
      if(((q_31 != NULL) && (q_31 != t)))
        _fail(t);
      else
        q_31 = t;
      t = not_null(j_31);
      if(((r_31 != NULL) && (r_31 != t)))
        _fail(t);
      else
        r_31 = t;
      t = not_null(k_31);
      if(((s_31 != NULL) && (s_31 != t)))
        _fail(t);
      else
        s_31 = t;
      t = not_null(h_31);
      if(((t_31 != NULL) && (t_31 != t)))
        _fail(t);
      else
        t_31 = t;
      if(((u_31 != NULL) && (u_31 != t)))
        _fail(t);
      else
        u_31 = t;
      t = not_null(r_31);
      t = int_to_string_0_0(t);
      if(((v_31 != NULL) && (v_31 != t)))
        _fail(t);
      else
        v_31 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(s_31)), term_n_29), not_null(v_31)), term_k_29), not_null(q_31));
      t = concat_strings_0_0(t);
      if(((w_31 != NULL) && (w_31 != t)))
        _fail(t);
      else
        w_31 = t;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm r_79 (ATerm), ATerm t)
{
  ATerm x_31 = NULL;
  ATerm c_1 (ATerm t)
  {
    t = r_79(t);
    if(((x_31 != NULL) && (x_31 != t)))
      _fail(t);
    else
      x_31 = t;
    return(t);
  }
  t = fetch_1_0(c_1, t);
  t = not_null(x_31);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm y_31 = NULL;
  if(((y_31 != NULL) && (y_31 != t)))
    _fail(t);
  else
    y_31 = t;
  {
    ATerm p_29 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_45), term_n_45), term_c_44), term_o_43), term_k_43), term_j_42), term_s_40), term_o_40), term_l_40), term_i_40), term_b_40), term_x_39), term_e_39), term_w_38), term_s_38), term_p_38), term_i_38), term_f_38), term_o_37), term_f_37), term_b_37), term_r_35), term_n_35), term_g_35), term_d_35), term_a_35), term_y_33), term_t_33);
        {
          ATerm d_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm y_45 = ATgetArgument(t, 0);
                if(((y_31 != NULL) && (y_31 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  y_31 = ATgetArgument(t, 1);
                {
                  ATerm z_45 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(d_1, t);
        }
        ;
        LocalPopChoice(g_31);
      }
    else
      {
        t = p_29;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(y_31));
      }
  }
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
  if(match_cons(t, sym_WaitStatus_3))
    {
      ATerm a_46 = ATgetArgument(t, 0);
      if(((a_32 != NULL) && (a_32 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_32 = ATgetArgument(t, 1);
      {
        ATerm d_46 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(a_32);
  {
    ATerm e_46 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_46;
      }
    t = signal_from_number_0_0(t);
    t = signal_to_descr_0_0(t);
    if(((b_32 != NULL) && (b_32 != t)))
      _fail(t);
    else
      b_32 = t;
    if(((c_32 != NULL) && (c_32 != t)))
      _fail(t);
    else
      c_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_n_46, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_32)), term_a_48));
    t = printnl_0_0(t);
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm z_31 = NULL;
  if(((z_31 != NULL) && (z_31 != t)))
    _fail(t);
  else
    z_31 = t;
  t = try_1_0(e_1, t);
  t = not_null(z_31);
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm d_32 = NULL;
  if(((d_32 != NULL) && (d_32 != t)))
    _fail(t);
  else
    d_32 = t;
  t = SSL_waitpid(not_null(d_32));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL;
  if(((f_32 != NULL) && (f_32 != t)))
    _fail(t);
  else
    f_32 = t;
  t = fork_0_0(t);
  if(((g_32 != NULL) && (g_32 != t)))
    _fail(t);
  else
    g_32 = t;
  {
    ATerm l_48 = t;
    int m_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_32 = NULL;
        if(((h_32 != NULL) && (h_32 != t)))
          _fail(t);
        else
          h_32 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(f_32);
        t = s_90(t);
        ;
        LocalPopChoice(m_48);
      }
    else
      {
        t = l_48;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_32), not_null(f_32));
        t = t_90(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm u_90 (ATerm), ATerm t)
{
  ATerm i_32 = NULL;
  ATerm f_1 (ATerm t)
  {
    ATerm j_32 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((j_32 != NULL) && (j_32 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          j_32 = ATgetArgument(t, 0);
        if(((i_32 != NULL) && (i_32 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          i_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(j_32);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm n_48 = ATgetArgument(t, 0);
        if(((ATgetType(n_48) != AT_INT) || (ATgetInt((ATermInt) n_48) != 0)))
          _fail(t);
        {
          ATerm s_48 = ATgetArgument(t, 1);
        }
        {
          ATerm t_48 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(i_32);
    return(t);
  }
  t = fork_2_0(u_90, f_1, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_32 != NULL) && (k_32 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_32 = ATgetArgument(t, 0);
      if(((l_32 != NULL) && (l_32 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_32), not_null(l_32));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(g_1, t);
  }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm m_32 = NULL;
  if(((m_32 != NULL) && (m_32 != t)))
    _fail(t);
  else
    m_32 = t;
  t = SSL_table_keys(not_null(m_32));
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm n_32 = NULL;
  if(((n_32 != NULL) && (n_32 != t)))
    _fail(t);
  else
    n_32 = t;
  t = table_keys_0_0(t);
  {
    ATerm h_1 (ATerm t)
    {
      ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
      if(((o_32 != NULL) && (o_32 != t)))
        _fail(t);
      else
        o_32 = t;
      if(((p_32 != NULL) && (p_32 != t)))
        _fail(t);
      else
        p_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_32), not_null(o_32));
      t = table_get_0_0(t);
      if(((q_32 != NULL) && (q_32 != t)))
        _fail(t);
      else
        q_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_32), not_null(q_32));
      return(t);
    }
    t = map_1_0(h_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
    if(((r_32 != NULL) && (r_32 != t)))
      _fail(t);
    else
      r_32 = t;
    if(((s_32 != NULL) && (s_32 != t)))
      _fail(t);
    else
      s_32 = t;
    t = term_r_28;
    t = get_config_0_0(t);
    if(((t_32 != NULL) && (t_32 != t)))
      _fail(t);
    else
      t_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_32), term_i_8);
    t = geq_0_0(t);
    t = not_null(r_32);
    t = d_101(t);
    return(t);
  }
  t = try_1_0(i_1, t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  if(((u_32 != NULL) && (u_32 != t)))
    _fail(t);
  else
    u_32 = t;
  if(((v_32 != NULL) && (v_32 != t)))
    _fail(t);
  else
    v_32 = t;
  if(((w_32 != NULL) && (w_32 != t)))
    _fail(t);
  else
    w_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_46, not_null(w_32));
  t = printnl_0_0(t);
  t = not_null(u_32);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
  if(((x_32 != NULL) && (x_32 != t)))
    _fail(t);
  else
    x_32 = t;
  if(((y_32 != NULL) && (y_32 != t)))
    _fail(t);
  else
    y_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_48, (ATerm) ATmakeAppl(sym_Tool_1, not_null(x_32)));
  t = table_get_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_48 = ATgetFirst((ATermList) t);
      if(match_cons(x_48, sym__2))
        {
          if(((z_32 != NULL) && (z_32 != ATgetArgument(x_48, 0))))
            _fail(ATgetArgument(x_48, 0));
          else
            z_32 = ATgetArgument(x_48, 0);
          if(((a_33 != NULL) && (a_33 != ATgetArgument(x_48, 1))))
            _fail(ATgetArgument(x_48, 1));
          else
            a_33 = ATgetArgument(x_48, 1);
        }
      else
        _fail(t);
      {
        ATerm y_48 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(a_33);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_33 != NULL) && (b_33 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_33 = ATgetArgument(t, 0);
      if(((c_33 != NULL) && (c_33 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((d_33 != NULL) && (d_33 != t)))
    _fail(t);
  else
    d_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_48, (ATerm) ATmakeAppl(sym_Tool_1, not_null(b_33)));
  t = table_get_0_0(t);
  {
    ATerm j_1 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if(((c_33 != NULL) && (c_33 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_33 = ATgetArgument(t, 0);
          if(((e_33 != NULL) && (e_33 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(j_1, t);
    t = not_null(e_33);
  }
  return(t);
}
ATerm filter_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  ATerm z_48 = t;
  int a_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(a_49);
    }
  else
    {
      t = z_48;
      {
        ATerm b_49 = t;
        int d_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              t = filter_1_0(k_87, t);
              return(t);
            }
            t = Cons_2_0(k_87, k_1, t);
            ;
            LocalPopChoice(d_49);
          }
        else
          {
            t = b_49;
            {
              ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL;
              if(((g_33 != NULL) && (g_33 != t)))
                _fail(t);
              else
                g_33 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((h_33 != NULL) && (h_33 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    h_33 = ATgetFirst((ATermList) t);
                  if(((i_33 != NULL) && (i_33 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    i_33 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(i_33);
              if(((j_33 != NULL) && (j_33 != t)))
                _fail(t);
              else
                j_33 = t;
              t = filter_1_0(k_87, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm e_89 (ATerm), ATerm t)
{
  ATerm k_33 (ATerm t)
  {
    ATerm l_1 (ATerm t)
    {
      t = e_89(t);
      t = k_33(t);
      return(t);
    }
    t = try_1_0(l_1, t);
    return(t);
  }
  t = k_33(t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_f_49;
  t = table_get_0_0(t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm g_49 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_49;
      }
  }
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm l_33 = NULL;
  if(((l_33 != NULL) && (l_33 != t)))
    _fail(t);
  else
    l_33 = t;
  t = repeat_1_0(m_1, t);
  t = not_null(l_33);
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
  if(((m_33 != NULL) && (m_33 != t)))
    _fail(t);
  else
    m_33 = t;
  if(((n_33 != NULL) && (n_33 != t)))
    _fail(t);
  else
    n_33 = t;
  if(((o_33 != NULL) && (o_33 != t)))
    _fail(t);
  else
    o_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_46, (ATerm) ATinsert(ATempty, not_null(o_33)));
  t = printnl_0_0(t);
  t = not_null(m_33);
  return(t);
}
ATerm say_1_0 (ATerm b_91 (ATerm), ATerm t)
{
  ATerm p_33 = NULL;
  if(((p_33 != NULL) && (p_33 != t)))
    _fail(t);
  else
    p_33 = t;
  t = b_91(t);
  t = debug_0_0(t);
  t = not_null(p_33);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
    if(((q_33 != NULL) && (q_33 != t)))
      _fail(t);
    else
      q_33 = t;
    if(((r_33 != NULL) && (r_33 != t)))
      _fail(t);
    else
      r_33 = t;
    t = term_r_28;
    t = get_config_0_0(t);
    if(((s_33 != NULL) && (s_33 != t)))
      _fail(t);
    else
      s_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_33), term_j_8);
    t = geq_0_0(t);
    t = not_null(q_33);
    t = c_101(t);
    return(t);
  }
  t = try_1_0(n_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm v_33 = NULL,w_33 = NULL,a_34 = NULL;
    if(((v_33 != NULL) && (v_33 != t)))
      _fail(t);
    else
      v_33 = t;
    if(((w_33 != NULL) && (w_33 != t)))
      _fail(t);
    else
      w_33 = t;
    t = term_r_28;
    t = get_config_0_0(t);
    if(((a_34 != NULL) && (a_34 != t)))
      _fail(t);
    else
      a_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_34), term_h_8);
    t = geq_0_0(t);
    t = not_null(v_33);
    t = e_101(t);
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
  ATerm c_34 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_34 != NULL) && (c_34 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_34 = ATgetArgument(t, 0);
      if(((c_34 != NULL) && (c_34 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((d_34 != NULL) && (d_34 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        d_34 = ATgetFirst((ATermList) t);
      if(((e_34 != NULL) && (e_34 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        e_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((f_34 != NULL) && (f_34 != t)))
    _fail(t);
  else
    f_34 = t;
  t = n_83(t);
  {
    ATerm p_1 (ATerm t)
    {
      ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
      if(((g_34 != NULL) && (g_34 != t)))
        _fail(t);
      else
        g_34 = t;
      if(((h_34 != NULL) && (h_34 != t)))
        _fail(t);
      else
        h_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_34), not_null(g_34));
      t = m_83(t);
      if(((i_34 != NULL) && (i_34 != t)))
        _fail(t);
      else
        i_34 = t;
      return(t);
    }
    t = fetch_1_0(p_1, t);
    t = not_null(e_34);
  }
  return(t);
}
ATerm union_1_0 (ATerm j_83 (ATerm), ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_34 != NULL) && (j_34 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_34 = ATgetArgument(t, 0);
      if(((k_34 != NULL) && (k_34 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_34 != NULL) && (l_34 != t)))
    _fail(t);
  else
    l_34 = t;
  t = not_null(j_34);
  {
    ATerm n_34 (ATerm t)
    {
      ATerm h_49 = t;
      int q_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(k_34);
          ;
          LocalPopChoice(q_49);
        }
      else
        {
          t = h_49;
          {
            ATerm r_49 = t;
            int s_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_1 (ATerm t)
                {
                  t = not_null(k_34);
                  return(t);
                }
                t = HdMember_p__2_0(j_83, q_1, t);
                t = n_34(t);
                ;
                LocalPopChoice(s_49);
              }
            else
              {
                t = r_49;
                t = Cons_2_0(_id, n_34, t);
              }
          }
        }
      return(t);
    }
    t = n_34(t);
    if(((m_34 != NULL) && (m_34 != t)))
      _fail(t);
    else
      m_34 = t;
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
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((o_34 != NULL) && (o_34 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_34 = ATgetArgument(t, 0);
      if(((p_34 != NULL) && (p_34 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_34 = ATgetArgument(t, 1);
      if(((q_34 != NULL) && (q_34 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        q_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((r_34 != NULL) && (r_34 != t)))
    _fail(t);
  else
    r_34 = t;
  if(((s_34 != NULL) && (s_34 != t)))
    _fail(t);
  else
    s_34 = t;
  if(((t_34 != NULL) && (t_34 != t)))
    _fail(t);
  else
    t_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_34), not_null(p_34));
  {
    ATerm t_49 = t;
    int u_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        ;
        LocalPopChoice(u_49);
      }
    else
      {
        t = t_49;
        t = (ATerm) ATempty;
      }
    if(((u_34 != NULL) && (u_34 != t)))
      _fail(t);
    else
      u_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_34), not_null(q_34));
    t = union_0_0(t);
    if(((v_34 != NULL) && (v_34 != t)))
      _fail(t);
    else
      v_34 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(o_34), not_null(p_34), not_null(v_34));
    t = set_0_0(t);
    t = not_null(r_34);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_34 != NULL) && (x_34 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_34 = ATgetArgument(t, 0);
      if(((w_34 != NULL) && (w_34 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(w_34);
  {
    ATerm r_1 (ATerm t)
    {
      ATerm y_34 = NULL,z_34 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((y_34 != NULL) && (y_34 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            y_34 = ATgetArgument(t, 0);
          if(((z_34 != NULL) && (z_34 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(x_34), not_null(y_34), not_null(z_34));
      t = j_87(t);
      return(t);
    }
    t = map_1_0(r_1, t);
  }
  return(t);
}
ATerm x_35 (ATerm h_35, ATerm i_35, ATerm t)
{
  ATerm j_35 = NULL;
  t = not_null(h_35);
  if(((j_35 != NULL) && (j_35 != t)))
    _fail(t);
  else
    j_35 = t;
  t = SSL_fclose(not_null(j_35));
  return(t);
}
ATerm y_35 (ATerm s_35, ATerm t)
{
  ATerm u_35 = NULL;
  t = not_null(s_35);
  if(((u_35 != NULL) && (u_35 != t)))
    _fail(t);
  else
    u_35 = t;
  t = SSL_fclose(not_null(u_35));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL;
  if(((w_35 != NULL) && (w_35 != t)))
    _fail(t);
  else
    w_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_35 = ATgetArgument(t, 0);
      {
        ATerm v_49 = t;
        int a_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_35(not_null(v_35), not_null(w_35), t);
            ;
            LocalPopChoice(a_50);
          }
        else
          {
            t = v_49;
            t = y_35(not_null(w_35), t);
          }
      }
    }
  else
    {
      t = y_35(not_null(w_35), t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm z_35 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((z_35 != NULL) && (z_35 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(z_35));
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_36 != NULL) && (a_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_36 = ATgetArgument(t, 0);
      if(((b_36 != NULL) && (b_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(a_36), not_null(b_36));
  if(((c_36 != NULL) && (c_36 != t)))
    _fail(t);
  else
    c_36 = t;
  if(((d_36 != NULL) && (d_36 != t)))
    _fail(t);
  else
    d_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_36));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL;
  t = SSL_stdin_stream();
  if(((e_36 != NULL) && (e_36 != t)))
    _fail(t);
  else
    e_36 = t;
  if(((f_36 != NULL) && (f_36 != t)))
    _fail(t);
  else
    f_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_36));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL;
  t = SSL_stdout_stream();
  if(((g_36 != NULL) && (g_36 != t)))
    _fail(t);
  else
    g_36 = t;
  if(((h_36 != NULL) && (h_36 != t)))
    _fail(t);
  else
    h_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_36));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL;
  t = SSL_stderr_stream();
  if(((i_36 != NULL) && (i_36 != t)))
    _fail(t);
  else
    i_36 = t;
  if(((j_36 != NULL) && (j_36 != t)))
    _fail(t);
  else
    j_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_36));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm l_36 = NULL;
  if(((l_36 != NULL) && (l_36 != t)))
    _fail(t);
  else
    l_36 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(l_36);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(l_36);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(l_36);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
  if(((m_36 != NULL) && (m_36 != t)))
    _fail(t);
  else
    m_36 = t;
  if(((n_36 != NULL) && (n_36 != t)))
    _fail(t);
  else
    n_36 = t;
  t = not_null(m_36);
  if(((o_36 != NULL) && (o_36 != t)))
    _fail(t);
  else
    o_36 = t;
  t = SSL_explode_term(not_null(o_36));
  if(match_cons(t, sym__2))
    {
      ATerm b_50 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_50) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_50 = ATgetArgument(t, 1);
        if(((ATgetType(c_50) == AT_LIST) && !(ATisEmpty(c_50))))
          {
            if(((q_36 != NULL) && (q_36 != ATgetFirst((ATermList) c_50))))
              _fail(ATgetFirst((ATermList) c_50));
            else
              q_36 = ATgetFirst((ATermList) c_50);
            if(((p_36 != NULL) && (p_36 != (ATerm) ATgetNext((ATermList) c_50))))
              _fail((ATerm) ATgetNext((ATermList) c_50));
            else
              p_36 = (ATerm) ATgetNext((ATermList) c_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(q_36);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm r_36 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      if(((r_36 != NULL) && (r_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(r_36);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_50 = ATgetArgument(t, 0);
      ATerm u_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_50 = t;
    int a_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(a_51);
      }
    else
      {
        t = z_50;
        {
          ATerm b_51 = t;
          int c_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(s_1, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(c_51);
            }
          else
            {
              t = b_51;
              t = _2_0(is_string_0_0, _id, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_d_51;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL;
  ATerm m_51 = t;
  int n_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL;
      if(((s_36 != NULL) && (s_36 != t)))
        _fail(t);
      else
        s_36 = t;
      if(((t_36 != NULL) && (t_36 != t)))
        _fail(t);
      else
        t_36 = t;
      t = not_null(s_36);
      if(((u_36 != NULL) && (u_36 != t)))
        _fail(t);
      else
        u_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_36), term_o_51);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_51);
    }
  else
    {
      t = m_51;
      t = debug_1_0(t_1, t);
      _fail(t);
    }
  if(((v_36 != NULL) && (v_36 != t)))
    _fail(t);
  else
    v_36 = t;
  t = read_from_stream_0_0(t);
  if(((w_36 != NULL) && (w_36 != t)))
    _fail(t);
  else
    w_36 = t;
  t = not_null(v_36);
  t = fclose_0_0(t);
  t = not_null(w_36);
  return(t);
}
ATerm can_read_file_0_0 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL;
  if(((x_36 != NULL) && (x_36 != t)))
    _fail(t);
  else
    x_36 = t;
  if(((y_36 != NULL) && (y_36 != t)))
    _fail(t);
  else
    y_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_36), (ATerm) ATinsert(ATempty, term_p_51));
  t = access_0_0(t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_l_52;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_u_52;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm p_53 = t;
  int u_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(u_53);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = p_53;
      {
        ATerm d_54 = t;
        int e_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_54 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_54;
              }
            t = debug_1_0(u_1, t);
            ;
            LocalPopChoice(e_54);
          }
        else
          {
            t = d_54;
            t = debug_1_0(v_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_g_54;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_h_54;
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = say_1_0(b_2, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_i_54;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = say_1_0(d_2, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_j_54;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = say_1_0(f_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_i_54;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,g_37 = NULL,j_37 = NULL;
  if(((z_36 != NULL) && (z_36 != t)))
    _fail(t);
  else
    z_36 = t;
  t = if_verbose5_1_0(w_1, t);
  {
    ATerm k_54 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_48, (ATerm) ATmakeAppl(sym_Imported_1, not_null(z_36)));
        t = table_get_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_54;
      }
    if(((a_37 != NULL) && (a_37 != t)))
      _fail(t);
    else
      a_37 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_u_48, term_l_54, (ATerm) ATinsert(ATempty, not_null(z_36)));
    t = table_put_0_0(t);
    t = not_null(a_37);
    t = if_verbose4_1_0(y_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(a_2, t);
    if(((g_37 != NULL) && (g_37 != t)))
      _fail(t);
    else
      g_37 = t;
    if(((j_37 != NULL) && (j_37 != t)))
      _fail(t);
    else
      j_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_48, not_null(j_37));
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(c_2, t);
    t = (ATerm) ATmakeAppl(sym__3, term_u_48, (ATerm)ATmakeAppl(sym_Imported_1, not_null(z_36)), (ATerm) ATempty);
    t = table_put_0_0(t);
    t = if_verbose4_1_0(e_2, t);
  }
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm k_37 = NULL;
  if(((k_37 != NULL) && (k_37 != t)))
    _fail(t);
  else
    k_37 = t;
  t = SSL_getenv(not_null(k_37));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm m_54 = t;
  int n_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_54;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_54);
    }
  else
    {
      t = m_54;
      {
        ATerm p_54 = t;
        int q_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_54;
            t = getenv_0_0(t);
            ;
            LocalPopChoice(q_54);
          }
        else
          {
            t = p_54;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_s_54;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_t_54;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm l_37 = NULL;
  t = if_verbose5_1_0(g_2, t);
  if(((l_37 != NULL) && (l_37 != t)))
    _fail(t);
  else
    l_37 = t;
  {
    ATerm u_54 = t;
    int v_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_54;
        t = table_get_0_0(t);
        ;
        LocalPopChoice(v_54);
      }
    else
      {
        t = u_54;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = not_null(l_37);
    t = if_verbose5_1_0(i_2, t);
  }
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_x_54;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_x_54;
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_u_48;
  t = table_getlist_0_0(t);
  t = debug_1_0(p_2, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_y_54;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm z_54 = t;
  int a_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(k_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm b_55 = t;
        int c_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(c_55);
          }
        else
          {
            t = b_55;
            t = xtc_find_loc_0_0(t);
          }
        t = if_verbose5_1_0(m_2, t);
      }
      ;
      LocalPopChoice(a_55);
    }
  else
    {
      t = z_54;
      {
        ATerm m_37 = NULL,p_37 = NULL,q_37 = NULL;
        if(((m_37 != NULL) && (m_37 != t)))
          _fail(t);
        else
          m_37 = t;
        if(((p_37 != NULL) && (p_37 != t)))
          _fail(t);
        else
          p_37 = t;
        t = not_null(m_37);
        if(((q_37 != NULL) && (q_37 != t)))
          _fail(t);
        else
          q_37 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_55), not_null(q_37)), term_d_55);
        t = error_0_0(t);
        t = if_verbose5_1_0(o_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL;
  if(((r_37 != NULL) && (r_37 != t)))
    _fail(t);
  else
    r_37 = t;
  t = p_102(t);
  t = xtc_find_warning_0_0(t);
  if(((s_37 != NULL) && (s_37 != t)))
    _fail(t);
  else
    s_37 = t;
  t = not_null(r_37);
  if(((t_37 != NULL) && (t_37 != t)))
    _fail(t);
  else
    t_37 = t;
  if(((u_37 != NULL) && (u_37 != t)))
    _fail(t);
  else
    u_37 = t;
  if(((v_37 != NULL) && (v_37 != t)))
    _fail(t);
  else
    v_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_37), not_null(v_37));
  t = call_0_0(t);
  t = not_null(t_37);
  return(t);
}
ATerm assert_1_0 (ATerm g_87 (ATerm), ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_37 != NULL) && (w_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_37 = ATgetArgument(t, 0);
      if(((x_37 != NULL) && (x_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((y_37 != NULL) && (y_37 != t)))
    _fail(t);
  else
    y_37 = t;
  t = g_87(t);
  if(((z_37 != NULL) && (z_37 != t)))
    _fail(t);
  else
    z_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(z_37), not_null(w_37), not_null(x_37));
  t = table_push_0_0(t);
  {
    ATerm f_55 = t;
    int g_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_37), term_h_55);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(g_55);
      }
    else
      {
        t = f_55;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((a_38 != NULL) && (a_38 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          a_38 = ATgetFirst((ATermList) t);
        if(((b_38 != NULL) && (b_38 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          b_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(z_37), term_h_55, (ATerm) ATinsert(CheckATermList(not_null(b_38)), (ATerm) ATinsert(CheckATermList(not_null(a_38)), not_null(w_37))));
    t = table_put_0_0(t);
    t = not_null(y_37);
  }
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_i_55;
  return(t);
}
ATerm obsolete_1_0 (ATerm e_91 (ATerm), ATerm t)
{
  ATerm c_38 = NULL;
  if(((c_38 != NULL) && (c_38 != t)))
    _fail(t);
  else
    c_38 = t;
  t = e_91(t);
  t = debug_1_0(q_2, t);
  t = not_null(c_38);
  return(t);
}
ATerm k_39 (ATerm k_38, ATerm t)
{
  ATerm l_38 = NULL;
  t = not_null(k_38);
  if(((l_38 != NULL) && (l_38 != t)))
    _fail(t);
  else
    l_38 = t;
  t = not_null(k_38);
  {
    ATerm j_55 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_55 = ATgetArgument(t, 0);
            ATerm l_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_55;
      }
    t = obsolete_1_0(r_2, t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_38), term_y_5);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm l_39 (ATerm m_38, ATerm y_38, ATerm z_38, ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL;
  t = not_null(m_38);
  if(((a_39 != NULL) && (a_39 != t)))
    _fail(t);
  else
    a_39 = t;
  t = not_null(y_38);
  if(((b_39 != NULL) && (b_39 != t)))
    _fail(t);
  else
    b_39 = t;
  t = SSL_open_file(not_null(a_39), not_null(b_39));
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_m_55;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  if(((h_39 != NULL) && (h_39 != t)))
    _fail(t);
  else
    h_39 = t;
  if(match_cons(t, sym__2))
    {
      i_39 = ATgetArgument(t, 0);
      j_39 = ATgetArgument(t, 1);
      {
        ATerm n_55 = t;
        int o_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_39(not_null(h_39), t);
            ;
            LocalPopChoice(o_55);
          }
        else
          {
            t = n_55;
            t = l_39(not_null(i_39), not_null(j_39), not_null(h_39), t);
          }
      }
    }
  else
    {
      t = k_39(not_null(h_39), t);
    }
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_39 != NULL) && (m_39 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_39 = ATgetArgument(t, 0);
      if(((n_39 != NULL) && (n_39 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(m_39), not_null(n_39));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL;
  if(((o_39 != NULL) && (o_39 != t)))
    _fail(t);
  else
    o_39 = t;
  if(((p_39 != NULL) && (p_39 != t)))
    _fail(t);
  else
    p_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_39), (ATerm) ATinsert(ATempty, term_p_55));
  t = access_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = file_exists_0_0(t);
  t = new_file_0_0(t);
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL;
  if(((q_39 != NULL) && (q_39 != t)))
    _fail(t);
  else
    q_39 = t;
  t = term_o_5;
  t = new_0_0(t);
  if(((r_39 != NULL) && (r_39 != t)))
    _fail(t);
  else
    r_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_39), term_q_55);
  t = conc_strings_0_0(t);
  t = try_1_0(s_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_t_5;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL;
  t = new_file_0_0(t);
  if(((t_39 != NULL) && (t_39 != t)))
    _fail(t);
  else
    t_39 = t;
  if(((u_39 != NULL) && (u_39 != t)))
    _fail(t);
  else
    u_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_39), term_y_5);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_39), term_o_5);
  t = assert_1_0(t_2, t);
  t = not_null(u_39);
  return(t);
}
ATerm xtc_generate_2_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,c_40 = NULL,d_40 = NULL;
  if(((v_39 != NULL) && (v_39 != t)))
    _fail(t);
  else
    v_39 = t;
  t = term_o_5;
  t = xtc_new_file_0_0(t);
  if(((w_39 != NULL) && (w_39 != t)))
    _fail(t);
  else
    w_39 = t;
  if(((c_40 != NULL) && (c_40 != t)))
    _fail(t);
  else
    c_40 = t;
  t = e_103(t);
  if(((d_40 != NULL) && (d_40 != t)))
    _fail(t);
  else
    d_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_40), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_39)), term_z_5));
  t = conc_0_0(t);
  t = xtc_command_1_0(d_103, t);
  t = not_null(w_39);
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_39));
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_40 != NULL) && (e_40 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_40 = ATgetArgument(t, 0);
      if(((f_40 != NULL) && (f_40 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_copy(not_null(e_40), not_null(f_40));
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
  ATerm k_41 (ATerm u_40, ATerm w_40, ATerm t)
  {
    ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL;
    t = not_null(u_40);
    if(((x_40 != NULL) && (x_40 != t)))
      _fail(t);
    else
      x_40 = t;
    t = not_null(w_40);
    if(((y_40 != NULL) && (y_40 != t)))
      _fail(t);
    else
      y_40 = t;
    t = k_0(t);
    if(((z_40 != NULL) && (z_40 != t)))
      _fail(t);
    else
      z_40 = t;
    {
      ATerm r_55 = t;
      int s_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          ;
          LocalPopChoice(s_55);
        }
      else
        {
          t = r_55;
          t = stderr_0_0(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_40), not_null(z_40));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_40));
    }
    return(t);
  }
  ATerm l_41 (ATerm a_41, ATerm b_41, ATerm t)
  {
    ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL;
    t = not_null(a_41);
    if(((c_41 != NULL) && (c_41 != t)))
      _fail(t);
    else
      c_41 = t;
    t = not_null(b_41);
    if(((d_41 != NULL) && (d_41 != t)))
      _fail(t);
    else
      d_41 = t;
    t = k_0(t);
    if(((e_41 != NULL) && (e_41 != t)))
      _fail(t);
    else
      e_41 = t;
    {
      ATerm t_55 = t;
      if((PushChoice() == 0))
        {
          ATerm u_55 = t;
          int v_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              ;
              LocalPopChoice(v_55);
            }
          else
            {
              t = u_55;
              {
                ATerm w_55 = t;
                int x_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = stderr_0_0(t);
                    ;
                    LocalPopChoice(x_55);
                  }
                else
                  {
                    t = w_55;
                    {
                      ATerm f_41 = NULL;
                      if(((f_41 != NULL) && (f_41 != t)))
                        _fail(t);
                      else
                        f_41 = t;
                      if(((c_41 != NULL) && (c_41 != t)))
                        _fail(t);
                      else
                        c_41 = t;
                      t = not_null(f_41);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_55;
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_41), not_null(e_41));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_41));
    }
    return(t);
  }
  ATerm g_41 = NULL,h_41 = NULL;
  if(((g_41 != NULL) && (g_41 != t)))
    _fail(t);
  else
    g_41 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((h_41 != NULL) && (h_41 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_55 = t;
    int z_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_41(not_null(h_41), not_null(g_41), t);
        ;
        LocalPopChoice(z_55);
      }
    else
      {
        t = y_55;
        {
          ATerm a_56 = t;
          int b_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_41(not_null(h_41), not_null(g_41), t);
              ;
              LocalPopChoice(b_56);
            }
          else
            {
              t = a_56;
              {
                ATerm i_41 = NULL,j_41 = NULL;
                t = not_null(h_41);
                if(((i_41 != NULL) && (i_41 != t)))
                  _fail(t);
                else
                  i_41 = t;
                t = not_null(g_41);
                if(((j_41 != NULL) && (j_41 != t)))
                  _fail(t);
                else
                  j_41 = t;
                t = k_0(t);
                if(((i_41 != NULL) && (i_41 != t)))
                  _fail(t);
                else
                  i_41 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_41));
              }
            }
        }
      }
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm m_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_56 = ATgetFirst((ATermList) t);
      if(((m_41 != NULL) && (m_41 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        m_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(m_41);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_41 != NULL) && (n_41 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_41 = ATgetArgument(t, 0);
      if(((o_41 != NULL) && (o_41 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((p_41 != NULL) && (p_41 != t)))
    _fail(t);
  else
    p_41 = t;
  if(((q_41 != NULL) && (q_41 != t)))
    _fail(t);
  else
    q_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_41), not_null(o_41));
  {
    ATerm d_56 = t;
    int e_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        t = Tl_0_0(t);
        ;
        LocalPopChoice(e_56);
      }
    else
      {
        t = d_56;
        t = (ATerm) ATempty;
      }
    if(((r_41 != NULL) && (r_41 != t)))
      _fail(t);
    else
      r_41 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(n_41), not_null(o_41), not_null(r_41));
    t = table_put_0_0(t);
    t = not_null(p_41);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL;
  if(((s_41 != NULL) && (s_41 != t)))
    _fail(t);
  else
    s_41 = t;
  t = d_87(t);
  if(((t_41 != NULL) && (t_41 != t)))
    _fail(t);
  else
    t_41 = t;
  {
    ATerm f_56 = t;
    int g_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_41), term_h_55);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(g_56);
      }
    else
      {
        t = f_56;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((v_41 != NULL) && (v_41 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          v_41 = ATgetFirst((ATermList) t);
        if(((u_41 != NULL) && (u_41 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          u_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(t_41), term_h_55, not_null(u_41));
    t = table_put_0_0(t);
    t = not_null(v_41);
    {
      ATerm u_2 (ATerm t)
      {
        ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
        if(((w_41 != NULL) && (w_41 != t)))
          _fail(t);
        else
          w_41 = t;
        if(((x_41 != NULL) && (x_41 != t)))
          _fail(t);
        else
          x_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_41), not_null(w_41));
        t = table_pop_0_0(t);
        if(((y_41 != NULL) && (y_41 != t)))
          _fail(t);
        else
          y_41 = t;
        return(t);
      }
      t = map_1_0(u_2, t);
      t = not_null(s_41);
    }
  }
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm z_41 = NULL;
  if(((z_41 != NULL) && (z_41 != t)))
    _fail(t);
  else
    z_41 = t;
  t = SSL_remove(not_null(z_41));
  return(t);
}
ATerm restore_always_2_0 (ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm t)
{
  ATerm h_56 = t;
  int i_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_78(t);
      t = c_78(t);
      ;
      LocalPopChoice(i_56);
    }
  else
    {
      t = h_56;
      t = c_78(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL;
  if(((a_42 != NULL) && (a_42 != t)))
    _fail(t);
  else
    a_42 = t;
  t = c_87(t);
  if(((b_42 != NULL) && (b_42 != t)))
    _fail(t);
  else
    b_42 = t;
  if(((c_42 != NULL) && (c_42 != t)))
    _fail(t);
  else
    c_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_42), term_h_55);
  {
    ATerm j_56 = t;
    int k_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(k_56);
      }
    else
      {
        t = j_56;
        t = (ATerm) ATempty;
      }
    if(((d_42 != NULL) && (d_42 != t)))
      _fail(t);
    else
      d_42 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(b_42), term_h_55, (ATerm) ATinsert(CheckATermList(not_null(d_42)), (ATerm) ATempty));
    t = table_put_0_0(t);
    t = not_null(a_42);
  }
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_t_5;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_t_5;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm b_102 (ATerm), ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL;
  t = begin_scope_1_0(v_2, t);
  {
    ATerm w_2 (ATerm t)
    {
      ATerm g_42 = NULL;
      if(((g_42 != NULL) && (g_42 != t)))
        _fail(t);
      else
        g_42 = t;
      {
        ATerm l_56 = t;
        int m_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_n_56;
            t = table_get_0_0(t);
            ;
            LocalPopChoice(m_56);
          }
        else
          {
            t = l_56;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((f_42 != NULL) && (f_42 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              f_42 = ATgetFirst((ATermList) t);
            if(((e_42 != NULL) && (e_42 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              e_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(f_42);
        t = map_1_0(x_2, t);
        t = not_null(g_42);
        t = end_scope_1_0(y_2, t);
      }
      return(t);
    }
    t = restore_always_2_0(b_102, w_2, t);
  }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm o_56 = t;
  int p_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_5;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_56);
    }
  else
    {
      t = o_56;
      t = term_s_27;
    }
  return(t);
}
ATerm xtc_output_1_0 (ATerm d_102 (ATerm), ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    t = d_102(t);
    t = copy_to_1_0(a_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(z_2, t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = xtc_generate_2_0(c_3, pass_verbose_0_0, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_q_56;
  return(t);
}
ATerm gen_css_0_0 (ATerm t)
{
  ATerm h_42 = NULL;
  if(((h_42 != NULL) && (h_42 != t)))
    _fail(t);
  else
    h_42 = t;
  t = term_r_56;
  t = get_config_0_0(t);
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("gen-css", 0, ATtrue)))
    _fail(t);
  t = not_null(h_42);
  t = xtc_output_1_0(b_3, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
  if(((k_42 != NULL) && (k_42 != t)))
    _fail(t);
  else
    k_42 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(k_42);
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((l_42 != NULL) && (l_42 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            l_42 = ATgetFirst((ATermList) t);
          if(((m_42 != NULL) && (m_42 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(m_42);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((n_42 != NULL) && (n_42 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            n_42 = ATgetFirst((ATermList) t);
          if(((o_42 != NULL) && (o_42 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(l_42);
      if(((p_42 != NULL) && (p_42 != t)))
        _fail(t);
      else
        p_42 = t;
      t = not_null(n_42);
      if(((q_42 != NULL) && (q_42 != t)))
        _fail(t);
      else
        q_42 = t;
      t = not_null(o_42);
      if(((r_42 != NULL) && (r_42 != t)))
        _fail(t);
      else
        r_42 = t;
      t = not_null(k_42);
      if(((s_42 != NULL) && (s_42 != t)))
        _fail(t);
      else
        s_42 = t;
      t = not_null(p_42);
      t = h_0(t);
      t = not_null(s_42);
      if(((t_42 != NULL) && (t_42 != t)))
        _fail(t);
      else
        t_42 = t;
      t = not_null(q_42);
      t = i_0(t);
      if(((u_42 != NULL) && (u_42 != t)))
        _fail(t);
      else
        u_42 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(r_42)), not_null(u_42));
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm w_42 = NULL;
  if(((w_42 != NULL) && (w_42 != t)))
    _fail(t);
  else
    w_42 = t;
  if(match_string(t, "-k"))
    {
      t = not_null(w_42);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = not_null(w_42);
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
  if(((x_42 != NULL) && (x_42 != t)))
    _fail(t);
  else
    x_42 = t;
  if(((y_42 != NULL) && (y_42 != t)))
    _fail(t);
  else
    y_42 = t;
  t = string_to_int_0_0(t);
  if(((z_42 != NULL) && (z_42 != t)))
    _fail(t);
  else
    z_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_56, not_null(z_42));
  t = set_config_0_0(t);
  t = not_null(x_42);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_t_56;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, e_3, f_3, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm a_43 = NULL;
  if(((a_43 != NULL) && (a_43 != t)))
    _fail(t);
  else
    a_43 = t;
  t = SSL_string_to_int(not_null(a_43));
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm c_43 = NULL;
  if(((c_43 != NULL) && (c_43 != t)))
    _fail(t);
  else
    c_43 = t;
  if(match_string(t, "-S"))
    {
      t = not_null(c_43);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = not_null(c_43);
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm d_43 = NULL;
  if(((d_43 != NULL) && (d_43 != t)))
    _fail(t);
  else
    d_43 = t;
  t = term_u_56;
  t = set_config_0_0(t);
  t = term_v_56;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_w_56;
  return(t);
}
ATerm j_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
  if(((e_43 != NULL) && (e_43 != t)))
    _fail(t);
  else
    e_43 = t;
  if(((f_43 != NULL) && (f_43 != t)))
    _fail(t);
  else
    f_43 = t;
  t = string_to_int_0_0(t);
  if(((g_43 != NULL) && (g_43 != t)))
    _fail(t);
  else
    g_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_28, not_null(g_43));
  t = set_config_0_0(t);
  t = not_null(e_43);
  if(((h_43 != NULL) && (h_43 != t)))
    _fail(t);
  else
    h_43 = t;
  if(((i_43 != NULL) && (i_43 != t)))
    _fail(t);
  else
    i_43 = t;
  t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_43));
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_x_56;
  return(t);
}
ATerm m_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm n_43 = NULL;
  if(((n_43 != NULL) && (n_43 != t)))
    _fail(t);
  else
    n_43 = t;
  t = term_z_56;
  t = set_config_0_0(t);
  t = term_a_57;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_b_57;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_57 = t;
  int d_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_3, h_3, i_3, t);
      ;
      LocalPopChoice(d_57);
    }
  else
    {
      t = c_57;
      {
        ATerm e_57 = t;
        int f_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_3, k_3, l_3, t);
            ;
            LocalPopChoice(f_57);
          }
        else
          {
            t = e_57;
            t = Option_3_0(m_3, n_3, o_3, t);
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm g_57 = t;
  int h_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(h_57);
    }
  else
    {
      t = g_57;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm p_43 = NULL;
  if(((p_43 != NULL) && (p_43 != t)))
    _fail(t);
  else
    p_43 = t;
  if(match_string(t, "-o"))
    {
      t = not_null(p_43);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = not_null(p_43);
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL;
  if(((q_43 != NULL) && (q_43 != t)))
    _fail(t);
  else
    q_43 = t;
  if(((r_43 != NULL) && (r_43 != t)))
    _fail(t);
  else
    r_43 = t;
  if(((s_43 != NULL) && (s_43 != t)))
    _fail(t);
  else
    s_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_5, not_null(s_43));
  t = set_config_0_0(t);
  t = not_null(q_43);
  if(((t_43 != NULL) && (t_43 != t)))
    _fail(t);
  else
    t_43 = t;
  if(((u_43 != NULL) && (u_43 != t)))
    _fail(t);
  else
    u_43 = t;
  t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_43));
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_i_57;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_3, q_3, r_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm w_43 = NULL;
  if(((w_43 != NULL) && (w_43 != t)))
    _fail(t);
  else
    w_43 = t;
  if(match_string(t, "-i"))
    {
      t = not_null(w_43);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = not_null(w_43);
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,e_44 = NULL,f_44 = NULL;
  if(((x_43 != NULL) && (x_43 != t)))
    _fail(t);
  else
    x_43 = t;
  if(((y_43 != NULL) && (y_43 != t)))
    _fail(t);
  else
    y_43 = t;
  if(((z_43 != NULL) && (z_43 != t)))
    _fail(t);
  else
    z_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_6, not_null(z_43));
  t = set_config_0_0(t);
  t = not_null(x_43);
  if(((e_44 != NULL) && (e_44 != t)))
    _fail(t);
  else
    e_44 = t;
  if(((f_44 != NULL) && (f_44 != t)))
    _fail(t);
  else
    f_44 = t;
  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_44));
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_j_57;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_3, t_3, u_3, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm h_44 = NULL;
  if(((h_44 != NULL) && (h_44 != t)))
    _fail(t);
  else
    h_44 = t;
  t = term_l_57;
  t = set_config_0_0(t);
  t = not_null(h_44);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_m_57;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm i_44 = NULL;
  if(((i_44 != NULL) && (i_44 != t)))
    _fail(t);
  else
    i_44 = t;
  if(match_string(t, "-t"))
    {
      t = not_null(i_44);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--title", 0, ATtrue)))
        _fail(t);
      t = not_null(i_44);
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
  if(((j_44 != NULL) && (j_44 != t)))
    _fail(t);
  else
    j_44 = t;
  if(((k_44 != NULL) && (k_44 != t)))
    _fail(t);
  else
    k_44 = t;
  if(((l_44 != NULL) && (l_44 != t)))
    _fail(t);
  else
    l_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_19, not_null(l_44));
  t = set_config_0_0(t);
  t = not_null(j_44);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_n_57;
  return(t);
}
ATerm abox2html_options_0_0 (ATerm t)
{
  ATerm o_57 = t;
  int p_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(p_57);
    }
  else
    {
      t = o_57;
      {
        ATerm q_57 = t;
        int r_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(r_57);
          }
        else
          {
            t = q_57;
            {
              ATerm s_57 = t;
              int t_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0_0(t);
                  ;
                  LocalPopChoice(t_57);
                }
              else
                {
                  t = s_57;
                  {
                    ATerm u_57 = t;
                    int v_57 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(v_3, w_3, x_3, t);
                        ;
                        LocalPopChoice(v_57);
                      }
                    else
                      {
                        t = u_57;
                        t = ArgOption_3_0(y_3, z_3, a_4, t);
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
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
  if(((m_44 != NULL) && (m_44 != t)))
    _fail(t);
  else
    m_44 = t;
  if(((n_44 != NULL) && (n_44 != t)))
    _fail(t);
  else
    n_44 = t;
  t = term_o_5;
  t = whoami_0_0(t);
  if(((o_44 != NULL) && (o_44 != t)))
    _fail(t);
  else
    o_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_46, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_57), not_null(o_44)), term_w_57));
  t = printnl_0_0(t);
  t = term_v_7;
  t = exit_0_0(t);
  t = not_null(m_44);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL;
  t = report_run_time_0_0(t);
  if(((p_44 != NULL) && (p_44 != t)))
    _fail(t);
  else
    p_44 = t;
  t = term_o_5;
  t = whoami_0_0(t);
  if(((q_44 != NULL) && (q_44 != t)))
    _fail(t);
  else
    q_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_46, (ATerm) ATinsert(ATinsert(ATempty, term_y_57), not_null(q_44)));
  t = printnl_0_0(t);
  t = term_v_7;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_57;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm r_44 = NULL;
  if(((r_44 != NULL) && (r_44 != t)))
    _fail(t);
  else
    r_44 = t;
  t = SSL_TicksToSeconds(not_null(r_44));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_44 != NULL) && (s_44 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_44 = ATgetArgument(t, 0);
      if(((t_44 != NULL) && (t_44 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_58 = t;
    int b_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(s_44), not_null(t_44));
        ;
        LocalPopChoice(b_58);
      }
    else
      {
        t = a_58;
        t = SSL_addr(not_null(s_44), not_null(t_44));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm t)
{
  ATerm c_58 = t;
  int d_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = v_85(t);
      ;
      LocalPopChoice(d_58);
    }
  else
    {
      t = c_58;
      {
        ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL;
        if(((v_44 != NULL) && (v_44 != t)))
          _fail(t);
        else
          v_44 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((w_44 != NULL) && (w_44 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              w_44 = ATgetFirst((ATermList) t);
            if(((x_44 != NULL) && (x_44 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              x_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(w_44);
        if(((y_44 != NULL) && (y_44 != t)))
          _fail(t);
        else
          y_44 = t;
        t = not_null(x_44);
        if(((z_44 != NULL) && (z_44 != t)))
          _fail(t);
        else
          z_44 = t;
        t = not_null(v_44);
        if(((a_45 != NULL) && (a_45 != t)))
          _fail(t);
        else
          a_45 = t;
        if(((b_45 != NULL) && (b_45 != t)))
          _fail(t);
        else
          b_45 = t;
        t = not_null(z_44);
        t = foldr_2_0(v_85, w_85, t);
        if(((c_45 != NULL) && (c_45 != t)))
          _fail(t);
        else
          c_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_44), not_null(c_45));
        t = w_85(t);
        if(((d_45 != NULL) && (d_45 != t)))
          _fail(t);
        else
          d_45 = t;
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL;
  if(((e_45 != NULL) && (e_45 != t)))
    _fail(t);
  else
    e_45 = t;
  if(((f_45 != NULL) && (f_45 != t)))
    _fail(t);
  else
    f_45 = t;
  t = not_null(e_45);
  if(((g_45 != NULL) && (g_45 != t)))
    _fail(t);
  else
    g_45 = t;
  t = SSL_explode_term(not_null(g_45));
  if(match_cons(t, sym__2))
    {
      ATerm e_58 = ATgetArgument(t, 0);
      if(((h_45 != NULL) && (h_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(f_45);
  if(((i_45 != NULL) && (i_45 != t)))
    _fail(t);
  else
    i_45 = t;
  t = not_null(h_45);
  t = foldr_2_0(t_83, u_83, t);
  if(((j_45 != NULL) && (j_45 != t)))
    _fail(t);
  else
    j_45 = t;
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_w_7;
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  t = crush_2_0(b_4, add_0_0, t);
  t = ticks_to_seconds_0_0(t);
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_45 != NULL) && (k_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_45 = ATgetArgument(t, 0);
      if(((l_45 != NULL) && (l_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((m_45 != NULL) && (m_45 != t)))
    _fail(t);
  else
    m_45 = t;
  {
    ATerm f_58 = t;
    int g_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(k_45), not_null(l_45));
        ;
        LocalPopChoice(g_58);
      }
    else
      {
        t = f_58;
        t = SSL_gtr(not_null(k_45), not_null(l_45));
      }
    t = not_null(m_45);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_45 = NULL;
  ATerm h_58 = t;
  int i_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_45 = NULL,t_45 = NULL,u_45 = NULL;
      if(((p_45 != NULL) && (p_45 != t)))
        _fail(t);
      else
        p_45 = t;
      if(match_cons(t, sym__2))
        {
          if(((t_45 != NULL) && (t_45 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_45 = ATgetArgument(t, 0);
          if(((u_45 != NULL) && (u_45 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_45 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(t_45);
      if(((o_45 != NULL) && (o_45 != t)))
        _fail(t);
      else
        o_45 = t;
      t = not_null(u_45);
      if(((o_45 != NULL) && (o_45 != t)))
        _fail(t);
      else
        o_45 = t;
      t = not_null(p_45);
      ;
      LocalPopChoice(i_58);
    }
  else
    {
      t = h_58;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_100 (ATerm), ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm v_45 = NULL,w_45 = NULL,b_46 = NULL;
    if(((v_45 != NULL) && (v_45 != t)))
      _fail(t);
    else
      v_45 = t;
    if(((w_45 != NULL) && (w_45 != t)))
      _fail(t);
    else
      w_45 = t;
    t = term_r_28;
    t = get_config_0_0(t);
    if(((b_46 != NULL) && (b_46 != t)))
      _fail(t);
    else
      b_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_46), term_v_7);
    t = geq_0_0(t);
    t = not_null(v_45);
    t = z_100(t);
    return(t);
  }
  t = try_1_0(c_4, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm c_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
  if(((c_46 != NULL) && (c_46 != t)))
    _fail(t);
  else
    c_46 = t;
  t = run_time_0_0(t);
  if(((f_46 != NULL) && (f_46 != t)))
    _fail(t);
  else
    f_46 = t;
  t = not_null(c_46);
  if(((g_46 != NULL) && (g_46 != t)))
    _fail(t);
  else
    g_46 = t;
  t = term_o_5;
  t = whoami_0_0(t);
  if(((h_46 != NULL) && (h_46 != t)))
    _fail(t);
  else
    h_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_46, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_58), not_null(f_46)), term_k_29), not_null(h_46)));
  t = printnl_0_0(t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
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
ATerm e_4 (ATerm t)
{
  ATerm k_58 = t;
  int l_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Help_0_0(t);
      ;
      LocalPopChoice(l_58);
    }
  else
    {
      t = k_58;
      {
        ATerm m_58 = t;
        int n_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(n_58);
          }
        else
          {
            t = m_58;
            t = Version_0_0(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_73 (ATerm), ATerm t)
{
  ATerm o_58 = t;
  int p_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_58;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_58);
    }
  else
    {
      t = o_58;
      t = option_defined_1_0(e_4, t);
    }
  t = u_73(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm i_46 = NULL;
  if(((i_46 != NULL) && (i_46 != t)))
    _fail(t);
  else
    i_46 = t;
  t = SSL_table_create(not_null(i_46));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL;
  if(((j_46 != NULL) && (j_46 != t)))
    _fail(t);
  else
    j_46 = t;
  if(((k_46 != NULL) && (k_46 != t)))
    _fail(t);
  else
    k_46 = t;
  t = term_r_58;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_58, term_s_58, not_null(j_46));
  t = table_put_0_0(t);
  t = not_null(k_46);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm l_46 = NULL;
  if(((l_46 != NULL) && (l_46 != t)))
    _fail(t);
  else
    l_46 = t;
  t = SSL_table_destroy(not_null(l_46));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm m_46 = NULL;
  if(((m_46 != NULL) && (m_46 != t)))
    _fail(t);
  else
    m_46 = t;
  t = SSL_exit(not_null(m_46));
  return(t);
}
ATerm long_description_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
  if(((q_46 != NULL) && (q_46 != t)))
    _fail(t);
  else
    q_46 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_46 = ATgetFirst((ATermList) t);
      p_46 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL;
        t = not_null(o_46);
        if(((r_46 != NULL) && (r_46 != t)))
          _fail(t);
        else
          r_46 = t;
        t = not_null(p_46);
        if(((s_46 != NULL) && (s_46 != t)))
          _fail(t);
        else
          s_46 = t;
        t = not_null(q_46);
        if(((t_46 != NULL) && (t_46 != t)))
          _fail(t);
        else
          t_46 = t;
        t = not_null(s_46);
        if(((u_46 != NULL) && (u_46 != t)))
          _fail(t);
        else
          u_46 = t;
        if(((v_46 != NULL) && (v_46 != t)))
          _fail(t);
        else
          v_46 = t;
        t = g_0(t);
        if(((w_46 != NULL) && (w_46 != t)))
          _fail(t);
        else
          w_46 = t;
        t = not_null(v_46);
        if(((x_46 != NULL) && (x_46 != t)))
          _fail(t);
        else
          x_46 = t;
        t = not_null(r_46);
        t = f_0(t);
        if(((y_46 != NULL) && (y_46 != t)))
          _fail(t);
        else
          y_46 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(w_46)), not_null(y_46));
        if(((z_46 != NULL) && (z_46 != t)))
          _fail(t);
        else
          z_46 = t;
        t = not_null(u_46);
        {
          ATerm f_4 (ATerm t)
          {
            t = not_null(z_46);
            return(t);
          }
          t = reverse_acc_2_0(f_0, f_4, t);
          if(((a_47 != NULL) && (a_47 != t)))
            _fail(t);
          else
            a_47 = t;
        }
      }
    }
  else
    {
      ATerm b_47 = NULL,c_47 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = not_null(q_46);
      if(((b_47 != NULL) && (b_47 != t)))
        _fail(t);
      else
        b_47 = t;
      t = term_o_5;
      t = g_0(t);
      if(((c_47 != NULL) && (c_47 != t)))
        _fail(t);
      else
        c_47 = t;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  t = reverse_acc_2_0(_id, g_4, t);
  return(t);
}
ATerm short_description_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm v_71 (ATerm), ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL;
  if(((g_47 != NULL) && (g_47 != t)))
    _fail(t);
  else
    g_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((e_47 != NULL) && (e_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((h_47 != NULL) && (h_47 != t)))
    _fail(t);
  else
    h_47 = t;
  t = SSLgetAnnotations(not_null(g_47));
  if(((d_47 != NULL) && (d_47 != t)))
    _fail(t);
  else
    d_47 = t;
  t = not_null(e_47);
  t = v_71(t);
  if(((f_47 != NULL) && (f_47 != t)))
    _fail(t);
  else
    f_47 = t;
  if(((j_47 != NULL) && (j_47 != t)))
    _fail(t);
  else
    j_47 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(f_47)), not_null(d_47));
  if(((i_47 != NULL) && (i_47 != t)))
    _fail(t);
  else
    i_47 = t;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL;
  if(((l_47 != NULL) && (l_47 != t)))
    _fail(t);
  else
    l_47 = t;
  if(((m_47 != NULL) && (m_47 != t)))
    _fail(t);
  else
    m_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_47)), term_t_58);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_47 = NULL;
  ATerm u_58 = t;
  int v_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_57;
      t = get_config_0_0(t);
      if(((k_47 != NULL) && (k_47 != t)))
        _fail(t);
      else
        k_47 = t;
      ;
      LocalPopChoice(v_58);
    }
  else
    {
      t = u_58;
      {
        ATerm h_4 (ATerm t)
        {
          ATerm i_4 (ATerm t)
          {
            if(((k_47 != NULL) && (k_47 != t)))
              _fail(t);
            else
              k_47 = t;
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
        t = not_null(k_47);
        return(t);
      }
      t = short_description_1_0(k_4, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(j_4, t);
    t = term_w_58;
    t = echo_0_0(t);
    t = term_z_58;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    t = map_1_0(l_4, t);
    {
      ATerm m_4 (ATerm t)
      {
        ATerm n_47 = NULL,o_47 = NULL;
        if(((n_47 != NULL) && (n_47 != t)))
          _fail(t);
        else
          n_47 = t;
        {
          ATerm n_4 (ATerm t)
          {
            t = not_null(k_47);
            return(t);
          }
          t = long_description_1_0(n_4, t);
          if(((o_47 != NULL) && (o_47 != t)))
            _fail(t);
          else
            o_47 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(o_47)), term_a_59);
          t = echo_0_0(t);
        }
        return(t);
      }
      t = try_1_0(m_4, t);
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
  ATerm b_59 = t;
  int c_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(c_59);
    }
  else
    {
      t = b_59;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_47 != NULL) && (p_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_47 = ATgetArgument(t, 0);
      if(((q_47 != NULL) && (q_47 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_47 != NULL) && (r_47 != t)))
    _fail(t);
  else
    r_47 = t;
  t = SSL_printnl(not_null(p_47), not_null(q_47));
  t = not_null(r_47);
  return(t);
}
ATerm Undefined_1_0 (ATerm w_71 (ATerm), ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL;
  if(((v_47 != NULL) && (v_47 != t)))
    _fail(t);
  else
    v_47 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((t_47 != NULL) && (t_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((w_47 != NULL) && (w_47 != t)))
    _fail(t);
  else
    w_47 = t;
  t = SSLgetAnnotations(not_null(v_47));
  if(((s_47 != NULL) && (s_47 != t)))
    _fail(t);
  else
    s_47 = t;
  t = not_null(t_47);
  t = w_71(t);
  if(((u_47 != NULL) && (u_47 != t)))
    _fail(t);
  else
    u_47 = t;
  if(((y_47 != NULL) && (y_47 != t)))
    _fail(t);
  else
    y_47 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_47)), not_null(s_47));
  if(((x_47 != NULL) && (x_47 != t)))
    _fail(t);
  else
    x_47 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm p_79 (ATerm), ATerm t)
{
  ATerm z_47 (ATerm t)
  {
    ATerm d_59 = t;
    int e_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(p_79, _id, t);
        ;
        LocalPopChoice(e_59);
      }
    else
      {
        t = d_59;
        t = Cons_2_0(_id, z_47, t);
      }
    return(t);
  }
  t = z_47(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm t_92 (ATerm), ATerm t)
{
  t = fetch_1_0(t_92, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL;
  if(((b_48 != NULL) && (b_48 != t)))
    _fail(t);
  else
    b_48 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(b_48);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((c_48 != NULL) && (c_48 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            c_48 = ATgetFirst((ATermList) t);
          if(((d_48 != NULL) && (d_48 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(b_48);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL,j_48 = NULL;
  if(((e_48 != NULL) && (e_48 != t)))
    _fail(t);
  else
    e_48 = t;
  if(((f_48 != NULL) && (f_48 != t)))
    _fail(t);
  else
    f_48 = t;
  {
    ATerm f_59 = t;
    int g_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(g_59);
      }
    else
      {
        t = f_59;
        {
          ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL;
          if(((g_48 != NULL) && (g_48 != t)))
            _fail(t);
          else
            g_48 = t;
          if(((h_48 != NULL) && (h_48 != t)))
            _fail(t);
          else
            h_48 = t;
          t = not_null(g_48);
          if(((i_48 != NULL) && (i_48 != t)))
            _fail(t);
          else
            i_48 = t;
          t = (ATerm) ATinsert(ATempty, not_null(i_48));
        }
      }
    if(((j_48 != NULL) && (j_48 != t)))
      _fail(t);
    else
      j_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_27, not_null(j_48));
    t = printnl_0_0(t);
    t = not_null(e_48);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_57;
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
  ATerm h_59 = t;
  int i_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(i_59);
    }
  else
    {
      t = h_59;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm k_48 = NULL;
  if(((k_48 != NULL) && (k_48 != t)))
    _fail(t);
  else
    k_48 = t;
  t = SSL_implode_string(not_null(k_48));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_59 = t;
  int k_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(k_59);
    }
  else
    {
      t = j_59;
      {
        ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,v_48 = NULL,w_48 = NULL,c_49 = NULL;
        if(((o_48 != NULL) && (o_48 != t)))
          _fail(t);
        else
          o_48 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((p_48 != NULL) && (p_48 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              p_48 = ATgetFirst((ATermList) t);
            if(((q_48 != NULL) && (q_48 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              q_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(p_48);
        if(((r_48 != NULL) && (r_48 != t)))
          _fail(t);
        else
          r_48 = t;
        t = not_null(q_48);
        if(((v_48 != NULL) && (v_48 != t)))
          _fail(t);
        else
          v_48 = t;
        t = not_null(o_48);
        if(((w_48 != NULL) && (w_48 != t)))
          _fail(t);
        else
          w_48 = t;
        t = not_null(r_48);
        {
          ATerm o_4 (ATerm t)
          {
            t = not_null(v_48);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(o_4, t);
          if(((c_49 != NULL) && (c_49 != t)))
            _fail(t);
          else
            c_49 = t;
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL;
  if(((i_49 != NULL) && (i_49 != t)))
    _fail(t);
  else
    i_49 = t;
  if(((j_49 != NULL) && (j_49 != t)))
    _fail(t);
  else
    j_49 = t;
  t = not_null(i_49);
  if(((k_49 != NULL) && (k_49 != t)))
    _fail(t);
  else
    k_49 = t;
  t = SSL_explode_term(not_null(k_49));
  if(match_cons(t, sym__2))
    {
      ATerm l_59 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_59) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((l_49 != NULL) && (l_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(j_49);
  if(((m_49 != NULL) && (m_49 != t)))
    _fail(t);
  else
    m_49 = t;
  t = not_null(l_49);
  t = concat_0_0(t);
  if(((n_49 != NULL) && (n_49 != t)))
    _fail(t);
  else
    n_49 = t;
  return(t);
}
ATerm at_end_1_0 (ATerm v_79 (ATerm), ATerm t)
{
  ATerm o_49 (ATerm t)
  {
    ATerm m_59 = t;
    int n_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, o_49, t);
        ;
        LocalPopChoice(n_59);
      }
    else
      {
        t = m_59;
        t = Nil_0_0(t);
        t = v_79(t);
      }
    return(t);
  }
  t = o_49(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm p_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_49 != NULL) && (p_49 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_49 = ATgetArgument(t, 0);
      if(((w_49 != NULL) && (w_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((x_49 != NULL) && (x_49 != t)))
    _fail(t);
  else
    x_49 = t;
  t = not_null(p_49);
  {
    ATerm p_4 (ATerm t)
    {
      t = not_null(w_49);
      return(t);
    }
    t = at_end_1_0(p_4, t);
    if(((y_49 != NULL) && (y_49 != t)))
      _fail(t);
    else
      y_49 = t;
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_59 = t;
  int p_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(p_59);
    }
  else
    {
      t = o_59;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm z_49 = NULL;
  if(((z_49 != NULL) && (z_49 != t)))
    _fail(t);
  else
    z_49 = t;
  t = SSL_explode_string(not_null(z_49));
  return(t);
}
ATerm _2_0 (ATerm h_62 (ATerm), ATerm i_62 (ATerm), ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL;
  if(((i_50 != NULL) && (i_50 != t)))
    _fail(t);
  else
    i_50 = t;
  if(match_cons(t, sym__2))
    {
      if(((e_50 != NULL) && (e_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_50 = ATgetArgument(t, 0);
      if(((f_50 != NULL) && (f_50 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((j_50 != NULL) && (j_50 != t)))
    _fail(t);
  else
    j_50 = t;
  t = SSLgetAnnotations(not_null(i_50));
  if(((d_50 != NULL) && (d_50 != t)))
    _fail(t);
  else
    d_50 = t;
  t = not_null(e_50);
  t = h_62(t);
  if(((g_50 != NULL) && (g_50 != t)))
    _fail(t);
  else
    g_50 = t;
  t = not_null(f_50);
  t = i_62(t);
  if(((h_50 != NULL) && (h_50 != t)))
    _fail(t);
  else
    h_50 = t;
  if(((l_50 != NULL) && (l_50 != t)))
    _fail(t);
  else
    l_50 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_50), not_null(h_50)), not_null(d_50));
  if(((k_50 != NULL) && (k_50 != t)))
    _fail(t);
  else
    k_50 = t;
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm n_91 (ATerm), ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL;
  if(((m_50 != NULL) && (m_50 != t)))
    _fail(t);
  else
    m_50 = t;
  if(((n_50 != NULL) && (n_50 != t)))
    _fail(t);
  else
    n_50 = t;
  t = n_91(t);
  if(((o_50 != NULL) && (o_50 != t)))
    _fail(t);
  else
    o_50 = t;
  t = not_null(n_50);
  if(((p_50 != NULL) && (p_50 != t)))
    _fail(t);
  else
    p_50 = t;
  if(((q_50 != NULL) && (q_50 != t)))
    _fail(t);
  else
    q_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_46, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_50)), not_null(o_50)));
  t = printnl_0_0(t);
  t = not_null(m_50);
  return(t);
}
ATerm map_1_0 (ATerm e_79 (ATerm), ATerm t)
{
  ATerm r_50 (ATerm t)
  {
    ATerm q_59 = t;
    int r_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(r_59);
      }
    else
      {
        t = q_59;
        t = Cons_2_0(e_79, r_50, t);
      }
    return(t);
  }
  t = r_50(t);
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm s_50 = NULL;
  if(((s_50 != NULL) && (s_50 != t)))
    _fail(t);
  else
    s_50 = t;
  t = SSL_is_string(not_null(s_50));
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = try_1_0(eval_config_0_0, t);
  return(t);
}
ATerm v_51 (ATerm v_50, ATerm w_50, ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,e_51 = NULL;
  t = not_null(v_50);
  if(((x_50 != NULL) && (x_50 != t)))
    _fail(t);
  else
    x_50 = t;
  t = not_null(w_50);
  if(((y_50 != NULL) && (y_50 != t)))
    _fail(t);
  else
    y_50 = t;
  t = not_null(x_50);
  {
    ATerm s_59 = t;
    int t_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(t_59);
      }
    else
      {
        t = s_59;
        t = debug_1_0(r_4, t);
        _fail(t);
      }
    if(((e_51 != NULL) && (e_51 != t)))
      _fail(t);
    else
      e_51 = t;
  }
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_u_59;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_59 = t;
  int w_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(w_59);
    }
  else
    {
      t = v_59;
      {
        ATerm x_59 = t;
        int y_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_4, t);
            ;
            LocalPopChoice(y_59);
          }
        else
          {
            t = x_59;
            {
              ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL;
              if(((f_51 != NULL) && (f_51 != t)))
                _fail(t);
              else
                f_51 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_51 = ATgetArgument(t, 0);
                  {
                    ATerm i_51 = NULL;
                    t = not_null(g_51);
                    if(((i_51 != NULL) && (i_51 != t)))
                      _fail(t);
                    else
                      i_51 = t;
                  }
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_51 = ATgetArgument(t, 0);
                      t = v_51(not_null(g_51), not_null(f_51), t);
                    }
                  else
                    {
                      ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          if(((g_51 != NULL) && (g_51 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            g_51 = ATgetArgument(t, 0);
                          if(((h_51 != NULL) && (h_51 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            h_51 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = not_null(g_51);
                      if(((j_51 != NULL) && (j_51 != t)))
                        _fail(t);
                      else
                        j_51 = t;
                      t = not_null(h_51);
                      if(((k_51 != NULL) && (k_51 != t)))
                        _fail(t);
                      else
                        k_51 = t;
                      t = not_null(f_51);
                      if(((l_51 != NULL) && (l_51 != t)))
                        _fail(t);
                      else
                        l_51 = t;
                      if(((q_51 != NULL) && (q_51 != t)))
                        _fail(t);
                      else
                        q_51 = t;
                      t = not_null(j_51);
                      t = eval_config_0_0(t);
                      if(((r_51 != NULL) && (r_51 != t)))
                        _fail(t);
                      else
                        r_51 = t;
                      t = not_null(q_51);
                      if(((s_51 != NULL) && (s_51 != t)))
                        _fail(t);
                      else
                        s_51 = t;
                      t = not_null(k_51);
                      t = eval_config_0_0(t);
                      if(((t_51 != NULL) && (t_51 != t)))
                        _fail(t);
                      else
                        t_51 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_51), not_null(t_51));
                      t = conc_strings_0_0(t);
                      if(((u_51 != NULL) && (u_51 != t)))
                        _fail(t);
                      else
                        u_51 = t;
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
  ATerm w_51 = NULL;
  if(((w_51 != NULL) && (w_51 != t)))
    _fail(t);
  else
    w_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_59, not_null(w_51));
  t = table_get_0_0(t);
  {
    ATerm s_4 (ATerm t)
    {
      ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
      t = eval_config_0_0(t);
      if(((x_51 != NULL) && (x_51 != t)))
        _fail(t);
      else
        x_51 = t;
      if(((y_51 != NULL) && (y_51 != t)))
        _fail(t);
      else
        y_51 = t;
      if(((z_51 != NULL) && (z_51 != t)))
        _fail(t);
      else
        z_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_59, not_null(w_51), not_null(z_51));
      t = table_put_0_0(t);
      t = not_null(x_51);
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
ATerm try_1_0 (ATerm m_77 (ATerm), ATerm t)
{
  ATerm a_60 = t;
  int b_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_77(t);
      ;
      LocalPopChoice(b_60);
    }
  else
    {
      t = a_60;
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_d_60;
  t = set_config_0_0(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_e_60;
  return(t);
}
ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm a_52 = NULL;
  if(((a_52 != NULL) && (a_52 != t)))
    _fail(t);
  else
    a_52 = t;
  t = term_d_60;
  t = set_config_0_0(t);
  t = term_g_60;
  t = set_config_0_0(t);
  t = term_h_60;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_i_60;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_60 = t;
  int k_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_4, u_4, v_4, t);
      ;
      LocalPopChoice(k_60);
    }
  else
    {
      t = j_60;
      t = Option_3_0(w_4, x_4, y_4, t);
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_52 != NULL) && (b_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_52 = ATgetArgument(t, 0);
      if(((c_52 != NULL) && (c_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(b_52), not_null(c_52));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((d_52 != NULL) && (d_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_52 = ATgetArgument(t, 0);
      if(((e_52 != NULL) && (e_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_52 = ATgetArgument(t, 1);
      if(((f_52 != NULL) && (f_52 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        f_52 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((g_52 != NULL) && (g_52 != t)))
    _fail(t);
  else
    g_52 = t;
  if(((h_52 != NULL) && (h_52 != t)))
    _fail(t);
  else
    h_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_52), not_null(e_52));
  {
    ATerm l_60 = t;
    int m_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(m_60);
      }
    else
      {
        t = l_60;
        t = (ATerm) ATempty;
      }
    if(((i_52 != NULL) && (i_52 != t)))
      _fail(t);
    else
      i_52 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(d_52), not_null(e_52), (ATerm) ATinsert(CheckATermList(not_null(i_52)), not_null(f_52)));
    t = table_put_0_0(t);
    t = not_null(g_52);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm y_93 (ATerm), ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL;
  if(((j_52 != NULL) && (j_52 != t)))
    _fail(t);
  else
    j_52 = t;
  t = term_o_5;
  t = y_93(t);
  if(((k_52 != NULL) && (k_52 != t)))
    _fail(t);
  else
    k_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_58, term_y_58, not_null(k_52));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL;
  if(((m_52 != NULL) && (m_52 != t)))
    _fail(t);
  else
    m_52 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(m_52);
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((n_52 != NULL) && (n_52 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            n_52 = ATgetFirst((ATermList) t);
          if(((o_52 != NULL) && (o_52 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(n_52);
      if(((p_52 != NULL) && (p_52 != t)))
        _fail(t);
      else
        p_52 = t;
      t = not_null(o_52);
      if(((q_52 != NULL) && (q_52 != t)))
        _fail(t);
      else
        q_52 = t;
      t = not_null(m_52);
      if(((r_52 != NULL) && (r_52 != t)))
        _fail(t);
      else
        r_52 = t;
      t = not_null(p_52);
      t = a_0(t);
      t = not_null(r_52);
      if(((s_52 != NULL) && (s_52 != t)))
        _fail(t);
      else
        s_52 = t;
      t = term_o_5;
      t = b_0(t);
      if(((t_52 != NULL) && (t_52 != t)))
        _fail(t);
      else
        t_52 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(q_52)), not_null(t_52));
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm v_52 = NULL;
  if(((v_52 != NULL) && (v_52 != t)))
    _fail(t);
  else
    v_52 = t;
  if(match_string(t, "--help"))
    {
      t = not_null(v_52);
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = not_null(v_52);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = not_null(v_52);
        }
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_n_60;
  t = set_config_0_0(t);
  t = term_o_60;
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_p_60;
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  t = Option_3_0(z_4, a_5, b_5, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((w_52 != NULL) && (w_52 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        w_52 = ATgetFirst((ATermList) t);
      if(((x_52 != NULL) && (x_52 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        x_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(x_52)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_52)));
  return(t);
}
ATerm Cons_2_0 (ATerm w_66 (ATerm), ATerm x_66 (ATerm), ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL;
  if(((d_53 != NULL) && (d_53 != t)))
    _fail(t);
  else
    d_53 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((z_52 != NULL) && (z_52 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        z_52 = ATgetFirst((ATermList) t);
      if(((a_53 != NULL) && (a_53 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        a_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((e_53 != NULL) && (e_53 != t)))
    _fail(t);
  else
    e_53 = t;
  t = SSLgetAnnotations(not_null(d_53));
  if(((y_52 != NULL) && (y_52 != t)))
    _fail(t);
  else
    y_52 = t;
  t = not_null(z_52);
  t = w_66(t);
  if(((b_53 != NULL) && (b_53 != t)))
    _fail(t);
  else
    b_53 = t;
  t = not_null(a_53);
  t = x_66(t);
  if(((c_53 != NULL) && (c_53 != t)))
    _fail(t);
  else
    c_53 = t;
  if(((g_53 != NULL) && (g_53 != t)))
    _fail(t);
  else
    g_53 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_53)), not_null(b_53)), not_null(y_52));
  if(((f_53 != NULL) && (f_53 != t)))
    _fail(t);
  else
    f_53 = t;
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
  ATerm h_53 = NULL,i_53 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_53 != NULL) && (h_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_53 = ATgetArgument(t, 0);
      if(((i_53 != NULL) && (i_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_59, not_null(h_53), not_null(i_53));
  t = table_put_0_0(t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL;
  if(((k_53 != NULL) && (k_53 != t)))
    _fail(t);
  else
    k_53 = t;
  if(((l_53 != NULL) && (l_53 != t)))
    _fail(t);
  else
    l_53 = t;
  if(((m_53 != NULL) && (m_53 != t)))
    _fail(t);
  else
    m_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_57, not_null(m_53));
  t = set_config_0_0(t);
  t = not_null(k_53);
  if(((n_53 != NULL) && (n_53 != t)))
    _fail(t);
  else
    n_53 = t;
  if(((o_53 != NULL) && (o_53 != t)))
    _fail(t);
  else
    o_53 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_53));
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_93 (ATerm), ATerm t)
{
  ATerm j_53 = NULL;
  if(((j_53 != NULL) && (j_53 != t)))
    _fail(t);
  else
    j_53 = t;
  {
    ATerm c_5 (ATerm t)
    {
      t = term_q_60;
      t = w_93(t);
      return(t);
    }
    t = try_1_0(c_5, t);
    t = not_null(j_53);
    {
      ATerm e_5 (ATerm t)
      {
        ATerm r_60 = t;
        int s_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_60 = t;
            int u_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(u_60);
              }
            else
              {
                t = t_60;
                t = w_93(t);
                t = Cons_2_0(_id, e_5, t);
              }
            ;
            LocalPopChoice(s_60);
          }
        else
          {
            t = r_60;
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
  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL;
  if(((q_53 != NULL) && (q_53 != t)))
    _fail(t);
  else
    q_53 = t;
  if(match_cons(t, sym__3))
    {
      if(((r_53 != NULL) && (r_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_53 = ATgetArgument(t, 0);
      if(((s_53 != NULL) && (s_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_53 = ATgetArgument(t, 1);
      if(((t_53 != NULL) && (t_53 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        t_53 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(r_53), not_null(s_53), not_null(t_53));
  t = not_null(q_53);
  return(t);
}
ATerm c_54 (ATerm x_53, ATerm t)
{
  ATerm y_53 = NULL;
  t = not_null(x_53);
  if(((y_53 != NULL) && (y_53 != t)))
    _fail(t);
  else
    y_53 = t;
  t = not_null(x_53);
  {
    ATerm v_60 = t;
    int w_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_58;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(w_60);
      }
    else
      {
        t = v_60;
        t = option_defined_1_0(Help_0_0, t);
      }
    t = not_null(y_53);
    t = system_usage_0_0(t);
    t = term_w_7;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,b_54 = NULL;
  if(((v_53 != NULL) && (v_53 != t)))
    _fail(t);
  else
    v_53 = t;
  t = term_x_60;
  t = table_put_0_0(t);
  t = not_null(v_53);
  {
    ATerm f_5 (ATerm t)
    {
      ATerm y_60 = t;
      int z_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_93(t);
          ;
          LocalPopChoice(z_60);
        }
      else
        {
          t = y_60;
          {
            ATerm a_61 = t;
            int b_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(b_61);
              }
            else
              {
                t = a_61;
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
        ATerm c_61 = t;
        int d_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_53 = NULL;
            if(((z_53 != NULL) && (z_53 != t)))
              _fail(t);
            else
              z_53 = t;
            {
              ATerm e_61 = t;
              int f_61 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_54(not_null(z_53), t);
                  ;
                  LocalPopChoice(f_61);
                }
              else
                {
                  t = e_61;
                  {
                    ATerm a_54 = NULL;
                    t = not_null(z_53);
                    if(((a_54 != NULL) && (a_54 != t)))
                      _fail(t);
                    else
                      a_54 = t;
                    t = term_c_60;
                    t = get_config_0_0(t);
                    t = not_null(a_54);
                    t = system_about_0_0(t);
                    t = term_w_7;
                    t = exit_0_0(t);
                  }
                }
            }
            ;
            LocalPopChoice(d_61);
          }
        else
          {
            t = c_61;
            {
              ATerm h_5 (ATerm t)
              {
                ATerm i_5 (ATerm t)
                {
                  if(((w_53 != NULL) && (w_53 != t)))
                    _fail(t);
                  else
                    w_53 = t;
                  return(t);
                }
                t = Undefined_1_0(i_5, t);
                return(t);
              }
              t = option_defined_1_0(h_5, t);
              t = (ATerm) ATmakeAppl(sym__2, term_n_46, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_53)), term_g_61));
              t = printnl_0_0(t);
              t = system_usage_0_0(t);
              t = term_v_7;
              t = exit_0_0(t);
            }
          }
        return(t);
      }
      t = try_1_0(g_5, t);
      if(((b_54 != NULL) && (b_54 != t)))
        _fail(t);
      else
        b_54 = t;
      t = term_x_58;
      t = table_destroy_0_0(t);
      t = not_null(b_54);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm t)
{
  t = parse_options_1_0(w_73, t);
  t = store_options_0_0(t);
  t = y_73(t);
  {
    ATerm h_61 = t;
    int i_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_73, t);
        ;
        LocalPopChoice(i_61);
      }
    else
      {
        t = h_61;
        {
          ATerm j_61 = t;
          int k_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_73(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_61);
            }
          else
            {
              t = j_61;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t)
{
  t = option_wrap_4_0(a_74, default_usage_0_0, _id, b_74, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm l_61 = t;
  int m_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = gen_css_0_0(t);
      ;
      LocalPopChoice(m_61);
    }
  else
    {
      t = l_61;
      t = abox2html_0_0(t);
    }
  return(t);
}
ATerm io_abox2html_0_0 (ATerm t)
{
  t = option_wrap_2_0(abox2html_options_0_0, j_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_abox2html_0_0(t);
  return(t);
}
