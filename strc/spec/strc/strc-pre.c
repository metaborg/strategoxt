#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
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
Symbol sym_Hashtable_1;
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
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_Strategies_1;
Symbol sym_Rules_1;
Symbol sym_Specification_1;
Symbol sym_SVar_1;
Symbol sym_Path_2;
Symbol sym_Call_2;
Symbol sym_SDef_3;
Symbol sym_RDef_3;
static void init_module_constructors (void)
{
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
}
ATerm term_y_65;
ATerm term_v_65;
ATerm term_s_65;
ATerm term_p_65;
ATerm term_l_65;
ATerm term_k_65;
ATerm term_j_65;
ATerm term_i_65;
ATerm term_h_65;
ATerm term_g_65;
ATerm term_e_65;
ATerm term_d_65;
ATerm term_c_65;
ATerm term_b_65;
ATerm term_a_65;
ATerm term_z_64;
ATerm term_y_64;
ATerm term_x_64;
ATerm term_w_64;
ATerm term_v_64;
ATerm term_l_64;
ATerm term_j_64;
ATerm term_h_64;
ATerm term_f_64;
ATerm term_e_64;
ATerm term_b_64;
ATerm term_a_64;
ATerm term_y_63;
ATerm term_l_63;
ATerm term_i_63;
ATerm term_g_63;
ATerm term_z_62;
ATerm term_x_62;
ATerm term_h_62;
ATerm term_v_61;
ATerm term_u_61;
ATerm term_p_61;
ATerm term_g_61;
ATerm term_f_61;
ATerm term_e_61;
ATerm term_d_61;
ATerm term_b_61;
ATerm term_g_60;
ATerm term_f_60;
ATerm term_x_59;
ATerm term_q_59;
ATerm term_m_59;
ATerm term_l_59;
ATerm term_h_59;
ATerm term_g_59;
ATerm term_f_59;
ATerm term_e_59;
ATerm term_c_59;
ATerm term_w_58;
ATerm term_v_58;
ATerm term_t_58;
ATerm term_s_58;
ATerm term_r_58;
ATerm term_p_58;
ATerm term_o_58;
ATerm term_n_58;
ATerm term_m_58;
ATerm term_j_58;
ATerm term_i_58;
ATerm term_h_58;
ATerm term_g_58;
ATerm term_f_54;
ATerm term_a_54;
ATerm term_z_53;
ATerm term_x_53;
ATerm term_w_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_h_53;
ATerm term_d_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_w_51;
ATerm term_v_51;
ATerm term_t_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_m_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_e_51;
ATerm term_c_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_w_50;
ATerm term_t_49;
ATerm term_p_49;
ATerm term_h_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_n_48;
ATerm term_j_48;
ATerm term_i_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_z_47;
ATerm term_q_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_p_45;
ATerm term_o_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_x_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_k_44;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_p_43;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_r_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_m_42;
ATerm term_j_42;
ATerm term_d_42;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_k_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_x_39;
ATerm term_u_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_p_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_c_39;
ATerm term_k_38;
ATerm term_b_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_h_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_x_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_i_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_x_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_l_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_h_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_s_32;
ATerm term_z_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_a_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_b_30;
ATerm term_f_29;
ATerm term_b_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_r_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_m_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_h_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
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
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_u_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_p_23;
ATerm term_n_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_s_22;
ATerm term_q_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_g_22;
ATerm term_u_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".sci", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in `", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("', concrete syntax in `", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("'", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_d_21);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_h_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_22, term_l_21, term_i_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_22, term_g_21, term_s_22);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_22, term_z_22, term_c_23);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_23, term_i_23, term_j_23);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_23, term_n_23, term_p_23);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_23, term_y_23, term_z_23);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_24, term_c_24, term_d_24);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_24, term_n_24, term_p_24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_24, term_u_24, term_y_24);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_25, term_b_25, term_c_25);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_25, term_k_25, term_l_25);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_25, term_o_25, term_p_25);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_25, term_s_25, term_u_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_25, term_x_25, term_z_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_26, term_c_26, term_d_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_26, term_g_26, term_i_26);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_26, term_l_26, term_m_26);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_26, term_p_26, term_q_26);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_26, term_t_26, term_u_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_26, term_y_26, term_z_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_27, term_e_27, term_f_27);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_27, term_k_27, term_l_27);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_27, term_q_27, term_r_27);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_27, term_u_27, term_v_27);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_27, term_z_27, term_c_28);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_28, term_j_28, term_k_28);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_28, term_p_28, term_r_28);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_28, term_x_28, term_b_29);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_w_30);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_e_31);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_r_31);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_v_31);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("preprocessed syntax (after pre-desugar) written to file", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_a_34);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_e_34);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym__2, term_n_33, term_h_33);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_q_30);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_a_35);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_n_35);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_t_35);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_h_36);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".renamed", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_d_42);
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym__2, term_h_21, term_x_34);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_34);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(sym__2, term_g_45, term_p_33);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_o_45);
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_y_48);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(sym__2, term_v_43, term_f_49);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(sym__2, term_v_43, term_n_48);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(sym__2, term_e_34, term_p_33);
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib  Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-D", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-CD", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-CD name=def       Predefine name as a macro, with definition def.", 0, ATtrue));
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-Cl lib            Search the library named lib when linking.", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("lib", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol(".la", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-la lib            Search the libtool library liblib.la when linking.\n", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-DXTC_REPOSITORY()=ATmakeString(\"", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("\")", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--xtc-repo file    Set default XTC repository in output program to file (default: none).", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(sym__2, term_j_52, term_p_33);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(sym__2, term_n_35, term_p_33);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(sym__2, term_e_31, term_p_33);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym__2, term_t_52, term_p_33);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--choice-lib file  Link with specified choice point library (e.g. /usr/lib/foo.a)", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("libcpl-stratego.la", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--cpl              Use the Nancy Choice Point Library", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(sym__2, term_h_53, term_p_33);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym__2, term_l_53, term_p_33);
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym__2, term_o_53, term_p_33);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(sym__2, term_r_31, term_l_21);
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_x_34);
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(sym__2, term_h_36, term_p_33);
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_m_58));
  term_m_58 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_h_59));
  term_h_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_l_59));
  term_l_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_59));
  term_q_59 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_q_59);
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(sym__2, term_x_44, term_z_44);
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(sym__2, term_b_61, term_p_33);
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_61));
  term_g_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_61));
  term_u_61 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_62));
  term_h_62 = (ATerm) ATmakeAppl(sym__3, term_x_44, term_z_44, (ATerm) ATempty);
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_h_53);
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_b_61);
  ATprotect(&(term_g_63));
  term_g_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(ATmakeSymbol("0.11pre", 0, ATtrue));
  ATprotect(&(term_a_64));
  term_a_64 = (ATerm) ATmakeAppl(sym__2, term_d_42, term_y_63);
  ATprotect(&(term_b_64));
  term_b_64 = (ATerm) ATmakeAppl(sym__2, term_h_21, term_l_21);
  ATprotect(&(term_e_64));
  term_e_64 = (ATerm) ATmakeAppl(sym__2, term_d_21, term_x_34);
  ATprotect(&(term_f_64));
  term_f_64 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_i_23);
  ATprotect(&(term_h_64));
  term_h_64 = (ATerm) ATmakeAppl(sym__2, term_t_35, (ATerm) ATempty);
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_v_64));
  term_v_64 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_x_64));
  term_x_64 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_y_64));
  term_y_64 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_z_64));
  term_z_64 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_a_65));
  term_a_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib_opt", 0, ATtrue));
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-choice", 0, ATtrue));
  ATprotect(&(term_c_65));
  term_c_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego_opt", 0, ATtrue));
  ATprotect(&(term_d_65));
  term_d_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_g_65));
  term_g_65 = (ATerm) ATmakeAppl(sym__2, term_m_51, (ATerm) ATempty);
  ATprotect(&(term_h_65));
  term_h_65 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_h_65);
  ATprotect(&(term_j_65));
  term_j_65 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_r_30);
  ATprotect(&(term_l_65));
  term_l_65 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_p_65));
  term_p_65 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_l_53);
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeAppl(ATmakeSymbol("strc-manual.txt", 0, ATtrue));
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_o_53);
  ATprotect(&(term_y_65));
  term_y_65 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm save_as_1_0 (ATerm p_101 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm d_129 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm x_136 (ATerm), ATerm y_136 (ATerm), ATerm t);
static ATerm s_11 (ATerm s_71, ATerm t_71, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm n_129 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm b_138 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm u_22, ATerm v_22, ATerm t);
ATerm foldr_3_0 (ATerm e_119 (ATerm), ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm g_129 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm output_preproc_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm e_129 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm p_112 (ATerm), ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm p_11 (ATerm a_23, ATerm b_23, ATerm t);
static ATerm q_11 (ATerm y_35, ATerm z_35, ATerm t);
static ATerm r_11 (ATerm u_111 (ATerm), ATerm s_257, ATerm i_36, ATerm t);
static ATerm u_11 (ATerm i_102 (ATerm), ATerm o_23, ATerm m_23, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm z_136 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm o_101 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm u_0 (ATerm), ATerm t);
static ATerm i_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm c_128 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm e_123 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_11 (ATerm w_22, ATerm t);
static ATerm x_11 (ATerm n_55, ATerm o_55, ATerm t);
static ATerm z_11 (ATerm t_55, ATerm u_55, ATerm t);
static ATerm a_12 (ATerm n_64, ATerm p_64, ATerm r_64, ATerm t_64, ATerm o_64, ATerm q_64, ATerm s_64, ATerm u_64, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm x_125 (ATerm), ATerm y_125 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm x_12 (ATerm x_58, ATerm y_58, ATerm t);
static ATerm b_12 (ATerm j_57, ATerm k_57, ATerm t);
ATerm end_scope_1_0 (ATerm f_102 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm e_102 (ATerm), ATerm t);
static ATerm z_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm k_137 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm s_111 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm a_128 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm b_128 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm e_12 (ATerm a_37, ATerm q_270, ATerm t);
ATerm at_suffix_1_0 (ATerm y_112 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm q_112 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm a_122 (ATerm), ATerm t);
static ATerm o_10 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm f_12 (ATerm y_66, ATerm x_66, ATerm t);
static ATerm g_12 (ATerm d_62, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm l_48 (ATerm p_47, ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm h_12 (ATerm b_71, ATerm a_71, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm z_10 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm y_11 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm set_choice_point_lib_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm e_128 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm d_128 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm f_128 (ATerm), ATerm t);
static ATerm k_12 (ATerm r_116 (ATerm), ATerm s_116 (ATerm), ATerm l_42, ATerm k_42, ATerm t);
static ATerm l_12 (ATerm o_116 (ATerm), ATerm h_42, ATerm g_42, ATerm t);
static ATerm e_13 (ATerm t);
static ATerm m_12 (ATerm b_58, ATerm c_58, ATerm d_58, ATerm t);
static ATerm n_12 (ATerm r_125 (ATerm), ATerm l_58, ATerm k_58, ATerm t);
static ATerm h_55 (ATerm z_54, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_12 (ATerm e_36, ATerm t);
static ATerm p_12 (ATerm z_51, ATerm a_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_57 (ATerm x_55, ATerm t);
static ATerm n_57 (ATerm d_56, ATerm e_56, ATerm f_56, ATerm t);
static ATerm r_57 (ATerm n_56, ATerm o_56, ATerm p_56, ATerm t);
static ATerm q_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_120 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm i_64 (ATerm q_63, ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
ATerm xtc_find_silent_0_0 (ATerm t);
static ATerm r_12 (ATerm y_70, ATerm z_70, ATerm t);
static ATerm s_12 (ATerm n_51, ATerm o_51, ATerm t);
ATerm at_end_1_0 (ATerm u_112 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm n_68 (ATerm r_67, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm t_12 (ATerm c_71, ATerm d_71, ATerm t);
static ATerm c_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm f_18 (ATerm t);
static ATerm g_18 (ATerm t);
static ATerm h_18 (ATerm t);
static ATerm i_18 (ATerm t);
static ATerm k_18 (ATerm t);
static ATerm n_18 (ATerm t);
static ATerm q_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm u_18 (ATerm t);
static ATerm v_18 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm y_18 (ATerm t);
static ATerm z_18 (ATerm t);
static ATerm b_19 (ATerm t);
static ATerm c_19 (ATerm t);
static ATerm d_19 (ATerm t);
static ATerm e_19 (ATerm t);
static ATerm f_19 (ATerm t);
static ATerm h_19 (ATerm t);
static ATerm i_19 (ATerm t);
static ATerm j_19 (ATerm t);
static ATerm k_19 (ATerm t);
ATerm strc_options_0_0 (ATerm t);
static ATerm u_12 (ATerm b_62, ATerm c_62, ATerm t);
static ATerm v_12 (ATerm g_62, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm d_112 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm h_0 (ATerm), ATerm t);
static ATerm p_19 (ATerm t);
static ATerm q_19 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm n_112 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm s_19 (ATerm t);
static ATerm u_19 (ATerm t);
static ATerm v_19 (ATerm t);
static ATerm z_19 (ATerm t);
static ATerm c_20 (ATerm t);
static ATerm d_20 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm y_12 (ATerm e_57, ATerm f_57, ATerm d_57, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm o_132 (ATerm), ATerm t);
static ATerm f_20 (ATerm t);
static ATerm g_20 (ATerm t);
static ATerm h_20 (ATerm t);
static ATerm j_20 (ATerm t);
ATerm parse_options_1_0 (ATerm n_132 (ATerm), ATerm t);
static ATerm a_13 (ATerm w_61, ATerm x_61, ATerm y_61, ATerm t);
static ATerm b_13 (ATerm z_61, ATerm a_62, ATerm t);
ATerm new_hashtable_0_2 (ATerm e_62, ATerm f_62, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm q_58, ATerm t);
static ATerm c_13 (ATerm v_70, ATerm w_70, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm d_13 (ATerm b_50, ATerm c_50, ATerm t);
ATerm init_strc_config_0_0 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm m_20 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm n_20 (ATerm t);
ATerm strc_pre_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm n_1 = NULL;
  t = pass_verbose_0_0(t);
  n_1 = t;
  t = (ATerm) ATinsert(CheckATermList(n_1), term_p_20);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm o_1 = NULL;
  t = pass_verbose_0_0(t);
  o_1 = t;
  t = (ATerm) ATinsert(CheckATermList(o_1), term_p_20);
  return(t);
}
ATerm save_as_1_0 (ATerm p_101 (ATerm), ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,i_0 = NULL,k_0 = NULL,s_0 = NULL,v_0 = NULL,y_0 = NULL;
  i_0 = t;
  {
    static ATerm a_0 (ATerm t);
    static ATerm a_0 (ATerm t)
    {
      static ATerm b_0 (ATerm t);
      static ATerm b_0 (ATerm t)
      {
        ATerm a_1 = NULL,b_1 = NULL;
        t = p_101(t);
        a_1 = t;
        t = term_q_20;
        b_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_20, a_1);
        t = d_13(b_1, a_1, t);
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
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_1 = NULL,l_1 = NULL;
        l_1 = t;
        if(match_cons(t, sym_FILE_1))
          {
            k_1 = ATgetArgument(t, 0);
            {
              ATerm n_0 = NULL,c_1 = NULL;
              t = SSLgetAnnotations(l_1);
              n_0 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
              c_1 = t;
              t = SSLsetAnnotations(c_1, n_0);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_1;
          }
        LocalPopChoice(s_20);
        t = xtc_transform_file_2_0(w_0, x_0, t);
      }
    else
      {
        t = r_20;
        t = xtc_transform_term_2_0(z_0, d_1, t);
      }
  }
  {
    static ATerm f_1 (ATerm t);
    static ATerm f_1 (ATerm t)
    {
      ATerm p_1 = NULL;
      t = term_t_20;
      p_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_0), term_t_20);
      t = d_13(not_null(c_0), p_1, t);
      if(((e_0 != NULL) && (e_0 != t)))
        _fail(t);
      else
        e_0 = t;
      return(t);
    }
    t = copy_to_1_0(f_1, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_20), not_null(e_0)), term_w_20), not_null(c_0)), term_v_20);
  y_0 = t;
  t = SSL_concat_strings(y_0);
  k_0 = t;
  t = term_y_20;
  s_0 = t;
  t = (ATerm) ATinsert(ATempty, k_0);
  v_0 = t;
  t = SSL_printnl(s_0, v_0);
  t = i_0;
  return(t);
}
ATerm if_keep2_1_0 (ATerm d_129 (ATerm), ATerm t)
{
  ATerm s_1 = NULL;
  s_1 = t;
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 = NULL,a_2 = NULL,c_2 = NULL;
        t = term_c_21;
        a_2 = t;
        t = term_d_21;
        c_2 = t;
        t = term_e_21;
        t = x_12(a_2, c_2, t);
        x_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_1, term_g_21);
        t = geq_0_0(t);
        t = s_1;
        t = d_129(t);
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        t = s_1;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL;
  t = term_h_21;
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL,j_2 = NULL;
        t = term_c_21;
        i_2 = t;
        t = term_h_21;
        j_2 = t;
        t = term_k_21;
        t = x_12(i_2, j_2, t);
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        t = term_l_21;
      }
  }
  f_2 = t;
  t = term_l_21;
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_2, term_l_21);
  t = z_11(f_2, h_2, t);
  g_2 = t;
  t = SSL_int_to_string(g_2);
  e_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_2), term_h_21);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_21 = ATgetArgument(t, 0);
      if(match_cons(m_21, sym_Stream_1))
        {
          p_2 = ATgetArgument(m_21, 0);
        }
      else
        _fail(t);
      q_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(p_2, q_2, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm x_136 (ATerm), ATerm y_136 (ATerm), ATerm t)
{
  ATerm k_2 = NULL,m_2 = NULL;
  m_2 = t;
  t = xtc_new_file_0_0(t);
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_2, m_2);
  t = r_11(g_1, k_2, m_2, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_2);
  t = xtc_transform_file_2_0(x_136, y_136, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm s_11 (ATerm s_71, ATerm t_71, ATerm t)
{
  t = SSL_execvp(s_71, t_71);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  r_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      s_3 = ATgetArgument(t, 0);
      {
        ATerm r_1 = NULL,u_1 = NULL;
        t = SSL_int_to_string(s_3);
        r_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_21), r_1), term_n_21);
        u_1 = t;
        t = SSL_concat_strings(u_1);
      }
    }
  else
    {
      ATerm s_2 = NULL,t_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          s_3 = ATgetArgument(t, 0);
          t_3 = ATgetArgument(t, 1);
          u_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(t_3);
      s_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_3), term_u_21), s_2), term_p_21), s_3);
      t_2 = t;
      t = SSL_concat_strings(t_2);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm x_3 = NULL;
  x_3 = t;
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_1 (ATerm t);
        static ATerm h_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm y_21 = ATgetArgument(t, 0);
              if((x_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm z_21 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_29), term_v_28), term_m_28), term_d_28), term_w_27), term_s_27), term_n_27), term_g_27), term_a_27), term_v_26), term_r_26), term_n_26), term_j_26), term_e_26), term_a_26), term_v_25), term_q_25), term_m_25), term_e_25), term_z_24), term_q_24), term_j_24), term_a_24), term_s_23), term_k_23), term_d_23), term_x_22), term_j_22);
        t = fetch_elem_1_0(h_1, t);
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, x_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm c_4 = NULL,r_4 = NULL;
  c_4 = t;
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_29 = ATgetArgument(t, 0);
            r_4 = ATgetArgument(t, 1);
            {
              ATerm l_29 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_29);
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_3 = NULL,j_3 = NULL,o_3 = NULL;
              t = r_4;
              {
                ATerm w_29 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_29;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              a_3 = t;
              t = term_y_20;
              j_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_3), term_b_30);
              o_3 = t;
              t = SSL_printnl(j_3, o_3);
              t = (ATerm) ATmakeAppl(sym__2, term_y_20, (ATerm) ATinsert(ATinsert(ATempty, a_3), term_b_30));
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
              t = c_4;
            }
        }
      }
    else
      {
        t = g_29;
        t = c_4;
      }
  }
  t = c_4;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm n_129 (ATerm), ATerm t)
{
  ATerm f_5 = NULL,h_5 = NULL;
  h_5 = t;
  t = fork_0_0(t);
  f_5 = t;
  {
    ATerm d_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = h_5;
        t = n_129(t);
        LocalPopChoice(j_30);
      }
    else
      {
        t = d_30;
        t = SSL_waitpid(f_5);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm k_30 = ATgetArgument(t, 0);
            if(((ATgetType(k_30) != AT_INT) || (ATgetInt((ATermInt) k_30) != 0)))
              _fail(t);
            {
              ATerm m_30 = ATgetArgument(t, 1);
            }
            {
              ATerm o_30 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = h_5;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm b_138 (ATerm), ATerm t)
{
  ATerm k_5 = NULL,m_5 = NULL;
  m_5 = t;
  t = b_138(t);
  t = xtc_find_0_0(t);
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_5, m_5);
  {
    static ATerm i_1 (ATerm t);
    static ATerm i_1 (ATerm t)
    {
      ATerm n_5 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, k_5, m_5);
      t = s_11(k_5, m_5, t);
      t = term_l_21;
      n_5 = t;
      t = SSL_exit(n_5);
      return(t);
    }
    t = fork_and_wait_1_0(i_1, t);
  }
  t = m_5;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL;
  q_5 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm s_5 = NULL,t_5 = NULL;
      t = q_5;
      t = xtc_new_file_0_0(t);
      s_5 = t;
      t = t_0(t);
      t_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_5, (ATerm) ATinsert(ATinsert(ATempty, s_5), term_q_30));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_5);
    }
  else
    {
      ATerm v_5 = NULL,x_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_5;
      t = xtc_new_file_0_0(t);
      v_5 = t;
      t = t_0(t);
      x_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_5), term_q_30), r_5), term_r_30));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_5);
    }
  return(t);
}
ATerm comp_0_2 (ATerm u_22, ATerm v_22, ATerm t)
{
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_21 = NULL,s_21 = NULL;
      s_21 = t;
      if(match_cons(t, sym_FILE_1))
        {
          r_21 = ATgetArgument(t, 0);
          {
            ATerm d_12 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(s_21);
            d_12 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, r_21);
            e_1 = t;
            t = SSLsetAnnotations(e_1, d_12);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_21;
        }
      LocalPopChoice(t_30);
      {
        static ATerm m_1 (ATerm t);
        static ATerm q_1 (ATerm t);
        static ATerm m_1 (ATerm t)
        {
          t = u_22;
          return(t);
        }
        static ATerm q_1 (ATerm t)
        {
          ATerm t_21 = NULL;
          t = pass_verbose_0_0(t);
          t_21 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_22), t_21), (ATerm) ATinsert(ATempty, term_v_30));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(m_1, q_1, t);
      }
    }
  else
    {
      t = s_30;
      {
        static ATerm t_1 (ATerm t);
        static ATerm v_1 (ATerm t);
        static ATerm t_1 (ATerm t)
        {
          t = u_22;
          return(t);
        }
        static ATerm v_1 (ATerm t)
        {
          ATerm x_21 = NULL;
          t = pass_verbose_0_0(t);
          x_21 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_22), x_21), (ATerm) ATinsert(ATempty, term_v_30));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(t_1, v_1, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm e_119 (ATerm), ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm t)
{
  ATerm d_6 = NULL,g_6 = NULL,h_6 = NULL;
  d_6 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_6;
      t = e_119(t);
    }
  else
    {
      ATerm n_6 = NULL,o_6 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_6 = ATgetFirst((ATermList) t);
          h_6 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_6;
      t = g_119(t);
      n_6 = t;
      t = h_6;
      t = foldr_3_0(e_119, f_119, g_119, t);
      o_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_6, o_6);
      t = f_119(t);
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm r_6 = NULL;
  r_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_6), term_w_30);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL;
  t = term_c_21;
  p_6 = t;
  t = term_w_30;
  q_6 = t;
  t = term_x_30;
  t = x_12(p_6, q_6, t);
  t = foldr_3_0(w_1, conc_0_0, y_1, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_y_30;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm c_5 = NULL;
  t = pass_verbose_0_0(t);
  c_5 = t;
  t = (ATerm) ATinsert(CheckATermList(c_5), term_v_30);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_y_30;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm d_5 = NULL;
  t = pass_verbose_0_0(t);
  d_5 = t;
  t = (ATerm) ATinsert(CheckATermList(d_5), term_v_30);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = get_outfile_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_a_31;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm l_8 = NULL;
  l_8 = t;
  {
    ATerm b_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_4 = NULL,k_4 = NULL,m_4 = NULL,o_4 = NULL,p_4 = NULL;
        t = term_c_21;
        o_4 = t;
        t = term_e_31;
        p_4 = t;
        t = term_f_31;
        t = x_12(o_4, p_4, t);
        t = l_8;
        {
          ATerm g_31 = t;
          int h_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_8;
              {
                ATerm i_31 = t;
                int k_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_4 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        z_4 = ATgetArgument(t, 0);
                        {
                          ATerm w_5 = NULL,j_1 = NULL;
                          t = SSLgetAnnotations(l_8);
                          w_5 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, z_4);
                          j_1 = t;
                          t = SSLsetAnnotations(j_1, w_5);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = l_8;
                      }
                    LocalPopChoice(k_31);
                    t = xtc_transform_file_2_0(z_1, b_2, t);
                  }
                else
                  {
                    t = i_31;
                    t = xtc_transform_term_2_0(d_2, l_2, t);
                  }
              }
              LocalPopChoice(h_31);
            }
          else
            {
              t = g_31;
              {
                ATerm e_5 = NULL,g_5 = NULL,i_5 = NULL;
                t = term_y_20;
                g_5 = t;
                t = (ATerm) ATinsert(ATempty, term_l_31);
                i_5 = t;
                t = SSL_printnl(g_5, i_5);
                t = term_l_21;
                e_5 = t;
                t = SSL_exit(e_5);
                t = (ATerm) ATinsert(ATempty, term_l_31);
              }
            }
        }
        t = copy_to_1_0(n_2, t);
        j_4 = t;
        t = term_y_20;
        k_4 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_m_31));
        m_4 = t;
        t = SSL_printnl(k_4, m_4);
        t = j_4;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(d_31);
      }
    else
      {
        t = b_31;
        t = l_8;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm g_129 (ATerm), ATerm t)
{
  ATerm s_8 = NULL;
  s_8 = t;
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_8 = NULL,w_8 = NULL,y_8 = NULL;
        t = term_c_21;
        w_8 = t;
        t = term_d_21;
        y_8 = t;
        t = term_e_21;
        t = x_12(w_8, y_8, t);
        u_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_8, term_z_27);
        t = geq_0_0(t);
        t = s_8;
        t = g_129(t);
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
        t = s_8;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_9 = NULL,d_9 = NULL;
      t = term_c_21;
      b_9 = t;
      t = term_r_31;
      d_9 = t;
      t = term_s_31;
      t = x_12(b_9, d_9, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_r_31);
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      t = (ATerm) ATinsert(ATempty, term_t_31);
    }
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL,n_9 = NULL,r_9 = NULL,s_9 = NULL;
  j_9 = t;
  t = term_u_31;
  h_9 = t;
  t = term_c_21;
  r_9 = t;
  t = term_v_31;
  s_9 = t;
  t = term_w_31;
  t = x_12(r_9, s_9, t);
  n_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_9), term_v_31);
  i_9 = t;
  t = j_9;
  t = comp_0_2(h_9, i_9, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = get_outfile_1_0(u_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_a_31;
  return(t);
}
ATerm output_preproc_0_0 (ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
      t = copy_to_1_0(r_2, t);
      u_9 = t;
      t = term_y_20;
      v_9 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_z_31));
      w_9 = t;
      t = SSL_printnl(v_9, w_9);
      t = u_9;
      t = xtc_io_exit_0_0(t);
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
    }
  return(t);
}
ATerm if_keep3_1_0 (ATerm e_129 (ATerm), ATerm t)
{
  ATerm e_10 = NULL;
  e_10 = t;
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_10 = NULL,j_10 = NULL,l_10 = NULL;
        t = term_c_21;
        j_10 = t;
        t = term_d_21;
        l_10 = t;
        t = term_e_21;
        t = x_12(j_10, l_10, t);
        i_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_10, term_z_22);
        t = geq_0_0(t);
        t = e_10;
        t = e_129(t);
        LocalPopChoice(d_32);
      }
    else
      {
        t = c_32;
        t = e_10;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_112 (ATerm), ATerm t)
{
  ATerm q_10 = NULL;
  static ATerm v_2 (ATerm t);
  static ATerm v_2 (ATerm t)
  {
    t = p_112(t);
    if(((q_10 != NULL) && (q_10 != t)))
      _fail(t);
    else
      q_10 = t;
    return(t);
  }
  t = fetch_1_0(v_2, t);
  t = not_null(q_10);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL;
  z_13 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_14 = ATgetArgument(t, 0);
      {
        ATerm c_6 = NULL,f_6 = NULL,x_2 = NULL;
        t = SSLgetAnnotations(z_13);
        c_6 = t;
        t = a_14;
        t = fetch_elem_1_0(y_2, t);
        f_6 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, f_6);
        x_2 = t;
        t = SSLsetAnnotations(x_2, c_6);
      }
    }
  else
    {
      ATerm z_6 = NULL,c_7 = NULL,b_3 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          a_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_13);
      z_6 = t;
      t = a_14;
      t = fetch_elem_1_0(z_2, t);
      c_7 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, c_7);
      b_3 = t;
      t = SSLsetAnnotations(b_3, z_6);
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm l_6 = NULL,m_6 = NULL,s_6 = NULL;
  l_6 = t;
  {
    ATerm f_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            m_6 = ATgetArgument(t, 0);
            s_6 = ATgetArgument(t, 1);
            {
              ATerm j_32 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_32);
        t = m_6;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = s_6;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_6;
      }
    else
      {
        t = f_32;
        if(match_cons(t, sym_RDef_3))
          {
            m_6 = ATgetArgument(t, 0);
            s_6 = ATgetArgument(t, 1);
            {
              ATerm k_32 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = m_6;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = s_6;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_6;
      }
  }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL,h_7 = NULL;
  e_7 = t;
  {
    ATerm m_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            f_7 = ATgetArgument(t, 0);
            h_7 = ATgetArgument(t, 1);
            {
              ATerm p_32 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_32);
        t = f_7;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = h_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_7;
      }
    else
      {
        t = m_32;
        if(match_cons(t, sym_RDef_3))
          {
            f_7 = ATgetArgument(t, 0);
            h_7 = ATgetArgument(t, 1);
            {
              ATerm q_32 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_7;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = h_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_7;
      }
  }
  return(t);
}
ATerm check_other_main_0_0 (ATerm t)
{
  ATerm m_11 = NULL,t_11 = NULL,w_11 = NULL;
  t = fetch_elem_1_0(w_2, t);
  m_11 = t;
  t = term_y_20;
  t_11 = t;
  t = (ATerm) ATinsert(ATempty, term_s_32);
  w_11 = t;
  t = SSL_printnl(t_11, w_11);
  t = m_11;
  return(t);
}
static ATerm p_11 (ATerm a_23, ATerm b_23, ATerm t)
{
  t = a_23;
  {
    ATerm t_32 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_32;
      }
  }
  t = b_23;
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(b_23), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_b_33, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_23), (ATerm) ATempty))))));
  return(t);
}
static ATerm q_11 (ATerm y_35, ATerm z_35, ATerm t)
{
  ATerm q_14 = NULL;
  t = SSL_write_term_to_stream_baf(y_35, z_35);
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_14);
  return(t);
}
static ATerm r_11 (ATerm u_111 (ATerm), ATerm s_257, ATerm i_36, ATerm t)
{
  ATerm r_14 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_257, term_c_33);
  t = q_12(t);
  r_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_14, i_36);
  t = u_111(t);
  t = fclose_0_0(t);
  t = i_36;
  return(t);
}
static ATerm u_11 (ATerm i_102 (ATerm), ATerm o_23, ATerm m_23, ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,c_15 = NULL,d_15 = NULL;
  x_14 = t;
  t = i_102(t);
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_14, o_23, m_23);
  t = y_12(u_14, o_23, m_23, t);
  {
    ATerm f_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_15 = NULL;
        t = term_h_33;
        e_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_14, term_h_33);
        t = x_12(u_14, e_15, t);
        {
          ATerm i_33 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_33;
            }
        }
        LocalPopChoice(g_33);
      }
    else
      {
        t = f_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_14 = ATgetFirst((ATermList) t);
      w_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_14, term_h_33, (ATerm) ATinsert(CheckATermList(w_14), (ATerm) ATinsert(CheckATermList(v_14), o_23)));
  t = lookup_table_0_1(u_14, t);
  d_15 = t;
  t = term_h_33;
  y_14 = t;
  t = (ATerm) ATinsert(CheckATermList(w_14), (ATerm) ATinsert(CheckATermList(v_14), o_23));
  z_14 = t;
  t = d_15;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13(y_14, z_14, c_15, t);
  t = x_14;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm g_15 = NULL;
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_15 = NULL,u_7 = NULL;
      m_15 = t;
      t = term_l_33;
      u_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_15, term_l_33);
      t = d_13(m_15, u_7, t);
      g_15 = t;
      t = SSL_mkstemp(g_15);
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      {
        ATerm n_15 = NULL;
        t = term_m_33;
        n_15 = t;
        t = SSL_perror(n_15);
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
static ATerm c_3 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm p_15 = NULL,t_15 = NULL,u_15 = NULL,x_15 = NULL,y_15 = NULL;
  t = P__tmpdir_0_0(t);
  x_15 = t;
  t = term_o_33;
  y_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_15, term_o_33);
  t = d_13(x_15, y_15, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      t_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_p_33;
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_15, term_p_33);
  t = u_11(c_3, t_15, u_15, t);
  t = SSL_close(p_15);
  t = t_15;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm b_16 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_q_33;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm d_16 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_r_33);
      d_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_16, (ATerm) ATinsert(ATempty, term_r_33));
      t = s_12(b_16, d_16, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_33 = ATgetArgument(t, 0);
      if(match_cons(t_33, sym_Stream_1))
        {
          i_16 = ATgetArgument(t_33, 0);
        }
      else
        _fail(t);
      j_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(i_16, j_16, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm z_136 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,g_16 = NULL;
  t = read_from_0_0(t);
  t = z_136(t);
  g_16 = t;
  t = xtc_new_file_0_0(t);
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_16, g_16);
  t = r_11(d_3, e_16, g_16, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, e_16);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = debug_1_0(i_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_w_33;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = save_as_1_0(y_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_x_33;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm n_16 = NULL,b_17 = NULL;
  b_17 = t;
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_8 = NULL,v_8 = NULL;
        t = term_c_21;
        r_8 = t;
        t = term_a_34;
        v_8 = t;
        t = term_b_34;
        t = x_12(r_8, v_8, t);
        n_16 = t;
        t = if_verbose2_1_0(g_3, t);
        t = b_17;
        {
          ATerm c_34 = t;
          int d_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_8 = NULL,a_9 = NULL;
              t = term_c_21;
              x_8 = t;
              t = term_e_34;
              a_9 = t;
              t = term_f_34;
              t = x_12(x_8, a_9, t);
              t = b_17;
              LocalPopChoice(d_34);
            }
          else
            {
              t = c_34;
              {
                static ATerm k_3 (ATerm t);
                static ATerm k_3 (ATerm t)
                {
                  ATerm h_34 = t;
                  int i_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_9 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          t_9 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = p_11(n_16, t_9, t);
                      LocalPopChoice(i_34);
                    }
                  else
                    {
                      t = h_34;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(k_3, t);
              }
            }
        }
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        t = b_17;
      }
  }
  t = if_keep3_1_0(l_3, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm w_17 = NULL;
  w_17 = t;
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(w_17);
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        t = w_17;
      }
  }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL;
  static ATerm e_4 (ATerm t);
  static ATerm e_4 (ATerm t)
  {
    ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
    r_17 = t;
    t = term_n_33;
    s_17 = t;
    t = term_h_33;
    t_17 = t;
    t = term_l_34;
    t = x_12(s_17, t_17, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((m_17 != NULL) && (m_17 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          m_17 = ATgetFirst((ATermList) t);
        {
          ATerm o_34 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = m_17;
    t = map_1_0(f_4, t);
    t = r_17;
    t = end_scope_1_0(g_4, t);
    return(t);
  }
  t = repeat_2_0(e_4, _id, t);
  n_17 = t;
  t = SSL_exit(n_17);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_18 = NULL,m_18 = NULL;
      t = term_c_21;
      l_18 = t;
      t = term_q_30;
      m_18 = t;
      t = term_r_34;
      t = x_12(l_18, m_18, t);
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
      t = term_s_34;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm j_18 = NULL;
  j_18 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm g_10 = NULL,h_10 = NULL;
      t = term_q_30;
      {
        ATerm t_34 = t;
        int u_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_10 = NULL,m_10 = NULL;
            t = term_c_21;
            k_10 = t;
            t = term_q_30;
            m_10 = t;
            t = term_r_34;
            t = x_12(k_10, m_10, t);
            LocalPopChoice(u_34);
          }
        else
          {
            t = t_34;
            t = term_s_34;
          }
      }
      g_10 = t;
      t = term_q_33;
      h_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_q_33, g_10);
      t = f_12(h_10, g_10, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm v_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_18;
      t = copy_to_1_0(h_4, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_x_34;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,r_18 = NULL,s_18 = NULL;
  t = o_101(t);
  o_18 = t;
  t = term_c_21;
  r_18 = t;
  t = term_a_35;
  s_18 = t;
  t = term_b_35;
  t = x_12(r_18, s_18, t);
  p_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_18, o_18);
  t = d_13(p_18, o_18, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm w_19 = NULL,b_20 = NULL;
  w_19 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_10 = NULL;
        t = w_19;
        t = u_0(t);
        t_10 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = t_10;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = t_10;
          }
        t = (ATerm) ATmakeAppl(sym__2, b_20, t_10);
        t = f_12(b_20, t_10, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, b_20);
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
        {
          ATerm e_35 = t;
          int f_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_11 = NULL;
              t = w_19;
              t = u_0(t);
              a_11 = t;
              {
                ATerm h_35 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_11 = NULL;
                    b_11 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = b_11;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = b_11;
                          }
                        else
                          {
                            t = b_11;
                            if((b_20 != t))
                              {
                                _fail(t);
                              }
                            t = b_11;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_35;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, b_20, a_11);
              t = f_12(b_20, a_11, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_20);
              LocalPopChoice(f_35);
            }
          else
            {
              t = e_35;
              t = w_19;
              t = u_0(t);
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
static ATerm i_4 (ATerm t)
{
  t = get_outfile_1_0(l_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_i_35;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm u_20 = NULL;
  u_20 = t;
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL;
        t = term_c_21;
        j_11 = t;
        t = term_n_35;
        k_11 = t;
        t = term_o_35;
        t = x_12(j_11, k_11, t);
        t = u_20;
        t = copy_to_1_0(i_4, t);
        g_11 = t;
        t = term_y_20;
        h_11 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_35));
        i_11 = t;
        t = SSL_printnl(h_11, i_11);
        t = g_11;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
        t = u_20;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm b_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  t = term_d_21;
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_22 = NULL,l_22 = NULL;
        t = term_c_21;
        h_22 = t;
        t = term_d_21;
        l_22 = t;
        t = term_e_21;
        t = x_12(h_22, l_22, t);
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
        t = term_l_21;
      }
  }
  d_22 = t;
  t = term_l_21;
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_22, term_l_21);
  t = z_11(d_22, f_22, t);
  e_22 = t;
  t = SSL_int_to_string(e_22);
  b_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_22), term_d_21);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,r_22 = NULL,t_22 = NULL,e_23 = NULL;
  t = term_c_21;
  t_22 = t;
  t = term_t_35;
  e_23 = t;
  t = term_u_35;
  t = x_12(t_22, e_23, t);
  m_22 = t;
  t = term_v_35;
  t = xtc_find_path_0_0(t);
  n_22 = t;
  t = term_x_35;
  t = xtc_find_path_0_0(t);
  o_22 = t;
  t = term_b_36;
  t = xtc_find_path_0_0(t);
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_22), term_t_35), o_22), term_t_35), n_22), term_t_35));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,r_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,e_24 = NULL;
  x_23 = t;
  t = term_c_36;
  f_23 = t;
  t = x_23;
  {
    ATerm d_36 = t;
    int f_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_24 = NULL,g_24 = NULL;
        t = term_c_21;
        f_24 = t;
        t = term_q_30;
        g_24 = t;
        t = term_r_34;
        t = x_12(f_24, g_24, t);
        LocalPopChoice(f_36);
      }
    else
      {
        t = d_36;
        {
          ATerm h_24 = NULL,i_24 = NULL;
          t = term_c_21;
          h_24 = t;
          t = term_a_35;
          i_24 = t;
          t = term_b_35;
          t = x_12(h_24, i_24, t);
        }
      }
  }
  e_24 = t;
  t = x_23;
  t = get_include_dirs_0_0(t);
  r_23 = t;
  t = x_23;
  t = pass_keep_0_0(t);
  v_23 = t;
  t = term_h_36;
  {
    ATerm j_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_24 = NULL,m_24 = NULL;
        t = term_c_21;
        l_24 = t;
        t = term_h_36;
        m_24 = t;
        t = term_r_36;
        t = x_12(l_24, m_24, t);
        LocalPopChoice(q_36);
        t = (ATerm) ATinsert(ATempty, term_h_36);
      }
    else
      {
        t = j_36;
        t = (ATerm) ATempty;
      }
  }
  w_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_23), v_23), r_23), (ATerm) ATinsert(ATinsert(ATempty, e_24), term_s_36));
  t = concat_0_0(t);
  g_23 = t;
  t = x_23;
  t = comp_0_2(f_23, g_23, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm c_128 (ATerm), ATerm t)
{
  ATerm o_24 = NULL;
  o_24 = t;
  {
    ATerm t_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_24 = NULL,t_24 = NULL,x_24 = NULL;
        t = term_c_21;
        t_24 = t;
        t = term_h_21;
        x_24 = t;
        t = term_k_21;
        t = x_12(t_24, x_24, t);
        s_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_24, term_z_22);
        t = geq_0_0(t);
        t = o_24;
        t = c_128(t);
        LocalPopChoice(u_36);
      }
    else
      {
        t = t_36;
        t = o_24;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm e_123 (ATerm), ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL;
  i_25 = t;
  t = SSL_explode_string(i_25);
  {
    ATerm v_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm p_27 (ATerm t);
        static ATerm p_27 (ATerm t)
        {
          ATerm i_27 = NULL,j_27 = NULL,m_27 = NULL;
          i_27 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_27 = ATgetFirst((ATermList) t);
              m_27 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm x_36 = t;
            int y_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_14 = NULL,h_14 = NULL,e_3 = NULL;
                t = SSLgetAnnotations(i_27);
                d_14 = t;
                t = m_27;
                t = p_27(t);
                h_14 = t;
                t = (ATerm) ATinsert(CheckATermList(h_14), j_27);
                e_3 = t;
                t = SSLsetAnnotations(e_3, d_14);
                LocalPopChoice(y_36);
              }
            else
              {
                t = x_36;
                {
                  ATerm z_36 = t;
                  int b_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_15 = NULL,f_3 = NULL;
                      t = SSLgetAnnotations(i_27);
                      a_15 = t;
                      t = j_27;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(m_27), j_27);
                      f_3 = t;
                      t = SSLsetAnnotations(f_3, a_15);
                      LocalPopChoice(b_37);
                    }
                  else
                    {
                      t = z_36;
                      {
                        ATerm z_15 = NULL,k_16 = NULL,h_3 = NULL;
                        t = SSLgetAnnotations(i_27);
                        z_15 = t;
                        t = j_27;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = m_27;
                        t = e_123(t);
                        k_16 = t;
                        t = (ATerm) ATinsert(CheckATermList(k_16), j_27);
                        h_3 = t;
                        t = SSLsetAnnotations(h_3, z_15);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = p_27(t);
        LocalPopChoice(w_36);
      }
    else
      {
        t = v_36;
      }
  }
  h_25 = t;
  t = SSL_implode_string(h_25);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = debug_1_0(q_4, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_c_37;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = debug_1_0(t_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_d_37;
  return(t);
}
static ATerm v_11 (ATerm w_22, ATerm t)
{
  ATerm b_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  t = w_22;
  t = basename_1_0(_id, t);
  b_28 = t;
  t = if_verbose3_1_0(n_4, t);
  t = term_e_37;
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_37, b_28);
  t = c_13(g_28, b_28, t);
  {
    ATerm g_37 = t;
    int h_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_28 = NULL,l_28 = NULL;
        t = term_c_21;
        i_28 = t;
        t = term_q_30;
        l_28 = t;
        t = term_r_34;
        t = x_12(i_28, l_28, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(h_37);
      }
    else
      {
        t = g_37;
        t = b_28;
      }
  }
  e_28 = t;
  t = if_verbose3_1_0(s_4, t);
  t = term_a_35;
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_35, e_28);
  t = c_13(f_28, e_28, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, b_28);
  return(t);
}
static ATerm x_11 (ATerm n_55, ATerm o_55, ATerm t)
{
  ATerm l_37 = t;
  int m_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_55, o_55);
      LocalPopChoice(m_37);
    }
  else
    {
      t = l_37;
      t = SSL_addr(n_55, o_55);
    }
  return(t);
}
static ATerm z_11 (ATerm t_55, ATerm u_55, ATerm t)
{
  ATerm n_37 = t;
  int o_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(t_55, u_55);
      LocalPopChoice(o_37);
    }
  else
    {
      t = n_37;
      t = SSL_subtr(t_55, u_55);
    }
  return(t);
}
static ATerm a_12 (ATerm n_64, ATerm p_64, ATerm r_64, ATerm t_64, ATerm o_64, ATerm q_64, ATerm s_64, ATerm u_64, ATerm t)
{
  ATerm n_28 = NULL,q_28 = NULL,s_28 = NULL,u_28 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_64, o_64);
  t = z_11(n_64, o_64, t);
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_64, q_64);
  t = z_11(p_64, q_64, t);
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_64, s_64);
  t = z_11(r_64, s_64, t);
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_64, u_64);
  t = z_11(t_64, u_64, t);
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym__4, n_28, q_28, s_28, u_28);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,j_29 = NULL,k_29 = NULL,m_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_37 = ATgetArgument(t, 0);
      if(match_cons(p_37, sym__4))
        {
          y_28 = ATgetArgument(p_37, 0);
          z_28 = ATgetArgument(p_37, 1);
          c_29 = ATgetArgument(p_37, 2);
          d_29 = ATgetArgument(p_37, 3);
        }
      else
        _fail(t);
      {
        ATerm q_37 = ATgetArgument(t, 1);
        if(match_cons(q_37, sym__4))
          {
            e_29 = ATgetArgument(q_37, 0);
            j_29 = ATgetArgument(q_37, 1);
            k_29 = ATgetArgument(q_37, 2);
            m_29 = ATgetArgument(q_37, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_12(y_28, z_28, c_29, d_29, e_29, j_29, k_29, m_29, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm x_125 (ATerm), ATerm y_125 (ATerm), ATerm t)
{
  ATerm n_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,c_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,l_30 = NULL,n_30 = NULL;
  a_30 = t;
  t = times_0_0(t);
  n_29 = t;
  t = a_30;
  t = y_125(t);
  p_29 = t;
  t = times_0_0(t);
  z_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_29, n_29);
  t = diff_times_0_0(t);
  y_29 = t;
  if(match_cons(t, sym__4))
    {
      i_30 = ATgetArgument(t, 0);
      {
        ATerm s_37 = ATgetArgument(t, 1);
      }
      l_30 = ATgetArgument(t, 2);
      {
        ATerm v_37 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_30, l_30);
  t = x_11(i_30, l_30, t);
  n_30 = t;
  t = SSL_TicksToSeconds(n_30);
  q_29 = t;
  t = y_29;
  if(match_cons(t, sym__4))
    {
      ATerm w_37 = ATgetArgument(t, 0);
      c_30 = ATgetArgument(t, 1);
      {
        ATerm x_37 = ATgetArgument(t, 2);
      }
      g_30 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_30, g_30);
  t = x_11(c_30, g_30, t);
  h_30 = t;
  t = SSL_TicksToSeconds(h_30);
  r_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_29), term_z_37), q_29), term_y_37);
  t = x_125(t);
  t = p_29;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = debug_1_0(v_4, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_b_38;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = if_verbose1_1_0(y_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,l_32 = NULL,n_32 = NULL,r_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,z_32 = NULL,t_19 = NULL,x_19 = NULL,y_19 = NULL,k_17 = NULL,l_17 = NULL,o_17 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      z_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_11(z_32, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_33 = NULL,d_33 = NULL,e_33 = NULL;
        a_33 = t;
        t = term_c_21;
        d_33 = t;
        t = term_e_34;
        e_33 = t;
        t = term_f_34;
        t = x_12(d_33, e_33, t);
        t = a_33;
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
        t = add_main_0_0(t);
      }
  }
  w_32 = t;
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_33 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_33 = ATgetArgument(t, 0);
            {
              ATerm w_16 = NULL,m_3 = NULL;
              t = SSLgetAnnotations(w_32);
              w_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_33);
              m_3 = t;
              t = SSLsetAnnotations(m_3, w_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_32;
          }
        LocalPopChoice(f_38);
        t = xtc_transform_file_2_0(a_5, b_5, t);
      }
    else
      {
        t = e_38;
        t = xtc_transform_term_2_0(j_5, l_5, t);
      }
  }
  v_32 = t;
  {
    ATerm i_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_34 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_34 = ATgetArgument(t, 0);
            {
              ATerm h_17 = NULL,n_3 = NULL;
              t = SSLgetAnnotations(v_32);
              h_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_34);
              n_3 = t;
              t = SSLsetAnnotations(n_3, h_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_32;
          }
        LocalPopChoice(j_38);
        t = xtc_transform_file_2_0(o_5, p_5, t);
      }
    else
      {
        t = i_38;
        t = xtc_transform_term_2_0(u_5, y_5, t);
      }
  }
  t = if_keep5_1_0(z_5, t);
  t = output_preproc_0_0(t);
  t = normalize_spec_0_0(t);
  t = if_keep5_1_0(b_6, t);
  o_17 = t;
  t = term_k_38;
  k_17 = t;
  t = o_17;
  t = pass_maybe_unbound_warnings_0_0(t);
  l_17 = t;
  t = o_17;
  t = comp_0_2(k_17, l_17, t);
  u_32 = t;
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_34 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_34 = ATgetArgument(t, 0);
            {
              ATerm q_17 = NULL,p_3 = NULL;
              t = SSLgetAnnotations(u_32);
              q_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_34);
              p_3 = t;
              t = SSLsetAnnotations(p_3, q_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_32;
          }
        LocalPopChoice(m_38);
        t = xtc_transform_file_2_0(i_6, j_6, t);
      }
    else
      {
        t = l_38;
        t = xtc_transform_term_2_0(k_6, t_6, t);
      }
  }
  r_32 = t;
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_35 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_35 = ATgetArgument(t, 0);
            {
              ATerm d_18 = NULL,q_3 = NULL;
              t = SSLgetAnnotations(r_32);
              d_18 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_35);
              q_3 = t;
              t = SSLsetAnnotations(q_3, d_18);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_32;
          }
        LocalPopChoice(o_38);
        t = xtc_transform_file_2_0(u_6, v_6, t);
      }
    else
      {
        t = n_38;
        t = xtc_transform_term_2_0(w_6, y_6, t);
      }
  }
  t = if_keep5_1_0(a_7, t);
  n_32 = t;
  {
    ATerm q_38 = t;
    int r_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_35 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_35 = ATgetArgument(t, 0);
            {
              ATerm w_18 = NULL,v_3 = NULL;
              t = SSLgetAnnotations(n_32);
              w_18 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_35);
              v_3 = t;
              t = SSLsetAnnotations(v_3, w_18);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_32;
          }
        LocalPopChoice(r_38);
        t = xtc_transform_file_2_0(d_7, i_7, t);
      }
    else
      {
        t = q_38;
        t = xtc_transform_term_2_0(j_7, k_7, t);
      }
  }
  t = if_keep5_1_0(m_7, t);
  l_32 = t;
  {
    ATerm s_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_36 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_36 = ATgetArgument(t, 0);
            {
              ATerm a_19 = NULL,w_3 = NULL;
              t = SSLgetAnnotations(l_32);
              a_19 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_36);
              w_3 = t;
              t = SSLsetAnnotations(w_3, a_19);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_32;
          }
        LocalPopChoice(u_38);
        t = xtc_transform_file_2_0(o_7, q_7, t);
      }
    else
      {
        t = s_38;
        t = xtc_transform_term_2_0(r_7, t_7, t);
      }
  }
  t = if_keep5_1_0(w_7, t);
  t = output_frontend_0_0(t);
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
        m_36 = t;
        t = term_c_21;
        n_36 = t;
        t = term_e_34;
        o_36 = t;
        t = term_f_34;
        t = x_12(n_36, o_36, t);
        t = m_36;
        LocalPopChoice(x_38);
        {
          ATerm p_36 = NULL;
          p_36 = t;
          {
            ATerm y_38 = t;
            int z_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_37 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    f_37 = ATgetArgument(t, 0);
                    {
                      ATerm g_19 = NULL,z_3 = NULL;
                      t = SSLgetAnnotations(p_36);
                      g_19 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, f_37);
                      z_3 = t;
                      t = SSLsetAnnotations(z_3, g_19);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = p_36;
                  }
                LocalPopChoice(z_38);
                t = xtc_transform_file_2_0(z_7, b_8, t);
              }
            else
              {
                t = y_38;
                t = xtc_transform_term_2_0(d_8, f_8, t);
              }
          }
        }
      }
    else
      {
        t = w_38;
        {
          ATerm k_37 = NULL;
          k_37 = t;
          {
            ATerm a_39 = t;
            int b_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_37 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    r_37 = ATgetArgument(t, 0);
                    {
                      ATerm n_19 = NULL,a_4 = NULL;
                      t = SSLgetAnnotations(k_37);
                      n_19 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, r_37);
                      a_4 = t;
                      t = SSLsetAnnotations(a_4, n_19);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = k_37;
                  }
                LocalPopChoice(b_39);
                t = xtc_transform_file_2_0(h_8, j_8, t);
              }
            else
              {
                t = a_39;
                t = xtc_transform_term_2_0(m_8, n_8, t);
              }
          }
          t = if_keep2_1_0(p_8, t);
        }
      }
  }
  y_19 = t;
  t = term_c_39;
  t_19 = t;
  t = y_19;
  t = pass_warnings_0_0(t);
  x_19 = t;
  t = y_19;
  t = comp_0_2(t_19, x_19, t);
  i_32 = t;
  {
    ATerm d_39 = t;
    int e_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_38 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_38 = ATgetArgument(t, 0);
            {
              ATerm a_20 = NULL,b_4 = NULL;
              t = SSLgetAnnotations(i_32);
              a_20 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_38);
              b_4 = t;
              t = SSLsetAnnotations(b_4, a_20);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_32;
          }
        LocalPopChoice(e_39);
        t = xtc_transform_file_2_0(t_8, z_8, t);
      }
    else
      {
        t = d_39;
        t = xtc_transform_term_2_0(c_9, e_9, t);
      }
  }
  h_32 = t;
  {
    ATerm f_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_38 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_38 = ATgetArgument(t, 0);
            {
              ATerm i_20 = NULL,d_4 = NULL;
              t = SSLgetAnnotations(h_32);
              i_20 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_38);
              d_4 = t;
              t = SSLsetAnnotations(d_4, i_20);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_32;
          }
        LocalPopChoice(g_39);
        t = xtc_transform_file_2_0(g_9, l_9, t);
      }
    else
      {
        t = f_39;
        t = xtc_transform_term_2_0(m_9, o_9, t);
      }
  }
  t = if_keep2_1_0(p_9, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,e_32 = NULL;
  a_32 = t;
  t = term_y_20;
  b_32 = t;
  t = (ATerm) ATinsert(CheckATermList(a_32), term_h_39);
  e_32 = t;
  t = SSL_printnl(b_32, e_32);
  t = (ATerm) ATmakeAppl(sym__2, term_y_20, (ATerm) ATinsert(CheckATermList(a_32), term_h_39));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_i_39;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm u_33 = NULL;
  t = pass_verbose_0_0(t);
  u_33 = t;
  t = (ATerm) ATinsert(CheckATermList(u_33), term_v_30);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_i_39;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm v_33 = NULL;
  t = pass_verbose_0_0(t);
  v_33 = t;
  t = (ATerm) ATinsert(CheckATermList(v_33), term_v_30);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_k_39;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm m_34 = NULL;
  t = pass_verbose_0_0(t);
  m_34 = t;
  t = (ATerm) ATinsert(CheckATermList(m_34), term_v_30);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_k_39;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm n_34 = NULL;
  t = pass_verbose_0_0(t);
  n_34 = t;
  t = (ATerm) ATinsert(CheckATermList(n_34), term_v_30);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = save_as_1_0(a_6, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_l_39;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = save_as_1_0(e_6, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_p_39;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_r_39;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm y_34 = NULL;
  t = pass_verbose_0_0(t);
  y_34 = t;
  t = (ATerm) ATinsert(CheckATermList(y_34), term_v_30);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_r_39;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm z_34 = NULL;
  t = pass_verbose_0_0(t);
  z_34 = t;
  t = (ATerm) ATinsert(CheckATermList(z_34), term_v_30);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_s_39;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm l_35 = NULL;
  t = pass_verbose_0_0(t);
  l_35 = t;
  t = (ATerm) ATinsert(CheckATermList(l_35), term_v_30);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_s_39;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm m_35 = NULL;
  t = pass_verbose_0_0(t);
  m_35 = t;
  t = (ATerm) ATinsert(CheckATermList(m_35), term_v_30);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = save_as_1_0(b_7, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_u_39;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_x_39;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm w_35 = NULL;
  t = pass_verbose_0_0(t);
  w_35 = t;
  t = (ATerm) ATinsert(CheckATermList(w_35), term_v_30);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_x_39;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm a_36 = NULL;
  t = pass_verbose_0_0(t);
  a_36 = t;
  t = (ATerm) ATinsert(CheckATermList(a_36), term_v_30);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = save_as_1_0(n_7, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_e_40;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_f_40;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm k_36 = NULL;
  t = pass_verbose_0_0(t);
  k_36 = t;
  t = (ATerm) ATinsert(CheckATermList(k_36), term_v_30);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_f_40;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm l_36 = NULL;
  t = pass_verbose_0_0(t);
  l_36 = t;
  t = (ATerm) ATinsert(CheckATermList(l_36), term_v_30);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = save_as_1_0(y_7, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_g_40;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_y_30;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm i_37 = NULL;
  t = pass_verbose_0_0(t);
  i_37 = t;
  t = (ATerm) ATinsert(CheckATermList(i_37), term_v_30);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_y_30;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm j_37 = NULL;
  t = pass_verbose_0_0(t);
  j_37 = t;
  t = (ATerm) ATinsert(CheckATermList(j_37), term_v_30);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_k_40;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm t_37 = NULL;
  t = pass_verbose_0_0(t);
  t_37 = t;
  t = (ATerm) ATinsert(CheckATermList(t_37), term_v_30);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_k_40;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm u_37 = NULL;
  t = pass_verbose_0_0(t);
  u_37 = t;
  t = (ATerm) ATinsert(CheckATermList(u_37), term_v_30);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = save_as_1_0(q_8, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_p_40;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_q_40;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm g_38 = NULL;
  t = pass_verbose_0_0(t);
  g_38 = t;
  t = (ATerm) ATinsert(CheckATermList(g_38), term_v_30);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_q_40;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm h_38 = NULL;
  t = pass_verbose_0_0(t);
  h_38 = t;
  t = (ATerm) ATinsert(CheckATermList(h_38), term_v_30);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_r_40;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm t_38 = NULL;
  t = pass_verbose_0_0(t);
  t_38 = t;
  t = (ATerm) ATinsert(CheckATermList(t_38), term_v_30);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_r_40;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm v_38 = NULL;
  t = pass_verbose_0_0(t);
  v_38 = t;
  t = (ATerm) ATinsert(CheckATermList(v_38), term_v_30);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = save_as_1_0(x_9, t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_s_40;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(u_4, t);
  t = profile_p__2_0(w_4, x_4, t);
  return(t);
}
static ATerm x_12 (ATerm x_58, ATerm y_58, ATerm t)
{
  ATerm j_39 = NULL;
  t = lookup_table_0_1(x_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_13(y_58, j_39, t);
  return(t);
}
static ATerm b_12 (ATerm j_57, ATerm k_57, ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL;
  n_39 = t;
  {
    ATerm t_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_57, k_57);
        t = x_12(j_57, k_57, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_40 = ATgetFirst((ATermList) t);
            m_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_40);
        {
          ATerm o_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, j_57, k_57, m_39);
          t = lookup_table_0_1(j_57, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_13(k_57, m_39, o_39, t);
          t = (ATerm) ATmakeAppl(sym__3, j_57, k_57, m_39);
        }
      }
    else
      {
        t = t_40;
        {
          ATerm q_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, j_57, k_57);
          t = lookup_table_0_1(j_57, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              q_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_12(k_57, q_39, t);
          t = (ATerm) ATmakeAppl(sym__2, j_57, k_57);
        }
      }
  }
  t = n_39;
  return(t);
}
ATerm end_scope_1_0 (ATerm f_102 (ATerm), ATerm t)
{
  ATerm t_39 = NULL,v_39 = NULL,w_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL;
  y_39 = t;
  t = f_102(t);
  w_39 = t;
  {
    ATerm x_40 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_40 = NULL;
        t = term_h_33;
        c_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_39, term_h_33);
        t = x_12(w_39, c_40, t);
        {
          ATerm d_41 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_41;
            }
        }
        LocalPopChoice(c_41);
      }
    else
      {
        t = x_40;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_39 = ATgetFirst((ATermList) t);
      t_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_39, term_h_33, t_39);
  t = lookup_table_0_1(w_39, t);
  b_40 = t;
  t = term_h_33;
  z_39 = t;
  t = b_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13(z_39, t_39, a_40, t);
  t = v_39;
  {
    static ATerm y_9 (ATerm t);
    static ATerm y_9 (ATerm t)
    {
      ATerm d_40 = NULL;
      d_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_39, d_40);
      t = b_12(w_39, d_40, t);
      return(t);
    }
    t = map_1_0(y_9, t);
  }
  t = y_39;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm t)
{
  ATerm e_41 = t;
  int g_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_104(t);
      t = o_104(t);
      LocalPopChoice(g_41);
    }
  else
    {
      t = e_41;
      t = o_104(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_102 (ATerm), ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
  i_40 = t;
  t = e_102(t);
  h_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_40, term_h_33);
  {
    ATerm h_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_40 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_41 = ATgetArgument(t, 0);
            ATerm o_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_33;
        u_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_40, term_h_33);
        t = x_12(h_40, u_40, t);
        LocalPopChoice(i_41);
      }
    else
      {
        t = h_41;
        t = (ATerm) ATempty;
      }
  }
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_40, term_h_33, (ATerm) ATinsert(CheckATermList(j_40), (ATerm) ATempty));
  t = lookup_table_0_1(h_40, t);
  o_40 = t;
  t = term_h_33;
  l_40 = t;
  t = (ATerm) ATinsert(CheckATermList(j_40), (ATerm) ATempty);
  m_40 = t;
  t = o_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13(l_40, m_40, n_40, t);
  t = i_40;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_n_33;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm f_41 = NULL;
  f_41 = t;
  {
    ATerm p_41 = t;
    int q_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(f_41);
        LocalPopChoice(q_41);
      }
    else
      {
        t = p_41;
        t = f_41;
      }
  }
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm k_137 (ATerm), ATerm t)
{
  ATerm y_40 = NULL;
  static ATerm a_10 (ATerm t);
  static ATerm a_10 (ATerm t)
  {
    ATerm z_40 = NULL;
    z_40 = t;
    {
      ATerm r_41 = t;
      int t_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_41 = NULL,b_41 = NULL;
          t = term_n_33;
          a_41 = t;
          t = term_h_33;
          b_41 = t;
          t = term_l_34;
          t = x_12(a_41, b_41, t);
          LocalPopChoice(t_41);
        }
      else
        {
          t = r_41;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_40 != NULL) && (y_40 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_40 = ATgetFirst((ATermList) t);
        {
          ATerm x_41 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = y_40;
    t = map_1_0(b_10, t);
    t = z_40;
    t = end_scope_1_0(c_10, t);
    return(t);
  }
  t = begin_scope_1_0(z_9, t);
  t = restore_always_2_0(k_137, a_10, t);
  return(t);
}
ATerm debug_1_0 (ATerm s_111 (ATerm), ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
  k_41 = t;
  t = s_111(t);
  l_41 = t;
  t = term_y_20;
  m_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_41), l_41);
  n_41 = t;
  t = SSL_printnl(m_41, n_41);
  t = k_41;
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_128 (ATerm), ATerm t)
{
  ATerm s_41 = NULL;
  s_41 = t;
  {
    ATerm y_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
        t = term_c_21;
        v_41 = t;
        t = term_h_21;
        w_41 = t;
        t = term_k_21;
        t = x_12(v_41, w_41, t);
        u_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_41, term_l_21);
        t = geq_0_0(t);
        t = s_41;
        t = a_128(t);
        LocalPopChoice(a_42);
      }
    else
      {
        t = y_41;
        t = s_41;
      }
  }
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm z_41 = NULL,b_42 = NULL,c_42 = NULL,e_42 = NULL,f_42 = NULL,i_42 = NULL;
  z_41 = t;
  t = term_c_21;
  f_42 = t;
  t = term_d_42;
  i_42 = t;
  t = term_j_42;
  t = x_12(f_42, i_42, t);
  b_42 = t;
  t = term_s_34;
  c_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_42), term_w_42), term_v_42), term_u_42), term_r_42), term_p_42), term_o_42), b_42), term_m_42);
  e_42 = t;
  t = SSL_printnl(c_42, e_42);
  t = z_41;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_128 (ATerm), ATerm t)
{
  ATerm n_42 = NULL;
  n_42 = t;
  {
    ATerm y_42 = t;
    int b_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_42 = NULL,s_42 = NULL,t_42 = NULL;
        t = term_c_21;
        s_42 = t;
        t = term_h_21;
        t_42 = t;
        t = term_k_21;
        t = x_12(s_42, t_42, t);
        q_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_42, term_g_21);
        t = geq_0_0(t);
        t = n_42;
        t = b_128(t);
        LocalPopChoice(b_43);
      }
    else
      {
        t = y_42;
        t = n_42;
      }
  }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_42 = ATgetFirst((ATermList) t);
      a_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_43;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_42;
    }
  else
    {
      t = a_43;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm e_12 (ATerm a_37, ATerm q_270, ATerm t)
{
  static ATerm d_10 (ATerm t);
  static ATerm d_10 (ATerm t)
  {
    if((a_37 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = q_270;
  t = fetch_1_0(d_10, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm y_112 (ATerm), ATerm t)
{
  static ATerm z_43 (ATerm t);
  static ATerm z_43 (ATerm t)
  {
    ATerm c_43 = t;
    int d_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_112(t);
        LocalPopChoice(d_43);
      }
    else
      {
        t = c_43;
        {
          ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL,b_21 = NULL,f_21 = NULL,x_6 = NULL;
          w_43 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_43 = ATgetFirst((ATermList) t);
              y_43 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_43);
          b_21 = t;
          t = y_43;
          t = z_43(t);
          f_21 = t;
          t = (ATerm) ATinsert(CheckATermList(f_21), x_43);
          x_6 = t;
          t = SSLsetAnnotations(x_6, b_21);
        }
      }
    return(t);
  }
  t = z_43(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm q_112 (ATerm), ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL;
  static ATerm f_10 (ATerm t);
  static ATerm f_10 (ATerm t)
  {
    ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,m_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,l_7 = NULL,g_7 = NULL;
    q_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_44 = ATgetFirst((ATermList) t);
        m_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_44);
    i_44 = t;
    t = j_44;
    t = q_112(t);
    o_44 = t;
    t = (ATerm) ATinsert(CheckATermList(m_44), o_44);
    g_7 = t;
    t = SSLsetAnnotations(g_7, i_44);
    p_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_44 = ATgetFirst((ATermList) t);
        h_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_44);
    f_44 = t;
    t = h_44;
    if(((b_44 != NULL) && (b_44 != t)))
      _fail(t);
    else
      b_44 = t;
    t = (ATerm) ATinsert(CheckATermList(h_44), g_44);
    l_7 = t;
    t = SSLsetAnnotations(l_7, f_44);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(f_10, t);
  c_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_44, not_null(b_44));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm a_122 (ATerm), ATerm t)
{
  ATerm b_45 = NULL,f_45 = NULL;
  ATerm e_43 = t;
  int f_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(a_122, t);
      LocalPopChoice(f_43);
    }
  else
    {
      t = e_43;
      {
        ATerm y_44 = NULL;
        y_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_44, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      b_45 = ATgetArgument(t, 0);
      f_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_45;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_45;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm g_43 = ATgetFirst((ATermList) t);
              ATerm h_43 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = f_45;
          t = list_tokenize_1_0(a_122, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm i_43 = ATgetFirst((ATermList) t);
          ATerm j_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_45;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, b_45);
        }
      else
        {
          ATerm t_45 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm k_43 = ATgetFirst((ATermList) t);
              ATerm l_43 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = f_45;
          t = list_tokenize_1_0(a_122, t);
          t_45 = t;
          t = (ATerm) ATinsert(CheckATermList(t_45), b_45);
        }
    }
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm c_46 = NULL;
  c_46 = t;
  t = SSL_implode_string(c_46);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,p_7 = NULL;
  a_46 = t;
  if(match_cons(t, sym__2))
    {
      x_45 = ATgetArgument(t, 0);
      y_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_46);
  w_45 = t;
  t = SSL_explode_string(y_45);
  z_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_45, z_45);
  p_7 = t;
  t = SSLsetAnnotations(p_7, w_45);
  if(match_cons(t, sym__2))
    {
      u_45 = ATgetArgument(t, 0);
      v_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_45;
  {
    static ATerm n_10 (ATerm t);
    static ATerm n_10 (ATerm t)
    {
      ATerm b_46 = NULL;
      b_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_46, u_45);
      t = e_12(b_46, u_45, t);
      return(t);
    }
    t = list_tokenize_1_0(n_10, t);
  }
  t = map_1_0(o_10, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm v_46 = NULL;
  v_46 = t;
  {
    ATerm m_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_21 = NULL;
        t = SSL_filemode(v_46);
        if(match_cons(t, sym__2))
          {
            q_21 = ATgetArgument(t, 0);
            {
              ATerm o_43 = ATgetArgument(t, 1);
              if(((ATgetType(o_43) != AT_INT) || (ATgetInt((ATermInt) o_43) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_21;
        LocalPopChoice(n_43);
      }
    else
      {
        t = m_43;
        {
          ATerm a_22 = NULL,c_22 = NULL;
          t = term_p_43;
          c_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_43, v_46);
          t = d_13(c_22, v_46, t);
          a_22 = t;
          t = SSL_perror(a_22);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm f_12 (ATerm y_66, ATerm x_66, ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL;
  b_47 = t;
  {
    ATerm q_43 = t;
    int r_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_47 = NULL,d_47 = NULL;
        t = (ATerm) ATinsert(ATempty, term_r_33);
        d_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_66, (ATerm) ATinsert(ATempty, term_r_33));
        t = s_12(x_66, d_47, t);
        t = filemode_0_0(t);
        c_47 = t;
        t = SSL_S_ISDIR(c_47);
        t = b_47;
        LocalPopChoice(r_43);
        {
          ATerm e_47 = NULL,f_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_s_43), y_66);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          e_47 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_47), term_t_43), x_66);
          f_47 = t;
          t = SSL_concat_strings(f_47);
        }
      }
    else
      {
        t = q_43;
        t = x_66;
      }
  }
  a_47 = t;
  t = SSL_copy(y_66, a_47);
  return(t);
}
static ATerm g_12 (ATerm d_62, ATerm t)
{
  t = SSL_hashtable_keys(d_62);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL;
  static ATerm p_10 (ATerm t);
  static ATerm p_10 (ATerm t)
  {
    ATerm i_47 = NULL,j_47 = NULL;
    i_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_47), i_47);
    t = x_12(not_null(g_47), i_47, t);
    j_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_47, j_47);
    return(t);
  }
  if(((g_47 != NULL) && (g_47 != t)))
    _fail(t);
  else
    g_47 = t;
  t = lookup_table_0_1(g_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_12(h_47, t);
  t = map_1_0(p_10, t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = debug_1_0(s_10, t);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = term_u_43;
  return(t);
}
static ATerm l_48 (ATerm p_47, ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL;
  t = term_v_43;
  u_47 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, p_47);
  v_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_43, (ATerm) ATmakeAppl(sym_Tool_1, p_47));
  t = x_12(u_47, v_47, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_44 = ATgetFirst((ATermList) t);
      if(match_cons(a_44, sym__2))
        {
          ATerm e_44 = ATgetArgument(a_44, 0);
          t_47 = ATgetArgument(a_44, 1);
        }
      else
        _fail(t);
      {
        ATerm d_44 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_47;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = debug_1_0(w_10, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_u_43;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_v_43;
  t = table_getlist_0_0(t);
  t = debug_1_0(y_10, t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_k_44;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm l_44 = t;
  int n_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL;
      t = if_verbose5_1_0(r_10, t);
      t = xtc_load_0_0(t);
      y_47 = t;
      if(match_cons(t, sym__2))
        {
          w_47 = ATgetArgument(t, 0);
          x_47 = ATgetArgument(t, 1);
          {
            ATerm r_44 = t;
            int s_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_48 = NULL,e_48 = NULL,f_48 = NULL;
                t = term_v_43;
                e_48 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, w_47);
                f_48 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_v_43, (ATerm) ATmakeAppl(sym_Tool_1, w_47));
                t = x_12(e_48, f_48, t);
                {
                  static ATerm u_10 (ATerm t);
                  static ATerm u_10 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((x_47 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((c_48 != NULL) && (c_48 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_48 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(u_10, t);
                }
                t = not_null(c_48);
                LocalPopChoice(s_44);
              }
            else
              {
                t = r_44;
                t = l_48(y_47, t);
              }
          }
        }
      else
        {
          t = l_48(y_47, t);
        }
      t = if_verbose5_1_0(v_10, t);
      LocalPopChoice(n_44);
    }
  else
    {
      t = l_44;
      {
        ATerm k_48 = NULL,k_22 = NULL,p_22 = NULL;
        k_48 = t;
        t = term_y_20;
        k_22 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_44), k_48), term_t_44);
        p_22 = t;
        t = SSL_printnl(k_22, p_22);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_44), k_48), term_t_44);
        t = if_verbose5_1_0(x_10, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm h_12 (ATerm b_71, ATerm a_71, ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
  t = b_71;
  {
    ATerm v_44 = t;
    int w_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_49 = NULL;
        t = term_c_21;
        a_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_21, b_71);
        t = x_12(a_49, b_71, t);
        LocalPopChoice(w_44);
      }
    else
      {
        t = v_44;
        t = (ATerm) ATempty;
      }
  }
  t_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_71, t_48);
  t = conc_0_0(t);
  s_48 = t;
  t = term_c_21;
  u_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_21, b_71, s_48);
  t = lookup_table_0_1(u_48, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13(b_71, s_48, v_48, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_21, b_71, s_48);
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm g_49 = NULL,i_49 = NULL,j_49 = NULL,l_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL;
      t = term_p_33;
      t = q_0(t);
      m_49 = t;
      t = term_x_44;
      n_49 = t;
      t = term_z_44;
      o_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_44, term_z_44, m_49);
      t = y_12(n_49, o_49, m_49, t);
      _fail(t);
    }
  else
    {
      ATerm s_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_49 = ATgetFirst((ATermList) t);
          i_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_49 = ATgetFirst((ATermList) t);
          l_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_49;
      t = o_0(t);
      t = j_49;
      t = p_0(t);
      s_49 = t;
      t = (ATerm) ATinsert(CheckATermList(l_49), s_49);
    }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm w_49 = NULL;
  w_49 = t;
  if(match_string(t, "-S"))
    {
      t = w_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_49;
    }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm x_49 = NULL,z_49 = NULL;
  t = term_h_21;
  x_49 = t;
  t = term_x_34;
  z_49 = t;
  t = term_a_45;
  t = c_13(x_49, z_49, t);
  t = term_c_45;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_d_45;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm a_50 = NULL,d_50 = NULL,e_50 = NULL;
  a_50 = t;
  t = SSL_string_to_int(a_50);
  d_50 = t;
  t = term_h_21;
  e_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_21, d_50);
  t = c_13(e_50, d_50, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_50);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_e_45;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL;
  t = term_g_45;
  h_50 = t;
  t = term_p_33;
  i_50 = t;
  t = term_h_45;
  t = c_13(h_50, i_50, t);
  t = term_i_45;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_j_45;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_45 = t;
  int l_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_10, c_11, d_11, t);
      LocalPopChoice(l_45);
    }
  else
    {
      t = k_45;
      {
        ATerm m_45 = t;
        int n_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_11, f_11, l_11, t);
            LocalPopChoice(n_45);
          }
        else
          {
            t = m_45;
            t = Option_3_0(n_11, o_11, y_11, t);
          }
      }
    }
  return(t);
}
ATerm set_choice_point_lib_0_0 (ATerm t)
{
  ATerm n_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL;
  n_50 = t;
  t = term_c_21;
  s_50 = t;
  t = term_o_45;
  t_50 = t;
  t = term_p_45;
  t = x_12(s_50, t_50, t);
  {
    static ATerm i_12 (ATerm t);
    static ATerm i_12 (ATerm t)
    {
      ATerm u_50 = NULL;
      u_50 = t;
      if(match_string(t, "-lstratego-choice"))
        {
          t = n_50;
        }
      else
        {
          t = u_50;
        }
      return(t);
    }
    t = map_1_0(i_12, t);
  }
  q_50 = t;
  t = term_o_45;
  r_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_45, q_50);
  t = c_13(r_50, q_50, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_128 (ATerm), ATerm t)
{
  ATerm b_51 = NULL;
  b_51 = t;
  {
    ATerm q_45 = t;
    int r_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_51 = NULL,f_51 = NULL,i_51 = NULL;
        t = term_c_21;
        f_51 = t;
        t = term_h_21;
        i_51 = t;
        t = term_k_21;
        t = x_12(f_51, i_51, t);
        d_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_51, term_z_27);
        t = geq_0_0(t);
        t = b_51;
        t = e_128(t);
        LocalPopChoice(r_45);
      }
    else
      {
        t = q_45;
        t = b_51;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_128 (ATerm), ATerm t)
{
  ATerm l_51 = NULL;
  l_51 = t;
  {
    ATerm s_45 = t;
    int d_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_51 = NULL,s_51 = NULL,u_51 = NULL;
        t = term_c_21;
        s_51 = t;
        t = term_h_21;
        u_51 = t;
        t = term_k_21;
        t = x_12(s_51, u_51, t);
        p_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_51, term_o_25);
        t = geq_0_0(t);
        t = l_51;
        t = d_128(t);
        LocalPopChoice(d_46);
      }
    else
      {
        t = s_45;
        t = l_51;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL;
  u_52 = t;
  if(match_cons(t, sym__2))
    {
      v_52 = ATgetArgument(t, 0);
      w_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_46 = t;
    int f_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_52;
        if((v_52 != t))
          {
            _fail(t);
          }
        t = u_52;
        LocalPopChoice(f_46);
      }
    else
      {
        t = e_46;
        t = (ATerm) ATmakeAppl(sym__2, v_52, w_52);
        {
          ATerm g_46 = t;
          int h_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_52, w_52);
              LocalPopChoice(h_46);
            }
          else
            {
              t = g_46;
              t = SSL_gtr(v_52, w_52);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_52, w_52);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm f_128 (ATerm), ATerm t)
{
  ATerm c_53 = NULL;
  c_53 = t;
  {
    ATerm i_46 = t;
    int j_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
        t = term_c_21;
        f_53 = t;
        t = term_h_21;
        g_53 = t;
        t = term_k_21;
        t = x_12(f_53, g_53, t);
        e_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_53, term_i_23);
        t = geq_0_0(t);
        t = c_53;
        t = f_128(t);
        LocalPopChoice(j_46);
      }
    else
      {
        t = i_46;
        t = c_53;
      }
  }
  return(t);
}
static ATerm k_12 (ATerm r_116 (ATerm), ATerm s_116 (ATerm), ATerm l_42, ATerm k_42, ATerm t)
{
  t = s_116(t);
  {
    static ATerm w_12 (ATerm t);
    static ATerm w_12 (ATerm t)
    {
      ATerm i_53 = NULL;
      i_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_42, i_53);
      t = r_116(t);
      return(t);
    }
    t = fetch_1_0(w_12, t);
  }
  t = k_42;
  return(t);
}
static ATerm l_12 (ATerm o_116 (ATerm), ATerm h_42, ATerm g_42, ATerm t)
{
  static ATerm y_53 (ATerm t);
  static ATerm y_53 (ATerm t)
  {
    ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL;
    t_53 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_42;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_53 = ATgetFirst((ATermList) t);
            v_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_46 = t;
          int l_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_53;
              {
                static ATerm z_12 (ATerm t);
                static ATerm z_12 (ATerm t)
                {
                  t = g_42;
                  return(t);
                }
                t = k_12(o_116, z_12, u_53, v_53, t);
              }
              t = y_53(t);
              LocalPopChoice(l_46);
            }
          else
            {
              t = k_46;
              {
                ATerm q_23 = NULL,u_23 = NULL,s_7 = NULL;
                t = SSLgetAnnotations(t_53);
                q_23 = t;
                t = v_53;
                t = y_53(t);
                u_23 = t;
                t = (ATerm) ATinsert(CheckATermList(u_23), u_53);
                s_7 = t;
                t = SSLsetAnnotations(s_7, q_23);
              }
            }
        }
      }
    return(t);
  }
  t = h_42;
  t = y_53(t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm l_54 = NULL;
  if(match_cons(t, sym__2))
    {
      l_54 = ATgetArgument(t, 0);
      if((l_54 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_12 (ATerm b_58, ATerm c_58, ATerm d_58, ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL;
  b_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_58, c_58);
  {
    ATerm m_46 = t;
    int n_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_46 = ATgetArgument(t, 0);
            ATerm p_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_58, c_58);
        t = x_12(b_58, c_58, t);
        LocalPopChoice(n_46);
      }
    else
      {
        t = m_46;
        t = (ATerm) ATempty;
      }
  }
  d_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_54, d_58);
  t = l_12(e_13, d_54, d_58, t);
  c_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_58, c_58, c_54);
  t = lookup_table_0_1(b_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13(c_58, c_54, e_54, t);
  t = b_54;
  return(t);
}
static ATerm n_12 (ATerm r_125 (ATerm), ATerm l_58, ATerm k_58, ATerm t)
{
  static ATerm f_13 (ATerm t);
  static ATerm f_13 (ATerm t)
  {
    ATerm m_54 = NULL,p_54 = NULL;
    if(match_cons(t, sym__2))
      {
        m_54 = ATgetArgument(t, 0);
        p_54 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, l_58, m_54, p_54);
    t = r_125(t);
    return(t);
  }
  t = k_58;
  t = map_1_0(f_13, t);
  return(t);
}
static ATerm h_55 (ATerm z_54, ATerm t)
{
  t = SSL_fclose(z_54);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL;
  f_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_55 = ATgetArgument(t, 0);
      {
        ATerm q_46 = t;
        int r_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_55);
            LocalPopChoice(r_46);
          }
        else
          {
            t = q_46;
            t = h_55(f_55, t);
          }
      }
    }
  else
    {
      t = h_55(f_55, t);
    }
  return(t);
}
static ATerm o_12 (ATerm e_36, ATerm t)
{
  t = SSL_read_term_from_stream(e_36);
  return(t);
}
static ATerm p_12 (ATerm z_51, ATerm a_52, ATerm t)
{
  ATerm i_55 = NULL;
  t = SSL_fopen(z_51, a_52);
  i_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_55);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_55 = NULL;
  t = SSL_stdin_stream();
  l_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_55);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_55 = NULL;
  t = SSL_stdout_stream();
  m_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_55);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_55 = NULL;
  t = SSL_stderr_stream();
  p_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_55);
  return(t);
}
static ATerm m_57 (ATerm x_55, ATerm t)
{
  ATerm a_56 = NULL;
  t = SSL_explode_term(x_55);
  if(match_cons(t, sym__2))
    {
      ATerm s_46 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_46) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_46 = ATgetArgument(t, 1);
        if(((ATgetType(t_46) == AT_LIST) && !(ATisEmpty(t_46))))
          {
            a_56 = ATgetFirst((ATermList) t_46);
            {
              ATerm u_46 = (ATerm) ATgetNext((ATermList) t_46);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_56;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_56;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_56;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_56;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_57 (ATerm d_56, ATerm e_56, ATerm f_56, ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL,l_56 = NULL,v_7 = NULL;
  t = SSLgetAnnotations(f_56);
  i_56 = t;
  t = d_56;
  if(match_cons(t, sym_Path_1))
    {
      l_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_56, e_56);
  v_7 = t;
  t = SSLsetAnnotations(v_7, i_56);
  if(match_cons(t, sym__2))
    {
      g_56 = ATgetArgument(t, 0);
      h_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_12(g_56, h_56, t);
  return(t);
}
static ATerm r_57 (ATerm n_56, ATerm o_56, ATerm p_56, ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,u_56 = NULL,x_56 = NULL,x_7 = NULL;
  t = SSLgetAnnotations(p_56);
  u_56 = t;
  t = SSL_is_string(n_56);
  x_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_56, o_56);
  x_7 = t;
  t = SSLsetAnnotations(x_7, u_56);
  if(match_cons(t, sym__2))
    {
      r_56 = ATgetArgument(t, 0);
      s_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_12(r_56, s_56, t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm b_57 = NULL,h_57 = NULL,l_57 = NULL;
  b_57 = t;
  if(match_cons(t, sym__2))
    {
      h_57 = ATgetArgument(t, 0);
      l_57 = ATgetArgument(t, 1);
      {
        ATerm w_46 = t;
        int x_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_57(b_57, t);
            LocalPopChoice(x_46);
          }
        else
          {
            t = w_46;
            {
              ATerm y_46 = t;
              int z_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_57(h_57, l_57, b_57, t);
                  LocalPopChoice(z_46);
                }
              else
                {
                  t = y_46;
                  t = r_57(h_57, l_57, b_57, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_57(b_57, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_57 = NULL,x_57 = NULL,a_58 = NULL,u_58 = NULL;
  u_58 = t;
  {
    ATerm k_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_58, term_m_47);
        t = q_12(t);
        LocalPopChoice(l_47);
      }
    else
      {
        t = k_47;
        {
          ATerm v_24 = NULL,w_24 = NULL;
          t = term_n_47;
          w_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_47, u_58);
          t = d_13(w_24, u_58, t);
          v_24 = t;
          t = SSL_perror(v_24);
          _fail(t);
        }
      }
  }
  x_57 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_12(a_58, t);
  t_57 = t;
  t = x_57;
  t = fclose_0_0(t);
  t = t_57;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_o_47;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_q_47;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm r_47 = t;
  int s_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_58 = NULL,a_59 = NULL;
      z_58 = t;
      t = (ATerm) ATinsert(ATempty, term_z_47);
      a_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_58, (ATerm) ATinsert(ATempty, term_z_47));
      t = s_12(z_58, a_59, t);
      LocalPopChoice(s_47);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = r_47;
      {
        ATerm a_48 = t;
        int b_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_48 = t;
            if((PushChoice() == 0))
              {
                ATerm b_59 = NULL,d_59 = NULL;
                b_59 = t;
                t = (ATerm) ATinsert(ATempty, term_r_33);
                d_59 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_59, (ATerm) ATinsert(ATempty, term_r_33));
                t = s_12(b_59, d_59, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_48;
              }
            t = debug_1_0(g_13, t);
            LocalPopChoice(b_48);
          }
        else
          {
            t = a_48;
            t = debug_1_0(h_13, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = debug_1_0(j_13, t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = term_g_48;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  t = debug_1_0(l_13, t);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_h_48;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL;
  k_60 = t;
  t = term_y_20;
  l_60 = t;
  t = (ATerm) ATinsert(ATempty, term_i_48);
  m_60 = t;
  t = SSL_printnl(l_60, m_60);
  t = k_60;
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL,r_60 = NULL;
  if(match_cons(t, sym__3))
    {
      n_60 = ATgetArgument(t, 0);
      o_60 = ATgetArgument(t, 1);
      r_60 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_12(n_60, o_60, r_60, t);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL,v_60 = NULL;
  s_60 = t;
  t = term_y_20;
  t_60 = t;
  t = (ATerm) ATinsert(ATempty, term_j_48);
  v_60 = t;
  t = SSL_printnl(t_60, v_60);
  t = s_60;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,c_61 = NULL;
  w_60 = t;
  t = term_y_20;
  x_60 = t;
  t = (ATerm) ATinsert(ATempty, term_i_48);
  c_61 = t;
  t = SSL_printnl(x_60, c_61);
  t = w_60;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL,p_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,d_60 = NULL;
  i_59 = t;
  t = if_verbose5_1_0(i_13, t);
  {
    ATerm m_48 = t;
    if((PushChoice() == 0))
      {
        ATerm e_60 = NULL,j_60 = NULL;
        t = term_v_43;
        e_60 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, i_59);
        j_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_43, (ATerm) ATmakeAppl(sym_Imported_1, i_59));
        t = x_12(e_60, j_60, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_48;
      }
  }
  k_59 = t;
  t = term_v_43;
  w_59 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_43, term_n_48, (ATerm) ATinsert(ATempty, i_59));
  t = lookup_table_0_1(w_59, t);
  d_60 = t;
  t = term_n_48;
  z_59 = t;
  t = (ATerm) ATinsert(ATempty, i_59);
  a_60 = t;
  t = d_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13(z_59, a_60, b_60, t);
  t = k_59;
  t = if_verbose4_1_0(k_13, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(m_13, t);
  j_59 = t;
  t = term_v_43;
  v_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_43, j_59);
  t = n_12(n_13, v_59, j_59, t);
  t = if_verbose6_1_0(o_13, t);
  t = term_v_43;
  p_59 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_43, (ATerm)ATmakeAppl(sym_Imported_1, i_59), (ATerm) ATempty);
  t = lookup_table_0_1(p_59, t);
  u_59 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, i_59);
  r_59 = t;
  t = (ATerm) ATempty;
  s_59 = t;
  t = u_59;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13(r_59, s_59, t_59, t);
  t = (ATerm) ATmakeAppl(sym__3, term_v_43, (ATerm)ATmakeAppl(sym_Imported_1, i_59), (ATerm) ATempty);
  t = if_verbose4_1_0(p_13, t);
  return(t);
}
ATerm filter_1_0 (ATerm g_120 (ATerm), ATerm t)
{
  ATerm i_62 = NULL,n_62 = NULL,o_62 = NULL;
  i_62 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_62;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_62 = ATgetFirst((ATermList) t);
          o_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_48 = t;
        int p_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_25 = NULL,g_25 = NULL,j_25 = NULL,a_8 = NULL;
            t = SSLgetAnnotations(i_62);
            d_25 = t;
            t = n_62;
            t = g_120(t);
            g_25 = t;
            t = o_62;
            t = filter_1_0(g_120, t);
            j_25 = t;
            t = (ATerm) ATinsert(CheckATermList(j_25), g_25);
            a_8 = t;
            t = SSLsetAnnotations(a_8, d_25);
            LocalPopChoice(p_48);
          }
        else
          {
            t = o_48;
            t = o_62;
            t = filter_1_0(g_120, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm t)
{
  static ATerm s_62 (ATerm t);
  static ATerm s_62 (ATerm t)
  {
    ATerm q_48 = t;
    int r_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_104(t);
        t = s_62(t);
        LocalPopChoice(r_48);
      }
    else
      {
        t = q_48;
        t = s_104(t);
      }
    return(t);
  }
  t = s_62(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm w_48 = t;
  int x_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_62 = NULL,y_62 = NULL;
      t = term_c_21;
      w_62 = t;
      t = term_y_48;
      y_62 = t;
      t = term_z_48;
      t = x_12(w_62, y_62, t);
      LocalPopChoice(x_48);
    }
  else
    {
      t = w_48;
      {
        ATerm b_49 = t;
        int c_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_63 = NULL;
            t = term_d_49;
            b_63 = t;
            t = SSL_getenv(b_63);
            LocalPopChoice(c_49);
          }
        else
          {
            t = b_49;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = debug_1_0(r_13, t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_e_49;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL;
  t = term_v_43;
  j_63 = t;
  t = term_f_49;
  k_63 = t;
  t = term_h_49;
  t = x_12(j_63, k_63, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm k_49 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_49;
      }
  }
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = debug_1_0(u_13, t);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = term_p_49;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm d_63 = NULL;
  t = if_verbose5_1_0(q_13, t);
  d_63 = t;
  {
    ATerm q_49 = t;
    int r_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_63 = NULL,f_63 = NULL;
        t = term_v_43;
        e_63 = t;
        t = term_n_48;
        f_63 = t;
        t = term_t_49;
        t = x_12(e_63, f_63, t);
        LocalPopChoice(r_49);
      }
    else
      {
        t = q_49;
        {
          ATerm h_63 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          h_63 = t;
          t = repeat_2_0(s_13, _id, t);
          t = h_63;
        }
      }
  }
  t = d_63;
  t = if_verbose5_1_0(t_13, t);
  return(t);
}
static ATerm i_64 (ATerm q_63, ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
  t = term_v_43;
  t_63 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, q_63);
  u_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_43, (ATerm) ATmakeAppl(sym_Tool_1, q_63));
  t = x_12(t_63, u_63, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_49 = ATgetFirst((ATermList) t);
      if(match_cons(u_49, sym__2))
        {
          ATerm y_49 = ATgetArgument(u_49, 0);
          s_63 = ATgetArgument(u_49, 1);
        }
      else
        _fail(t);
      {
        ATerm v_49 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_63;
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = debug_1_0(x_13, t);
  return(t);
}
static ATerm x_13 (ATerm t)
{
  t = term_u_43;
  return(t);
}
ATerm xtc_find_silent_0_0 (ATerm t)
{
  ATerm v_63 = NULL,x_63 = NULL,z_63 = NULL;
  t = xtc_load_0_0(t);
  z_63 = t;
  if(match_cons(t, sym__2))
    {
      v_63 = ATgetArgument(t, 0);
      x_63 = ATgetArgument(t, 1);
      {
        ATerm f_50 = t;
        int g_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_64 = NULL,d_64 = NULL,g_64 = NULL;
            t = term_v_43;
            d_64 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, v_63);
            g_64 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_v_43, (ATerm) ATmakeAppl(sym_Tool_1, v_63));
            t = x_12(d_64, g_64, t);
            {
              static ATerm v_13 (ATerm t);
              static ATerm v_13 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((x_63 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((c_64 != NULL) && (c_64 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      c_64 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(v_13, t);
            }
            t = not_null(c_64);
            LocalPopChoice(g_50);
          }
        else
          {
            t = f_50;
            t = i_64(z_63, t);
          }
      }
    }
  else
    {
      t = i_64(z_63, t);
    }
  t = if_verbose5_1_0(w_13, t);
  return(t);
}
static ATerm r_12 (ATerm y_70, ATerm z_70, ATerm t)
{
  ATerm j_50 = t;
  int k_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_64 = NULL,m_64 = NULL,f_65 = NULL;
      t = term_c_21;
      f_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_c_21, y_70);
      t = x_12(f_65, y_70, t);
      t = term_c_21;
      k_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_c_21, y_70);
      t = lookup_table_0_1(k_64, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          m_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_12(y_70, m_64, t);
      t = (ATerm) ATmakeAppl(sym__2, term_c_21, y_70);
      LocalPopChoice(k_50);
    }
  else
    {
      t = j_50;
      t = (ATerm) ATmakeAppl(sym__2, y_70, z_70);
      t = c_13(y_70, z_70, t);
    }
  return(t);
}
static ATerm s_12 (ATerm n_51, ATerm o_51, ATerm t)
{
  t = SSL_access(n_51, o_51);
  return(t);
}
ATerm at_end_1_0 (ATerm u_112 (ATerm), ATerm t)
{
  static ATerm j_67 (ATerm t);
  static ATerm j_67 (ATerm t)
  {
    ATerm c_67 = NULL,e_67 = NULL,f_67 = NULL;
    f_67 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_67 = ATgetFirst((ATermList) t);
        e_67 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_25 = NULL,y_25 = NULL,c_8 = NULL;
          t = SSLgetAnnotations(f_67);
          t_25 = t;
          t = e_67;
          t = j_67(t);
          y_25 = t;
          t = (ATerm) ATinsert(CheckATermList(y_25), c_67);
          c_8 = t;
          t = SSLsetAnnotations(c_8, t_25);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_67;
        t = u_112(t);
      }
    return(t);
  }
  t = j_67(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_65 = NULL,q_65 = NULL,r_65 = NULL;
  n_65 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_65;
    }
  else
    {
      static ATerm y_13 (ATerm t);
      static ATerm y_13 (ATerm t)
      {
        t = not_null(r_65);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_65 = ATgetFirst((ATermList) t);
          if(((r_65 != NULL) && (r_65 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_65;
      t = at_end_1_0(y_13, t);
    }
  return(t);
}
static ATerm n_68 (ATerm r_67, ATerm t)
{
  ATerm d_68 = NULL;
  t = SSL_explode_term(r_67);
  if(match_cons(t, sym__2))
    {
      ATerm l_50 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_50) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_68;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL;
  i_68 = t;
  if(match_cons(t, sym__2))
    {
      g_68 = ATgetArgument(t, 0);
      h_68 = ATgetArgument(t, 1);
      {
        ATerm m_50 = t;
        int o_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_14 (ATerm t);
            static ATerm b_14 (ATerm t)
            {
              t = h_68;
              return(t);
            }
            t = g_68;
            t = at_end_1_0(b_14, t);
            LocalPopChoice(o_50);
          }
        else
          {
            t = m_50;
            t = n_68(i_68, t);
          }
      }
    }
  else
    {
      t = n_68(i_68, t);
    }
  return(t);
}
static ATerm t_12 (ATerm c_71, ATerm d_71, ATerm t)
{
  ATerm o_68 = NULL,r_68 = NULL,t_68 = NULL,u_68 = NULL;
  t = c_71;
  {
    ATerm p_50 = t;
    int v_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_68 = NULL;
        t = term_c_21;
        w_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_21, c_71);
        t = x_12(w_68, c_71, t);
        LocalPopChoice(v_50);
      }
    else
      {
        t = p_50;
        t = (ATerm) ATempty;
      }
  }
  r_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_68, d_71);
  t = conc_0_0(t);
  o_68 = t;
  t = term_c_21;
  t_68 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_21, c_71, o_68);
  t = lookup_table_0_1(t_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13(c_71, o_68, u_68, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_21, c_71, o_68);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm y_68 = NULL;
  y_68 = t;
  if(match_string(t, "-o"))
    {
      t = y_68;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_68;
    }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm z_68 = NULL,a_69 = NULL;
  z_68 = t;
  t = term_q_30;
  a_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_30, z_68);
  t = c_13(a_69, z_68, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_68);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_w_50;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_14, e_14, f_14, t);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm c_69 = NULL;
  c_69 = t;
  if(match_string(t, "-i"))
    {
      t = c_69;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_69;
    }
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm d_69 = NULL,e_69 = NULL;
  d_69 = t;
  t = term_r_30;
  e_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_30, d_69);
  t = c_13(e_69, d_69, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_69);
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = term_x_50;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_14, i_14, j_14, t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm y_69 = NULL;
  y_69 = t;
  if(match_string(t, "-I"))
    {
      t = y_69;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = y_69;
    }
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL;
  z_69 = t;
  t = term_t_35;
  a_70 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_69), term_t_35);
  b_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_35, (ATerm) ATinsert(ATinsert(ATempty, z_69), term_t_35));
  t = t_12(a_70, b_70, t);
  t = term_p_33;
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_y_50;
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm c_70 = NULL;
  c_70 = t;
  if(match_string(t, "--main"))
    {
      t = c_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = c_70;
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm d_70 = NULL,h_70 = NULL;
  d_70 = t;
  t = term_a_34;
  h_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_34, d_70);
  t = c_13(h_70, d_70, t);
  t = term_p_33;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = term_z_50;
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm i_70 = NULL;
  i_70 = t;
  if(match_string(t, "--library"))
    {
      t = i_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = i_70;
    }
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL;
  t = term_e_34;
  j_70 = t;
  t = term_p_33;
  k_70 = t;
  t = term_a_51;
  t = c_13(j_70, k_70, t);
  t = term_p_33;
  return(t);
}
static ATerm b_15 (ATerm t)
{
  t = term_c_51;
  return(t);
}
static ATerm f_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm m_70 = NULL,n_70 = NULL,q_70 = NULL;
  m_70 = t;
  t = term_e_51;
  n_70 = t;
  t = (ATerm) ATinsert(ATempty, m_70);
  q_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_51, (ATerm) ATinsert(ATempty, m_70));
  t = t_12(n_70, q_70, t);
  t = term_p_33;
  return(t);
}
static ATerm i_15 (ATerm t)
{
  t = term_g_51;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL;
  r_70 = t;
  t = term_h_51;
  s_70 = t;
  t = (ATerm) ATinsert(ATempty, r_70);
  t_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_51, (ATerm) ATinsert(ATempty, r_70));
  t = h_12(s_70, t_70, t);
  t = term_p_33;
  return(t);
}
static ATerm l_15 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CD", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm u_70 = NULL,x_70 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL;
  u_70 = t;
  t = term_k_51;
  g_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_51, u_70);
  t = d_13(g_71, u_70, t);
  x_70 = t;
  t = term_m_51;
  e_71 = t;
  t = (ATerm) ATinsert(ATempty, x_70);
  f_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_51, (ATerm) ATinsert(ATempty, x_70));
  t = h_12(e_71, f_71, t);
  t = term_p_33;
  return(t);
}
static ATerm r_15 (ATerm t)
{
  t = term_q_51;
  return(t);
}
static ATerm s_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL;
  h_71 = t;
  t = term_r_51;
  l_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_51, h_71);
  t = d_13(l_71, h_71, t);
  i_71 = t;
  t = term_o_45;
  j_71 = t;
  t = (ATerm) ATinsert(ATempty, i_71);
  k_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_45, (ATerm) ATinsert(ATempty, i_71));
  t = h_12(j_71, k_71, t);
  t = term_p_33;
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_t_51;
  return(t);
}
static ATerm a_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-Cl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL;
  m_71 = t;
  t = term_v_51;
  q_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_51, m_71);
  t = d_13(q_71, m_71, t);
  n_71 = t;
  t = term_o_45;
  o_71 = t;
  t = (ATerm) ATinsert(ATempty, n_71);
  p_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_45, (ATerm) ATinsert(ATempty, n_71));
  t = h_12(o_71, p_71, t);
  t = term_p_33;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  t = term_w_51;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-la", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm r_71 = NULL,u_71 = NULL,v_71 = NULL,d_72 = NULL;
  r_71 = t;
  {
    ATerm x_51 = t;
    int y_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_72 = NULL;
        t = (ATerm) ATinsert(ATempty, term_r_33);
        g_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_71, (ATerm) ATinsert(ATempty, term_r_33));
        t = s_12(r_71, g_72, t);
        LocalPopChoice(y_51);
      }
    else
      {
        t = x_51;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_52), r_71), term_b_52);
        {
          ATerm d_52 = t;
          int e_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_26 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_52), r_71), term_b_52);
              h_26 = t;
              t = SSL_concat_strings(h_26);
              t = xtc_find_0_0(t);
              LocalPopChoice(e_52);
            }
          else
            {
              t = d_52;
              {
                ATerm l_72 = NULL;
                t = term_l_21;
                l_72 = t;
                t = SSL_exit(l_72);
              }
            }
        }
      }
  }
  u_71 = t;
  t = term_o_45;
  v_71 = t;
  t = (ATerm) ATinsert(ATempty, u_71);
  d_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_45, (ATerm) ATinsert(ATempty, u_71));
  t = h_12(v_71, d_72, t);
  t = term_p_33;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = term_f_52;
  return(t);
}
static ATerm o_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--xtc-repo", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL,x_72 = NULL,a_73 = NULL,d_73 = NULL;
  m_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_52), m_72), term_g_52);
  d_73 = t;
  t = SSL_concat_strings(d_73);
  n_72 = t;
  t = term_m_51;
  x_72 = t;
  t = (ATerm) ATinsert(ATempty, n_72);
  a_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_51, (ATerm) ATinsert(ATempty, n_72));
  t = h_12(x_72, a_73, t);
  t = term_p_33;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = term_i_52;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm e_73 = NULL,h_73 = NULL;
  t = term_j_52;
  e_73 = t;
  t = term_p_33;
  h_73 = t;
  t = term_k_52;
  t = c_13(e_73, h_73, t);
  t = term_p_33;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = term_l_52;
  return(t);
}
static ATerm u_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm i_73 = NULL,l_73 = NULL;
  t = term_n_35;
  i_73 = t;
  t = term_p_33;
  l_73 = t;
  t = term_m_52;
  t = c_13(i_73, l_73, t);
  t = term_p_33;
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = term_n_52;
  return(t);
}
static ATerm y_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm n_73 = NULL,o_73 = NULL;
  t = term_e_31;
  n_73 = t;
  t = term_p_33;
  o_73 = t;
  t = term_o_52;
  t = c_13(n_73, o_73, t);
  t = term_p_33;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = term_p_52;
  return(t);
}
static ATerm c_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm s_73 = NULL,t_73 = NULL,u_73 = NULL;
  s_73 = t;
  t = SSL_string_to_int(s_73);
  t_73 = t;
  t = term_d_21;
  u_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_21, t_73);
  t = c_13(u_73, t_73, t);
  t = term_p_33;
  return(t);
}
static ATerm e_17 (ATerm t)
{
  t = term_q_52;
  return(t);
}
static ATerm f_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm v_73 = NULL,y_73 = NULL,z_73 = NULL;
  v_73 = t;
  t = SSL_string_to_int(v_73);
  y_73 = t;
  t = term_r_52;
  z_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_52, y_73);
  t = c_13(z_73, y_73, t);
  t = term_p_33;
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = term_s_52;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  ATerm a_74 = NULL,e_74 = NULL;
  t = term_t_52;
  a_74 = t;
  t = term_p_33;
  e_74 = t;
  t = term_x_52;
  t = r_12(a_74, e_74, t);
  t = term_p_33;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = term_y_52;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL;
  f_74 = t;
  if(match_string(t, "old"))
    {
      t = f_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = f_74;
    }
  t = term_v_31;
  g_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_31, f_74);
  t = c_13(g_74, f_74, t);
  t = term_p_33;
  return(t);
}
static ATerm y_17 (ATerm t)
{
  t = term_z_52;
  return(t);
}
static ATerm z_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--choice-lib", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = set_choice_point_lib_0_0(t);
  t = term_p_33;
  return(t);
}
static ATerm b_18 (ATerm t)
{
  t = term_a_53;
  return(t);
}
static ATerm c_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--cpl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_18 (ATerm t)
{
  t = term_b_53;
  t = xtc_find_0_0(t);
  t = set_choice_point_lib_0_0(t);
  t = term_p_33;
  return(t);
}
static ATerm f_18 (ATerm t)
{
  t = term_d_53;
  return(t);
}
static ATerm g_18 (ATerm t)
{
  ATerm o_74 = NULL;
  o_74 = t;
  if(match_string(t, "-h"))
    {
      t = o_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = o_74;
    }
  return(t);
}
static ATerm h_18 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL;
  t = term_h_53;
  q_74 = t;
  t = term_p_33;
  r_74 = t;
  t = term_j_53;
  t = c_13(q_74, r_74, t);
  t = term_p_33;
  return(t);
}
static ATerm i_18 (ATerm t)
{
  t = term_k_53;
  return(t);
}
static ATerm k_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_18 (ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL;
  t = term_l_53;
  s_74 = t;
  t = term_p_33;
  t_74 = t;
  t = term_m_53;
  t = c_13(s_74, t_74, t);
  t = term_p_33;
  return(t);
}
static ATerm q_18 (ATerm t)
{
  t = term_n_53;
  return(t);
}
static ATerm t_18 (ATerm t)
{
  ATerm u_74 = NULL;
  u_74 = t;
  if(match_string(t, "-v"))
    {
      t = u_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = u_74;
    }
  return(t);
}
static ATerm u_18 (ATerm t)
{
  ATerm v_74 = NULL,x_74 = NULL;
  t = term_o_53;
  v_74 = t;
  t = term_p_33;
  x_74 = t;
  t = term_p_53;
  t = c_13(v_74, x_74, t);
  t = term_p_33;
  return(t);
}
static ATerm v_18 (ATerm t)
{
  t = term_q_53;
  return(t);
}
static ATerm x_18 (ATerm t)
{
  ATerm y_74 = NULL;
  y_74 = t;
  if(match_string(t, "--warning"))
    {
      t = y_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = y_74;
    }
  return(t);
}
static ATerm y_18 (ATerm t)
{
  ATerm z_74 = NULL;
  z_74 = t;
  {
    ATerm r_53 = t;
    int s_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_75 = NULL,b_75 = NULL,e_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL,l_75 = NULL,e_8 = NULL;
        t = term_c_21;
        e_75 = t;
        t = term_w_30;
        g_75 = t;
        t = term_x_30;
        t = x_12(e_75, g_75, t);
        l_75 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_75 = ATgetFirst((ATermList) t);
            j_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_75);
        h_75 = t;
        t = i_75;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = j_75;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(j_75), i_75);
        e_8 = t;
        t = SSLsetAnnotations(e_8, h_75);
        t = term_w_30;
        a_75 = t;
        t = (ATerm) ATinsert(ATempty, z_74);
        b_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_30, (ATerm) ATinsert(ATempty, z_74));
        t = c_13(a_75, b_75, t);
        LocalPopChoice(s_53);
      }
    else
      {
        t = r_53;
        {
          ATerm m_75 = NULL,z_75 = NULL;
          t = term_w_30;
          m_75 = t;
          t = (ATerm) ATinsert(ATempty, z_74);
          z_75 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_30, (ATerm) ATinsert(ATempty, z_74));
          t = h_12(m_75, z_75, t);
        }
      }
  }
  t = term_p_33;
  return(t);
}
static ATerm z_18 (ATerm t)
{
  t = term_w_53;
  return(t);
}
static ATerm b_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm b_76 = NULL,d_76 = NULL,r_76 = NULL;
  b_76 = t;
  t = term_r_31;
  d_76 = t;
  t = term_l_21;
  r_76 = t;
  t = term_x_53;
  t = c_13(d_76, r_76, t);
  t = b_76;
  return(t);
}
static ATerm d_19 (ATerm t)
{
  t = term_r_31;
  return(t);
}
static ATerm e_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_19 (ATerm t)
{
  ATerm t_76 = NULL,v_76 = NULL,w_76 = NULL;
  t_76 = t;
  t = term_t_31;
  v_76 = t;
  t = term_x_34;
  w_76 = t;
  t = term_z_53;
  t = c_13(v_76, w_76, t);
  t = t_76;
  return(t);
}
static ATerm h_19 (ATerm t)
{
  t = term_t_31;
  return(t);
}
static ATerm i_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm z_76 = NULL,c_77 = NULL;
  t = term_h_36;
  z_76 = t;
  t = term_p_33;
  c_77 = t;
  t = term_a_54;
  t = c_13(z_76, c_77, t);
  t = term_p_33;
  return(t);
}
static ATerm k_19 (ATerm t)
{
  t = term_f_54;
  return(t);
}
ATerm strc_options_0_0 (ATerm t)
{
  ATerm g_54 = t;
  int h_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(h_54);
    }
  else
    {
      t = g_54;
      {
        ATerm i_54 = t;
        int j_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(j_54);
          }
        else
          {
            t = i_54;
            {
              ATerm k_54 = t;
              int n_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(k_14, l_14, m_14, t);
                  LocalPopChoice(n_54);
                }
              else
                {
                  t = k_54;
                  {
                    ATerm o_54 = t;
                    int q_54 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(n_14, o_14, p_14, t);
                        LocalPopChoice(q_54);
                      }
                    else
                      {
                        t = o_54;
                        {
                          ATerm r_54 = t;
                          int s_54 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(s_14, t_14, b_15, t);
                              LocalPopChoice(s_54);
                            }
                          else
                            {
                              t = r_54;
                              {
                                ATerm t_54 = t;
                                int u_54 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(f_15, h_15, i_15, t);
                                    LocalPopChoice(u_54);
                                  }
                                else
                                  {
                                    t = t_54;
                                    {
                                      ATerm v_54 = t;
                                      int w_54 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(j_15, k_15, l_15, t);
                                          LocalPopChoice(w_54);
                                        }
                                      else
                                        {
                                          t = v_54;
                                          {
                                            ATerm x_54 = t;
                                            int y_54 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(o_15, q_15, r_15, t);
                                                LocalPopChoice(y_54);
                                              }
                                            else
                                              {
                                                t = x_54;
                                                {
                                                  ATerm a_55 = t;
                                                  int b_55 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = ArgOption_3_0(s_15, v_15, w_15, t);
                                                      LocalPopChoice(b_55);
                                                    }
                                                  else
                                                    {
                                                      t = a_55;
                                                      {
                                                        ATerm c_55 = t;
                                                        int d_55 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = ArgOption_3_0(a_16, c_16, f_16, t);
                                                            LocalPopChoice(d_55);
                                                          }
                                                        else
                                                          {
                                                            t = c_55;
                                                            {
                                                              ATerm g_55 = t;
                                                              int j_55 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = ArgOption_3_0(h_16, l_16, m_16, t);
                                                                  LocalPopChoice(j_55);
                                                                }
                                                              else
                                                                {
                                                                  t = g_55;
                                                                  {
                                                                    ATerm k_55 = t;
                                                                    int q_55 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(o_16, p_16, q_16, t);
                                                                        LocalPopChoice(q_55);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = k_55;
                                                                        {
                                                                          ATerm r_55 = t;
                                                                          int s_55 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Option_3_0(r_16, s_16, t_16, t);
                                                                              LocalPopChoice(s_55);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = r_55;
                                                                              {
                                                                                ATerm v_55 = t;
                                                                                int w_55 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(u_16, v_16, x_16, t);
                                                                                    LocalPopChoice(w_55);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_55;
                                                                                    {
                                                                                      ATerm y_55 = t;
                                                                                      int z_55 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Option_3_0(y_16, z_16, a_17, t);
                                                                                          LocalPopChoice(z_55);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_55;
                                                                                          {
                                                                                            ATerm b_56 = t;
                                                                                            int c_56 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = ArgOption_3_0(c_17, d_17, e_17, t);
                                                                                                LocalPopChoice(c_56);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = b_56;
                                                                                                {
                                                                                                  ATerm j_56 = t;
                                                                                                  int k_56 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = ArgOption_3_0(f_17, g_17, i_17, t);
                                                                                                      LocalPopChoice(k_56);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = j_56;
                                                                                                      {
                                                                                                        ATerm m_56 = t;
                                                                                                        int q_56 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(j_17, p_17, u_17, t);
                                                                                                            LocalPopChoice(q_56);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = m_56;
                                                                                                            {
                                                                                                              ATerm t_56 = t;
                                                                                                              int v_56 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = ArgOption_3_0(v_17, x_17, y_17, t);
                                                                                                                  LocalPopChoice(v_56);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = t_56;
                                                                                                                  {
                                                                                                                    ATerm w_56 = t;
                                                                                                                    int y_56 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = ArgOption_3_0(z_17, a_18, b_18, t);
                                                                                                                        LocalPopChoice(y_56);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = w_56;
                                                                                                                        {
                                                                                                                          ATerm z_56 = t;
                                                                                                                          int a_57 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm k_74 = NULL;
                                                                                                                              k_74 = t;
                                                                                                                              t = term_b_53;
                                                                                                                              t = xtc_find_silent_0_0(t);
                                                                                                                              t = k_74;
                                                                                                                              t = Option_3_0(c_18, e_18, f_18, t);
                                                                                                                              LocalPopChoice(a_57);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = z_56;
                                                                                                                              {
                                                                                                                                ATerm c_57 = t;
                                                                                                                                int g_57 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = verbose_option_0_0(t);
                                                                                                                                    LocalPopChoice(g_57);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = c_57;
                                                                                                                                    {
                                                                                                                                      ATerm i_57 = t;
                                                                                                                                      int o_57 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = Option_3_0(g_18, h_18, i_18, t);
                                                                                                                                          LocalPopChoice(o_57);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = i_57;
                                                                                                                                          {
                                                                                                                                            ATerm p_57 = t;
                                                                                                                                            int q_57 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                t = Option_3_0(k_18, n_18, q_18, t);
                                                                                                                                                LocalPopChoice(q_57);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = p_57;
                                                                                                                                                {
                                                                                                                                                  ATerm s_57 = t;
                                                                                                                                                  int u_57 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = Option_3_0(t_18, u_18, v_18, t);
                                                                                                                                                      LocalPopChoice(u_57);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = s_57;
                                                                                                                                                      {
                                                                                                                                                        ATerm v_57 = t;
                                                                                                                                                        int w_57 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            t = ArgOption_3_0(x_18, y_18, z_18, t);
                                                                                                                                                            LocalPopChoice(w_57);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = v_57;
                                                                                                                                                            {
                                                                                                                                                              ATerm y_57 = t;
                                                                                                                                                              int z_57 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = Option_3_0(b_19, c_19, d_19, t);
                                                                                                                                                                  LocalPopChoice(z_57);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = y_57;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm e_58 = t;
                                                                                                                                                                    int f_58 = stack_ptr;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        t = Option_3_0(e_19, f_19, h_19, t);
                                                                                                                                                                        LocalPopChoice(f_58);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = e_58;
                                                                                                                                                                        t = Option_3_0(i_19, j_19, k_19, t);
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
static ATerm u_12 (ATerm b_62, ATerm c_62, ATerm t)
{
  ATerm e_77 = NULL;
  t = SSL_hashtable_remove(c_62, b_62);
  e_77 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_77);
  return(t);
}
static ATerm v_12 (ATerm g_62, ATerm t)
{
  ATerm l_77 = NULL;
  t = SSL_hashtable_destroy(g_62);
  l_77 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_77);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm m_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL;
  m_77 = t;
  t = table_hashtable_0_0(t);
  u_77 = t;
  t = lookup_table_0_1(m_77, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_12(w_77, t);
  t = u_77;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_12(m_77, v_77, t);
  t = m_77;
  return(t);
}
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_58), term_r_42), term_v_58), term_t_58), term_s_58), term_r_42), term_r_58), term_p_58), term_o_58), term_n_58), term_m_58), term_j_58), term_i_58), term_h_58), term_g_58);
  return(t);
}
ATerm map_1_0 (ATerm d_112 (ATerm), ATerm t)
{
  static ATerm r_78 (ATerm t);
  static ATerm r_78 (ATerm t)
  {
    ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
    o_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_78;
      }
    else
      {
        ATerm x_26 = NULL,c_27 = NULL,d_27 = NULL,g_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_78 = ATgetFirst((ATermList) t);
            q_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_78);
        x_26 = t;
        t = p_78;
        t = d_112(t);
        c_27 = t;
        t = q_78;
        t = r_78(t);
        d_27 = t;
        t = (ATerm) ATinsert(CheckATermList(d_27), c_27);
        g_8 = t;
        t = SSLsetAnnotations(g_8, x_26);
      }
    return(t);
  }
  t = r_78(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm w_78 = NULL,x_78 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_78 = ATgetFirst((ATermList) t);
      x_78 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_79 = NULL,h_79 = NULL;
        static ATerm l_19 (ATerm t);
        static ATerm l_19 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_79)), not_null(h_79));
          return(t);
        }
        t = x_78;
        t = l_0(t);
        if(((g_79 != NULL) && (g_79 != t)))
          _fail(t);
        else
          g_79 = t;
        t = w_78;
        t = j_0(t);
        if(((h_79 != NULL) && (h_79 != t)))
          _fail(t);
        else
          h_79 = t;
        t = x_78;
        t = reverse_acc_2_0(j_0, l_19, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_33;
      t = l_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm h_0 (ATerm), ATerm t)
{
  ATerm i_79 = NULL;
  t = term_p_33;
  t = h_0(t);
  i_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_59), i_79), term_h_59), term_r_42), term_g_59), term_r_42), term_f_59), term_e_59), term_r_42), term_c_59);
  return(t);
}
static ATerm p_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_19 (ATerm t)
{
  ATerm z_79 = NULL;
  z_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_79), term_m_59);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL;
  ATerm n_59 = t;
  int o_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_79 = NULL,s_79 = NULL;
      t = term_c_21;
      r_79 = t;
      t = term_q_59;
      s_79 = t;
      t = term_x_59;
      t = x_12(r_79, s_79, t);
      o_79 = t;
      LocalPopChoice(o_59);
    }
  else
    {
      t = n_59;
      {
        static ATerm m_19 (ATerm t);
        static ATerm m_19 (ATerm t)
        {
          ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL,i_8 = NULL;
          v_79 = t;
          if(match_cons(t, sym_Program_1))
            {
              u_79 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_79);
          t_79 = t;
          t = u_79;
          if(((o_79 != NULL) && (o_79 != t)))
            _fail(t);
          else
            o_79 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, u_79);
          i_8 = t;
          t = SSLsetAnnotations(i_8, t_79);
          return(t);
        }
        t = fetch_1_0(m_19, t);
      }
    }
  {
    ATerm y_59 = t;
    int c_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_19 (ATerm t);
        static ATerm o_19 (ATerm t)
        {
          t = not_null(o_79);
          return(t);
        }
        t = short_description_1_0(o_19, t);
        t = echo_0_0(t);
        LocalPopChoice(c_60);
      }
    else
      {
        t = y_59;
      }
  }
  t = term_f_60;
  t = echo_0_0(t);
  t = term_x_44;
  p_79 = t;
  t = term_z_44;
  q_79 = t;
  t = term_g_60;
  t = x_12(p_79, q_79, t);
  t = reverse_acc_2_0(_id, p_19, t);
  t = map_1_0(q_19, t);
  {
    ATerm h_60 = t;
    int i_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_80 = NULL;
        static ATerm r_19 (ATerm t);
        static ATerm r_19 (ATerm t)
        {
          t = not_null(o_79);
          return(t);
        }
        t = long_description_1_0(r_19, t);
        a_80 = t;
        t = (ATerm) ATinsert(CheckATermList(a_80), term_r_42);
        t = echo_0_0(t);
        LocalPopChoice(i_60);
      }
    else
      {
        t = h_60;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm n_112 (ATerm), ATerm t)
{
  static ATerm z_80 (ATerm t);
  static ATerm z_80 (ATerm t)
  {
    ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL;
    w_80 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_80 = ATgetFirst((ATermList) t);
        y_80 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_60 = t;
      int q_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_27 = NULL,a_28 = NULL,k_8 = NULL;
          t = SSLgetAnnotations(w_80);
          x_27 = t;
          t = x_80;
          t = n_112(t);
          a_28 = t;
          t = (ATerm) ATinsert(CheckATermList(y_80), a_28);
          k_8 = t;
          t = SSLsetAnnotations(k_8, x_27);
          LocalPopChoice(q_60);
        }
      else
        {
          t = p_60;
          {
            ATerm t_28 = NULL,a_29 = NULL,o_8 = NULL;
            t = SSLgetAnnotations(w_80);
            t_28 = t;
            t = y_80;
            t = z_80(t);
            a_29 = t;
            t = (ATerm) ATinsert(CheckATermList(a_29), x_80);
            o_8 = t;
            t = SSLsetAnnotations(o_8, t_28);
          }
        }
    }
    return(t);
  }
  t = z_80(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL;
  d_81 = t;
  {
    ATerm u_60 = t;
    int y_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_81;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_60 = ATgetFirst((ATermList) t);
                ATerm a_61 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_81;
          }
        LocalPopChoice(y_60);
      }
    else
      {
        t = u_60;
        t = (ATerm) ATinsert(ATempty, d_81);
      }
  }
  e_81 = t;
  t = term_s_34;
  f_81 = t;
  t = SSL_printnl(f_81, e_81);
  t = d_81;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL;
  t = term_c_21;
  j_81 = t;
  t = term_q_59;
  k_81 = t;
  t = term_x_59;
  t = x_12(j_81, k_81, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm s_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_19 (ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL;
  t = term_b_61;
  l_81 = t;
  t = term_p_33;
  m_81 = t;
  t = term_d_61;
  t = c_13(l_81, m_81, t);
  return(t);
}
static ATerm v_19 (ATerm t)
{
  t = term_e_61;
  return(t);
}
static ATerm z_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_20 (ATerm t)
{
  ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL;
  t = term_b_61;
  p_81 = t;
  t = term_p_33;
  q_81 = t;
  t = term_d_61;
  t = c_13(p_81, q_81, t);
  t = term_o_53;
  n_81 = t;
  t = term_p_33;
  o_81 = t;
  t = term_p_53;
  t = c_13(n_81, o_81, t);
  t = term_f_61;
  return(t);
}
static ATerm d_20 (ATerm t)
{
  t = term_g_61;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_61 = t;
  int i_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_19, u_19, v_19, t);
      LocalPopChoice(i_61);
    }
  else
    {
      t = h_61;
      t = Option_3_0(z_19, c_20, d_20, t);
    }
  return(t);
}
static ATerm y_12 (ATerm e_57, ATerm f_57, ATerm d_57, ATerm t)
{
  ATerm s_81 = NULL,t_81 = NULL,u_81 = NULL,v_81 = NULL,w_81 = NULL;
  s_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_57, f_57);
  {
    ATerm j_61 = t;
    int k_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_61 = ATgetArgument(t, 0);
            ATerm m_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_57, f_57);
        t = x_12(e_57, f_57, t);
        LocalPopChoice(k_61);
      }
    else
      {
        t = j_61;
        t = (ATerm) ATempty;
      }
  }
  t_81 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_57, f_57, (ATerm) ATinsert(CheckATermList(t_81), d_57));
  t = lookup_table_0_1(e_57, t);
  w_81 = t;
  t = (ATerm) ATinsert(CheckATermList(t_81), d_57);
  u_81 = t;
  t = w_81;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13(f_57, u_81, v_81, t);
  t = s_81;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_82 = NULL,f_82 = NULL,g_82 = NULL;
      t = term_p_33;
      t = g_0(t);
      e_82 = t;
      t = term_x_44;
      f_82 = t;
      t = term_z_44;
      g_82 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_44, term_z_44, e_82);
      t = y_12(f_82, g_82, e_82, t);
      _fail(t);
    }
  else
    {
      ATerm j_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_82 = ATgetFirst((ATermList) t);
          d_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_82;
      t = d_0(t);
      t = term_p_33;
      t = f_0(t);
      j_82 = t;
      t = (ATerm) ATinsert(CheckATermList(d_82), j_82);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL,f_9 = NULL;
  p_82 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_82 = ATgetFirst((ATermList) t);
      m_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_82);
  k_82 = t;
  t = l_82;
  t = l_83(t);
  n_82 = t;
  t = m_82;
  t = m_83(t);
  o_82 = t;
  t = (ATerm) ATinsert(CheckATermList(o_82), n_82);
  f_9 = t;
  t = SSLsetAnnotations(f_9, k_82);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_132 (ATerm), ATerm t)
{
  ATerm u_82 = NULL,v_82 = NULL,w_82 = NULL,x_82 = NULL,z_82 = NULL,a_83 = NULL,k_9 = NULL;
  u_82 = t;
  {
    ATerm n_61 = t;
    int o_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_61;
        t = o_132(t);
        LocalPopChoice(o_61);
      }
    else
      {
        t = n_61;
      }
  }
  t = u_82;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_82 = ATgetFirst((ATermList) t);
      x_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_82);
  v_82 = t;
  t = term_q_59;
  a_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_59, w_82);
  t = c_13(a_83, w_82, t);
  t = x_82;
  {
    static ATerm k_83 (ATerm t);
    static ATerm k_83 (ATerm t)
    {
      ATerm q_61 = t;
      int r_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_61 = t;
          int t_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_83 = NULL;
              d_83 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_83;
              LocalPopChoice(t_61);
            }
          else
            {
              t = s_61;
              t = o_132(t);
              t = Cons_2_0(_id, k_83, t);
            }
          LocalPopChoice(r_61);
        }
      else
        {
          t = q_61;
          {
            ATerm g_83 = NULL,h_83 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_83 = ATgetFirst((ATermList) t);
                h_83 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_83), (ATerm) ATmakeAppl(sym_Undefined_1, g_83));
          }
        }
      return(t);
    }
    t = k_83(t);
  }
  z_82 = t;
  t = (ATerm) ATinsert(CheckATermList(z_82), (ATerm) ATmakeAppl(sym_Program_1, w_82));
  k_9 = t;
  t = SSLsetAnnotations(k_9, v_82);
  return(t);
}
static ATerm f_20 (ATerm t)
{
  ATerm z_83 = NULL;
  z_83 = t;
  if(match_string(t, "--help"))
    {
      t = z_83;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_83;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_83;
        }
    }
  return(t);
}
static ATerm g_20 (ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL;
  t = term_h_53;
  a_84 = t;
  t = term_p_33;
  b_84 = t;
  t = term_j_53;
  t = c_13(a_84, b_84, t);
  t = term_u_61;
  return(t);
}
static ATerm h_20 (ATerm t)
{
  t = term_v_61;
  return(t);
}
static ATerm j_20 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_132 (ATerm), ATerm t)
{
  ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL;
  t_83 = t;
  t = term_x_44;
  u_83 = t;
  t = term_h_62;
  t = lookup_table_0_1(u_83, t);
  y_83 = t;
  t = term_z_44;
  v_83 = t;
  t = (ATerm) ATempty;
  w_83 = t;
  t = y_83;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13(v_83, w_83, x_83, t);
  t = t_83;
  {
    static ATerm e_20 (ATerm t);
    static ATerm e_20 (ATerm t)
    {
      ATerm j_62 = t;
      int k_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_132(t);
          LocalPopChoice(k_62);
        }
      else
        {
          t = j_62;
          {
            ATerm l_62 = t;
            int m_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_20, g_20, h_20, t);
                LocalPopChoice(m_62);
              }
            else
              {
                t = l_62;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_20, t);
  }
  {
    ATerm p_62 = t;
    int q_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_84 = NULL;
        m_84 = t;
        {
          ATerm r_62 = t;
          int t_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_29 = NULL;
              t = m_84;
              {
                ATerm u_62 = t;
                int v_62 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_29 = NULL,t_29 = NULL;
                    t = term_c_21;
                    s_29 = t;
                    t = term_h_53;
                    t_29 = t;
                    t = term_x_62;
                    t = x_12(s_29, t_29, t);
                    LocalPopChoice(v_62);
                  }
                else
                  {
                    t = u_62;
                    t = fetch_1_0(j_20, t);
                  }
              }
              t = m_84;
              t = default_system_usage_0_0(t);
              t = term_x_34;
              o_29 = t;
              t = SSL_exit(o_29);
              LocalPopChoice(t_62);
            }
          else
            {
              t = r_62;
              {
                ATerm x_29 = NULL,e_30 = NULL,f_30 = NULL;
                t = term_c_21;
                e_30 = t;
                t = term_b_61;
                f_30 = t;
                t = term_z_62;
                t = x_12(e_30, f_30, t);
                t = m_84;
                t = default_system_about_0_0(t);
                t = term_x_34;
                x_29 = t;
                t = SSL_exit(x_29);
              }
            }
        }
        LocalPopChoice(q_62);
      }
    else
      {
        t = p_62;
        {
          ATerm a_63 = t;
          int c_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_84 = NULL,o_84 = NULL,p_84 = NULL;
              static ATerm k_20 (ATerm t);
              static ATerm k_20 (ATerm t)
              {
                ATerm q_84 = NULL,r_84 = NULL,s_84 = NULL,q_9 = NULL;
                s_84 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_84 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_84);
                q_84 = t;
                t = r_84;
                if(((r_83 != NULL) && (r_83 != t)))
                  _fail(t);
                else
                  r_83 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_84);
                q_9 = t;
                t = SSLsetAnnotations(q_9, q_84);
                return(t);
              }
              t = fetch_1_0(k_20, t);
              t = term_y_20;
              o_84 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_83)), term_g_63);
              p_84 = t;
              t = SSL_printnl(o_84, p_84);
              t = (ATerm) ATmakeAppl(sym__2, term_y_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_83)), term_g_63));
              t = default_system_usage_0_0(t);
              t = term_l_21;
              n_84 = t;
              t = SSL_exit(n_84);
              LocalPopChoice(c_63);
            }
          else
            {
              t = a_63;
            }
        }
      }
  }
  s_83 = t;
  t = term_x_44;
  t = table_destroy_0_0(t);
  t = s_83;
  return(t);
}
static ATerm a_13 (ATerm w_61, ATerm x_61, ATerm y_61, ATerm t)
{
  ATerm x_84 = NULL;
  t = SSL_hashtable_put(y_61, w_61, x_61);
  x_84 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_84);
  return(t);
}
static ATerm b_13 (ATerm z_61, ATerm a_62, ATerm t)
{
  t = SSL_hashtable_get(a_62, z_61);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm e_62, ATerm f_62, ATerm t)
{
  ATerm y_84 = NULL;
  t = SSL_hashtable_create(e_62, f_62);
  y_84 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_84);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL,d_85 = NULL,e_85 = NULL;
  z_84 = t;
  t = term_i_63;
  d_85 = t;
  t = term_l_63;
  e_85 = t;
  t = z_84;
  t = new_hashtable_0_2(d_85, e_85, t);
  a_85 = t;
  t = z_84;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13(z_84, a_85, b_85, t);
  t = z_84;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_85 = NULL;
  t = SSL_table_hashtable();
  f_85 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_85);
  return(t);
}
ATerm lookup_table_0_1 (ATerm q_58, ATerm t)
{
  ATerm o_85 = NULL;
  t = table_hashtable_0_0(t);
  o_85 = t;
  {
    ATerm m_63 = t;
    int n_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_30 = NULL;
        t = o_85;
        if(match_cons(t, sym_Hashtable_1))
          {
            p_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_13(q_58, p_30, t);
        LocalPopChoice(n_63);
      }
    else
      {
        t = m_63;
        {
          ATerm u_30 = NULL;
          t = q_58;
          t = table_create_0_0(t);
          t = o_85;
          if(match_cons(t, sym_Hashtable_1))
            {
              u_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_13(q_58, u_30, t);
        }
      }
  }
  return(t);
}
static ATerm c_13 (ATerm v_70, ATerm w_70, ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL;
  t = term_c_21;
  r_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_21, v_70, w_70);
  t = lookup_table_0_1(r_85, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13(v_70, w_70, s_85, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_21, v_70, w_70);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm x_85 = NULL,y_85 = NULL;
  y_85 = t;
  t = SSL_explode_string(y_85);
  {
    ATerm o_63 = t;
    int p_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_86 (ATerm t);
        static ATerm q_86 (ATerm t)
        {
          ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL;
          n_86 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_86 = ATgetFirst((ATermList) t);
              p_86 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm r_63 = t;
            int w_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_30 = NULL,c_31 = NULL,c_12 = NULL;
                t = SSLgetAnnotations(n_86);
                z_30 = t;
                t = p_86;
                t = q_86(t);
                c_31 = t;
                t = (ATerm) ATinsert(CheckATermList(c_31), o_86);
                c_12 = t;
                t = SSLsetAnnotations(c_12, z_30);
                LocalPopChoice(w_63);
              }
            else
              {
                t = r_63;
                {
                  ATerm j_31 = NULL,j_12 = NULL;
                  t = SSLgetAnnotations(n_86);
                  j_31 = t;
                  t = o_86;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, o_86);
                  j_12 = t;
                  t = SSLsetAnnotations(j_12, j_31);
                }
              }
          }
          return(t);
        }
        t = q_86(t);
        LocalPopChoice(p_63);
      }
    else
      {
        t = o_63;
        t = (ATerm) ATempty;
      }
  }
  x_85 = t;
  t = SSL_implode_string(x_85);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
static ATerm d_13 (ATerm b_50, ATerm c_50, ATerm t)
{
  t = SSL_strcat(b_50, c_50);
  return(t);
}
ATerm init_strc_config_0_0 (ATerm t)
{
  ATerm t_86 = NULL,u_86 = NULL,v_86 = NULL,w_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  t_86 = t;
  t = term_d_42;
  f_88 = t;
  t = term_y_63;
  g_88 = t;
  t = term_a_64;
  t = c_13(f_88, g_88, t);
  t = term_h_21;
  d_88 = t;
  t = term_l_21;
  e_88 = t;
  t = term_b_64;
  t = c_13(d_88, e_88, t);
  t = term_d_21;
  b_88 = t;
  t = term_x_34;
  c_88 = t;
  t = term_e_64;
  t = c_13(b_88, c_88, t);
  t = term_r_52;
  z_87 = t;
  t = term_i_23;
  a_88 = t;
  t = term_f_64;
  t = c_13(z_87, a_88, t);
  t = term_t_35;
  x_87 = t;
  t = (ATerm) ATempty;
  y_87 = t;
  t = term_h_64;
  t = c_13(x_87, y_87, t);
  t = term_e_51;
  v_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_64), term_j_64);
  w_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_51, (ATerm) ATinsert(ATinsert(ATempty, term_l_64), term_j_64));
  t = c_13(v_87, w_87, t);
  t = term_v_64;
  t = xtc_find_path_0_0(t);
  f_87 = t;
  t = term_w_64;
  u_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_87, term_w_64);
  t = d_13(f_87, u_87, t);
  z_86 = t;
  t = term_v_64;
  t = xtc_find_path_0_0(t);
  d_87 = t;
  t = term_w_64;
  t_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_87, term_w_64);
  t = d_13(d_87, t_87, t);
  a_87 = t;
  t = term_x_64;
  t = xtc_find_path_0_0(t);
  c_87 = t;
  t = term_w_64;
  s_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_87, term_w_64);
  t = d_13(c_87, s_87, t);
  b_87 = t;
  t = term_h_51;
  q_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_87), term_t_35), a_87), term_t_35), z_86), term_t_35);
  r_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_51, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_87), term_t_35), a_87), term_t_35), z_86), term_t_35));
  t = c_13(q_87, r_87, t);
  t = term_v_64;
  t = xtc_find_path_0_0(t);
  y_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_64), y_86), term_r_51);
  p_87 = t;
  t = SSL_concat_strings(p_87);
  u_86 = t;
  t = term_x_64;
  t = xtc_find_path_0_0(t);
  w_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_64), w_86), term_r_51);
  o_87 = t;
  t = SSL_concat_strings(o_87);
  v_86 = t;
  t = term_o_45;
  m_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_65), term_d_65), v_86), term_c_65), term_b_65), term_a_65), u_86);
  n_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_45, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_65), term_d_65), v_86), term_c_65), term_b_65), term_a_65), u_86));
  t = c_13(m_87, n_87, t);
  t = term_m_51;
  k_87 = t;
  t = (ATerm) ATempty;
  l_87 = t;
  t = term_g_65;
  t = c_13(k_87, l_87, t);
  t = term_v_31;
  i_87 = t;
  t = term_h_65;
  j_87 = t;
  t = term_i_65;
  t = c_13(i_87, j_87, t);
  t = term_w_30;
  g_87 = t;
  t = (ATerm) ATinsert(ATempty, term_j_65);
  h_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_30, (ATerm) ATinsert(ATempty, term_j_65));
  t = c_13(g_87, h_87, t);
  t = t_86;
  return(t);
}
static ATerm l_20 (ATerm t)
{
  ATerm c_89 = NULL,d_89 = NULL,e_89 = NULL;
  c_89 = t;
  t = term_c_21;
  d_89 = t;
  t = term_r_30;
  e_89 = t;
  t = term_k_65;
  t = x_12(d_89, e_89, t);
  t = debug_1_0(m_20, t);
  t = c_89;
  return(t);
}
static ATerm m_20 (ATerm t)
{
  t = term_l_65;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_strc_config_0_0(t);
  t = parse_options_1_0(strc_options_0_0, t);
  {
    ATerm m_65 = t;
    int o_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL,n_88 = NULL;
        t = term_c_21;
        m_88 = t;
        t = term_l_53;
        n_88 = t;
        t = term_p_65;
        t = x_12(m_88, n_88, t);
        t = term_s_65;
        t = xtc_find_0_0(t);
        j_88 = t;
        t = term_s_34;
        l_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_88, term_s_34);
        t = f_12(j_88, l_88, t);
        t = term_x_34;
        k_88 = t;
        t = SSL_exit(k_88);
        LocalPopChoice(o_65);
      }
    else
      {
        t = m_65;
      }
  }
  {
    ATerm t_65 = t;
    int u_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_88 = NULL,r_88 = NULL,s_88 = NULL;
        t = term_c_21;
        r_88 = t;
        t = term_o_53;
        s_88 = t;
        t = term_v_65;
        t = x_12(r_88, s_88, t);
        t = strc_version_0_0(t);
        t = term_x_34;
        q_88 = t;
        t = SSL_exit(q_88);
        LocalPopChoice(u_65);
      }
    else
      {
        t = t_65;
      }
  }
  {
    ATerm w_65 = t;
    int x_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_88 = NULL,x_88 = NULL,y_88 = NULL;
        v_88 = t;
        t = term_c_21;
        x_88 = t;
        t = term_r_30;
        y_88 = t;
        t = term_k_65;
        t = x_12(x_88, y_88, t);
        t = v_88;
        LocalPopChoice(x_65);
      }
    else
      {
        t = w_65;
        {
          ATerm z_88 = NULL,a_89 = NULL,b_89 = NULL;
          t = term_y_20;
          a_89 = t;
          t = (ATerm) ATinsert(ATempty, term_y_65);
          b_89 = t;
          t = SSL_printnl(a_89, b_89);
          t = term_l_21;
          z_88 = t;
          t = SSL_exit(z_88);
          t = (ATerm) ATinsert(ATempty, term_y_65);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(l_20, t);
  return(t);
}
static ATerm n_20 (ATerm t)
{
  ATerm z_65 = t;
  int a_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL;
      t = term_c_21;
      g_89 = t;
      t = term_r_30;
      h_89 = t;
      t = term_k_65;
      t = x_12(g_89, h_89, t);
      f_89 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_89);
      LocalPopChoice(a_66);
    }
  else
    {
      t = z_65;
      t = term_q_33;
    }
  t = front_end_0_0(t);
  return(t);
}
ATerm strc_pre_0_0 (ATerm t)
{
  t = command_line_options_0_0(t);
  t = xtc_temp_files_1_0(n_20, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_pre_0_0(t);
  return(t);
}
