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
Symbol sym_ErrorNumber_1;
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
  sym_ErrorNumber_1 = ATmakeSymbol("ErrorNumber", 1, ATfalse);
  ATprotectSymbol(sym_ErrorNumber_1);
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
ATerm term_k_89;
ATerm term_b_89;
ATerm term_a_89;
ATerm term_x_88;
ATerm term_t_88;
ATerm term_o_88;
ATerm term_h_88;
ATerm term_g_88;
ATerm term_d_88;
ATerm term_c_88;
ATerm term_b_88;
ATerm term_a_88;
ATerm term_z_87;
ATerm term_y_87;
ATerm term_h_87;
ATerm term_g_87;
ATerm term_c_87;
ATerm term_b_87;
ATerm term_x_86;
ATerm term_r_86;
ATerm term_q_86;
ATerm term_n_86;
ATerm term_m_86;
ATerm term_g_86;
ATerm term_t_85;
ATerm term_s_85;
ATerm term_h_85;
ATerm term_c_85;
ATerm term_b_85;
ATerm term_a_85;
ATerm term_y_84;
ATerm term_f_84;
ATerm term_e_84;
ATerm term_d_84;
ATerm term_a_84;
ATerm term_y_83;
ATerm term_r_82;
ATerm term_q_82;
ATerm term_p_82;
ATerm term_k_82;
ATerm term_y_81;
ATerm term_x_81;
ATerm term_v_81;
ATerm term_l_81;
ATerm term_j_81;
ATerm term_z_80;
ATerm term_y_80;
ATerm term_q_80;
ATerm term_n_80;
ATerm term_k_80;
ATerm term_j_80;
ATerm term_i_80;
ATerm term_g_80;
ATerm term_c_80;
ATerm term_b_80;
ATerm term_z_79;
ATerm term_w_79;
ATerm term_v_79;
ATerm term_u_79;
ATerm term_t_79;
ATerm term_q_79;
ATerm term_o_79;
ATerm term_n_79;
ATerm term_m_79;
ATerm term_h_79;
ATerm term_e_79;
ATerm term_d_79;
ATerm term_c_79;
ATerm term_a_79;
ATerm term_n_75;
ATerm term_j_75;
ATerm term_i_75;
ATerm term_h_75;
ATerm term_a_75;
ATerm term_w_74;
ATerm term_u_74;
ATerm term_s_74;
ATerm term_n_74;
ATerm term_l_74;
ATerm term_k_74;
ATerm term_j_74;
ATerm term_i_74;
ATerm term_h_74;
ATerm term_d_74;
ATerm term_b_74;
ATerm term_y_73;
ATerm term_x_73;
ATerm term_w_73;
ATerm term_v_73;
ATerm term_s_73;
ATerm term_r_73;
ATerm term_q_73;
ATerm term_p_73;
ATerm term_o_73;
ATerm term_n_73;
ATerm term_m_73;
ATerm term_l_73;
ATerm term_k_73;
ATerm term_j_73;
ATerm term_e_73;
ATerm term_c_73;
ATerm term_b_73;
ATerm term_a_73;
ATerm term_l_72;
ATerm term_k_72;
ATerm term_j_72;
ATerm term_i_72;
ATerm term_h_72;
ATerm term_g_72;
ATerm term_f_72;
ATerm term_e_72;
ATerm term_a_72;
ATerm term_z_71;
ATerm term_w_71;
ATerm term_v_71;
ATerm term_m_71;
ATerm term_h_71;
ATerm term_g_71;
ATerm term_a_71;
ATerm term_y_70;
ATerm term_x_70;
ATerm term_w_70;
ATerm term_v_70;
ATerm term_s_70;
ATerm term_r_70;
ATerm term_k_70;
ATerm term_j_70;
ATerm term_e_70;
ATerm term_c_70;
ATerm term_a_70;
ATerm term_z_69;
ATerm term_s_69;
ATerm term_p_69;
ATerm term_o_69;
ATerm term_n_69;
ATerm term_m_69;
ATerm term_x_66;
ATerm term_s_66;
ATerm term_q_66;
ATerm term_p_66;
ATerm term_o_66;
ATerm term_l_66;
ATerm term_j_66;
ATerm term_f_66;
ATerm term_d_66;
ATerm term_c_66;
ATerm term_b_66;
ATerm term_a_66;
ATerm term_d_64;
ATerm term_c_64;
ATerm term_z_63;
ATerm term_x_63;
ATerm term_w_63;
ATerm term_v_63;
ATerm term_r_63;
ATerm term_p_63;
ATerm term_o_63;
ATerm term_n_63;
ATerm term_m_63;
ATerm term_l_63;
ATerm term_k_63;
ATerm term_j_63;
ATerm term_i_63;
ATerm term_h_63;
ATerm term_g_63;
ATerm term_b_63;
ATerm term_e_62;
ATerm term_u_61;
ATerm term_o_61;
ATerm term_n_61;
ATerm term_e_61;
ATerm term_d_61;
ATerm term_z_60;
ATerm term_w_60;
ATerm term_r_60;
ATerm term_o_60;
ATerm term_m_60;
ATerm term_l_60;
ATerm term_k_60;
ATerm term_e_60;
ATerm term_d_60;
ATerm term_a_60;
ATerm term_w_59;
ATerm term_e_59;
ATerm term_f_58;
ATerm term_e_58;
ATerm term_b_58;
ATerm term_a_58;
ATerm term_y_57;
ATerm term_x_57;
ATerm term_w_57;
ATerm term_v_57;
ATerm term_u_57;
ATerm term_t_57;
ATerm term_q_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_i_57;
ATerm term_g_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_d_56;
ATerm term_b_56;
ATerm term_a_56;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_c_55;
ATerm term_w_54;
ATerm term_j_54;
ATerm term_g_54;
ATerm term_f_54;
ATerm term_e_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_b_54;
ATerm term_u_53;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_o_53;
ATerm term_m_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_f_53;
ATerm term_e_53;
ATerm term_d_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_b_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_v_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_c_51;
ATerm term_z_50;
ATerm term_w_50;
ATerm term_u_50;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_n_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_r_49;
ATerm term_q_49;
ATerm term_o_49;
ATerm term_n_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_k_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_c_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_d_47;
ATerm term_a_47;
ATerm term_w_46;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_b_46;
ATerm term_q_45;
ATerm term_p_45;
ATerm term_i_45;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_d_45;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_a_43;
ATerm term_w_42;
ATerm term_u_42;
ATerm term_p_42;
ATerm term_n_42;
ATerm term_i_42;
ATerm term_b_42;
ATerm term_y_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_o_39;
ATerm term_m_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_s_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_k_37;
ATerm term_a_37;
ATerm term_w_36;
ATerm term_q_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_l_35;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_r_35);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_a_36);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_c_36);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_i_36);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_l_36);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_b_38);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_p_37);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_f_40);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_h_40);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_q_40);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_x_40);
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_i_43);
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".sci", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in `", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("', concrete syntax in `", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("'", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_47, term_x_38, term_x_47);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_47, term_t_35, term_a_48);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_48, term_i_39, term_d_48);
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_48, term_n_42, term_q_48);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_48, term_t_48, term_u_48);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_48, term_x_48, term_y_48);
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_49, term_b_49, term_c_49);
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_49, term_h_49, term_i_49);
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_49, term_l_49, term_m_49);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_49, term_q_49, term_r_49);
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_49, term_u_49, term_v_49);
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_49, term_i_42, term_y_49);
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_50, term_b_50, term_c_50);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_50, term_n_50, term_o_50);
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_50, term_r_50, term_s_50);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_50, term_z_50, term_c_51);
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_51, term_f_51, term_g_51);
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_51, term_m_51, term_n_51);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_51, term_v_51, term_x_51);
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_51, term_b_52, term_g_52);
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_52, term_k_52, term_l_52);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_52, term_p_52, term_q_52);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_52, term_w_52, term_x_52);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_52, term_d_53, term_e_53);
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_53, term_i_45, term_k_53);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_53, term_q_53, term_r_53);
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_53, term_b_54, term_c_54);
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_54, term_f_54, term_g_54);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_f_55);
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_l_55);
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_a_56);
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_f_56);
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_e_58);
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(sym__2, term_v_57, term_q_57);
  ATprotect(&(term_w_59));
  term_w_59 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_a_60);
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_k_60);
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_z_60);
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_n_61));
  term_n_61 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_u_61));
  term_u_61 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_e_62));
  term_e_62 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_b_63));
  term_b_63 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_g_63));
  term_g_63 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".renamed", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_w_63));
  term_w_63 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_x_63));
  term_x_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_d_64));
  term_d_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_c_66);
  ATprotect(&(term_f_66));
  term_f_66 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_j_66));
  term_j_66 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_l_66));
  term_l_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_o_66));
  term_o_66 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_66));
  term_p_66 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_q_66));
  term_q_66 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_s_66));
  term_s_66 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_x_66));
  term_x_66 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_m_69));
  term_m_69 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_69));
  term_n_69 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_p_69));
  term_p_69 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_69));
  term_s_69 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_69));
  term_z_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_70));
  term_c_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_70));
  term_e_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_70));
  term_j_70 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_70));
  term_k_70 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_70));
  term_r_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_70));
  term_s_70 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_r_70);
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_y_70));
  term_y_70 = (ATerm) ATmakeAppl(sym__2, term_j_70, term_x_70);
  ATprotect(&(term_a_71));
  term_a_71 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_71));
  term_g_71 = (ATerm) ATmakeAppl(sym__2, term_j_70, term_k_70);
  ATprotect(&(term_h_71));
  term_h_71 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_71));
  term_m_71 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_v_71));
  term_v_71 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_w_71));
  term_w_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_72));
  term_a_72 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeAppl(sym__2, term_r_35, term_l_35);
  ATprotect(&(term_f_72));
  term_f_72 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_35);
  ATprotect(&(term_g_72));
  term_g_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_72));
  term_i_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_72));
  term_j_72 = (ATerm) ATmakeAppl(sym__2, term_i_72, term_w_36);
  ATprotect(&(term_k_72));
  term_k_72 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_73));
  term_a_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_73));
  term_b_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_73));
  term_c_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_e_73));
  term_e_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_j_73));
  term_j_73 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_w_36);
  ATprotect(&(term_k_73));
  term_k_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_l_73));
  term_l_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_m_73));
  term_m_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(sym__2, term_l_36, term_w_36);
  ATprotect(&(term_p_73));
  term_p_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_q_73));
  term_q_73 = (ATerm) ATmakeAppl(sym__2, term_a_60, term_w_36);
  ATprotect(&(term_r_73));
  term_r_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_s_73));
  term_s_73 = (ATerm) ATmakeAppl(sym__2, term_l_55, term_w_36);
  ATprotect(&(term_v_73));
  term_v_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_w_73));
  term_w_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_x_73));
  term_x_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_y_73));
  term_y_73 = (ATerm) ATmakeAppl(sym__2, term_i_43, term_w_36);
  ATprotect(&(term_b_74));
  term_b_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_h_74));
  term_h_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_74));
  term_i_74 = (ATerm) ATmakeAppl(sym__2, term_h_74, term_w_36);
  ATprotect(&(term_j_74));
  term_j_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(sym__2, term_k_74, term_w_36);
  ATprotect(&(term_n_74));
  term_n_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_s_74));
  term_s_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_74));
  term_u_74 = (ATerm) ATmakeAppl(sym__2, term_s_74, term_w_36);
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_a_75));
  term_a_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_h_75));
  term_h_75 = (ATerm) ATmakeAppl(sym__2, term_a_56, term_x_38);
  ATprotect(&(term_i_75));
  term_i_75 = (ATerm) ATmakeAppl(sym__2, term_d_56, term_l_35);
  ATprotect(&(term_j_75));
  term_j_75 = (ATerm) ATmakeAppl(sym__2, term_z_60, term_w_36);
  ATprotect(&(term_n_75));
  term_n_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_a_79));
  term_a_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_c_79));
  term_c_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_d_79));
  term_d_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_e_79));
  term_e_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_h_79));
  term_h_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_n_79));
  term_n_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_q_79));
  term_q_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_t_79));
  term_t_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_v_79));
  term_v_79 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_z_79));
  term_z_79 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_b_80));
  term_b_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_c_80));
  term_c_80 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_g_80));
  term_g_80 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_i_80));
  term_i_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_j_80));
  term_j_80 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_k_80));
  term_k_80 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_80));
  term_n_80 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_80));
  term_q_80 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_n_80);
  ATprotect(&(term_y_80));
  term_y_80 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_80));
  term_z_80 = (ATerm) ATmakeAppl(sym__2, term_z_71, term_a_72);
  ATprotect(&(term_j_81));
  term_j_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_81));
  term_l_81 = (ATerm) ATmakeAppl(sym__2, term_j_81, term_w_36);
  ATprotect(&(term_v_81));
  term_v_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_81));
  term_x_81 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_81));
  term_y_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_82));
  term_k_82 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_82));
  term_p_82 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_82));
  term_q_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_82));
  term_r_82 = (ATerm) ATmakeAppl(sym__3, term_z_71, term_a_72, (ATerm) ATempty);
  ATprotect(&(term_y_83));
  term_y_83 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_h_74);
  ATprotect(&(term_a_84));
  term_a_84 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_j_81);
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_84));
  term_e_84 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_f_84));
  term_f_84 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_y_84));
  term_y_84 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.6pre", 0, ATtrue));
  ATprotect(&(term_a_85));
  term_a_85 = (ATerm) ATmakeAppl(sym__2, term_c_66, term_y_84);
  ATprotect(&(term_b_85));
  term_b_85 = (ATerm) ATmakeAppl(sym__2, term_r_35, term_x_38);
  ATprotect(&(term_c_85));
  term_c_85 = (ATerm) ATmakeAppl(sym__2, term_q_40, term_l_35);
  ATprotect(&(term_h_85));
  term_h_85 = (ATerm) ATmakeAppl(sym__2, term_x_40, term_n_42);
  ATprotect(&(term_s_85));
  term_s_85 = (ATerm) ATmakeAppl(sym__2, term_k_60, (ATerm) ATempty);
  ATprotect(&(term_t_85));
  term_t_85 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_g_86));
  term_g_86 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_m_86));
  term_m_86 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_n_86));
  term_n_86 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_q_86));
  term_q_86 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_r_86));
  term_r_86 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_x_86));
  term_x_86 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_b_87));
  term_b_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_c_87));
  term_c_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_g_87));
  term_g_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_h_87));
  term_h_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_y_87));
  term_y_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_z_87));
  term_z_87 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_a_88));
  term_a_88 = (ATerm) ATmakeAppl(sym__2, term_f_56, term_z_87);
  ATprotect(&(term_b_88));
  term_b_88 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_c_88));
  term_c_88 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_c_55);
  ATprotect(&(term_d_88));
  term_d_88 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_g_88));
  term_g_88 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_k_74);
  ATprotect(&(term_h_88));
  term_h_88 = (ATerm) ATmakeAppl(ATmakeSymbol("strc-manual.txt", 0, ATtrue));
  ATprotect(&(term_o_88));
  term_o_88 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_s_74);
  ATprotect(&(term_t_88));
  term_t_88 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_x_88));
  term_x_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_a_89));
  term_a_89 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_b_89));
  term_b_89 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_89));
  term_k_89 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm z_107 (ATerm), ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_13 (ATerm r_21, ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm j_13 (ATerm p_21, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm k_13 (ATerm m_44, ATerm l_44, ATerm t);
ATerm rename_to_1_0 (ATerm b_1 (ATerm), ATerm t);
ATerm ac2abox_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm s2c_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm back_end_0_0 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm export_external_defs_0_0 (ATerm t);
ATerm if_keep1_1_0 (ATerm a_109 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm bound_unbound_vars_0_0 (ATerm t);
ATerm dead_def_elim_0_0 (ATerm t);
ATerm if_keep4_1_0 (ATerm d_109 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm f_109 (ATerm), ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm f_18 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm u_18 (ATerm t);
static ATerm y_18 (ATerm t);
static ATerm c_19 (ATerm t);
ATerm save_as_1_0 (ATerm q_83 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm b_109 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm j_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm t);
static ATerm o_13 (ATerm d_49, ATerm e_49, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm l_109 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm b_118 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm d_21, ATerm e_21, ATerm t);
ATerm foldr_3_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm t);
static ATerm a_20 (ATerm t);
static ATerm h_20 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm i_20 (ATerm t);
static ATerm j_20 (ATerm t);
static ATerm m_20 (ATerm t);
static ATerm r_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm v_20 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm e_109 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm c_109 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm u_92 (ATerm), ATerm t);
static ATerm y_20 (ATerm t);
static ATerm b_21 (ATerm t);
static ATerm c_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm l_13 (ATerm j_21, ATerm k_21, ATerm t);
static ATerm m_13 (ATerm e_23, ATerm f_23, ATerm t);
static ATerm n_13 (ATerm z_91 (ATerm), ATerm j_196, ATerm o_23, ATerm t);
static ATerm q_13 (ATerm r_105 (ATerm), ATerm x_42, ATerm v_42, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm g_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm i_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm c_117 (ATerm), ATerm t);
static ATerm l_21 (ATerm t);
static ATerm m_21 (ATerm t);
static ATerm o_21 (ATerm t);
static ATerm q_21 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm v_21 (ATerm t);
static ATerm x_21 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm a_22 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm p_83 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm z_0 (ATerm), ATerm t);
static ATerm b_22 (ATerm t);
static ATerm e_22 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm a_108 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm g_103 (ATerm), ATerm t);
static ATerm g_22 (ATerm t);
static ATerm l_22 (ATerm t);
static ATerm o_22 (ATerm t);
static ATerm p_22 (ATerm t);
static ATerm r_13 (ATerm f_21, ATerm t);
static ATerm q_22 (ATerm t);
static ATerm s_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm u_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm y_22 (ATerm t);
static ATerm z_22 (ATerm t);
static ATerm a_23 (ATerm t);
static ATerm b_23 (ATerm t);
static ATerm g_23 (ATerm t);
static ATerm j_23 (ATerm t);
static ATerm l_23 (ATerm t);
static ATerm n_23 (ATerm t);
static ATerm p_23 (ATerm t);
static ATerm q_23 (ATerm t);
static ATerm s_23 (ATerm t);
static ATerm y_23 (ATerm t);
static ATerm z_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm d_24 (ATerm t);
static ATerm e_24 (ATerm t);
static ATerm f_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm k_24 (ATerm t);
static ATerm l_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm o_24 (ATerm t);
static ATerm q_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm s_24 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm u_24 (ATerm t);
static ATerm w_24 (ATerm t);
static ATerm y_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm c_25 (ATerm t);
static ATerm d_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm f_25 (ATerm t);
static ATerm j_25 (ATerm t);
static ATerm r_25 (ATerm t);
static ATerm s_25 (ATerm t);
static ATerm t_25 (ATerm t);
static ATerm v_25 (ATerm t);
static ATerm w_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm c_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm e_26 (ATerm t);
static ATerm f_26 (ATerm t);
static ATerm h_26 (ATerm t);
static ATerm i_26 (ATerm t);
static ATerm l_26 (ATerm t);
static ATerm m_26 (ATerm t);
static ATerm n_26 (ATerm t);
static ATerm o_26 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm p_14 (ATerm u_54, ATerm v_54, ATerm t);
static ATerm s_13 (ATerm g_53, ATerm h_53, ATerm t);
ATerm end_scope_1_0 (ATerm o_105 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_105 (ATerm), ATerm t);
static ATerm w_26 (ATerm t);
static ATerm y_26 (ATerm t);
static ATerm a_27 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm n_117 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm y_107 (ATerm), ATerm t);
static ATerm u_13 (ATerm j_41, ATerm k_41, ATerm t);
static ATerm w_13 (ATerm p_41, ATerm q_41, ATerm t);
static ATerm x_13 (ATerm d_50, ATerm f_50, ATerm h_50, ATerm j_50, ATerm e_50, ATerm g_50, ATerm i_50, ATerm k_50, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm x_91 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
static ATerm y_13 (ATerm n_44, ATerm o_44, ATerm t);
static ATerm z_13 (ATerm a_57, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm c_108 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm b_108 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm d_108 (ATerm), ATerm t);
static ATerm c_14 (ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm q_29, ATerm p_29, ATerm t);
static ATerm d_14 (ATerm t_96 (ATerm), ATerm m_29, ATerm l_29, ATerm t);
static ATerm g_27 (ATerm t);
static ATerm e_14 (ATerm y_53, ATerm z_53, ATerm a_54, ATerm t);
static ATerm f_14 (ATerm u_112 (ATerm), ATerm i_54, ATerm h_54, ATerm t);
static ATerm j_14 (ATerm g_38, ATerm h_38, ATerm t);
static ATerm d_73 (ATerm q_72, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_14 (ATerm k_23, ATerm t);
static ATerm h_14 (ATerm p_38, ATerm q_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm e_75 (ATerm t_73, ATerm t);
static ATerm f_75 (ATerm z_73, ATerm a_74, ATerm c_74, ATerm t);
static ATerm g_75 (ATerm o_74, ATerm p_74, ATerm q_74, ATerm t);
static ATerm i_14 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm i_27 (ATerm t);
static ATerm j_27 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm k_27 (ATerm t);
static ATerm n_27 (ATerm t);
static ATerm q_27 (ATerm t);
static ATerm r_27 (ATerm t);
static ATerm v_27 (ATerm t);
static ATerm w_27 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm y_27 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_100 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
static ATerm c_28 (ATerm t);
static ATerm d_28 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm y_79 (ATerm b_79, ATerm t);
static ATerm h_28 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm j_28 (ATerm t);
static ATerm k_28 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm k_14 (ATerm m_48, ATerm l_48, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm l_28 (ATerm t);
static ATerm m_28 (ATerm t);
static ATerm n_28 (ATerm t);
static ATerm o_28 (ATerm t);
static ATerm q_28 (ATerm t);
static ATerm r_28 (ATerm t);
static ATerm s_28 (ATerm t);
static ATerm t_28 (ATerm t);
static ATerm u_28 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm l_14 (ATerm j_48, ATerm k_48, ATerm t);
ATerm at_end_1_0 (ATerm z_92 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm h_83 (ATerm z_82, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_14 (ATerm n_48, ATerm o_48, ATerm t);
static ATerm e_29 (ATerm t);
static ATerm h_29 (ATerm t);
static ATerm k_29 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_29 (ATerm t);
static ATerm o_29 (ATerm t);
static ATerm r_29 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm s_29 (ATerm t);
static ATerm v_29 (ATerm t);
static ATerm d_30 (ATerm t);
static ATerm f_30 (ATerm t);
static ATerm g_30 (ATerm t);
static ATerm i_30 (ATerm t);
static ATerm m_30 (ATerm t);
static ATerm o_30 (ATerm t);
static ATerm p_30 (ATerm t);
static ATerm q_30 (ATerm t);
static ATerm b_31 (ATerm t);
static ATerm c_31 (ATerm t);
static ATerm d_31 (ATerm t);
static ATerm e_31 (ATerm t);
static ATerm f_31 (ATerm t);
static ATerm h_31 (ATerm t);
static ATerm i_31 (ATerm t);
static ATerm j_31 (ATerm t);
static ATerm k_31 (ATerm t);
static ATerm l_31 (ATerm t);
static ATerm m_31 (ATerm t);
static ATerm n_31 (ATerm t);
static ATerm o_31 (ATerm t);
static ATerm p_31 (ATerm t);
static ATerm q_31 (ATerm t);
static ATerm r_31 (ATerm t);
static ATerm s_31 (ATerm t);
static ATerm u_31 (ATerm t);
static ATerm v_31 (ATerm t);
static ATerm w_31 (ATerm t);
static ATerm x_31 (ATerm t);
static ATerm y_31 (ATerm t);
static ATerm z_31 (ATerm t);
static ATerm a_32 (ATerm t);
static ATerm b_32 (ATerm t);
static ATerm c_32 (ATerm t);
static ATerm e_32 (ATerm t);
static ATerm f_32 (ATerm t);
static ATerm i_32 (ATerm t);
static ATerm k_32 (ATerm t);
static ATerm m_32 (ATerm t);
static ATerm n_32 (ATerm t);
static ATerm o_32 (ATerm t);
static ATerm q_32 (ATerm t);
static ATerm r_32 (ATerm t);
static ATerm s_32 (ATerm t);
static ATerm u_32 (ATerm t);
static ATerm v_32 (ATerm t);
static ATerm w_32 (ATerm t);
static ATerm x_32 (ATerm t);
static ATerm y_32 (ATerm t);
static ATerm z_32 (ATerm t);
static ATerm a_33 (ATerm t);
static ATerm b_33 (ATerm t);
static ATerm d_33 (ATerm t);
static ATerm e_33 (ATerm t);
static ATerm f_33 (ATerm t);
static ATerm h_33 (ATerm t);
static ATerm j_33 (ATerm t);
static ATerm k_33 (ATerm t);
ATerm strc_options_0_0 (ATerm t);
static ATerm n_14 (ATerm y_56, ATerm z_56, ATerm t);
static ATerm o_14 (ATerm d_57, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm i_92 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm k_0 (ATerm), ATerm t);
static ATerm o_33 (ATerm t);
static ATerm p_33 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_92 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm r_33 (ATerm t);
static ATerm t_33 (ATerm t);
static ATerm w_33 (ATerm t);
static ATerm x_33 (ATerm t);
static ATerm y_33 (ATerm t);
static ATerm a_34 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm q_14 (ATerm b_53, ATerm c_53, ATerm a_53, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm s_62 (ATerm), ATerm t_62 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm r_112 (ATerm), ATerm t);
static ATerm l_34 (ATerm t);
static ATerm p_34 (ATerm t);
static ATerm u_34 (ATerm t);
static ATerm v_34 (ATerm t);
ATerm parse_options_1_0 (ATerm q_112 (ATerm), ATerm t);
static ATerm s_14 (ATerm t_56, ATerm u_56, ATerm v_56, ATerm t);
static ATerm t_14 (ATerm w_56, ATerm x_56, ATerm t);
ATerm new_hashtable_0_2 (ATerm b_57, ATerm c_57, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm n_54, ATerm t);
static ATerm u_14 (ATerm g_48, ATerm h_48, ATerm t);
static ATerm v_14 (ATerm g_37, ATerm h_37, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm init_strc_config_0_0 (ATerm t);
static ATerm x_34 (ATerm t);
static ATerm a_35 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm f_35 (ATerm t);
static ATerm g_35 (ATerm t);
static ATerm h_35 (ATerm t);
static ATerm i_35 (ATerm t);
static ATerm k_35 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = h_99(t);
    }
  else
    {
      ATerm q_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_0 = ATgetFirst((ATermList) t);
          e_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_0;
      t = foldr_2_0(h_99, i_99, t);
      q_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_0, q_0);
      t = i_99(t);
    }
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_l_35;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      c_1 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_13(c_1, d_1, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_0 = NULL,a_0 = NULL,h_0 = NULL;
  t = times_0_0(t);
  h_0 = t;
  t = SSL_explode_term(h_0);
  if(match_cons(t, sym__2))
    {
      ATerm m_35 = ATgetArgument(t, 0);
      a_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_0;
  t = foldr_2_0(f_0, j_0, t);
  w_0 = t;
  t = SSL_TicksToSeconds(w_0);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm z_107 (ATerm), ATerm t)
{
  ATerm g_1 = NULL;
  g_1 = t;
  {
    ATerm n_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL,k_1 = NULL,m_1 = NULL;
        t = term_q_35;
        k_1 = t;
        t = term_r_35;
        m_1 = t;
        t = term_s_35;
        t = p_14(k_1, m_1, t);
        j_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_1, term_t_35);
        t = geq_0_0(t);
        t = g_1;
        t = z_107(t);
        LocalPopChoice(o_35);
      }
    else
      {
        t = n_35;
        t = g_1;
      }
  }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,a_2 = NULL;
  w_1 = t;
  t = term_v_35;
  x_1 = t;
  t = (ATerm) ATinsert(ATempty, term_w_35);
  a_2 = t;
  t = SSL_printnl(x_1, a_2);
  t = w_1;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_x_35;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  d_2 = t;
  t = term_v_35;
  e_2 = t;
  t = (ATerm) ATinsert(ATempty, d_2);
  f_2 = t;
  t = SSL_printnl(e_2, f_2);
  t = d_2;
  return(t);
}
static ATerm i_13 (ATerm r_21, ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  t = if_verbose2_1_0(e_1, t);
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL,c_2 = NULL;
        t = term_q_35;
        b_2 = t;
        t = term_a_36;
        c_2 = t;
        t = term_b_36;
        t = p_14(b_2, c_2, t);
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
        t = get_outfile_1_0(f_1, t);
      }
  }
  o_1 = t;
  t = term_q_35;
  s_1 = t;
  t = term_c_36;
  t_1 = t;
  t = term_d_36;
  t = p_14(s_1, t_1, t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_36, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_1), o_1), term_a_36), r_21));
  t = if_verbose3_1_0(h_1, t);
  if(match_cons(t, sym__2))
    {
      q_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_1, r_1);
  {
    static ATerm i_1 (ATerm t)
    {
      ATerm k_2 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, q_1, r_1);
      t = o_13(q_1, r_1, t);
      t = term_f_36;
      k_2 = t;
      t = SSL_exit(k_2);
      return(t);
    }
    t = fork_and_wait_1_0(i_1, t);
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL;
  v_2 = t;
  t = term_v_35;
  w_2 = t;
  t = (ATerm) ATinsert(ATempty, term_g_36);
  x_2 = t;
  t = SSL_printnl(w_2, x_2);
  t = v_2;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_h_36;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  t = term_v_35;
  z_2 = t;
  t = (ATerm) ATinsert(ATempty, y_2);
  a_3 = t;
  t = SSL_printnl(z_2, a_3);
  t = y_2;
  return(t);
}
static ATerm j_13 (ATerm p_21, ATerm t)
{
  ATerm l_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL;
  t = if_verbose2_1_0(l_1, t);
  t = get_outfile_1_0(n_1, t);
  l_2 = t;
  t = term_q_35;
  r_2 = t;
  t = term_i_36;
  s_2 = t;
  t = term_j_36;
  t = p_14(r_2, s_2, t);
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_2), term_a_36), p_21), term_l_36));
  t = conc_0_0(t);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_36, n_2);
  t = if_verbose3_1_0(v_1, t);
  if(match_cons(t, sym__2))
    {
      p_2 = ATgetArgument(t, 0);
      q_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_2, q_2);
  {
    static ATerm y_1 (ATerm t)
    {
      ATerm f_3 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, p_2, q_2);
      t = o_13(p_2, q_2, t);
      t = term_f_36;
      f_3 = t;
      t = SSL_exit(f_3);
      return(t);
    }
    t = fork_and_wait_1_0(y_1, t);
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_2);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = if_verbose1_1_0(h_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      p_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_13(p_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      o_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_13(o_3, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,n_3 = NULL;
  k_3 = t;
  t = term_v_35;
  l_3 = t;
  t = (ATerm) ATinsert(CheckATermList(k_3), term_m_36);
  n_3 = t;
  t = SSL_printnl(l_3, n_3);
  t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(CheckATermList(k_3), term_m_36));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm n_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 = NULL,i_3 = NULL,j_3 = NULL;
      g_3 = t;
      t = term_q_35;
      i_3 = t;
      t = term_l_36;
      j_3 = t;
      t = term_q_36;
      t = p_14(i_3, j_3, t);
      t = g_3;
      LocalPopChoice(o_36);
    }
  else
    {
      t = n_36;
      t = profile_p__2_0(z_1, g_2, t);
    }
  return(t);
}
ATerm EXDEV_0_0 (ATerm t)
{
  t = SSL_EXDEV();
  return(t);
}
ATerm get_errno_0_0 (ATerm t)
{
  t = SSL_get_errno();
  return(t);
}
static ATerm k_13 (ATerm m_44, ATerm l_44, ATerm t)
{
  ATerm r_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(m_44, l_44);
      LocalPopChoice(v_36);
    }
  else
    {
      t = r_36;
      t = get_errno_0_0(t);
      t = term_w_36;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, m_44, l_44);
      t = y_13(m_44, l_44, t);
      t = SSL_remove(m_44);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm b_1 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL;
  g_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL;
        t = g_4;
        t = b_1(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_a_37;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_4, term_a_37);
        t = y_13(h_4, u_1, t);
        t = SSL_remove(h_4);
        t = term_a_37;
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        {
          ATerm c_37 = t;
          int i_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_2 = NULL;
              t = g_4;
              t = b_1(t);
              i_2 = t;
              {
                ATerm j_37 = t;
                if((PushChoice() == 0))
                  {
                    ATerm j_2 = NULL;
                    j_2 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = j_2;
                      }
                    else
                      {
                        t = j_2;
                        if((h_4 != t))
                          {
                            _fail(t);
                          }
                        t = j_2;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_37;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, h_4, i_2);
              t = k_13(h_4, i_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_2);
              LocalPopChoice(i_37);
            }
          else
            {
              t = c_37;
              t = g_4;
              t = b_1(t);
              if((h_4 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_4);
            }
        }
      }
  }
  return(t);
}
ATerm ac2abox_0_0 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
  r_4 = t;
  t = term_k_37;
  o_4 = t;
  t = term_n_37;
  t = xtc_find_0_0(t);
  q_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_4), term_o_37);
  p_4 = t;
  t = r_4;
  t = comp_0_2(o_4, p_4, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm c_5 = NULL;
  c_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_5), term_p_37);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  t = term_s_37;
  s_4 = t;
  t = x_4;
  {
    ATerm x_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 = NULL,b_5 = NULL;
        t = term_q_35;
        a_5 = t;
        t = term_b_38;
        b_5 = t;
        t = term_c_38;
        t = p_14(a_5, b_5, t);
        t = x_4;
        LocalPopChoice(z_37);
        t = (ATerm) ATinsert(ATempty, term_b_38);
      }
    else
      {
        t = x_37;
        t = (ATerm) ATempty;
      }
  }
  v_4 = t;
  t = term_q_35;
  y_4 = t;
  t = term_p_37;
  z_4 = t;
  t = term_i_38;
  t = p_14(y_4, z_4, t);
  t = foldr_3_0(m_2, conc_0_0, t_2, t);
  w_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_4), w_4);
  t = concat_0_0(t);
  t_4 = t;
  t = x_4;
  t = comp_0_2(s_4, t_4, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  t = term_v_35;
  w_5 = t;
  t = (ATerm) ATinsert(ATempty, term_j_38);
  x_5 = t;
  t = SSL_printnl(w_5, x_5);
  t = v_5;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = if_verbose1_1_0(e_3, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm b_6 = NULL,d_6 = NULL,e_6 = NULL;
  e_6 = t;
  {
    ATerm k_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_6 = ATgetArgument(t, 0);
            {
              ATerm b_3 = NULL,m_0 = NULL;
              t = SSLgetAnnotations(e_6);
              b_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_6);
              m_0 = t;
              t = SSLsetAnnotations(m_0, b_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_6;
          }
        LocalPopChoice(m_38);
        t = xtc_transform_file_2_0(h_3, q_3, t);
      }
    else
      {
        t = k_38;
        t = xtc_transform_term_2_0(r_3, s_3, t);
      }
  }
  t = if_keep1_1_0(u_3, t);
  t = olevel_2_0(w_3, x_3, t);
  t = olevel_2_0(j_5, k_5, t);
  d_6 = t;
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_7 = ATgetArgument(t, 0);
            {
              ATerm i_4 = NULL,y_0 = NULL;
              t = SSLgetAnnotations(d_6);
              i_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_7);
              y_0 = t;
              t = SSLsetAnnotations(y_0, i_4);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_6;
          }
        LocalPopChoice(o_38);
        t = xtc_transform_file_2_0(o_5, p_5, t);
      }
    else
      {
        t = n_38;
        t = xtc_transform_term_2_0(k_6, s_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  b_6 = t;
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_8 = ATgetArgument(t, 0);
            {
              ATerm d_5 = NULL,a_1 = NULL;
              t = SSLgetAnnotations(b_6);
              d_5 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_8);
              a_1 = t;
              t = SSLsetAnnotations(a_1, d_5);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_6;
          }
        LocalPopChoice(s_38);
        t = xtc_transform_file_2_0(u_6, pass_verbose_0_0, t);
      }
    else
      {
        t = r_38;
        t = xtc_transform_term_2_0(y_6, pass_verbose_0_0, t);
      }
  }
  t = rename_to_1_0(z_6, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  t = term_v_35;
  z_5 = t;
  t = (ATerm) ATinsert(CheckATermList(y_5), term_t_38);
  a_6 = t;
  t = SSL_printnl(z_5, a_6);
  t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(CheckATermList(y_5), term_t_38));
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_u_38;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm l_6 = NULL;
  t = pass_verbose_0_0(t);
  l_6 = t;
  t = (ATerm) ATinsert(CheckATermList(l_6), term_v_38);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_u_38;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm m_6 = NULL;
  t = pass_verbose_0_0(t);
  m_6 = t;
  t = (ATerm) ATinsert(CheckATermList(m_6), term_v_38);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = save_as_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_w_38;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_x_38;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL;
  o_6 = t;
  {
    ATerm y_38 = t;
    int a_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_6 = ATgetArgument(t, 0);
            {
              ATerm m_3 = NULL,s_0 = NULL;
              t = SSLgetAnnotations(o_6);
              m_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_6);
              s_0 = t;
              t = SSLsetAnnotations(s_0, m_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_6;
          }
        LocalPopChoice(a_39);
        t = xtc_transform_file_2_0(z_3, b_4, t);
      }
    else
      {
        t = y_38;
        t = xtc_transform_term_2_0(d_4, e_4, t);
      }
  }
  t = if_keep1_1_0(f_4, t);
  n_6 = t;
  {
    ATerm b_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_7 = ATgetArgument(t, 0);
            {
              ATerm t_3 = NULL,u_0 = NULL;
              t = SSLgetAnnotations(n_6);
              t_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_7);
              u_0 = t;
              t = SSLsetAnnotations(u_0, t_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_6;
          }
        LocalPopChoice(d_39);
        t = xtc_transform_file_2_0(k_4, l_4, t);
      }
    else
      {
        t = b_39;
        t = xtc_transform_term_2_0(n_4, u_4, t);
      }
  }
  t = if_keep1_1_0(e_5, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_e_39;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm b_7 = NULL;
  t = pass_verbose_0_0(t);
  b_7 = t;
  t = (ATerm) ATinsert(CheckATermList(b_7), term_v_38);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_e_39;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm c_7 = NULL;
  t = pass_verbose_0_0(t);
  c_7 = t;
  t = (ATerm) ATinsert(CheckATermList(c_7), term_v_38);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = save_as_1_0(j_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_f_39;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_g_39;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm m_7 = NULL;
  t = pass_verbose_0_0(t);
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(m_7), term_v_38);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_g_39;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm n_7 = NULL;
  t = pass_verbose_0_0(t);
  n_7 = t;
  t = (ATerm) ATinsert(CheckATermList(n_7), term_v_38);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = save_as_1_0(f_5, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_h_39;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_i_39;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(m_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = save_as_1_0(n_5, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_j_39;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_k_39;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm v_7 = NULL;
  t = pass_verbose_0_0(t);
  v_7 = t;
  t = (ATerm) ATinsert(CheckATermList(v_7), term_v_38);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_k_39;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm w_7 = NULL;
  t = pass_verbose_0_0(t);
  w_7 = t;
  t = (ATerm) ATinsert(CheckATermList(w_7), term_v_38);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_m_39;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_m_39;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = get_outfile_1_0(d_7, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_o_39;
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(u_2, t);
  t = profile_p__2_0(c_3, d_3, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  t = term_v_35;
  l_9 = t;
  t = (ATerm) ATinsert(ATempty, term_q_39);
  m_9 = t;
  t = SSL_printnl(l_9, m_9);
  t = k_9;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = if_verbose1_1_0(k_7, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
  n_9 = t;
  t = term_v_35;
  o_9 = t;
  t = (ATerm) ATinsert(CheckATermList(n_9), term_r_39);
  p_9 = t;
  t = SSL_printnl(o_9, p_9);
  t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(CheckATermList(n_9), term_r_39));
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_s_39;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_t_39;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_u_39;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm u_10 = NULL;
  t = pass_verbose_0_0(t);
  u_10 = t;
  t = (ATerm) ATinsert(CheckATermList(u_10), term_w_39);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_u_39;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm v_10 = NULL;
  t = pass_verbose_0_0(t);
  v_10 = t;
  t = (ATerm) ATinsert(CheckATermList(v_10), term_w_39);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL;
  ATerm z_39 = t;
  int a_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
      f_9 = t;
      t = term_q_35;
      g_9 = t;
      t = term_b_38;
      h_9 = t;
      t = term_c_38;
      t = p_14(g_9, h_9, t);
      t = f_9;
      LocalPopChoice(a_40);
      {
        ATerm i_9 = NULL;
        i_9 = t;
        t = if_verbose2_1_0(e_7, t);
        {
          static ATerm g_7 (ATerm t)
          {
            ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL;
            i_5 = t;
            t = term_b_40;
            g_5 = t;
            t = (ATerm) ATinsert(ATempty, term_c_40);
            h_5 = t;
            t = i_5;
            t = comp_0_2(g_5, h_5, t);
            q_9 = t;
            {
              ATerm d_40 = t;
              int e_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_9 = NULL,w_9 = NULL,y_9 = NULL,z_9 = NULL,b_10 = NULL,d_10 = NULL;
                  t = term_q_35;
                  b_10 = t;
                  t = term_f_40;
                  d_10 = t;
                  t = term_g_40;
                  t = p_14(b_10, d_10, t);
                  v_9 = t;
                  t = term_q_35;
                  y_9 = t;
                  t = term_h_40;
                  z_9 = t;
                  t = term_i_40;
                  t = p_14(y_9, z_9, t);
                  w_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_9, w_9);
                  {
                    ATerm j_40 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm e_10 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            e_10 = ATgetArgument(t, 0);
                            if((e_10 != ATgetArgument(t, 1)))
                              {
                                _fail(ATgetArgument(t, 1));
                              }
                          }
                        else
                          _fail(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = j_40;
                      }
                  }
                  LocalPopChoice(e_40);
                }
              else
                {
                  t = d_40;
                  {
                    ATerm g_10 = NULL,i_10 = NULL;
                    t = term_q_35;
                    g_10 = t;
                    t = term_f_40;
                    i_10 = t;
                    t = term_g_40;
                    t = p_14(g_10, i_10, t);
                    t = debug_1_0(l_7, t);
                    _fail(t);
                  }
                }
            }
            t = q_9;
            {
              static ATerm o_7 (ATerm t)
              {
                t = get_outfile_1_0(p_7, t);
                if(((d_9 != NULL) && (d_9 != t)))
                  _fail(t);
                else
                  d_9 = t;
                return(t);
              }
              t = copy_to_1_0(o_7, t);
            }
            {
              ATerm k_40 = t;
              int l_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_10 = NULL,s_10 = NULL;
                  s_10 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      r_10 = ATgetArgument(t, 0);
                      {
                        ATerm l_5 = NULL,y_3 = NULL;
                        t = SSLgetAnnotations(s_10);
                        l_5 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, r_10);
                        y_3 = t;
                        t = SSLsetAnnotations(y_3, l_5);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = s_10;
                    }
                  LocalPopChoice(l_40);
                  t = xtc_transform_file_2_0(q_7, r_7, t);
                }
              else
                {
                  t = k_40;
                  t = xtc_transform_term_2_0(s_7, u_7, t);
                }
            }
            {
              static ATerm x_7 (ATerm t)
              {
                t = get_outfile_1_0(y_7, t);
                if(((e_9 != NULL) && (e_9 != t)))
                  _fail(t);
                else
                  e_9 = t;
                return(t);
              }
              t = copy_to_1_0(x_7, t);
            }
            r_9 = t;
            t = term_v_35;
            s_9 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_9)), term_n_40), not_null(d_9)), term_m_40));
            t_9 = t;
            t = SSL_printnl(s_9, t_9);
            t = r_9;
            return(t);
          }
          t = profile_p__2_0(f_7, g_7, t);
        }
        t = i_9;
      }
    }
  else
    {
      t = z_39;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm z_10 = NULL;
  z_10 = t;
  {
    ATerm o_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
        t = term_q_35;
        i_11 = t;
        t = term_q_40;
        j_11 = t;
        t = term_r_40;
        t = p_14(i_11, j_11, t);
        h_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_11, term_x_38);
        t = geq_0_0(t);
        t = z_10;
        t = a_109(t);
        LocalPopChoice(p_40);
      }
    else
      {
        t = o_40;
        t = z_10;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm t)
{
  ATerm m_11 = NULL;
  m_11 = t;
  {
    ATerm u_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,t_11 = NULL;
        t = m_11;
        t = f_118(t);
        p_11 = t;
        t = term_q_35;
        r_11 = t;
        t = term_x_40;
        t_11 = t;
        t = term_y_40;
        t = p_14(r_11, t_11, t);
        q_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_11, p_11);
        t = geq_0_0(t);
        t = m_11;
        t = g_118(t);
        LocalPopChoice(v_40);
      }
    else
      {
        t = u_40;
        t = m_11;
      }
  }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_z_40;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm h_7 = NULL;
  t = pass_verbose_0_0(t);
  h_7 = t;
  t = (ATerm) ATinsert(CheckATermList(h_7), term_v_38);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_z_40;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm j_7 = NULL;
  t = pass_verbose_0_0(t);
  j_7 = t;
  t = (ATerm) ATinsert(CheckATermList(j_7), term_v_38);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_z_40;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm u_8 = NULL;
  t = pass_verbose_0_0(t);
  u_8 = t;
  t = (ATerm) ATinsert(CheckATermList(u_8), term_v_38);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_z_40;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm v_8 = NULL;
  t = pass_verbose_0_0(t);
  v_8 = t;
  t = (ATerm) ATinsert(CheckATermList(v_8), term_v_38);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm a_14 = NULL;
  a_14 = t;
  {
    ATerm a_41 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_14;
        {
          ATerm d_41 = t;
          int r_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_7 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  a_7 = ATgetArgument(t, 0);
                  {
                    ATerm a_8 = NULL,a_4 = NULL;
                    t = SSLgetAnnotations(a_14);
                    a_8 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, a_7);
                    a_4 = t;
                    t = SSLsetAnnotations(a_4, a_8);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = a_14;
                }
              LocalPopChoice(r_41);
              t = xtc_transform_file_2_0(z_7, b_8, t);
            }
          else
            {
              t = d_41;
              t = xtc_transform_term_2_0(d_8, e_8, t);
            }
        }
        LocalPopChoice(c_41);
      }
    else
      {
        t = a_41;
        t = a_14;
        {
          ATerm t_41 = t;
          int w_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  s_8 = ATgetArgument(t, 0);
                  {
                    ATerm z_8 = NULL,c_4 = NULL;
                    t = SSLgetAnnotations(a_14);
                    z_8 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, s_8);
                    c_4 = t;
                    t = SSLsetAnnotations(c_4, z_8);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = a_14;
                }
              LocalPopChoice(w_41);
              t = xtc_transform_file_2_0(f_8, g_8, t);
            }
          else
            {
              t = t_41;
              t = xtc_transform_term_2_0(h_8, i_8, t);
            }
        }
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm a_15 = NULL,e_15 = NULL,h_15 = NULL;
  h_15 = t;
  t = term_y_41;
  a_15 = t;
  t = h_15;
  {
    ATerm z_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_15 = NULL,j_15 = NULL;
        t = term_q_35;
        i_15 = t;
        t = term_b_38;
        j_15 = t;
        t = term_c_38;
        t = p_14(i_15, j_15, t);
        t = h_15;
        LocalPopChoice(a_42);
        t = (ATerm) ATinsert(ATempty, term_b_42);
      }
    else
      {
        t = z_41;
        t = (ATerm) ATempty;
      }
  }
  e_15 = t;
  t = h_15;
  t = comp_0_2(a_15, e_15, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm o_15 = NULL;
  o_15 = t;
  {
    ATerm d_42 = t;
    int e_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
        t = term_q_35;
        r_15 = t;
        t = term_q_40;
        s_15 = t;
        t = term_r_40;
        t = p_14(r_15, s_15, t);
        q_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_15, term_i_42);
        t = geq_0_0(t);
        t = o_15;
        t = d_109(t);
        LocalPopChoice(e_42);
      }
    else
      {
        t = d_42;
        t = o_15;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm f_109 (ATerm), ATerm t)
{
  ATerm x_15 = NULL;
  x_15 = t;
  {
    ATerm j_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_15 = NULL,c_16 = NULL,d_16 = NULL;
        t = term_q_35;
        c_16 = t;
        t = term_q_40;
        d_16 = t;
        t = term_r_40;
        t = p_14(c_16, d_16, t);
        z_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_15, term_n_42);
        t = geq_0_0(t);
        t = x_15;
        t = f_109(t);
        LocalPopChoice(l_42);
      }
    else
      {
        t = j_42;
        t = x_15;
      }
  }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,m_18 = NULL;
  j_18 = t;
  t = term_v_35;
  k_18 = t;
  t = (ATerm) ATinsert(ATempty, term_p_42);
  m_18 = t;
  t = SSL_printnl(k_18, m_18);
  t = j_18;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = if_verbose1_1_0(n_8, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm s_18 = NULL;
  t = if_verbose3_1_0(o_8, t);
  t = olevel_2_0(t_8, w_8, t);
  t = olevel_2_0(x_9, f_10, t);
  t = olevel_2_0(x_10, d_11, t);
  s_18 = t;
  {
    ATerm r_42 = t;
    int s_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_22 = ATgetArgument(t, 0);
            {
              ATerm r_12 = NULL,u_5 = NULL;
              t = SSLgetAnnotations(s_18);
              r_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_22);
              u_5 = t;
              t = SSLsetAnnotations(u_5, r_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_18;
          }
        LocalPopChoice(s_42);
        t = xtc_transform_file_2_0(n_12, o_12, t);
      }
    else
      {
        t = r_42;
        t = xtc_transform_term_2_0(s_12, t_12, t);
      }
  }
  t = olevel_2_0(u_12, v_12, t);
  t = olevel_2_0(y_14, z_14, t);
  t = olevel_2_0(w_15, y_15, t);
  t = olevel_2_0(m_16, o_16, t);
  t = olevel_2_0(p_17, q_17, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,r_18 = NULL;
  n_18 = t;
  t = term_v_35;
  o_18 = t;
  t = (ATerm) ATinsert(CheckATermList(n_18), term_u_42);
  r_18 = t;
  t = SSL_printnl(o_18, r_18);
  t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(CheckATermList(n_18), term_u_42));
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
  v_18 = t;
  t = term_q_35;
  w_18 = t;
  t = term_x_40;
  x_18 = t;
  t = term_y_40;
  t = p_14(w_18, x_18, t);
  t = debug_1_0(q_8, t);
  t = v_18;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_w_42;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_x_38;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm a_19 = NULL;
  a_19 = t;
  {
    ATerm y_42 = t;
    int z_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_19 = ATgetArgument(t, 0);
            {
              ATerm j_9 = NULL,m_4 = NULL;
              t = SSLgetAnnotations(a_19);
              j_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_19);
              m_4 = t;
              t = SSLsetAnnotations(m_4, j_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_19;
          }
        LocalPopChoice(z_42);
        t = xtc_transform_file_2_0(x_8, y_8, t);
      }
    else
      {
        t = y_42;
        t = xtc_transform_term_2_0(a_9, b_9, t);
      }
  }
  t = if_keep1_1_0(c_9, t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_g_39;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm g_19 = NULL;
  t = pass_verbose_0_0(t);
  g_19 = t;
  t = (ATerm) ATinsert(CheckATermList(g_19), term_v_38);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_g_39;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm i_19 = NULL;
  t = pass_verbose_0_0(t);
  i_19 = t;
  t = (ATerm) ATinsert(CheckATermList(i_19), term_v_38);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = save_as_1_0(u_9, t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_a_43;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_t_35;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm y_19 = NULL;
  y_19 = t;
  {
    ATerm d_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_19;
        {
          ATerm f_43 = t;
          if((PushChoice() == 0))
            {
              ATerm q_10 = NULL,t_10 = NULL;
              t = term_q_35;
              q_10 = t;
              t = term_i_43;
              t_10 = t;
              t = term_j_43;
              t = p_14(q_10, t_10, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_43;
            }
        }
        t = y_19;
        {
          ATerm k_43 = t;
          int s_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_11 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  c_11 = ATgetArgument(t, 0);
                  {
                    ATerm v_11 = NULL,q_5 = NULL;
                    t = SSLgetAnnotations(y_19);
                    v_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, c_11);
                    q_5 = t;
                    t = SSLsetAnnotations(q_5, v_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = y_19;
                }
              LocalPopChoice(s_43);
              t = xtc_transform_file_2_0(h_10, j_10, t);
            }
          else
            {
              t = k_43;
              t = xtc_transform_term_2_0(n_10, o_10, t);
            }
        }
        t = if_keep2_1_0(p_10, t);
        LocalPopChoice(e_43);
      }
    else
      {
        t = d_43;
        t = y_19;
      }
  }
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_t_43;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm f_11 = NULL;
  t = pass_verbose_0_0(t);
  f_11 = t;
  t = (ATerm) ATinsert(CheckATermList(f_11), term_v_38);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_t_43;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm g_11 = NULL;
  t = pass_verbose_0_0(t);
  g_11 = t;
  t = (ATerm) ATinsert(CheckATermList(g_11), term_v_38);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = save_as_1_0(w_10, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_u_43;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_i_42;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
  d_20 = t;
  {
    ATerm v_43 = t;
    int w_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_20 = ATgetArgument(t, 0);
            {
              ATerm z_11 = NULL,r_5 = NULL;
              t = SSLgetAnnotations(d_20);
              z_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_20);
              r_5 = t;
              t = SSLsetAnnotations(r_5, z_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_20;
          }
        LocalPopChoice(w_43);
        t = xtc_transform_file_2_0(e_11, k_11, t);
      }
    else
      {
        t = v_43;
        t = xtc_transform_term_2_0(n_11, o_11, t);
      }
  }
  t = if_keep6_1_0(s_11, t);
  c_20 = t;
  {
    ATerm x_43 = t;
    int z_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_20 = ATgetArgument(t, 0);
            {
              ATerm d_12 = NULL,s_5 = NULL;
              t = SSLgetAnnotations(c_20);
              d_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_20);
              s_5 = t;
              t = SSLsetAnnotations(s_5, d_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_20;
          }
        LocalPopChoice(z_43);
        t = xtc_transform_file_2_0(w_11, x_11, t);
      }
    else
      {
        t = x_43;
        t = xtc_transform_term_2_0(y_11, a_12, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(b_12, t);
  b_20 = t;
  {
    ATerm a_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_21 = ATgetArgument(t, 0);
            {
              ATerm h_12 = NULL,t_5 = NULL;
              t = SSLgetAnnotations(b_20);
              h_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_21);
              t_5 = t;
              t = SSLsetAnnotations(t_5, h_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_20;
          }
        LocalPopChoice(c_44);
        t = xtc_transform_file_2_0(e_12, f_12, t);
      }
    else
      {
        t = a_44;
        t = xtc_transform_term_2_0(g_12, i_12, t);
      }
  }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm p_20 = NULL;
  t = pass_verbose_0_0(t);
  p_20 = t;
  t = (ATerm) ATinsert(CheckATermList(p_20), term_v_38);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm q_20 = NULL;
  t = pass_verbose_0_0(t);
  q_20 = t;
  t = (ATerm) ATinsert(CheckATermList(q_20), term_v_38);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = save_as_1_0(u_11, t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_g_44;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm z_20 = NULL;
  t = pass_verbose_0_0(t);
  z_20 = t;
  t = (ATerm) ATinsert(CheckATermList(z_20), term_v_38);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_g_44;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm a_21 = NULL;
  t = pass_verbose_0_0(t);
  a_21 = t;
  t = (ATerm) ATinsert(CheckATermList(a_21), term_v_38);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = save_as_1_0(c_12, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_h_44;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_g_39;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm y_21 = NULL;
  t = pass_verbose_0_0(t);
  y_21 = t;
  t = (ATerm) ATinsert(CheckATermList(y_21), term_v_38);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_g_39;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm z_21 = NULL;
  t = pass_verbose_0_0(t);
  z_21 = t;
  t = (ATerm) ATinsert(CheckATermList(z_21), term_v_38);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_i_44;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm h_22 = NULL;
  t = pass_verbose_0_0(t);
  h_22 = t;
  t = (ATerm) ATinsert(CheckATermList(h_22), term_v_38);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_i_44;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm i_22 = NULL;
  t = pass_verbose_0_0(t);
  i_22 = t;
  t = (ATerm) ATinsert(CheckATermList(i_22), term_v_38);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_i_42;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm j_22 = NULL,m_22 = NULL,n_22 = NULL;
  n_22 = t;
  {
    ATerm j_44 = t;
    int k_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_22 = ATgetArgument(t, 0);
            {
              ATerm d_13 = NULL,c_6 = NULL;
              t = SSLgetAnnotations(n_22);
              d_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_22);
              c_6 = t;
              t = SSLsetAnnotations(c_6, d_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_22;
          }
        LocalPopChoice(k_44);
        t = xtc_transform_file_2_0(w_12, x_12, t);
      }
    else
      {
        t = j_44;
        t = xtc_transform_term_2_0(y_12, z_12, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  m_22 = t;
  {
    ATerm p_44 = t;
    int q_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_23 = ATgetArgument(t, 0);
            {
              ATerm x_14 = NULL,f_6 = NULL;
              t = SSLgetAnnotations(m_22);
              x_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_23);
              f_6 = t;
              t = SSLsetAnnotations(f_6, x_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_22;
          }
        LocalPopChoice(q_44);
        t = xtc_transform_file_2_0(a_13, b_13, t);
      }
    else
      {
        t = p_44;
        t = xtc_transform_term_2_0(c_13, e_13, t);
      }
  }
  j_22 = t;
  {
    ATerm r_44 = t;
    int s_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_23 = ATgetArgument(t, 0);
            {
              ATerm d_15 = NULL,g_6 = NULL;
              t = SSLgetAnnotations(j_22);
              d_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_23);
              g_6 = t;
              t = SSLsetAnnotations(g_6, d_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_22;
          }
        LocalPopChoice(s_44);
        t = xtc_transform_file_2_0(f_13, g_13, t);
      }
    else
      {
        t = r_44;
        t = xtc_transform_term_2_0(h_13, p_13, t);
      }
  }
  t = if_keep4_1_0(v_13, t);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm v_22 = NULL;
  t = pass_verbose_0_0(t);
  v_22 = t;
  t = (ATerm) ATinsert(CheckATermList(v_22), term_v_38);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm w_22 = NULL;
  t = pass_verbose_0_0(t);
  w_22 = t;
  t = (ATerm) ATinsert(CheckATermList(w_22), term_v_38);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_u_44;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm h_23 = NULL;
  t = pass_verbose_0_0(t);
  h_23 = t;
  t = (ATerm) ATinsert(CheckATermList(h_23), term_v_38);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_u_44;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm i_23 = NULL;
  t = pass_verbose_0_0(t);
  i_23 = t;
  t = (ATerm) ATinsert(CheckATermList(i_23), term_v_38);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_w_44;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm u_23 = NULL;
  t = pass_verbose_0_0(t);
  u_23 = t;
  t = (ATerm) ATinsert(CheckATermList(u_23), term_v_38);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_w_44;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm v_23 = NULL;
  t = pass_verbose_0_0(t);
  v_23 = t;
  t = (ATerm) ATinsert(CheckATermList(v_23), term_v_38);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  t = save_as_1_0(w_14, t);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  t = term_x_44;
  return(t);
}
static ATerm y_14 (ATerm t)
{
  t = term_t_35;
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL;
  c_24 = t;
  {
    ATerm y_44 = t;
    int z_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_24 = ATgetArgument(t, 0);
            {
              ATerm l_15 = NULL,h_6 = NULL;
              t = SSLgetAnnotations(c_24);
              l_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_24);
              h_6 = t;
              t = SSLsetAnnotations(h_6, l_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_24;
          }
        LocalPopChoice(z_44);
        t = xtc_transform_file_2_0(b_15, c_15, t);
      }
    else
      {
        t = y_44;
        t = xtc_transform_term_2_0(f_15, g_15, t);
      }
  }
  b_24 = t;
  {
    ATerm a_45 = t;
    int c_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_24 = ATgetArgument(t, 0);
            {
              ATerm u_15 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(b_24);
              u_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_24);
              i_6 = t;
              t = SSLsetAnnotations(i_6, u_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_24;
          }
        LocalPopChoice(c_45);
        t = xtc_transform_file_2_0(k_15, m_15, t);
      }
    else
      {
        t = a_45;
        t = xtc_transform_term_2_0(n_15, p_15, t);
      }
  }
  t = if_keep2_1_0(t_15, t);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  t = term_d_45;
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm n_24 = NULL;
  t = pass_verbose_0_0(t);
  n_24 = t;
  t = (ATerm) ATinsert(CheckATermList(n_24), term_v_38);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_d_45;
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm p_24 = NULL;
  t = pass_verbose_0_0(t);
  p_24 = t;
  t = (ATerm) ATinsert(CheckATermList(p_24), term_v_38);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = term_f_45;
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm x_24 = NULL;
  t = pass_verbose_0_0(t);
  x_24 = t;
  t = (ATerm) ATinsert(CheckATermList(x_24), term_v_38);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  t = term_f_45;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm z_24 = NULL;
  t = pass_verbose_0_0(t);
  z_24 = t;
  t = (ATerm) ATinsert(CheckATermList(z_24), term_v_38);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  t = save_as_1_0(v_15, t);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  t = term_g_45;
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_i_45;
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm b_25 = NULL;
  b_25 = t;
  {
    ATerm k_45 = t;
    int l_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_25 = ATgetArgument(t, 0);
            {
              ATerm e_16 = NULL,p_6 = NULL;
              t = SSLgetAnnotations(b_25);
              e_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_25);
              p_6 = t;
              t = SSLsetAnnotations(p_6, e_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_25;
          }
        LocalPopChoice(l_45);
        t = xtc_transform_file_2_0(a_16, b_16, t);
      }
    else
      {
        t = k_45;
        t = xtc_transform_term_2_0(f_16, g_16, t);
      }
  }
  t = if_keep5_1_0(h_16, t);
  t = dead_def_elim_0_0(t);
  t = if_keep5_1_0(k_16, t);
  return(t);
}
static ATerm a_16 (ATerm t)
{
  t = term_g_44;
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm k_25 = NULL;
  t = pass_verbose_0_0(t);
  k_25 = t;
  t = (ATerm) ATinsert(CheckATermList(k_25), term_v_38);
  return(t);
}
static ATerm f_16 (ATerm t)
{
  t = term_g_44;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm l_25 = NULL;
  t = pass_verbose_0_0(t);
  l_25 = t;
  t = (ATerm) ATinsert(CheckATermList(l_25), term_v_38);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  t = save_as_1_0(i_16, t);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = term_p_45;
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = save_as_1_0(l_16, t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_q_45;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = term_i_39;
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm n_25 = NULL,p_25 = NULL,q_25 = NULL;
  q_25 = t;
  {
    ATerm s_45 = t;
    int u_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            u_25 = ATgetArgument(t, 0);
            {
              ATerm j_16 = NULL,q_6 = NULL;
              t = SSLgetAnnotations(q_25);
              j_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_25);
              q_6 = t;
              t = SSLsetAnnotations(q_6, j_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_25;
          }
        LocalPopChoice(u_45);
        t = xtc_transform_file_2_0(p_16, q_16, t);
      }
    else
      {
        t = s_45;
        t = xtc_transform_term_2_0(s_16, t_16, t);
      }
  }
  t = if_keep3_1_0(u_16, t);
  p_25 = t;
  {
    ATerm w_45 = t;
    int y_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_26 = ATgetArgument(t, 0);
            {
              ATerm n_16 = NULL,r_6 = NULL;
              t = SSLgetAnnotations(p_25);
              n_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_26);
              r_6 = t;
              t = SSLsetAnnotations(r_6, n_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_25;
          }
        LocalPopChoice(y_45);
        t = xtc_transform_file_2_0(x_16, y_16, t);
      }
    else
      {
        t = w_45;
        t = xtc_transform_term_2_0(a_17, b_17, t);
      }
  }
  t = if_keep3_1_0(c_17, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(f_17, t);
  n_25 = t;
  {
    ATerm z_45 = t;
    int a_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_26 = ATgetArgument(t, 0);
            {
              ATerm r_16 = NULL,t_6 = NULL;
              t = SSLgetAnnotations(n_25);
              r_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_26);
              t_6 = t;
              t = SSLsetAnnotations(t_6, r_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_25;
          }
        LocalPopChoice(a_46);
        t = xtc_transform_file_2_0(h_17, i_17, t);
      }
    else
      {
        t = z_45;
        t = xtc_transform_term_2_0(j_17, k_17, t);
      }
  }
  t = if_keep3_1_0(l_17, t);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm z_25 = NULL;
  t = pass_verbose_0_0(t);
  z_25 = t;
  t = (ATerm) ATinsert(CheckATermList(z_25), term_v_38);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm a_26 = NULL;
  t = pass_verbose_0_0(t);
  a_26 = t;
  t = (ATerm) ATinsert(CheckATermList(a_26), term_v_38);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = save_as_1_0(w_16, t);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = term_f_46;
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm j_26 = NULL;
  t = pass_verbose_0_0(t);
  j_26 = t;
  t = (ATerm) ATinsert(CheckATermList(j_26), term_v_38);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm k_26 = NULL;
  t = pass_verbose_0_0(t);
  k_26 = t;
  t = (ATerm) ATinsert(CheckATermList(k_26), term_v_38);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = save_as_1_0(d_17, t);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = term_g_46;
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = save_as_1_0(g_17, t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  t = term_h_46;
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = term_u_44;
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm s_26 = NULL;
  t = pass_verbose_0_0(t);
  s_26 = t;
  t = (ATerm) ATinsert(CheckATermList(s_26), term_v_38);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  t = term_u_44;
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm t_26 = NULL;
  t = pass_verbose_0_0(t);
  t_26 = t;
  t = (ATerm) ATinsert(CheckATermList(t_26), term_v_38);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = save_as_1_0(o_17, t);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  t = term_i_46;
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_x_38;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL;
  v_26 = t;
  {
    ATerm j_46 = t;
    int l_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_26 = ATgetArgument(t, 0);
            {
              ATerm v_16 = NULL,w_6 = NULL;
              t = SSLgetAnnotations(v_26);
              v_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_26);
              w_6 = t;
              t = SSLsetAnnotations(w_6, v_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_26;
          }
        LocalPopChoice(l_46);
        t = xtc_transform_file_2_0(r_17, s_17, t);
      }
    else
      {
        t = j_46;
        t = xtc_transform_term_2_0(t_17, u_17, t);
      }
  }
  t = if_keep1_1_0(v_17, t);
  u_26 = t;
  {
    ATerm m_46 = t;
    int o_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_27 = ATgetArgument(t, 0);
            {
              ATerm z_16 = NULL,x_6 = NULL;
              t = SSLgetAnnotations(u_26);
              z_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_27);
              x_6 = t;
              t = SSLsetAnnotations(x_6, z_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_26;
          }
        LocalPopChoice(o_46);
        t = xtc_transform_file_2_0(z_17, a_18, t);
      }
    else
      {
        t = m_46;
        t = xtc_transform_term_2_0(b_18, c_18, t);
      }
  }
  t = if_keep1_1_0(d_18, t);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = term_w_44;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm b_27 = NULL;
  t = pass_verbose_0_0(t);
  b_27 = t;
  t = (ATerm) ATinsert(CheckATermList(b_27), term_v_38);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = term_w_44;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm c_27 = NULL;
  t = pass_verbose_0_0(t);
  c_27 = t;
  t = (ATerm) ATinsert(CheckATermList(c_27), term_v_38);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = save_as_1_0(w_17, t);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = term_r_46;
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm o_27 = NULL;
  t = pass_verbose_0_0(t);
  o_27 = t;
  t = (ATerm) ATinsert(CheckATermList(o_27), term_v_38);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm p_27 = NULL;
  t = pass_verbose_0_0(t);
  p_27 = t;
  t = (ATerm) ATinsert(CheckATermList(p_27), term_v_38);
  return(t);
}
static ATerm d_18 (ATerm t)
{
  t = save_as_1_0(f_18, t);
  return(t);
}
static ATerm f_18 (ATerm t)
{
  t = term_t_46;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(j_8, t);
  t = profile_p__2_0(k_8, m_8, t);
  return(t);
}
static ATerm t_18 (ATerm t)
{
  t = term_u_39;
  return(t);
}
static ATerm u_18 (ATerm t)
{
  ATerm y_29 = NULL;
  t = pass_verbose_0_0(t);
  y_29 = t;
  t = (ATerm) ATinsert(CheckATermList(y_29), term_w_39);
  return(t);
}
static ATerm y_18 (ATerm t)
{
  t = term_u_39;
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm b_30 = NULL;
  t = pass_verbose_0_0(t);
  b_30 = t;
  t = (ATerm) ATinsert(CheckATermList(b_30), term_w_39);
  return(t);
}
ATerm save_as_1_0 (ATerm q_83 (ATerm), ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,a_29 = NULL,b_29 = NULL,d_29 = NULL,f_29 = NULL,g_29 = NULL;
  a_29 = t;
  {
    static ATerm i_18 (ATerm t)
    {
      static ATerm p_18 (ATerm t)
      {
        ATerm i_29 = NULL,j_29 = NULL;
        t = q_83(t);
        i_29 = t;
        t = term_w_46;
        j_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_46, i_29);
        t = v_14(j_29, i_29, t);
        return(t);
      }
      t = get_outfile_1_0(p_18, t);
      if(((w_28 != NULL) && (w_28 != t)))
        _fail(t);
      else
        w_28 = t;
      return(t);
    }
    t = copy_to_1_0(i_18, t);
  }
  {
    ATerm x_46 = t;
    int z_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_29 = NULL,x_29 = NULL;
        x_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            w_29 = ATgetArgument(t, 0);
            {
              ATerm e_17 = NULL,l_8 = NULL;
              t = SSLgetAnnotations(x_29);
              e_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_29);
              l_8 = t;
              t = SSLsetAnnotations(l_8, e_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_29;
          }
        LocalPopChoice(z_46);
        t = xtc_transform_file_2_0(t_18, u_18, t);
      }
    else
      {
        t = x_46;
        t = xtc_transform_term_2_0(y_18, c_19, t);
      }
  }
  {
    static ATerm f_19 (ATerm t)
    {
      ATerm c_30 = NULL;
      t = term_a_47;
      c_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), term_a_47);
      t = v_14(not_null(w_28), c_30, t);
      if(((x_28 != NULL) && (x_28 != t)))
        _fail(t);
      else
        x_28 = t;
      return(t);
    }
    t = copy_to_1_0(f_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_47), not_null(x_28)), term_e_47), not_null(w_28)), term_d_47);
  g_29 = t;
  t = SSL_concat_strings(g_29);
  b_29 = t;
  t = term_v_35;
  d_29 = t;
  t = (ATerm) ATinsert(ATempty, b_29);
  f_29 = t;
  t = SSL_printnl(d_29, f_29);
  t = a_29;
  return(t);
}
ATerm if_keep2_1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm h_30 = NULL;
  h_30 = t;
  {
    ATerm h_47 = t;
    int i_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
        t = term_q_35;
        k_30 = t;
        t = term_q_40;
        l_30 = t;
        t = term_r_40;
        t = p_14(k_30, l_30, t);
        j_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_30, term_t_35);
        t = geq_0_0(t);
        t = h_30;
        t = b_109(t);
        LocalPopChoice(i_47);
      }
    else
      {
        t = h_47;
        t = h_30;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
  t = term_r_35;
  {
    ATerm k_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_30 = NULL,w_30 = NULL;
        t = term_q_35;
        v_30 = t;
        t = term_r_35;
        w_30 = t;
        t = term_s_35;
        t = p_14(v_30, w_30, t);
        LocalPopChoice(l_47);
      }
    else
      {
        t = k_47;
        t = term_x_38;
      }
  }
  s_30 = t;
  t = term_x_38;
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_30, term_x_38);
  t = w_13(s_30, u_30, t);
  t_30 = t;
  t = SSL_int_to_string(t_30);
  r_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_30), term_r_35);
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_47 = ATgetArgument(t, 0);
      if(match_cons(m_47, sym_Stream_1))
        {
          z_30 = ATgetArgument(m_47, 0);
        }
      else
        _fail(t);
      a_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_13(z_30, a_31, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  y_30 = t;
  t = xtc_new_file_0_0(t);
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_30, y_30);
  t = n_13(j_19, x_30, y_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, x_30);
  t = xtc_transform_file_2_0(a_117, b_117, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm o_13 (ATerm d_49, ATerm e_49, ATerm t)
{
  t = SSL_execvp(d_49, e_49);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm d_32 = NULL,h_32 = NULL,j_32 = NULL,l_32 = NULL;
  d_32 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      h_32 = ATgetArgument(t, 0);
      {
        ATerm m_17 = NULL,n_17 = NULL;
        t = SSL_int_to_string(h_32);
        m_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_47), m_17), term_n_47);
        n_17 = t;
        t = SSL_concat_strings(n_17);
      }
    }
  else
    {
      ATerm x_17 = NULL,y_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          h_32 = ATgetArgument(t, 0);
          j_32 = ATgetArgument(t, 1);
          l_32 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(j_32);
      x_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_32), term_q_47), x_17), term_p_47), h_32);
      y_17 = t;
      t = SSL_concat_strings(y_17);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  {
    ATerm r_47 = t;
    int s_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm l_19 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm t_47 = ATgetArgument(t, 0);
              if((p_32 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm u_47 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_54), term_d_54), term_s_53), term_m_53), term_f_53), term_y_52), term_r_52), term_m_52), term_h_52), term_y_51), term_o_51), term_h_51), term_d_51), term_u_50), term_p_50), term_l_50), term_z_49), term_w_49), term_s_49), term_n_49), term_j_49), term_f_49), term_z_48), term_v_48), term_r_48), term_e_48), term_b_48), term_y_47);
        t = fetch_elem_1_0(l_19, t);
        LocalPopChoice(s_47);
      }
    else
      {
        t = r_47;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, p_32);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm t_32 = NULL,i_33 = NULL;
  t_32 = t;
  {
    ATerm k_54 = t;
    int l_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_54 = ATgetArgument(t, 0);
            i_33 = ATgetArgument(t, 1);
            {
              ATerm o_54 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_54);
        {
          ATerm p_54 = t;
          int q_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_18 = NULL,g_18 = NULL,h_18 = NULL;
              t = i_33;
              {
                ATerm t_54 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_54;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              e_18 = t;
              t = term_v_35;
              g_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_18), term_w_54);
              h_18 = t;
              t = SSL_printnl(g_18, h_18);
              t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(ATinsert(ATempty, e_18), term_w_54));
              LocalPopChoice(q_54);
            }
          else
            {
              t = p_54;
              t = t_32;
            }
        }
      }
    else
      {
        t = k_54;
        t = t_32;
      }
  }
  t = t_32;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm l_109 (ATerm), ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL;
  v_33 = t;
  t = fork_0_0(t);
  u_33 = t;
  {
    ATerm x_54 = t;
    int y_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = v_33;
        t = l_109(t);
        LocalPopChoice(y_54);
      }
    else
      {
        t = x_54;
        t = SSL_waitpid(u_33);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_54 = ATgetArgument(t, 0);
            if(((ATgetType(z_54) != AT_INT) || (ATgetInt((ATermInt) z_54) != 0)))
              _fail(t);
            {
              ATerm a_55 = ATgetArgument(t, 1);
            }
            {
              ATerm b_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = v_33;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm b_118 (ATerm), ATerm t)
{
  ATerm b_34 = NULL,e_34 = NULL;
  e_34 = t;
  t = b_118(t);
  t = xtc_find_0_0(t);
  b_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_34, e_34);
  {
    static ATerm q_19 (ATerm t)
    {
      ATerm f_34 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, b_34, e_34);
      t = o_13(b_34, e_34, t);
      t = term_f_36;
      f_34 = t;
      t = SSL_exit(f_34);
      return(t);
    }
    t = fork_and_wait_1_0(q_19, t);
  }
  t = e_34;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL;
  h_34 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm j_34 = NULL,k_34 = NULL;
      t = h_34;
      t = xtc_new_file_0_0(t);
      j_34 = t;
      t = x_0(t);
      k_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_34, (ATerm) ATinsert(ATinsert(ATempty, j_34), term_a_36));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_34);
    }
  else
    {
      ATerm m_34 = NULL,n_34 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_34;
      t = xtc_new_file_0_0(t);
      m_34 = t;
      t = x_0(t);
      n_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_34), term_a_36), i_34), term_c_55));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_34);
    }
  return(t);
}
ATerm comp_0_2 (ATerm d_21, ATerm e_21, ATerm t)
{
  ATerm d_55 = t;
  int e_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_50 = NULL,v_50 = NULL;
      v_50 = t;
      if(match_cons(t, sym_FILE_1))
        {
          t_50 = ATgetArgument(t, 0);
          {
            ATerm n_30 = NULL,p_8 = NULL;
            t = SSLgetAnnotations(v_50);
            n_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, t_50);
            p_8 = t;
            t = SSLsetAnnotations(p_8, n_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_50;
        }
      LocalPopChoice(e_55);
      {
        static ATerm r_19 (ATerm t)
        {
          t = d_21;
          return(t);
        }
        static ATerm t_19 (ATerm t)
        {
          ATerm x_50 = NULL;
          t = pass_verbose_0_0(t);
          x_50 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_21), x_50), (ATerm) ATinsert(ATempty, term_v_38));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(r_19, t_19, t);
      }
    }
  else
    {
      t = d_55;
      {
        static ATerm v_19 (ATerm t)
        {
          t = d_21;
          return(t);
        }
        static ATerm z_19 (ATerm t)
        {
          ATerm y_50 = NULL;
          t = pass_verbose_0_0(t);
          y_50 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_21), y_50), (ATerm) ATinsert(ATempty, term_v_38));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(v_19, z_19, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
  r_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_34;
      t = j_99(t);
    }
  else
    {
      ATerm y_34 = NULL,z_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_34 = ATgetFirst((ATermList) t);
          t_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_34;
      t = l_99(t);
      y_34 = t;
      t = t_34;
      t = foldr_3_0(j_99, k_99, l_99, t);
      z_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_34, z_34);
      t = k_99(t);
    }
  return(t);
}
static ATerm a_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm h_20 (ATerm t)
{
  ATerm e_35 = NULL;
  e_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_35), term_f_55);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL;
  t = term_q_35;
  c_35 = t;
  t = term_f_55;
  d_35 = t;
  t = term_g_55;
  t = p_14(c_35, d_35, t);
  t = foldr_3_0(a_20, conc_0_0, h_20, t);
  return(t);
}
static ATerm i_20 (ATerm t)
{
  t = term_h_55;
  return(t);
}
static ATerm j_20 (ATerm t)
{
  ATerm k_20 = NULL;
  t = pass_verbose_0_0(t);
  k_20 = t;
  t = (ATerm) ATinsert(CheckATermList(k_20), term_v_38);
  return(t);
}
static ATerm m_20 (ATerm t)
{
  t = term_h_55;
  return(t);
}
static ATerm r_20 (ATerm t)
{
  ATerm n_20 = NULL;
  t = pass_verbose_0_0(t);
  n_20 = t;
  t = (ATerm) ATinsert(CheckATermList(n_20), term_v_38);
  return(t);
}
static ATerm s_20 (ATerm t)
{
  t = get_outfile_1_0(v_20, t);
  return(t);
}
static ATerm v_20 (ATerm t)
{
  t = term_i_55;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm s_36 = NULL;
  s_36 = t;
  {
    ATerm j_55 = t;
    int k_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL,h_19 = NULL,o_19 = NULL,p_19 = NULL,w_19 = NULL;
        t = term_q_35;
        p_19 = t;
        t = term_l_55;
        w_19 = t;
        t = term_m_55;
        t = p_14(p_19, w_19, t);
        t = s_36;
        {
          ATerm n_55 = t;
          int o_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_36;
              {
                ATerm p_55 = t;
                int q_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        g_20 = ATgetArgument(t, 0);
                        {
                          ATerm h_21 = NULL,r_8 = NULL;
                          t = SSLgetAnnotations(s_36);
                          h_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, g_20);
                          r_8 = t;
                          t = SSLsetAnnotations(r_8, h_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = s_36;
                      }
                    LocalPopChoice(q_55);
                    t = xtc_transform_file_2_0(i_20, j_20, t);
                  }
                else
                  {
                    t = p_55;
                    t = xtc_transform_term_2_0(m_20, r_20, t);
                  }
              }
              LocalPopChoice(o_55);
            }
          else
            {
              t = n_55;
              {
                ATerm o_20 = NULL,t_20 = NULL,u_20 = NULL;
                t = term_v_35;
                t_20 = t;
                t = (ATerm) ATinsert(ATempty, term_r_55);
                u_20 = t;
                t = SSL_printnl(t_20, u_20);
                t = term_x_38;
                o_20 = t;
                t = SSL_exit(o_20);
                t = (ATerm) ATinsert(ATempty, term_r_55);
              }
            }
        }
        t = copy_to_1_0(s_20, t);
        z_18 = t;
        t = term_v_35;
        h_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_55));
        o_19 = t;
        t = SSL_printnl(h_19, o_19);
        t = z_18;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(k_55);
      }
    else
      {
        t = j_55;
        t = s_36;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm e_109 (ATerm), ATerm t)
{
  ATerm b_37 = NULL;
  b_37 = t;
  {
    ATerm t_55 = t;
    int u_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
        t = term_q_35;
        e_37 = t;
        t = term_q_40;
        f_37 = t;
        t = term_r_40;
        t = p_14(e_37, f_37, t);
        d_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_37, term_i_45);
        t = geq_0_0(t);
        t = b_37;
        t = e_109(t);
        LocalPopChoice(u_55);
      }
    else
      {
        t = t_55;
        t = b_37;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm v_55 = t;
  int w_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_37 = NULL,m_37 = NULL;
      t = term_q_35;
      l_37 = t;
      t = term_a_56;
      m_37 = t;
      t = term_b_56;
      t = p_14(l_37, m_37, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_56);
      LocalPopChoice(w_55);
    }
  else
    {
      t = v_55;
      t = (ATerm) ATinsert(ATempty, term_d_56);
    }
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm q_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,y_37 = NULL;
  u_37 = t;
  t = term_e_56;
  q_37 = t;
  t = term_q_35;
  w_37 = t;
  t = term_f_56;
  y_37 = t;
  t = term_g_56;
  t = p_14(w_37, y_37, t);
  v_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_37), term_f_56);
  t_37 = t;
  t = u_37;
  t = comp_0_2(q_37, t_37, t);
  return(t);
}
ATerm if_keep3_1_0 (ATerm c_109 (ATerm), ATerm t)
{
  ATerm a_38 = NULL;
  a_38 = t;
  {
    ATerm h_56 = t;
    int i_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
        t = term_q_35;
        e_38 = t;
        t = term_q_40;
        f_38 = t;
        t = term_r_40;
        t = p_14(e_38, f_38, t);
        d_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_38, term_i_39);
        t = geq_0_0(t);
        t = a_38;
        t = c_109(t);
        LocalPopChoice(i_56);
      }
    else
      {
        t = h_56;
        t = a_38;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_92 (ATerm), ATerm t)
{
  ATerm l_38 = NULL;
  static ATerm w_20 (ATerm t)
  {
    t = u_92(t);
    if(((l_38 != NULL) && (l_38 != t)))
      _fail(t);
    else
      l_38 = t;
    return(t);
  }
  t = fetch_1_0(w_20, t);
  t = not_null(l_38);
  return(t);
}
static ATerm y_20 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL;
  s_40 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      t_40 = ATgetArgument(t, 0);
      {
        ATerm s_21 = NULL,u_21 = NULL,a_10 = NULL;
        t = SSLgetAnnotations(s_40);
        s_21 = t;
        t = t_40;
        t = fetch_elem_1_0(b_21, t);
        u_21 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, u_21);
        a_10 = t;
        t = SSLsetAnnotations(a_10, s_21);
      }
    }
  else
    {
      ATerm c_23 = NULL,m_23 = NULL,c_10 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          t_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_40);
      c_23 = t;
      t = t_40;
      t = fetch_elem_1_0(c_21, t);
      m_23 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, m_23);
      c_10 = t;
      t = SSLsetAnnotations(c_10, c_23);
    }
  return(t);
}
static ATerm b_21 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,k_22 = NULL;
  c_22 = t;
  {
    ATerm j_56 = t;
    int k_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            d_22 = ATgetArgument(t, 0);
            k_22 = ATgetArgument(t, 1);
            {
              ATerm l_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_56);
        t = d_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = k_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_22;
      }
    else
      {
        t = j_56;
        if(match_cons(t, sym_RDef_3))
          {
            d_22 = ATgetArgument(t, 0);
            k_22 = ATgetArgument(t, 1);
            {
              ATerm q_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = d_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = k_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_22;
      }
  }
  return(t);
}
static ATerm c_21 (ATerm t)
{
  ATerm t_23 = NULL,w_23 = NULL,x_23 = NULL;
  t_23 = t;
  {
    ATerm r_56 = t;
    int s_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            w_23 = ATgetArgument(t, 0);
            x_23 = ATgetArgument(t, 1);
            {
              ATerm g_57 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_56);
        t = w_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = x_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_23;
      }
    else
      {
        t = r_56;
        if(match_cons(t, sym_RDef_3))
          {
            w_23 = ATgetArgument(t, 0);
            x_23 = ATgetArgument(t, 1);
            {
              ATerm h_57 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = w_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = x_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_23;
      }
  }
  return(t);
}
ATerm check_other_main_0_0 (ATerm t)
{
  ATerm l_39 = NULL,n_39 = NULL,p_39 = NULL;
  t = fetch_elem_1_0(y_20, t);
  l_39 = t;
  t = term_v_35;
  n_39 = t;
  t = (ATerm) ATinsert(ATempty, term_i_57);
  p_39 = t;
  t = SSL_printnl(n_39, p_39);
  t = l_39;
  return(t);
}
static ATerm l_13 (ATerm j_21, ATerm k_21, ATerm t)
{
  t = j_21;
  {
    ATerm j_57 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_57;
      }
  }
  t = k_21;
  {
    ATerm k_57 = t;
    int l_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(l_57);
      }
    else
      {
        t = k_57;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(k_21), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_m_57, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, j_21), (ATerm) ATempty))))));
  return(t);
}
static ATerm m_13 (ATerm e_23, ATerm f_23, ATerm t)
{
  ATerm e_41 = NULL;
  t = SSL_write_term_to_stream_baf(e_23, f_23);
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_41);
  return(t);
}
static ATerm n_13 (ATerm z_91 (ATerm), ATerm j_196, ATerm o_23, ATerm t)
{
  ATerm f_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_196, term_n_57);
  t = i_14(t);
  f_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_41, o_23);
  t = z_91(t);
  t = fclose_0_0(t);
  t = o_23;
  return(t);
}
static ATerm q_13 (ATerm r_105 (ATerm), ATerm x_42, ATerm v_42, ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,s_41 = NULL,u_41 = NULL;
  m_41 = t;
  t = r_105(t);
  h_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_41, x_42, v_42);
  t = q_14(h_41, x_42, v_42, t);
  {
    ATerm o_57 = t;
    int p_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_41 = NULL;
        t = term_q_57;
        v_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_41, term_q_57);
        t = p_14(h_41, v_41, t);
        LocalPopChoice(p_57);
      }
    else
      {
        t = o_57;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_41 = ATgetFirst((ATermList) t);
      l_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, h_41, term_q_57, (ATerm) ATinsert(CheckATermList(l_41), (ATerm) ATinsert(CheckATermList(i_41), x_42)));
  t = lookup_table_0_1(h_41, t);
  u_41 = t;
  t = term_q_57;
  n_41 = t;
  t = (ATerm) ATinsert(CheckATermList(l_41), (ATerm) ATinsert(CheckATermList(i_41), x_42));
  o_41 = t;
  t = u_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(n_41, o_41, s_41, t);
  t = m_41;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm x_41 = NULL;
  ATerm r_57 = t;
  int s_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_42 = NULL,i_24 = NULL;
      c_42 = t;
      t = term_t_57;
      i_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_42, term_t_57);
      t = v_14(c_42, i_24, t);
      x_41 = t;
      t = SSL_mkstemp(x_41);
      LocalPopChoice(s_57);
    }
  else
    {
      t = r_57;
      {
        ATerm g_42 = NULL;
        t = term_u_57;
        g_42 = t;
        t = SSL_perror(g_42);
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
static ATerm g_21 (ATerm t)
{
  t = term_v_57;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm k_42 = NULL,m_42 = NULL,o_42 = NULL,b_43 = NULL,c_43 = NULL;
  t = P__tmpdir_0_0(t);
  b_43 = t;
  t = term_w_57;
  c_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_43, term_w_57);
  t = v_14(b_43, c_43, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      m_42 = ATgetArgument(t, 0);
      k_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_w_36;
  o_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_42, term_w_36);
  t = q_13(g_21, m_42, o_42, t);
  t = SSL_close(k_42);
  t = m_42;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm g_43 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_x_57;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm l_43 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          g_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_y_57);
      l_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_43, (ATerm) ATinsert(ATempty, term_y_57));
      t = j_14(g_43, l_43, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm i_21 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_57 = ATgetArgument(t, 0);
      if(match_cons(z_57, sym_Stream_1))
        {
          q_43 = ATgetArgument(z_57, 0);
        }
      else
        _fail(t);
      r_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_13(q_43, r_43, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm c_117 (ATerm), ATerm t)
{
  ATerm n_43 = NULL,p_43 = NULL;
  t = read_from_0_0(t);
  t = c_117(t);
  p_43 = t;
  t = xtc_new_file_0_0(t);
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_43, p_43);
  t = n_13(i_21, n_43, p_43, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_43);
  return(t);
}
static ATerm l_21 (ATerm t)
{
  t = debug_1_0(m_21, t);
  return(t);
}
static ATerm m_21 (ATerm t)
{
  t = term_a_58;
  return(t);
}
static ATerm o_21 (ATerm t)
{
  t = save_as_1_0(q_21, t);
  return(t);
}
static ATerm q_21 (ATerm t)
{
  t = term_b_58;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm y_43 = NULL,v_44 = NULL;
  v_44 = t;
  {
    ATerm c_58 = t;
    int d_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_25 = NULL,i_25 = NULL;
        t = term_q_35;
        h_25 = t;
        t = term_e_58;
        i_25 = t;
        t = term_f_58;
        t = p_14(h_25, i_25, t);
        y_43 = t;
        t = if_verbose2_1_0(l_21, t);
        t = v_44;
        {
          ATerm v_58 = t;
          int w_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_25 = NULL,o_25 = NULL;
              t = term_q_35;
              m_25 = t;
              t = term_b_38;
              o_25 = t;
              t = term_c_38;
              t = p_14(m_25, o_25, t);
              t = v_44;
              LocalPopChoice(w_58);
            }
          else
            {
              t = v_58;
              {
                static ATerm n_21 (ATerm t)
                {
                  ATerm x_58 = t;
                  int y_58 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          p_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = l_13(y_43, p_26, t);
                      LocalPopChoice(y_58);
                    }
                  else
                    {
                      t = x_58;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(n_21, t);
              }
            }
        }
        LocalPopChoice(d_58);
      }
    else
      {
        t = c_58;
        t = v_44;
      }
  }
  t = if_keep3_1_0(o_21, t);
  return(t);
}
static ATerm v_21 (ATerm t)
{
  ATerm t_45 = NULL;
  t_45 = t;
  {
    ATerm a_59 = t;
    int d_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(t_45);
        LocalPopChoice(d_59);
      }
    else
      {
        t = a_59;
        t = t_45;
      }
  }
  return(t);
}
static ATerm x_21 (ATerm t)
{
  t = term_v_57;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm h_45 = NULL,j_45 = NULL;
  static ATerm t_21 (ATerm t)
  {
    ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL;
    m_45 = t;
    t = term_v_57;
    n_45 = t;
    t = term_q_57;
    o_45 = t;
    t = term_e_59;
    t = p_14(n_45, o_45, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((h_45 != NULL) && (h_45 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          h_45 = ATgetFirst((ATermList) t);
        {
          ATerm f_59 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = h_45;
    t = map_1_0(v_21, t);
    t = m_45;
    t = end_scope_1_0(x_21, t);
    return(t);
  }
  t = repeat_2_0(t_21, _id, t);
  j_45 = t;
  t = SSL_exit(j_45);
  return(t);
}
static ATerm a_22 (ATerm t)
{
  ATerm h_59 = t;
  int i_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_46 = NULL,q_46 = NULL;
      t = term_q_35;
      p_46 = t;
      t = term_a_36;
      q_46 = t;
      t = term_b_36;
      t = p_14(p_46, q_46, t);
      LocalPopChoice(i_59);
    }
  else
    {
      t = h_59;
      t = term_a_37;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm n_46 = NULL;
  n_46 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_27 = NULL,s_27 = NULL;
      t = term_a_36;
      {
        ATerm j_59 = t;
        int m_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_27 = NULL,u_27 = NULL;
            t = term_q_35;
            t_27 = t;
            t = term_a_36;
            u_27 = t;
            t = term_b_36;
            t = p_14(t_27, u_27, t);
            LocalPopChoice(m_59);
          }
        else
          {
            t = j_59;
            t = term_a_37;
          }
      }
      l_27 = t;
      t = term_x_57;
      s_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_x_57, l_27);
      t = y_13(s_27, l_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm n_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_46;
      t = copy_to_1_0(a_22, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_l_35;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL,b_47 = NULL,c_47 = NULL;
  t = p_83(t);
  u_46 = t;
  t = term_q_35;
  b_47 = t;
  t = term_f_40;
  c_47 = t;
  t = term_g_40;
  t = p_14(b_47, c_47, t);
  v_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_46, u_46);
  t = v_14(v_46, u_46, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm z_0 (ATerm), ATerm t)
{
  ATerm f_48 = NULL,i_48 = NULL;
  f_48 = t;
  if(match_cons(t, sym_FILE_1))
    {
      i_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_59 = t;
    int p_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_28 = NULL;
        t = f_48;
        t = z_0(t);
        p_28 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = p_28;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = p_28;
          }
        t = (ATerm) ATmakeAppl(sym__2, i_48, p_28);
        t = y_13(i_48, p_28, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_48);
        LocalPopChoice(p_59);
      }
    else
      {
        t = o_59;
        {
          ATerm r_59 = t;
          int s_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_28 = NULL;
              t = f_48;
              t = z_0(t);
              y_28 = t;
              {
                ATerm t_59 = t;
                if((PushChoice() == 0))
                  {
                    ATerm z_28 = NULL;
                    z_28 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = z_28;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = z_28;
                          }
                        else
                          {
                            t = z_28;
                            if((i_48 != t))
                              {
                                _fail(t);
                              }
                            t = z_28;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_59;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, i_48, y_28);
              t = y_13(i_48, y_28, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_48);
              LocalPopChoice(s_59);
            }
          else
            {
              t = r_59;
              t = f_48;
              t = z_0(t);
              if((i_48 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_48);
            }
        }
      }
  }
  return(t);
}
static ATerm b_22 (ATerm t)
{
  t = get_outfile_1_0(e_22, t);
  return(t);
}
static ATerm e_22 (ATerm t)
{
  t = term_w_59;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm p_49 = NULL;
  p_49 = t;
  {
    ATerm x_59 = t;
    int y_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_29 = NULL,u_29 = NULL,z_29 = NULL,a_30 = NULL,e_30 = NULL;
        t = term_q_35;
        a_30 = t;
        t = term_a_60;
        e_30 = t;
        t = term_d_60;
        t = p_14(a_30, e_30, t);
        t = p_49;
        t = copy_to_1_0(b_22, t);
        t_29 = t;
        t = term_v_35;
        u_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_60));
        z_29 = t;
        t = SSL_printnl(u_29, z_29);
        t = t_29;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(y_59);
      }
    else
      {
        t = x_59;
        t = p_49;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,i_51 = NULL,j_51 = NULL;
  t = term_q_40;
  {
    ATerm f_60 = t;
    int h_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_51 = NULL,q_51 = NULL;
        t = term_q_35;
        k_51 = t;
        t = term_q_40;
        q_51 = t;
        t = term_r_40;
        t = p_14(k_51, q_51, t);
        LocalPopChoice(h_60);
      }
    else
      {
        t = f_60;
        t = term_x_38;
      }
  }
  b_51 = t;
  t = term_x_38;
  j_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_51, term_x_38);
  t = w_13(b_51, j_51, t);
  i_51 = t;
  t = SSL_int_to_string(i_51);
  a_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_51), term_q_40);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,w_51 = NULL,a_52 = NULL;
  t = term_q_35;
  w_51 = t;
  t = term_k_60;
  a_52 = t;
  t = term_l_60;
  t = p_14(w_51, a_52, t);
  r_51 = t;
  t = term_m_60;
  t = xtc_find_path_0_0(t);
  s_51 = t;
  t = term_o_60;
  t = xtc_find_path_0_0(t);
  t_51 = t;
  t = term_r_60;
  t = xtc_find_path_0_0(t);
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_51, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_51), term_k_60), t_51), term_k_60), s_51), term_k_60));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,i_52 = NULL,o_52 = NULL,t_52 = NULL;
  o_52 = t;
  t = term_w_60;
  c_52 = t;
  t = o_52;
  {
    ATerm x_60 = t;
    int y_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_52 = NULL,v_52 = NULL;
        t = term_q_35;
        u_52 = t;
        t = term_a_36;
        v_52 = t;
        t = term_b_36;
        t = p_14(u_52, v_52, t);
        LocalPopChoice(y_60);
      }
    else
      {
        t = x_60;
        {
          ATerm i_53 = NULL,l_53 = NULL;
          t = term_q_35;
          i_53 = t;
          t = term_f_40;
          l_53 = t;
          t = term_g_40;
          t = p_14(i_53, l_53, t);
        }
      }
  }
  t_52 = t;
  t = o_52;
  t = get_include_dirs_0_0(t);
  e_52 = t;
  t = o_52;
  t = pass_keep_0_0(t);
  f_52 = t;
  t = term_z_60;
  {
    ATerm b_61 = t;
    int c_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_53 = NULL,p_53 = NULL;
        t = term_q_35;
        n_53 = t;
        t = term_z_60;
        p_53 = t;
        t = term_d_61;
        t = p_14(n_53, p_53, t);
        LocalPopChoice(c_61);
        t = (ATerm) ATinsert(ATempty, term_z_60);
      }
    else
      {
        t = b_61;
        t = (ATerm) ATempty;
      }
  }
  i_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_52), f_52), e_52), (ATerm) ATinsert(ATinsert(ATempty, t_52), term_e_61));
  t = concat_0_0(t);
  d_52 = t;
  t = o_52;
  t = comp_0_2(c_52, d_52, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm a_108 (ATerm), ATerm t)
{
  ATerm t_53 = NULL;
  t_53 = t;
  {
    ATerm f_61 = t;
    int g_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL;
        t = term_q_35;
        w_53 = t;
        t = term_r_35;
        x_53 = t;
        t = term_s_35;
        t = p_14(w_53, x_53, t);
        v_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_53, term_i_39);
        t = geq_0_0(t);
        t = t_53;
        t = a_108(t);
        LocalPopChoice(g_61);
      }
    else
      {
        t = f_61;
        t = t_53;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL;
  s_54 = t;
  t = SSL_explode_string(s_54);
  {
    ATerm h_61 = t;
    int i_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm c_56 (ATerm t)
        {
          ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
          x_55 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_55 = ATgetFirst((ATermList) t);
              z_55 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm j_61 = t;
            int k_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_31 = NULL,t_31 = NULL,k_10 = NULL;
                t = SSLgetAnnotations(x_55);
                g_31 = t;
                t = z_55;
                t = c_56(t);
                t_31 = t;
                t = (ATerm) ATinsert(CheckATermList(t_31), y_55);
                k_10 = t;
                t = SSLsetAnnotations(k_10, g_31);
                LocalPopChoice(k_61);
              }
            else
              {
                t = j_61;
                {
                  ATerm l_61 = t;
                  int m_61 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_32 = NULL,l_10 = NULL;
                      t = SSLgetAnnotations(x_55);
                      g_32 = t;
                      t = y_55;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(z_55), y_55);
                      l_10 = t;
                      t = SSLsetAnnotations(l_10, g_32);
                      LocalPopChoice(m_61);
                    }
                  else
                    {
                      t = l_61;
                      {
                        ATerm c_33 = NULL,g_33 = NULL,m_10 = NULL;
                        t = SSLgetAnnotations(x_55);
                        c_33 = t;
                        t = y_55;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = z_55;
                        t = g_103(t);
                        g_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(g_33), y_55);
                        m_10 = t;
                        t = SSLsetAnnotations(m_10, c_33);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = c_56(t);
        LocalPopChoice(i_61);
      }
    else
      {
        t = h_61;
      }
  }
  r_54 = t;
  t = SSL_implode_string(r_54);
  return(t);
}
static ATerm g_22 (ATerm t)
{
  t = debug_1_0(l_22, t);
  return(t);
}
static ATerm l_22 (ATerm t)
{
  t = term_n_61;
  return(t);
}
static ATerm o_22 (ATerm t)
{
  t = debug_1_0(p_22, t);
  return(t);
}
static ATerm p_22 (ATerm t)
{
  t = term_o_61;
  return(t);
}
static ATerm r_13 (ATerm f_21, ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL;
  t = f_21;
  t = basename_1_0(_id, t);
  m_56 = t;
  t = if_verbose3_1_0(g_22, t);
  t = term_h_40;
  p_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_40, m_56);
  t = u_14(p_56, m_56, t);
  {
    ATerm s_61 = t;
    int t_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_57 = NULL,f_57 = NULL;
        t = term_q_35;
        e_57 = t;
        t = term_a_36;
        f_57 = t;
        t = term_b_36;
        t = p_14(e_57, f_57, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(t_61);
      }
    else
      {
        t = s_61;
        t = m_56;
      }
  }
  n_56 = t;
  t = if_verbose3_1_0(o_22, t);
  t = term_f_40;
  o_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_40, n_56);
  t = u_14(o_56, n_56, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_56);
  return(t);
}
static ATerm q_22 (ATerm t)
{
  t = debug_1_0(s_22, t);
  return(t);
}
static ATerm s_22 (ATerm t)
{
  t = term_u_61;
  return(t);
}
static ATerm t_22 (ATerm t)
{
  t = if_verbose1_1_0(x_22, t);
  return(t);
}
static ATerm u_22 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,p_36 = NULL,t_36 = NULL,u_36 = NULL,d_34 = NULL,g_34 = NULL,o_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      r_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_13(r_58, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm v_61 = t;
    int w_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL;
        s_58 = t;
        t = term_q_35;
        t_58 = t;
        t = term_b_38;
        u_58 = t;
        t = term_c_38;
        t = p_14(t_58, u_58, t);
        t = s_58;
        LocalPopChoice(w_61);
      }
    else
      {
        t = v_61;
        t = add_main_0_0(t);
      }
  }
  q_58 = t;
  {
    ATerm x_61 = t;
    int y_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_58 = ATgetArgument(t, 0);
            {
              ATerm s_33 = NULL,y_10 = NULL;
              t = SSLgetAnnotations(q_58);
              s_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_58);
              y_10 = t;
              t = SSLsetAnnotations(y_10, s_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_58;
          }
        LocalPopChoice(y_61);
        t = xtc_transform_file_2_0(y_22, z_22, t);
      }
    else
      {
        t = x_61;
        t = xtc_transform_term_2_0(a_23, b_23, t);
      }
  }
  p_58 = t;
  {
    ATerm a_62 = t;
    int b_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_59 = ATgetArgument(t, 0);
            {
              ATerm z_33 = NULL,a_11 = NULL;
              t = SSLgetAnnotations(p_58);
              z_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_59);
              a_11 = t;
              t = SSLsetAnnotations(a_11, z_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_58;
          }
        LocalPopChoice(b_62);
        t = xtc_transform_file_2_0(g_23, j_23, t);
      }
    else
      {
        t = a_62;
        t = xtc_transform_term_2_0(l_23, n_23, t);
      }
  }
  t = if_keep5_1_0(p_23, t);
  t = normalize_spec_0_0(t);
  t = if_keep5_1_0(s_23, t);
  o_34 = t;
  t = term_e_62;
  d_34 = t;
  t = o_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  g_34 = t;
  t = o_34;
  t = comp_0_2(d_34, g_34, t);
  o_58 = t;
  {
    ATerm f_62 = t;
    int g_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_59 = ATgetArgument(t, 0);
            {
              ATerm q_34 = NULL,b_11 = NULL;
              t = SSLgetAnnotations(o_58);
              q_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_59);
              b_11 = t;
              t = SSLsetAnnotations(b_11, q_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_58;
          }
        LocalPopChoice(g_62);
        t = xtc_transform_file_2_0(z_23, a_24, t);
      }
    else
      {
        t = f_62;
        t = xtc_transform_term_2_0(d_24, e_24, t);
      }
  }
  n_58 = t;
  {
    ATerm h_62 = t;
    int i_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_59 = ATgetArgument(t, 0);
            {
              ATerm b_35 = NULL,l_11 = NULL;
              t = SSLgetAnnotations(n_58);
              b_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_59);
              l_11 = t;
              t = SSLsetAnnotations(l_11, b_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_58;
          }
        LocalPopChoice(i_62);
        t = xtc_transform_file_2_0(f_24, g_24, t);
      }
    else
      {
        t = h_62;
        t = xtc_transform_term_2_0(h_24, k_24, t);
      }
  }
  t = if_keep5_1_0(l_24, t);
  m_58 = t;
  {
    ATerm k_62 = t;
    int n_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_60 = ATgetArgument(t, 0);
            {
              ATerm j_35 = NULL,j_12 = NULL;
              t = SSLgetAnnotations(m_58);
              j_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_60);
              j_12 = t;
              t = SSLsetAnnotations(j_12, j_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_58;
          }
        LocalPopChoice(n_62);
        t = xtc_transform_file_2_0(o_24, q_24, t);
      }
    else
      {
        t = k_62;
        t = xtc_transform_term_2_0(r_24, s_24, t);
      }
  }
  t = if_keep5_1_0(t_24, t);
  l_58 = t;
  {
    ATerm o_62 = t;
    int p_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            n_60 = ATgetArgument(t, 0);
            {
              ATerm p_35 = NULL,k_12 = NULL;
              t = SSLgetAnnotations(l_58);
              p_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_60);
              k_12 = t;
              t = SSLsetAnnotations(k_12, p_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_58;
          }
        LocalPopChoice(p_62);
        t = xtc_transform_file_2_0(w_24, y_24, t);
      }
    else
      {
        t = o_62;
        t = xtc_transform_term_2_0(a_25, c_25, t);
      }
  }
  t = if_keep5_1_0(d_25, t);
  t = output_frontend_0_0(t);
  {
    ATerm q_62 = t;
    int r_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL;
        s_60 = t;
        t = term_q_35;
        t_60 = t;
        t = term_b_38;
        u_60 = t;
        t = term_c_38;
        t = p_14(t_60, u_60, t);
        t = s_60;
        LocalPopChoice(r_62);
        {
          ATerm v_60 = NULL;
          v_60 = t;
          {
            ATerm u_62 = t;
            int w_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    a_61 = ATgetArgument(t, 0);
                    {
                      ATerm u_35 = NULL,l_12 = NULL;
                      t = SSLgetAnnotations(v_60);
                      u_35 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, a_61);
                      l_12 = t;
                      t = SSLsetAnnotations(l_12, u_35);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = v_60;
                  }
                LocalPopChoice(w_62);
                t = xtc_transform_file_2_0(f_25, j_25, t);
              }
            else
              {
                t = u_62;
                t = xtc_transform_term_2_0(r_25, s_25, t);
              }
          }
        }
      }
    else
      {
        t = q_62;
        {
          ATerm r_61 = NULL;
          r_61 = t;
          {
            ATerm z_62 = t;
            int a_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    z_61 = ATgetArgument(t, 0);
                    {
                      ATerm k_36 = NULL,m_12 = NULL;
                      t = SSLgetAnnotations(r_61);
                      k_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, z_61);
                      m_12 = t;
                      t = SSLsetAnnotations(m_12, k_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = r_61;
                  }
                LocalPopChoice(a_63);
                t = xtc_transform_file_2_0(t_25, v_25, t);
              }
            else
              {
                t = z_62;
                t = xtc_transform_term_2_0(w_25, x_25, t);
              }
          }
          t = if_keep2_1_0(y_25, t);
        }
      }
  }
  u_36 = t;
  t = term_b_63;
  p_36 = t;
  t = u_36;
  t = pass_warnings_0_0(t);
  t_36 = t;
  t = u_36;
  t = comp_0_2(p_36, t_36, t);
  k_58 = t;
  {
    ATerm c_63 = t;
    int d_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_62 = ATgetArgument(t, 0);
            {
              ATerm z_36 = NULL,p_12 = NULL;
              t = SSLgetAnnotations(k_58);
              z_36 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_62);
              p_12 = t;
              t = SSLsetAnnotations(p_12, z_36);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_58;
          }
        LocalPopChoice(d_63);
        t = xtc_transform_file_2_0(c_26, d_26, t);
      }
    else
      {
        t = c_63;
        t = xtc_transform_term_2_0(e_26, f_26, t);
      }
  }
  j_58 = t;
  {
    ATerm e_63 = t;
    int f_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_62 = ATgetArgument(t, 0);
            {
              ATerm r_37 = NULL,q_12 = NULL;
              t = SSLgetAnnotations(j_58);
              r_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_62);
              q_12 = t;
              t = SSLsetAnnotations(q_12, r_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_58;
          }
        LocalPopChoice(f_63);
        t = xtc_transform_file_2_0(h_26, i_26, t);
      }
    else
      {
        t = e_63;
        t = xtc_transform_term_2_0(l_26, m_26, t);
      }
  }
  t = if_keep2_1_0(n_26, t);
  return(t);
}
static ATerm x_22 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL;
  g_58 = t;
  t = term_v_35;
  h_58 = t;
  t = (ATerm) ATinsert(CheckATermList(g_58), term_g_63);
  i_58 = t;
  t = SSL_printnl(h_58, i_58);
  t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(CheckATermList(g_58), term_g_63));
  return(t);
}
static ATerm y_22 (ATerm t)
{
  t = term_h_63;
  return(t);
}
static ATerm z_22 (ATerm t)
{
  ATerm b_59 = NULL;
  t = pass_verbose_0_0(t);
  b_59 = t;
  t = (ATerm) ATinsert(CheckATermList(b_59), term_v_38);
  return(t);
}
static ATerm a_23 (ATerm t)
{
  t = term_h_63;
  return(t);
}
static ATerm b_23 (ATerm t)
{
  ATerm c_59 = NULL;
  t = pass_verbose_0_0(t);
  c_59 = t;
  t = (ATerm) ATinsert(CheckATermList(c_59), term_v_38);
  return(t);
}
static ATerm g_23 (ATerm t)
{
  t = term_i_63;
  return(t);
}
static ATerm j_23 (ATerm t)
{
  ATerm k_59 = NULL;
  t = pass_verbose_0_0(t);
  k_59 = t;
  t = (ATerm) ATinsert(CheckATermList(k_59), term_v_38);
  return(t);
}
static ATerm l_23 (ATerm t)
{
  t = term_i_63;
  return(t);
}
static ATerm n_23 (ATerm t)
{
  ATerm l_59 = NULL;
  t = pass_verbose_0_0(t);
  l_59 = t;
  t = (ATerm) ATinsert(CheckATermList(l_59), term_v_38);
  return(t);
}
static ATerm p_23 (ATerm t)
{
  t = save_as_1_0(q_23, t);
  return(t);
}
static ATerm q_23 (ATerm t)
{
  t = term_j_63;
  return(t);
}
static ATerm s_23 (ATerm t)
{
  t = save_as_1_0(y_23, t);
  return(t);
}
static ATerm y_23 (ATerm t)
{
  t = term_k_63;
  return(t);
}
static ATerm z_23 (ATerm t)
{
  t = term_l_63;
  return(t);
}
static ATerm a_24 (ATerm t)
{
  ATerm u_59 = NULL;
  t = pass_verbose_0_0(t);
  u_59 = t;
  t = (ATerm) ATinsert(CheckATermList(u_59), term_v_38);
  return(t);
}
static ATerm d_24 (ATerm t)
{
  t = term_l_63;
  return(t);
}
static ATerm e_24 (ATerm t)
{
  ATerm v_59 = NULL;
  t = pass_verbose_0_0(t);
  v_59 = t;
  t = (ATerm) ATinsert(CheckATermList(v_59), term_v_38);
  return(t);
}
static ATerm f_24 (ATerm t)
{
  t = term_m_63;
  return(t);
}
static ATerm g_24 (ATerm t)
{
  ATerm b_60 = NULL;
  t = pass_verbose_0_0(t);
  b_60 = t;
  t = (ATerm) ATinsert(CheckATermList(b_60), term_v_38);
  return(t);
}
static ATerm h_24 (ATerm t)
{
  t = term_m_63;
  return(t);
}
static ATerm k_24 (ATerm t)
{
  ATerm c_60 = NULL;
  t = pass_verbose_0_0(t);
  c_60 = t;
  t = (ATerm) ATinsert(CheckATermList(c_60), term_v_38);
  return(t);
}
static ATerm l_24 (ATerm t)
{
  t = save_as_1_0(m_24, t);
  return(t);
}
static ATerm m_24 (ATerm t)
{
  t = term_n_63;
  return(t);
}
static ATerm o_24 (ATerm t)
{
  t = term_o_63;
  return(t);
}
static ATerm q_24 (ATerm t)
{
  ATerm i_60 = NULL;
  t = pass_verbose_0_0(t);
  i_60 = t;
  t = (ATerm) ATinsert(CheckATermList(i_60), term_v_38);
  return(t);
}
static ATerm r_24 (ATerm t)
{
  t = term_o_63;
  return(t);
}
static ATerm s_24 (ATerm t)
{
  ATerm j_60 = NULL;
  t = pass_verbose_0_0(t);
  j_60 = t;
  t = (ATerm) ATinsert(CheckATermList(j_60), term_v_38);
  return(t);
}
static ATerm t_24 (ATerm t)
{
  t = save_as_1_0(u_24, t);
  return(t);
}
static ATerm u_24 (ATerm t)
{
  t = term_p_63;
  return(t);
}
static ATerm w_24 (ATerm t)
{
  t = term_r_63;
  return(t);
}
static ATerm y_24 (ATerm t)
{
  ATerm p_60 = NULL;
  t = pass_verbose_0_0(t);
  p_60 = t;
  t = (ATerm) ATinsert(CheckATermList(p_60), term_v_38);
  return(t);
}
static ATerm a_25 (ATerm t)
{
  t = term_r_63;
  return(t);
}
static ATerm c_25 (ATerm t)
{
  ATerm q_60 = NULL;
  t = pass_verbose_0_0(t);
  q_60 = t;
  t = (ATerm) ATinsert(CheckATermList(q_60), term_v_38);
  return(t);
}
static ATerm d_25 (ATerm t)
{
  t = save_as_1_0(e_25, t);
  return(t);
}
static ATerm e_25 (ATerm t)
{
  t = term_v_63;
  return(t);
}
static ATerm f_25 (ATerm t)
{
  t = term_h_55;
  return(t);
}
static ATerm j_25 (ATerm t)
{
  ATerm p_61 = NULL;
  t = pass_verbose_0_0(t);
  p_61 = t;
  t = (ATerm) ATinsert(CheckATermList(p_61), term_v_38);
  return(t);
}
static ATerm r_25 (ATerm t)
{
  t = term_h_55;
  return(t);
}
static ATerm s_25 (ATerm t)
{
  ATerm q_61 = NULL;
  t = pass_verbose_0_0(t);
  q_61 = t;
  t = (ATerm) ATinsert(CheckATermList(q_61), term_v_38);
  return(t);
}
static ATerm t_25 (ATerm t)
{
  t = term_w_63;
  return(t);
}
static ATerm v_25 (ATerm t)
{
  ATerm c_62 = NULL;
  t = pass_verbose_0_0(t);
  c_62 = t;
  t = (ATerm) ATinsert(CheckATermList(c_62), term_v_38);
  return(t);
}
static ATerm w_25 (ATerm t)
{
  t = term_w_63;
  return(t);
}
static ATerm x_25 (ATerm t)
{
  ATerm d_62 = NULL;
  t = pass_verbose_0_0(t);
  d_62 = t;
  t = (ATerm) ATinsert(CheckATermList(d_62), term_v_38);
  return(t);
}
static ATerm y_25 (ATerm t)
{
  t = save_as_1_0(b_26, t);
  return(t);
}
static ATerm b_26 (ATerm t)
{
  t = term_x_63;
  return(t);
}
static ATerm c_26 (ATerm t)
{
  t = term_z_63;
  return(t);
}
static ATerm d_26 (ATerm t)
{
  ATerm l_62 = NULL;
  t = pass_verbose_0_0(t);
  l_62 = t;
  t = (ATerm) ATinsert(CheckATermList(l_62), term_v_38);
  return(t);
}
static ATerm e_26 (ATerm t)
{
  t = term_z_63;
  return(t);
}
static ATerm f_26 (ATerm t)
{
  ATerm m_62 = NULL;
  t = pass_verbose_0_0(t);
  m_62 = t;
  t = (ATerm) ATinsert(CheckATermList(m_62), term_v_38);
  return(t);
}
static ATerm h_26 (ATerm t)
{
  t = term_c_64;
  return(t);
}
static ATerm i_26 (ATerm t)
{
  ATerm x_62 = NULL;
  t = pass_verbose_0_0(t);
  x_62 = t;
  t = (ATerm) ATinsert(CheckATermList(x_62), term_v_38);
  return(t);
}
static ATerm l_26 (ATerm t)
{
  t = term_c_64;
  return(t);
}
static ATerm m_26 (ATerm t)
{
  ATerm y_62 = NULL;
  t = pass_verbose_0_0(t);
  y_62 = t;
  t = (ATerm) ATinsert(CheckATermList(y_62), term_v_38);
  return(t);
}
static ATerm n_26 (ATerm t)
{
  t = save_as_1_0(o_26, t);
  return(t);
}
static ATerm o_26 (ATerm t)
{
  t = term_d_64;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(q_22, t);
  t = profile_p__2_0(t_22, u_22, t);
  return(t);
}
static ATerm p_14 (ATerm u_54, ATerm v_54, ATerm t)
{
  ATerm q_63 = NULL;
  t = lookup_table_0_1(u_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_14(v_54, q_63, t);
  return(t);
}
static ATerm s_13 (ATerm g_53, ATerm h_53, ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL;
  t_63 = t;
  {
    ATerm i_64 = t;
    int j_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_53, h_53);
        t = p_14(g_53, h_53, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_64 = ATgetFirst((ATermList) t);
            s_63 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_64);
        {
          ATerm u_63 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, g_53, h_53, s_63);
          t = lookup_table_0_1(g_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              u_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_14(h_53, s_63, u_63, t);
          t = (ATerm) ATmakeAppl(sym__3, g_53, h_53, s_63);
        }
      }
    else
      {
        t = i_64;
        {
          ATerm y_63 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, g_53, h_53);
          t = lookup_table_0_1(g_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              y_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_14(h_53, y_63, t);
          t = (ATerm) ATmakeAppl(sym__2, g_53, h_53);
        }
      }
  }
  t = t_63;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,k_64 = NULL;
  f_64 = t;
  t = o_105(t);
  e_64 = t;
  {
    ATerm o_64 = t;
    int p_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_64 = NULL;
        t = term_q_57;
        m_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_64, term_q_57);
        t = p_14(e_64, m_64, t);
        LocalPopChoice(p_64);
      }
    else
      {
        t = o_64;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_64 = ATgetFirst((ATermList) t);
      a_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_64, term_q_57, a_64);
  t = lookup_table_0_1(e_64, t);
  k_64 = t;
  t = term_q_57;
  g_64 = t;
  t = k_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(g_64, a_64, h_64, t);
  t = b_64;
  {
    static ATerm r_26 (ATerm t)
    {
      ATerm n_64 = NULL;
      n_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_64, n_64);
      t = s_13(e_64, n_64, t);
      return(t);
    }
    t = map_1_0(r_26, t);
  }
  t = f_64;
  return(t);
}
ATerm restore_always_2_0 (ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm t)
{
  ATerm q_64 = t;
  int w_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_84(t);
      t = t_84(t);
      LocalPopChoice(w_64);
    }
  else
    {
      t = q_64;
      t = t_84(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_105 (ATerm), ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,y_64 = NULL,b_65 = NULL;
  s_64 = t;
  t = n_105(t);
  r_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_64, term_q_57);
  {
    ATerm x_64 = t;
    int z_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_65 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_65 = ATgetArgument(t, 0);
            ATerm c_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_57;
        f_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_64, term_q_57);
        t = p_14(r_64, f_65, t);
        LocalPopChoice(z_64);
      }
    else
      {
        t = x_64;
        t = (ATerm) ATempty;
      }
  }
  t_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_64, term_q_57, (ATerm) ATinsert(CheckATermList(t_64), (ATerm) ATempty));
  t = lookup_table_0_1(r_64, t);
  b_65 = t;
  t = term_q_57;
  u_64 = t;
  t = (ATerm) ATinsert(CheckATermList(t_64), (ATerm) ATempty);
  v_64 = t;
  t = b_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(u_64, v_64, y_64, t);
  t = s_64;
  return(t);
}
static ATerm w_26 (ATerm t)
{
  t = term_v_57;
  return(t);
}
static ATerm y_26 (ATerm t)
{
  ATerm w_65 = NULL;
  w_65 = t;
  {
    ATerm d_65 = t;
    int e_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(w_65);
        LocalPopChoice(e_65);
      }
    else
      {
        t = d_65;
        t = w_65;
      }
  }
  return(t);
}
static ATerm a_27 (ATerm t)
{
  t = term_v_57;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm n_117 (ATerm), ATerm t)
{
  ATerm i_65 = NULL;
  static ATerm x_26 (ATerm t)
  {
    ATerm j_65 = NULL;
    j_65 = t;
    {
      ATerm g_65 = t;
      int h_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_65 = NULL,q_65 = NULL;
          t = term_v_57;
          n_65 = t;
          t = term_q_57;
          q_65 = t;
          t = term_e_59;
          t = p_14(n_65, q_65, t);
          LocalPopChoice(h_65);
        }
      else
        {
          t = g_65;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_65 != NULL) && (i_65 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_65 = ATgetFirst((ATermList) t);
        {
          ATerm k_65 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = i_65;
    t = map_1_0(y_26, t);
    t = j_65;
    t = end_scope_1_0(a_27, t);
    return(t);
  }
  t = begin_scope_1_0(w_26, t);
  t = restore_always_2_0(n_117, x_26, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_107 (ATerm), ATerm t)
{
  ATerm e_66 = NULL;
  e_66 = t;
  {
    ATerm l_65 = t;
    int m_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL;
        t = term_q_35;
        h_66 = t;
        t = term_r_35;
        i_66 = t;
        t = term_s_35;
        t = p_14(h_66, i_66, t);
        g_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_66, term_x_38);
        t = geq_0_0(t);
        t = e_66;
        t = y_107(t);
        LocalPopChoice(m_65);
      }
    else
      {
        t = l_65;
        t = e_66;
      }
  }
  return(t);
}
static ATerm u_13 (ATerm j_41, ATerm k_41, ATerm t)
{
  ATerm o_65 = t;
  int p_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_41, k_41);
      LocalPopChoice(p_65);
    }
  else
    {
      t = o_65;
      t = SSL_addr(j_41, k_41);
    }
  return(t);
}
static ATerm w_13 (ATerm p_41, ATerm q_41, ATerm t)
{
  ATerm r_65 = t;
  int s_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(p_41, q_41);
      LocalPopChoice(s_65);
    }
  else
    {
      t = r_65;
      t = SSL_subtr(p_41, q_41);
    }
  return(t);
}
static ATerm x_13 (ATerm d_50, ATerm f_50, ATerm h_50, ATerm j_50, ATerm e_50, ATerm g_50, ATerm i_50, ATerm k_50, ATerm t)
{
  ATerm k_66 = NULL,m_66 = NULL,n_66 = NULL,r_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_50, e_50);
  t = w_13(d_50, e_50, t);
  k_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_50, g_50);
  t = w_13(f_50, g_50, t);
  m_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_50, i_50);
  t = w_13(h_50, i_50, t);
  n_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_50, k_50);
  t = w_13(j_50, k_50, t);
  r_66 = t;
  t = (ATerm) ATmakeAppl(sym__4, k_66, m_66, n_66, r_66);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_65 = ATgetArgument(t, 0);
      if(match_cons(t_65, sym__4))
        {
          t_66 = ATgetArgument(t_65, 0);
          u_66 = ATgetArgument(t_65, 1);
          v_66 = ATgetArgument(t_65, 2);
          w_66 = ATgetArgument(t_65, 3);
        }
      else
        _fail(t);
      {
        ATerm u_65 = ATgetArgument(t, 1);
        if(match_cons(u_65, sym__4))
          {
            z_66 = ATgetArgument(u_65, 0);
            a_67 = ATgetArgument(u_65, 1);
            b_67 = ATgetArgument(u_65, 2);
            c_67 = ATgetArgument(u_65, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_13(t_66, u_66, v_66, w_66, z_66, a_67, b_67, c_67, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm t)
{
  ATerm d_67 = NULL,g_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,n_67 = NULL,o_67 = NULL,q_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,y_67 = NULL,a_68 = NULL;
  o_67 = t;
  t = times_0_0(t);
  d_67 = t;
  t = o_67;
  t = m_111(t);
  g_67 = t;
  t = times_0_0(t);
  n_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_67, d_67);
  t = diff_times_0_0(t);
  l_67 = t;
  if(match_cons(t, sym__4))
    {
      u_67 = ATgetArgument(t, 0);
      {
        ATerm v_65 = ATgetArgument(t, 1);
      }
      y_67 = ATgetArgument(t, 2);
      {
        ATerm x_65 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_67, y_67);
  t = u_13(u_67, y_67, t);
  a_68 = t;
  t = SSL_TicksToSeconds(a_68);
  j_67 = t;
  t = l_67;
  if(match_cons(t, sym__4))
    {
      ATerm y_65 = ATgetArgument(t, 0);
      q_67 = ATgetArgument(t, 1);
      {
        ATerm z_65 = ATgetArgument(t, 2);
      }
      s_67 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_67, s_67);
  t = u_13(q_67, s_67, t);
  t_67 = t;
  t = SSL_TicksToSeconds(t_67);
  k_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_67), term_b_66), j_67), term_a_66);
  t = l_111(t);
  t = g_67;
  return(t);
}
ATerm debug_1_0 (ATerm x_91 (ATerm), ATerm t)
{
  ATerm d_68 = NULL,f_68 = NULL,h_68 = NULL,i_68 = NULL;
  d_68 = t;
  t = x_91(t);
  f_68 = t;
  t = term_v_35;
  h_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_68), f_68);
  i_68 = t;
  t = SSL_printnl(h_68, i_68);
  t = d_68;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm l_68 = NULL,m_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,u_68 = NULL;
  l_68 = t;
  t = term_q_35;
  r_68 = t;
  t = term_c_66;
  u_68 = t;
  t = term_d_66;
  t = p_14(r_68, u_68, t);
  m_68 = t;
  t = term_a_37;
  p_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_66), term_s_66), term_q_66), term_p_66), term_o_66), term_l_66), term_j_66), m_68), term_f_66);
  q_68 = t;
  t = SSL_printnl(p_68, q_68);
  t = l_68;
  return(t);
}
static ATerm y_13 (ATerm n_44, ATerm o_44, ATerm t)
{
  t = SSL_copy(n_44, o_44);
  return(t);
}
static ATerm z_13 (ATerm a_57, ATerm t)
{
  t = SSL_hashtable_keys(a_57);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm v_68 = NULL,w_68 = NULL;
  static ATerm d_27 (ATerm t)
  {
    ATerm x_68 = NULL,y_68 = NULL;
    x_68 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_68), x_68);
    t = p_14(not_null(v_68), x_68, t);
    y_68 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_68, y_68);
    return(t);
  }
  if(((v_68 != NULL) && (v_68 != t)))
    _fail(t);
  else
    v_68 = t;
  t = lookup_table_0_1(v_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_13(w_68, t);
  t = map_1_0(d_27, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm c_108 (ATerm), ATerm t)
{
  ATerm a_69 = NULL;
  a_69 = t;
  {
    ATerm y_66 = t;
    int e_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL;
        t = term_q_35;
        d_69 = t;
        t = term_r_35;
        e_69 = t;
        t = term_s_35;
        t = p_14(d_69, e_69, t);
        c_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_69, term_i_45);
        t = geq_0_0(t);
        t = a_69;
        t = c_108(t);
        LocalPopChoice(e_67);
      }
    else
      {
        t = y_66;
        t = a_69;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_108 (ATerm), ATerm t)
{
  ATerm h_69 = NULL;
  h_69 = t;
  {
    ATerm f_67 = t;
    int h_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL;
        t = term_q_35;
        k_69 = t;
        t = term_r_35;
        l_69 = t;
        t = term_s_35;
        t = p_14(k_69, l_69, t);
        j_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_69, term_i_42);
        t = geq_0_0(t);
        t = h_69;
        t = b_108(t);
        LocalPopChoice(h_67);
      }
    else
      {
        t = f_67;
        t = h_69;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL;
  v_69 = t;
  if(match_cons(t, sym__2))
    {
      w_69 = ATgetArgument(t, 0);
      x_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_67 = t;
    int m_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_69;
        if((w_69 != t))
          {
            _fail(t);
          }
        t = v_69;
        LocalPopChoice(m_67);
      }
    else
      {
        t = i_67;
        t = (ATerm) ATmakeAppl(sym__2, w_69, x_69);
        {
          ATerm p_67 = t;
          int r_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_69, x_69);
              LocalPopChoice(r_67);
            }
          else
            {
              t = p_67;
              t = SSL_gtr(w_69, x_69);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_69, x_69);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_108 (ATerm), ATerm t)
{
  ATerm b_70 = NULL;
  b_70 = t;
  {
    ATerm v_67 = t;
    int w_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_70 = NULL,f_70 = NULL,g_70 = NULL;
        t = term_q_35;
        f_70 = t;
        t = term_r_35;
        g_70 = t;
        t = term_s_35;
        t = p_14(f_70, g_70, t);
        d_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_70, term_n_42);
        t = geq_0_0(t);
        t = b_70;
        t = d_108(t);
        LocalPopChoice(w_67);
      }
    else
      {
        t = v_67;
        t = b_70;
      }
  }
  return(t);
}
static ATerm c_14 (ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm q_29, ATerm p_29, ATerm t)
{
  t = x_96(t);
  {
    static ATerm e_27 (ATerm t)
    {
      ATerm i_70 = NULL;
      i_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_29, i_70);
      t = w_96(t);
      return(t);
    }
    t = fetch_1_0(e_27, t);
  }
  t = p_29;
  return(t);
}
static ATerm d_14 (ATerm t_96 (ATerm), ATerm m_29, ATerm l_29, ATerm t)
{
  static ATerm i_71 (ATerm t)
  {
    ATerm c_71 = NULL,e_71 = NULL,f_71 = NULL;
    c_71 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_71 = ATgetFirst((ATermList) t);
            f_71 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_67 = t;
          int z_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_71;
              {
                static ATerm f_27 (ATerm t)
                {
                  t = l_29;
                  return(t);
                }
                t = c_14(t_96, f_27, e_71, f_71, t);
              }
              t = i_71(t);
              LocalPopChoice(z_67);
            }
          else
            {
              t = x_67;
              {
                ATerm z_38 = NULL,c_39 = NULL,t_13 = NULL;
                t = SSLgetAnnotations(c_71);
                z_38 = t;
                t = f_71;
                t = i_71(t);
                c_39 = t;
                t = (ATerm) ATinsert(CheckATermList(c_39), e_71);
                t_13 = t;
                t = SSLsetAnnotations(t_13, z_38);
              }
            }
        }
      }
    return(t);
  }
  t = m_29;
  t = i_71(t);
  return(t);
}
static ATerm g_27 (ATerm t)
{
  ATerm b_72 = NULL;
  if(match_cons(t, sym__2))
    {
      b_72 = ATgetArgument(t, 0);
      if((b_72 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm e_14 (ATerm y_53, ATerm z_53, ATerm a_54, ATerm t)
{
  ATerm n_71 = NULL,o_71 = NULL,r_71 = NULL,u_71 = NULL;
  n_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_53, z_53);
  {
    ATerm b_68 = t;
    int c_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_68 = ATgetArgument(t, 0);
            ATerm g_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_53, z_53);
        t = p_14(y_53, z_53, t);
        LocalPopChoice(c_68);
      }
    else
      {
        t = b_68;
        t = (ATerm) ATempty;
      }
  }
  r_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_71, a_54);
  t = d_14(g_27, r_71, a_54, t);
  o_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_53, z_53, o_71);
  t = lookup_table_0_1(y_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(z_53, o_71, u_71, t);
  t = n_71;
  return(t);
}
static ATerm f_14 (ATerm u_112 (ATerm), ATerm i_54, ATerm h_54, ATerm t)
{
  static ATerm h_27 (ATerm t)
  {
    ATerm c_72 = NULL,d_72 = NULL;
    if(match_cons(t, sym__2))
      {
        c_72 = ATgetArgument(t, 0);
        d_72 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_54, c_72, d_72);
    t = u_112(t);
    return(t);
  }
  t = h_54;
  t = map_1_0(h_27, t);
  return(t);
}
static ATerm j_14 (ATerm g_38, ATerm h_38, ATerm t)
{
  t = SSL_access(g_38, h_38);
  return(t);
}
static ATerm d_73 (ATerm q_72, ATerm t)
{
  t = SSL_fclose(q_72);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_72 = NULL,y_72 = NULL;
  y_72 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_72 = ATgetArgument(t, 0);
      {
        ATerm j_68 = t;
        int k_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_72);
            LocalPopChoice(k_68);
          }
        else
          {
            t = j_68;
            t = d_73(y_72, t);
          }
      }
    }
  else
    {
      t = d_73(y_72, t);
    }
  return(t);
}
static ATerm g_14 (ATerm k_23, ATerm t)
{
  t = SSL_read_term_from_stream(k_23);
  return(t);
}
static ATerm h_14 (ATerm p_38, ATerm q_38, ATerm t)
{
  ATerm f_73 = NULL;
  t = SSL_fopen(p_38, q_38);
  f_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_73);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_73 = NULL;
  t = SSL_stdin_stream();
  g_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_73);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_73 = NULL;
  t = SSL_stdout_stream();
  h_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_73);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_73 = NULL;
  t = SSL_stderr_stream();
  i_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_73);
  return(t);
}
static ATerm e_75 (ATerm t_73, ATerm t)
{
  ATerm u_73 = NULL;
  t = SSL_explode_term(t_73);
  if(match_cons(t, sym__2))
    {
      ATerm n_68 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_68) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_68 = ATgetArgument(t, 1);
        if(((ATgetType(o_68) == AT_LIST) && !(ATisEmpty(o_68))))
          {
            u_73 = ATgetFirst((ATermList) o_68);
            {
              ATerm s_68 = (ATerm) ATgetNext((ATermList) o_68);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_73;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_73;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_73;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_73;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm f_75 (ATerm z_73, ATerm a_74, ATerm c_74, ATerm t)
{
  ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL,m_74 = NULL,b_14 = NULL;
  t = SSLgetAnnotations(c_74);
  g_74 = t;
  t = z_73;
  if(match_cons(t, sym_Path_1))
    {
      m_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_74, a_74);
  b_14 = t;
  t = SSLsetAnnotations(b_14, g_74);
  if(match_cons(t, sym__2))
    {
      e_74 = ATgetArgument(t, 0);
      f_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_14(e_74, f_74, t);
  return(t);
}
static ATerm g_75 (ATerm o_74, ATerm p_74, ATerm q_74, ATerm t)
{
  ATerm r_74 = NULL,t_74 = NULL,v_74 = NULL,z_74 = NULL,r_14 = NULL;
  t = SSLgetAnnotations(q_74);
  v_74 = t;
  t = SSL_is_string(o_74);
  z_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_74, p_74);
  r_14 = t;
  t = SSLsetAnnotations(r_14, v_74);
  if(match_cons(t, sym__2))
    {
      r_74 = ATgetArgument(t, 0);
      t_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_14(r_74, t_74, t);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL;
  b_75 = t;
  if(match_cons(t, sym__2))
    {
      c_75 = ATgetArgument(t, 0);
      d_75 = ATgetArgument(t, 1);
      {
        ATerm t_68 = t;
        int z_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_75(b_75, t);
            LocalPopChoice(z_68);
          }
        else
          {
            t = t_68;
            {
              ATerm b_69 = t;
              int f_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_75(c_75, d_75, b_75, t);
                  LocalPopChoice(f_69);
                }
              else
                {
                  t = b_69;
                  t = g_75(c_75, d_75, b_75, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_75(b_75, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL,s_75 = NULL;
  s_75 = t;
  {
    ATerm g_69 = t;
    int i_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_75, term_m_69);
        t = i_14(t);
        LocalPopChoice(i_69);
      }
    else
      {
        t = g_69;
        {
          ATerm v_39 = NULL,y_39 = NULL;
          t = term_n_69;
          y_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_69, s_75);
          t = v_14(y_39, s_75, t);
          v_39 = t;
          t = SSL_perror(v_39);
          _fail(t);
        }
      }
  }
  l_75 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_14(m_75, t);
  k_75 = t;
  t = l_75;
  t = fclose_0_0(t);
  t = k_75;
  return(t);
}
static ATerm i_27 (ATerm t)
{
  t = term_o_69;
  return(t);
}
static ATerm j_27 (ATerm t)
{
  t = term_p_69;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm q_69 = t;
  int r_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_75 = NULL,w_75 = NULL;
      v_75 = t;
      t = (ATerm) ATinsert(ATempty, term_s_69);
      w_75 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_75, (ATerm) ATinsert(ATempty, term_s_69));
      t = j_14(v_75, w_75, t);
      LocalPopChoice(r_69);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = q_69;
      {
        ATerm t_69 = t;
        int u_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_69 = t;
            if((PushChoice() == 0))
              {
                ATerm y_75 = NULL,a_76 = NULL;
                y_75 = t;
                t = (ATerm) ATinsert(ATempty, term_y_57);
                a_76 = t;
                t = (ATerm) ATmakeAppl(sym__2, y_75, (ATerm) ATinsert(ATempty, term_y_57));
                t = j_14(y_75, a_76, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_69;
              }
            t = debug_1_0(i_27, t);
            LocalPopChoice(u_69);
          }
        else
          {
            t = t_69;
            t = debug_1_0(j_27, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm k_27 (ATerm t)
{
  t = debug_1_0(n_27, t);
  return(t);
}
static ATerm n_27 (ATerm t)
{
  t = term_z_69;
  return(t);
}
static ATerm q_27 (ATerm t)
{
  t = debug_1_0(r_27, t);
  return(t);
}
static ATerm r_27 (ATerm t)
{
  t = term_a_70;
  return(t);
}
static ATerm v_27 (ATerm t)
{
  ATerm v_76 = NULL,x_76 = NULL,z_76 = NULL;
  v_76 = t;
  t = term_v_35;
  x_76 = t;
  t = (ATerm) ATinsert(ATempty, term_c_70);
  z_76 = t;
  t = SSL_printnl(x_76, z_76);
  t = v_76;
  return(t);
}
static ATerm w_27 (ATerm t)
{
  ATerm a_77 = NULL,b_77 = NULL,d_77 = NULL;
  if(match_cons(t, sym__3))
    {
      a_77 = ATgetArgument(t, 0);
      b_77 = ATgetArgument(t, 1);
      d_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_14(a_77, b_77, d_77, t);
  return(t);
}
static ATerm x_27 (ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL;
  e_77 = t;
  t = term_v_35;
  f_77 = t;
  t = (ATerm) ATinsert(ATempty, term_e_70);
  g_77 = t;
  t = SSL_printnl(f_77, g_77);
  t = e_77;
  return(t);
}
static ATerm y_27 (ATerm t)
{
  ATerm h_77 = NULL,i_77 = NULL,k_77 = NULL;
  h_77 = t;
  t = term_v_35;
  i_77 = t;
  t = (ATerm) ATinsert(ATempty, term_c_70);
  k_77 = t;
  t = SSL_printnl(i_77, k_77);
  t = h_77;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm b_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,k_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL;
  b_76 = t;
  t = if_verbose5_1_0(k_27, t);
  {
    ATerm h_70 = t;
    if((PushChoice() == 0))
      {
        ATerm t_76 = NULL,u_76 = NULL;
        t = term_j_70;
        t_76 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, b_76);
        u_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_70, (ATerm) ATmakeAppl(sym_Imported_1, b_76));
        t = p_14(t_76, u_76, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_70;
      }
  }
  e_76 = t;
  t = term_j_70;
  n_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_70, term_k_70, (ATerm) ATinsert(ATempty, b_76));
  t = lookup_table_0_1(n_76, t);
  s_76 = t;
  t = term_k_70;
  o_76 = t;
  t = (ATerm) ATinsert(ATempty, b_76);
  q_76 = t;
  t = s_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(o_76, q_76, r_76, t);
  t = e_76;
  t = if_verbose4_1_0(q_27, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(v_27, t);
  d_76 = t;
  t = term_j_70;
  m_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_70, d_76);
  t = f_14(w_27, m_76, d_76, t);
  t = if_verbose6_1_0(x_27, t);
  t = term_j_70;
  f_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_70, (ATerm)ATmakeAppl(sym_Imported_1, b_76), (ATerm) ATempty);
  t = lookup_table_0_1(f_76, t);
  k_76 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, b_76);
  g_76 = t;
  t = (ATerm) ATempty;
  h_76 = t;
  t = k_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(g_76, h_76, i_76, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_70, (ATerm)ATmakeAppl(sym_Imported_1, b_76), (ATerm) ATempty);
  t = if_verbose4_1_0(y_27, t);
  return(t);
}
ATerm filter_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL,e_78 = NULL;
  b_78 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_78;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_78 = ATgetFirst((ATermList) t);
          e_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_70 = t;
        int m_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_40 = NULL,b_41 = NULL,g_41 = NULL,l_18 = NULL;
            t = SSLgetAnnotations(b_78);
            w_40 = t;
            t = c_78;
            t = l_100(t);
            b_41 = t;
            t = e_78;
            t = filter_1_0(l_100, t);
            g_41 = t;
            t = (ATerm) ATinsert(CheckATermList(g_41), b_41);
            l_18 = t;
            t = SSLsetAnnotations(l_18, w_40);
            LocalPopChoice(m_70);
          }
        else
          {
            t = l_70;
            t = e_78;
            t = filter_1_0(l_100, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t)
{
  static ATerm j_78 (ATerm t)
  {
    ATerm n_70 = t;
    int o_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_84(t);
        t = j_78(t);
        LocalPopChoice(o_70);
      }
    else
      {
        t = n_70;
        t = x_84(t);
      }
    return(t);
  }
  t = j_78(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm p_70 = t;
  int q_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_78 = NULL,l_78 = NULL;
      t = term_q_35;
      k_78 = t;
      t = term_r_70;
      l_78 = t;
      t = term_s_70;
      t = p_14(k_78, l_78, t);
      LocalPopChoice(q_70);
    }
  else
    {
      t = p_70;
      {
        ATerm t_70 = t;
        int u_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_78 = NULL;
            t = term_v_70;
            m_78 = t;
            t = SSL_getenv(m_78);
            LocalPopChoice(u_70);
          }
        else
          {
            t = t_70;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm z_27 (ATerm t)
{
  t = debug_1_0(a_28, t);
  return(t);
}
static ATerm a_28 (ATerm t)
{
  t = term_w_70;
  return(t);
}
static ATerm b_28 (ATerm t)
{
  ATerm u_78 = NULL,w_78 = NULL;
  t = term_j_70;
  u_78 = t;
  t = term_x_70;
  w_78 = t;
  t = term_y_70;
  t = p_14(u_78, w_78, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm z_70 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_70;
      }
  }
  return(t);
}
static ATerm c_28 (ATerm t)
{
  t = debug_1_0(d_28, t);
  return(t);
}
static ATerm d_28 (ATerm t)
{
  t = term_a_71;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm o_78 = NULL;
  t = if_verbose5_1_0(z_27, t);
  o_78 = t;
  {
    ATerm b_71 = t;
    int d_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_78 = NULL,s_78 = NULL;
        t = term_j_70;
        q_78 = t;
        t = term_k_70;
        s_78 = t;
        t = term_g_71;
        t = p_14(q_78, s_78, t);
        LocalPopChoice(d_71);
      }
    else
      {
        t = b_71;
        {
          ATerm t_78 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          t_78 = t;
          t = repeat_2_0(b_28, _id, t);
          t = t_78;
        }
      }
  }
  t = o_78;
  t = if_verbose5_1_0(c_28, t);
  return(t);
}
static ATerm e_28 (ATerm t)
{
  t = debug_1_0(f_28, t);
  return(t);
}
static ATerm f_28 (ATerm t)
{
  t = term_h_71;
  return(t);
}
static ATerm y_79 (ATerm b_79, ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL,i_79 = NULL;
  t = term_j_70;
  g_79 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, b_79);
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_70, (ATerm) ATmakeAppl(sym_Tool_1, b_79));
  t = p_14(g_79, i_79, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_71 = ATgetFirst((ATermList) t);
      if(match_cons(j_71, sym__2))
        {
          ATerm l_71 = ATgetArgument(j_71, 0);
          f_79 = ATgetArgument(j_71, 1);
        }
      else
        _fail(t);
      {
        ATerm k_71 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_79;
  return(t);
}
static ATerm h_28 (ATerm t)
{
  t = debug_1_0(i_28, t);
  return(t);
}
static ATerm i_28 (ATerm t)
{
  t = term_h_71;
  return(t);
}
static ATerm j_28 (ATerm t)
{
  t = term_j_70;
  t = table_getlist_0_0(t);
  t = debug_1_0(k_28, t);
  return(t);
}
static ATerm k_28 (ATerm t)
{
  t = term_m_71;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm p_71 = t;
  int q_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL;
      t = if_verbose5_1_0(e_28, t);
      t = xtc_load_0_0(t);
      l_79 = t;
      if(match_cons(t, sym__2))
        {
          j_79 = ATgetArgument(t, 0);
          k_79 = ATgetArgument(t, 1);
          {
            ATerm s_71 = t;
            int t_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_79 = NULL,r_79 = NULL,s_79 = NULL;
                t = term_j_70;
                r_79 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, j_79);
                s_79 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_j_70, (ATerm) ATmakeAppl(sym_Tool_1, j_79));
                t = p_14(r_79, s_79, t);
                {
                  static ATerm g_28 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((k_79 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((p_79 != NULL) && (p_79 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_79 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(g_28, t);
                }
                t = not_null(p_79);
                LocalPopChoice(t_71);
              }
            else
              {
                t = s_71;
                t = y_79(l_79, t);
              }
          }
        }
      else
        {
          t = y_79(l_79, t);
        }
      t = if_verbose5_1_0(h_28, t);
      LocalPopChoice(q_71);
    }
  else
    {
      t = p_71;
      {
        ATerm x_79 = NULL,f_42 = NULL,h_42 = NULL;
        x_79 = t;
        t = term_v_35;
        f_42 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_71), x_79), term_v_71);
        h_42 = t;
        t = SSL_printnl(f_42, h_42);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_71), x_79), term_v_71);
        t = if_verbose5_1_0(j_28, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm k_14 (ATerm m_48, ATerm l_48, ATerm t)
{
  ATerm a_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL;
  t = m_48;
  {
    ATerm x_71 = t;
    int y_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_80 = NULL;
        t = term_q_35;
        h_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_35, m_48);
        t = p_14(h_80, m_48, t);
        LocalPopChoice(y_71);
      }
    else
      {
        t = x_71;
        t = (ATerm) ATempty;
      }
  }
  d_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_48, d_80);
  t = conc_0_0(t);
  a_80 = t;
  t = term_q_35;
  e_80 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, m_48, a_80);
  t = lookup_table_0_1(e_80, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(m_48, a_80, f_80, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, m_48, a_80);
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm o_80 = NULL,p_80 = NULL,r_80 = NULL,u_80 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_80 = NULL,w_80 = NULL,x_80 = NULL;
      t = term_w_36;
      t = t_0(t);
      v_80 = t;
      t = term_z_71;
      w_80 = t;
      t = term_a_72;
      x_80 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_71, term_a_72, v_80);
      t = q_14(w_80, x_80, v_80, t);
      _fail(t);
    }
  else
    {
      ATerm c_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_80 = ATgetFirst((ATermList) t);
          p_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_80;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_80 = ATgetFirst((ATermList) t);
          u_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_80;
      t = p_0(t);
      t = r_80;
      t = r_0(t);
      c_81 = t;
      t = (ATerm) ATinsert(CheckATermList(u_80), c_81);
    }
  return(t);
}
static ATerm l_28 (ATerm t)
{
  ATerm k_81 = NULL;
  k_81 = t;
  if(match_string(t, "-S"))
    {
      t = k_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_81;
    }
  return(t);
}
static ATerm m_28 (ATerm t)
{
  ATerm m_81 = NULL,n_81 = NULL;
  t = term_r_35;
  m_81 = t;
  t = term_l_35;
  n_81 = t;
  t = term_e_72;
  t = u_14(m_81, n_81, t);
  t = term_f_72;
  return(t);
}
static ATerm n_28 (ATerm t)
{
  t = term_g_72;
  return(t);
}
static ATerm o_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_28 (ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL;
  o_81 = t;
  t = SSL_string_to_int(o_81);
  p_81 = t;
  t = term_r_35;
  q_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_35, p_81);
  t = u_14(q_81, p_81, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_81);
  return(t);
}
static ATerm r_28 (ATerm t)
{
  t = term_h_72;
  return(t);
}
static ATerm s_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_28 (ATerm t)
{
  ATerm r_81 = NULL,s_81 = NULL;
  t = term_i_72;
  r_81 = t;
  t = term_w_36;
  s_81 = t;
  t = term_j_72;
  t = u_14(r_81, s_81, t);
  t = term_k_72;
  return(t);
}
static ATerm u_28 (ATerm t)
{
  t = term_l_72;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_72 = t;
  int n_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_28, m_28, n_28, t);
      LocalPopChoice(n_72);
    }
  else
    {
      t = m_72;
      {
        ATerm o_72 = t;
        int p_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_28, q_28, r_28, t);
            LocalPopChoice(p_72);
          }
        else
          {
            t = o_72;
            t = Option_3_0(s_28, t_28, u_28, t);
          }
      }
    }
  return(t);
}
static ATerm l_14 (ATerm j_48, ATerm k_48, ATerm t)
{
  ATerm r_72 = t;
  int s_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_81 = NULL,u_81 = NULL,w_81 = NULL;
      t = term_q_35;
      w_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_q_35, j_48);
      t = p_14(w_81, j_48, t);
      t = term_q_35;
      t_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_q_35, j_48);
      t = lookup_table_0_1(t_81, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          u_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_14(j_48, u_81, t);
      t = (ATerm) ATmakeAppl(sym__2, term_q_35, j_48);
      LocalPopChoice(s_72);
    }
  else
    {
      t = r_72;
      t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
      t = u_14(j_48, k_48, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  static ATerm v_82 (ATerm t)
  {
    ATerm s_82 = NULL,t_82 = NULL,u_82 = NULL;
    u_82 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_82 = ATgetFirst((ATermList) t);
        t_82 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_42 = NULL,t_42 = NULL,q_18 = NULL;
          t = SSLgetAnnotations(u_82);
          q_42 = t;
          t = t_82;
          t = v_82(t);
          t_42 = t;
          t = (ATerm) ATinsert(CheckATermList(t_42), s_82);
          q_18 = t;
          t = SSLsetAnnotations(q_18, q_42);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_82;
        t = z_92(t);
      }
    return(t);
  }
  t = v_82(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL;
  a_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_82;
    }
  else
    {
      static ATerm v_28 (ATerm t)
      {
        t = not_null(c_82);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_82 = ATgetFirst((ATermList) t);
          if(((c_82 != NULL) && (c_82 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_82;
      t = at_end_1_0(v_28, t);
    }
  return(t);
}
static ATerm h_83 (ATerm z_82, ATerm t)
{
  ATerm a_83 = NULL;
  t = SSL_explode_term(z_82);
  if(match_cons(t, sym__2))
    {
      ATerm t_72 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_72) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_83;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL;
  e_83 = t;
  if(match_cons(t, sym__2))
    {
      c_83 = ATgetArgument(t, 0);
      d_83 = ATgetArgument(t, 1);
      {
        ATerm u_72 = t;
        int v_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm c_29 (ATerm t)
            {
              t = d_83;
              return(t);
            }
            t = c_83;
            t = at_end_1_0(c_29, t);
            LocalPopChoice(v_72);
          }
        else
          {
            t = u_72;
            t = h_83(e_83, t);
          }
      }
    }
  else
    {
      t = h_83(e_83, t);
    }
  return(t);
}
static ATerm m_14 (ATerm n_48, ATerm o_48, ATerm t)
{
  ATerm i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL;
  t = n_48;
  {
    ATerm w_72 = t;
    int z_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_83 = NULL;
        t = term_q_35;
        n_83 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_35, n_48);
        t = p_14(n_83, n_48, t);
        LocalPopChoice(z_72);
      }
    else
      {
        t = w_72;
        t = (ATerm) ATempty;
      }
  }
  j_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_83, o_48);
  t = conc_0_0(t);
  i_83 = t;
  t = term_q_35;
  k_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, n_48, i_83);
  t = lookup_table_0_1(k_83, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(n_48, i_83, l_83, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, n_48, i_83);
  return(t);
}
static ATerm e_29 (ATerm t)
{
  ATerm r_83 = NULL;
  r_83 = t;
  if(match_string(t, "-o"))
    {
      t = r_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_83;
    }
  return(t);
}
static ATerm h_29 (ATerm t)
{
  ATerm s_83 = NULL,t_83 = NULL;
  s_83 = t;
  t = term_a_36;
  t_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_36, s_83);
  t = u_14(t_83, s_83, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_83);
  return(t);
}
static ATerm k_29 (ATerm t)
{
  t = term_a_73;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_29, h_29, k_29, t);
  return(t);
}
static ATerm n_29 (ATerm t)
{
  ATerm v_83 = NULL;
  v_83 = t;
  if(match_string(t, "-i"))
    {
      t = v_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_83;
    }
  return(t);
}
static ATerm o_29 (ATerm t)
{
  ATerm w_83 = NULL,z_83 = NULL;
  w_83 = t;
  t = term_c_55;
  z_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_55, w_83);
  t = u_14(z_83, w_83, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_83);
  return(t);
}
static ATerm r_29 (ATerm t)
{
  t = term_b_73;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_29, o_29, r_29, t);
  return(t);
}
static ATerm s_29 (ATerm t)
{
  ATerm l_84 = NULL;
  l_84 = t;
  if(match_string(t, "-I"))
    {
      t = l_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = l_84;
    }
  return(t);
}
static ATerm v_29 (ATerm t)
{
  ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL;
  m_84 = t;
  t = term_k_60;
  n_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_84), term_k_60);
  o_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_60, (ATerm) ATinsert(ATinsert(ATempty, m_84), term_k_60));
  t = m_14(n_84, o_84, t);
  t = term_w_36;
  return(t);
}
static ATerm d_30 (ATerm t)
{
  t = term_c_73;
  return(t);
}
static ATerm f_30 (ATerm t)
{
  ATerm p_84 = NULL;
  p_84 = t;
  if(match_string(t, "--main"))
    {
      t = p_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = p_84;
    }
  return(t);
}
static ATerm g_30 (ATerm t)
{
  ATerm q_84 = NULL,r_84 = NULL;
  q_84 = t;
  t = term_e_58;
  r_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_58, q_84);
  t = u_14(r_84, q_84, t);
  t = term_w_36;
  return(t);
}
static ATerm i_30 (ATerm t)
{
  t = term_e_73;
  return(t);
}
static ATerm m_30 (ATerm t)
{
  ATerm u_84 = NULL;
  u_84 = t;
  if(match_string(t, "--library"))
    {
      t = u_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = u_84;
    }
  return(t);
}
static ATerm o_30 (ATerm t)
{
  ATerm z_84 = NULL,d_85 = NULL;
  t = term_b_38;
  z_84 = t;
  t = term_w_36;
  d_85 = t;
  t = term_j_73;
  t = u_14(z_84, d_85, t);
  t = term_w_36;
  return(t);
}
static ATerm p_30 (ATerm t)
{
  t = term_k_73;
  return(t);
}
static ATerm q_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_31 (ATerm t)
{
  ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL;
  e_85 = t;
  t = term_p_37;
  f_85 = t;
  t = (ATerm) ATinsert(ATempty, e_85);
  g_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_37, (ATerm) ATinsert(ATempty, e_85));
  t = m_14(f_85, g_85, t);
  t = term_w_36;
  return(t);
}
static ATerm c_31 (ATerm t)
{
  t = term_l_73;
  return(t);
}
static ATerm d_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_31 (ATerm t)
{
  ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL;
  i_85 = t;
  t = term_i_36;
  j_85 = t;
  t = (ATerm) ATinsert(ATempty, i_85);
  k_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_36, (ATerm) ATinsert(ATempty, i_85));
  t = k_14(j_85, k_85, t);
  t = term_w_36;
  return(t);
}
static ATerm f_31 (ATerm t)
{
  t = term_m_73;
  return(t);
}
static ATerm h_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_31 (ATerm t)
{
  ATerm l_85 = NULL,m_85 = NULL,n_85 = NULL;
  l_85 = t;
  t = term_c_36;
  m_85 = t;
  t = (ATerm) ATinsert(ATempty, l_85);
  n_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_36, (ATerm) ATinsert(ATempty, l_85));
  t = k_14(m_85, n_85, t);
  t = term_w_36;
  return(t);
}
static ATerm j_31 (ATerm t)
{
  t = term_n_73;
  return(t);
}
static ATerm k_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_31 (ATerm t)
{
  ATerm o_85 = NULL,p_85 = NULL;
  t = term_l_36;
  o_85 = t;
  t = term_w_36;
  p_85 = t;
  t = term_o_73;
  t = u_14(o_85, p_85, t);
  t = term_w_36;
  return(t);
}
static ATerm m_31 (ATerm t)
{
  t = term_p_73;
  return(t);
}
static ATerm n_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_31 (ATerm t)
{
  ATerm q_85 = NULL,r_85 = NULL;
  t = term_a_60;
  q_85 = t;
  t = term_w_36;
  r_85 = t;
  t = term_q_73;
  t = u_14(q_85, r_85, t);
  t = term_w_36;
  return(t);
}
static ATerm p_31 (ATerm t)
{
  t = term_r_73;
  return(t);
}
static ATerm q_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_31 (ATerm t)
{
  ATerm u_85 = NULL,v_85 = NULL;
  t = term_l_55;
  u_85 = t;
  t = term_w_36;
  v_85 = t;
  t = term_s_73;
  t = u_14(u_85, v_85, t);
  t = term_w_36;
  return(t);
}
static ATerm s_31 (ATerm t)
{
  t = term_v_73;
  return(t);
}
static ATerm u_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_31 (ATerm t)
{
  ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL;
  w_85 = t;
  t = SSL_string_to_int(w_85);
  x_85 = t;
  t = term_q_40;
  y_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_40, x_85);
  t = u_14(y_85, x_85, t);
  t = term_w_36;
  return(t);
}
static ATerm w_31 (ATerm t)
{
  t = term_w_73;
  return(t);
}
static ATerm x_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_31 (ATerm t)
{
  ATerm z_85 = NULL,a_86 = NULL,b_86 = NULL;
  z_85 = t;
  t = SSL_string_to_int(z_85);
  a_86 = t;
  t = term_x_40;
  b_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_40, a_86);
  t = u_14(b_86, a_86, t);
  t = term_w_36;
  return(t);
}
static ATerm z_31 (ATerm t)
{
  t = term_x_73;
  return(t);
}
static ATerm a_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_32 (ATerm t)
{
  ATerm c_86 = NULL,d_86 = NULL;
  t = term_i_43;
  c_86 = t;
  t = term_w_36;
  d_86 = t;
  t = term_y_73;
  t = l_14(c_86, d_86, t);
  t = term_w_36;
  return(t);
}
static ATerm c_32 (ATerm t)
{
  t = term_b_74;
  return(t);
}
static ATerm e_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_32 (ATerm t)
{
  ATerm e_86 = NULL,f_86 = NULL;
  e_86 = t;
  if(match_string(t, "old"))
    {
      t = e_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = e_86;
    }
  t = term_f_56;
  f_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_56, e_86);
  t = u_14(f_86, e_86, t);
  t = term_w_36;
  return(t);
}
static ATerm i_32 (ATerm t)
{
  t = term_d_74;
  return(t);
}
static ATerm k_32 (ATerm t)
{
  ATerm h_86 = NULL;
  h_86 = t;
  if(match_string(t, "-h"))
    {
      t = h_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = h_86;
    }
  return(t);
}
static ATerm m_32 (ATerm t)
{
  ATerm i_86 = NULL,j_86 = NULL;
  t = term_h_74;
  i_86 = t;
  t = term_w_36;
  j_86 = t;
  t = term_i_74;
  t = u_14(i_86, j_86, t);
  t = term_w_36;
  return(t);
}
static ATerm n_32 (ATerm t)
{
  t = term_j_74;
  return(t);
}
static ATerm o_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_32 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL;
  t = term_k_74;
  k_86 = t;
  t = term_w_36;
  l_86 = t;
  t = term_l_74;
  t = u_14(k_86, l_86, t);
  t = term_w_36;
  return(t);
}
static ATerm r_32 (ATerm t)
{
  t = term_n_74;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  ATerm o_86 = NULL;
  o_86 = t;
  if(match_string(t, "-v"))
    {
      t = o_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = o_86;
    }
  return(t);
}
static ATerm u_32 (ATerm t)
{
  ATerm p_86 = NULL,s_86 = NULL;
  t = term_s_74;
  p_86 = t;
  t = term_w_36;
  s_86 = t;
  t = term_u_74;
  t = u_14(p_86, s_86, t);
  t = term_w_36;
  return(t);
}
static ATerm v_32 (ATerm t)
{
  t = term_w_74;
  return(t);
}
static ATerm w_32 (ATerm t)
{
  ATerm t_86 = NULL;
  t_86 = t;
  if(match_string(t, "--warning"))
    {
      t = t_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = t_86;
    }
  return(t);
}
static ATerm x_32 (ATerm t)
{
  ATerm u_86 = NULL;
  u_86 = t;
  {
    ATerm x_74 = t;
    int y_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_86 = NULL,w_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,b_19 = NULL;
        t = term_q_35;
        y_86 = t;
        t = term_f_55;
        z_86 = t;
        t = term_g_55;
        t = p_14(y_86, z_86, t);
        f_87 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_87 = ATgetFirst((ATermList) t);
            e_87 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_87);
        a_87 = t;
        t = d_87;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = e_87;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(e_87), d_87);
        b_19 = t;
        t = SSLsetAnnotations(b_19, a_87);
        t = term_f_55;
        v_86 = t;
        t = (ATerm) ATinsert(ATempty, u_86);
        w_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_55, (ATerm) ATinsert(ATempty, u_86));
        t = u_14(v_86, w_86, t);
        LocalPopChoice(y_74);
      }
    else
      {
        t = x_74;
        {
          ATerm i_87 = NULL,j_87 = NULL;
          t = term_f_55;
          i_87 = t;
          t = (ATerm) ATinsert(ATempty, u_86);
          j_87 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_55, (ATerm) ATinsert(ATempty, u_86));
          t = k_14(i_87, j_87, t);
        }
      }
  }
  t = term_w_36;
  return(t);
}
static ATerm y_32 (ATerm t)
{
  t = term_a_75;
  return(t);
}
static ATerm z_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_33 (ATerm t)
{
  ATerm k_87 = NULL,l_87 = NULL,m_87 = NULL;
  k_87 = t;
  t = term_a_56;
  l_87 = t;
  t = term_x_38;
  m_87 = t;
  t = term_h_75;
  t = u_14(l_87, m_87, t);
  t = k_87;
  return(t);
}
static ATerm b_33 (ATerm t)
{
  t = term_a_56;
  return(t);
}
static ATerm d_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_33 (ATerm t)
{
  ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL;
  n_87 = t;
  t = term_d_56;
  o_87 = t;
  t = term_l_35;
  p_87 = t;
  t = term_i_75;
  t = u_14(o_87, p_87, t);
  t = n_87;
  return(t);
}
static ATerm f_33 (ATerm t)
{
  t = term_d_56;
  return(t);
}
static ATerm h_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_33 (ATerm t)
{
  ATerm q_87 = NULL,r_87 = NULL;
  t = term_z_60;
  q_87 = t;
  t = term_w_36;
  r_87 = t;
  t = term_j_75;
  t = u_14(q_87, r_87, t);
  t = term_w_36;
  return(t);
}
static ATerm k_33 (ATerm t)
{
  t = term_n_75;
  return(t);
}
ATerm strc_options_0_0 (ATerm t)
{
  ATerm o_75 = t;
  int p_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(p_75);
    }
  else
    {
      t = o_75;
      {
        ATerm q_75 = t;
        int r_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(r_75);
          }
        else
          {
            t = q_75;
            {
              ATerm t_75 = t;
              int u_75 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(s_29, v_29, d_30, t);
                  LocalPopChoice(u_75);
                }
              else
                {
                  t = t_75;
                  {
                    ATerm x_75 = t;
                    int z_75 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(f_30, g_30, i_30, t);
                        LocalPopChoice(z_75);
                      }
                    else
                      {
                        t = x_75;
                        {
                          ATerm c_76 = t;
                          int j_76 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(m_30, o_30, p_30, t);
                              LocalPopChoice(j_76);
                            }
                          else
                            {
                              t = c_76;
                              {
                                ATerm l_76 = t;
                                int p_76 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(q_30, b_31, c_31, t);
                                    LocalPopChoice(p_76);
                                  }
                                else
                                  {
                                    t = l_76;
                                    {
                                      ATerm w_76 = t;
                                      int y_76 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(d_31, e_31, f_31, t);
                                          LocalPopChoice(y_76);
                                        }
                                      else
                                        {
                                          t = w_76;
                                          {
                                            ATerm c_77 = t;
                                            int j_77 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(h_31, i_31, j_31, t);
                                                LocalPopChoice(j_77);
                                              }
                                            else
                                              {
                                                t = c_77;
                                                {
                                                  ATerm l_77 = t;
                                                  int m_77 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(k_31, l_31, m_31, t);
                                                      LocalPopChoice(m_77);
                                                    }
                                                  else
                                                    {
                                                      t = l_77;
                                                      {
                                                        ATerm n_77 = t;
                                                        int o_77 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(n_31, o_31, p_31, t);
                                                            LocalPopChoice(o_77);
                                                          }
                                                        else
                                                          {
                                                            t = n_77;
                                                            {
                                                              ATerm p_77 = t;
                                                              int q_77 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = Option_3_0(q_31, r_31, s_31, t);
                                                                  LocalPopChoice(q_77);
                                                                }
                                                              else
                                                                {
                                                                  t = p_77;
                                                                  {
                                                                    ATerm r_77 = t;
                                                                    int s_77 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(u_31, v_31, w_31, t);
                                                                        LocalPopChoice(s_77);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_77;
                                                                        {
                                                                          ATerm t_77 = t;
                                                                          int u_77 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = ArgOption_3_0(x_31, y_31, z_31, t);
                                                                              LocalPopChoice(u_77);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_77;
                                                                              {
                                                                                ATerm v_77 = t;
                                                                                int w_77 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(a_32, b_32, c_32, t);
                                                                                    LocalPopChoice(w_77);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_77;
                                                                                    {
                                                                                      ATerm x_77 = t;
                                                                                      int y_77 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = ArgOption_3_0(e_32, f_32, i_32, t);
                                                                                          LocalPopChoice(y_77);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_77;
                                                                                          {
                                                                                            ATerm z_77 = t;
                                                                                            int a_78 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = verbose_option_0_0(t);
                                                                                                LocalPopChoice(a_78);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = z_77;
                                                                                                {
                                                                                                  ATerm d_78 = t;
                                                                                                  int f_78 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(k_32, m_32, n_32, t);
                                                                                                      LocalPopChoice(f_78);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = d_78;
                                                                                                      {
                                                                                                        ATerm g_78 = t;
                                                                                                        int h_78 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(o_32, q_32, r_32, t);
                                                                                                            LocalPopChoice(h_78);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = g_78;
                                                                                                            {
                                                                                                              ATerm i_78 = t;
                                                                                                              int n_78 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Option_3_0(s_32, u_32, v_32, t);
                                                                                                                  LocalPopChoice(n_78);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = i_78;
                                                                                                                  {
                                                                                                                    ATerm p_78 = t;
                                                                                                                    int r_78 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = ArgOption_3_0(w_32, x_32, y_32, t);
                                                                                                                        LocalPopChoice(r_78);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = p_78;
                                                                                                                        {
                                                                                                                          ATerm v_78 = t;
                                                                                                                          int x_78 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Option_3_0(z_32, a_33, b_33, t);
                                                                                                                              LocalPopChoice(x_78);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = v_78;
                                                                                                                              {
                                                                                                                                ATerm y_78 = t;
                                                                                                                                int z_78 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Option_3_0(d_33, e_33, f_33, t);
                                                                                                                                    LocalPopChoice(z_78);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = y_78;
                                                                                                                                    t = Option_3_0(h_33, j_33, k_33, t);
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
static ATerm n_14 (ATerm y_56, ATerm z_56, ATerm t)
{
  ATerm s_87 = NULL;
  t = SSL_hashtable_remove(z_56, y_56);
  s_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_87);
  return(t);
}
static ATerm o_14 (ATerm d_57, ATerm t)
{
  ATerm t_87 = NULL;
  t = SSL_hashtable_destroy(d_57);
  t_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_87);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL;
  u_87 = t;
  t = table_hashtable_0_0(t);
  v_87 = t;
  t = lookup_table_0_1(u_87, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_14(x_87, t);
  t = v_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_14(u_87, w_87, t);
  t = u_87;
  return(t);
}
ATerm long_description_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_79), term_o_66), term_v_79), term_u_79), term_t_79), term_o_66), term_q_79), term_o_79), term_n_79), term_m_79), term_h_79), term_e_79), term_d_79), term_c_79), term_a_79);
  return(t);
}
ATerm map_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  static ATerm m_88 (ATerm t)
  {
    ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL;
    j_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_88;
      }
    else
      {
        ATerm h_43 = NULL,m_43 = NULL,o_43 = NULL,d_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_88 = ATgetFirst((ATermList) t);
            l_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_88);
        h_43 = t;
        t = k_88;
        t = i_92(t);
        m_43 = t;
        t = l_88;
        t = m_88(t);
        o_43 = t;
        t = (ATerm) ATinsert(CheckATermList(o_43), m_43);
        d_19 = t;
        t = SSLsetAnnotations(d_19, h_43);
      }
    return(t);
  }
  t = m_88(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm p_88 = NULL,q_88 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_88 = ATgetFirst((ATermList) t);
      q_88 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_88 = NULL,v_88 = NULL;
        static ATerm l_33 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_88)), not_null(v_88));
          return(t);
        }
        t = q_88;
        t = n_0(t);
        if(((u_88 != NULL) && (u_88 != t)))
          _fail(t);
        else
          u_88 = t;
        t = p_88;
        t = l_0(t);
        if(((v_88 != NULL) && (v_88 != t)))
          _fail(t);
        else
          v_88 = t;
        t = q_88;
        t = reverse_acc_2_0(l_0, l_33, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_36;
      t = n_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm w_88 = NULL;
  t = term_w_36;
  t = k_0(t);
  w_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_80), w_88), term_i_80), term_o_66), term_g_80), term_o_66), term_c_80), term_b_80), term_o_66), term_z_79);
  return(t);
}
static ATerm o_33 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_33 (ATerm t)
{
  ATerm r_89 = NULL;
  r_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_89), term_k_80);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_89 = NULL,f_89 = NULL,g_89 = NULL;
  ATerm l_80 = t;
  int m_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_89 = NULL,i_89 = NULL;
      t = term_q_35;
      h_89 = t;
      t = term_n_80;
      i_89 = t;
      t = term_q_80;
      t = p_14(h_89, i_89, t);
      c_89 = t;
      LocalPopChoice(m_80);
    }
  else
    {
      t = l_80;
      {
        static ATerm m_33 (ATerm t)
        {
          ATerm j_89 = NULL,m_89 = NULL,n_89 = NULL,k_19 = NULL;
          n_89 = t;
          if(match_cons(t, sym_Program_1))
            {
              m_89 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_89);
          j_89 = t;
          t = m_89;
          if(((c_89 != NULL) && (c_89 != t)))
            _fail(t);
          else
            c_89 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, m_89);
          k_19 = t;
          t = SSLsetAnnotations(k_19, j_89);
          return(t);
        }
        t = fetch_1_0(m_33, t);
      }
    }
  {
    ATerm s_80 = t;
    int t_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_33 (ATerm t)
        {
          t = not_null(c_89);
          return(t);
        }
        t = short_description_1_0(n_33, t);
        t = echo_0_0(t);
        LocalPopChoice(t_80);
      }
    else
      {
        t = s_80;
      }
  }
  t = term_y_80;
  t = echo_0_0(t);
  t = term_z_71;
  f_89 = t;
  t = term_a_72;
  g_89 = t;
  t = term_z_80;
  t = p_14(f_89, g_89, t);
  t = reverse_acc_2_0(_id, o_33, t);
  t = map_1_0(p_33, t);
  {
    ATerm a_81 = t;
    int b_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_89 = NULL;
        static ATerm q_33 (ATerm t)
        {
          t = not_null(c_89);
          return(t);
        }
        t = long_description_1_0(q_33, t);
        u_89 = t;
        t = (ATerm) ATinsert(CheckATermList(u_89), term_o_66);
        t = echo_0_0(t);
        LocalPopChoice(b_81);
      }
    else
      {
        t = a_81;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm s_92 (ATerm), ATerm t)
{
  static ATerm x_90 (ATerm t)
  {
    ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL;
    u_90 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_90 = ATgetFirst((ATermList) t);
        w_90 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_81 = t;
      int e_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_44 = NULL,f_44 = NULL,m_19 = NULL;
          t = SSLgetAnnotations(u_90);
          b_44 = t;
          t = v_90;
          t = s_92(t);
          f_44 = t;
          t = (ATerm) ATinsert(CheckATermList(w_90), f_44);
          m_19 = t;
          t = SSLsetAnnotations(m_19, b_44);
          LocalPopChoice(e_81);
        }
      else
        {
          t = d_81;
          {
            ATerm b_45 = NULL,e_45 = NULL,n_19 = NULL;
            t = SSLgetAnnotations(u_90);
            b_45 = t;
            t = w_90;
            t = x_90(t);
            e_45 = t;
            t = (ATerm) ATinsert(CheckATermList(e_45), v_90);
            n_19 = t;
            t = SSLsetAnnotations(n_19, b_45);
          }
        }
    }
    return(t);
  }
  t = x_90(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_91 = NULL,d_91 = NULL,e_91 = NULL;
  c_91 = t;
  {
    ATerm f_81 = t;
    int g_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_91;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_81 = ATgetFirst((ATermList) t);
                ATerm i_81 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_91;
          }
        LocalPopChoice(g_81);
      }
    else
      {
        t = f_81;
        t = (ATerm) ATinsert(ATempty, c_91);
      }
  }
  d_91 = t;
  t = term_a_37;
  e_91 = t;
  t = SSL_printnl(e_91, d_91);
  t = c_91;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_91 = NULL,l_91 = NULL;
  t = term_q_35;
  k_91 = t;
  t = term_n_80;
  l_91 = t;
  t = term_q_80;
  t = p_14(k_91, l_91, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm r_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_33 (ATerm t)
{
  ATerm o_91 = NULL,p_91 = NULL;
  t = term_j_81;
  o_91 = t;
  t = term_w_36;
  p_91 = t;
  t = term_l_81;
  t = u_14(o_91, p_91, t);
  return(t);
}
static ATerm w_33 (ATerm t)
{
  t = term_v_81;
  return(t);
}
static ATerm x_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_33 (ATerm t)
{
  ATerm q_91 = NULL,r_91 = NULL,v_91 = NULL,w_91 = NULL;
  t = term_j_81;
  v_91 = t;
  t = term_w_36;
  w_91 = t;
  t = term_l_81;
  t = u_14(v_91, w_91, t);
  t = term_s_74;
  q_91 = t;
  t = term_w_36;
  r_91 = t;
  t = term_u_74;
  t = u_14(q_91, r_91, t);
  t = term_x_81;
  return(t);
}
static ATerm a_34 (ATerm t)
{
  t = term_y_81;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_81 = t;
  int d_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_33, t_33, w_33, t);
      LocalPopChoice(d_82);
    }
  else
    {
      t = z_81;
      t = Option_3_0(x_33, y_33, a_34, t);
    }
  return(t);
}
static ATerm q_14 (ATerm b_53, ATerm c_53, ATerm a_53, ATerm t)
{
  ATerm d_92 = NULL,h_92 = NULL,k_92 = NULL,l_92 = NULL,n_92 = NULL;
  d_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_53, c_53);
  {
    ATerm e_82 = t;
    int f_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_82 = ATgetArgument(t, 0);
            ATerm h_82 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_53, c_53);
        t = p_14(b_53, c_53, t);
        LocalPopChoice(f_82);
      }
    else
      {
        t = e_82;
        t = (ATerm) ATempty;
      }
  }
  h_92 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_53, c_53, (ATerm) ATinsert(CheckATermList(h_92), a_53));
  t = lookup_table_0_1(b_53, t);
  n_92 = t;
  t = (ATerm) ATinsert(CheckATermList(h_92), a_53);
  k_92 = t;
  t = n_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(c_53, k_92, l_92, t);
  t = d_92;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm i_93 = NULL,k_93 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL;
      t = term_w_36;
      t = i_0(t);
      l_93 = t;
      t = term_z_71;
      m_93 = t;
      t = term_a_72;
      n_93 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_71, term_a_72, l_93);
      t = q_14(m_93, n_93, l_93, t);
      _fail(t);
    }
  else
    {
      ATerm s_93 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_93 = ATgetFirst((ATermList) t);
          k_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_93;
      t = d_0(t);
      t = term_w_36;
      t = g_0(t);
      s_93 = t;
      t = (ATerm) ATinsert(CheckATermList(k_93), s_93);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_62 (ATerm), ATerm t_62 (ATerm), ATerm t)
{
  ATerm t_93 = NULL,u_93 = NULL,w_93 = NULL,x_93 = NULL,c_94 = NULL,d_94 = NULL,s_19 = NULL;
  d_94 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_93 = ATgetFirst((ATermList) t);
      w_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_94);
  t_93 = t;
  t = u_93;
  t = s_62(t);
  x_93 = t;
  t = w_93;
  t = t_62(t);
  c_94 = t;
  t = (ATerm) ATinsert(CheckATermList(c_94), x_93);
  s_19 = t;
  t = SSLsetAnnotations(s_19, t_93);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_112 (ATerm), ATerm t)
{
  ATerm k_94 = NULL,l_94 = NULL,m_94 = NULL,o_94 = NULL,q_94 = NULL,v_94 = NULL,u_19 = NULL;
  k_94 = t;
  {
    ATerm i_82 = t;
    int j_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_82;
        t = r_112(t);
        LocalPopChoice(j_82);
      }
    else
      {
        t = i_82;
      }
  }
  t = k_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_94 = ATgetFirst((ATermList) t);
      o_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_94);
  l_94 = t;
  t = term_n_80;
  v_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_80, m_94);
  t = u_14(v_94, m_94, t);
  t = o_94;
  {
    static ATerm i_95 (ATerm t)
    {
      ATerm l_82 = t;
      int m_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_82 = t;
          int o_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_94 = NULL;
              z_94 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_94;
              LocalPopChoice(o_82);
            }
          else
            {
              t = n_82;
              t = r_112(t);
              t = Cons_2_0(_id, i_95, t);
            }
          LocalPopChoice(m_82);
        }
      else
        {
          t = l_82;
          {
            ATerm c_95 = NULL,f_95 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_95 = ATgetFirst((ATermList) t);
                f_95 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_95), (ATerm) ATmakeAppl(sym_Undefined_1, c_95));
          }
        }
      return(t);
    }
    t = i_95(t);
  }
  q_94 = t;
  t = (ATerm) ATinsert(CheckATermList(q_94), (ATerm) ATmakeAppl(sym_Program_1, m_94));
  u_19 = t;
  t = SSLsetAnnotations(u_19, l_94);
  return(t);
}
static ATerm l_34 (ATerm t)
{
  ATerm m_96 = NULL;
  m_96 = t;
  if(match_string(t, "--help"))
    {
      t = m_96;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_96;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_96;
        }
    }
  return(t);
}
static ATerm p_34 (ATerm t)
{
  ATerm n_96 = NULL,q_96 = NULL;
  t = term_h_74;
  n_96 = t;
  t = term_w_36;
  q_96 = t;
  t = term_i_74;
  t = u_14(n_96, q_96, t);
  t = term_p_82;
  return(t);
}
static ATerm u_34 (ATerm t)
{
  t = term_q_82;
  return(t);
}
static ATerm v_34 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_112 (ATerm), ATerm t)
{
  ATerm y_95 = NULL,z_95 = NULL,a_96 = NULL,e_96 = NULL,g_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL;
  a_96 = t;
  t = term_z_71;
  e_96 = t;
  t = term_r_82;
  t = lookup_table_0_1(e_96, t);
  l_96 = t;
  t = term_a_72;
  g_96 = t;
  t = (ATerm) ATempty;
  j_96 = t;
  t = l_96;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(g_96, j_96, k_96, t);
  t = a_96;
  {
    static ATerm c_34 (ATerm t)
    {
      ATerm w_82 = t;
      int x_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_112(t);
          LocalPopChoice(x_82);
        }
      else
        {
          t = w_82;
          {
            ATerm y_82 = t;
            int b_83 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_34, p_34, u_34, t);
                LocalPopChoice(b_83);
              }
            else
              {
                t = y_82;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_34, t);
  }
  {
    ATerm f_83 = t;
    int g_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_97 = NULL;
        j_97 = t;
        {
          ATerm m_83 = t;
          int o_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_45 = NULL;
              t = j_97;
              {
                ATerm u_83 = t;
                int x_83 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_45 = NULL,x_45 = NULL;
                    t = term_q_35;
                    v_45 = t;
                    t = term_h_74;
                    x_45 = t;
                    t = term_y_83;
                    t = p_14(v_45, x_45, t);
                    LocalPopChoice(x_83);
                  }
                else
                  {
                    t = u_83;
                    t = fetch_1_0(v_34, t);
                  }
              }
              t = j_97;
              t = default_system_usage_0_0(t);
              t = term_l_35;
              r_45 = t;
              t = SSL_exit(r_45);
              LocalPopChoice(o_83);
            }
          else
            {
              t = m_83;
              {
                ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
                t = term_q_35;
                d_46 = t;
                t = term_j_81;
                e_46 = t;
                t = term_a_84;
                t = p_14(d_46, e_46, t);
                t = j_97;
                t = default_system_about_0_0(t);
                t = term_l_35;
                c_46 = t;
                t = SSL_exit(c_46);
              }
            }
        }
        LocalPopChoice(g_83);
      }
    else
      {
        t = f_83;
        {
          ATerm b_84 = t;
          int c_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_97 = NULL,m_97 = NULL,p_97 = NULL;
              static ATerm w_34 (ATerm t)
              {
                ATerm s_97 = NULL,u_97 = NULL,x_97 = NULL,x_19 = NULL;
                x_97 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_97 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_97);
                s_97 = t;
                t = u_97;
                if(((y_95 != NULL) && (y_95 != t)))
                  _fail(t);
                else
                  y_95 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_97);
                x_19 = t;
                t = SSLsetAnnotations(x_19, s_97);
                return(t);
              }
              t = fetch_1_0(w_34, t);
              t = term_v_35;
              m_97 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_95)), term_d_84);
              p_97 = t;
              t = SSL_printnl(m_97, p_97);
              t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_95)), term_d_84));
              t = default_system_usage_0_0(t);
              t = term_x_38;
              l_97 = t;
              t = SSL_exit(l_97);
              LocalPopChoice(c_84);
            }
          else
            {
              t = b_84;
            }
        }
      }
  }
  z_95 = t;
  t = term_z_71;
  t = table_destroy_0_0(t);
  t = z_95;
  return(t);
}
static ATerm s_14 (ATerm t_56, ATerm u_56, ATerm v_56, ATerm t)
{
  ATerm d_98 = NULL;
  t = SSL_hashtable_put(v_56, t_56, u_56);
  d_98 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_98);
  return(t);
}
static ATerm t_14 (ATerm w_56, ATerm x_56, ATerm t)
{
  t = SSL_hashtable_get(x_56, w_56);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm b_57, ATerm c_57, ATerm t)
{
  ATerm f_98 = NULL;
  t = SSL_hashtable_create(b_57, c_57);
  f_98 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_98);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm g_98 = NULL,h_98 = NULL,k_98 = NULL,m_98 = NULL,n_98 = NULL;
  g_98 = t;
  t = term_e_84;
  m_98 = t;
  t = term_f_84;
  n_98 = t;
  t = g_98;
  t = new_hashtable_0_2(m_98, n_98, t);
  h_98 = t;
  t = g_98;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(g_98, h_98, k_98, t);
  t = g_98;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm o_98 = NULL;
  t = SSL_table_hashtable();
  o_98 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_98);
  return(t);
}
ATerm lookup_table_0_1 (ATerm n_54, ATerm t)
{
  ATerm c_99 = NULL;
  t = table_hashtable_0_0(t);
  c_99 = t;
  {
    ATerm g_84 = t;
    int h_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_46 = NULL;
        t = c_99;
        if(match_cons(t, sym_Hashtable_1))
          {
            k_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_14(n_54, k_46, t);
        LocalPopChoice(h_84);
      }
    else
      {
        t = g_84;
        {
          ATerm y_46 = NULL;
          t = n_54;
          t = table_create_0_0(t);
          t = c_99;
          if(match_cons(t, sym_Hashtable_1))
            {
              y_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_14(n_54, y_46, t);
        }
      }
  }
  return(t);
}
static ATerm u_14 (ATerm g_48, ATerm h_48, ATerm t)
{
  ATerm v_99 = NULL,d_100 = NULL;
  t = term_q_35;
  v_99 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, g_48, h_48);
  t = lookup_table_0_1(v_99, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(g_48, h_48, d_100, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, g_48, h_48);
  return(t);
}
static ATerm v_14 (ATerm g_37, ATerm h_37, ATerm t)
{
  t = SSL_strcat(g_37, h_37);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm u_100 = NULL,v_100 = NULL;
  v_100 = t;
  t = SSL_explode_string(v_100);
  {
    ATerm i_84 = t;
    int j_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm g_102 (ATerm t)
        {
          ATerm d_102 = NULL,e_102 = NULL,f_102 = NULL;
          d_102 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_102 = ATgetFirst((ATermList) t);
              f_102 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm k_84 = t;
            int v_84 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_47 = NULL,j_47 = NULL,e_20 = NULL;
                t = SSLgetAnnotations(d_102);
                g_47 = t;
                t = f_102;
                t = g_102(t);
                j_47 = t;
                t = (ATerm) ATinsert(CheckATermList(j_47), e_102);
                e_20 = t;
                t = SSLsetAnnotations(e_20, g_47);
                LocalPopChoice(v_84);
              }
            else
              {
                t = k_84;
                {
                  ATerm v_47 = NULL,f_20 = NULL;
                  t = SSLgetAnnotations(d_102);
                  v_47 = t;
                  t = e_102;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, e_102);
                  f_20 = t;
                  t = SSLsetAnnotations(f_20, v_47);
                }
              }
          }
          return(t);
        }
        t = g_102(t);
        LocalPopChoice(j_84);
      }
    else
      {
        t = i_84;
        t = (ATerm) ATempty;
      }
  }
  u_100 = t;
  t = SSL_implode_string(u_100);
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
  ATerm k_102 = NULL,l_102 = NULL,m_102 = NULL,n_102 = NULL,x_102 = NULL,a_103 = NULL,b_103 = NULL,c_103 = NULL,d_103 = NULL,e_103 = NULL,h_103 = NULL,i_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL,s_103 = NULL,u_103 = NULL,v_103 = NULL,y_103 = NULL,z_103 = NULL,a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL,g_104 = NULL,h_104 = NULL,i_104 = NULL,j_104 = NULL,k_104 = NULL,l_104 = NULL,m_104 = NULL,p_104 = NULL,s_104 = NULL,t_104 = NULL;
  k_102 = t;
  t = term_c_66;
  s_104 = t;
  t = term_y_84;
  t_104 = t;
  t = term_a_85;
  t = u_14(s_104, t_104, t);
  t = term_r_35;
  m_104 = t;
  t = term_x_38;
  p_104 = t;
  t = term_b_85;
  t = u_14(m_104, p_104, t);
  t = term_q_40;
  k_104 = t;
  t = term_l_35;
  l_104 = t;
  t = term_c_85;
  t = u_14(k_104, l_104, t);
  t = term_x_40;
  i_104 = t;
  t = term_n_42;
  j_104 = t;
  t = term_h_85;
  t = u_14(i_104, j_104, t);
  t = term_k_60;
  g_104 = t;
  t = (ATerm) ATempty;
  h_104 = t;
  t = term_s_85;
  t = u_14(g_104, h_104, t);
  t = term_p_37;
  e_104 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_86), term_t_85);
  f_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_37, (ATerm) ATinsert(ATinsert(ATempty, term_g_86), term_t_85));
  t = u_14(e_104, f_104, t);
  t = term_m_86;
  t = xtc_find_path_0_0(t);
  h_103 = t;
  t = term_n_86;
  d_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_103, term_n_86);
  t = v_14(h_103, d_104, t);
  a_103 = t;
  t = term_m_86;
  t = xtc_find_path_0_0(t);
  e_103 = t;
  t = term_n_86;
  c_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_103, term_n_86);
  t = v_14(e_103, c_104, t);
  b_103 = t;
  t = term_q_86;
  t = xtc_find_path_0_0(t);
  d_103 = t;
  t = term_n_86;
  b_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_103, term_n_86);
  t = v_14(d_103, b_104, t);
  c_103 = t;
  t = term_i_36;
  z_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_103), term_k_60), b_103), term_k_60), a_103), term_k_60);
  a_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_103), term_k_60), b_103), term_k_60), a_103), term_k_60));
  t = u_14(z_103, a_104, t);
  t = term_m_86;
  t = xtc_find_path_0_0(t);
  x_102 = t;
  t = term_r_86;
  y_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_102, term_r_86);
  t = v_14(x_102, y_103, t);
  l_102 = t;
  t = term_q_86;
  t = xtc_find_path_0_0(t);
  n_102 = t;
  t = term_x_86;
  v_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_102, term_x_86);
  t = v_14(n_102, v_103, t);
  m_102 = t;
  t = term_c_36;
  s_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_87), term_h_87), m_102), term_b_87), term_g_87), term_c_87), l_102), term_b_87);
  u_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_87), term_h_87), m_102), term_b_87), term_g_87), term_c_87), l_102), term_b_87));
  t = u_14(s_103, u_103, t);
  t = term_f_56;
  o_103 = t;
  t = term_z_87;
  p_103 = t;
  t = term_a_88;
  t = u_14(o_103, p_103, t);
  t = term_f_55;
  i_103 = t;
  t = (ATerm) ATinsert(ATempty, term_b_88);
  n_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_55, (ATerm) ATinsert(ATempty, term_b_88));
  t = u_14(i_103, n_103, t);
  t = k_102;
  return(t);
}
static ATerm x_34 (ATerm t)
{
  ATerm m_106 = NULL,n_106 = NULL,q_106 = NULL;
  m_106 = t;
  t = term_q_35;
  n_106 = t;
  t = term_c_55;
  q_106 = t;
  t = term_c_88;
  t = p_14(n_106, q_106, t);
  t = debug_1_0(a_35, t);
  t = m_106;
  return(t);
}
static ATerm a_35 (ATerm t)
{
  t = term_d_88;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_strc_config_0_0(t);
  t = parse_options_1_0(strc_options_0_0, t);
  {
    ATerm e_88 = t;
    int f_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_104 = NULL,y_104 = NULL,z_104 = NULL,e_105 = NULL,h_105 = NULL;
        t = term_q_35;
        e_105 = t;
        t = term_k_74;
        h_105 = t;
        t = term_g_88;
        t = p_14(e_105, h_105, t);
        t = term_h_88;
        t = xtc_find_0_0(t);
        x_104 = t;
        t = term_a_37;
        z_104 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_104, term_a_37);
        t = y_13(x_104, z_104, t);
        t = term_l_35;
        y_104 = t;
        t = SSL_exit(y_104);
        LocalPopChoice(f_88);
      }
    else
      {
        t = e_88;
      }
  }
  {
    ATerm i_88 = t;
    int n_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_105 = NULL,t_105 = NULL,u_105 = NULL;
        t = term_q_35;
        t_105 = t;
        t = term_s_74;
        u_105 = t;
        t = term_o_88;
        t = p_14(t_105, u_105, t);
        t = strc_version_0_0(t);
        t = term_l_35;
        q_105 = t;
        t = SSL_exit(q_105);
        LocalPopChoice(n_88);
      }
    else
      {
        t = i_88;
      }
  }
  {
    ATerm r_88 = t;
    int s_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_106 = NULL,e_106 = NULL,f_106 = NULL;
        a_106 = t;
        t = term_q_35;
        e_106 = t;
        t = term_c_55;
        f_106 = t;
        t = term_c_88;
        t = p_14(e_106, f_106, t);
        t = a_106;
        LocalPopChoice(s_88);
      }
    else
      {
        t = r_88;
        {
          ATerm g_106 = NULL,k_106 = NULL,l_106 = NULL;
          t = term_v_35;
          k_106 = t;
          t = (ATerm) ATinsert(ATempty, term_t_88);
          l_106 = t;
          t = SSL_printnl(k_106, l_106);
          t = term_x_38;
          g_106 = t;
          t = SSL_exit(g_106);
          t = (ATerm) ATinsert(ATempty, term_t_88);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(x_34, t);
  return(t);
}
static ATerm f_35 (ATerm t)
{
  t = if_verbose1_1_0(h_35, t);
  return(t);
}
static ATerm g_35 (ATerm t)
{
  t = xtc_temp_files_1_0(i_35, t);
  return(t);
}
static ATerm h_35 (ATerm t)
{
  ATerm u_106 = NULL,w_106 = NULL,x_106 = NULL;
  u_106 = t;
  t = term_v_35;
  w_106 = t;
  t = (ATerm) ATinsert(CheckATermList(u_106), term_x_88);
  x_106 = t;
  t = SSL_printnl(w_106, x_106);
  t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(CheckATermList(u_106), term_x_88));
  return(t);
}
static ATerm i_35 (ATerm t)
{
  ATerm y_88 = t;
  int z_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_106 = NULL,z_106 = NULL,a_107 = NULL;
      t = term_q_35;
      z_106 = t;
      t = term_c_55;
      a_107 = t;
      t = term_c_88;
      t = p_14(z_106, a_107, t);
      y_106 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_106);
      LocalPopChoice(z_88);
    }
  else
    {
      t = y_88;
      t = term_x_57;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm k_35 (ATerm t)
{
  ATerm b_107 = NULL,d_107 = NULL,e_107 = NULL;
  t = run_time_0_0(t);
  b_107 = t;
  t = term_v_35;
  d_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_89), b_107), term_a_89);
  e_107 = t;
  t = SSL_printnl(d_107, e_107);
  t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_89), b_107), term_a_89));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm d_89 = t;
  int e_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_106 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(f_35, g_35, t);
      t = if_verbose2_1_0(k_35, t);
      t = term_l_35;
      r_106 = t;
      t = SSL_exit(r_106);
      LocalPopChoice(e_89);
    }
  else
    {
      t = d_89;
      {
        ATerm f_107 = NULL,g_107 = NULL,h_107 = NULL,k_107 = NULL;
        t = run_time_0_0(t);
        f_107 = t;
        t = term_v_35;
        h_107 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_89), f_107), term_k_89);
        k_107 = t;
        t = SSL_printnl(h_107, k_107);
        t = term_x_38;
        g_107 = t;
        t = SSL_exit(g_107);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
