#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Path_1;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Hashtable_1;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_RDef_3;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Path_2;
Symbol sym_SDef_3;
static void init_module_constructors (void)
{
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
}
ATerm term_z_61;
ATerm term_w_61;
ATerm term_p_61;
ATerm term_o_61;
ATerm term_j_61;
ATerm term_h_61;
ATerm term_g_61;
ATerm term_e_61;
ATerm term_d_61;
ATerm term_c_61;
ATerm term_z_60;
ATerm term_x_60;
ATerm term_w_60;
ATerm term_t_60;
ATerm term_s_60;
ATerm term_r_60;
ATerm term_q_60;
ATerm term_p_60;
ATerm term_o_60;
ATerm term_n_60;
ATerm term_m_60;
ATerm term_l_60;
ATerm term_i_60;
ATerm term_h_60;
ATerm term_f_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_q_59;
ATerm term_n_59;
ATerm term_m_59;
ATerm term_i_59;
ATerm term_h_59;
ATerm term_r_58;
ATerm term_q_58;
ATerm term_p_58;
ATerm term_g_58;
ATerm term_x_57;
ATerm term_w_57;
ATerm term_v_57;
ATerm term_u_57;
ATerm term_t_57;
ATerm term_y_56;
ATerm term_v_56;
ATerm term_p_56;
ATerm term_o_56;
ATerm term_i_56;
ATerm term_h_56;
ATerm term_g_56;
ATerm term_f_56;
ATerm term_d_56;
ATerm term_b_56;
ATerm term_z_55;
ATerm term_w_55;
ATerm term_v_55;
ATerm term_u_55;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_q_55;
ATerm term_p_55;
ATerm term_o_55;
ATerm term_n_55;
ATerm term_m_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_b_55;
ATerm term_s_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_u_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_c_49;
ATerm term_v_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_n_48;
ATerm term_g_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_m_47;
ATerm term_s_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_t_45;
ATerm term_m_45;
ATerm term_i_45;
ATerm term_e_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_r_44;
ATerm term_p_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_v_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_m_43;
ATerm term_p_41;
ATerm term_n_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_d_41;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_u_40;
ATerm term_o_39;
ATerm term_l_39;
ATerm term_j_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_a_39;
ATerm term_y_38;
ATerm term_v_38;
ATerm term_r_38;
ATerm term_o_38;
ATerm term_k_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_z_37;
ATerm term_s_37;
ATerm term_y_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_l_36;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_z_34;
ATerm term_w_34;
ATerm term_s_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_i_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_p_33;
ATerm term_d_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_n_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_o_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_g_31;
ATerm term_u_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_j_30;
ATerm term_h_30;
ATerm term_i_29;
ATerm term_g_29;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_p_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_y_27;
ATerm term_l_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_t_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_f_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_a_24;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_p_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_v_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".sci", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in `", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("', concrete syntax in `", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("'", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_p_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_v_19);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_20, term_c_20, term_o_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_20, term_r_19, term_r_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_20, term_u_20, term_v_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_20, term_y_20, term_z_20);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_21, term_d_21, term_e_21);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_21, term_h_21, term_i_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_21, term_n_21, term_o_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_21, term_r_21, term_s_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_21, term_z_21, term_a_22);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_22, term_i_22, term_j_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_22, term_p_22, term_w_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_23, term_d_23, term_h_23);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_23, term_l_23, term_q_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_23, term_a_24, term_d_24);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_24, term_k_24, term_l_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_24, term_r_24, term_u_24);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_24, term_x_24, term_y_24);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_25, term_c_25, term_f_25);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_25, term_l_25, term_m_25);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_25, term_p_25, term_q_25);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_25, term_w_25, term_x_25);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_25, term_a_26, term_b_26);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_26, term_f_26, term_g_26);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_26, term_j_26, term_k_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_26, term_n_26, term_o_26);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_26, term_r_26, term_s_26);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_26, term_v_26, term_w_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_26, term_a_27, term_b_27);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_j_28);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_v_28);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_h_30);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_p_30);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("preprocessed syntax (after pre-desugar) written to file", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_d_32);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_h_32);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_o_31);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_b_28);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_b_33);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_w_33);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_e_34);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_s_34);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".renamed", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_u_40);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_p_44);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym__2, term_h_44, term_y_44);
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(sym__2, term_h_44, term_i_44);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_a_33);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_33);
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(sym__2, term_l_46, term_v_31);
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym__2, term_h_32, term_v_31);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym__2, term_n_48, term_v_31);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(sym__2, term_w_33, term_v_31);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(sym__2, term_v_28, term_v_31);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(sym__2, term_z_49, term_v_31);
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(sym__2, term_d_51, term_v_31);
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(sym__2, term_g_51, term_v_31);
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(sym__2, term_j_51, term_v_31);
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(sym__2, term_h_30, term_c_20);
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(sym__2, term_l_30, term_a_33);
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(sym__2, term_s_34, term_v_31);
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_o_56);
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(sym__2, term_d_46, term_e_46);
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(sym__2, term_t_57, term_v_31);
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(sym__3, term_d_46, term_e_46, (ATerm) ATempty);
  ATprotect(&(term_h_59));
  term_h_59 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_d_51);
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_t_57);
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_59));
  term_n_59 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_59));
  term_q_59 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.6pre", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(sym__2, term_u_40, term_a_60);
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_c_20);
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(sym__2, term_p_19, term_a_33);
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(sym__2, term_x_49, term_y_20);
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(sym__2, term_e_34, (ATerm) ATempty);
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_c_61));
  term_c_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(sym__2, term_p_30, term_d_61);
  ATprotect(&(term_g_61));
  term_g_61 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_c_28);
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_g_51);
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("strc-manual.txt", 0, ATtrue));
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_j_51);
  ATprotect(&(term_z_61));
  term_z_61 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm j_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm save_as_1_0 (ATerm v_84 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm g_110 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm t);
static ATerm r_10 (ATerm q_49, ATerm r_49, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm q_110 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm g_119 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm v_21, ATerm w_21, ATerm t);
ATerm foldr_3_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm j_110 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm output_preproc_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm h_110 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm z_93 (ATerm), ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm o_10 (ATerm b_22, ATerm c_22, ATerm t);
static ATerm p_10 (ATerm r_23, ATerm s_23, ATerm t);
static ATerm q_10 (ATerm e_93 (ATerm), ATerm c_171, ATerm b_24, ATerm t);
static ATerm t_10 (ATerm w_106 (ATerm), ATerm k_43, ATerm i_43, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm h_118 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm u_84 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm z_0 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm f_109 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm l_104 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_10 (ATerm x_21, ATerm t);
static ATerm w_10 (ATerm w_41, ATerm x_41, ATerm t);
static ATerm y_10 (ATerm c_42, ATerm d_42, ATerm t);
static ATerm z_10 (ATerm q_50, ATerm s_50, ATerm u_50, ATerm w_50, ATerm r_50, ATerm t_50, ATerm v_50, ATerm x_50, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm t_11 (ATerm h_55, ATerm i_55, ATerm t);
static ATerm a_11 (ATerm t_53, ATerm u_53, ATerm t);
ATerm end_scope_1_0 (ATerm t_106 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm s_106 (ATerm), ATerm t);
static ATerm r_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm s_118 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm c_93 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm d_109 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm e_109 (ATerm), ATerm t);
static ATerm b_11 (ATerm a_45, ATerm b_45, ATerm t);
static ATerm c_11 (ATerm n_57, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm h_109 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm g_109 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm i_109 (ATerm), ATerm t);
static ATerm f_11 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm d_30, ATerm c_30, ATerm t);
static ATerm g_11 (ATerm y_97 (ATerm), ATerm z_29, ATerm y_29, ATerm t);
static ATerm i_10 (ATerm t);
static ATerm h_11 (ATerm l_54, ATerm m_54, ATerm n_54, ATerm t);
static ATerm i_11 (ATerm z_113 (ATerm), ATerm v_54, ATerm u_54, ATerm t);
static ATerm m_11 (ATerm t_38, ATerm u_38, ATerm t);
static ATerm m_46 (ATerm c_46, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_11 (ATerm x_23, ATerm t);
static ATerm k_11 (ATerm c_39, ATerm d_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm k_48 (ATerm a_47, ATerm t);
static ATerm l_48 (ATerm e_47, ATerm f_47, ATerm g_47, ATerm t);
static ATerm m_48 (ATerm t_47, ATerm u_47, ATerm v_47, ATerm t);
static ATerm l_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm v_10 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm q_101 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm s_12 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm z_53 (ATerm t_52, ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm n_11 (ATerm z_48, ATerm y_48, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_11 (ATerm w_48, ATerm x_48, ATerm t);
ATerm at_end_1_0 (ATerm e_94 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_59 (ATerm t_58, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm p_11 (ATerm a_49, ATerm b_49, ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
ATerm strc_options_0_0 (ATerm t);
static ATerm q_11 (ATerm l_57, ATerm m_57, ATerm t);
static ATerm r_11 (ATerm q_57, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm n_93 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm k_0 (ATerm), ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_93 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm h_18 (ATerm t);
static ATerm i_18 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm u_11 (ATerm o_53, ATerm p_53, ATerm n_53, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm f_63 (ATerm), ATerm g_63 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm w_113 (ATerm), ATerm t);
static ATerm m_18 (ATerm t);
static ATerm n_18 (ATerm t);
static ATerm q_18 (ATerm t);
static ATerm r_18 (ATerm t);
ATerm parse_options_1_0 (ATerm v_113 (ATerm), ATerm t);
static ATerm w_11 (ATerm g_57, ATerm h_57, ATerm i_57, ATerm t);
static ATerm x_11 (ATerm j_57, ATerm k_57, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_57, ATerm p_57, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm a_55, ATerm t);
static ATerm y_11 (ATerm t_48, ATerm u_48, ATerm t);
static ATerm z_11 (ATerm t_37, ATerm u_37, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm init_strc_config_0_0 (ATerm t);
static ATerm u_18 (ATerm t);
static ATerm x_18 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm y_18 (ATerm t);
ATerm strc_pre_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm o_1 = NULL;
  t = pass_verbose_0_0(t);
  o_1 = t;
  t = (ATerm) ATinsert(CheckATermList(o_1), term_b_19);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm p_1 = NULL;
  t = pass_verbose_0_0(t);
  p_1 = t;
  t = (ATerm) ATinsert(CheckATermList(p_1), term_b_19);
  return(t);
}
ATerm save_as_1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,f_0 = NULL,m_0 = NULL,q_0 = NULL,w_0 = NULL,a_1 = NULL;
  f_0 = t;
  {
    static ATerm a_0 (ATerm t)
    {
      static ATerm b_0 (ATerm t)
      {
        ATerm b_1 = NULL,c_1 = NULL;
        t = v_84(t);
        b_1 = t;
        t = term_c_19;
        c_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_19, b_1);
        t = z_11(c_1, b_1, t);
        return(t);
      }
      t = get_outfile_1_0(b_0, t);
      if(((c_0 != NULL) && (c_0 != t)))
        _fail(t);
      else
        c_0 = t;
      return(t);
    }
    t = copy_to_1_0(a_0, t);
  }
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 = NULL,n_1 = NULL;
        n_1 = t;
        if(match_cons(t, sym_FILE_1))
          {
            l_1 = ATgetArgument(t, 0);
            {
              ATerm h_0 = NULL,d_1 = NULL;
              t = SSLgetAnnotations(n_1);
              h_0 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
              d_1 = t;
              t = SSLsetAnnotations(d_1, h_0);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_1;
          }
        LocalPopChoice(f_19);
        t = xtc_transform_file_2_0(j_0, s_0, t);
      }
    else
      {
        t = e_19;
        t = xtc_transform_term_2_0(u_0, y_0, t);
      }
  }
  {
    static ATerm e_1 (ATerm t)
    {
      ATerm q_1 = NULL;
      t = term_g_19;
      q_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_0), term_g_19);
      t = z_11(not_null(c_0), q_1, t);
      if(((e_0 != NULL) && (e_0 != t)))
        _fail(t);
      else
        e_0 = t;
      return(t);
    }
    t = copy_to_1_0(e_1, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_19), not_null(e_0)), term_i_19), not_null(c_0)), term_h_19);
  a_1 = t;
  t = SSL_concat_strings(a_1);
  m_0 = t;
  t = term_l_19;
  q_0 = t;
  t = (ATerm) ATinsert(ATempty, m_0);
  w_0 = t;
  t = SSL_printnl(q_0, w_0);
  t = f_0;
  return(t);
}
ATerm if_keep2_1_0 (ATerm g_110 (ATerm), ATerm t)
{
  ATerm t_1 = NULL;
  t_1 = t;
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_2 = NULL,c_2 = NULL,d_2 = NULL;
        t = term_o_19;
        c_2 = t;
        t = term_p_19;
        d_2 = t;
        t = term_q_19;
        t = t_11(c_2, d_2, t);
        a_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_2, term_r_19);
        t = geq_0_0(t);
        t = t_1;
        t = g_110(t);
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        t = t_1;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL;
  t = term_v_19;
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_2 = NULL,k_2 = NULL;
        t = term_o_19;
        j_2 = t;
        t = term_v_19;
        k_2 = t;
        t = term_a_20;
        t = t_11(j_2, k_2, t);
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = term_c_20;
      }
  }
  g_2 = t;
  t = term_c_20;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_2, term_c_20);
  t = y_10(g_2, i_2, t);
  h_2 = t;
  t = SSL_int_to_string(h_2);
  f_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_2), term_v_19);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_20 = ATgetArgument(t, 0);
      if(match_cons(d_20, sym_Stream_1))
        {
          q_2 = ATgetArgument(d_20, 0);
        }
      else
        _fail(t);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(q_2, r_2, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm t)
{
  ATerm m_2 = NULL,p_2 = NULL;
  p_2 = t;
  t = xtc_new_file_0_0(t);
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_2, p_2);
  t = q_10(g_1, m_2, p_2, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_2);
  t = xtc_transform_file_2_0(f_118, g_118, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm r_10 (ATerm q_49, ATerm r_49, ATerm t)
{
  t = SSL_execvp(q_49, r_49);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL;
  s_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      t_3 = ATgetArgument(t, 0);
      {
        ATerm m_1 = NULL,s_1 = NULL;
        t = SSL_int_to_string(t_3);
        m_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_20), m_1), term_f_20);
        s_1 = t;
        t = SSL_concat_strings(s_1);
      }
    }
  else
    {
      ATerm s_2 = NULL,t_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          t_3 = ATgetArgument(t, 0);
          u_3 = ATgetArgument(t, 1);
          v_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(u_3);
      s_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_3), term_i_20), s_2), term_h_20), t_3);
      t_2 = t;
      t = SSL_concat_strings(t_2);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm y_3 = NULL;
  y_3 = t;
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm l_20 = ATgetArgument(t, 0);
              if((y_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm m_20 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_27), term_y_26), term_t_26), term_p_26), term_l_26), term_h_26), term_c_26), term_y_25), term_r_25), term_n_25), term_h_25), term_z_24), term_v_24), term_m_24), term_e_24), term_t_23), term_i_23), term_z_22), term_l_22), term_d_22), term_t_21), term_p_21), term_k_21), term_f_21), term_a_21), term_w_20), term_s_20), term_p_20);
        t = fetch_elem_1_0(h_1, t);
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, y_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm d_4 = NULL,s_4 = NULL;
  d_4 = t;
  {
    ATerm e_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_27 = ATgetArgument(t, 0);
            s_4 = ATgetArgument(t, 1);
            {
              ATerm h_27 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_27);
        {
          ATerm i_27 = t;
          int j_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_2 = NULL,g_3 = NULL,j_3 = NULL;
              t = s_4;
              {
                ATerm k_27 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_27;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              z_2 = t;
              t = term_l_19;
              g_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, z_2), term_l_27);
              j_3 = t;
              t = SSL_printnl(g_3, j_3);
              t = (ATerm) ATmakeAppl(sym__2, term_l_19, (ATerm) ATinsert(ATinsert(ATempty, z_2), term_l_27));
              LocalPopChoice(j_27);
            }
          else
            {
              t = i_27;
              t = d_4;
            }
        }
      }
    else
      {
        t = e_27;
        t = d_4;
      }
  }
  t = d_4;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm q_110 (ATerm), ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL;
  f_5 = t;
  t = fork_0_0(t);
  e_5 = t;
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = f_5;
        t = q_110(t);
        LocalPopChoice(t_27);
      }
    else
      {
        t = s_27;
        t = SSL_waitpid(e_5);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_27 = ATgetArgument(t, 0);
            if(((ATgetType(u_27) != AT_INT) || (ATgetInt((ATermInt) u_27) != 0)))
              _fail(t);
            {
              ATerm v_27 = ATgetArgument(t, 1);
            }
            {
              ATerm w_27 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_5;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL;
  n_5 = t;
  t = g_119(t);
  t = xtc_find_0_0(t);
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_5, n_5);
  {
    static ATerm i_1 (ATerm t)
    {
      ATerm o_5 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, m_5, n_5);
      t = r_10(m_5, n_5, t);
      t = term_y_27;
      o_5 = t;
      t = SSL_exit(o_5);
      return(t);
    }
    t = fork_and_wait_1_0(i_1, t);
  }
  t = n_5;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL;
  s_5 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm u_5 = NULL,v_5 = NULL;
      t = s_5;
      t = xtc_new_file_0_0(t);
      u_5 = t;
      t = x_0(t);
      v_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_5, (ATerm) ATinsert(ATinsert(ATempty, u_5), term_b_28));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_5);
    }
  else
    {
      ATerm d_6 = NULL,h_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_5;
      t = xtc_new_file_0_0(t);
      d_6 = t;
      t = x_0(t);
      h_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_6), term_b_28), t_5), term_c_28));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_6);
    }
  return(t);
}
ATerm comp_0_2 (ATerm v_21, ATerm w_21, ATerm t)
{
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_21 = NULL,f_22 = NULL;
      f_22 = t;
      if(match_cons(t, sym_FILE_1))
        {
          u_21 = ATgetArgument(t, 0);
          {
            ATerm d_13 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(f_22);
            d_13 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, u_21);
            f_1 = t;
            t = SSLsetAnnotations(f_1, d_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_22;
        }
      LocalPopChoice(f_28);
      {
        static ATerm j_1 (ATerm t)
        {
          t = v_21;
          return(t);
        }
        static ATerm r_1 (ATerm t)
        {
          ATerm g_22 = NULL;
          t = pass_verbose_0_0(t);
          g_22 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_21), g_22), (ATerm) ATinsert(ATempty, term_i_28));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(j_1, r_1, t);
      }
    }
  else
    {
      t = e_28;
      {
        static ATerm u_1 (ATerm t)
        {
          t = v_21;
          return(t);
        }
        static ATerm v_1 (ATerm t)
        {
          ATerm h_22 = NULL;
          t = pass_verbose_0_0(t);
          h_22 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_21), h_22), (ATerm) ATinsert(ATempty, term_i_28));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(u_1, v_1, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL;
  n_6 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_6;
      t = o_100(t);
    }
  else
    {
      ATerm t_6 = NULL,u_6 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_6 = ATgetFirst((ATermList) t);
          p_6 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_6;
      t = q_100(t);
      t_6 = t;
      t = p_6;
      t = foldr_3_0(o_100, p_100, q_100, t);
      u_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_6, u_6);
      t = p_100(t);
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm y_6 = NULL;
  y_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_6), term_j_28);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL;
  t = term_o_19;
  w_6 = t;
  t = term_j_28;
  x_6 = t;
  t = term_k_28;
  t = t_11(w_6, x_6, t);
  t = foldr_3_0(w_1, conc_0_0, x_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_l_28;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm b_5 = NULL;
  t = pass_verbose_0_0(t);
  b_5 = t;
  t = (ATerm) ATinsert(CheckATermList(b_5), term_i_28);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_l_28;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm d_5 = NULL;
  t = pass_verbose_0_0(t);
  d_5 = t;
  t = (ATerm) ATinsert(CheckATermList(d_5), term_i_28);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = get_outfile_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm h_8 = NULL;
  h_8 = t;
  {
    ATerm s_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,m_4 = NULL,o_4 = NULL;
        t = term_o_19;
        m_4 = t;
        t = term_v_28;
        o_4 = t;
        t = term_w_28;
        t = t_11(m_4, o_4, t);
        t = h_8;
        {
          ATerm x_28 = t;
          int c_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_8;
              {
                ATerm d_29 = t;
                int f_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_4 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        x_4 = ATgetArgument(t, 0);
                        {
                          ATerm q_5 = NULL,k_1 = NULL;
                          t = SSLgetAnnotations(h_8);
                          q_5 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, x_4);
                          k_1 = t;
                          t = SSLsetAnnotations(k_1, q_5);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = h_8;
                      }
                    LocalPopChoice(f_29);
                    t = xtc_transform_file_2_0(y_1, z_1, t);
                  }
                else
                  {
                    t = d_29;
                    t = xtc_transform_term_2_0(b_2, e_2, t);
                  }
              }
              LocalPopChoice(c_29);
            }
          else
            {
              t = x_28;
              {
                ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
                t = term_l_19;
                h_5 = t;
                t = (ATerm) ATinsert(ATempty, term_g_29);
                i_5 = t;
                t = SSL_printnl(h_5, i_5);
                t = term_c_20;
                g_5 = t;
                t = SSL_exit(g_5);
                t = (ATerm) ATinsert(ATempty, term_g_29);
              }
            }
        }
        t = copy_to_1_0(l_2, t);
        i_4 = t;
        t = term_l_19;
        j_4 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_i_29));
        k_4 = t;
        t = SSL_printnl(j_4, k_4);
        t = i_4;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(u_28);
      }
    else
      {
        t = s_28;
        t = h_8;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm j_110 (ATerm), ATerm t)
{
  ATerm s_8 = NULL;
  s_8 = t;
  {
    ATerm u_29 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
        t = term_o_19;
        v_8 = t;
        t = term_p_19;
        w_8 = t;
        t = term_q_19;
        t = t_11(v_8, w_8, t);
        u_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_8, term_n_26);
        t = geq_0_0(t);
        t = s_8;
        t = j_110(t);
        LocalPopChoice(b_30);
      }
    else
      {
        t = u_29;
        t = s_8;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_9 = NULL,b_9 = NULL;
      t = term_o_19;
      a_9 = t;
      t = term_h_30;
      b_9 = t;
      t = term_j_30;
      t = t_11(a_9, b_9, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_h_30);
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
      t = (ATerm) ATinsert(ATempty, term_l_30);
    }
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm i_9 = NULL,l_9 = NULL,p_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
  p_9 = t;
  t = term_m_30;
  i_9 = t;
  t = term_o_19;
  u_9 = t;
  t = term_p_30;
  v_9 = t;
  t = term_q_30;
  t = t_11(u_9, v_9, t);
  t_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_9), term_p_30);
  l_9 = t;
  t = p_9;
  t = comp_0_2(i_9, l_9, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = get_outfile_1_0(u_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm output_preproc_0_0 (ATerm t)
{
  ATerm r_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_9 = NULL,a_10 = NULL,c_10 = NULL;
      t = copy_to_1_0(o_2, t);
      z_9 = t;
      t = term_l_19;
      a_10 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_30));
      c_10 = t;
      t = SSL_printnl(a_10, c_10);
      t = z_9;
      t = xtc_io_exit_0_0(t);
      LocalPopChoice(t_30);
    }
  else
    {
      t = r_30;
    }
  return(t);
}
ATerm if_keep3_1_0 (ATerm h_110 (ATerm), ATerm t)
{
  ATerm g_10 = NULL;
  g_10 = t;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_10 = NULL,l_10 = NULL,s_10 = NULL;
        t = term_o_19;
        l_10 = t;
        t = term_p_19;
        s_10 = t;
        t = term_q_19;
        t = t_11(l_10, s_10, t);
        j_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_10, term_u_20);
        t = geq_0_0(t);
        t = g_10;
        t = h_110(t);
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = g_10;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm z_93 (ATerm), ATerm t)
{
  ATerm x_10 = NULL;
  static ATerm v_2 (ATerm t)
  {
    t = z_93(t);
    if(((x_10 != NULL) && (x_10 != t)))
      _fail(t);
    else
      x_10 = t;
    return(t);
  }
  t = fetch_1_0(v_2, t);
  t = not_null(x_10);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL;
  x_13 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      y_13 = ATgetArgument(t, 0);
      {
        ATerm a_6 = NULL,c_6 = NULL,b_3 = NULL;
        t = SSLgetAnnotations(x_13);
        a_6 = t;
        t = y_13;
        t = fetch_elem_1_0(x_2, t);
        c_6 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, c_6);
        b_3 = t;
        t = SSLsetAnnotations(b_3, a_6);
      }
    }
  else
    {
      ATerm v_6 = NULL,d_7 = NULL,c_3 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          y_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_13);
      v_6 = t;
      t = y_13;
      t = fetch_elem_1_0(y_2, t);
      d_7 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, d_7);
      c_3 = t;
      t = SSLsetAnnotations(c_3, v_6);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,i_6 = NULL;
  f_6 = t;
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            g_6 = ATgetArgument(t, 0);
            i_6 = ATgetArgument(t, 1);
            {
              ATerm a_31 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_30);
        t = g_6;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = i_6;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_6;
      }
    else
      {
        t = y_30;
        if(match_cons(t, sym_RDef_3))
          {
            g_6 = ATgetArgument(t, 0);
            i_6 = ATgetArgument(t, 1);
            {
              ATerm b_31 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = g_6;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = i_6;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_6;
      }
  }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
  f_7 = t;
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            g_7 = ATgetArgument(t, 0);
            h_7 = ATgetArgument(t, 1);
            {
              ATerm e_31 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_31);
        t = g_7;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = h_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_7;
      }
    else
      {
        t = c_31;
        if(match_cons(t, sym_RDef_3))
          {
            g_7 = ATgetArgument(t, 0);
            h_7 = ATgetArgument(t, 1);
            {
              ATerm f_31 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = g_7;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = h_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_7;
      }
  }
  return(t);
}
ATerm check_other_main_0_0 (ATerm t)
{
  ATerm n_12 = NULL,q_12 = NULL,r_12 = NULL;
  t = fetch_elem_1_0(w_2, t);
  n_12 = t;
  t = term_l_19;
  q_12 = t;
  t = (ATerm) ATinsert(ATempty, term_g_31);
  r_12 = t;
  t = SSL_printnl(q_12, r_12);
  t = n_12;
  return(t);
}
static ATerm o_10 (ATerm b_22, ATerm c_22, ATerm t)
{
  t = b_22;
  {
    ATerm h_31 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_31;
      }
  }
  t = c_22;
  {
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(j_31);
      }
    else
      {
        t = i_31;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(c_22), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_k_31, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_22), (ATerm) ATempty))))));
  return(t);
}
static ATerm p_10 (ATerm r_23, ATerm s_23, ATerm t)
{
  ATerm l_14 = NULL;
  t = SSL_write_term_to_stream_baf(r_23, s_23);
  l_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_14);
  return(t);
}
static ATerm q_10 (ATerm e_93 (ATerm), ATerm c_171, ATerm b_24, ATerm t)
{
  ATerm m_14 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_171, term_l_31);
  t = l_11(t);
  m_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_14, b_24);
  t = e_93(t);
  t = fclose_0_0(t);
  t = b_24;
  return(t);
}
static ATerm t_10 (ATerm w_106 (ATerm), ATerm k_43, ATerm i_43, ATerm t)
{
  ATerm n_14 = NULL,p_14 = NULL,q_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,y_14 = NULL;
  t_14 = t;
  t = w_106(t);
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_14, k_43, i_43);
  t = u_11(n_14, k_43, i_43, t);
  {
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_15 = NULL;
        t = term_o_31;
        a_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_14, term_o_31);
        t = t_11(n_14, a_15, t);
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_14 = ATgetFirst((ATermList) t);
      q_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_14, term_o_31, (ATerm) ATinsert(CheckATermList(q_14), (ATerm) ATinsert(CheckATermList(p_14), k_43)));
  t = lookup_table_0_1(n_14, t);
  y_14 = t;
  t = term_o_31;
  u_14 = t;
  t = (ATerm) ATinsert(CheckATermList(q_14), (ATerm) ATinsert(CheckATermList(p_14), k_43));
  v_14 = t;
  t = y_14;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(u_14, v_14, w_14, t);
  t = t_14;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm e_15 = NULL;
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_15 = NULL,x_7 = NULL;
      i_15 = t;
      t = term_r_31;
      x_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_15, term_r_31);
      t = z_11(i_15, x_7, t);
      e_15 = t;
      t = SSL_mkstemp(e_15);
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      {
        ATerm j_15 = NULL;
        t = term_s_31;
        j_15 = t;
        t = SSL_perror(j_15);
        _fail(t);
      }
    }
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm l_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,t_15 = NULL;
  t = P__tmpdir_0_0(t);
  q_15 = t;
  t = term_u_31;
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_15, term_u_31);
  t = z_11(q_15, t_15, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      o_15 = ATgetArgument(t, 0);
      l_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_v_31;
  p_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_15, term_v_31);
  t = t_10(a_3, o_15, p_15, t);
  t = SSL_close(l_15);
  t = o_15;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_15 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_w_31;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm y_15 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_x_31);
      y_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_15, (ATerm) ATinsert(ATempty, term_x_31));
      t = m_11(w_15, y_15, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_31 = ATgetArgument(t, 0);
      if(match_cons(y_31, sym_Stream_1))
        {
          d_16 = ATgetArgument(y_31, 0);
        }
      else
        _fail(t);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(d_16, e_16, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm h_118 (ATerm), ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL;
  t = read_from_0_0(t);
  t = h_118(t);
  c_16 = t;
  t = xtc_new_file_0_0(t);
  b_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_16, c_16);
  t = q_10(d_3, b_16, c_16, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, b_16);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = debug_1_0(k_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_z_31;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = save_as_1_0(o_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm m_16 = NULL,a_17 = NULL;
  a_17 = t;
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_8 = NULL,x_8 = NULL;
        t = term_o_19;
        r_8 = t;
        t = term_d_32;
        x_8 = t;
        t = term_e_32;
        t = t_11(r_8, x_8, t);
        m_16 = t;
        t = if_verbose2_1_0(e_3, t);
        t = a_17;
        {
          ATerm f_32 = t;
          int g_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_8 = NULL,c_9 = NULL;
              t = term_o_19;
              z_8 = t;
              t = term_h_32;
              c_9 = t;
              t = term_i_32;
              t = t_11(z_8, c_9, t);
              t = a_17;
              LocalPopChoice(g_32);
            }
          else
            {
              t = f_32;
              {
                static ATerm l_3 (ATerm t)
                {
                  ATerm j_32 = t;
                  int k_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_9 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          q_9 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = o_10(m_16, q_9, t);
                      LocalPopChoice(k_32);
                    }
                  else
                    {
                      t = j_32;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(l_3, t);
              }
            }
        }
        LocalPopChoice(c_32);
      }
    else
      {
        t = b_32;
        t = a_17;
      }
  }
  t = if_keep3_1_0(m_3, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm n_17 = NULL;
  n_17 = t;
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(n_17);
        LocalPopChoice(m_32);
      }
    else
      {
        t = l_32;
        t = n_17;
      }
  }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  static ATerm e_4 (ATerm t)
  {
    ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
    i_17 = t;
    t = term_t_31;
    j_17 = t;
    t = term_o_31;
    k_17 = t;
    t = term_n_32;
    t = t_11(j_17, k_17, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((g_17 != NULL) && (g_17 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          g_17 = ATgetFirst((ATermList) t);
        {
          ATerm o_32 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = g_17;
    t = map_1_0(f_4, t);
    t = i_17;
    t = end_scope_1_0(g_4, t);
    return(t);
  }
  t = repeat_2_0(e_4, _id, t);
  h_17 = t;
  t = SSL_exit(h_17);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm p_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_18 = NULL,l_18 = NULL;
      t = term_o_19;
      f_18 = t;
      t = term_b_28;
      l_18 = t;
      t = term_s_32;
      t = t_11(f_18, l_18, t);
      LocalPopChoice(q_32);
    }
  else
    {
      t = p_32;
      t = term_t_32;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm d_18 = NULL;
  d_18 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm b_10 = NULL,f_10 = NULL;
      t = term_b_28;
      {
        ATerm u_32 = t;
        int v_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_10 = NULL,k_10 = NULL;
            t = term_o_19;
            h_10 = t;
            t = term_b_28;
            k_10 = t;
            t = term_s_32;
            t = t_11(h_10, k_10, t);
            LocalPopChoice(v_32);
          }
        else
          {
            t = u_32;
            t = term_t_32;
          }
      }
      b_10 = t;
      t = term_w_31;
      f_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_w_31, b_10);
      t = b_11(f_10, b_10, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm z_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_18;
      t = copy_to_1_0(h_4, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_a_33;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,v_18 = NULL,w_18 = NULL;
  t = u_84(t);
  o_18 = t;
  t = term_o_19;
  v_18 = t;
  t = term_b_33;
  w_18 = t;
  t = term_d_33;
  t = t_11(v_18, w_18, t);
  p_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_18, o_18);
  t = z_11(p_18, o_18, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm z_0 (ATerm), ATerm t)
{
  ATerm z_19 = NULL,b_20 = NULL;
  z_19 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_11 = NULL;
        t = z_19;
        t = z_0(t);
        s_11 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = s_11;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = s_11;
          }
        t = (ATerm) ATmakeAppl(sym__2, b_20, s_11);
        t = b_11(b_20, s_11, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, b_20);
        LocalPopChoice(g_33);
      }
    else
      {
        t = e_33;
        {
          ATerm h_33 = t;
          int k_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_12 = NULL;
              t = z_19;
              t = z_0(t);
              f_12 = t;
              {
                ATerm l_33 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_12 = NULL;
                    g_12 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = g_12;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = g_12;
                          }
                        else
                          {
                            t = g_12;
                            if((b_20 != t))
                              {
                                _fail(t);
                              }
                            t = g_12;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_33;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, b_20, f_12);
              t = b_11(b_20, f_12, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_20);
              LocalPopChoice(k_33);
            }
          else
            {
              t = h_33;
              t = z_19;
              t = z_0(t);
              if((b_20 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_20);
            }
        }
      }
  }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = get_outfile_1_0(n_4, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_p_33;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_12 = NULL,m_12 = NULL,o_12 = NULL,p_12 = NULL,w_12 = NULL;
        t = term_o_19;
        p_12 = t;
        t = term_w_33;
        w_12 = t;
        t = term_x_33;
        t = t_11(p_12, w_12, t);
        t = b_21;
        t = copy_to_1_0(l_4, t);
        l_12 = t;
        t = term_l_19;
        m_12 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_33));
        o_12 = t;
        t = SSL_printnl(m_12, o_12);
        t = l_12;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
        t = b_21;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm k_22 = NULL,n_22 = NULL,o_22 = NULL,q_22 = NULL;
  t = term_p_19;
  {
    ATerm z_33 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_22 = NULL,s_22 = NULL;
        t = term_o_19;
        r_22 = t;
        t = term_p_19;
        s_22 = t;
        t = term_q_19;
        t = t_11(r_22, s_22, t);
        LocalPopChoice(b_34);
      }
    else
      {
        t = z_33;
        t = term_c_20;
      }
  }
  n_22 = t;
  t = term_c_20;
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_22, term_c_20);
  t = y_10(n_22, q_22, t);
  o_22 = t;
  t = SSL_int_to_string(o_22);
  k_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_22), term_p_19);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,y_22 = NULL,a_23 = NULL,e_23 = NULL;
  t = term_o_19;
  a_23 = t;
  t = term_e_34;
  e_23 = t;
  t = term_f_34;
  t = t_11(a_23, e_23, t);
  t_22 = t;
  t = term_g_34;
  t = xtc_find_path_0_0(t);
  u_22 = t;
  t = term_i_34;
  t = xtc_find_path_0_0(t);
  v_22 = t;
  t = term_l_34;
  t = xtc_find_path_0_0(t);
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_22), term_e_34), v_22), term_e_34), u_22), term_e_34));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,m_23 = NULL,n_23 = NULL,v_23 = NULL,w_23 = NULL,y_23 = NULL;
  w_23 = t;
  t = term_m_34;
  f_23 = t;
  t = w_23;
  {
    ATerm n_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_23 = NULL,c_24 = NULL;
        t = term_o_19;
        z_23 = t;
        t = term_b_28;
        c_24 = t;
        t = term_s_32;
        t = t_11(z_23, c_24, t);
        LocalPopChoice(p_34);
      }
    else
      {
        t = n_34;
        {
          ATerm f_24 = NULL,i_24 = NULL;
          t = term_o_19;
          f_24 = t;
          t = term_b_33;
          i_24 = t;
          t = term_d_33;
          t = t_11(f_24, i_24, t);
        }
      }
  }
  y_23 = t;
  t = w_23;
  t = get_include_dirs_0_0(t);
  m_23 = t;
  t = w_23;
  t = pass_keep_0_0(t);
  n_23 = t;
  t = term_s_34;
  {
    ATerm t_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_24 = NULL,p_24 = NULL;
        t = term_o_19;
        o_24 = t;
        t = term_s_34;
        p_24 = t;
        t = term_w_34;
        t = t_11(o_24, p_24, t);
        LocalPopChoice(u_34);
        t = (ATerm) ATinsert(ATempty, term_s_34);
      }
    else
      {
        t = t_34;
        t = (ATerm) ATempty;
      }
  }
  v_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_23), n_23), m_23), (ATerm) ATinsert(ATinsert(ATempty, y_23), term_z_34));
  t = concat_0_0(t);
  g_23 = t;
  t = w_23;
  t = comp_0_2(f_23, g_23, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm f_109 (ATerm), ATerm t)
{
  ATerm t_24 = NULL;
  t_24 = t;
  {
    ATerm a_35 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_25 = NULL,d_25 = NULL,g_25 = NULL;
        t = term_o_19;
        d_25 = t;
        t = term_v_19;
        g_25 = t;
        t = term_a_20;
        t = t_11(d_25, g_25, t);
        a_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_25, term_u_20);
        t = geq_0_0(t);
        t = t_24;
        t = f_109(t);
        LocalPopChoice(b_35);
      }
    else
      {
        t = a_35;
        t = t_24;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  v_25 = t;
  t = SSL_explode_string(v_25);
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm x_27 (ATerm t)
        {
          ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
          o_27 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_27 = ATgetFirst((ATermList) t);
              q_27 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm f_35 = t;
            int g_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_14 = NULL,h_14 = NULL,f_3 = NULL;
                t = SSLgetAnnotations(o_27);
                a_14 = t;
                t = q_27;
                t = x_27(t);
                h_14 = t;
                t = (ATerm) ATinsert(CheckATermList(h_14), p_27);
                f_3 = t;
                t = SSLsetAnnotations(f_3, a_14);
                LocalPopChoice(g_35);
              }
            else
              {
                t = f_35;
                {
                  ATerm h_35 = t;
                  int k_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_15 = NULL,h_3 = NULL;
                      t = SSLgetAnnotations(o_27);
                      c_15 = t;
                      t = p_27;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(q_27), p_27);
                      h_3 = t;
                      t = SSLsetAnnotations(h_3, c_15);
                      LocalPopChoice(k_35);
                    }
                  else
                    {
                      t = h_35;
                      {
                        ATerm g_16 = NULL,j_16 = NULL,i_3 = NULL;
                        t = SSLgetAnnotations(o_27);
                        g_16 = t;
                        t = p_27;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = q_27;
                        t = l_104(t);
                        j_16 = t;
                        t = (ATerm) ATinsert(CheckATermList(j_16), p_27);
                        i_3 = t;
                        t = SSLsetAnnotations(i_3, g_16);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = x_27(t);
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
      }
  }
  u_25 = t;
  t = SSL_implode_string(u_25);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = debug_1_0(q_4, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_l_35;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = debug_1_0(t_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_m_35;
  return(t);
}
static ATerm u_10 (ATerm x_21, ATerm t)
{
  ATerm h_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL;
  t = x_21;
  t = basename_1_0(_id, t);
  h_28 = t;
  t = if_verbose3_1_0(p_4, t);
  t = term_n_35;
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_35, h_28);
  t = y_11(o_28, h_28, t);
  {
    ATerm p_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_28 = NULL,r_28 = NULL;
        t = term_o_19;
        q_28 = t;
        t = term_b_28;
        r_28 = t;
        t = term_s_32;
        t = t_11(q_28, r_28, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(u_35);
      }
    else
      {
        t = p_35;
        t = h_28;
      }
  }
  m_28 = t;
  t = if_verbose3_1_0(r_4, t);
  t = term_b_33;
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_33, m_28);
  t = y_11(n_28, m_28, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_28);
  return(t);
}
static ATerm w_10 (ATerm w_41, ATerm x_41, ATerm t)
{
  ATerm v_35 = t;
  int w_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_41, x_41);
      LocalPopChoice(w_35);
    }
  else
    {
      t = v_35;
      t = SSL_addr(w_41, x_41);
    }
  return(t);
}
static ATerm y_10 (ATerm c_42, ATerm d_42, ATerm t)
{
  ATerm x_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(c_42, d_42);
      LocalPopChoice(a_36);
    }
  else
    {
      t = x_35;
      t = SSL_subtr(c_42, d_42);
    }
  return(t);
}
static ATerm z_10 (ATerm q_50, ATerm s_50, ATerm u_50, ATerm w_50, ATerm r_50, ATerm t_50, ATerm v_50, ATerm x_50, ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,h_29 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_50, r_50);
  t = y_10(q_50, r_50, t);
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_50, t_50);
  t = y_10(s_50, t_50, t);
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_50, v_50);
  t = y_10(u_50, v_50, t);
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_50, x_50);
  t = y_10(w_50, x_50, t);
  h_29 = t;
  t = (ATerm) ATmakeAppl(sym__4, z_28, a_29, b_29, h_29);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_36 = ATgetArgument(t, 0);
      if(match_cons(b_36, sym__4))
        {
          j_29 = ATgetArgument(b_36, 0);
          k_29 = ATgetArgument(b_36, 1);
          l_29 = ATgetArgument(b_36, 2);
          m_29 = ATgetArgument(b_36, 3);
        }
      else
        _fail(t);
      {
        ATerm c_36 = ATgetArgument(t, 1);
        if(match_cons(c_36, sym__4))
          {
            n_29 = ATgetArgument(c_36, 0);
            o_29 = ATgetArgument(c_36, 1);
            p_29 = ATgetArgument(c_36, 2);
            q_29 = ATgetArgument(c_36, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_10(j_29, k_29, l_29, m_29, n_29, o_29, p_29, q_29, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,a_30 = NULL,g_30 = NULL,i_30 = NULL,n_30 = NULL,o_30 = NULL,s_30 = NULL,v_30 = NULL;
  a_30 = t;
  t = times_0_0(t);
  r_29 = t;
  t = a_30;
  t = r_112(t);
  s_29 = t;
  t = times_0_0(t);
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_29, r_29);
  t = diff_times_0_0(t);
  w_29 = t;
  if(match_cons(t, sym__4))
    {
      o_30 = ATgetArgument(t, 0);
      {
        ATerm d_36 = ATgetArgument(t, 1);
      }
      s_30 = ATgetArgument(t, 2);
      {
        ATerm f_36 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_30, s_30);
  t = w_10(o_30, s_30, t);
  v_30 = t;
  t = SSL_TicksToSeconds(v_30);
  t_29 = t;
  t = w_29;
  if(match_cons(t, sym__4))
    {
      ATerm j_36 = ATgetArgument(t, 0);
      g_30 = ATgetArgument(t, 1);
      {
        ATerm k_36 = ATgetArgument(t, 2);
      }
      i_30 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_30, i_30);
  t = w_10(g_30, i_30, t);
  n_30 = t;
  t = SSL_TicksToSeconds(n_30);
  v_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_29), term_n_36), t_29), term_l_36);
  t = q_112(t);
  t = s_29;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = debug_1_0(v_4, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_o_36;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = if_verbose1_1_0(z_4, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm y_32 = NULL,c_33 = NULL,f_33 = NULL,i_33 = NULL,j_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,s_33 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,w_17 = NULL,x_17 = NULL,z_17 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      s_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(s_33, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm p_36 = t;
    int s_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
        t_33 = t;
        t = term_o_19;
        u_33 = t;
        t = term_h_32;
        v_33 = t;
        t = term_i_32;
        t = t_11(u_33, v_33, t);
        t = t_33;
        LocalPopChoice(s_36);
      }
    else
      {
        t = p_36;
        t = add_main_0_0(t);
      }
  }
  o_33 = t;
  {
    ATerm t_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_34 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_34 = ATgetArgument(t, 0);
            {
              ATerm x_16 = NULL,n_3 = NULL;
              t = SSLgetAnnotations(o_33);
              x_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_34);
              n_3 = t;
              t = SSLsetAnnotations(n_3, x_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_33;
          }
        LocalPopChoice(u_36);
        t = xtc_transform_file_2_0(a_5, c_5, t);
      }
    else
      {
        t = t_36;
        t = xtc_transform_term_2_0(j_5, k_5, t);
      }
  }
  n_33 = t;
  {
    ATerm v_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_34 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_34 = ATgetArgument(t, 0);
            {
              ATerm r_17 = NULL,p_3 = NULL;
              t = SSLgetAnnotations(n_33);
              r_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_34);
              p_3 = t;
              t = SSLsetAnnotations(p_3, r_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_33;
          }
        LocalPopChoice(w_36);
        t = xtc_transform_file_2_0(l_5, p_5, t);
      }
    else
      {
        t = v_36;
        t = xtc_transform_term_2_0(r_5, w_5, t);
      }
  }
  t = if_keep5_1_0(x_5, t);
  t = output_preproc_0_0(t);
  t = normalize_spec_0_0(t);
  t = if_keep5_1_0(z_5, t);
  z_17 = t;
  t = term_y_36;
  w_17 = t;
  t = z_17;
  t = pass_maybe_unbound_warnings_0_0(t);
  x_17 = t;
  t = z_17;
  t = comp_0_2(w_17, x_17, t);
  m_33 = t;
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_34 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_34 = ATgetArgument(t, 0);
            {
              ATerm g_18 = NULL,q_3 = NULL;
              t = SSLgetAnnotations(m_33);
              g_18 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_34);
              q_3 = t;
              t = SSLsetAnnotations(q_3, g_18);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_33;
          }
        LocalPopChoice(a_37);
        t = xtc_transform_file_2_0(e_6, j_6, t);
      }
    else
      {
        t = z_36;
        t = xtc_transform_term_2_0(k_6, l_6, t);
      }
  }
  j_33 = t;
  {
    ATerm c_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_34 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_34 = ATgetArgument(t, 0);
            {
              ATerm k_18 = NULL,r_3 = NULL;
              t = SSLgetAnnotations(j_33);
              k_18 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_34);
              r_3 = t;
              t = SSLsetAnnotations(r_3, k_18);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_33;
          }
        LocalPopChoice(e_37);
        t = xtc_transform_file_2_0(m_6, q_6, t);
      }
    else
      {
        t = c_37;
        t = xtc_transform_term_2_0(r_6, s_6, t);
      }
  }
  t = if_keep5_1_0(a_7, t);
  i_33 = t;
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_35 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_35 = ATgetArgument(t, 0);
            {
              ATerm t_18 = NULL,w_3 = NULL;
              t = SSLgetAnnotations(i_33);
              t_18 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_35);
              w_3 = t;
              t = SSLsetAnnotations(w_3, t_18);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_33;
          }
        LocalPopChoice(g_37);
        t = xtc_transform_file_2_0(e_7, j_7, t);
      }
    else
      {
        t = f_37;
        t = xtc_transform_term_2_0(k_7, l_7, t);
      }
  }
  t = if_keep5_1_0(m_7, t);
  f_33 = t;
  {
    ATerm i_37 = t;
    int j_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_35 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_35 = ATgetArgument(t, 0);
            {
              ATerm z_18 = NULL,x_3 = NULL;
              t = SSLgetAnnotations(f_33);
              z_18 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_35);
              x_3 = t;
              t = SSLsetAnnotations(x_3, z_18);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_33;
          }
        LocalPopChoice(j_37);
        t = xtc_transform_file_2_0(p_7, q_7, t);
      }
    else
      {
        t = i_37;
        t = xtc_transform_term_2_0(s_7, t_7, t);
      }
  }
  t = if_keep5_1_0(v_7, t);
  t = output_frontend_0_0(t);
  {
    ATerm l_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_35 = NULL,t_35 = NULL,y_35 = NULL;
        s_35 = t;
        t = term_o_19;
        t_35 = t;
        t = term_h_32;
        y_35 = t;
        t = term_i_32;
        t = t_11(t_35, y_35, t);
        t = s_35;
        LocalPopChoice(n_37);
        {
          ATerm z_35 = NULL;
          z_35 = t;
          {
            ATerm o_37 = t;
            int p_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_36 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    e_36 = ATgetArgument(t, 0);
                    {
                      ATerm d_19 = NULL,z_3 = NULL;
                      t = SSLgetAnnotations(z_35);
                      d_19 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, e_36);
                      z_3 = t;
                      t = SSLsetAnnotations(z_3, d_19);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = z_35;
                  }
                LocalPopChoice(p_37);
                t = xtc_transform_file_2_0(z_7, b_8, t);
              }
            else
              {
                t = o_37;
                t = xtc_transform_term_2_0(e_8, f_8, t);
              }
          }
        }
      }
    else
      {
        t = l_37;
        {
          ATerm i_36 = NULL;
          i_36 = t;
          {
            ATerm q_37 = t;
            int r_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_36 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    m_36 = ATgetArgument(t, 0);
                    {
                      ATerm j_19 = NULL,a_4 = NULL;
                      t = SSLgetAnnotations(i_36);
                      j_19 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, m_36);
                      a_4 = t;
                      t = SSLsetAnnotations(a_4, j_19);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = i_36;
                  }
                LocalPopChoice(r_37);
                t = xtc_transform_file_2_0(i_8, j_8, t);
              }
            else
              {
                t = q_37;
                t = xtc_transform_term_2_0(l_8, n_8, t);
              }
          }
          t = if_keep2_1_0(o_8, t);
        }
      }
  }
  u_19 = t;
  t = term_s_37;
  s_19 = t;
  t = u_19;
  t = pass_warnings_0_0(t);
  t_19 = t;
  t = u_19;
  t = comp_0_2(s_19, t_19, t);
  c_33 = t;
  {
    ATerm v_37 = t;
    int w_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_36 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_36 = ATgetArgument(t, 0);
            {
              ATerm w_19 = NULL,b_4 = NULL;
              t = SSLgetAnnotations(c_33);
              w_19 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_36);
              b_4 = t;
              t = SSLsetAnnotations(b_4, w_19);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_33;
          }
        LocalPopChoice(w_37);
        t = xtc_transform_file_2_0(t_8, y_8, t);
      }
    else
      {
        t = v_37;
        t = xtc_transform_term_2_0(e_9, f_9, t);
      }
  }
  y_32 = t;
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_37 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_37 = ATgetArgument(t, 0);
            {
              ATerm e_20 = NULL,c_4 = NULL;
              t = SSLgetAnnotations(y_32);
              e_20 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_37);
              c_4 = t;
              t = SSLsetAnnotations(c_4, e_20);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_32;
          }
        LocalPopChoice(y_37);
        t = xtc_transform_file_2_0(g_9, h_9, t);
      }
    else
      {
        t = x_37;
        t = xtc_transform_term_2_0(j_9, k_9, t);
      }
  }
  t = if_keep2_1_0(m_9, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm r_32 = NULL,w_32 = NULL,x_32 = NULL;
  r_32 = t;
  t = term_l_19;
  w_32 = t;
  t = (ATerm) ATinsert(CheckATermList(r_32), term_z_37);
  x_32 = t;
  t = SSL_printnl(w_32, x_32);
  t = (ATerm) ATmakeAppl(sym__2, term_l_19, (ATerm) ATinsert(CheckATermList(r_32), term_z_37));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_b_38;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm c_34 = NULL;
  t = pass_verbose_0_0(t);
  c_34 = t;
  t = (ATerm) ATinsert(CheckATermList(c_34), term_i_28);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_b_38;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm d_34 = NULL;
  t = pass_verbose_0_0(t);
  d_34 = t;
  t = (ATerm) ATinsert(CheckATermList(d_34), term_i_28);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_c_38;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm j_34 = NULL;
  t = pass_verbose_0_0(t);
  j_34 = t;
  t = (ATerm) ATinsert(CheckATermList(j_34), term_i_28);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_c_38;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm k_34 = NULL;
  t = pass_verbose_0_0(t);
  k_34 = t;
  t = (ATerm) ATinsert(CheckATermList(k_34), term_i_28);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = save_as_1_0(y_5, t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_d_38;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = save_as_1_0(b_6, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_h_38;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_i_38;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm q_34 = NULL;
  t = pass_verbose_0_0(t);
  q_34 = t;
  t = (ATerm) ATinsert(CheckATermList(q_34), term_i_28);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_i_38;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm r_34 = NULL;
  t = pass_verbose_0_0(t);
  r_34 = t;
  t = (ATerm) ATinsert(CheckATermList(r_34), term_i_28);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_k_38;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm x_34 = NULL;
  t = pass_verbose_0_0(t);
  x_34 = t;
  t = (ATerm) ATinsert(CheckATermList(x_34), term_i_28);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_k_38;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm y_34 = NULL;
  t = pass_verbose_0_0(t);
  y_34 = t;
  t = (ATerm) ATinsert(CheckATermList(y_34), term_i_28);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = save_as_1_0(c_7, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_o_38;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_r_38;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm i_35 = NULL;
  t = pass_verbose_0_0(t);
  i_35 = t;
  t = (ATerm) ATinsert(CheckATermList(i_35), term_i_28);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_r_38;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm j_35 = NULL;
  t = pass_verbose_0_0(t);
  j_35 = t;
  t = (ATerm) ATinsert(CheckATermList(j_35), term_i_28);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = save_as_1_0(o_7, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_v_38;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_y_38;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm q_35 = NULL;
  t = pass_verbose_0_0(t);
  q_35 = t;
  t = (ATerm) ATinsert(CheckATermList(q_35), term_i_28);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_y_38;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm r_35 = NULL;
  t = pass_verbose_0_0(t);
  r_35 = t;
  t = (ATerm) ATinsert(CheckATermList(r_35), term_i_28);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = save_as_1_0(y_7, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_a_39;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_l_28;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm g_36 = NULL;
  t = pass_verbose_0_0(t);
  g_36 = t;
  t = (ATerm) ATinsert(CheckATermList(g_36), term_i_28);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_l_28;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm h_36 = NULL;
  t = pass_verbose_0_0(t);
  h_36 = t;
  t = (ATerm) ATinsert(CheckATermList(h_36), term_i_28);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_e_39;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm q_36 = NULL;
  t = pass_verbose_0_0(t);
  q_36 = t;
  t = (ATerm) ATinsert(CheckATermList(q_36), term_i_28);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_e_39;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm r_36 = NULL;
  t = pass_verbose_0_0(t);
  r_36 = t;
  t = (ATerm) ATinsert(CheckATermList(r_36), term_i_28);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = save_as_1_0(p_8, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_f_39;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_j_39;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm b_37 = NULL;
  t = pass_verbose_0_0(t);
  b_37 = t;
  t = (ATerm) ATinsert(CheckATermList(b_37), term_i_28);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_j_39;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm d_37 = NULL;
  t = pass_verbose_0_0(t);
  d_37 = t;
  t = (ATerm) ATinsert(CheckATermList(d_37), term_i_28);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_l_39;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm k_37 = NULL;
  t = pass_verbose_0_0(t);
  k_37 = t;
  t = (ATerm) ATinsert(CheckATermList(k_37), term_i_28);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_l_39;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm m_37 = NULL;
  t = pass_verbose_0_0(t);
  m_37 = t;
  t = (ATerm) ATinsert(CheckATermList(m_37), term_i_28);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = save_as_1_0(n_9, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_o_39;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(u_4, t);
  t = profile_p__2_0(w_4, y_4, t);
  return(t);
}
static ATerm t_11 (ATerm h_55, ATerm i_55, ATerm t)
{
  ATerm a_38 = NULL;
  t = lookup_table_0_1(h_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_11(i_55, a_38, t);
  return(t);
}
static ATerm a_11 (ATerm t_53, ATerm u_53, ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL;
  f_38 = t;
  {
    ATerm p_39 = t;
    int q_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_53, u_53);
        t = t_11(t_53, u_53, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_39 = ATgetFirst((ATermList) t);
            e_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_39);
        {
          ATerm g_38 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, t_53, u_53, e_38);
          t = lookup_table_0_1(t_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              g_38 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_11(u_53, e_38, g_38, t);
          t = (ATerm) ATmakeAppl(sym__3, t_53, u_53, e_38);
        }
      }
    else
      {
        t = p_39;
        {
          ATerm j_38 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, t_53, u_53);
          t = lookup_table_0_1(t_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              j_38 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_11(u_53, j_38, t);
          t = (ATerm) ATmakeAppl(sym__2, t_53, u_53);
        }
      }
  }
  t = f_38;
  return(t);
}
ATerm end_scope_1_0 (ATerm t_106 (ATerm), ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL,p_38 = NULL,q_38 = NULL,s_38 = NULL,w_38 = NULL;
  p_38 = t;
  t = t_106(t);
  n_38 = t;
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_38 = NULL;
        t = term_o_31;
        x_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_38, term_o_31);
        t = t_11(n_38, x_38, t);
        LocalPopChoice(u_39);
      }
    else
      {
        t = t_39;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_38 = ATgetFirst((ATermList) t);
      l_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_38, term_o_31, l_38);
  t = lookup_table_0_1(n_38, t);
  w_38 = t;
  t = term_o_31;
  q_38 = t;
  t = w_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(q_38, l_38, s_38, t);
  t = m_38;
  {
    static ATerm o_9 (ATerm t)
    {
      ATerm z_38 = NULL;
      z_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_38, z_38);
      t = a_11(n_38, z_38, t);
      return(t);
    }
    t = map_1_0(o_9, t);
  }
  t = p_38;
  return(t);
}
ATerm restore_always_2_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm t)
{
  ATerm w_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_85(t);
      t = y_85(t);
      LocalPopChoice(y_39);
    }
  else
    {
      t = w_39;
      t = y_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_106 (ATerm), ATerm t)
{
  ATerm b_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,k_39 = NULL,m_39 = NULL,n_39 = NULL;
  g_39 = t;
  t = s_106(t);
  b_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_39, term_o_31);
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_39 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_40 = ATgetArgument(t, 0);
            ATerm f_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_31;
        s_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_39, term_o_31);
        t = t_11(b_39, s_39, t);
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
        t = (ATerm) ATempty;
      }
  }
  h_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_39, term_o_31, (ATerm) ATinsert(CheckATermList(h_39), (ATerm) ATempty));
  t = lookup_table_0_1(b_39, t);
  n_39 = t;
  t = term_o_31;
  i_39 = t;
  t = (ATerm) ATinsert(CheckATermList(h_39), (ATerm) ATempty);
  k_39 = t;
  t = n_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(i_39, k_39, m_39, t);
  t = g_39;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_t_31;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm e_40 = NULL;
  e_40 = t;
  {
    ATerm g_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(e_40);
        LocalPopChoice(j_40);
      }
    else
      {
        t = g_40;
        t = e_40;
      }
  }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm s_118 (ATerm), ATerm t)
{
  ATerm v_39 = NULL;
  static ATerm s_9 (ATerm t)
  {
    ATerm x_39 = NULL;
    x_39 = t;
    {
      ATerm l_40 = t;
      int n_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_39 = NULL,a_40 = NULL;
          t = term_t_31;
          z_39 = t;
          t = term_o_31;
          a_40 = t;
          t = term_n_32;
          t = t_11(z_39, a_40, t);
          LocalPopChoice(n_40);
        }
      else
        {
          t = l_40;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((v_39 != NULL) && (v_39 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          v_39 = ATgetFirst((ATermList) t);
        {
          ATerm o_40 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = v_39;
    t = map_1_0(w_9, t);
    t = x_39;
    t = end_scope_1_0(x_9, t);
    return(t);
  }
  t = begin_scope_1_0(r_9, t);
  t = restore_always_2_0(s_118, s_9, t);
  return(t);
}
ATerm debug_1_0 (ATerm c_93 (ATerm), ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,k_40 = NULL,m_40 = NULL;
  h_40 = t;
  t = c_93(t);
  i_40 = t;
  t = term_l_19;
  k_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_40), i_40);
  m_40 = t;
  t = SSL_printnl(k_40, m_40);
  t = h_40;
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm p_40 = NULL;
  p_40 = t;
  {
    ATerm q_40 = t;
    int t_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_40 = NULL,s_40 = NULL,v_40 = NULL;
        t = term_o_19;
        s_40 = t;
        t = term_v_19;
        v_40 = t;
        t = term_a_20;
        t = t_11(s_40, v_40, t);
        r_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_40, term_c_20);
        t = geq_0_0(t);
        t = p_40;
        t = d_109(t);
        LocalPopChoice(t_40);
      }
    else
      {
        t = q_40;
        t = p_40;
      }
  }
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,e_41 = NULL;
  y_40 = t;
  t = term_o_19;
  c_41 = t;
  t = term_u_40;
  e_41 = t;
  t = term_w_40;
  t = t_11(c_41, e_41, t);
  z_40 = t;
  t = term_t_32;
  a_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_41), term_n_41), term_j_41), term_i_41), term_g_41), term_f_41), term_d_41), z_40), term_x_40);
  b_41 = t;
  t = SSL_printnl(a_41, b_41);
  t = y_40;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_109 (ATerm), ATerm t)
{
  ATerm h_41 = NULL;
  h_41 = t;
  {
    ATerm t_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
        t = term_o_19;
        l_41 = t;
        t = term_v_19;
        m_41 = t;
        t = term_a_20;
        t = t_11(l_41, m_41, t);
        k_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_41, term_r_19);
        t = geq_0_0(t);
        t = h_41;
        t = e_109(t);
        LocalPopChoice(u_41);
      }
    else
      {
        t = t_41;
        t = h_41;
      }
  }
  return(t);
}
static ATerm b_11 (ATerm a_45, ATerm b_45, ATerm t)
{
  t = SSL_copy(a_45, b_45);
  return(t);
}
static ATerm c_11 (ATerm n_57, ATerm t)
{
  t = SSL_hashtable_keys(n_57);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm o_41 = NULL,q_41 = NULL;
  static ATerm y_9 (ATerm t)
  {
    ATerm r_41 = NULL,s_41 = NULL;
    r_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_41), r_41);
    t = t_11(not_null(o_41), r_41, t);
    s_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_41, s_41);
    return(t);
  }
  if(((o_41 != NULL) && (o_41 != t)))
    _fail(t);
  else
    o_41 = t;
  t = lookup_table_0_1(o_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(q_41, t);
  t = map_1_0(y_9, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm h_109 (ATerm), ATerm t)
{
  ATerm v_41 = NULL;
  v_41 = t;
  {
    ATerm y_41 = t;
    int z_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_42 = NULL,b_42 = NULL,e_42 = NULL;
        t = term_o_19;
        b_42 = t;
        t = term_v_19;
        e_42 = t;
        t = term_a_20;
        t = t_11(b_42, e_42, t);
        a_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_42, term_n_26);
        t = geq_0_0(t);
        t = v_41;
        t = h_109(t);
        LocalPopChoice(z_41);
      }
    else
      {
        t = y_41;
        t = v_41;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm g_109 (ATerm), ATerm t)
{
  ATerm h_42 = NULL;
  h_42 = t;
  {
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_42 = NULL,m_42 = NULL,o_42 = NULL;
        t = term_o_19;
        m_42 = t;
        t = term_v_19;
        o_42 = t;
        t = term_a_20;
        t = t_11(m_42, o_42, t);
        l_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_42, term_d_23);
        t = geq_0_0(t);
        t = h_42;
        t = g_109(t);
        LocalPopChoice(g_42);
      }
    else
      {
        t = f_42;
        t = h_42;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,n_43 = NULL;
  a_43 = t;
  if(match_cons(t, sym__2))
    {
      b_43 = ATgetArgument(t, 0);
      n_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_42 = t;
    int j_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_43;
        if((b_43 != t))
          {
            _fail(t);
          }
        t = a_43;
        LocalPopChoice(j_42);
      }
    else
      {
        t = i_42;
        t = (ATerm) ATmakeAppl(sym__2, b_43, n_43);
        {
          ATerm k_42 = t;
          int n_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_43, n_43);
              LocalPopChoice(n_42);
            }
          else
            {
              t = k_42;
              t = SSL_gtr(b_43, n_43);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_43, n_43);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm i_109 (ATerm), ATerm t)
{
  ATerm r_43 = NULL;
  r_43 = t;
  {
    ATerm p_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_43 = NULL,w_43 = NULL,x_43 = NULL;
        t = term_o_19;
        w_43 = t;
        t = term_v_19;
        x_43 = t;
        t = term_a_20;
        t = t_11(w_43, x_43, t);
        t_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_43, term_y_20);
        t = geq_0_0(t);
        t = r_43;
        t = i_109(t);
        LocalPopChoice(q_42);
      }
    else
      {
        t = p_42;
        t = r_43;
      }
  }
  return(t);
}
static ATerm f_11 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm d_30, ATerm c_30, ATerm t)
{
  t = c_98(t);
  {
    static ATerm d_10 (ATerm t)
    {
      ATerm z_43 = NULL;
      z_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_30, z_43);
      t = b_98(t);
      return(t);
    }
    t = fetch_1_0(d_10, t);
  }
  t = c_30;
  return(t);
}
static ATerm g_11 (ATerm y_97 (ATerm), ATerm z_29, ATerm y_29, ATerm t)
{
  static ATerm c_45 (ATerm t)
  {
    ATerm q_44 = NULL,s_44 = NULL,t_44 = NULL;
    q_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_44 = ATgetFirst((ATermList) t);
            t_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_42 = t;
          int s_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_44;
              {
                static ATerm e_10 (ATerm t)
                {
                  t = y_29;
                  return(t);
                }
                t = f_11(y_97, e_10, s_44, t_44, t);
              }
              t = c_45(t);
              LocalPopChoice(s_42);
            }
          else
            {
              t = r_42;
              {
                ATerm j_21 = NULL,m_21 = NULL,z_6 = NULL;
                t = SSLgetAnnotations(q_44);
                j_21 = t;
                t = t_44;
                t = c_45(t);
                m_21 = t;
                t = (ATerm) ATinsert(CheckATermList(m_21), s_44);
                z_6 = t;
                t = SSLsetAnnotations(z_6, j_21);
              }
            }
        }
      }
    return(t);
  }
  t = z_29;
  t = c_45(t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm q_45 = NULL;
  if(match_cons(t, sym__2))
    {
      q_45 = ATgetArgument(t, 0);
      if((q_45 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_11 (ATerm l_54, ATerm m_54, ATerm n_54, ATerm t)
{
  ATerm h_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL;
  h_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_54, m_54);
  {
    ATerm t_42 = t;
    int u_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_42 = ATgetArgument(t, 0);
            ATerm w_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_54, m_54);
        t = t_11(l_54, m_54, t);
        LocalPopChoice(u_42);
      }
    else
      {
        t = t_42;
        t = (ATerm) ATempty;
      }
  }
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_45, n_54);
  t = g_11(i_10, k_45, n_54, t);
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_54, m_54, j_45);
  t = lookup_table_0_1(l_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(m_54, j_45, l_45, t);
  t = h_45;
  return(t);
}
static ATerm i_11 (ATerm z_113 (ATerm), ATerm v_54, ATerm u_54, ATerm t)
{
  static ATerm m_10 (ATerm t)
  {
    ATerm r_45 = NULL,s_45 = NULL;
    if(match_cons(t, sym__2))
      {
        r_45 = ATgetArgument(t, 0);
        s_45 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, v_54, r_45, s_45);
    t = z_113(t);
    return(t);
  }
  t = u_54;
  t = map_1_0(m_10, t);
  return(t);
}
static ATerm m_11 (ATerm t_38, ATerm u_38, ATerm t)
{
  t = SSL_access(t_38, u_38);
  return(t);
}
static ATerm m_46 (ATerm c_46, ATerm t)
{
  t = SSL_fclose(c_46);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL;
  i_46 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_46 = ATgetArgument(t, 0);
      {
        ATerm x_42 = t;
        int y_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_46);
            LocalPopChoice(y_42);
          }
        else
          {
            t = x_42;
            t = m_46(i_46, t);
          }
      }
    }
  else
    {
      t = m_46(i_46, t);
    }
  return(t);
}
static ATerm j_11 (ATerm x_23, ATerm t)
{
  t = SSL_read_term_from_stream(x_23);
  return(t);
}
static ATerm k_11 (ATerm c_39, ATerm d_39, ATerm t)
{
  ATerm p_46 = NULL;
  t = SSL_fopen(c_39, d_39);
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_46);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_46 = NULL;
  t = SSL_stdin_stream();
  q_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_46);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_46 = NULL;
  t = SSL_stdout_stream();
  r_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_46);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_46 = NULL;
  t = SSL_stderr_stream();
  u_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_46);
  return(t);
}
static ATerm k_48 (ATerm a_47, ATerm t)
{
  ATerm b_47 = NULL;
  t = SSL_explode_term(a_47);
  if(match_cons(t, sym__2))
    {
      ATerm z_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_42) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_43 = ATgetArgument(t, 1);
        if(((ATgetType(c_43) == AT_LIST) && !(ATisEmpty(c_43))))
          {
            b_47 = ATgetFirst((ATermList) c_43);
            {
              ATerm d_43 = (ATerm) ATgetNext((ATermList) c_43);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_47;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_47;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_47;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_47;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_48 (ATerm e_47, ATerm f_47, ATerm g_47, ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,n_47 = NULL,q_47 = NULL,b_7 = NULL;
  t = SSLgetAnnotations(g_47);
  n_47 = t;
  t = e_47;
  if(match_cons(t, sym_Path_1))
    {
      q_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_47, f_47);
  b_7 = t;
  t = SSLsetAnnotations(b_7, n_47);
  if(match_cons(t, sym__2))
    {
      j_47 = ATgetArgument(t, 0);
      k_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(j_47, k_47, t);
  return(t);
}
static ATerm m_48 (ATerm t_47, ATerm u_47, ATerm v_47, ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL,f_48 = NULL,i_7 = NULL;
  t = SSLgetAnnotations(v_47);
  a_48 = t;
  t = SSL_is_string(t_47);
  f_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_48, u_47);
  i_7 = t;
  t = SSLsetAnnotations(i_7, a_48);
  if(match_cons(t, sym__2))
    {
      y_47 = ATgetArgument(t, 0);
      z_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(y_47, z_47, t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
  h_48 = t;
  if(match_cons(t, sym__2))
    {
      i_48 = ATgetArgument(t, 0);
      j_48 = ATgetArgument(t, 1);
      {
        ATerm e_43 = t;
        int f_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_48(h_48, t);
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
                  t = l_48(i_48, j_48, h_48, t);
                  LocalPopChoice(h_43);
                }
              else
                {
                  t = g_43;
                  t = m_48(i_48, j_48, h_48, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_48(h_48, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,d_49 = NULL;
  d_49 = t;
  {
    ATerm j_43 = t;
    int l_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_49, term_m_43);
        t = l_11(t);
        LocalPopChoice(l_43);
      }
    else
      {
        t = j_43;
        {
          ATerm x_22 = NULL,b_23 = NULL;
          t = term_o_43;
          b_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_43, d_49);
          t = z_11(b_23, d_49, t);
          x_22 = t;
          t = SSL_perror(x_22);
          _fail(t);
        }
      }
  }
  p_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_11(q_48, t);
  o_48 = t;
  t = p_48;
  t = fclose_0_0(t);
  t = o_48;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_p_43;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_q_43;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm s_43 = t;
  int u_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_49 = NULL,h_49 = NULL;
      g_49 = t;
      t = (ATerm) ATinsert(ATempty, term_v_43);
      h_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_49, (ATerm) ATinsert(ATempty, term_v_43));
      t = m_11(g_49, h_49, t);
      LocalPopChoice(u_43);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = s_43;
      {
        ATerm y_43 = t;
        int a_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_44 = t;
            if((PushChoice() == 0))
              {
                ATerm i_49 = NULL,j_49 = NULL;
                i_49 = t;
                t = (ATerm) ATinsert(ATempty, term_x_31);
                j_49 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_49, (ATerm) ATinsert(ATempty, term_x_31));
                t = m_11(i_49, j_49, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_44;
              }
            t = debug_1_0(n_10, t);
            LocalPopChoice(a_44);
          }
        else
          {
            t = y_43;
            t = debug_1_0(v_10, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = debug_1_0(e_11, t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_c_44;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = debug_1_0(a_12, t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
  h_50 = t;
  t = term_l_19;
  i_50 = t;
  t = (ATerm) ATinsert(ATempty, term_e_44);
  j_50 = t;
  t = SSL_printnl(i_50, j_50);
  t = h_50;
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL;
  if(match_cons(t, sym__3))
    {
      k_50 = ATgetArgument(t, 0);
      l_50 = ATgetArgument(t, 1);
      m_50 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_11(k_50, l_50, m_50, t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  n_50 = t;
  t = term_l_19;
  o_50 = t;
  t = (ATerm) ATinsert(ATempty, term_f_44);
  p_50 = t;
  t = SSL_printnl(o_50, p_50);
  t = n_50;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
  a_51 = t;
  t = term_l_19;
  b_51 = t;
  t = (ATerm) ATinsert(ATempty, term_e_44);
  c_51 = t;
  t = SSL_printnl(b_51, c_51);
  t = a_51;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,s_49 = NULL,t_49 = NULL,v_49 = NULL,w_49 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL;
  k_49 = t;
  t = if_verbose5_1_0(d_11, t);
  {
    ATerm g_44 = t;
    if((PushChoice() == 0))
      {
        ATerm f_50 = NULL,g_50 = NULL;
        t = term_h_44;
        f_50 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, k_49);
        g_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_44, (ATerm) ATmakeAppl(sym_Imported_1, k_49));
        t = t_11(f_50, g_50, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_44;
      }
  }
  m_49 = t;
  t = term_h_44;
  w_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_44, term_i_44, (ATerm) ATinsert(ATempty, k_49));
  t = lookup_table_0_1(w_49, t);
  e_50 = t;
  t = term_i_44;
  b_50 = t;
  t = (ATerm) ATinsert(ATempty, k_49);
  c_50 = t;
  t = e_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(b_50, c_50, d_50, t);
  t = m_49;
  t = if_verbose4_1_0(v_11, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(b_12, t);
  l_49 = t;
  t = term_h_44;
  v_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_44, l_49);
  t = i_11(c_12, v_49, l_49, t);
  t = if_verbose6_1_0(d_12, t);
  t = term_h_44;
  n_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_44, (ATerm)ATmakeAppl(sym_Imported_1, k_49), (ATerm) ATempty);
  t = lookup_table_0_1(n_49, t);
  t_49 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, k_49);
  o_49 = t;
  t = (ATerm) ATempty;
  p_49 = t;
  t = t_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(o_49, p_49, s_49, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_44, (ATerm)ATmakeAppl(sym_Imported_1, k_49), (ATerm) ATempty);
  t = if_verbose4_1_0(e_12, t);
  return(t);
}
ATerm filter_1_0 (ATerm q_101 (ATerm), ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
  u_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_51;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_51 = ATgetFirst((ATermList) t);
          w_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm j_44 = t;
        int k_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_23 = NULL,o_23 = NULL,p_23 = NULL,n_7 = NULL;
            t = SSLgetAnnotations(u_51);
            j_23 = t;
            t = v_51;
            t = q_101(t);
            o_23 = t;
            t = w_51;
            t = filter_1_0(q_101, t);
            p_23 = t;
            t = (ATerm) ATinsert(CheckATermList(p_23), o_23);
            n_7 = t;
            t = SSLsetAnnotations(n_7, j_23);
            LocalPopChoice(k_44);
          }
        else
          {
            t = j_44;
            t = w_51;
            t = filter_1_0(q_101, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm t)
{
  static ATerm b_52 (ATerm t)
  {
    ATerm l_44 = t;
    int m_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_86(t);
        t = b_52(t);
        LocalPopChoice(m_44);
      }
    else
      {
        t = l_44;
        t = c_86(t);
      }
    return(t);
  }
  t = b_52(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm n_44 = t;
  int o_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_52 = NULL,d_52 = NULL;
      t = term_o_19;
      c_52 = t;
      t = term_p_44;
      d_52 = t;
      t = term_r_44;
      t = t_11(c_52, d_52, t);
      LocalPopChoice(o_44);
    }
  else
    {
      t = n_44;
      {
        ATerm u_44 = t;
        int v_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_52 = NULL;
            t = term_w_44;
            e_52 = t;
            t = SSL_getenv(e_52);
            LocalPopChoice(v_44);
          }
        else
          {
            t = u_44;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = debug_1_0(i_12, t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_x_44;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL;
  t = term_h_44;
  l_52 = t;
  t = term_y_44;
  m_52 = t;
  t = term_z_44;
  t = t_11(l_52, m_52, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm d_45 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_45;
      }
  }
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = debug_1_0(s_12, t);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_e_45;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm g_52 = NULL;
  t = if_verbose5_1_0(h_12, t);
  g_52 = t;
  {
    ATerm f_45 = t;
    int g_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_52 = NULL,i_52 = NULL;
        t = term_h_44;
        h_52 = t;
        t = term_i_44;
        i_52 = t;
        t = term_i_45;
        t = t_11(h_52, i_52, t);
        LocalPopChoice(g_45);
      }
    else
      {
        t = f_45;
        {
          ATerm j_52 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          j_52 = t;
          t = repeat_2_0(j_12, _id, t);
          t = j_52;
        }
      }
  }
  t = g_52;
  t = if_verbose5_1_0(k_12, t);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = debug_1_0(u_12, t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_m_45;
  return(t);
}
static ATerm z_53 (ATerm t_52, ATerm t)
{
  ATerm v_52 = NULL,b_53 = NULL,c_53 = NULL;
  t = term_h_44;
  b_53 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, t_52);
  c_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_44, (ATerm) ATmakeAppl(sym_Tool_1, t_52));
  t = t_11(b_53, c_53, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_45 = ATgetFirst((ATermList) t);
      if(match_cons(n_45, sym__2))
        {
          ATerm p_45 = ATgetArgument(n_45, 0);
          v_52 = ATgetArgument(n_45, 1);
        }
      else
        _fail(t);
      {
        ATerm o_45 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_52;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = debug_1_0(y_12, t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_m_45;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_h_44;
  t = table_getlist_0_0(t);
  t = debug_1_0(a_13, t);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_t_45;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm u_45 = t;
  int v_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
      t = if_verbose5_1_0(t_12, t);
      t = xtc_load_0_0(t);
      f_53 = t;
      if(match_cons(t, sym__2))
        {
          d_53 = ATgetArgument(t, 0);
          e_53 = ATgetArgument(t, 1);
          {
            ATerm w_45 = t;
            int x_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
                t = term_h_44;
                j_53 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, d_53);
                k_53 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_h_44, (ATerm) ATmakeAppl(sym_Tool_1, d_53));
                t = t_11(j_53, k_53, t);
                {
                  static ATerm v_12 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((e_53 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((i_53 != NULL) && (i_53 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          i_53 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(v_12, t);
                }
                t = not_null(i_53);
                LocalPopChoice(x_45);
              }
            else
              {
                t = w_45;
                t = z_53(f_53, t);
              }
          }
        }
      else
        {
          t = z_53(f_53, t);
        }
      t = if_verbose5_1_0(x_12, t);
      LocalPopChoice(v_45);
    }
  else
    {
      t = u_45;
      {
        ATerm y_53 = NULL,g_24 = NULL,h_24 = NULL;
        y_53 = t;
        t = term_l_19;
        g_24 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_45), y_53), term_y_45);
        h_24 = t;
        t = SSL_printnl(g_24, h_24);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_45), y_53), term_y_45);
        t = if_verbose5_1_0(z_12, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm n_11 (ATerm z_48, ATerm y_48, ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL,f_54 = NULL,g_54 = NULL;
  t = z_48;
  {
    ATerm a_46 = t;
    int b_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_54 = NULL;
        t = term_o_19;
        i_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_19, z_48);
        t = t_11(i_54, z_48, t);
        LocalPopChoice(b_46);
      }
    else
      {
        t = a_46;
        t = (ATerm) ATempty;
      }
  }
  c_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_48, c_54);
  t = conc_0_0(t);
  b_54 = t;
  t = term_o_19;
  f_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_19, z_48, b_54);
  t = lookup_table_0_1(f_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(z_48, b_54, g_54, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_19, z_48, b_54);
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm t_54 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL;
      t = term_v_31;
      t = t_0(t);
      j_55 = t;
      t = term_d_46;
      k_55 = t;
      t = term_e_46;
      l_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_46, term_e_46, j_55);
      t = u_11(k_55, l_55, j_55, t);
      _fail(t);
    }
  else
    {
      ATerm t_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_54 = ATgetFirst((ATermList) t);
          e_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_55 = ATgetFirst((ATermList) t);
          g_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_54;
      t = p_0(t);
      t = f_55;
      t = r_0(t);
      t_55 = t;
      t = (ATerm) ATinsert(CheckATermList(g_55), t_55);
    }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm x_55 = NULL;
  x_55 = t;
  if(match_string(t, "-S"))
    {
      t = x_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_55;
    }
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm y_55 = NULL,a_56 = NULL;
  t = term_v_19;
  y_55 = t;
  t = term_a_33;
  a_56 = t;
  t = term_f_46;
  t = y_11(y_55, a_56, t);
  t = term_g_46;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_j_46;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm c_56 = NULL,e_56 = NULL,j_56 = NULL;
  c_56 = t;
  t = SSL_string_to_int(c_56);
  e_56 = t;
  t = term_v_19;
  j_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_19, e_56);
  t = y_11(j_56, e_56, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_56);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_k_46;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL;
  t = term_l_46;
  k_56 = t;
  t = term_v_31;
  l_56 = t;
  t = term_n_46;
  t = y_11(k_56, l_56, t);
  t = term_o_46;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  t = term_s_46;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_46 = t;
  int v_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_13, c_13, e_13, t);
      LocalPopChoice(v_46);
    }
  else
    {
      t = t_46;
      {
        ATerm w_46 = t;
        int x_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_13, g_13, h_13, t);
            LocalPopChoice(x_46);
          }
        else
          {
            t = w_46;
            t = Option_3_0(i_13, j_13, k_13, t);
          }
      }
    }
  return(t);
}
static ATerm o_11 (ATerm w_48, ATerm x_48, ATerm t)
{
  ATerm y_46 = t;
  int z_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_56 = NULL,s_56 = NULL,u_56 = NULL;
      t = term_o_19;
      u_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_o_19, w_48);
      t = t_11(u_56, w_48, t);
      t = term_o_19;
      q_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_o_19, w_48);
      t = lookup_table_0_1(q_56, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          s_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_11(w_48, s_56, t);
      t = (ATerm) ATmakeAppl(sym__2, term_o_19, w_48);
      LocalPopChoice(z_46);
    }
  else
    {
      t = y_46;
      t = (ATerm) ATmakeAppl(sym__2, w_48, x_48);
      t = y_11(w_48, x_48, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm e_94 (ATerm), ATerm t)
{
  static ATerm o_58 (ATerm t)
  {
    ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL;
    j_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_58 = ATgetFirst((ATermList) t);
        i_58 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_24 = NULL,s_24 = NULL,r_7 = NULL;
          t = SSLgetAnnotations(j_58);
          n_24 = t;
          t = i_58;
          t = o_58(t);
          s_24 = t;
          t = (ATerm) ATinsert(CheckATermList(s_24), h_58);
          r_7 = t;
          t = SSLsetAnnotations(r_7, n_24);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_58;
        t = e_94(t);
      }
    return(t);
  }
  t = o_58(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,a_57 = NULL;
  w_56 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_56;
    }
  else
    {
      static ATerm l_13 (ATerm t)
      {
        t = not_null(a_57);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_56 = ATgetFirst((ATermList) t);
          if(((a_57 != NULL) && (a_57 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_56;
      t = at_end_1_0(l_13, t);
    }
  return(t);
}
static ATerm j_59 (ATerm t_58, ATerm t)
{
  ATerm u_58 = NULL;
  t = SSL_explode_term(t_58);
  if(match_cons(t, sym__2))
    {
      ATerm c_47 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_47) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_58;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL;
  a_59 = t;
  if(match_cons(t, sym__2))
    {
      y_58 = ATgetArgument(t, 0);
      z_58 = ATgetArgument(t, 1);
      {
        ATerm d_47 = t;
        int h_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_13 (ATerm t)
            {
              t = z_58;
              return(t);
            }
            t = y_58;
            t = at_end_1_0(m_13, t);
            LocalPopChoice(h_47);
          }
        else
          {
            t = d_47;
            t = j_59(a_59, t);
          }
      }
    }
  else
    {
      t = j_59(a_59, t);
    }
  return(t);
}
static ATerm p_11 (ATerm a_49, ATerm b_49, ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,r_59 = NULL,s_59 = NULL;
  t = a_49;
  {
    ATerm i_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_59 = NULL;
        t = term_o_19;
        x_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_19, a_49);
        t = t_11(x_59, a_49, t);
        LocalPopChoice(l_47);
      }
    else
      {
        t = i_47;
        t = (ATerm) ATempty;
      }
  }
  p_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_59, b_49);
  t = conc_0_0(t);
  o_59 = t;
  t = term_o_19;
  r_59 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_19, a_49, o_59);
  t = lookup_table_0_1(r_59, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(a_49, o_59, s_59, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_19, a_49, o_59);
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm c_60 = NULL;
  c_60 = t;
  if(match_string(t, "-o"))
    {
      t = c_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_60;
    }
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL;
  d_60 = t;
  t = term_b_28;
  e_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_28, d_60);
  t = y_11(e_60, d_60, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_60);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = term_m_47;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_13, o_13, p_13, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm g_60 = NULL;
  g_60 = t;
  if(match_string(t, "-i"))
    {
      t = g_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_60;
    }
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL;
  j_60 = t;
  t = term_c_28;
  k_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_28, j_60);
  t = y_11(k_60, j_60, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_60);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_o_47;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_13, r_13, s_13, t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm u_60 = NULL;
  u_60 = t;
  if(match_string(t, "-I"))
    {
      t = u_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = u_60;
    }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm v_60 = NULL,y_60 = NULL,a_61 = NULL;
  v_60 = t;
  t = term_e_34;
  y_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_60), term_e_34);
  a_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_34, (ATerm) ATinsert(ATinsert(ATempty, v_60), term_e_34));
  t = p_11(y_60, a_61, t);
  t = term_v_31;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  t = term_p_47;
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm b_61 = NULL;
  b_61 = t;
  if(match_string(t, "--main"))
    {
      t = b_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = b_61;
    }
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm f_61 = NULL,i_61 = NULL;
  f_61 = t;
  t = term_d_32;
  i_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_32, f_61);
  t = y_11(i_61, f_61, t);
  t = term_v_31;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_r_47;
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm k_61 = NULL;
  k_61 = t;
  if(match_string(t, "--library"))
    {
      t = k_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = k_61;
    }
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm n_61 = NULL,r_61 = NULL;
  t = term_h_32;
  n_61 = t;
  t = term_v_31;
  r_61 = t;
  t = term_s_47;
  t = y_11(n_61, r_61, t);
  t = term_v_31;
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = term_w_47;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL;
  s_61 = t;
  t = term_x_47;
  t_61 = t;
  t = (ATerm) ATinsert(ATempty, s_61);
  u_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_47, (ATerm) ATinsert(ATempty, s_61));
  t = p_11(t_61, u_61, t);
  t = term_v_31;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_b_48;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL;
  c_62 = t;
  t = term_c_48;
  d_62 = t;
  t = (ATerm) ATinsert(ATempty, c_62);
  e_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_48, (ATerm) ATinsert(ATempty, c_62));
  t = n_11(d_62, e_62, t);
  t = term_v_31;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = term_d_48;
  return(t);
}
static ATerm r_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,i_62 = NULL;
  f_62 = t;
  t = term_e_48;
  g_62 = t;
  t = (ATerm) ATinsert(ATempty, f_62);
  i_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_48, (ATerm) ATinsert(ATempty, f_62));
  t = n_11(g_62, i_62, t);
  t = term_v_31;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = term_g_48;
  return(t);
}
static ATerm z_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm j_62 = NULL,m_62 = NULL;
  t = term_n_48;
  j_62 = t;
  t = term_v_31;
  m_62 = t;
  t = term_r_48;
  t = y_11(j_62, m_62, t);
  t = term_v_31;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  t = term_s_48;
  return(t);
}
static ATerm f_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm n_62 = NULL,p_62 = NULL;
  t = term_w_33;
  n_62 = t;
  t = term_v_31;
  p_62 = t;
  t = term_v_48;
  t = y_11(n_62, p_62, t);
  t = term_v_31;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  t = term_c_49;
  return(t);
}
static ATerm k_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm q_62 = NULL,u_62 = NULL;
  t = term_v_28;
  q_62 = t;
  t = term_v_31;
  u_62 = t;
  t = term_e_49;
  t = y_11(q_62, u_62, t);
  t = term_v_31;
  return(t);
}
static ATerm n_15 (ATerm t)
{
  t = term_f_49;
  return(t);
}
static ATerm r_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL;
  v_62 = t;
  t = SSL_string_to_int(v_62);
  w_62 = t;
  t = term_p_19;
  x_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_19, w_62);
  t = y_11(x_62, w_62, t);
  t = term_v_31;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  t = term_u_49;
  return(t);
}
static ATerm v_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL,b_63 = NULL;
  y_62 = t;
  t = SSL_string_to_int(y_62);
  z_62 = t;
  t = term_x_49;
  b_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_49, z_62);
  t = y_11(b_63, z_62, t);
  t = term_v_31;
  return(t);
}
static ATerm z_15 (ATerm t)
{
  t = term_y_49;
  return(t);
}
static ATerm a_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm c_63 = NULL,d_63 = NULL;
  t = term_z_49;
  c_63 = t;
  t = term_v_31;
  d_63 = t;
  t = term_a_50;
  t = o_11(c_63, d_63, t);
  t = term_v_31;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  t = term_y_50;
  return(t);
}
static ATerm i_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm e_63 = NULL,h_63 = NULL;
  e_63 = t;
  if(match_string(t, "old"))
    {
      t = e_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = e_63;
    }
  t = term_p_30;
  h_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, e_63);
  t = y_11(h_63, e_63, t);
  t = term_v_31;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_z_50;
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm j_63 = NULL;
  j_63 = t;
  if(match_string(t, "-h"))
    {
      t = j_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = j_63;
    }
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm k_63 = NULL,m_63 = NULL;
  t = term_d_51;
  k_63 = t;
  t = term_v_31;
  m_63 = t;
  t = term_e_51;
  t = y_11(k_63, m_63, t);
  t = term_v_31;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = term_f_51;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL;
  t = term_g_51;
  o_63 = t;
  t = term_v_31;
  p_63 = t;
  t = term_h_51;
  t = y_11(o_63, p_63, t);
  t = term_v_31;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_i_51;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm q_63 = NULL;
  q_63 = t;
  if(match_string(t, "-v"))
    {
      t = q_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = q_63;
    }
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm r_63 = NULL,s_63 = NULL;
  t = term_j_51;
  r_63 = t;
  t = term_v_31;
  s_63 = t;
  t = term_k_51;
  t = y_11(r_63, s_63, t);
  t = term_v_31;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  t = term_l_51;
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm v_63 = NULL;
  v_63 = t;
  if(match_string(t, "--warning"))
    {
      t = v_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = v_63;
    }
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm x_63 = NULL;
  x_63 = t;
  {
    ATerm m_51 = t;
    int n_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_63 = NULL,d_64 = NULL,s_64 = NULL,u_64 = NULL,v_64 = NULL,x_64 = NULL,b_65 = NULL,i_65 = NULL,u_7 = NULL;
        t = term_o_19;
        s_64 = t;
        t = term_j_28;
        u_64 = t;
        t = term_k_28;
        t = t_11(s_64, u_64, t);
        i_65 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_64 = ATgetFirst((ATermList) t);
            b_65 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_65);
        v_64 = t;
        t = x_64;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = b_65;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(b_65), x_64);
        u_7 = t;
        t = SSLsetAnnotations(u_7, v_64);
        t = term_j_28;
        z_63 = t;
        t = (ATerm) ATinsert(ATempty, x_63);
        d_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_28, (ATerm) ATinsert(ATempty, x_63));
        t = y_11(z_63, d_64, t);
        LocalPopChoice(n_51);
      }
    else
      {
        t = m_51;
        {
          ATerm j_65 = NULL,m_65 = NULL;
          t = term_j_28;
          j_65 = t;
          t = (ATerm) ATinsert(ATempty, x_63);
          m_65 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_28, (ATerm) ATinsert(ATempty, x_63));
          t = n_11(j_65, m_65, t);
        }
      }
  }
  t = term_v_31;
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_o_51;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm n_65 = NULL,z_65 = NULL,b_66 = NULL;
  n_65 = t;
  t = term_h_30;
  z_65 = t;
  t = term_c_20;
  b_66 = t;
  t = term_p_51;
  t = y_11(z_65, b_66, t);
  t = n_65;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = term_h_30;
  return(t);
}
static ATerm e_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL;
  c_66 = t;
  t = term_l_30;
  d_66 = t;
  t = term_a_33;
  e_66 = t;
  t = term_q_51;
  t = y_11(d_66, e_66, t);
  t = c_66;
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_l_30;
  return(t);
}
static ATerm m_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm f_66 = NULL,i_66 = NULL;
  t = term_s_34;
  f_66 = t;
  t = term_v_31;
  i_66 = t;
  t = term_r_51;
  t = y_11(f_66, i_66, t);
  t = term_v_31;
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_s_51;
  return(t);
}
ATerm strc_options_0_0 (ATerm t)
{
  ATerm t_51 = t;
  int x_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(x_51);
    }
  else
    {
      t = t_51;
      {
        ATerm y_51 = t;
        int z_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(z_51);
          }
        else
          {
            t = y_51;
            {
              ATerm a_52 = t;
              int f_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(t_13, u_13, v_13, t);
                  LocalPopChoice(f_52);
                }
              else
                {
                  t = a_52;
                  {
                    ATerm k_52 = t;
                    int n_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(w_13, z_13, b_14, t);
                        LocalPopChoice(n_52);
                      }
                    else
                      {
                        t = k_52;
                        {
                          ATerm o_52 = t;
                          int p_52 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(c_14, d_14, e_14, t);
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
                                    t = ArgOption_3_0(f_14, g_14, i_14, t);
                                    LocalPopChoice(r_52);
                                  }
                                else
                                  {
                                    t = q_52;
                                    {
                                      ATerm s_52 = t;
                                      int u_52 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(j_14, k_14, o_14, t);
                                          LocalPopChoice(u_52);
                                        }
                                      else
                                        {
                                          t = s_52;
                                          {
                                            ATerm w_52 = t;
                                            int x_52 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(r_14, s_14, x_14, t);
                                                LocalPopChoice(x_52);
                                              }
                                            else
                                              {
                                                t = w_52;
                                                {
                                                  ATerm y_52 = t;
                                                  int z_52 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(z_14, b_15, d_15, t);
                                                      LocalPopChoice(z_52);
                                                    }
                                                  else
                                                    {
                                                      t = y_52;
                                                      {
                                                        ATerm a_53 = t;
                                                        int g_53 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(f_15, g_15, h_15, t);
                                                            LocalPopChoice(g_53);
                                                          }
                                                        else
                                                          {
                                                            t = a_53;
                                                            {
                                                              ATerm h_53 = t;
                                                              int l_53 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = Option_3_0(k_15, m_15, n_15, t);
                                                                  LocalPopChoice(l_53);
                                                                }
                                                              else
                                                                {
                                                                  t = h_53;
                                                                  {
                                                                    ATerm m_53 = t;
                                                                    int q_53 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(r_15, s_15, u_15, t);
                                                                        LocalPopChoice(q_53);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_53;
                                                                        {
                                                                          ATerm r_53 = t;
                                                                          int s_53 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = ArgOption_3_0(v_15, x_15, z_15, t);
                                                                              LocalPopChoice(s_53);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = r_53;
                                                                              {
                                                                                ATerm v_53 = t;
                                                                                int w_53 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(a_16, f_16, h_16, t);
                                                                                    LocalPopChoice(w_53);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_53;
                                                                                    {
                                                                                      ATerm x_53 = t;
                                                                                      int a_54 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = ArgOption_3_0(i_16, k_16, l_16, t);
                                                                                          LocalPopChoice(a_54);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_53;
                                                                                          {
                                                                                            ATerm d_54 = t;
                                                                                            int e_54 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = verbose_option_0_0(t);
                                                                                                LocalPopChoice(e_54);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = d_54;
                                                                                                {
                                                                                                  ATerm h_54 = t;
                                                                                                  int j_54 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(n_16, o_16, p_16, t);
                                                                                                      LocalPopChoice(j_54);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = h_54;
                                                                                                      {
                                                                                                        ATerm k_54 = t;
                                                                                                        int o_54 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(q_16, r_16, s_16, t);
                                                                                                            LocalPopChoice(o_54);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = k_54;
                                                                                                            {
                                                                                                              ATerm p_54 = t;
                                                                                                              int q_54 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Option_3_0(t_16, u_16, v_16, t);
                                                                                                                  LocalPopChoice(q_54);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = p_54;
                                                                                                                  {
                                                                                                                    ATerm r_54 = t;
                                                                                                                    int s_54 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = ArgOption_3_0(w_16, y_16, z_16, t);
                                                                                                                        LocalPopChoice(s_54);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = r_54;
                                                                                                                        {
                                                                                                                          ATerm w_54 = t;
                                                                                                                          int x_54 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Option_3_0(b_17, c_17, d_17, t);
                                                                                                                              LocalPopChoice(x_54);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = w_54;
                                                                                                                              {
                                                                                                                                ATerm y_54 = t;
                                                                                                                                int z_54 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Option_3_0(e_17, f_17, l_17, t);
                                                                                                                                    LocalPopChoice(z_54);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = y_54;
                                                                                                                                    t = Option_3_0(m_17, o_17, p_17, t);
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
            }
          }
      }
    }
  return(t);
}
static ATerm q_11 (ATerm l_57, ATerm m_57, ATerm t)
{
  ATerm j_66 = NULL;
  t = SSL_hashtable_remove(m_57, l_57);
  j_66 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_66);
  return(t);
}
static ATerm r_11 (ATerm q_57, ATerm t)
{
  ATerm k_66 = NULL;
  t = SSL_hashtable_destroy(q_57);
  k_66 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_66);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL;
  n_66 = t;
  t = table_hashtable_0_0(t);
  p_66 = t;
  t = lookup_table_0_1(n_66, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(r_66, t);
  t = p_66;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_11(n_66, q_66, t);
  t = n_66;
  return(t);
}
ATerm long_description_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_55), term_g_41), term_v_55), term_u_55), term_s_55), term_g_41), term_r_55), term_q_55), term_p_55), term_o_55), term_n_55), term_m_55), term_d_55), term_c_55), term_b_55);
  return(t);
}
ATerm map_1_0 (ATerm n_93 (ATerm), ATerm t)
{
  static ATerm h_67 (ATerm t)
  {
    ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL;
    e_67 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_67;
      }
    else
      {
        ATerm e_25 = NULL,j_25 = NULL,k_25 = NULL,w_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_67 = ATgetFirst((ATermList) t);
            g_67 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_67);
        e_25 = t;
        t = f_67;
        t = n_93(t);
        j_25 = t;
        t = g_67;
        t = h_67(t);
        k_25 = t;
        t = (ATerm) ATinsert(CheckATermList(k_25), j_25);
        w_7 = t;
        t = SSLsetAnnotations(w_7, e_25);
      }
    return(t);
  }
  t = h_67(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_67 = ATgetFirst((ATermList) t);
      v_67 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_67 = NULL,d_68 = NULL;
        static ATerm q_17 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_67)), not_null(d_68));
          return(t);
        }
        t = v_67;
        t = n_0(t);
        if(((z_67 != NULL) && (z_67 != t)))
          _fail(t);
        else
          z_67 = t;
        t = u_67;
        t = l_0(t);
        if(((d_68 != NULL) && (d_68 != t)))
          _fail(t);
        else
          d_68 = t;
        t = v_67;
        t = reverse_acc_2_0(l_0, q_17, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_31;
      t = n_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm e_68 = NULL;
  t = term_v_31;
  t = k_0(t);
  e_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_56), e_68), term_g_56), term_g_41), term_f_56), term_g_41), term_d_56), term_b_56), term_g_41), term_z_55);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm w_68 = NULL;
  w_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_68), term_i_56);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_68 = NULL,m_68 = NULL,n_68 = NULL;
  ATerm m_56 = t;
  int n_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_68 = NULL,p_68 = NULL;
      t = term_o_19;
      o_68 = t;
      t = term_o_56;
      p_68 = t;
      t = term_p_56;
      t = t_11(o_68, p_68, t);
      j_68 = t;
      LocalPopChoice(n_56);
    }
  else
    {
      t = m_56;
      {
        static ATerm s_17 (ATerm t)
        {
          ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL,a_8 = NULL;
          s_68 = t;
          if(match_cons(t, sym_Program_1))
            {
              r_68 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_68);
          q_68 = t;
          t = r_68;
          if(((j_68 != NULL) && (j_68 != t)))
            _fail(t);
          else
            j_68 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, r_68);
          a_8 = t;
          t = SSLsetAnnotations(a_8, q_68);
          return(t);
        }
        t = fetch_1_0(s_17, t);
      }
    }
  {
    ATerm r_56 = t;
    int t_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_17 (ATerm t)
        {
          t = not_null(j_68);
          return(t);
        }
        t = short_description_1_0(t_17, t);
        t = echo_0_0(t);
        LocalPopChoice(t_56);
      }
    else
      {
        t = r_56;
      }
  }
  t = term_v_56;
  t = echo_0_0(t);
  t = term_d_46;
  m_68 = t;
  t = term_e_46;
  n_68 = t;
  t = term_y_56;
  t = t_11(m_68, n_68, t);
  t = reverse_acc_2_0(_id, u_17, t);
  t = map_1_0(v_17, t);
  {
    ATerm z_56 = t;
    int b_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_68 = NULL;
        static ATerm y_17 (ATerm t)
        {
          t = not_null(j_68);
          return(t);
        }
        t = long_description_1_0(y_17, t);
        x_68 = t;
        t = (ATerm) ATinsert(CheckATermList(x_68), term_g_41);
        t = echo_0_0(t);
        LocalPopChoice(b_57);
      }
    else
      {
        t = z_56;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  static ATerm r_70 (ATerm t)
  {
    ATerm m_70 = NULL,p_70 = NULL,q_70 = NULL;
    m_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_70 = ATgetFirst((ATermList) t);
        q_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_57 = t;
      int d_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_25 = NULL,e_26 = NULL,c_8 = NULL;
          t = SSLgetAnnotations(m_70);
          s_25 = t;
          t = p_70;
          t = x_93(t);
          e_26 = t;
          t = (ATerm) ATinsert(CheckATermList(q_70), e_26);
          c_8 = t;
          t = SSLsetAnnotations(c_8, s_25);
          LocalPopChoice(d_57);
        }
      else
        {
          t = c_57;
          {
            ATerm x_26 = NULL,d_27 = NULL,d_8 = NULL;
            t = SSLgetAnnotations(m_70);
            x_26 = t;
            t = q_70;
            t = r_70(t);
            d_27 = t;
            t = (ATerm) ATinsert(CheckATermList(d_27), p_70);
            d_8 = t;
            t = SSLsetAnnotations(d_8, x_26);
          }
        }
    }
    return(t);
  }
  t = r_70(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_70 = NULL,b_71 = NULL,c_71 = NULL;
  y_70 = t;
  {
    ATerm e_57 = t;
    int f_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_70;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_57 = ATgetFirst((ATermList) t);
                ATerm s_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_70;
          }
        LocalPopChoice(f_57);
      }
    else
      {
        t = e_57;
        t = (ATerm) ATinsert(ATempty, y_70);
      }
  }
  b_71 = t;
  t = term_t_32;
  c_71 = t;
  t = SSL_printnl(c_71, b_71);
  t = y_70;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL;
  t = term_o_19;
  j_71 = t;
  t = term_o_56;
  k_71 = t;
  t = term_p_56;
  t = t_11(j_71, k_71, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL;
  t = term_t_57;
  l_71 = t;
  t = term_v_31;
  m_71 = t;
  t = term_u_57;
  t = y_11(l_71, m_71, t);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  t = term_v_57;
  return(t);
}
static ATerm e_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_18 (ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL;
  t = term_t_57;
  q_71 = t;
  t = term_v_31;
  r_71 = t;
  t = term_u_57;
  t = y_11(q_71, r_71, t);
  t = term_j_51;
  o_71 = t;
  t = term_v_31;
  p_71 = t;
  t = term_k_51;
  t = y_11(o_71, p_71, t);
  t = term_w_57;
  return(t);
}
static ATerm i_18 (ATerm t)
{
  t = term_x_57;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_57 = t;
  int z_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_18, b_18, c_18, t);
      LocalPopChoice(z_57);
    }
  else
    {
      t = y_57;
      t = Option_3_0(e_18, h_18, i_18, t);
    }
  return(t);
}
static ATerm u_11 (ATerm o_53, ATerm p_53, ATerm n_53, ATerm t)
{
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL,z_71 = NULL,a_72 = NULL;
  v_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_53, p_53);
  {
    ATerm a_58 = t;
    int b_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_58 = ATgetArgument(t, 0);
            ATerm d_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_53, p_53);
        t = t_11(o_53, p_53, t);
        LocalPopChoice(b_58);
      }
    else
      {
        t = a_58;
        t = (ATerm) ATempty;
      }
  }
  w_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_53, p_53, (ATerm) ATinsert(CheckATermList(w_71), n_53));
  t = lookup_table_0_1(o_53, t);
  a_72 = t;
  t = (ATerm) ATinsert(CheckATermList(w_71), n_53);
  x_71 = t;
  t = a_72;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(p_53, x_71, z_71, t);
  t = v_71;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm y_72 = NULL,a_73 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_73 = NULL,k_73 = NULL,l_73 = NULL;
      t = term_v_31;
      t = i_0(t);
      i_73 = t;
      t = term_d_46;
      k_73 = t;
      t = term_e_46;
      l_73 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_46, term_e_46, i_73);
      t = u_11(k_73, l_73, i_73, t);
      _fail(t);
    }
  else
    {
      ATerm s_73 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_72 = ATgetFirst((ATermList) t);
          a_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_72;
      t = d_0(t);
      t = term_v_31;
      t = g_0(t);
      s_73 = t;
      t = (ATerm) ATinsert(CheckATermList(a_73), s_73);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_63 (ATerm), ATerm g_63 (ATerm), ATerm t)
{
  ATerm t_73 = NULL,u_73 = NULL,y_73 = NULL,z_73 = NULL,c_74 = NULL,d_74 = NULL,g_8 = NULL;
  d_74 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_73 = ATgetFirst((ATermList) t);
      y_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_74);
  t_73 = t;
  t = u_73;
  t = f_63(t);
  z_73 = t;
  t = y_73;
  t = g_63(t);
  c_74 = t;
  t = (ATerm) ATinsert(CheckATermList(c_74), z_73);
  g_8 = t;
  t = SSLsetAnnotations(g_8, t_73);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_113 (ATerm), ATerm t)
{
  ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL,o_74 = NULL,t_74 = NULL,u_74 = NULL,k_8 = NULL;
  k_74 = t;
  {
    ATerm e_58 = t;
    int f_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_58;
        t = w_113(t);
        LocalPopChoice(f_58);
      }
    else
      {
        t = e_58;
      }
  }
  t = k_74;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_74 = ATgetFirst((ATermList) t);
      o_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_74);
  l_74 = t;
  t = term_o_56;
  u_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_56, m_74);
  t = y_11(u_74, m_74, t);
  t = o_74;
  {
    static ATerm g_75 (ATerm t)
    {
      ATerm k_58 = t;
      int l_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_58 = t;
          int n_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_74 = NULL;
              z_74 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_74;
              LocalPopChoice(n_58);
            }
          else
            {
              t = m_58;
              t = w_113(t);
              t = Cons_2_0(_id, g_75, t);
            }
          LocalPopChoice(l_58);
        }
      else
        {
          t = k_58;
          {
            ATerm c_75 = NULL,d_75 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_75 = ATgetFirst((ATermList) t);
                d_75 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_75), (ATerm) ATmakeAppl(sym_Undefined_1, c_75));
          }
        }
      return(t);
    }
    t = g_75(t);
  }
  t_74 = t;
  t = (ATerm) ATinsert(CheckATermList(t_74), (ATerm) ATmakeAppl(sym_Program_1, m_74));
  k_8 = t;
  t = SSLsetAnnotations(k_8, l_74);
  return(t);
}
static ATerm m_18 (ATerm t)
{
  ATerm t_75 = NULL;
  t_75 = t;
  if(match_string(t, "--help"))
    {
      t = t_75;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_75;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_75;
        }
    }
  return(t);
}
static ATerm n_18 (ATerm t)
{
  ATerm u_75 = NULL,v_75 = NULL;
  t = term_d_51;
  u_75 = t;
  t = term_v_31;
  v_75 = t;
  t = term_e_51;
  t = y_11(u_75, v_75, t);
  t = term_p_58;
  return(t);
}
static ATerm q_18 (ATerm t)
{
  t = term_q_58;
  return(t);
}
static ATerm r_18 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_113 (ATerm), ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL;
  n_75 = t;
  t = term_d_46;
  o_75 = t;
  t = term_r_58;
  t = lookup_table_0_1(o_75, t);
  s_75 = t;
  t = term_e_46;
  p_75 = t;
  t = (ATerm) ATempty;
  q_75 = t;
  t = s_75;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(p_75, q_75, r_75, t);
  t = n_75;
  {
    static ATerm j_18 (ATerm t)
    {
      ATerm s_58 = t;
      int v_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_113(t);
          LocalPopChoice(v_58);
        }
      else
        {
          t = s_58;
          {
            ATerm w_58 = t;
            int x_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_18, n_18, q_18, t);
                LocalPopChoice(x_58);
              }
            else
              {
                t = w_58;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_18, t);
  }
  {
    ATerm b_59 = t;
    int c_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_76 = NULL;
        g_76 = t;
        {
          ATerm d_59 = t;
          int e_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_27 = NULL;
              t = g_76;
              {
                ATerm f_59 = t;
                int g_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_27 = NULL,r_27 = NULL;
                    t = term_o_19;
                    n_27 = t;
                    t = term_d_51;
                    r_27 = t;
                    t = term_h_59;
                    t = t_11(n_27, r_27, t);
                    LocalPopChoice(g_59);
                  }
                else
                  {
                    t = f_59;
                    t = fetch_1_0(r_18, t);
                  }
              }
              t = g_76;
              t = default_system_usage_0_0(t);
              t = term_a_33;
              m_27 = t;
              t = SSL_exit(m_27);
              LocalPopChoice(e_59);
            }
          else
            {
              t = d_59;
              {
                ATerm z_27 = NULL,a_28 = NULL,d_28 = NULL;
                t = term_o_19;
                a_28 = t;
                t = term_t_57;
                d_28 = t;
                t = term_i_59;
                t = t_11(a_28, d_28, t);
                t = g_76;
                t = default_system_about_0_0(t);
                t = term_a_33;
                z_27 = t;
                t = SSL_exit(z_27);
              }
            }
        }
        LocalPopChoice(c_59);
      }
    else
      {
        t = b_59;
        {
          ATerm k_59 = t;
          int l_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_76 = NULL,i_76 = NULL,j_76 = NULL;
              static ATerm s_18 (ATerm t)
              {
                ATerm k_76 = NULL,l_76 = NULL,m_76 = NULL,m_8 = NULL;
                m_76 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_76 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_76);
                k_76 = t;
                t = l_76;
                if(((l_75 != NULL) && (l_75 != t)))
                  _fail(t);
                else
                  l_75 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_76);
                m_8 = t;
                t = SSLsetAnnotations(m_8, k_76);
                return(t);
              }
              t = fetch_1_0(s_18, t);
              t = term_l_19;
              i_76 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_75)), term_m_59);
              j_76 = t;
              t = SSL_printnl(i_76, j_76);
              t = (ATerm) ATmakeAppl(sym__2, term_l_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_75)), term_m_59));
              t = default_system_usage_0_0(t);
              t = term_c_20;
              h_76 = t;
              t = SSL_exit(h_76);
              LocalPopChoice(l_59);
            }
          else
            {
              t = k_59;
            }
        }
      }
  }
  m_75 = t;
  t = term_d_46;
  t = table_destroy_0_0(t);
  t = m_75;
  return(t);
}
static ATerm w_11 (ATerm g_57, ATerm h_57, ATerm i_57, ATerm t)
{
  ATerm r_76 = NULL;
  t = SSL_hashtable_put(i_57, g_57, h_57);
  r_76 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_76);
  return(t);
}
static ATerm x_11 (ATerm j_57, ATerm k_57, ATerm t)
{
  t = SSL_hashtable_get(k_57, j_57);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_57, ATerm p_57, ATerm t)
{
  ATerm s_76 = NULL;
  t = SSL_hashtable_create(o_57, p_57);
  s_76 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_76);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL,x_76 = NULL,y_76 = NULL;
  t_76 = t;
  t = term_n_59;
  x_76 = t;
  t = term_q_59;
  y_76 = t;
  t = t_76;
  t = new_hashtable_0_2(x_76, y_76, t);
  u_76 = t;
  t = t_76;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(t_76, u_76, v_76, t);
  t = t_76;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm z_76 = NULL;
  t = SSL_table_hashtable();
  z_76 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_76);
  return(t);
}
ATerm lookup_table_0_1 (ATerm a_55, ATerm t)
{
  ATerm i_77 = NULL;
  t = table_hashtable_0_0(t);
  i_77 = t;
  {
    ATerm t_59 = t;
    int u_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_28 = NULL;
        t = i_77;
        if(match_cons(t, sym_Hashtable_1))
          {
            g_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_11(a_55, g_28, t);
        LocalPopChoice(u_59);
      }
    else
      {
        t = t_59;
        {
          ATerm t_28 = NULL;
          t = a_55;
          t = table_create_0_0(t);
          t = i_77;
          if(match_cons(t, sym_Hashtable_1))
            {
              t_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_11(a_55, t_28, t);
        }
      }
  }
  return(t);
}
static ATerm y_11 (ATerm t_48, ATerm u_48, ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL;
  t = term_o_19;
  l_77 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_19, t_48, u_48);
  t = lookup_table_0_1(l_77, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(t_48, u_48, m_77, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_19, t_48, u_48);
  return(t);
}
static ATerm z_11 (ATerm t_37, ATerm u_37, ATerm t)
{
  t = SSL_strcat(t_37, u_37);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm r_77 = NULL,s_77 = NULL;
  s_77 = t;
  t = SSL_explode_string(s_77);
  {
    ATerm v_59 = t;
    int w_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm k_78 (ATerm t)
        {
          ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL;
          h_78 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_78 = ATgetFirst((ATermList) t);
              j_78 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm y_59 = t;
            int z_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_28 = NULL,e_29 = NULL,q_8 = NULL;
                t = SSLgetAnnotations(h_78);
                y_28 = t;
                t = j_78;
                t = k_78(t);
                e_29 = t;
                t = (ATerm) ATinsert(CheckATermList(e_29), i_78);
                q_8 = t;
                t = SSLsetAnnotations(q_8, y_28);
                LocalPopChoice(z_59);
              }
            else
              {
                t = y_59;
                {
                  ATerm k_30 = NULL,d_9 = NULL;
                  t = SSLgetAnnotations(h_78);
                  k_30 = t;
                  t = i_78;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, i_78);
                  d_9 = t;
                  t = SSLsetAnnotations(d_9, k_30);
                }
              }
          }
          return(t);
        }
        t = k_78(t);
        LocalPopChoice(w_59);
      }
    else
      {
        t = v_59;
        t = (ATerm) ATempty;
      }
  }
  r_77 = t;
  t = SSL_implode_string(r_77);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
ATerm init_strc_config_0_0 (ATerm t)
{
  ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL,k_79 = NULL,l_79 = NULL,m_79 = NULL,n_79 = NULL,o_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL;
  n_78 = t;
  t = term_u_40;
  x_79 = t;
  t = term_a_60;
  y_79 = t;
  t = term_b_60;
  t = y_11(x_79, y_79, t);
  t = term_v_19;
  v_79 = t;
  t = term_c_20;
  w_79 = t;
  t = term_f_60;
  t = y_11(v_79, w_79, t);
  t = term_p_19;
  t_79 = t;
  t = term_a_33;
  u_79 = t;
  t = term_h_60;
  t = y_11(t_79, u_79, t);
  t = term_x_49;
  r_79 = t;
  t = term_y_20;
  s_79 = t;
  t = term_i_60;
  t = y_11(r_79, s_79, t);
  t = term_e_34;
  p_79 = t;
  t = (ATerm) ATempty;
  q_79 = t;
  t = term_l_60;
  t = y_11(p_79, q_79, t);
  t = term_x_47;
  n_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_60), term_m_60);
  o_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_47, (ATerm) ATinsert(ATinsert(ATempty, term_n_60), term_m_60));
  t = y_11(n_79, o_79, t);
  t = term_o_60;
  t = xtc_find_path_0_0(t);
  z_78 = t;
  t = term_p_60;
  m_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_78, term_p_60);
  t = z_11(z_78, m_79, t);
  t_78 = t;
  t = term_o_60;
  t = xtc_find_path_0_0(t);
  x_78 = t;
  t = term_p_60;
  l_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_78, term_p_60);
  t = z_11(x_78, l_79, t);
  u_78 = t;
  t = term_q_60;
  t = xtc_find_path_0_0(t);
  w_78 = t;
  t = term_p_60;
  k_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_78, term_p_60);
  t = z_11(w_78, k_79, t);
  v_78 = t;
  t = term_c_48;
  i_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_78), term_e_34), u_78), term_e_34), t_78), term_e_34);
  j_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_48, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_78), term_e_34), u_78), term_e_34), t_78), term_e_34));
  t = y_11(i_79, j_79, t);
  t = term_o_60;
  t = xtc_find_path_0_0(t);
  s_78 = t;
  t = term_r_60;
  h_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_78, term_r_60);
  t = z_11(s_78, h_79, t);
  o_78 = t;
  t = term_q_60;
  t = xtc_find_path_0_0(t);
  q_78 = t;
  t = term_s_60;
  g_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_78, term_s_60);
  t = z_11(q_78, g_79, t);
  p_78 = t;
  t = term_e_48;
  e_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_61), term_z_60), p_78), term_t_60), term_x_60), term_w_60), o_78), term_t_60);
  f_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_48, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_61), term_z_60), p_78), term_t_60), term_x_60), term_w_60), o_78), term_t_60));
  t = y_11(e_79, f_79, t);
  t = term_p_30;
  c_79 = t;
  t = term_d_61;
  d_79 = t;
  t = term_e_61;
  t = y_11(c_79, d_79, t);
  t = term_j_28;
  a_79 = t;
  t = (ATerm) ATinsert(ATempty, term_g_61);
  b_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_28, (ATerm) ATinsert(ATempty, term_g_61));
  t = y_11(a_79, b_79, t);
  t = n_78;
  return(t);
}
static ATerm u_18 (ATerm t)
{
  ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL;
  u_80 = t;
  t = term_o_19;
  v_80 = t;
  t = term_c_28;
  w_80 = t;
  t = term_h_61;
  t = t_11(v_80, w_80, t);
  t = debug_1_0(x_18, t);
  t = u_80;
  return(t);
}
static ATerm x_18 (ATerm t)
{
  t = term_j_61;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_strc_config_0_0(t);
  t = parse_options_1_0(strc_options_0_0, t);
  {
    ATerm l_61 = t;
    int m_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL;
        t = term_o_19;
        e_80 = t;
        t = term_g_51;
        f_80 = t;
        t = term_o_61;
        t = t_11(e_80, f_80, t);
        t = term_p_61;
        t = xtc_find_0_0(t);
        b_80 = t;
        t = term_t_32;
        d_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_80, term_t_32);
        t = b_11(b_80, d_80, t);
        t = term_a_33;
        c_80 = t;
        t = SSL_exit(c_80);
        LocalPopChoice(m_61);
      }
    else
      {
        t = l_61;
      }
  }
  {
    ATerm q_61 = t;
    int v_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_80 = NULL,j_80 = NULL,k_80 = NULL;
        t = term_o_19;
        j_80 = t;
        t = term_j_51;
        k_80 = t;
        t = term_w_61;
        t = t_11(j_80, k_80, t);
        t = strc_version_0_0(t);
        t = term_a_33;
        i_80 = t;
        t = SSL_exit(i_80);
        LocalPopChoice(v_61);
      }
    else
      {
        t = q_61;
      }
  }
  {
    ATerm x_61 = t;
    int y_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_80 = NULL,p_80 = NULL,q_80 = NULL;
        n_80 = t;
        t = term_o_19;
        p_80 = t;
        t = term_c_28;
        q_80 = t;
        t = term_h_61;
        t = t_11(p_80, q_80, t);
        t = n_80;
        LocalPopChoice(y_61);
      }
    else
      {
        t = x_61;
        {
          ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL;
          t = term_l_19;
          s_80 = t;
          t = (ATerm) ATinsert(ATempty, term_z_61);
          t_80 = t;
          t = SSL_printnl(s_80, t_80);
          t = term_c_20;
          r_80 = t;
          t = SSL_exit(r_80);
          t = (ATerm) ATinsert(ATempty, term_z_61);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(u_18, t);
  return(t);
}
static ATerm y_18 (ATerm t)
{
  ATerm a_62 = t;
  int b_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL;
      t = term_o_19;
      y_80 = t;
      t = term_c_28;
      z_80 = t;
      t = term_h_61;
      t = t_11(y_80, z_80, t);
      x_80 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_80);
      LocalPopChoice(b_62);
    }
  else
    {
      t = a_62;
      t = term_w_31;
    }
  t = front_end_0_0(t);
  return(t);
}
ATerm strc_pre_0_0 (ATerm t)
{
  t = command_line_options_0_0(t);
  t = xtc_temp_files_1_0(y_18, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_pre_0_0(t);
  return(t);
}
