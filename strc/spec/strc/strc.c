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
ATerm term_f_89;
ATerm term_b_89;
ATerm term_a_89;
ATerm term_u_88;
ATerm term_t_88;
ATerm term_k_88;
ATerm term_h_88;
ATerm term_g_88;
ATerm term_d_88;
ATerm term_c_88;
ATerm term_b_88;
ATerm term_a_88;
ATerm term_j_87;
ATerm term_i_87;
ATerm term_e_87;
ATerm term_d_87;
ATerm term_z_86;
ATerm term_t_86;
ATerm term_s_86;
ATerm term_p_86;
ATerm term_o_86;
ATerm term_i_86;
ATerm term_c_86;
ATerm term_p_85;
ATerm term_o_85;
ATerm term_h_85;
ATerm term_q_84;
ATerm term_n_84;
ATerm term_m_84;
ATerm term_l_84;
ATerm term_k_84;
ATerm term_d_84;
ATerm term_z_83;
ATerm term_y_83;
ATerm term_s_83;
ATerm term_r_83;
ATerm term_r_82;
ATerm term_q_82;
ATerm term_p_82;
ATerm term_k_82;
ATerm term_x_81;
ATerm term_n_81;
ATerm term_l_81;
ATerm term_k_81;
ATerm term_j_81;
ATerm term_v_80;
ATerm term_u_80;
ATerm term_o_80;
ATerm term_n_80;
ATerm term_k_80;
ATerm term_i_80;
ATerm term_e_80;
ATerm term_d_80;
ATerm term_b_80;
ATerm term_y_79;
ATerm term_x_79;
ATerm term_w_79;
ATerm term_v_79;
ATerm term_s_79;
ATerm term_q_79;
ATerm term_p_79;
ATerm term_o_79;
ATerm term_j_79;
ATerm term_g_79;
ATerm term_f_79;
ATerm term_e_79;
ATerm term_c_79;
ATerm term_b_79;
ATerm term_a_79;
ATerm term_i_75;
ATerm term_g_75;
ATerm term_c_75;
ATerm term_a_75;
ATerm term_z_74;
ATerm term_u_74;
ATerm term_p_74;
ATerm term_n_74;
ATerm term_m_74;
ATerm term_l_74;
ATerm term_k_74;
ATerm term_j_74;
ATerm term_f_74;
ATerm term_d_74;
ATerm term_a_74;
ATerm term_z_73;
ATerm term_y_73;
ATerm term_x_73;
ATerm term_u_73;
ATerm term_t_73;
ATerm term_s_73;
ATerm term_r_73;
ATerm term_q_73;
ATerm term_p_73;
ATerm term_o_73;
ATerm term_n_73;
ATerm term_m_73;
ATerm term_l_73;
ATerm term_g_73;
ATerm term_e_73;
ATerm term_d_73;
ATerm term_c_73;
ATerm term_b_73;
ATerm term_y_72;
ATerm term_l_72;
ATerm term_k_72;
ATerm term_j_72;
ATerm term_i_72;
ATerm term_h_72;
ATerm term_g_72;
ATerm term_c_72;
ATerm term_b_72;
ATerm term_a_72;
ATerm term_z_71;
ATerm term_v_71;
ATerm term_u_71;
ATerm term_m_71;
ATerm term_f_71;
ATerm term_d_71;
ATerm term_a_71;
ATerm term_y_70;
ATerm term_x_70;
ATerm term_w_70;
ATerm term_v_70;
ATerm term_s_70;
ATerm term_r_70;
ATerm term_j_70;
ATerm term_g_70;
ATerm term_c_70;
ATerm term_b_70;
ATerm term_a_70;
ATerm term_w_69;
ATerm term_s_69;
ATerm term_p_69;
ATerm term_o_69;
ATerm term_k_69;
ATerm term_i_69;
ATerm term_s_66;
ATerm term_r_66;
ATerm term_q_66;
ATerm term_n_66;
ATerm term_l_66;
ATerm term_h_66;
ATerm term_f_66;
ATerm term_e_66;
ATerm term_d_66;
ATerm term_c_66;
ATerm term_b_66;
ATerm term_a_66;
ATerm term_b_64;
ATerm term_z_63;
ATerm term_y_63;
ATerm term_x_63;
ATerm term_t_63;
ATerm term_r_63;
ATerm term_q_63;
ATerm term_p_63;
ATerm term_o_63;
ATerm term_n_63;
ATerm term_m_63;
ATerm term_l_63;
ATerm term_k_63;
ATerm term_j_63;
ATerm term_g_63;
ATerm term_f_63;
ATerm term_e_63;
ATerm term_w_62;
ATerm term_c_62;
ATerm term_v_61;
ATerm term_s_61;
ATerm term_r_61;
ATerm term_f_61;
ATerm term_d_61;
ATerm term_z_60;
ATerm term_q_60;
ATerm term_o_60;
ATerm term_n_60;
ATerm term_m_60;
ATerm term_j_60;
ATerm term_h_60;
ATerm term_c_60;
ATerm term_a_60;
ATerm term_z_59;
ATerm term_u_59;
ATerm term_c_59;
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
ATerm term_f_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_x_56;
ATerm term_g_56;
ATerm term_f_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_y_55;
ATerm term_x_55;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_e_55;
ATerm term_d_55;
ATerm term_z_54;
ATerm term_r_54;
ATerm term_e_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_b_54;
ATerm term_a_54;
ATerm term_u_53;
ATerm term_t_53;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_k_53;
ATerm term_i_53;
ATerm term_g_53;
ATerm term_e_53;
ATerm term_d_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_g_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_a_52;
ATerm term_z_51;
ATerm term_x_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_b_51;
ATerm term_q_50;
ATerm term_p_50;
ATerm term_n_50;
ATerm term_l_50;
ATerm term_k_50;
ATerm term_j_50;
ATerm term_i_50;
ATerm term_h_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_r_49;
ATerm term_q_49;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_n_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_k_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_x_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_g_48;
ATerm term_f_48;
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
ATerm term_c_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_q_46;
ATerm term_o_46;
ATerm term_j_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_b_46;
ATerm term_s_45;
ATerm term_m_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_f_45;
ATerm term_z_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_d_44;
ATerm term_u_43;
ATerm term_q_43;
ATerm term_i_43;
ATerm term_g_43;
ATerm term_b_43;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_n_42;
ATerm term_l_42;
ATerm term_h_42;
ATerm term_x_41;
ATerm term_p_41;
ATerm term_a_41;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_q_39;
ATerm term_o_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_g_38;
ATerm term_d_38;
ATerm term_b_38;
ATerm term_t_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_k_37;
ATerm term_i_37;
ATerm term_a_37;
ATerm term_x_36;
ATerm term_s_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
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
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeInt(2);
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
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_j_36);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_l_36);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_t_37);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_o_37);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
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
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
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
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_r_40);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_x_40);
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_g_43);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".sci", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in `", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("', concrete syntax in `", 0, ATtrue));
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
  term_y_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_47, term_t_38, term_x_47);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_47, term_u_35, term_a_48);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_48, term_i_39, term_d_48);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_48, term_l_42, term_g_48);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_48, term_l_48, term_m_48);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_48, term_p_48, term_q_48);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_48, term_t_48, term_u_48);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_49, term_f_49, term_g_49);
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_49, term_k_49, term_l_49);
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_49, term_o_49, term_p_49);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_49, term_u_49, term_v_49);
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_49, term_h_42, term_y_49);
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_50, term_b_50, term_c_50);
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_50, term_f_50, term_g_50);
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_50, term_j_50, term_k_50);
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_50, term_p_50, term_q_50);
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_51, term_f_51, term_g_51);
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_51, term_j_51, term_n_51);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_51, term_q_51, term_r_51);
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_51, term_a_52, term_d_52);
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_52, term_l_52, term_m_52);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_52, term_p_52, term_t_52);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_52, term_w_52, term_y_52);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_53, term_b_53, term_c_53);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_53, term_i_45, term_g_53);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_53, term_l_53, term_m_53);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_53, term_t_53, term_u_53);
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_54, term_c_54, term_d_54);
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_d_55);
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_l_55);
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_y_55));
  term_y_55 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_x_55);
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_f_56);
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(sym_Scopes_0);
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
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(sym__2, term_v_57, term_f_57);
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_z_59);
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_h_60);
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_z_60);
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_r_61));
  term_r_61 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_s_61));
  term_s_61 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_c_62));
  term_c_62 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_g_63));
  term_g_63 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
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
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_x_63));
  term_x_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_b_64));
  term_b_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_c_66);
  ATprotect(&(term_e_66));
  term_e_66 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_f_66));
  term_f_66 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_h_66));
  term_h_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_l_66));
  term_l_66 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_66));
  term_n_66 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_q_66));
  term_q_66 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_r_66));
  term_r_66 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_s_66));
  term_s_66 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_69));
  term_k_69 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_p_69));
  term_p_69 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_69));
  term_s_69 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_w_69));
  term_w_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_b_70));
  term_b_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_70));
  term_c_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_70));
  term_g_70 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_j_70));
  term_j_70 = (ATerm) ATmakeAppl(sym_Repository_0);
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
  term_y_70 = (ATerm) ATmakeAppl(sym__2, term_g_70, term_x_70);
  ATprotect(&(term_a_71));
  term_a_71 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_d_71));
  term_d_71 = (ATerm) ATmakeAppl(sym__2, term_g_70, term_j_70);
  ATprotect(&(term_f_71));
  term_f_71 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_71));
  term_m_71 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_71));
  term_u_71 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_71));
  term_v_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_72));
  term_a_72 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_72));
  term_b_72 = (ATerm) ATmakeAppl(sym__2, term_r_35, term_l_35);
  ATprotect(&(term_c_72));
  term_c_72 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_35);
  ATprotect(&(term_g_72));
  term_g_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_72));
  term_i_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_72));
  term_j_72 = (ATerm) ATmakeAppl(sym__2, term_i_72, term_x_36);
  ATprotect(&(term_k_72));
  term_k_72 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_72));
  term_y_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_73));
  term_b_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_73));
  term_c_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_d_73));
  term_d_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_e_73));
  term_e_73 = (ATerm) ATmakeAppl(sym__2, term_t_37, term_x_36);
  ATprotect(&(term_g_73));
  term_g_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_l_73));
  term_l_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_m_73));
  term_m_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(sym__2, term_l_36, term_x_36);
  ATprotect(&(term_p_73));
  term_p_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_q_73));
  term_q_73 = (ATerm) ATmakeAppl(sym__2, term_z_59, term_x_36);
  ATprotect(&(term_r_73));
  term_r_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_s_73));
  term_s_73 = (ATerm) ATmakeAppl(sym__2, term_l_55, term_x_36);
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_u_73));
  term_u_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_x_73));
  term_x_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_y_73));
  term_y_73 = (ATerm) ATmakeAppl(sym__2, term_g_43, term_x_36);
  ATprotect(&(term_z_73));
  term_z_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_74));
  term_f_74 = (ATerm) ATmakeAppl(sym__2, term_d_74, term_x_36);
  ATprotect(&(term_j_74));
  term_j_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(sym__2, term_k_74, term_x_36);
  ATprotect(&(term_m_74));
  term_m_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_n_74));
  term_n_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_74));
  term_p_74 = (ATerm) ATmakeAppl(sym__2, term_n_74, term_x_36);
  ATprotect(&(term_u_74));
  term_u_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_z_74));
  term_z_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_a_75));
  term_a_75 = (ATerm) ATmakeAppl(sym__2, term_x_55, term_t_38);
  ATprotect(&(term_c_75));
  term_c_75 = (ATerm) ATmakeAppl(sym__2, term_c_56, term_l_35);
  ATprotect(&(term_g_75));
  term_g_75 = (ATerm) ATmakeAppl(sym__2, term_z_60, term_x_36);
  ATprotect(&(term_i_75));
  term_i_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_a_79));
  term_a_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_b_79));
  term_b_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_c_79));
  term_c_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_e_79));
  term_e_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_f_79));
  term_f_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_g_79));
  term_g_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_j_79));
  term_j_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_p_79));
  term_p_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_q_79));
  term_q_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_s_79));
  term_s_79 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_v_79));
  term_v_79 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_x_79));
  term_x_79 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_y_79));
  term_y_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_b_80));
  term_b_80 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_d_80));
  term_d_80 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_e_80));
  term_e_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_i_80));
  term_i_80 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_k_80));
  term_k_80 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_80));
  term_n_80 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_80));
  term_o_80 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_n_80);
  ATprotect(&(term_u_80));
  term_u_80 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_80));
  term_v_80 = (ATerm) ATmakeAppl(sym__2, term_z_71, term_a_72);
  ATprotect(&(term_j_81));
  term_j_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_81));
  term_k_81 = (ATerm) ATmakeAppl(sym__2, term_j_81, term_x_36);
  ATprotect(&(term_l_81));
  term_l_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_81));
  term_n_81 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_81));
  term_x_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_82));
  term_k_82 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_82));
  term_p_82 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_82));
  term_q_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_82));
  term_r_82 = (ATerm) ATmakeAppl(sym__3, term_z_71, term_a_72, (ATerm) ATempty);
  ATprotect(&(term_r_83));
  term_r_83 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_d_74);
  ATprotect(&(term_s_83));
  term_s_83 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_j_81);
  ATprotect(&(term_y_83));
  term_y_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_83));
  term_z_83 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.6pre", 0, ATtrue));
  ATprotect(&(term_l_84));
  term_l_84 = (ATerm) ATmakeAppl(sym__2, term_c_66, term_k_84);
  ATprotect(&(term_m_84));
  term_m_84 = (ATerm) ATmakeAppl(sym__2, term_r_35, term_t_38);
  ATprotect(&(term_n_84));
  term_n_84 = (ATerm) ATmakeAppl(sym__2, term_r_40, term_l_35);
  ATprotect(&(term_q_84));
  term_q_84 = (ATerm) ATmakeAppl(sym__2, term_x_40, term_l_42);
  ATprotect(&(term_h_85));
  term_h_85 = (ATerm) ATmakeAppl(sym__2, term_h_60, (ATerm) ATempty);
  ATprotect(&(term_o_85));
  term_o_85 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_p_85));
  term_p_85 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_c_86));
  term_c_86 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_i_86));
  term_i_86 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_o_86));
  term_o_86 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_p_86));
  term_p_86 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_s_86));
  term_s_86 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_t_86));
  term_t_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_z_86));
  term_z_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_d_87));
  term_d_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_e_87));
  term_e_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_i_87));
  term_i_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_j_87));
  term_j_87 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_a_88));
  term_a_88 = (ATerm) ATmakeAppl(sym__2, term_f_56, term_j_87);
  ATprotect(&(term_b_88));
  term_b_88 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_c_88));
  term_c_88 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_z_54);
  ATprotect(&(term_d_88));
  term_d_88 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_g_88));
  term_g_88 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_k_74);
  ATprotect(&(term_h_88));
  term_h_88 = (ATerm) ATmakeAppl(ATmakeSymbol("strc-manual.txt", 0, ATtrue));
  ATprotect(&(term_k_88));
  term_k_88 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_n_74);
  ATprotect(&(term_t_88));
  term_t_88 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_u_88));
  term_u_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_a_89));
  term_a_89 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_b_89));
  term_b_89 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_89));
  term_f_89 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm d_109 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm h_13 (ATerm g_22, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm i_13 (ATerm e_22, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm j_13 (ATerm b_45, ATerm a_45, ATerm t);
ATerm rename_to_1_0 (ATerm x_0 (ATerm), ATerm t);
ATerm ac2abox_0_0 (ATerm t);
static ATerm l_2 (ATerm t);
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
static ATerm a_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm c_7 (ATerm t);
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
ATerm if_keep1_1_0 (ATerm e_110 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm j_119 (ATerm), ATerm k_119 (ATerm), ATerm t);
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
ATerm if_keep4_1_0 (ATerm h_110 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm j_110 (ATerm), ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
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
static ATerm t_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm v_11 (ATerm t);
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
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
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
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
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
static ATerm s_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm c_19 (ATerm t);
ATerm save_as_1_0 (ATerm u_84 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm f_110 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm j_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm t);
static ATerm n_13 (ATerm s_49, ATerm t_49, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm p_110 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm f_119 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm s_21, ATerm t_21, ATerm t);
ATerm foldr_3_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm t);
static ATerm a_20 (ATerm t);
static ATerm h_20 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm i_20 (ATerm t);
static ATerm k_20 (ATerm t);
static ATerm n_20 (ATerm t);
static ATerm r_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm v_20 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm i_110 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm g_110 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm y_93 (ATerm), ATerm t);
static ATerm y_20 (ATerm t);
static ATerm b_21 (ATerm t);
static ATerm c_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm k_13 (ATerm y_21, ATerm z_21, ATerm t);
static ATerm l_13 (ATerm t_23, ATerm u_23, ATerm t);
static ATerm m_13 (ATerm d_93 (ATerm), ATerm y_196, ATerm d_24, ATerm t);
static ATerm p_13 (ATerm v_106 (ATerm), ATerm m_43, ATerm k_43, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm d_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm f_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm g_118 (ATerm), ATerm t);
static ATerm g_21 (ATerm t);
static ATerm i_21 (ATerm t);
static ATerm m_21 (ATerm t);
static ATerm n_21 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm p_21 (ATerm t);
static ATerm q_21 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm v_21 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm t_84 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm x_21 (ATerm t);
static ATerm b_22 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm e_109 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm k_104 (ATerm), ATerm t);
static ATerm c_22 (ATerm t);
static ATerm j_22 (ATerm t);
static ATerm m_22 (ATerm t);
static ATerm n_22 (ATerm t);
static ATerm q_13 (ATerm u_21, ATerm t);
static ATerm q_22 (ATerm t);
static ATerm r_22 (ATerm t);
static ATerm s_22 (ATerm t);
static ATerm u_22 (ATerm t);
static ATerm v_22 (ATerm t);
static ATerm w_22 (ATerm t);
static ATerm z_22 (ATerm t);
static ATerm a_23 (ATerm t);
static ATerm c_23 (ATerm t);
static ATerm d_23 (ATerm t);
static ATerm f_23 (ATerm t);
static ATerm j_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm l_23 (ATerm t);
static ATerm m_23 (ATerm t);
static ATerm p_23 (ATerm t);
static ATerm x_23 (ATerm t);
static ATerm y_23 (ATerm t);
static ATerm b_24 (ATerm t);
static ATerm c_24 (ATerm t);
static ATerm e_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm i_24 (ATerm t);
static ATerm k_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm n_24 (ATerm t);
static ATerm o_24 (ATerm t);
static ATerm p_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm s_24 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm v_24 (ATerm t);
static ATerm w_24 (ATerm t);
static ATerm x_24 (ATerm t);
static ATerm z_24 (ATerm t);
static ATerm c_25 (ATerm t);
static ATerm d_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm f_25 (ATerm t);
static ATerm l_25 (ATerm t);
static ATerm o_25 (ATerm t);
static ATerm q_25 (ATerm t);
static ATerm t_25 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm v_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm e_26 (ATerm t);
static ATerm f_26 (ATerm t);
static ATerm g_26 (ATerm t);
static ATerm h_26 (ATerm t);
static ATerm j_26 (ATerm t);
static ATerm n_26 (ATerm t);
static ATerm o_26 (ATerm t);
static ATerm p_26 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm o_14 (ATerm j_55, ATerm k_55, ATerm t);
static ATerm r_13 (ATerm v_53, ATerm w_53, ATerm t);
ATerm end_scope_1_0 (ATerm s_106 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm r_106 (ATerm), ATerm t);
static ATerm r_26 (ATerm t);
static ATerm y_26 (ATerm t);
static ATerm z_26 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm r_118 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm c_109 (ATerm), ATerm t);
static ATerm t_13 (ATerm y_41, ATerm z_41, ATerm t);
static ATerm v_13 (ATerm e_42, ATerm f_42, ATerm t);
static ATerm w_13 (ATerm s_50, ATerm u_50, ATerm w_50, ATerm y_50, ATerm t_50, ATerm v_50, ATerm x_50, ATerm z_50, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm b_93 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
static ATerm x_13 (ATerm c_45, ATerm d_45, ATerm t);
static ATerm y_13 (ATerm p_57, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm g_109 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm f_109 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm h_109 (ATerm), ATerm t);
static ATerm b_14 (ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm f_30, ATerm e_30, ATerm t);
static ATerm c_14 (ATerm x_97 (ATerm), ATerm b_30, ATerm a_30, ATerm t);
static ATerm g_27 (ATerm t);
static ATerm d_14 (ATerm n_54, ATerm o_54, ATerm p_54, ATerm t);
static ATerm e_14 (ATerm y_113 (ATerm), ATerm x_54, ATerm w_54, ATerm t);
static ATerm i_14 (ATerm v_38, ATerm w_38, ATerm t);
static ATerm f_73 (ATerm s_72, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_14 (ATerm z_23, ATerm t);
static ATerm g_14 (ATerm e_39, ATerm f_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_75 (ATerm v_73, ATerm t);
static ATerm j_75 (ATerm b_74, ATerm c_74, ATerm e_74, ATerm t);
static ATerm k_75 (ATerm q_74, ATerm r_74, ATerm s_74, ATerm t);
static ATerm h_14 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm i_27 (ATerm t);
static ATerm j_27 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm k_27 (ATerm t);
static ATerm p_27 (ATerm t);
static ATerm s_27 (ATerm t);
static ATerm t_27 (ATerm t);
static ATerm v_27 (ATerm t);
static ATerm w_27 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm y_27 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm p_101 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
static ATerm c_28 (ATerm t);
static ATerm d_28 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm a_80 (ATerm d_79, ATerm t);
static ATerm h_28 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm j_28 (ATerm t);
static ATerm l_28 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm j_14 (ATerm b_49, ATerm a_49, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm m_28 (ATerm t);
static ATerm n_28 (ATerm t);
static ATerm o_28 (ATerm t);
static ATerm p_28 (ATerm t);
static ATerm q_28 (ATerm t);
static ATerm r_28 (ATerm t);
static ATerm s_28 (ATerm t);
static ATerm t_28 (ATerm t);
static ATerm u_28 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm k_14 (ATerm y_48, ATerm z_48, ATerm t);
ATerm at_end_1_0 (ATerm d_94 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_83 (ATerm b_83, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm l_14 (ATerm c_49, ATerm d_49, ATerm t);
static ATerm b_29 (ATerm t);
static ATerm e_29 (ATerm t);
static ATerm g_29 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_29 (ATerm t);
static ATerm n_29 (ATerm t);
static ATerm o_29 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm p_29 (ATerm t);
static ATerm s_29 (ATerm t);
static ATerm c_30 (ATerm t);
static ATerm d_30 (ATerm t);
static ATerm g_30 (ATerm t);
static ATerm h_30 (ATerm t);
static ATerm k_30 (ATerm t);
static ATerm o_30 (ATerm t);
static ATerm z_30 (ATerm t);
static ATerm a_31 (ATerm t);
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
static ATerm o_31 (ATerm t);
static ATerm p_31 (ATerm t);
static ATerm q_31 (ATerm t);
static ATerm r_31 (ATerm t);
static ATerm s_31 (ATerm t);
static ATerm t_31 (ATerm t);
static ATerm u_31 (ATerm t);
static ATerm v_31 (ATerm t);
static ATerm w_31 (ATerm t);
static ATerm x_31 (ATerm t);
static ATerm y_31 (ATerm t);
static ATerm z_31 (ATerm t);
static ATerm a_32 (ATerm t);
static ATerm b_32 (ATerm t);
static ATerm c_32 (ATerm t);
static ATerm d_32 (ATerm t);
static ATerm e_32 (ATerm t);
static ATerm i_32 (ATerm t);
static ATerm j_32 (ATerm t);
static ATerm k_32 (ATerm t);
static ATerm m_32 (ATerm t);
static ATerm o_32 (ATerm t);
static ATerm p_32 (ATerm t);
static ATerm q_32 (ATerm t);
static ATerm s_32 (ATerm t);
static ATerm t_32 (ATerm t);
static ATerm u_32 (ATerm t);
static ATerm w_32 (ATerm t);
static ATerm x_32 (ATerm t);
static ATerm z_32 (ATerm t);
static ATerm a_33 (ATerm t);
static ATerm b_33 (ATerm t);
static ATerm c_33 (ATerm t);
static ATerm d_33 (ATerm t);
static ATerm e_33 (ATerm t);
static ATerm g_33 (ATerm t);
static ATerm h_33 (ATerm t);
static ATerm i_33 (ATerm t);
static ATerm j_33 (ATerm t);
ATerm strc_options_0_0 (ATerm t);
static ATerm m_14 (ATerm n_57, ATerm o_57, ATerm t);
static ATerm n_14 (ATerm s_57, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm m_93 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t);
static ATerm o_33 (ATerm t);
static ATerm p_33 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_93 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm r_33 (ATerm t);
static ATerm t_33 (ATerm t);
static ATerm u_33 (ATerm t);
static ATerm v_33 (ATerm t);
static ATerm z_33 (ATerm t);
static ATerm a_34 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm p_14 (ATerm q_53, ATerm r_53, ATerm p_53, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm h_63 (ATerm), ATerm i_63 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_113 (ATerm), ATerm t);
static ATerm i_34 (ATerm t);
static ATerm n_34 (ATerm t);
static ATerm r_34 (ATerm t);
static ATerm s_34 (ATerm t);
ATerm parse_options_1_0 (ATerm u_113 (ATerm), ATerm t);
static ATerm r_14 (ATerm i_57, ATerm j_57, ATerm k_57, ATerm t);
static ATerm s_14 (ATerm l_57, ATerm m_57, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_57, ATerm r_57, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm c_55, ATerm t);
static ATerm t_14 (ATerm v_48, ATerm w_48, ATerm t);
static ATerm u_14 (ATerm v_37, ATerm w_37, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm init_strc_config_0_0 (ATerm t);
static ATerm x_34 (ATerm t);
static ATerm y_34 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm c_35 (ATerm t);
static ATerm d_35 (ATerm t);
static ATerm h_35 (ATerm t);
static ATerm j_35 (ATerm t);
static ATerm k_35 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,j_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = l_100(t);
    }
  else
    {
      ATerm s_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_0 = ATgetFirst((ATermList) t);
          j_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_0;
      t = foldr_2_0(l_100, m_100, t);
      s_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_0, s_0);
      t = m_100(t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_l_35;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm c_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      c_1 = ATgetArgument(t, 0);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_13(c_1, e_1, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_0 = NULL,a_0 = NULL,h_0 = NULL;
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
  t = foldr_2_0(m_0, q_0, t);
  y_0 = t;
  t = SSL_TicksToSeconds(y_0);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm f_1 = NULL;
  f_1 = t;
  {
    ATerm n_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL,l_1 = NULL,m_1 = NULL;
        t = term_q_35;
        l_1 = t;
        t = term_r_35;
        m_1 = t;
        t = term_s_35;
        t = o_14(l_1, m_1, t);
        j_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_1, term_u_35);
        t = geq_0_0(t);
        t = f_1;
        t = d_109(t);
        LocalPopChoice(o_35);
      }
    else
      {
        t = n_35;
        t = f_1;
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
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
static ATerm g_1 (ATerm t)
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
static ATerm h_13 (ATerm g_22, ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,v_1 = NULL;
  t = if_verbose2_1_0(d_1, t);
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
        t = o_14(b_2, c_2, t);
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
        t = get_outfile_1_0(g_1, t);
      }
  }
  o_1 = t;
  t = term_q_35;
  s_1 = t;
  t = term_c_36;
  v_1 = t;
  t = term_d_36;
  t = o_14(s_1, v_1, t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_36, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_1), o_1), term_a_36), g_22));
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
      t = n_13(q_1, r_1, t);
      t = term_g_36;
      k_2 = t;
      t = SSL_exit(k_2);
      return(t);
    }
    t = fork_and_wait_1_0(i_1, t);
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL;
  v_2 = t;
  t = term_v_35;
  w_2 = t;
  t = (ATerm) ATinsert(ATempty, term_h_36);
  x_2 = t;
  t = SSL_printnl(w_2, x_2);
  t = v_2;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_i_36;
  return(t);
}
static ATerm u_1 (ATerm t)
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
static ATerm i_13 (ATerm e_22, ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL;
  t = if_verbose2_1_0(k_1, t);
  t = get_outfile_1_0(n_1, t);
  m_2 = t;
  t = term_q_35;
  r_2 = t;
  t = term_j_36;
  s_2 = t;
  t = term_k_36;
  t = o_14(r_2, s_2, t);
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_2), term_a_36), e_22), term_l_36));
  t = conc_0_0(t);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_36, n_2);
  t = if_verbose3_1_0(u_1, t);
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
      t = n_13(p_2, q_2, t);
      t = term_g_36;
      f_3 = t;
      t = SSL_exit(f_3);
      return(t);
    }
    t = fork_and_wait_1_0(y_1, t);
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_2);
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
  t = i_13(p_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      o_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_13(o_3, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm k_3 = NULL,m_3 = NULL,n_3 = NULL;
  k_3 = t;
  t = term_v_35;
  m_3 = t;
  t = (ATerm) ATinsert(CheckATermList(k_3), term_m_36);
  n_3 = t;
  t = SSL_printnl(m_3, n_3);
  t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(CheckATermList(k_3), term_m_36));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 = NULL,i_3 = NULL,j_3 = NULL;
      g_3 = t;
      t = term_q_35;
      i_3 = t;
      t = term_l_36;
      j_3 = t;
      t = term_s_36;
      t = o_14(i_3, j_3, t);
      t = g_3;
      LocalPopChoice(p_36);
    }
  else
    {
      t = o_36;
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
static ATerm j_13 (ATerm b_45, ATerm a_45, ATerm t)
{
  ATerm t_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(b_45, a_45);
      LocalPopChoice(v_36);
    }
  else
    {
      t = t_36;
      t = get_errno_0_0(t);
      t = term_x_36;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, b_45, a_45);
      t = x_13(b_45, a_45, t);
      t = SSL_remove(b_45);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm x_0 (ATerm), ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL;
  f_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL;
        t = f_4;
        t = x_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_a_37;
        t_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_4, term_a_37);
        t = x_13(g_4, t_1, t);
        t = SSL_remove(g_4);
        t = term_a_37;
        LocalPopChoice(z_36);
      }
    else
      {
        t = y_36;
        {
          ATerm b_37 = t;
          int c_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_2 = NULL;
              t = f_4;
              t = x_0(t);
              i_2 = t;
              {
                ATerm e_37 = t;
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
                        if((g_4 != t))
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
                    t = e_37;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, g_4, i_2);
              t = j_13(g_4, i_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_2);
              LocalPopChoice(c_37);
            }
          else
            {
              t = b_37;
              t = f_4;
              t = x_0(t);
              if((g_4 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_4);
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
  t = term_i_37;
  o_4 = t;
  t = term_k_37;
  t = xtc_find_0_0(t);
  q_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_4), term_n_37);
  p_4 = t;
  t = r_4;
  t = comp_0_2(o_4, p_4, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm c_5 = NULL;
  c_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_5), term_o_37);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm s_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  t = term_p_37;
  s_4 = t;
  t = x_4;
  {
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 = NULL,b_5 = NULL;
        t = term_q_35;
        a_5 = t;
        t = term_t_37;
        b_5 = t;
        t = term_b_38;
        t = o_14(a_5, b_5, t);
        t = x_4;
        LocalPopChoice(s_37);
        t = (ATerm) ATinsert(ATempty, term_t_37);
      }
    else
      {
        t = r_37;
        t = (ATerm) ATempty;
      }
  }
  v_4 = t;
  t = term_q_35;
  y_4 = t;
  t = term_o_37;
  z_4 = t;
  t = term_d_38;
  t = o_14(y_4, z_4, t);
  t = foldr_3_0(l_2, conc_0_0, t_2, t);
  w_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_4), w_4);
  t = concat_0_0(t);
  u_4 = t;
  t = x_4;
  t = comp_0_2(s_4, u_4, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  t = term_v_35;
  w_5 = t;
  t = (ATerm) ATinsert(ATempty, term_g_38);
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
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
  e_6 = t;
  {
    ATerm h_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_6 = ATgetArgument(t, 0);
            {
              ATerm b_3 = NULL,u_0 = NULL;
              t = SSLgetAnnotations(e_6);
              b_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_6);
              u_0 = t;
              t = SSLsetAnnotations(u_0, b_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_6;
          }
        LocalPopChoice(j_38);
        t = xtc_transform_file_2_0(h_3, q_3, t);
      }
    else
      {
        t = h_38;
        t = xtc_transform_term_2_0(r_3, s_3, t);
      }
  }
  t = if_keep1_1_0(u_3, t);
  t = olevel_2_0(w_3, x_3, t);
  t = olevel_2_0(j_5, k_5, t);
  d_6 = t;
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_7 = ATgetArgument(t, 0);
            {
              ATerm i_4 = NULL,a_1 = NULL;
              t = SSLgetAnnotations(d_6);
              i_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_7);
              a_1 = t;
              t = SSLsetAnnotations(a_1, i_4);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_6;
          }
        LocalPopChoice(m_38);
        t = xtc_transform_file_2_0(o_5, p_5, t);
      }
    else
      {
        t = l_38;
        t = xtc_transform_term_2_0(k_6, r_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  c_6 = t;
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_8 = ATgetArgument(t, 0);
            {
              ATerm d_5 = NULL,b_1 = NULL;
              t = SSLgetAnnotations(c_6);
              d_5 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_8);
              b_1 = t;
              t = SSLsetAnnotations(b_1, d_5);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_6;
          }
        LocalPopChoice(o_38);
        t = xtc_transform_file_2_0(t_6, pass_verbose_0_0, t);
      }
    else
      {
        t = n_38;
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
  t = (ATerm) ATinsert(CheckATermList(y_5), term_p_38);
  a_6 = t;
  t = SSL_printnl(z_5, a_6);
  t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(CheckATermList(y_5), term_p_38));
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_q_38;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm l_6 = NULL;
  t = pass_verbose_0_0(t);
  l_6 = t;
  t = (ATerm) ATinsert(CheckATermList(l_6), term_r_38);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_q_38;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm m_6 = NULL;
  t = pass_verbose_0_0(t);
  m_6 = t;
  t = (ATerm) ATinsert(CheckATermList(m_6), term_r_38);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = save_as_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_s_38;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_t_38;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL;
  o_6 = t;
  {
    ATerm u_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_6 = ATgetArgument(t, 0);
            {
              ATerm l_3 = NULL,w_0 = NULL;
              t = SSLgetAnnotations(o_6);
              l_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_6);
              w_0 = t;
              t = SSLsetAnnotations(w_0, l_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_6;
          }
        LocalPopChoice(y_38);
        t = xtc_transform_file_2_0(z_3, a_4, t);
      }
    else
      {
        t = u_38;
        t = xtc_transform_term_2_0(d_4, e_4, t);
      }
  }
  t = if_keep1_1_0(h_4, t);
  n_6 = t;
  {
    ATerm z_38 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_7 = ATgetArgument(t, 0);
            {
              ATerm t_3 = NULL,z_0 = NULL;
              t = SSLgetAnnotations(n_6);
              t_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_7);
              z_0 = t;
              t = SSLsetAnnotations(z_0, t_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_6;
          }
        LocalPopChoice(b_39);
        t = xtc_transform_file_2_0(k_4, l_4, t);
      }
    else
      {
        t = z_38;
        t = xtc_transform_term_2_0(m_4, t_4, t);
      }
  }
  t = if_keep1_1_0(e_5, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_c_39;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm b_7 = NULL;
  t = pass_verbose_0_0(t);
  b_7 = t;
  t = (ATerm) ATinsert(CheckATermList(b_7), term_r_38);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_c_39;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm d_7 = NULL;
  t = pass_verbose_0_0(t);
  d_7 = t;
  t = (ATerm) ATinsert(CheckATermList(d_7), term_r_38);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = save_as_1_0(j_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_d_39;
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
  t = (ATerm) ATinsert(CheckATermList(m_7), term_r_38);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_g_39;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm o_7 = NULL;
  t = pass_verbose_0_0(t);
  o_7 = t;
  t = (ATerm) ATinsert(CheckATermList(o_7), term_r_38);
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
  t = (ATerm) ATinsert(CheckATermList(v_7), term_r_38);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_k_39;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm w_7 = NULL;
  t = pass_verbose_0_0(t);
  w_7 = t;
  t = (ATerm) ATinsert(CheckATermList(w_7), term_r_38);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_l_39;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_l_39;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = get_outfile_1_0(c_7, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_m_39;
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
  t = (ATerm) ATinsert(ATempty, term_o_39);
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
  t = (ATerm) ATinsert(CheckATermList(n_9), term_q_39);
  p_9 = t;
  t = SSL_printnl(o_9, p_9);
  t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(CheckATermList(n_9), term_q_39));
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
  t = (ATerm) ATinsert(CheckATermList(u_10), term_x_39);
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
  t = (ATerm) ATinsert(CheckATermList(v_10), term_x_39);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_y_39;
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
      t = term_t_37;
      h_9 = t;
      t = term_b_38;
      t = o_14(g_9, h_9, t);
      t = f_9;
      LocalPopChoice(a_40);
      {
        ATerm j_9 = NULL;
        j_9 = t;
        t = if_verbose2_1_0(e_7, t);
        {
          static ATerm h_7 (ATerm t)
          {
            ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,u_9 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL;
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
                  ATerm v_9 = NULL,x_9 = NULL,y_9 = NULL,a_10 = NULL,c_10 = NULL,d_10 = NULL;
                  t = term_q_35;
                  c_10 = t;
                  t = term_f_40;
                  d_10 = t;
                  t = term_g_40;
                  t = o_14(c_10, d_10, t);
                  v_9 = t;
                  t = term_q_35;
                  y_9 = t;
                  t = term_h_40;
                  a_10 = t;
                  t = term_i_40;
                  t = o_14(y_9, a_10, t);
                  x_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_9, x_9);
                  {
                    ATerm j_40 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm f_10 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            f_10 = ATgetArgument(t, 0);
                            if((f_10 != ATgetArgument(t, 1)))
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
                    ATerm h_10 = NULL,j_10 = NULL;
                    t = term_q_35;
                    h_10 = t;
                    t = term_f_40;
                    j_10 = t;
                    t = term_g_40;
                    t = o_14(h_10, j_10, t);
                    t = debug_1_0(l_7, t);
                    _fail(t);
                  }
                }
            }
            t = q_9;
            {
              static ATerm n_7 (ATerm t)
              {
                t = get_outfile_1_0(p_7, t);
                if(((d_9 != NULL) && (d_9 != t)))
                  _fail(t);
                else
                  d_9 = t;
                return(t);
              }
              t = copy_to_1_0(n_7, t);
            }
            {
              ATerm k_40 = t;
              int l_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_10 = NULL,t_10 = NULL;
                  t_10 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      r_10 = ATgetArgument(t, 0);
                      {
                        ATerm l_5 = NULL,y_3 = NULL;
                        t = SSLgetAnnotations(t_10);
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
                      t = t_10;
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
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_9)), term_o_40), not_null(d_9)), term_n_40));
            u_9 = t;
            t = SSL_printnl(s_9, u_9);
            t = r_9;
            return(t);
          }
          t = profile_p__2_0(f_7, h_7, t);
        }
        t = j_9;
      }
    }
  else
    {
      t = z_39;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm e_110 (ATerm), ATerm t)
{
  ATerm c_11 = NULL;
  c_11 = t;
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
        t = term_q_35;
        i_11 = t;
        t = term_r_40;
        j_11 = t;
        t = term_s_40;
        t = o_14(i_11, j_11, t);
        h_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_11, term_t_38);
        t = geq_0_0(t);
        t = c_11;
        t = e_110(t);
        LocalPopChoice(q_40);
      }
    else
      {
        t = p_40;
        t = c_11;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm j_119 (ATerm), ATerm k_119 (ATerm), ATerm t)
{
  ATerm m_11 = NULL;
  m_11 = t;
  {
    ATerm t_40 = t;
    int w_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_11 = NULL,q_11 = NULL,s_11 = NULL,t_11 = NULL;
        t = m_11;
        t = j_119(t);
        p_11 = t;
        t = term_q_35;
        s_11 = t;
        t = term_x_40;
        t_11 = t;
        t = term_y_40;
        t = o_14(s_11, t_11, t);
        q_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_11, p_11);
        t = geq_0_0(t);
        t = m_11;
        t = k_119(t);
        LocalPopChoice(w_40);
      }
    else
      {
        t = t_40;
        t = m_11;
      }
  }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm g_7 = NULL;
  t = pass_verbose_0_0(t);
  g_7 = t;
  t = (ATerm) ATinsert(CheckATermList(g_7), term_r_38);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm i_7 = NULL;
  t = pass_verbose_0_0(t);
  i_7 = t;
  t = (ATerm) ATinsert(CheckATermList(i_7), term_r_38);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm u_8 = NULL;
  t = pass_verbose_0_0(t);
  u_8 = t;
  t = (ATerm) ATinsert(CheckATermList(u_8), term_r_38);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm v_8 = NULL;
  t = pass_verbose_0_0(t);
  v_8 = t;
  t = (ATerm) ATinsert(CheckATermList(v_8), term_r_38);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm a_14 = NULL;
  a_14 = t;
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_14;
        {
          ATerm e_41 = t;
          int f_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_7 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  a_7 = ATgetArgument(t, 0);
                  {
                    ATerm a_8 = NULL,b_4 = NULL;
                    t = SSLgetAnnotations(a_14);
                    a_8 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, a_7);
                    b_4 = t;
                    t = SSLsetAnnotations(b_4, a_8);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = a_14;
                }
              LocalPopChoice(f_41);
              t = xtc_transform_file_2_0(z_7, b_8, t);
            }
          else
            {
              t = e_41;
              t = xtc_transform_term_2_0(d_8, e_8, t);
            }
        }
        LocalPopChoice(d_41);
      }
    else
      {
        t = c_41;
        t = a_14;
        {
          ATerm g_41 = t;
          int n_41 = stack_ptr;
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
              LocalPopChoice(n_41);
              t = xtc_transform_file_2_0(f_8, g_8, t);
            }
          else
            {
              t = g_41;
              t = xtc_transform_term_2_0(h_8, i_8, t);
            }
        }
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm d_15 = NULL,g_15 = NULL,h_15 = NULL;
  h_15 = t;
  t = term_p_41;
  d_15 = t;
  t = h_15;
  {
    ATerm u_41 = t;
    int w_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_15 = NULL,m_15 = NULL;
        t = term_q_35;
        i_15 = t;
        t = term_t_37;
        m_15 = t;
        t = term_b_38;
        t = o_14(i_15, m_15, t);
        t = h_15;
        LocalPopChoice(w_41);
        t = (ATerm) ATinsert(ATempty, term_x_41);
      }
    else
      {
        t = u_41;
        t = (ATerm) ATempty;
      }
  }
  g_15 = t;
  t = h_15;
  t = comp_0_2(d_15, g_15, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm h_110 (ATerm), ATerm t)
{
  ATerm o_15 = NULL;
  o_15 = t;
  {
    ATerm a_42 = t;
    int b_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_15 = NULL,r_15 = NULL,u_15 = NULL;
        t = term_q_35;
        r_15 = t;
        t = term_r_40;
        u_15 = t;
        t = term_s_40;
        t = o_14(r_15, u_15, t);
        q_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_15, term_h_42);
        t = geq_0_0(t);
        t = o_15;
        t = h_110(t);
        LocalPopChoice(b_42);
      }
    else
      {
        t = a_42;
        t = o_15;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm j_110 (ATerm), ATerm t)
{
  ATerm x_15 = NULL;
  x_15 = t;
  {
    ATerm j_42 = t;
    int k_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_16 = NULL,c_16 = NULL,g_16 = NULL;
        t = term_q_35;
        c_16 = t;
        t = term_r_40;
        g_16 = t;
        t = term_s_40;
        t = o_14(c_16, g_16, t);
        b_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_16, term_l_42);
        t = geq_0_0(t);
        t = x_15;
        t = j_110(t);
        LocalPopChoice(k_42);
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
  t = (ATerm) ATinsert(ATempty, term_n_42);
  m_18 = t;
  t = SSL_printnl(k_18, m_18);
  t = j_18;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = if_verbose1_1_0(n_8, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm u_18 = NULL;
  t = if_verbose3_1_0(o_8, t);
  t = olevel_2_0(t_8, w_8, t);
  t = olevel_2_0(w_9, e_10, t);
  t = olevel_2_0(x_10, d_11, t);
  u_18 = t;
  {
    ATerm s_42 = t;
    int u_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_21 = ATgetArgument(t, 0);
            {
              ATerm q_12 = NULL,u_5 = NULL;
              t = SSLgetAnnotations(u_18);
              q_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_21);
              u_5 = t;
              t = SSLsetAnnotations(u_5, q_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_18;
          }
        LocalPopChoice(u_42);
        t = xtc_transform_file_2_0(m_12, n_12, t);
      }
    else
      {
        t = s_42;
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
  ATerm n_18 = NULL,q_18 = NULL,r_18 = NULL;
  n_18 = t;
  t = term_v_35;
  q_18 = t;
  t = (ATerm) ATinsert(CheckATermList(n_18), term_w_42);
  r_18 = t;
  t = SSL_printnl(q_18, r_18);
  t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(CheckATermList(n_18), term_w_42));
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,z_18 = NULL;
  v_18 = t;
  t = term_q_35;
  w_18 = t;
  t = term_x_40;
  z_18 = t;
  t = term_y_40;
  t = o_14(w_18, z_18, t);
  t = debug_1_0(q_8, t);
  t = v_18;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_x_42;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_t_38;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm a_19 = NULL;
  a_19 = t;
  {
    ATerm z_42 = t;
    int a_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_19 = ATgetArgument(t, 0);
            {
              ATerm i_9 = NULL,n_4 = NULL;
              t = SSLgetAnnotations(a_19);
              i_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_19);
              n_4 = t;
              t = SSLsetAnnotations(n_4, i_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_19;
          }
        LocalPopChoice(a_43);
        t = xtc_transform_file_2_0(x_8, y_8, t);
      }
    else
      {
        t = z_42;
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
  ATerm h_19 = NULL;
  t = pass_verbose_0_0(t);
  h_19 = t;
  t = (ATerm) ATinsert(CheckATermList(h_19), term_r_38);
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
  t = (ATerm) ATinsert(CheckATermList(i_19), term_r_38);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = save_as_1_0(t_9, t);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = term_b_43;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_u_35;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  {
    ATerm d_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_19;
        {
          ATerm f_43 = t;
          if((PushChoice() == 0))
            {
              ATerm p_10 = NULL,s_10 = NULL;
              t = term_q_35;
              p_10 = t;
              t = term_g_43;
              s_10 = t;
              t = term_i_43;
              t = o_14(p_10, s_10, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_43;
            }
        }
        t = x_19;
        {
          ATerm j_43 = t;
          int o_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_11 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  b_11 = ATgetArgument(t, 0);
                  {
                    ATerm u_11 = NULL,q_5 = NULL;
                    t = SSLgetAnnotations(x_19);
                    u_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, b_11);
                    q_5 = t;
                    t = SSLsetAnnotations(q_5, u_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = x_19;
                }
              LocalPopChoice(o_43);
              t = xtc_transform_file_2_0(g_10, i_10, t);
            }
          else
            {
              t = j_43;
              t = xtc_transform_term_2_0(n_10, o_10, t);
            }
        }
        t = if_keep2_1_0(q_10, t);
        LocalPopChoice(e_43);
      }
    else
      {
        t = d_43;
        t = x_19;
      }
  }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = term_q_43;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm e_11 = NULL;
  t = pass_verbose_0_0(t);
  e_11 = t;
  t = (ATerm) ATinsert(CheckATermList(e_11), term_r_38);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_q_43;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm f_11 = NULL;
  t = pass_verbose_0_0(t);
  f_11 = t;
  t = (ATerm) ATinsert(CheckATermList(f_11), term_r_38);
  return(t);
}
static ATerm q_10 (ATerm t)
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
  t = term_h_42;
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
        ATerm m_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_20 = ATgetArgument(t, 0);
            {
              ATerm z_11 = NULL,r_5 = NULL;
              t = SSLgetAnnotations(d_20);
              z_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_20);
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
        t = xtc_transform_file_2_0(g_11, k_11, t);
      }
    else
      {
        t = v_43;
        t = xtc_transform_term_2_0(n_11, o_11, t);
      }
  }
  t = if_keep6_1_0(r_11, t);
  c_20 = t;
  {
    ATerm x_43 = t;
    int y_43 = stack_ptr;
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
        LocalPopChoice(y_43);
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
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_21 = ATgetArgument(t, 0);
            {
              ATerm h_12 = NULL,t_5 = NULL;
              t = SSLgetAnnotations(b_20);
              h_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_21);
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
        t = b_44;
        t = xtc_transform_term_2_0(g_12, i_12, t);
      }
  }
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm p_20 = NULL;
  t = pass_verbose_0_0(t);
  p_20 = t;
  t = (ATerm) ATinsert(CheckATermList(p_20), term_r_38);
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
  t = (ATerm) ATinsert(CheckATermList(q_20), term_r_38);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = save_as_1_0(v_11, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_f_44;
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
  t = (ATerm) ATinsert(CheckATermList(z_20), term_r_38);
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
  t = (ATerm) ATinsert(CheckATermList(a_21), term_r_38);
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
  ATerm k_21 = NULL;
  t = pass_verbose_0_0(t);
  k_21 = t;
  t = (ATerm) ATinsert(CheckATermList(k_21), term_r_38);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_g_39;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm l_21 = NULL;
  t = pass_verbose_0_0(t);
  l_21 = t;
  t = (ATerm) ATinsert(CheckATermList(l_21), term_r_38);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_i_44;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm d_22 = NULL;
  t = pass_verbose_0_0(t);
  d_22 = t;
  t = (ATerm) ATinsert(CheckATermList(d_22), term_r_38);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_i_44;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm k_22 = NULL;
  t = pass_verbose_0_0(t);
  k_22 = t;
  t = (ATerm) ATinsert(CheckATermList(k_22), term_r_38);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_h_42;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm l_22 = NULL,o_22 = NULL,p_22 = NULL;
  p_22 = t;
  {
    ATerm j_44 = t;
    int k_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_22 = ATgetArgument(t, 0);
            {
              ATerm c_13 = NULL,b_6 = NULL;
              t = SSLgetAnnotations(p_22);
              c_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_22);
              b_6 = t;
              t = SSLsetAnnotations(b_6, c_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_22;
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
  o_22 = t;
  {
    ATerm l_44 = t;
    int m_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_23 = ATgetArgument(t, 0);
            {
              ATerm x_14 = NULL,f_6 = NULL;
              t = SSLgetAnnotations(o_22);
              x_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_23);
              f_6 = t;
              t = SSLsetAnnotations(f_6, x_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_22;
          }
        LocalPopChoice(m_44);
        t = xtc_transform_file_2_0(a_13, b_13, t);
      }
    else
      {
        t = l_44;
        t = xtc_transform_term_2_0(d_13, e_13, t);
      }
  }
  l_22 = t;
  {
    ATerm n_44 = t;
    int o_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            n_23 = ATgetArgument(t, 0);
            {
              ATerm c_15 = NULL,g_6 = NULL;
              t = SSLgetAnnotations(l_22);
              c_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_23);
              g_6 = t;
              t = SSLsetAnnotations(g_6, c_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_22;
          }
        LocalPopChoice(o_44);
        t = xtc_transform_file_2_0(f_13, g_13, t);
      }
    else
      {
        t = n_44;
        t = xtc_transform_term_2_0(o_13, s_13, t);
      }
  }
  t = if_keep4_1_0(z_13, t);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_p_44;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm x_22 = NULL;
  t = pass_verbose_0_0(t);
  x_22 = t;
  t = (ATerm) ATinsert(CheckATermList(x_22), term_r_38);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_p_44;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm y_22 = NULL;
  t = pass_verbose_0_0(t);
  y_22 = t;
  t = (ATerm) ATinsert(CheckATermList(y_22), term_r_38);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_q_44;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm g_23 = NULL;
  t = pass_verbose_0_0(t);
  g_23 = t;
  t = (ATerm) ATinsert(CheckATermList(g_23), term_r_38);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_q_44;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm h_23 = NULL;
  t = pass_verbose_0_0(t);
  h_23 = t;
  t = (ATerm) ATinsert(CheckATermList(h_23), term_r_38);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_r_44;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm r_23 = NULL;
  t = pass_verbose_0_0(t);
  r_23 = t;
  t = (ATerm) ATinsert(CheckATermList(r_23), term_r_38);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = term_r_44;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm s_23 = NULL;
  t = pass_verbose_0_0(t);
  s_23 = t;
  t = (ATerm) ATinsert(CheckATermList(s_23), term_r_38);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  t = save_as_1_0(w_14, t);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  t = term_s_44;
  return(t);
}
static ATerm y_14 (ATerm t)
{
  t = term_u_35;
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL;
  w_23 = t;
  {
    ATerm u_44 = t;
    int v_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_24 = ATgetArgument(t, 0);
            {
              ATerm k_15 = NULL,h_6 = NULL;
              t = SSLgetAnnotations(w_23);
              k_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_24);
              h_6 = t;
              t = SSLsetAnnotations(h_6, k_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_23;
          }
        LocalPopChoice(v_44);
        t = xtc_transform_file_2_0(a_15, b_15, t);
      }
    else
      {
        t = u_44;
        t = xtc_transform_term_2_0(e_15, f_15, t);
      }
  }
  v_23 = t;
  {
    ATerm w_44 = t;
    int y_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            u_24 = ATgetArgument(t, 0);
            {
              ATerm t_15 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(v_23);
              t_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_24);
              i_6 = t;
              t = SSLsetAnnotations(i_6, t_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_23;
          }
        LocalPopChoice(y_44);
        t = xtc_transform_file_2_0(j_15, l_15, t);
      }
    else
      {
        t = w_44;
        t = xtc_transform_term_2_0(n_15, p_15, t);
      }
  }
  t = if_keep2_1_0(s_15, t);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = term_z_44;
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm j_24 = NULL;
  t = pass_verbose_0_0(t);
  j_24 = t;
  t = (ATerm) ATinsert(CheckATermList(j_24), term_r_38);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  t = term_z_44;
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm q_24 = NULL;
  t = pass_verbose_0_0(t);
  q_24 = t;
  t = (ATerm) ATinsert(CheckATermList(q_24), term_r_38);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  t = term_f_45;
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm y_24 = NULL;
  t = pass_verbose_0_0(t);
  y_24 = t;
  t = (ATerm) ATinsert(CheckATermList(y_24), term_r_38);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  t = term_f_45;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm a_25 = NULL;
  t = pass_verbose_0_0(t);
  a_25 = t;
  t = (ATerm) ATinsert(CheckATermList(a_25), term_r_38);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = save_as_1_0(v_15, t);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  t = term_h_45;
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
    ATerm j_45 = t;
    int l_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_25 = ATgetArgument(t, 0);
            {
              ATerm d_16 = NULL,p_6 = NULL;
              t = SSLgetAnnotations(b_25);
              d_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_25);
              p_6 = t;
              t = SSLsetAnnotations(p_6, d_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_25;
          }
        LocalPopChoice(l_45);
        t = xtc_transform_file_2_0(z_15, a_16, t);
      }
    else
      {
        t = j_45;
        t = xtc_transform_term_2_0(e_16, f_16, t);
      }
  }
  t = if_keep5_1_0(h_16, t);
  t = dead_def_elim_0_0(t);
  t = if_keep5_1_0(k_16, t);
  return(t);
}
static ATerm z_15 (ATerm t)
{
  t = term_g_44;
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm m_25 = NULL;
  t = pass_verbose_0_0(t);
  m_25 = t;
  t = (ATerm) ATinsert(CheckATermList(m_25), term_r_38);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = term_g_44;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm n_25 = NULL;
  t = pass_verbose_0_0(t);
  n_25 = t;
  t = (ATerm) ATinsert(CheckATermList(n_25), term_r_38);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  t = save_as_1_0(i_16, t);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = term_m_45;
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = save_as_1_0(l_16, t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_s_45;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = term_i_39;
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm p_25 = NULL,r_25 = NULL,s_25 = NULL;
  s_25 = t;
  {
    ATerm u_45 = t;
    int w_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_25 = ATgetArgument(t, 0);
            {
              ATerm j_16 = NULL,q_6 = NULL;
              t = SSLgetAnnotations(s_25);
              j_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_25);
              q_6 = t;
              t = SSLsetAnnotations(q_6, j_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_25;
          }
        LocalPopChoice(w_45);
        t = xtc_transform_file_2_0(p_16, q_16, t);
      }
    else
      {
        t = u_45;
        t = xtc_transform_term_2_0(s_16, t_16, t);
      }
  }
  t = if_keep3_1_0(u_16, t);
  r_25 = t;
  {
    ATerm x_45 = t;
    int y_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_26 = ATgetArgument(t, 0);
            {
              ATerm n_16 = NULL,s_6 = NULL;
              t = SSLgetAnnotations(r_25);
              n_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_26);
              s_6 = t;
              t = SSLsetAnnotations(s_6, n_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_25;
          }
        LocalPopChoice(y_45);
        t = xtc_transform_file_2_0(x_16, y_16, t);
      }
    else
      {
        t = x_45;
        t = xtc_transform_term_2_0(a_17, b_17, t);
      }
  }
  t = if_keep3_1_0(c_17, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(f_17, t);
  p_25 = t;
  {
    ATerm z_45 = t;
    int a_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_26 = ATgetArgument(t, 0);
            {
              ATerm r_16 = NULL,u_6 = NULL;
              t = SSLgetAnnotations(p_25);
              r_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_26);
              u_6 = t;
              t = SSLsetAnnotations(u_6, r_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_25;
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
  ATerm b_26 = NULL;
  t = pass_verbose_0_0(t);
  b_26 = t;
  t = (ATerm) ATinsert(CheckATermList(b_26), term_r_38);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm c_26 = NULL;
  t = pass_verbose_0_0(t);
  c_26 = t;
  t = (ATerm) ATinsert(CheckATermList(c_26), term_r_38);
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
  t = term_p_44;
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm l_26 = NULL;
  t = pass_verbose_0_0(t);
  l_26 = t;
  t = (ATerm) ATinsert(CheckATermList(l_26), term_r_38);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = term_p_44;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm m_26 = NULL;
  t = pass_verbose_0_0(t);
  m_26 = t;
  t = (ATerm) ATinsert(CheckATermList(m_26), term_r_38);
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
  t = term_q_44;
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm u_26 = NULL;
  t = pass_verbose_0_0(t);
  u_26 = t;
  t = (ATerm) ATinsert(CheckATermList(u_26), term_r_38);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  t = term_q_44;
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm v_26 = NULL;
  t = pass_verbose_0_0(t);
  v_26 = t;
  t = (ATerm) ATinsert(CheckATermList(v_26), term_r_38);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = save_as_1_0(o_17, t);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  t = term_j_46;
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_t_38;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL;
  x_26 = t;
  {
    ATerm k_46 = t;
    int l_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_27 = ATgetArgument(t, 0);
            {
              ATerm v_16 = NULL,v_6 = NULL;
              t = SSLgetAnnotations(x_26);
              v_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_27);
              v_6 = t;
              t = SSLsetAnnotations(v_6, v_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_26;
          }
        LocalPopChoice(l_46);
        t = xtc_transform_file_2_0(r_17, s_17, t);
      }
    else
      {
        t = k_46;
        t = xtc_transform_term_2_0(t_17, u_17, t);
      }
  }
  t = if_keep1_1_0(v_17, t);
  w_26 = t;
  {
    ATerm m_46 = t;
    int n_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_27 = ATgetArgument(t, 0);
            {
              ATerm z_16 = NULL,w_6 = NULL;
              t = SSLgetAnnotations(w_26);
              z_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_27);
              w_6 = t;
              t = SSLsetAnnotations(w_6, z_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_26;
          }
        LocalPopChoice(n_46);
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
  t = term_r_44;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm d_27 = NULL;
  t = pass_verbose_0_0(t);
  d_27 = t;
  t = (ATerm) ATinsert(CheckATermList(d_27), term_r_38);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = term_r_44;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm e_27 = NULL;
  t = pass_verbose_0_0(t);
  e_27 = t;
  t = (ATerm) ATinsert(CheckATermList(e_27), term_r_38);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = save_as_1_0(w_17, t);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm q_27 = NULL;
  t = pass_verbose_0_0(t);
  q_27 = t;
  t = (ATerm) ATinsert(CheckATermList(q_27), term_r_38);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm r_27 = NULL;
  t = pass_verbose_0_0(t);
  r_27 = t;
  t = (ATerm) ATinsert(CheckATermList(r_27), term_r_38);
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
  t = profile_p__2_0(l_8, m_8, t);
  return(t);
}
static ATerm s_18 (ATerm t)
{
  t = term_u_39;
  return(t);
}
static ATerm t_18 (ATerm t)
{
  ATerm v_29 = NULL;
  t = pass_verbose_0_0(t);
  v_29 = t;
  t = (ATerm) ATinsert(CheckATermList(v_29), term_x_39);
  return(t);
}
static ATerm x_18 (ATerm t)
{
  t = term_u_39;
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm y_29 = NULL;
  t = pass_verbose_0_0(t);
  y_29 = t;
  t = (ATerm) ATinsert(CheckATermList(y_29), term_x_39);
  return(t);
}
ATerm save_as_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,c_29 = NULL,d_29 = NULL,f_29 = NULL,h_29 = NULL,i_29 = NULL;
  c_29 = t;
  {
    static ATerm i_18 (ATerm t)
    {
      static ATerm o_18 (ATerm t)
      {
        ATerm k_29 = NULL,l_29 = NULL;
        t = u_84(t);
        k_29 = t;
        t = term_u_46;
        l_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_46, k_29);
        t = u_14(l_29, k_29, t);
        return(t);
      }
      t = get_outfile_1_0(o_18, t);
      if(((y_28 != NULL) && (y_28 != t)))
        _fail(t);
      else
        y_28 = t;
      return(t);
    }
    t = copy_to_1_0(i_18, t);
  }
  {
    ATerm v_46 = t;
    int z_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_29 = NULL,u_29 = NULL;
        u_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            t_29 = ATgetArgument(t, 0);
            {
              ATerm e_17 = NULL,k_8 = NULL;
              t = SSLgetAnnotations(u_29);
              e_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_29);
              k_8 = t;
              t = SSLsetAnnotations(k_8, e_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_29;
          }
        LocalPopChoice(z_46);
        t = xtc_transform_file_2_0(s_18, t_18, t);
      }
    else
      {
        t = v_46;
        t = xtc_transform_term_2_0(x_18, c_19, t);
      }
  }
  {
    static ATerm f_19 (ATerm t)
    {
      ATerm z_29 = NULL;
      t = term_a_47;
      z_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_28), term_a_47);
      t = u_14(not_null(y_28), z_29, t);
      if(((z_28 != NULL) && (z_28 != t)))
        _fail(t);
      else
        z_28 = t;
      return(t);
    }
    t = copy_to_1_0(f_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_47), not_null(z_28)), term_c_47), not_null(y_28)), term_b_47);
  i_29 = t;
  t = SSL_concat_strings(i_29);
  d_29 = t;
  t = term_v_35;
  f_29 = t;
  t = (ATerm) ATinsert(ATempty, d_29);
  h_29 = t;
  t = SSL_printnl(f_29, h_29);
  t = c_29;
  return(t);
}
ATerm if_keep2_1_0 (ATerm f_110 (ATerm), ATerm t)
{
  ATerm j_30 = NULL;
  j_30 = t;
  {
    ATerm h_47 = t;
    int i_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL;
        t = term_q_35;
        m_30 = t;
        t = term_r_40;
        n_30 = t;
        t = term_s_40;
        t = o_14(m_30, n_30, t);
        l_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_30, term_u_35);
        t = geq_0_0(t);
        t = j_30;
        t = f_110(t);
        LocalPopChoice(i_47);
      }
    else
      {
        t = h_47;
        t = j_30;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
  t = term_r_35;
  {
    ATerm k_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_30 = NULL,u_30 = NULL;
        t = term_q_35;
        t_30 = t;
        t = term_r_35;
        u_30 = t;
        t = term_s_35;
        t = o_14(t_30, u_30, t);
        LocalPopChoice(l_47);
      }
    else
      {
        t = k_47;
        t = term_t_38;
      }
  }
  q_30 = t;
  t = term_t_38;
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_30, term_t_38);
  t = v_13(q_30, s_30, t);
  r_30 = t;
  t = SSL_int_to_string(r_30);
  p_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_30), term_r_35);
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_47 = ATgetArgument(t, 0);
      if(match_cons(m_47, sym_Stream_1))
        {
          x_30 = ATgetArgument(m_47, 0);
        }
      else
        _fail(t);
      y_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_13(x_30, y_30, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  w_30 = t;
  t = xtc_new_file_0_0(t);
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_30, w_30);
  t = m_13(j_19, v_30, w_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_30);
  t = xtc_transform_file_2_0(e_118, f_118, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm n_13 (ATerm s_49, ATerm t_49, ATerm t)
{
  t = SSL_execvp(s_49, t_49);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm f_32 = NULL,h_32 = NULL,l_32 = NULL,n_32 = NULL;
  f_32 = t;
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
          l_32 = ATgetArgument(t, 1);
          n_32 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(l_32);
      x_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_32), term_q_47), x_17), term_p_47), h_32);
      y_17 = t;
      t = SSL_concat_strings(y_17);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm r_32 = NULL;
  r_32 = t;
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
              if((r_32 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_54), term_a_54), term_n_53), term_i_53), term_d_53), term_z_52), term_u_52), term_n_52), term_e_52), term_x_51), term_o_51), term_h_51), term_b_51), term_l_50), term_h_50), term_d_50), term_z_49), term_w_49), term_q_49), term_m_49), term_h_49), term_x_48), term_r_48), term_n_48), term_j_48), term_e_48), term_b_48), term_y_47);
        t = fetch_elem_1_0(l_19, t);
        LocalPopChoice(s_47);
      }
    else
      {
        t = r_47;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, r_32);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm v_32 = NULL,k_33 = NULL;
  v_32 = t;
  {
    ATerm f_54 = t;
    int i_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_54 = ATgetArgument(t, 0);
            k_33 = ATgetArgument(t, 1);
            {
              ATerm k_54 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(i_54);
        {
          ATerm l_54 = t;
          int m_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_18 = NULL,g_18 = NULL,h_18 = NULL;
              t = k_33;
              {
                ATerm q_54 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_54;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              e_18 = t;
              t = term_v_35;
              g_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_18), term_r_54);
              h_18 = t;
              t = SSL_printnl(g_18, h_18);
              t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(ATinsert(ATempty, e_18), term_r_54));
              LocalPopChoice(m_54);
            }
          else
            {
              t = l_54;
              t = v_32;
            }
        }
      }
    else
      {
        t = f_54;
        t = v_32;
      }
  }
  t = v_32;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm p_110 (ATerm), ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL;
  x_33 = t;
  t = fork_0_0(t);
  w_33 = t;
  {
    ATerm s_54 = t;
    int t_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = x_33;
        t = p_110(t);
        LocalPopChoice(t_54);
      }
    else
      {
        t = s_54;
        t = SSL_waitpid(w_33);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_54 = ATgetArgument(t, 0);
            if(((ATgetType(u_54) != AT_INT) || (ATgetInt((ATermInt) u_54) != 0)))
              _fail(t);
            {
              ATerm v_54 = ATgetArgument(t, 1);
            }
            {
              ATerm y_54 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_33;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm f_119 (ATerm), ATerm t)
{
  ATerm d_34 = NULL,g_34 = NULL;
  g_34 = t;
  t = f_119(t);
  t = xtc_find_0_0(t);
  d_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_34, g_34);
  {
    static ATerm q_19 (ATerm t)
    {
      ATerm h_34 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, d_34, g_34);
      t = n_13(d_34, g_34, t);
      t = term_g_36;
      h_34 = t;
      t = SSL_exit(h_34);
      return(t);
    }
    t = fork_and_wait_1_0(q_19, t);
  }
  t = g_34;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL;
  j_34 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_34 = NULL,m_34 = NULL;
      t = j_34;
      t = xtc_new_file_0_0(t);
      l_34 = t;
      t = t_0(t);
      m_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_34, (ATerm) ATinsert(ATinsert(ATempty, l_34), term_a_36));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_34);
    }
  else
    {
      ATerm o_34 = NULL,p_34 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_34;
      t = xtc_new_file_0_0(t);
      o_34 = t;
      t = t_0(t);
      p_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_34), term_a_36), k_34), term_z_54));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_34);
    }
  return(t);
}
ATerm comp_0_2 (ATerm s_21, ATerm t_21, ATerm t)
{
  ATerm a_55 = t;
  int b_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_50 = NULL,o_50 = NULL;
      o_50 = t;
      if(match_cons(t, sym_FILE_1))
        {
          m_50 = ATgetArgument(t, 0);
          {
            ATerm i_30 = NULL,p_8 = NULL;
            t = SSLgetAnnotations(o_50);
            i_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, m_50);
            p_8 = t;
            t = SSLsetAnnotations(p_8, i_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_50;
        }
      LocalPopChoice(b_55);
      {
        static ATerm r_19 (ATerm t)
        {
          t = s_21;
          return(t);
        }
        static ATerm t_19 (ATerm t)
        {
          ATerm r_50 = NULL;
          t = pass_verbose_0_0(t);
          r_50 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_21), r_50), (ATerm) ATinsert(ATempty, term_r_38));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(r_19, t_19, t);
      }
    }
  else
    {
      t = a_55;
      {
        static ATerm v_19 (ATerm t)
        {
          t = s_21;
          return(t);
        }
        static ATerm z_19 (ATerm t)
        {
          ATerm a_51 = NULL;
          t = pass_verbose_0_0(t);
          a_51 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_21), a_51), (ATerm) ATinsert(ATempty, term_r_38));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(v_19, z_19, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_34;
      t = n_100(t);
    }
  else
    {
      ATerm a_35 = NULL,b_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_34 = ATgetFirst((ATermList) t);
          v_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_34;
      t = p_100(t);
      a_35 = t;
      t = v_34;
      t = foldr_3_0(n_100, o_100, p_100, t);
      b_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_35, b_35);
      t = o_100(t);
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
  ATerm g_35 = NULL;
  g_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_35), term_d_55);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL;
  t = term_q_35;
  e_35 = t;
  t = term_d_55;
  f_35 = t;
  t = term_e_55;
  t = o_14(e_35, f_35, t);
  t = foldr_3_0(a_20, conc_0_0, h_20, t);
  return(t);
}
static ATerm i_20 (ATerm t)
{
  t = term_f_55;
  return(t);
}
static ATerm k_20 (ATerm t)
{
  ATerm j_20 = NULL;
  t = pass_verbose_0_0(t);
  j_20 = t;
  t = (ATerm) ATinsert(CheckATermList(j_20), term_r_38);
  return(t);
}
static ATerm n_20 (ATerm t)
{
  t = term_f_55;
  return(t);
}
static ATerm r_20 (ATerm t)
{
  ATerm l_20 = NULL;
  t = pass_verbose_0_0(t);
  l_20 = t;
  t = (ATerm) ATinsert(CheckATermList(l_20), term_r_38);
  return(t);
}
static ATerm s_20 (ATerm t)
{
  t = get_outfile_1_0(v_20, t);
  return(t);
}
static ATerm v_20 (ATerm t)
{
  t = term_g_55;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm u_36 = NULL;
  u_36 = t;
  {
    ATerm h_55 = t;
    int i_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_18 = NULL,g_19 = NULL,o_19 = NULL,p_19 = NULL,w_19 = NULL;
        t = term_q_35;
        p_19 = t;
        t = term_l_55;
        w_19 = t;
        t = term_m_55;
        t = o_14(p_19, w_19, t);
        t = u_36;
        {
          ATerm n_55 = t;
          int o_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_36;
              {
                ATerm p_55 = t;
                int q_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        f_20 = ATgetArgument(t, 0);
                        {
                          ATerm e_21 = NULL,r_8 = NULL;
                          t = SSLgetAnnotations(u_36);
                          e_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, f_20);
                          r_8 = t;
                          t = SSLsetAnnotations(r_8, e_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = u_36;
                      }
                    LocalPopChoice(q_55);
                    t = xtc_transform_file_2_0(i_20, k_20, t);
                  }
                else
                  {
                    t = p_55;
                    t = xtc_transform_term_2_0(n_20, r_20, t);
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
                t = term_t_38;
                o_20 = t;
                t = SSL_exit(o_20);
                t = (ATerm) ATinsert(ATempty, term_r_55);
              }
            }
        }
        t = copy_to_1_0(s_20, t);
        y_18 = t;
        t = term_v_35;
        g_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_55));
        o_19 = t;
        t = SSL_printnl(g_19, o_19);
        t = y_18;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(i_55);
      }
    else
      {
        t = h_55;
        t = u_36;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm i_110 (ATerm), ATerm t)
{
  ATerm d_37 = NULL;
  d_37 = t;
  {
    ATerm t_55 = t;
    int u_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
        t = term_q_35;
        g_37 = t;
        t = term_r_40;
        h_37 = t;
        t = term_s_40;
        t = o_14(g_37, h_37, t);
        f_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_37, term_i_45);
        t = geq_0_0(t);
        t = d_37;
        t = i_110(t);
        LocalPopChoice(u_55);
      }
    else
      {
        t = t_55;
        t = d_37;
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
      t = term_x_55;
      m_37 = t;
      t = term_y_55;
      t = o_14(l_37, m_37, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_x_55);
      LocalPopChoice(w_55);
    }
  else
    {
      t = v_55;
      t = (ATerm) ATinsert(ATempty, term_c_56);
    }
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm q_37 = NULL,u_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL;
  x_37 = t;
  t = term_d_56;
  q_37 = t;
  t = term_q_35;
  z_37 = t;
  t = term_f_56;
  a_38 = t;
  t = term_g_56;
  t = o_14(z_37, a_38, t);
  y_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_37), term_f_56);
  u_37 = t;
  t = x_37;
  t = comp_0_2(q_37, u_37, t);
  return(t);
}
ATerm if_keep3_1_0 (ATerm g_110 (ATerm), ATerm t)
{
  ATerm c_38 = NULL;
  c_38 = t;
  {
    ATerm h_56 = t;
    int i_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_38 = NULL,f_38 = NULL,i_38 = NULL;
        t = term_q_35;
        f_38 = t;
        t = term_r_40;
        i_38 = t;
        t = term_s_40;
        t = o_14(f_38, i_38, t);
        e_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_38, term_i_39);
        t = geq_0_0(t);
        t = c_38;
        t = g_110(t);
        LocalPopChoice(i_56);
      }
    else
      {
        t = h_56;
        t = c_38;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm y_93 (ATerm), ATerm t)
{
  ATerm k_38 = NULL;
  static ATerm w_20 (ATerm t)
  {
    t = y_93(t);
    if(((k_38 != NULL) && (k_38 != t)))
      _fail(t);
    else
      k_38 = t;
    return(t);
  }
  t = fetch_1_0(w_20, t);
  t = not_null(k_38);
  return(t);
}
static ATerm y_20 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL;
  u_40 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_40 = ATgetArgument(t, 0);
      {
        ATerm w_21 = NULL,a_22 = NULL,z_9 = NULL;
        t = SSLgetAnnotations(u_40);
        w_21 = t;
        t = v_40;
        t = fetch_elem_1_0(b_21, t);
        a_22 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, a_22);
        z_9 = t;
        t = SSLsetAnnotations(z_9, w_21);
      }
    }
  else
    {
      ATerm b_23 = NULL,i_23 = NULL,b_10 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          v_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_40);
      b_23 = t;
      t = v_40;
      t = fetch_elem_1_0(c_21, t);
      i_23 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, i_23);
      b_10 = t;
      t = SSLsetAnnotations(b_10, b_23);
    }
  return(t);
}
static ATerm b_21 (ATerm t)
{
  ATerm f_22 = NULL,h_22 = NULL,i_22 = NULL;
  f_22 = t;
  {
    ATerm j_56 = t;
    int k_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            h_22 = ATgetArgument(t, 0);
            i_22 = ATgetArgument(t, 1);
            {
              ATerm l_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_56);
        t = h_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = i_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_22;
      }
    else
      {
        t = j_56;
        if(match_cons(t, sym_RDef_3))
          {
            h_22 = ATgetArgument(t, 0);
            i_22 = ATgetArgument(t, 1);
            {
              ATerm m_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = h_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = i_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_22;
      }
  }
  return(t);
}
static ATerm c_21 (ATerm t)
{
  ATerm o_23 = NULL,q_23 = NULL,a_24 = NULL;
  o_23 = t;
  {
    ATerm n_56 = t;
    int s_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            q_23 = ATgetArgument(t, 0);
            a_24 = ATgetArgument(t, 1);
            {
              ATerm t_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_56);
        t = q_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = a_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_23;
      }
    else
      {
        t = n_56;
        if(match_cons(t, sym_RDef_3))
          {
            q_23 = ATgetArgument(t, 0);
            a_24 = ATgetArgument(t, 1);
            {
              ATerm u_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = q_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = a_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_23;
      }
  }
  return(t);
}
ATerm check_other_main_0_0 (ATerm t)
{
  ATerm n_39 = NULL,p_39 = NULL,r_39 = NULL;
  t = fetch_elem_1_0(y_20, t);
  n_39 = t;
  t = term_v_35;
  p_39 = t;
  t = (ATerm) ATinsert(ATempty, term_x_56);
  r_39 = t;
  t = SSL_printnl(p_39, r_39);
  t = n_39;
  return(t);
}
static ATerm k_13 (ATerm y_21, ATerm z_21, ATerm t)
{
  t = y_21;
  {
    ATerm y_56 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_56;
      }
  }
  t = z_21;
  {
    ATerm z_56 = t;
    int a_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(a_57);
      }
    else
      {
        t = z_56;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(z_21), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_b_57, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, y_21), (ATerm) ATempty))))));
  return(t);
}
static ATerm l_13 (ATerm t_23, ATerm u_23, ATerm t)
{
  ATerm h_41 = NULL;
  t = SSL_write_term_to_stream_baf(t_23, u_23);
  h_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_41);
  return(t);
}
static ATerm m_13 (ATerm d_93 (ATerm), ATerm y_196, ATerm d_24, ATerm t)
{
  ATerm i_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_196, term_c_57);
  t = h_14(t);
  i_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_41, d_24);
  t = d_93(t);
  t = fclose_0_0(t);
  t = d_24;
  return(t);
}
static ATerm p_13 (ATerm v_106 (ATerm), ATerm m_43, ATerm k_43, ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,o_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  m_41 = t;
  t = v_106(t);
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_41, m_43, k_43);
  t = p_14(j_41, m_43, k_43, t);
  {
    ATerm d_57 = t;
    int e_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_41 = NULL;
        t = term_f_57;
        t_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_41, term_f_57);
        t = o_14(j_41, t_41, t);
        LocalPopChoice(e_57);
      }
    else
      {
        t = d_57;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_41 = ATgetFirst((ATermList) t);
      l_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_41, term_f_57, (ATerm) ATinsert(CheckATermList(l_41), (ATerm) ATinsert(CheckATermList(k_41), m_43)));
  t = lookup_table_0_1(j_41, t);
  s_41 = t;
  t = term_f_57;
  o_41 = t;
  t = (ATerm) ATinsert(CheckATermList(l_41), (ATerm) ATinsert(CheckATermList(k_41), m_43));
  q_41 = t;
  t = s_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(o_41, q_41, r_41, t);
  t = m_41;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm v_41 = NULL;
  ATerm g_57 = t;
  int h_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_42 = NULL,l_24 = NULL;
      c_42 = t;
      t = term_t_57;
      l_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_42, term_t_57);
      t = u_14(c_42, l_24, t);
      v_41 = t;
      t = SSL_mkstemp(v_41);
      LocalPopChoice(h_57);
    }
  else
    {
      t = g_57;
      {
        ATerm i_42 = NULL;
        t = term_u_57;
        i_42 = t;
        t = SSL_perror(i_42);
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
static ATerm d_21 (ATerm t)
{
  t = term_v_57;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm m_42 = NULL,o_42 = NULL,p_42 = NULL,r_42 = NULL,t_42 = NULL;
  t = P__tmpdir_0_0(t);
  r_42 = t;
  t = term_w_57;
  t_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_42, term_w_57);
  t = u_14(r_42, t_42, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      o_42 = ATgetArgument(t, 0);
      m_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_x_36;
  p_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_42, term_x_36);
  t = p_13(d_21, o_42, p_42, t);
  t = SSL_close(m_42);
  t = o_42;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm y_42 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_x_57;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm c_43 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_y_57);
      c_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_42, (ATerm) ATinsert(ATempty, term_y_57));
      t = i_14(y_42, c_43, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm f_21 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_57 = ATgetArgument(t, 0);
      if(match_cons(z_57, sym_Stream_1))
        {
          s_43 = ATgetArgument(z_57, 0);
        }
      else
        _fail(t);
      t_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_13(s_43, t_43, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm g_118 (ATerm), ATerm t)
{
  ATerm p_43 = NULL,r_43 = NULL;
  t = read_from_0_0(t);
  t = g_118(t);
  r_43 = t;
  t = xtc_new_file_0_0(t);
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_43, r_43);
  t = m_13(f_21, p_43, r_43, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, p_43);
  return(t);
}
static ATerm g_21 (ATerm t)
{
  t = debug_1_0(i_21, t);
  return(t);
}
static ATerm i_21 (ATerm t)
{
  t = term_a_58;
  return(t);
}
static ATerm m_21 (ATerm t)
{
  t = save_as_1_0(n_21, t);
  return(t);
}
static ATerm n_21 (ATerm t)
{
  t = term_b_58;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm a_44 = NULL,t_44 = NULL;
  t_44 = t;
  {
    ATerm c_58 = t;
    int d_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_25 = NULL,h_25 = NULL;
        t = term_q_35;
        g_25 = t;
        t = term_e_58;
        h_25 = t;
        t = term_f_58;
        t = o_14(g_25, h_25, t);
        a_44 = t;
        t = if_verbose2_1_0(g_21, t);
        t = t_44;
        {
          ATerm g_58 = t;
          int h_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_25 = NULL,k_25 = NULL;
              t = term_q_35;
              j_25 = t;
              t = term_t_37;
              k_25 = t;
              t = term_b_38;
              t = o_14(j_25, k_25, t);
              t = t_44;
              LocalPopChoice(h_58);
            }
          else
            {
              t = g_58;
              {
                static ATerm j_21 (ATerm t)
                {
                  ATerm x_58 = t;
                  int y_58 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          k_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = k_13(a_44, k_26, t);
                      LocalPopChoice(y_58);
                    }
                  else
                    {
                      t = x_58;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(j_21, t);
              }
            }
        }
        LocalPopChoice(d_58);
      }
    else
      {
        t = c_58;
        t = t_44;
      }
  }
  t = if_keep3_1_0(m_21, t);
  return(t);
}
static ATerm p_21 (ATerm t)
{
  ATerm v_45 = NULL;
  v_45 = t;
  {
    ATerm z_58 = t;
    int a_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(v_45);
        LocalPopChoice(a_59);
      }
    else
      {
        t = z_58;
        t = v_45;
      }
  }
  return(t);
}
static ATerm q_21 (ATerm t)
{
  t = term_v_57;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm g_45 = NULL,k_45 = NULL;
  static ATerm o_21 (ATerm t)
  {
    ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
    o_45 = t;
    t = term_v_57;
    p_45 = t;
    t = term_f_57;
    q_45 = t;
    t = term_c_59;
    t = o_14(p_45, q_45, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((g_45 != NULL) && (g_45 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          g_45 = ATgetFirst((ATermList) t);
        {
          ATerm f_59 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = g_45;
    t = map_1_0(p_21, t);
    t = o_45;
    t = end_scope_1_0(q_21, t);
    return(t);
  }
  t = repeat_2_0(o_21, _id, t);
  k_45 = t;
  t = SSL_exit(k_45);
  return(t);
}
static ATerm v_21 (ATerm t)
{
  ATerm g_59 = t;
  int h_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_46 = NULL,s_46 = NULL;
      t = term_q_35;
      r_46 = t;
      t = term_a_36;
      s_46 = t;
      t = term_b_36;
      t = o_14(r_46, s_46, t);
      LocalPopChoice(h_59);
    }
  else
    {
      t = g_59;
      t = term_a_37;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm p_46 = NULL;
  p_46 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_27 = NULL,m_27 = NULL;
      t = term_a_36;
      {
        ATerm j_59 = t;
        int k_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_27 = NULL,u_27 = NULL;
            t = term_q_35;
            n_27 = t;
            t = term_a_36;
            u_27 = t;
            t = term_b_36;
            t = o_14(n_27, u_27, t);
            LocalPopChoice(k_59);
          }
        else
          {
            t = j_59;
            t = term_a_37;
          }
      }
      l_27 = t;
      t = term_x_57;
      m_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_x_57, l_27);
      t = x_13(m_27, l_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm l_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_46;
      t = copy_to_1_0(v_21, t);
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
ATerm get_outfile_1_0 (ATerm t_84 (ATerm), ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,d_47 = NULL,e_47 = NULL;
  t = t_84(t);
  w_46 = t;
  t = term_q_35;
  d_47 = t;
  t = term_f_40;
  e_47 = t;
  t = term_g_40;
  t = o_14(d_47, e_47, t);
  x_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_46, w_46);
  t = u_14(x_46, w_46, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL;
  h_48 = t;
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
        ATerm k_28 = NULL;
        t = h_48;
        t = v_0(t);
        k_28 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = k_28;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = k_28;
          }
        t = (ATerm) ATmakeAppl(sym__2, i_48, k_28);
        t = x_13(i_48, k_28, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_48);
        LocalPopChoice(p_59);
      }
    else
      {
        t = o_59;
        {
          ATerm q_59 = t;
          int r_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_28 = NULL;
              t = h_48;
              t = v_0(t);
              w_28 = t;
              {
                ATerm t_59 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_28 = NULL;
                    x_28 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = x_28;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = x_28;
                          }
                        else
                          {
                            t = x_28;
                            if((i_48 != t))
                              {
                                _fail(t);
                              }
                            t = x_28;
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
              t = (ATerm) ATmakeAppl(sym__2, i_48, w_28);
              t = x_13(i_48, w_28, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_48);
              LocalPopChoice(r_59);
            }
          else
            {
              t = q_59;
              t = h_48;
              t = v_0(t);
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
static ATerm x_21 (ATerm t)
{
  t = get_outfile_1_0(b_22, t);
  return(t);
}
static ATerm b_22 (ATerm t)
{
  t = term_u_59;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm j_49 = NULL;
  j_49 = t;
  {
    ATerm v_59 = t;
    int y_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_29 = NULL,q_29 = NULL,r_29 = NULL,w_29 = NULL,x_29 = NULL;
        t = term_q_35;
        w_29 = t;
        t = term_z_59;
        x_29 = t;
        t = term_a_60;
        t = o_14(w_29, x_29, t);
        t = j_49;
        t = copy_to_1_0(x_21, t);
        j_29 = t;
        t = term_v_35;
        q_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_60));
        r_29 = t;
        t = SSL_printnl(q_29, r_29);
        t = j_29;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(y_59);
      }
    else
      {
        t = v_59;
        t = j_49;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,k_51 = NULL,l_51 = NULL;
  t = term_r_40;
  {
    ATerm f_60 = t;
    int g_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_51 = NULL,s_51 = NULL;
        t = term_q_35;
        m_51 = t;
        t = term_r_40;
        s_51 = t;
        t = term_s_40;
        t = o_14(m_51, s_51, t);
        LocalPopChoice(g_60);
      }
    else
      {
        t = f_60;
        t = term_t_38;
      }
  }
  d_51 = t;
  t = term_t_38;
  l_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_51, term_t_38);
  t = v_13(d_51, l_51, t);
  k_51 = t;
  t = SSL_int_to_string(k_51);
  c_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_51), term_r_40);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,y_51 = NULL,b_52 = NULL;
  t = term_q_35;
  y_51 = t;
  t = term_h_60;
  b_52 = t;
  t = term_j_60;
  t = o_14(y_51, b_52, t);
  t_51 = t;
  t = term_m_60;
  t = xtc_find_path_0_0(t);
  u_51 = t;
  t = term_n_60;
  t = xtc_find_path_0_0(t);
  v_51 = t;
  t = term_o_60;
  t = xtc_find_path_0_0(t);
  w_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_51, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_51), term_h_60), v_51), term_h_60), u_51), term_h_60));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm c_52 = NULL,f_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,q_52 = NULL;
  k_52 = t;
  t = term_q_60;
  c_52 = t;
  t = k_52;
  {
    ATerm x_60 = t;
    int y_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_52 = NULL,s_52 = NULL;
        t = term_q_35;
        r_52 = t;
        t = term_a_36;
        s_52 = t;
        t = term_b_36;
        t = o_14(r_52, s_52, t);
        LocalPopChoice(y_60);
      }
    else
      {
        t = x_60;
        {
          ATerm x_52 = NULL,f_53 = NULL;
          t = term_q_35;
          x_52 = t;
          t = term_f_40;
          f_53 = t;
          t = term_g_40;
          t = o_14(x_52, f_53, t);
        }
      }
  }
  q_52 = t;
  t = k_52;
  t = get_include_dirs_0_0(t);
  h_52 = t;
  t = k_52;
  t = pass_keep_0_0(t);
  i_52 = t;
  t = term_z_60;
  {
    ATerm a_61 = t;
    int c_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_53 = NULL,j_53 = NULL;
        t = term_q_35;
        h_53 = t;
        t = term_z_60;
        j_53 = t;
        t = term_d_61;
        t = o_14(h_53, j_53, t);
        LocalPopChoice(c_61);
        t = (ATerm) ATinsert(ATempty, term_z_60);
      }
    else
      {
        t = a_61;
        t = (ATerm) ATempty;
      }
  }
  j_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_52), i_52), h_52), (ATerm) ATinsert(ATinsert(ATempty, q_52), term_f_61));
  t = concat_0_0(t);
  f_52 = t;
  t = k_52;
  t = comp_0_2(c_52, f_52, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm e_109 (ATerm), ATerm t)
{
  ATerm s_53 = NULL;
  s_53 = t;
  {
    ATerm g_61 = t;
    int j_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
        t = term_q_35;
        y_53 = t;
        t = term_r_35;
        z_53 = t;
        t = term_s_35;
        t = o_14(y_53, z_53, t);
        x_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_53, term_i_39);
        t = geq_0_0(t);
        t = s_53;
        t = e_109(t);
        LocalPopChoice(j_61);
      }
    else
      {
        t = g_61;
        t = s_53;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL;
  h_54 = t;
  t = SSL_explode_string(h_54);
  {
    ATerm k_61 = t;
    int l_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm e_56 (ATerm t)
        {
          ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
          z_55 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_56 = ATgetFirst((ATermList) t);
              b_56 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm m_61 = t;
            int n_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_31 = NULL,n_31 = NULL,k_10 = NULL;
                t = SSLgetAnnotations(z_55);
                g_31 = t;
                t = b_56;
                t = e_56(t);
                n_31 = t;
                t = (ATerm) ATinsert(CheckATermList(n_31), a_56);
                k_10 = t;
                t = SSLsetAnnotations(k_10, g_31);
                LocalPopChoice(n_61);
              }
            else
              {
                t = m_61;
                {
                  ATerm o_61 = t;
                  int q_61 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_32 = NULL,l_10 = NULL;
                      t = SSLgetAnnotations(z_55);
                      g_32 = t;
                      t = a_56;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(b_56), a_56);
                      l_10 = t;
                      t = SSLsetAnnotations(l_10, g_32);
                      LocalPopChoice(q_61);
                    }
                  else
                    {
                      t = o_61;
                      {
                        ATerm y_32 = NULL,f_33 = NULL,m_10 = NULL;
                        t = SSLgetAnnotations(z_55);
                        y_32 = t;
                        t = a_56;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = b_56;
                        t = k_104(t);
                        f_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(f_33), a_56);
                        m_10 = t;
                        t = SSLsetAnnotations(m_10, y_32);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = e_56(t);
        LocalPopChoice(l_61);
      }
    else
      {
        t = k_61;
      }
  }
  g_54 = t;
  t = SSL_implode_string(g_54);
  return(t);
}
static ATerm c_22 (ATerm t)
{
  t = debug_1_0(j_22, t);
  return(t);
}
static ATerm j_22 (ATerm t)
{
  t = term_r_61;
  return(t);
}
static ATerm m_22 (ATerm t)
{
  t = debug_1_0(n_22, t);
  return(t);
}
static ATerm n_22 (ATerm t)
{
  t = term_s_61;
  return(t);
}
static ATerm q_13 (ATerm u_21, ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL;
  t = u_21;
  t = basename_1_0(_id, t);
  o_56 = t;
  t = if_verbose3_1_0(c_22, t);
  t = term_h_40;
  r_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_40, o_56);
  t = t_14(r_56, o_56, t);
  {
    ATerm t_61 = t;
    int u_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_56 = NULL,w_56 = NULL;
        t = term_q_35;
        v_56 = t;
        t = term_a_36;
        w_56 = t;
        t = term_b_36;
        t = o_14(v_56, w_56, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(u_61);
      }
    else
      {
        t = t_61;
        t = o_56;
      }
  }
  p_56 = t;
  t = if_verbose3_1_0(m_22, t);
  t = term_f_40;
  q_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_40, p_56);
  t = t_14(q_56, p_56, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_56);
  return(t);
}
static ATerm q_22 (ATerm t)
{
  t = debug_1_0(r_22, t);
  return(t);
}
static ATerm r_22 (ATerm t)
{
  t = term_v_61;
  return(t);
}
static ATerm s_22 (ATerm t)
{
  t = if_verbose1_1_0(v_22, t);
  return(t);
}
static ATerm u_22 (ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,n_36 = NULL,q_36 = NULL,r_36 = NULL,c_34 = NULL,e_34 = NULL,f_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      t_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_13(t_58, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm w_61 = t;
    int x_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
        u_58 = t;
        t = term_q_35;
        v_58 = t;
        t = term_t_37;
        w_58 = t;
        t = term_b_38;
        t = o_14(v_58, w_58, t);
        t = u_58;
        LocalPopChoice(x_61);
      }
    else
      {
        t = w_61;
        t = add_main_0_0(t);
      }
  }
  s_58 = t;
  {
    ATerm y_61 = t;
    int z_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_59 = ATgetArgument(t, 0);
            {
              ATerm s_33 = NULL,y_10 = NULL;
              t = SSLgetAnnotations(s_58);
              s_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_59);
              y_10 = t;
              t = SSLsetAnnotations(y_10, s_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_58;
          }
        LocalPopChoice(z_61);
        t = xtc_transform_file_2_0(w_22, z_22, t);
      }
    else
      {
        t = y_61;
        t = xtc_transform_term_2_0(a_23, c_23, t);
      }
  }
  r_58 = t;
  {
    ATerm a_62 = t;
    int b_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_59 = ATgetArgument(t, 0);
            {
              ATerm y_33 = NULL,z_10 = NULL;
              t = SSLgetAnnotations(r_58);
              y_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_59);
              z_10 = t;
              t = SSLsetAnnotations(z_10, y_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_58;
          }
        LocalPopChoice(b_62);
        t = xtc_transform_file_2_0(d_23, f_23, t);
      }
    else
      {
        t = a_62;
        t = xtc_transform_term_2_0(j_23, k_23, t);
      }
  }
  t = if_keep5_1_0(l_23, t);
  t = normalize_spec_0_0(t);
  t = if_keep5_1_0(p_23, t);
  f_34 = t;
  t = term_c_62;
  c_34 = t;
  t = f_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  e_34 = t;
  t = f_34;
  t = comp_0_2(c_34, e_34, t);
  q_58 = t;
  {
    ATerm d_62 = t;
    int g_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_59 = ATgetArgument(t, 0);
            {
              ATerm q_34 = NULL,a_11 = NULL;
              t = SSLgetAnnotations(q_58);
              q_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_59);
              a_11 = t;
              t = SSLsetAnnotations(a_11, q_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_58;
          }
        LocalPopChoice(g_62);
        t = xtc_transform_file_2_0(y_23, b_24, t);
      }
    else
      {
        t = d_62;
        t = xtc_transform_term_2_0(c_24, e_24, t);
      }
  }
  p_58 = t;
  {
    ATerm h_62 = t;
    int i_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_60 = ATgetArgument(t, 0);
            {
              ATerm z_34 = NULL,l_11 = NULL;
              t = SSLgetAnnotations(p_58);
              z_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_60);
              l_11 = t;
              t = SSLsetAnnotations(l_11, z_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_58;
          }
        LocalPopChoice(i_62);
        t = xtc_transform_file_2_0(g_24, h_24, t);
      }
    else
      {
        t = h_62;
        t = xtc_transform_term_2_0(i_24, k_24, t);
      }
  }
  t = if_keep5_1_0(m_24, t);
  o_58 = t;
  {
    ATerm k_62 = t;
    int l_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_60 = ATgetArgument(t, 0);
            {
              ATerm i_35 = NULL,j_12 = NULL;
              t = SSLgetAnnotations(o_58);
              i_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_60);
              j_12 = t;
              t = SSLsetAnnotations(j_12, i_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_58;
          }
        LocalPopChoice(l_62);
        t = xtc_transform_file_2_0(o_24, p_24, t);
      }
    else
      {
        t = k_62;
        t = xtc_transform_term_2_0(r_24, s_24, t);
      }
  }
  t = if_keep5_1_0(t_24, t);
  n_58 = t;
  {
    ATerm m_62 = t;
    int n_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_60 = ATgetArgument(t, 0);
            {
              ATerm p_35 = NULL,k_12 = NULL;
              t = SSLgetAnnotations(n_58);
              p_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_60);
              k_12 = t;
              t = SSLsetAnnotations(k_12, p_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_58;
          }
        LocalPopChoice(n_62);
        t = xtc_transform_file_2_0(w_24, x_24, t);
      }
    else
      {
        t = m_62;
        t = xtc_transform_term_2_0(z_24, c_25, t);
      }
  }
  t = if_keep5_1_0(d_25, t);
  t = output_frontend_0_0(t);
  {
    ATerm o_62 = t;
    int q_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL;
        t_60 = t;
        t = term_q_35;
        u_60 = t;
        t = term_t_37;
        v_60 = t;
        t = term_b_38;
        t = o_14(u_60, v_60, t);
        t = t_60;
        LocalPopChoice(q_62);
        {
          ATerm w_60 = NULL;
          w_60 = t;
          {
            ATerm s_62 = t;
            int t_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    b_61 = ATgetArgument(t, 0);
                    {
                      ATerm t_35 = NULL,l_12 = NULL;
                      t = SSLgetAnnotations(w_60);
                      t_35 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, b_61);
                      l_12 = t;
                      t = SSLsetAnnotations(l_12, t_35);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = w_60;
                  }
                LocalPopChoice(t_62);
                t = xtc_transform_file_2_0(f_25, l_25, t);
              }
            else
              {
                t = s_62;
                t = xtc_transform_term_2_0(o_25, q_25, t);
              }
          }
        }
      }
    else
      {
        t = o_62;
        {
          ATerm i_61 = NULL;
          i_61 = t;
          {
            ATerm u_62 = t;
            int v_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    p_61 = ATgetArgument(t, 0);
                    {
                      ATerm e_36 = NULL,o_12 = NULL;
                      t = SSLgetAnnotations(i_61);
                      e_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, p_61);
                      o_12 = t;
                      t = SSLsetAnnotations(o_12, e_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = i_61;
                  }
                LocalPopChoice(v_62);
                t = xtc_transform_file_2_0(t_25, u_25, t);
              }
            else
              {
                t = u_62;
                t = xtc_transform_term_2_0(v_25, x_25, t);
              }
          }
          t = if_keep2_1_0(y_25, t);
        }
      }
  }
  r_36 = t;
  t = term_w_62;
  n_36 = t;
  t = r_36;
  t = pass_warnings_0_0(t);
  q_36 = t;
  t = r_36;
  t = comp_0_2(n_36, q_36, t);
  m_58 = t;
  {
    ATerm y_62 = t;
    int b_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_62 = ATgetArgument(t, 0);
            {
              ATerm w_36 = NULL,p_12 = NULL;
              t = SSLgetAnnotations(m_58);
              w_36 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_62);
              p_12 = t;
              t = SSLsetAnnotations(p_12, w_36);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_58;
          }
        LocalPopChoice(b_63);
        t = xtc_transform_file_2_0(a_26, d_26, t);
      }
    else
      {
        t = y_62;
        t = xtc_transform_term_2_0(e_26, f_26, t);
      }
  }
  l_58 = t;
  {
    ATerm c_63 = t;
    int d_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_62 = ATgetArgument(t, 0);
            {
              ATerm j_37 = NULL,r_12 = NULL;
              t = SSLgetAnnotations(l_58);
              j_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_62);
              r_12 = t;
              t = SSLsetAnnotations(r_12, j_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_58;
          }
        LocalPopChoice(d_63);
        t = xtc_transform_file_2_0(g_26, h_26, t);
      }
    else
      {
        t = c_63;
        t = xtc_transform_term_2_0(j_26, n_26, t);
      }
  }
  t = if_keep2_1_0(o_26, t);
  return(t);
}
static ATerm v_22 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
  i_58 = t;
  t = term_v_35;
  j_58 = t;
  t = (ATerm) ATinsert(CheckATermList(i_58), term_e_63);
  k_58 = t;
  t = SSL_printnl(j_58, k_58);
  t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(CheckATermList(i_58), term_e_63));
  return(t);
}
static ATerm w_22 (ATerm t)
{
  t = term_f_63;
  return(t);
}
static ATerm z_22 (ATerm t)
{
  ATerm d_59 = NULL;
  t = pass_verbose_0_0(t);
  d_59 = t;
  t = (ATerm) ATinsert(CheckATermList(d_59), term_r_38);
  return(t);
}
static ATerm a_23 (ATerm t)
{
  t = term_f_63;
  return(t);
}
static ATerm c_23 (ATerm t)
{
  ATerm e_59 = NULL;
  t = pass_verbose_0_0(t);
  e_59 = t;
  t = (ATerm) ATinsert(CheckATermList(e_59), term_r_38);
  return(t);
}
static ATerm d_23 (ATerm t)
{
  t = term_g_63;
  return(t);
}
static ATerm f_23 (ATerm t)
{
  ATerm m_59 = NULL;
  t = pass_verbose_0_0(t);
  m_59 = t;
  t = (ATerm) ATinsert(CheckATermList(m_59), term_r_38);
  return(t);
}
static ATerm j_23 (ATerm t)
{
  t = term_g_63;
  return(t);
}
static ATerm k_23 (ATerm t)
{
  ATerm n_59 = NULL;
  t = pass_verbose_0_0(t);
  n_59 = t;
  t = (ATerm) ATinsert(CheckATermList(n_59), term_r_38);
  return(t);
}
static ATerm l_23 (ATerm t)
{
  t = save_as_1_0(m_23, t);
  return(t);
}
static ATerm m_23 (ATerm t)
{
  t = term_j_63;
  return(t);
}
static ATerm p_23 (ATerm t)
{
  t = save_as_1_0(x_23, t);
  return(t);
}
static ATerm x_23 (ATerm t)
{
  t = term_k_63;
  return(t);
}
static ATerm y_23 (ATerm t)
{
  t = term_l_63;
  return(t);
}
static ATerm b_24 (ATerm t)
{
  ATerm w_59 = NULL;
  t = pass_verbose_0_0(t);
  w_59 = t;
  t = (ATerm) ATinsert(CheckATermList(w_59), term_r_38);
  return(t);
}
static ATerm c_24 (ATerm t)
{
  t = term_l_63;
  return(t);
}
static ATerm e_24 (ATerm t)
{
  ATerm x_59 = NULL;
  t = pass_verbose_0_0(t);
  x_59 = t;
  t = (ATerm) ATinsert(CheckATermList(x_59), term_r_38);
  return(t);
}
static ATerm g_24 (ATerm t)
{
  t = term_m_63;
  return(t);
}
static ATerm h_24 (ATerm t)
{
  ATerm d_60 = NULL;
  t = pass_verbose_0_0(t);
  d_60 = t;
  t = (ATerm) ATinsert(CheckATermList(d_60), term_r_38);
  return(t);
}
static ATerm i_24 (ATerm t)
{
  t = term_m_63;
  return(t);
}
static ATerm k_24 (ATerm t)
{
  ATerm e_60 = NULL;
  t = pass_verbose_0_0(t);
  e_60 = t;
  t = (ATerm) ATinsert(CheckATermList(e_60), term_r_38);
  return(t);
}
static ATerm m_24 (ATerm t)
{
  t = save_as_1_0(n_24, t);
  return(t);
}
static ATerm n_24 (ATerm t)
{
  t = term_n_63;
  return(t);
}
static ATerm o_24 (ATerm t)
{
  t = term_o_63;
  return(t);
}
static ATerm p_24 (ATerm t)
{
  ATerm k_60 = NULL;
  t = pass_verbose_0_0(t);
  k_60 = t;
  t = (ATerm) ATinsert(CheckATermList(k_60), term_r_38);
  return(t);
}
static ATerm r_24 (ATerm t)
{
  t = term_o_63;
  return(t);
}
static ATerm s_24 (ATerm t)
{
  ATerm l_60 = NULL;
  t = pass_verbose_0_0(t);
  l_60 = t;
  t = (ATerm) ATinsert(CheckATermList(l_60), term_r_38);
  return(t);
}
static ATerm t_24 (ATerm t)
{
  t = save_as_1_0(v_24, t);
  return(t);
}
static ATerm v_24 (ATerm t)
{
  t = term_p_63;
  return(t);
}
static ATerm w_24 (ATerm t)
{
  t = term_q_63;
  return(t);
}
static ATerm x_24 (ATerm t)
{
  ATerm r_60 = NULL;
  t = pass_verbose_0_0(t);
  r_60 = t;
  t = (ATerm) ATinsert(CheckATermList(r_60), term_r_38);
  return(t);
}
static ATerm z_24 (ATerm t)
{
  t = term_q_63;
  return(t);
}
static ATerm c_25 (ATerm t)
{
  ATerm s_60 = NULL;
  t = pass_verbose_0_0(t);
  s_60 = t;
  t = (ATerm) ATinsert(CheckATermList(s_60), term_r_38);
  return(t);
}
static ATerm d_25 (ATerm t)
{
  t = save_as_1_0(e_25, t);
  return(t);
}
static ATerm e_25 (ATerm t)
{
  t = term_r_63;
  return(t);
}
static ATerm f_25 (ATerm t)
{
  t = term_f_55;
  return(t);
}
static ATerm l_25 (ATerm t)
{
  ATerm e_61 = NULL;
  t = pass_verbose_0_0(t);
  e_61 = t;
  t = (ATerm) ATinsert(CheckATermList(e_61), term_r_38);
  return(t);
}
static ATerm o_25 (ATerm t)
{
  t = term_f_55;
  return(t);
}
static ATerm q_25 (ATerm t)
{
  ATerm h_61 = NULL;
  t = pass_verbose_0_0(t);
  h_61 = t;
  t = (ATerm) ATinsert(CheckATermList(h_61), term_r_38);
  return(t);
}
static ATerm t_25 (ATerm t)
{
  t = term_t_63;
  return(t);
}
static ATerm u_25 (ATerm t)
{
  ATerm e_62 = NULL;
  t = pass_verbose_0_0(t);
  e_62 = t;
  t = (ATerm) ATinsert(CheckATermList(e_62), term_r_38);
  return(t);
}
static ATerm v_25 (ATerm t)
{
  t = term_t_63;
  return(t);
}
static ATerm x_25 (ATerm t)
{
  ATerm f_62 = NULL;
  t = pass_verbose_0_0(t);
  f_62 = t;
  t = (ATerm) ATinsert(CheckATermList(f_62), term_r_38);
  return(t);
}
static ATerm y_25 (ATerm t)
{
  t = save_as_1_0(z_25, t);
  return(t);
}
static ATerm z_25 (ATerm t)
{
  t = term_x_63;
  return(t);
}
static ATerm a_26 (ATerm t)
{
  t = term_y_63;
  return(t);
}
static ATerm d_26 (ATerm t)
{
  ATerm p_62 = NULL;
  t = pass_verbose_0_0(t);
  p_62 = t;
  t = (ATerm) ATinsert(CheckATermList(p_62), term_r_38);
  return(t);
}
static ATerm e_26 (ATerm t)
{
  t = term_y_63;
  return(t);
}
static ATerm f_26 (ATerm t)
{
  ATerm r_62 = NULL;
  t = pass_verbose_0_0(t);
  r_62 = t;
  t = (ATerm) ATinsert(CheckATermList(r_62), term_r_38);
  return(t);
}
static ATerm g_26 (ATerm t)
{
  t = term_z_63;
  return(t);
}
static ATerm h_26 (ATerm t)
{
  ATerm z_62 = NULL;
  t = pass_verbose_0_0(t);
  z_62 = t;
  t = (ATerm) ATinsert(CheckATermList(z_62), term_r_38);
  return(t);
}
static ATerm j_26 (ATerm t)
{
  t = term_z_63;
  return(t);
}
static ATerm n_26 (ATerm t)
{
  ATerm a_63 = NULL;
  t = pass_verbose_0_0(t);
  a_63 = t;
  t = (ATerm) ATinsert(CheckATermList(a_63), term_r_38);
  return(t);
}
static ATerm o_26 (ATerm t)
{
  t = save_as_1_0(p_26, t);
  return(t);
}
static ATerm p_26 (ATerm t)
{
  t = term_b_64;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(q_22, t);
  t = profile_p__2_0(s_22, u_22, t);
  return(t);
}
static ATerm o_14 (ATerm j_55, ATerm k_55, ATerm t)
{
  ATerm s_63 = NULL;
  t = lookup_table_0_1(j_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(k_55, s_63, t);
  return(t);
}
static ATerm r_13 (ATerm v_53, ATerm w_53, ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL;
  v_63 = t;
  {
    ATerm e_64 = t;
    int f_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
        t = o_14(v_53, w_53, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_64 = ATgetFirst((ATermList) t);
            u_63 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_64);
        {
          ATerm w_63 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, v_53, w_53, u_63);
          t = lookup_table_0_1(v_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              w_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_14(w_53, u_63, w_63, t);
          t = (ATerm) ATmakeAppl(sym__3, v_53, w_53, u_63);
        }
      }
    else
      {
        t = e_64;
        {
          ATerm a_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
          t = lookup_table_0_1(v_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              a_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_14(w_53, a_64, t);
          t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
        }
      }
  }
  t = v_63;
  return(t);
}
ATerm end_scope_1_0 (ATerm s_106 (ATerm), ATerm t)
{
  ATerm c_64 = NULL,d_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,m_64 = NULL;
  h_64 = t;
  t = s_106(t);
  g_64 = t;
  {
    ATerm l_64 = t;
    int n_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_64 = NULL;
        t = term_f_57;
        o_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_64, term_f_57);
        t = o_14(g_64, o_64, t);
        LocalPopChoice(n_64);
      }
    else
      {
        t = l_64;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_64 = ATgetFirst((ATermList) t);
      c_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_64, term_f_57, c_64);
  t = lookup_table_0_1(g_64, t);
  m_64 = t;
  t = term_f_57;
  i_64 = t;
  t = m_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(i_64, c_64, j_64, t);
  t = d_64;
  {
    static ATerm q_26 (ATerm t)
    {
      ATerm p_64 = NULL;
      p_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_64, p_64);
      t = r_13(g_64, p_64, t);
      return(t);
    }
    t = map_1_0(q_26, t);
  }
  t = h_64;
  return(t);
}
ATerm restore_always_2_0 (ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm t)
{
  ATerm q_64 = t;
  int r_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_85(t);
      t = x_85(t);
      LocalPopChoice(r_64);
    }
  else
    {
      t = q_64;
      t = x_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_106 (ATerm), ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,a_65 = NULL,d_65 = NULL;
  u_64 = t;
  t = r_106(t);
  t_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_64, term_f_57);
  {
    ATerm s_64 = t;
    int y_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_65 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_64 = ATgetArgument(t, 0);
            ATerm b_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_57;
        h_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_64, term_f_57);
        t = o_14(t_64, h_65, t);
        LocalPopChoice(y_64);
      }
    else
      {
        t = s_64;
        t = (ATerm) ATempty;
      }
  }
  v_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_64, term_f_57, (ATerm) ATinsert(CheckATermList(v_64), (ATerm) ATempty));
  t = lookup_table_0_1(t_64, t);
  d_65 = t;
  t = term_f_57;
  w_64 = t;
  t = (ATerm) ATinsert(CheckATermList(v_64), (ATerm) ATempty);
  x_64 = t;
  t = d_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(w_64, x_64, a_65, t);
  t = u_64;
  return(t);
}
static ATerm r_26 (ATerm t)
{
  t = term_v_57;
  return(t);
}
static ATerm y_26 (ATerm t)
{
  ATerm y_65 = NULL;
  y_65 = t;
  {
    ATerm c_65 = t;
    int e_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(y_65);
        LocalPopChoice(e_65);
      }
    else
      {
        t = c_65;
        t = y_65;
      }
  }
  return(t);
}
static ATerm z_26 (ATerm t)
{
  t = term_v_57;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm r_118 (ATerm), ATerm t)
{
  ATerm k_65 = NULL;
  static ATerm t_26 (ATerm t)
  {
    ATerm l_65 = NULL;
    l_65 = t;
    {
      ATerm f_65 = t;
      int g_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_65 = NULL,s_65 = NULL;
          t = term_v_57;
          p_65 = t;
          t = term_f_57;
          s_65 = t;
          t = term_c_59;
          t = o_14(p_65, s_65, t);
          LocalPopChoice(g_65);
        }
      else
        {
          t = f_65;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_65 != NULL) && (k_65 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_65 = ATgetFirst((ATermList) t);
        {
          ATerm i_65 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = k_65;
    t = map_1_0(y_26, t);
    t = l_65;
    t = end_scope_1_0(z_26, t);
    return(t);
  }
  t = begin_scope_1_0(r_26, t);
  t = restore_always_2_0(r_118, t_26, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_109 (ATerm), ATerm t)
{
  ATerm g_66 = NULL;
  g_66 = t;
  {
    ATerm j_65 = t;
    int m_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL;
        t = term_q_35;
        j_66 = t;
        t = term_r_35;
        k_66 = t;
        t = term_s_35;
        t = o_14(j_66, k_66, t);
        i_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_66, term_t_38);
        t = geq_0_0(t);
        t = g_66;
        t = c_109(t);
        LocalPopChoice(m_65);
      }
    else
      {
        t = j_65;
        t = g_66;
      }
  }
  return(t);
}
static ATerm t_13 (ATerm y_41, ATerm z_41, ATerm t)
{
  ATerm n_65 = t;
  int o_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_41, z_41);
      LocalPopChoice(o_65);
    }
  else
    {
      t = n_65;
      t = SSL_addr(y_41, z_41);
    }
  return(t);
}
static ATerm v_13 (ATerm e_42, ATerm f_42, ATerm t)
{
  ATerm q_65 = t;
  int r_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(e_42, f_42);
      LocalPopChoice(r_65);
    }
  else
    {
      t = q_65;
      t = SSL_subtr(e_42, f_42);
    }
  return(t);
}
static ATerm w_13 (ATerm s_50, ATerm u_50, ATerm w_50, ATerm y_50, ATerm t_50, ATerm v_50, ATerm x_50, ATerm z_50, ATerm t)
{
  ATerm m_66 = NULL,o_66 = NULL,p_66 = NULL,t_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_50, t_50);
  t = v_13(s_50, t_50, t);
  m_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_50, v_50);
  t = v_13(u_50, v_50, t);
  o_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_50, x_50);
  t = v_13(w_50, x_50, t);
  p_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_50, z_50);
  t = v_13(y_50, z_50, t);
  t_66 = t;
  t = (ATerm) ATmakeAppl(sym__4, m_66, o_66, p_66, t_66);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_65 = ATgetArgument(t, 0);
      if(match_cons(t_65, sym__4))
        {
          v_66 = ATgetArgument(t_65, 0);
          w_66 = ATgetArgument(t_65, 1);
          x_66 = ATgetArgument(t_65, 2);
          y_66 = ATgetArgument(t_65, 3);
        }
      else
        _fail(t);
      {
        ATerm u_65 = ATgetArgument(t, 1);
        if(match_cons(u_65, sym__4))
          {
            b_67 = ATgetArgument(u_65, 0);
            c_67 = ATgetArgument(u_65, 1);
            d_67 = ATgetArgument(u_65, 2);
            e_67 = ATgetArgument(u_65, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_13(v_66, w_66, x_66, y_66, b_67, c_67, d_67, e_67, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm t)
{
  ATerm f_67 = NULL,i_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL,p_67 = NULL,q_67 = NULL,s_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,a_68 = NULL,c_68 = NULL;
  q_67 = t;
  t = times_0_0(t);
  f_67 = t;
  t = q_67;
  t = q_112(t);
  i_67 = t;
  t = times_0_0(t);
  p_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_67, f_67);
  t = diff_times_0_0(t);
  n_67 = t;
  if(match_cons(t, sym__4))
    {
      w_67 = ATgetArgument(t, 0);
      {
        ATerm v_65 = ATgetArgument(t, 1);
      }
      a_68 = ATgetArgument(t, 2);
      {
        ATerm w_65 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_67, a_68);
  t = t_13(w_67, a_68, t);
  c_68 = t;
  t = SSL_TicksToSeconds(c_68);
  l_67 = t;
  t = n_67;
  if(match_cons(t, sym__4))
    {
      ATerm x_65 = ATgetArgument(t, 0);
      s_67 = ATgetArgument(t, 1);
      {
        ATerm z_65 = ATgetArgument(t, 2);
      }
      u_67 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_67, u_67);
  t = t_13(s_67, u_67, t);
  v_67 = t;
  t = SSL_TicksToSeconds(v_67);
  m_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_67), term_b_66), l_67), term_a_66);
  t = p_112(t);
  t = i_67;
  return(t);
}
ATerm debug_1_0 (ATerm b_93 (ATerm), ATerm t)
{
  ATerm f_68 = NULL,h_68 = NULL,j_68 = NULL,k_68 = NULL;
  f_68 = t;
  t = b_93(t);
  h_68 = t;
  t = term_v_35;
  j_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_68), h_68);
  k_68 = t;
  t = SSL_printnl(j_68, k_68);
  t = f_68;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm n_68 = NULL,o_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,w_68 = NULL;
  n_68 = t;
  t = term_q_35;
  t_68 = t;
  t = term_c_66;
  w_68 = t;
  t = term_d_66;
  t = o_14(t_68, w_68, t);
  o_68 = t;
  t = term_a_37;
  r_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_66), term_r_66), term_q_66), term_n_66), term_l_66), term_h_66), term_f_66), o_68), term_e_66);
  s_68 = t;
  t = SSL_printnl(r_68, s_68);
  t = n_68;
  return(t);
}
static ATerm x_13 (ATerm c_45, ATerm d_45, ATerm t)
{
  t = SSL_copy(c_45, d_45);
  return(t);
}
static ATerm y_13 (ATerm p_57, ATerm t)
{
  t = SSL_hashtable_keys(p_57);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm x_68 = NULL,y_68 = NULL;
  static ATerm a_27 (ATerm t)
  {
    ATerm z_68 = NULL,a_69 = NULL;
    z_68 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_68), z_68);
    t = o_14(not_null(x_68), z_68, t);
    a_69 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_68, a_69);
    return(t);
  }
  if(((x_68 != NULL) && (x_68 != t)))
    _fail(t);
  else
    x_68 = t;
  t = lookup_table_0_1(x_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_13(y_68, t);
  t = map_1_0(a_27, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm g_109 (ATerm), ATerm t)
{
  ATerm c_69 = NULL;
  c_69 = t;
  {
    ATerm u_66 = t;
    int z_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
        t = term_q_35;
        f_69 = t;
        t = term_r_35;
        g_69 = t;
        t = term_s_35;
        t = o_14(f_69, g_69, t);
        e_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_69, term_i_45);
        t = geq_0_0(t);
        t = c_69;
        t = g_109(t);
        LocalPopChoice(z_66);
      }
    else
      {
        t = u_66;
        t = c_69;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm f_109 (ATerm), ATerm t)
{
  ATerm j_69 = NULL;
  j_69 = t;
  {
    ATerm a_67 = t;
    int g_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL;
        t = term_q_35;
        m_69 = t;
        t = term_r_35;
        n_69 = t;
        t = term_s_35;
        t = o_14(m_69, n_69, t);
        l_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_69, term_h_42);
        t = geq_0_0(t);
        t = j_69;
        t = f_109(t);
        LocalPopChoice(g_67);
      }
    else
      {
        t = a_67;
        t = j_69;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL;
  x_69 = t;
  if(match_cons(t, sym__2))
    {
      y_69 = ATgetArgument(t, 0);
      z_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_67 = t;
    int j_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_69;
        if((y_69 != t))
          {
            _fail(t);
          }
        t = x_69;
        LocalPopChoice(j_67);
      }
    else
      {
        t = h_67;
        t = (ATerm) ATmakeAppl(sym__2, y_69, z_69);
        {
          ATerm k_67 = t;
          int o_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_69, z_69);
              LocalPopChoice(o_67);
            }
          else
            {
              t = k_67;
              t = SSL_gtr(y_69, z_69);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, y_69, z_69);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm h_109 (ATerm), ATerm t)
{
  ATerm d_70 = NULL;
  d_70 = t;
  {
    ATerm r_67 = t;
    int t_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_70 = NULL,h_70 = NULL,i_70 = NULL;
        t = term_q_35;
        h_70 = t;
        t = term_r_35;
        i_70 = t;
        t = term_s_35;
        t = o_14(h_70, i_70, t);
        f_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_70, term_l_42);
        t = geq_0_0(t);
        t = d_70;
        t = h_109(t);
        LocalPopChoice(t_67);
      }
    else
      {
        t = r_67;
        t = d_70;
      }
  }
  return(t);
}
static ATerm b_14 (ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm f_30, ATerm e_30, ATerm t)
{
  t = b_98(t);
  {
    static ATerm c_27 (ATerm t)
    {
      ATerm k_70 = NULL;
      k_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_30, k_70);
      t = a_98(t);
      return(t);
    }
    t = fetch_1_0(c_27, t);
  }
  t = e_30;
  return(t);
}
static ATerm c_14 (ATerm x_97 (ATerm), ATerm b_30, ATerm a_30, ATerm t)
{
  static ATerm k_71 (ATerm t)
  {
    ATerm e_71 = NULL,g_71 = NULL,h_71 = NULL;
    e_71 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_71 = ATgetFirst((ATermList) t);
            h_71 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_67 = t;
          int y_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_71;
              {
                static ATerm f_27 (ATerm t)
                {
                  t = a_30;
                  return(t);
                }
                t = b_14(x_97, f_27, g_71, h_71, t);
              }
              t = k_71(t);
              LocalPopChoice(y_67);
            }
          else
            {
              t = x_67;
              {
                ATerm x_38 = NULL,a_39 = NULL,u_13 = NULL;
                t = SSLgetAnnotations(e_71);
                x_38 = t;
                t = h_71;
                t = k_71(t);
                a_39 = t;
                t = (ATerm) ATinsert(CheckATermList(a_39), g_71);
                u_13 = t;
                t = SSLsetAnnotations(u_13, x_38);
              }
            }
        }
      }
    return(t);
  }
  t = b_30;
  t = k_71(t);
  return(t);
}
static ATerm g_27 (ATerm t)
{
  ATerm d_72 = NULL;
  if(match_cons(t, sym__2))
    {
      d_72 = ATgetArgument(t, 0);
      if((d_72 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_14 (ATerm n_54, ATerm o_54, ATerm p_54, ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL,t_71 = NULL,w_71 = NULL;
  p_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_54, o_54);
  {
    ATerm z_67 = t;
    int b_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_68 = ATgetArgument(t, 0);
            ATerm e_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_54, o_54);
        t = o_14(n_54, o_54, t);
        LocalPopChoice(b_68);
      }
    else
      {
        t = z_67;
        t = (ATerm) ATempty;
      }
  }
  t_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_71, p_54);
  t = c_14(g_27, t_71, p_54, t);
  q_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_54, o_54, q_71);
  t = lookup_table_0_1(n_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(o_54, q_71, w_71, t);
  t = p_71;
  return(t);
}
static ATerm e_14 (ATerm y_113 (ATerm), ATerm x_54, ATerm w_54, ATerm t)
{
  static ATerm h_27 (ATerm t)
  {
    ATerm e_72 = NULL,f_72 = NULL;
    if(match_cons(t, sym__2))
      {
        e_72 = ATgetArgument(t, 0);
        f_72 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, x_54, e_72, f_72);
    t = y_113(t);
    return(t);
  }
  t = w_54;
  t = map_1_0(h_27, t);
  return(t);
}
static ATerm i_14 (ATerm v_38, ATerm w_38, ATerm t)
{
  t = SSL_access(v_38, w_38);
  return(t);
}
static ATerm f_73 (ATerm s_72, ATerm t)
{
  t = SSL_fclose(s_72);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL;
  a_73 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_72 = ATgetArgument(t, 0);
      {
        ATerm g_68 = t;
        int i_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_72);
            LocalPopChoice(i_68);
          }
        else
          {
            t = g_68;
            t = f_73(a_73, t);
          }
      }
    }
  else
    {
      t = f_73(a_73, t);
    }
  return(t);
}
static ATerm f_14 (ATerm z_23, ATerm t)
{
  t = SSL_read_term_from_stream(z_23);
  return(t);
}
static ATerm g_14 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm h_73 = NULL;
  t = SSL_fopen(e_39, f_39);
  h_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_73);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_73 = NULL;
  t = SSL_stdin_stream();
  i_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_73);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_73 = NULL;
  t = SSL_stdout_stream();
  j_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_73);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_73 = NULL;
  t = SSL_stderr_stream();
  k_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_73);
  return(t);
}
static ATerm h_75 (ATerm v_73, ATerm t)
{
  ATerm w_73 = NULL;
  t = SSL_explode_term(v_73);
  if(match_cons(t, sym__2))
    {
      ATerm l_68 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_68) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_68 = ATgetArgument(t, 1);
        if(((ATgetType(m_68) == AT_LIST) && !(ATisEmpty(m_68))))
          {
            w_73 = ATgetFirst((ATermList) m_68);
            {
              ATerm p_68 = (ATerm) ATgetNext((ATermList) m_68);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_73;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_73;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_73;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_73;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_75 (ATerm b_74, ATerm c_74, ATerm e_74, ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL,o_74 = NULL,q_14 = NULL;
  t = SSLgetAnnotations(e_74);
  i_74 = t;
  t = b_74;
  if(match_cons(t, sym_Path_1))
    {
      o_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_74, c_74);
  q_14 = t;
  t = SSLsetAnnotations(q_14, i_74);
  if(match_cons(t, sym__2))
    {
      g_74 = ATgetArgument(t, 0);
      h_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_14(g_74, h_74, t);
  return(t);
}
static ATerm k_75 (ATerm q_74, ATerm r_74, ATerm s_74, ATerm t)
{
  ATerm t_74 = NULL,v_74 = NULL,x_74 = NULL,b_75 = NULL,v_14 = NULL;
  t = SSLgetAnnotations(s_74);
  x_74 = t;
  t = SSL_is_string(q_74);
  b_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_75, r_74);
  v_14 = t;
  t = SSLsetAnnotations(v_14, x_74);
  if(match_cons(t, sym__2))
    {
      t_74 = ATgetArgument(t, 0);
      v_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_14(t_74, v_74, t);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL;
  d_75 = t;
  if(match_cons(t, sym__2))
    {
      e_75 = ATgetArgument(t, 0);
      f_75 = ATgetArgument(t, 1);
      {
        ATerm q_68 = t;
        int u_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_75(d_75, t);
            LocalPopChoice(u_68);
          }
        else
          {
            t = q_68;
            {
              ATerm v_68 = t;
              int b_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_75(e_75, f_75, d_75, t);
                  LocalPopChoice(b_69);
                }
              else
                {
                  t = v_68;
                  t = k_75(e_75, f_75, d_75, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_75(d_75, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL,u_75 = NULL;
  u_75 = t;
  {
    ATerm d_69 = t;
    int h_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_75, term_i_69);
        t = h_14(t);
        LocalPopChoice(h_69);
      }
    else
      {
        t = d_69;
        {
          ATerm v_39 = NULL,w_39 = NULL;
          t = term_k_69;
          w_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_69, u_75);
          t = u_14(w_39, u_75, t);
          v_39 = t;
          t = SSL_perror(v_39);
          _fail(t);
        }
      }
  }
  n_75 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_14(o_75, t);
  m_75 = t;
  t = n_75;
  t = fclose_0_0(t);
  t = m_75;
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
      ATerm y_75 = NULL,a_76 = NULL;
      y_75 = t;
      t = (ATerm) ATinsert(ATempty, term_s_69);
      a_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_75, (ATerm) ATinsert(ATempty, term_s_69));
      t = i_14(y_75, a_76, t);
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
            ATerm v_69 = t;
            if((PushChoice() == 0))
              {
                ATerm b_76 = NULL,d_76 = NULL;
                b_76 = t;
                t = (ATerm) ATinsert(ATempty, term_y_57);
                d_76 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_76, (ATerm) ATinsert(ATempty, term_y_57));
                t = i_14(b_76, d_76, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_69;
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
  t = debug_1_0(p_27, t);
  return(t);
}
static ATerm p_27 (ATerm t)
{
  t = term_w_69;
  return(t);
}
static ATerm s_27 (ATerm t)
{
  t = debug_1_0(t_27, t);
  return(t);
}
static ATerm t_27 (ATerm t)
{
  t = term_a_70;
  return(t);
}
static ATerm v_27 (ATerm t)
{
  ATerm x_76 = NULL,z_76 = NULL,b_77 = NULL;
  x_76 = t;
  t = term_v_35;
  z_76 = t;
  t = (ATerm) ATinsert(ATempty, term_b_70);
  b_77 = t;
  t = SSL_printnl(z_76, b_77);
  t = x_76;
  return(t);
}
static ATerm w_27 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL,f_77 = NULL;
  if(match_cons(t, sym__3))
    {
      c_77 = ATgetArgument(t, 0);
      d_77 = ATgetArgument(t, 1);
      f_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_14(c_77, d_77, f_77, t);
  return(t);
}
static ATerm x_27 (ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL;
  g_77 = t;
  t = term_v_35;
  h_77 = t;
  t = (ATerm) ATinsert(ATempty, term_c_70);
  i_77 = t;
  t = SSL_printnl(h_77, i_77);
  t = g_77;
  return(t);
}
static ATerm y_27 (ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL,m_77 = NULL;
  j_77 = t;
  t = term_v_35;
  k_77 = t;
  t = (ATerm) ATinsert(ATempty, term_b_70);
  m_77 = t;
  t = SSL_printnl(k_77, m_77);
  t = j_77;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL,m_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL;
  e_76 = t;
  t = if_verbose5_1_0(k_27, t);
  {
    ATerm e_70 = t;
    if((PushChoice() == 0))
      {
        ATerm v_76 = NULL,w_76 = NULL;
        t = term_g_70;
        v_76 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, e_76);
        w_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_70, (ATerm) ATmakeAppl(sym_Imported_1, e_76));
        t = o_14(v_76, w_76, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_70;
      }
  }
  g_76 = t;
  t = term_g_70;
  p_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_70, term_j_70, (ATerm) ATinsert(ATempty, e_76));
  t = lookup_table_0_1(p_76, t);
  u_76 = t;
  t = term_j_70;
  q_76 = t;
  t = (ATerm) ATinsert(ATempty, e_76);
  s_76 = t;
  t = u_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(q_76, s_76, t_76, t);
  t = g_76;
  t = if_verbose4_1_0(s_27, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(v_27, t);
  f_76 = t;
  t = term_g_70;
  o_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_70, f_76);
  t = e_14(w_27, o_76, f_76, t);
  t = if_verbose6_1_0(x_27, t);
  t = term_g_70;
  h_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_70, (ATerm)ATmakeAppl(sym_Imported_1, e_76), (ATerm) ATempty);
  t = lookup_table_0_1(h_76, t);
  m_76 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, e_76);
  i_76 = t;
  t = (ATerm) ATempty;
  j_76 = t;
  t = m_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(i_76, j_76, k_76, t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_70, (ATerm)ATmakeAppl(sym_Imported_1, e_76), (ATerm) ATempty);
  t = if_verbose4_1_0(y_27, t);
  return(t);
}
ATerm filter_1_0 (ATerm p_101 (ATerm), ATerm t)
{
  ATerm d_78 = NULL,e_78 = NULL,g_78 = NULL;
  d_78 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_78;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_78 = ATgetFirst((ATermList) t);
          g_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_70 = t;
        int m_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_40 = NULL,z_40 = NULL,b_41 = NULL,l_18 = NULL;
            t = SSLgetAnnotations(d_78);
            m_40 = t;
            t = e_78;
            t = p_101(t);
            z_40 = t;
            t = g_78;
            t = filter_1_0(p_101, t);
            b_41 = t;
            t = (ATerm) ATinsert(CheckATermList(b_41), z_40);
            l_18 = t;
            t = SSLsetAnnotations(l_18, m_40);
            LocalPopChoice(m_70);
          }
        else
          {
            t = l_70;
            t = g_78;
            t = filter_1_0(p_101, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm t)
{
  static ATerm l_78 (ATerm t)
  {
    ATerm n_70 = t;
    int o_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_86(t);
        t = l_78(t);
        LocalPopChoice(o_70);
      }
    else
      {
        t = n_70;
        t = b_86(t);
      }
    return(t);
  }
  t = l_78(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm p_70 = t;
  int q_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_78 = NULL,n_78 = NULL;
      t = term_q_35;
      m_78 = t;
      t = term_r_70;
      n_78 = t;
      t = term_s_70;
      t = o_14(m_78, n_78, t);
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
            ATerm o_78 = NULL;
            t = term_v_70;
            o_78 = t;
            t = SSL_getenv(o_78);
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
  ATerm w_78 = NULL,y_78 = NULL;
  t = term_g_70;
  w_78 = t;
  t = term_x_70;
  y_78 = t;
  t = term_y_70;
  t = o_14(w_78, y_78, t);
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
  ATerm q_78 = NULL;
  t = if_verbose5_1_0(z_27, t);
  q_78 = t;
  {
    ATerm b_71 = t;
    int c_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_78 = NULL,u_78 = NULL;
        t = term_g_70;
        s_78 = t;
        t = term_j_70;
        u_78 = t;
        t = term_d_71;
        t = o_14(s_78, u_78, t);
        LocalPopChoice(c_71);
      }
    else
      {
        t = b_71;
        {
          ATerm v_78 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          v_78 = t;
          t = repeat_2_0(b_28, _id, t);
          t = v_78;
        }
      }
  }
  t = q_78;
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
  t = term_f_71;
  return(t);
}
static ATerm a_80 (ATerm d_79, ATerm t)
{
  ATerm h_79 = NULL,i_79 = NULL,k_79 = NULL;
  t = term_g_70;
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, d_79);
  k_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_70, (ATerm) ATmakeAppl(sym_Tool_1, d_79));
  t = o_14(i_79, k_79, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_71 = ATgetFirst((ATermList) t);
      if(match_cons(i_71, sym__2))
        {
          ATerm l_71 = ATgetArgument(i_71, 0);
          h_79 = ATgetArgument(i_71, 1);
        }
      else
        _fail(t);
      {
        ATerm j_71 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_79;
  return(t);
}
static ATerm h_28 (ATerm t)
{
  t = debug_1_0(i_28, t);
  return(t);
}
static ATerm i_28 (ATerm t)
{
  t = term_f_71;
  return(t);
}
static ATerm j_28 (ATerm t)
{
  t = term_g_70;
  t = table_getlist_0_0(t);
  t = debug_1_0(l_28, t);
  return(t);
}
static ATerm l_28 (ATerm t)
{
  t = term_m_71;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm n_71 = t;
  int o_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_79 = NULL,m_79 = NULL,n_79 = NULL;
      t = if_verbose5_1_0(e_28, t);
      t = xtc_load_0_0(t);
      n_79 = t;
      if(match_cons(t, sym__2))
        {
          l_79 = ATgetArgument(t, 0);
          m_79 = ATgetArgument(t, 1);
          {
            ATerm r_71 = t;
            int s_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_79 = NULL,t_79 = NULL,u_79 = NULL;
                t = term_g_70;
                t_79 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, l_79);
                u_79 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_70, (ATerm) ATmakeAppl(sym_Tool_1, l_79));
                t = o_14(t_79, u_79, t);
                {
                  static ATerm g_28 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((m_79 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((r_79 != NULL) && (r_79 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_79 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(g_28, t);
                }
                t = not_null(r_79);
                LocalPopChoice(s_71);
              }
            else
              {
                t = r_71;
                t = a_80(n_79, t);
              }
          }
        }
      else
        {
          t = a_80(n_79, t);
        }
      t = if_verbose5_1_0(h_28, t);
      LocalPopChoice(o_71);
    }
  else
    {
      t = n_71;
      {
        ATerm z_79 = NULL,d_42 = NULL,g_42 = NULL;
        z_79 = t;
        t = term_v_35;
        d_42 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_71), z_79), term_u_71);
        g_42 = t;
        t = SSL_printnl(d_42, g_42);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_71), z_79), term_u_71);
        t = if_verbose5_1_0(j_28, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm j_14 (ATerm b_49, ATerm a_49, ATerm t)
{
  ATerm c_80 = NULL,f_80 = NULL,g_80 = NULL,h_80 = NULL;
  t = b_49;
  {
    ATerm x_71 = t;
    int y_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_80 = NULL;
        t = term_q_35;
        j_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_35, b_49);
        t = o_14(j_80, b_49, t);
        LocalPopChoice(y_71);
      }
    else
      {
        t = x_71;
        t = (ATerm) ATempty;
      }
  }
  f_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_49, f_80);
  t = conc_0_0(t);
  c_80 = t;
  t = term_q_35;
  g_80 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, b_49, c_80);
  t = lookup_table_0_1(g_80, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(b_49, c_80, h_80, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, b_49, c_80);
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm q_80 = NULL,r_80 = NULL,t_80 = NULL,w_80 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL;
      t = term_x_36;
      t = p_0(t);
      x_80 = t;
      t = term_z_71;
      y_80 = t;
      t = term_a_72;
      z_80 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_71, term_a_72, x_80);
      t = p_14(y_80, z_80, x_80, t);
      _fail(t);
    }
  else
    {
      ATerm e_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_80 = ATgetFirst((ATermList) t);
          r_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_80;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_80 = ATgetFirst((ATermList) t);
          w_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_80;
      t = n_0(t);
      t = t_80;
      t = o_0(t);
      e_81 = t;
      t = (ATerm) ATinsert(CheckATermList(w_80), e_81);
    }
  return(t);
}
static ATerm m_28 (ATerm t)
{
  ATerm m_81 = NULL;
  m_81 = t;
  if(match_string(t, "-S"))
    {
      t = m_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_81;
    }
  return(t);
}
static ATerm n_28 (ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL;
  t = term_r_35;
  o_81 = t;
  t = term_l_35;
  p_81 = t;
  t = term_b_72;
  t = t_14(o_81, p_81, t);
  t = term_c_72;
  return(t);
}
static ATerm o_28 (ATerm t)
{
  t = term_g_72;
  return(t);
}
static ATerm p_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_28 (ATerm t)
{
  ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL;
  q_81 = t;
  t = SSL_string_to_int(q_81);
  r_81 = t;
  t = term_r_35;
  s_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_35, r_81);
  t = t_14(s_81, r_81, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_81);
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
  ATerm t_81 = NULL,u_81 = NULL;
  t = term_i_72;
  t_81 = t;
  t = term_x_36;
  u_81 = t;
  t = term_j_72;
  t = t_14(t_81, u_81, t);
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
      t = Option_3_0(m_28, n_28, o_28, t);
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
            t = ArgOption_3_0(p_28, q_28, r_28, t);
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
static ATerm k_14 (ATerm y_48, ATerm z_48, ATerm t)
{
  ATerm q_72 = t;
  int r_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_81 = NULL,w_81 = NULL,y_81 = NULL;
      t = term_q_35;
      y_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_q_35, y_48);
      t = o_14(y_81, y_48, t);
      t = term_q_35;
      v_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_q_35, y_48);
      t = lookup_table_0_1(v_81, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          w_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_14(y_48, w_81, t);
      t = (ATerm) ATmakeAppl(sym__2, term_q_35, y_48);
      LocalPopChoice(r_72);
    }
  else
    {
      t = q_72;
      t = (ATerm) ATmakeAppl(sym__2, y_48, z_48);
      t = t_14(y_48, z_48, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm d_94 (ATerm), ATerm t)
{
  static ATerm x_82 (ATerm t)
  {
    ATerm u_82 = NULL,v_82 = NULL,w_82 = NULL;
    w_82 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_82 = ATgetFirst((ATermList) t);
        v_82 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_42 = NULL,v_42 = NULL,p_18 = NULL;
          t = SSLgetAnnotations(w_82);
          q_42 = t;
          t = v_82;
          t = x_82(t);
          v_42 = t;
          t = (ATerm) ATinsert(CheckATermList(v_42), u_82);
          p_18 = t;
          t = SSLsetAnnotations(p_18, q_42);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_82;
        t = d_94(t);
      }
    return(t);
  }
  t = x_82(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL;
  c_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_82;
    }
  else
    {
      static ATerm v_28 (ATerm t)
      {
        t = not_null(e_82);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_82 = ATgetFirst((ATermList) t);
          if(((e_82 != NULL) && (e_82 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_82;
      t = at_end_1_0(v_28, t);
    }
  return(t);
}
static ATerm j_83 (ATerm b_83, ATerm t)
{
  ATerm c_83 = NULL;
  t = SSL_explode_term(b_83);
  if(match_cons(t, sym__2))
    {
      ATerm t_72 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_72) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_83;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL;
  g_83 = t;
  if(match_cons(t, sym__2))
    {
      e_83 = ATgetArgument(t, 0);
      f_83 = ATgetArgument(t, 1);
      {
        ATerm u_72 = t;
        int v_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_29 (ATerm t)
            {
              t = f_83;
              return(t);
            }
            t = e_83;
            t = at_end_1_0(a_29, t);
            LocalPopChoice(v_72);
          }
        else
          {
            t = u_72;
            t = j_83(g_83, t);
          }
      }
    }
  else
    {
      t = j_83(g_83, t);
    }
  return(t);
}
static ATerm l_14 (ATerm c_49, ATerm d_49, ATerm t)
{
  ATerm k_83 = NULL,l_83 = NULL,m_83 = NULL,n_83 = NULL;
  t = c_49;
  {
    ATerm w_72 = t;
    int x_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_83 = NULL;
        t = term_q_35;
        p_83 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_35, c_49);
        t = o_14(p_83, c_49, t);
        LocalPopChoice(x_72);
      }
    else
      {
        t = w_72;
        t = (ATerm) ATempty;
      }
  }
  l_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_83, d_49);
  t = conc_0_0(t);
  k_83 = t;
  t = term_q_35;
  m_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, c_49, k_83);
  t = lookup_table_0_1(m_83, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(c_49, k_83, n_83, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, c_49, k_83);
  return(t);
}
static ATerm b_29 (ATerm t)
{
  ATerm v_83 = NULL;
  v_83 = t;
  if(match_string(t, "-o"))
    {
      t = v_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_83;
    }
  return(t);
}
static ATerm e_29 (ATerm t)
{
  ATerm w_83 = NULL,x_83 = NULL;
  w_83 = t;
  t = term_a_36;
  x_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_36, w_83);
  t = t_14(x_83, w_83, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_83);
  return(t);
}
static ATerm g_29 (ATerm t)
{
  t = term_y_72;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_29, e_29, g_29, t);
  return(t);
}
static ATerm m_29 (ATerm t)
{
  ATerm a_84 = NULL;
  a_84 = t;
  if(match_string(t, "-i"))
    {
      t = a_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_84;
    }
  return(t);
}
static ATerm n_29 (ATerm t)
{
  ATerm b_84 = NULL,c_84 = NULL;
  b_84 = t;
  t = term_z_54;
  c_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_54, b_84);
  t = t_14(c_84, b_84, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_84);
  return(t);
}
static ATerm o_29 (ATerm t)
{
  t = term_b_73;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_29, n_29, o_29, t);
  return(t);
}
static ATerm p_29 (ATerm t)
{
  ATerm o_84 = NULL;
  o_84 = t;
  if(match_string(t, "-I"))
    {
      t = o_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = o_84;
    }
  return(t);
}
static ATerm s_29 (ATerm t)
{
  ATerm p_84 = NULL,r_84 = NULL,s_84 = NULL;
  p_84 = t;
  t = term_h_60;
  r_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_84), term_h_60);
  s_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_60, (ATerm) ATinsert(ATinsert(ATempty, p_84), term_h_60));
  t = l_14(r_84, s_84, t);
  t = term_x_36;
  return(t);
}
static ATerm c_30 (ATerm t)
{
  t = term_c_73;
  return(t);
}
static ATerm d_30 (ATerm t)
{
  ATerm v_84 = NULL;
  v_84 = t;
  if(match_string(t, "--main"))
    {
      t = v_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = v_84;
    }
  return(t);
}
static ATerm g_30 (ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL;
  w_84 = t;
  t = term_e_58;
  x_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_58, w_84);
  t = t_14(x_84, w_84, t);
  t = term_x_36;
  return(t);
}
static ATerm h_30 (ATerm t)
{
  t = term_d_73;
  return(t);
}
static ATerm k_30 (ATerm t)
{
  ATerm y_84 = NULL;
  y_84 = t;
  if(match_string(t, "--library"))
    {
      t = y_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = y_84;
    }
  return(t);
}
static ATerm o_30 (ATerm t)
{
  ATerm z_84 = NULL,a_85 = NULL;
  t = term_t_37;
  z_84 = t;
  t = term_x_36;
  a_85 = t;
  t = term_e_73;
  t = t_14(z_84, a_85, t);
  t = term_x_36;
  return(t);
}
static ATerm z_30 (ATerm t)
{
  t = term_g_73;
  return(t);
}
static ATerm a_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_31 (ATerm t)
{
  ATerm b_85 = NULL,c_85 = NULL,d_85 = NULL;
  b_85 = t;
  t = term_o_37;
  c_85 = t;
  t = (ATerm) ATinsert(ATempty, b_85);
  d_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_37, (ATerm) ATinsert(ATempty, b_85));
  t = l_14(c_85, d_85, t);
  t = term_x_36;
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
  ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL;
  e_85 = t;
  t = term_j_36;
  f_85 = t;
  t = (ATerm) ATinsert(ATempty, e_85);
  g_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_36, (ATerm) ATinsert(ATempty, e_85));
  t = j_14(f_85, g_85, t);
  t = term_x_36;
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
  ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL;
  i_85 = t;
  t = term_c_36;
  j_85 = t;
  t = (ATerm) ATinsert(ATempty, i_85);
  k_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_36, (ATerm) ATinsert(ATempty, i_85));
  t = j_14(j_85, k_85, t);
  t = term_x_36;
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
  ATerm l_85 = NULL,m_85 = NULL;
  t = term_l_36;
  l_85 = t;
  t = term_x_36;
  m_85 = t;
  t = term_o_73;
  t = t_14(l_85, m_85, t);
  t = term_x_36;
  return(t);
}
static ATerm m_31 (ATerm t)
{
  t = term_p_73;
  return(t);
}
static ATerm o_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_31 (ATerm t)
{
  ATerm n_85 = NULL,q_85 = NULL;
  t = term_z_59;
  n_85 = t;
  t = term_x_36;
  q_85 = t;
  t = term_q_73;
  t = t_14(n_85, q_85, t);
  t = term_x_36;
  return(t);
}
static ATerm q_31 (ATerm t)
{
  t = term_r_73;
  return(t);
}
static ATerm r_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_31 (ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL;
  t = term_l_55;
  r_85 = t;
  t = term_x_36;
  s_85 = t;
  t = term_s_73;
  t = t_14(r_85, s_85, t);
  t = term_x_36;
  return(t);
}
static ATerm t_31 (ATerm t)
{
  t = term_t_73;
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
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL;
  t_85 = t;
  t = SSL_string_to_int(t_85);
  u_85 = t;
  t = term_r_40;
  v_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_40, u_85);
  t = t_14(v_85, u_85, t);
  t = term_x_36;
  return(t);
}
static ATerm w_31 (ATerm t)
{
  t = term_u_73;
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
  ATerm y_85 = NULL,z_85 = NULL,d_86 = NULL;
  y_85 = t;
  t = SSL_string_to_int(y_85);
  z_85 = t;
  t = term_x_40;
  d_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_40, z_85);
  t = t_14(d_86, z_85, t);
  t = term_x_36;
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
  ATerm e_86 = NULL,f_86 = NULL;
  t = term_g_43;
  e_86 = t;
  t = term_x_36;
  f_86 = t;
  t = term_y_73;
  t = k_14(e_86, f_86, t);
  t = term_x_36;
  return(t);
}
static ATerm c_32 (ATerm t)
{
  t = term_z_73;
  return(t);
}
static ATerm d_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_32 (ATerm t)
{
  ATerm g_86 = NULL,h_86 = NULL;
  g_86 = t;
  if(match_string(t, "old"))
    {
      t = g_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = g_86;
    }
  t = term_f_56;
  h_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_56, g_86);
  t = t_14(h_86, g_86, t);
  t = term_x_36;
  return(t);
}
static ATerm i_32 (ATerm t)
{
  t = term_a_74;
  return(t);
}
static ATerm j_32 (ATerm t)
{
  ATerm j_86 = NULL;
  j_86 = t;
  if(match_string(t, "-h"))
    {
      t = j_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = j_86;
    }
  return(t);
}
static ATerm k_32 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL;
  t = term_d_74;
  k_86 = t;
  t = term_x_36;
  l_86 = t;
  t = term_f_74;
  t = t_14(k_86, l_86, t);
  t = term_x_36;
  return(t);
}
static ATerm m_32 (ATerm t)
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
static ATerm p_32 (ATerm t)
{
  ATerm m_86 = NULL,n_86 = NULL;
  t = term_k_74;
  m_86 = t;
  t = term_x_36;
  n_86 = t;
  t = term_l_74;
  t = t_14(m_86, n_86, t);
  t = term_x_36;
  return(t);
}
static ATerm q_32 (ATerm t)
{
  t = term_m_74;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  ATerm q_86 = NULL;
  q_86 = t;
  if(match_string(t, "-v"))
    {
      t = q_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = q_86;
    }
  return(t);
}
static ATerm t_32 (ATerm t)
{
  ATerm r_86 = NULL,u_86 = NULL;
  t = term_n_74;
  r_86 = t;
  t = term_x_36;
  u_86 = t;
  t = term_p_74;
  t = t_14(r_86, u_86, t);
  t = term_x_36;
  return(t);
}
static ATerm u_32 (ATerm t)
{
  t = term_u_74;
  return(t);
}
static ATerm w_32 (ATerm t)
{
  ATerm v_86 = NULL;
  v_86 = t;
  if(match_string(t, "--warning"))
    {
      t = v_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = v_86;
    }
  return(t);
}
static ATerm x_32 (ATerm t)
{
  ATerm w_86 = NULL;
  w_86 = t;
  {
    ATerm w_74 = t;
    int y_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_86 = NULL,y_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL,b_19 = NULL;
        t = term_q_35;
        a_87 = t;
        t = term_d_55;
        b_87 = t;
        t = term_e_55;
        t = o_14(a_87, b_87, t);
        h_87 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_87 = ATgetFirst((ATermList) t);
            g_87 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_87);
        c_87 = t;
        t = f_87;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = g_87;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(g_87), f_87);
        b_19 = t;
        t = SSLsetAnnotations(b_19, c_87);
        t = term_d_55;
        x_86 = t;
        t = (ATerm) ATinsert(ATempty, w_86);
        y_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_55, (ATerm) ATinsert(ATempty, w_86));
        t = t_14(x_86, y_86, t);
        LocalPopChoice(y_74);
      }
    else
      {
        t = w_74;
        {
          ATerm k_87 = NULL,l_87 = NULL;
          t = term_d_55;
          k_87 = t;
          t = (ATerm) ATinsert(ATempty, w_86);
          l_87 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_55, (ATerm) ATinsert(ATempty, w_86));
          t = j_14(k_87, l_87, t);
        }
      }
  }
  t = term_x_36;
  return(t);
}
static ATerm z_32 (ATerm t)
{
  t = term_z_74;
  return(t);
}
static ATerm a_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_33 (ATerm t)
{
  ATerm m_87 = NULL,n_87 = NULL,o_87 = NULL;
  m_87 = t;
  t = term_x_55;
  n_87 = t;
  t = term_t_38;
  o_87 = t;
  t = term_a_75;
  t = t_14(n_87, o_87, t);
  t = m_87;
  return(t);
}
static ATerm c_33 (ATerm t)
{
  t = term_x_55;
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
  ATerm p_87 = NULL,q_87 = NULL,r_87 = NULL;
  p_87 = t;
  t = term_c_56;
  q_87 = t;
  t = term_l_35;
  r_87 = t;
  t = term_c_75;
  t = t_14(q_87, r_87, t);
  t = p_87;
  return(t);
}
static ATerm g_33 (ATerm t)
{
  t = term_c_56;
  return(t);
}
static ATerm h_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_33 (ATerm t)
{
  ATerm s_87 = NULL,t_87 = NULL;
  t = term_z_60;
  s_87 = t;
  t = term_x_36;
  t_87 = t;
  t = term_g_75;
  t = t_14(s_87, t_87, t);
  t = term_x_36;
  return(t);
}
static ATerm j_33 (ATerm t)
{
  t = term_i_75;
  return(t);
}
ATerm strc_options_0_0 (ATerm t)
{
  ATerm l_75 = t;
  int p_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(p_75);
    }
  else
    {
      t = l_75;
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
              ATerm s_75 = t;
              int t_75 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(p_29, s_29, c_30, t);
                  LocalPopChoice(t_75);
                }
              else
                {
                  t = s_75;
                  {
                    ATerm v_75 = t;
                    int w_75 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(d_30, g_30, h_30, t);
                        LocalPopChoice(w_75);
                      }
                    else
                      {
                        t = v_75;
                        {
                          ATerm x_75 = t;
                          int z_75 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(k_30, o_30, z_30, t);
                              LocalPopChoice(z_75);
                            }
                          else
                            {
                              t = x_75;
                              {
                                ATerm c_76 = t;
                                int l_76 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(a_31, b_31, c_31, t);
                                    LocalPopChoice(l_76);
                                  }
                                else
                                  {
                                    t = c_76;
                                    {
                                      ATerm n_76 = t;
                                      int r_76 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(d_31, e_31, f_31, t);
                                          LocalPopChoice(r_76);
                                        }
                                      else
                                        {
                                          t = n_76;
                                          {
                                            ATerm y_76 = t;
                                            int a_77 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(h_31, i_31, j_31, t);
                                                LocalPopChoice(a_77);
                                              }
                                            else
                                              {
                                                t = y_76;
                                                {
                                                  ATerm e_77 = t;
                                                  int l_77 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(k_31, l_31, m_31, t);
                                                      LocalPopChoice(l_77);
                                                    }
                                                  else
                                                    {
                                                      t = e_77;
                                                      {
                                                        ATerm n_77 = t;
                                                        int o_77 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(o_31, p_31, q_31, t);
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
                                                                  t = Option_3_0(r_31, s_31, t_31, t);
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
                                                                                          t = ArgOption_3_0(d_32, e_32, i_32, t);
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
                                                                                                  ATerm b_78 = t;
                                                                                                  int c_78 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(j_32, k_32, m_32, t);
                                                                                                      LocalPopChoice(c_78);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = b_78;
                                                                                                      {
                                                                                                        ATerm f_78 = t;
                                                                                                        int h_78 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(o_32, p_32, q_32, t);
                                                                                                            LocalPopChoice(h_78);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = f_78;
                                                                                                            {
                                                                                                              ATerm i_78 = t;
                                                                                                              int j_78 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Option_3_0(s_32, t_32, u_32, t);
                                                                                                                  LocalPopChoice(j_78);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = i_78;
                                                                                                                  {
                                                                                                                    ATerm k_78 = t;
                                                                                                                    int p_78 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = ArgOption_3_0(w_32, x_32, z_32, t);
                                                                                                                        LocalPopChoice(p_78);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = k_78;
                                                                                                                        {
                                                                                                                          ATerm r_78 = t;
                                                                                                                          int t_78 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Option_3_0(a_33, b_33, c_33, t);
                                                                                                                              LocalPopChoice(t_78);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = r_78;
                                                                                                                              {
                                                                                                                                ATerm x_78 = t;
                                                                                                                                int z_78 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Option_3_0(d_33, e_33, g_33, t);
                                                                                                                                    LocalPopChoice(z_78);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = x_78;
                                                                                                                                    t = Option_3_0(h_33, i_33, j_33, t);
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
static ATerm m_14 (ATerm n_57, ATerm o_57, ATerm t)
{
  ATerm u_87 = NULL;
  t = SSL_hashtable_remove(o_57, n_57);
  u_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_87);
  return(t);
}
static ATerm n_14 (ATerm s_57, ATerm t)
{
  ATerm v_87 = NULL;
  t = SSL_hashtable_destroy(s_57);
  v_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_87);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL;
  w_87 = t;
  t = table_hashtable_0_0(t);
  x_87 = t;
  t = lookup_table_0_1(w_87, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_14(z_87, t);
  t = x_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_14(w_87, y_87, t);
  t = w_87;
  return(t);
}
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_79), term_l_66), term_v_79), term_s_79), term_q_79), term_l_66), term_p_79), term_o_79), term_j_79), term_g_79), term_f_79), term_e_79), term_c_79), term_b_79), term_a_79);
  return(t);
}
ATerm map_1_0 (ATerm m_93 (ATerm), ATerm t)
{
  static ATerm o_88 (ATerm t)
  {
    ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL;
    l_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_88;
      }
    else
      {
        ATerm h_43 = NULL,l_43 = NULL,n_43 = NULL,d_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_88 = ATgetFirst((ATermList) t);
            n_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_88);
        h_43 = t;
        t = m_88;
        t = m_93(t);
        l_43 = t;
        t = n_88;
        t = o_88(t);
        n_43 = t;
        t = (ATerm) ATinsert(CheckATermList(n_43), l_43);
        d_19 = t;
        t = SSLsetAnnotations(d_19, h_43);
      }
    return(t);
  }
  t = o_88(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm r_88 = NULL,s_88 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_88 = ATgetFirst((ATermList) t);
      s_88 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_88 = NULL,x_88 = NULL;
        static ATerm l_33 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_88)), not_null(x_88));
          return(t);
        }
        t = s_88;
        t = k_0(t);
        if(((w_88 != NULL) && (w_88 != t)))
          _fail(t);
        else
          w_88 = t;
        t = r_88;
        t = i_0(t);
        if(((x_88 != NULL) && (x_88 != t)))
          _fail(t);
        else
          x_88 = t;
        t = s_88;
        t = reverse_acc_2_0(i_0, l_33, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_36;
      t = k_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_88 = NULL;
  t = term_x_36;
  t = g_0(t);
  y_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_80), y_88), term_e_80), term_l_66), term_d_80), term_l_66), term_b_80), term_y_79), term_l_66), term_x_79);
  return(t);
}
static ATerm o_33 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_33 (ATerm t)
{
  ATerm t_89 = NULL;
  t_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_89), term_k_80);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_89 = NULL,h_89 = NULL,i_89 = NULL;
  ATerm l_80 = t;
  int m_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_89 = NULL,k_89 = NULL;
      t = term_q_35;
      j_89 = t;
      t = term_n_80;
      k_89 = t;
      t = term_o_80;
      t = o_14(j_89, k_89, t);
      e_89 = t;
      LocalPopChoice(m_80);
    }
  else
    {
      t = l_80;
      {
        static ATerm m_33 (ATerm t)
        {
          ATerm l_89 = NULL,o_89 = NULL,p_89 = NULL,k_19 = NULL;
          p_89 = t;
          if(match_cons(t, sym_Program_1))
            {
              o_89 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_89);
          l_89 = t;
          t = o_89;
          if(((e_89 != NULL) && (e_89 != t)))
            _fail(t);
          else
            e_89 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, o_89);
          k_19 = t;
          t = SSLsetAnnotations(k_19, l_89);
          return(t);
        }
        t = fetch_1_0(m_33, t);
      }
    }
  {
    ATerm p_80 = t;
    int s_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_33 (ATerm t)
        {
          t = not_null(e_89);
          return(t);
        }
        t = short_description_1_0(n_33, t);
        t = echo_0_0(t);
        LocalPopChoice(s_80);
      }
    else
      {
        t = p_80;
      }
  }
  t = term_u_80;
  t = echo_0_0(t);
  t = term_z_71;
  h_89 = t;
  t = term_a_72;
  i_89 = t;
  t = term_v_80;
  t = o_14(h_89, i_89, t);
  t = reverse_acc_2_0(_id, o_33, t);
  t = map_1_0(p_33, t);
  {
    ATerm a_81 = t;
    int b_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_89 = NULL;
        static ATerm q_33 (ATerm t)
        {
          t = not_null(e_89);
          return(t);
        }
        t = long_description_1_0(q_33, t);
        w_89 = t;
        t = (ATerm) ATinsert(CheckATermList(w_89), term_l_66);
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
ATerm fetch_1_0 (ATerm w_93 (ATerm), ATerm t)
{
  static ATerm z_90 (ATerm t)
  {
    ATerm w_90 = NULL,x_90 = NULL,y_90 = NULL;
    w_90 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_90 = ATgetFirst((ATermList) t);
        y_90 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_81 = t;
      int d_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_43 = NULL,e_44 = NULL,m_19 = NULL;
          t = SSLgetAnnotations(w_90);
          z_43 = t;
          t = x_90;
          t = w_93(t);
          e_44 = t;
          t = (ATerm) ATinsert(CheckATermList(y_90), e_44);
          m_19 = t;
          t = SSLsetAnnotations(m_19, z_43);
          LocalPopChoice(d_81);
        }
      else
        {
          t = c_81;
          {
            ATerm x_44 = NULL,e_45 = NULL,n_19 = NULL;
            t = SSLgetAnnotations(w_90);
            x_44 = t;
            t = y_90;
            t = z_90(t);
            e_45 = t;
            t = (ATerm) ATinsert(CheckATermList(e_45), x_90);
            n_19 = t;
            t = SSLsetAnnotations(n_19, x_44);
          }
        }
    }
    return(t);
  }
  t = z_90(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_91 = NULL,f_91 = NULL,g_91 = NULL;
  e_91 = t;
  {
    ATerm f_81 = t;
    int g_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_91;
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
            t = e_91;
          }
        LocalPopChoice(g_81);
      }
    else
      {
        t = f_81;
        t = (ATerm) ATinsert(ATempty, e_91);
      }
  }
  f_91 = t;
  t = term_a_37;
  g_91 = t;
  t = SSL_printnl(g_91, f_91);
  t = e_91;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm m_91 = NULL,p_91 = NULL;
  t = term_q_35;
  m_91 = t;
  t = term_n_80;
  p_91 = t;
  t = term_o_80;
  t = o_14(m_91, p_91, t);
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
  ATerm q_91 = NULL,r_91 = NULL;
  t = term_j_81;
  q_91 = t;
  t = term_x_36;
  r_91 = t;
  t = term_k_81;
  t = t_14(q_91, r_91, t);
  return(t);
}
static ATerm u_33 (ATerm t)
{
  t = term_l_81;
  return(t);
}
static ATerm v_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_33 (ATerm t)
{
  ATerm s_91 = NULL,w_91 = NULL,x_91 = NULL,y_91 = NULL;
  t = term_j_81;
  x_91 = t;
  t = term_x_36;
  y_91 = t;
  t = term_k_81;
  t = t_14(x_91, y_91, t);
  t = term_n_74;
  s_91 = t;
  t = term_x_36;
  w_91 = t;
  t = term_p_74;
  t = t_14(s_91, w_91, t);
  t = term_n_81;
  return(t);
}
static ATerm a_34 (ATerm t)
{
  t = term_x_81;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_81 = t;
  int a_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_33, t_33, u_33, t);
      LocalPopChoice(a_82);
    }
  else
    {
      t = z_81;
      t = Option_3_0(v_33, z_33, a_34, t);
    }
  return(t);
}
static ATerm p_14 (ATerm q_53, ATerm r_53, ATerm p_53, ATerm t)
{
  ATerm f_92 = NULL,g_92 = NULL,h_92 = NULL,j_92 = NULL,l_92 = NULL;
  f_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_53, r_53);
  {
    ATerm b_82 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, q_53, r_53);
        t = o_14(q_53, r_53, t);
        LocalPopChoice(f_82);
      }
    else
      {
        t = b_82;
        t = (ATerm) ATempty;
      }
  }
  g_92 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_53, r_53, (ATerm) ATinsert(CheckATermList(g_92), p_53));
  t = lookup_table_0_1(q_53, t);
  l_92 = t;
  t = (ATerm) ATinsert(CheckATermList(g_92), p_53);
  h_92 = t;
  t = l_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(r_53, h_92, j_92, t);
  t = f_92;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm a_93 = NULL,e_93 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_93 = NULL,g_93 = NULL,h_93 = NULL;
      t = term_x_36;
      t = e_0(t);
      f_93 = t;
      t = term_z_71;
      g_93 = t;
      t = term_a_72;
      h_93 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_71, term_a_72, f_93);
      t = p_14(g_93, h_93, f_93, t);
      _fail(t);
    }
  else
    {
      ATerm p_93 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_93 = ATgetFirst((ATermList) t);
          e_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_93;
      t = c_0(t);
      t = term_x_36;
      t = d_0(t);
      p_93 = t;
      t = (ATerm) ATinsert(CheckATermList(e_93), p_93);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_63 (ATerm), ATerm i_63 (ATerm), ATerm t)
{
  ATerm q_93 = NULL,r_93 = NULL,t_93 = NULL,u_93 = NULL,c_94 = NULL,f_94 = NULL,s_19 = NULL;
  f_94 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_93 = ATgetFirst((ATermList) t);
      t_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_94);
  q_93 = t;
  t = r_93;
  t = h_63(t);
  u_93 = t;
  t = t_93;
  t = i_63(t);
  c_94 = t;
  t = (ATerm) ATinsert(CheckATermList(c_94), u_93);
  s_19 = t;
  t = SSLsetAnnotations(s_19, q_93);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_113 (ATerm), ATerm t)
{
  ATerm m_94 = NULL,n_94 = NULL,o_94 = NULL,q_94 = NULL,s_94 = NULL,x_94 = NULL,u_19 = NULL;
  m_94 = t;
  {
    ATerm i_82 = t;
    int j_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_82;
        t = v_113(t);
        LocalPopChoice(j_82);
      }
    else
      {
        t = i_82;
      }
  }
  t = m_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_94 = ATgetFirst((ATermList) t);
      q_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_94);
  n_94 = t;
  t = term_n_80;
  x_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_80, o_94);
  t = t_14(x_94, o_94, t);
  t = q_94;
  {
    static ATerm k_95 (ATerm t)
    {
      ATerm l_82 = t;
      int m_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_82 = t;
          int o_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_95 = NULL;
              b_95 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_95;
              LocalPopChoice(o_82);
            }
          else
            {
              t = n_82;
              t = v_113(t);
              t = Cons_2_0(_id, k_95, t);
            }
          LocalPopChoice(m_82);
        }
      else
        {
          t = l_82;
          {
            ATerm e_95 = NULL,h_95 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_95 = ATgetFirst((ATermList) t);
                h_95 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_95), (ATerm) ATmakeAppl(sym_Undefined_1, e_95));
          }
        }
      return(t);
    }
    t = k_95(t);
  }
  s_94 = t;
  t = (ATerm) ATinsert(CheckATermList(s_94), (ATerm) ATmakeAppl(sym_Program_1, o_94));
  u_19 = t;
  t = SSLsetAnnotations(u_19, n_94);
  return(t);
}
static ATerm i_34 (ATerm t)
{
  ATerm o_96 = NULL;
  o_96 = t;
  if(match_string(t, "--help"))
    {
      t = o_96;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_96;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_96;
        }
    }
  return(t);
}
static ATerm n_34 (ATerm t)
{
  ATerm p_96 = NULL,s_96 = NULL;
  t = term_d_74;
  p_96 = t;
  t = term_x_36;
  s_96 = t;
  t = term_f_74;
  t = t_14(p_96, s_96, t);
  t = term_p_82;
  return(t);
}
static ATerm r_34 (ATerm t)
{
  t = term_q_82;
  return(t);
}
static ATerm s_34 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_113 (ATerm), ATerm t)
{
  ATerm a_96 = NULL,b_96 = NULL,c_96 = NULL,g_96 = NULL,i_96 = NULL,l_96 = NULL,m_96 = NULL,n_96 = NULL;
  c_96 = t;
  t = term_z_71;
  g_96 = t;
  t = term_r_82;
  t = lookup_table_0_1(g_96, t);
  n_96 = t;
  t = term_a_72;
  i_96 = t;
  t = (ATerm) ATempty;
  l_96 = t;
  t = n_96;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(i_96, l_96, m_96, t);
  t = c_96;
  {
    static ATerm b_34 (ATerm t)
    {
      ATerm s_82 = t;
      int t_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_113(t);
          LocalPopChoice(t_82);
        }
      else
        {
          t = s_82;
          {
            ATerm y_82 = t;
            int z_82 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_34, n_34, r_34, t);
                LocalPopChoice(z_82);
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
    t = parse_options_p__1_0(b_34, t);
  }
  {
    ATerm a_83 = t;
    int d_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_97 = NULL;
        h_97 = t;
        {
          ATerm h_83 = t;
          int i_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_45 = NULL;
              t = h_97;
              {
                ATerm o_83 = t;
                int q_83 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_45 = NULL,t_45 = NULL;
                    t = term_q_35;
                    r_45 = t;
                    t = term_d_74;
                    t_45 = t;
                    t = term_r_83;
                    t = o_14(r_45, t_45, t);
                    LocalPopChoice(q_83);
                  }
                else
                  {
                    t = o_83;
                    t = fetch_1_0(s_34, t);
                  }
              }
              t = h_97;
              t = default_system_usage_0_0(t);
              t = term_l_35;
              n_45 = t;
              t = SSL_exit(n_45);
              LocalPopChoice(i_83);
            }
          else
            {
              t = h_83;
              {
                ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
                t = term_q_35;
                d_46 = t;
                t = term_j_81;
                e_46 = t;
                t = term_s_83;
                t = o_14(d_46, e_46, t);
                t = h_97;
                t = default_system_about_0_0(t);
                t = term_l_35;
                c_46 = t;
                t = SSL_exit(c_46);
              }
            }
        }
        LocalPopChoice(d_83);
      }
    else
      {
        t = a_83;
        {
          ATerm t_83 = t;
          int u_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_97 = NULL,k_97 = NULL,n_97 = NULL;
              static ATerm w_34 (ATerm t)
              {
                ATerm q_97 = NULL,s_97 = NULL,v_97 = NULL,y_19 = NULL;
                v_97 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_97 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_97);
                q_97 = t;
                t = s_97;
                if(((a_96 != NULL) && (a_96 != t)))
                  _fail(t);
                else
                  a_96 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_97);
                y_19 = t;
                t = SSLsetAnnotations(y_19, q_97);
                return(t);
              }
              t = fetch_1_0(w_34, t);
              t = term_v_35;
              k_97 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_96)), term_y_83);
              n_97 = t;
              t = SSL_printnl(k_97, n_97);
              t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_96)), term_y_83));
              t = default_system_usage_0_0(t);
              t = term_t_38;
              j_97 = t;
              t = SSL_exit(j_97);
              LocalPopChoice(u_83);
            }
          else
            {
              t = t_83;
            }
        }
      }
  }
  b_96 = t;
  t = term_z_71;
  t = table_destroy_0_0(t);
  t = b_96;
  return(t);
}
static ATerm r_14 (ATerm i_57, ATerm j_57, ATerm k_57, ATerm t)
{
  ATerm f_98 = NULL;
  t = SSL_hashtable_put(k_57, i_57, j_57);
  f_98 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_98);
  return(t);
}
static ATerm s_14 (ATerm l_57, ATerm m_57, ATerm t)
{
  t = SSL_hashtable_get(m_57, l_57);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_57, ATerm r_57, ATerm t)
{
  ATerm h_98 = NULL;
  t = SSL_hashtable_create(q_57, r_57);
  h_98 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_98);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm i_98 = NULL,j_98 = NULL,m_98 = NULL,o_98 = NULL,p_98 = NULL;
  i_98 = t;
  t = term_z_83;
  o_98 = t;
  t = term_d_84;
  p_98 = t;
  t = i_98;
  t = new_hashtable_0_2(o_98, p_98, t);
  j_98 = t;
  t = i_98;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(i_98, j_98, m_98, t);
  t = i_98;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm q_98 = NULL;
  t = SSL_table_hashtable();
  q_98 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_98);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_55, ATerm t)
{
  ATerm e_99 = NULL;
  t = table_hashtable_0_0(t);
  e_99 = t;
  {
    ATerm e_84 = t;
    int f_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_46 = NULL;
        t = e_99;
        if(match_cons(t, sym_Hashtable_1))
          {
            i_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_14(c_55, i_46, t);
        LocalPopChoice(f_84);
      }
    else
      {
        t = e_84;
        {
          ATerm y_46 = NULL;
          t = c_55;
          t = table_create_0_0(t);
          t = e_99;
          if(match_cons(t, sym_Hashtable_1))
            {
              y_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_14(c_55, y_46, t);
        }
      }
  }
  return(t);
}
static ATerm t_14 (ATerm v_48, ATerm w_48, ATerm t)
{
  ATerm z_99 = NULL,b_100 = NULL;
  t = term_q_35;
  z_99 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, v_48, w_48);
  t = lookup_table_0_1(z_99, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(v_48, w_48, b_100, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, v_48, w_48);
  return(t);
}
static ATerm u_14 (ATerm v_37, ATerm w_37, ATerm t)
{
  t = SSL_strcat(v_37, w_37);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm v_100 = NULL,y_100 = NULL;
  y_100 = t;
  t = SSL_explode_string(y_100);
  {
    ATerm g_84 = t;
    int h_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm i_102 (ATerm t)
        {
          ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL;
          f_102 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_102 = ATgetFirst((ATermList) t);
              h_102 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm i_84 = t;
            int j_84 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_47 = NULL,j_47 = NULL,e_20 = NULL;
                t = SSLgetAnnotations(f_102);
                g_47 = t;
                t = h_102;
                t = i_102(t);
                j_47 = t;
                t = (ATerm) ATinsert(CheckATermList(j_47), g_102);
                e_20 = t;
                t = SSLsetAnnotations(e_20, g_47);
                LocalPopChoice(j_84);
              }
            else
              {
                t = i_84;
                {
                  ATerm v_47 = NULL,g_20 = NULL;
                  t = SSLgetAnnotations(f_102);
                  v_47 = t;
                  t = g_102;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, g_102);
                  g_20 = t;
                  t = SSLsetAnnotations(g_20, v_47);
                }
              }
          }
          return(t);
        }
        t = i_102(t);
        LocalPopChoice(h_84);
      }
    else
      {
        t = g_84;
        t = (ATerm) ATempty;
      }
  }
  v_100 = t;
  t = SSL_implode_string(v_100);
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
  ATerm m_102 = NULL,n_102 = NULL,o_102 = NULL,p_102 = NULL,z_102 = NULL,c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL,i_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL,r_103 = NULL,s_103 = NULL,v_103 = NULL,w_103 = NULL,x_103 = NULL,y_103 = NULL,z_103 = NULL,a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL,g_104 = NULL,h_104 = NULL,i_104 = NULL,j_104 = NULL,l_104 = NULL,p_104 = NULL,s_104 = NULL,t_104 = NULL;
  m_102 = t;
  t = term_c_66;
  s_104 = t;
  t = term_k_84;
  t_104 = t;
  t = term_l_84;
  t = t_14(s_104, t_104, t);
  t = term_r_35;
  l_104 = t;
  t = term_t_38;
  p_104 = t;
  t = term_m_84;
  t = t_14(l_104, p_104, t);
  t = term_r_40;
  i_104 = t;
  t = term_l_35;
  j_104 = t;
  t = term_n_84;
  t = t_14(i_104, j_104, t);
  t = term_x_40;
  g_104 = t;
  t = term_l_42;
  h_104 = t;
  t = term_q_84;
  t = t_14(g_104, h_104, t);
  t = term_h_60;
  e_104 = t;
  t = (ATerm) ATempty;
  f_104 = t;
  t = term_h_85;
  t = t_14(e_104, f_104, t);
  t = term_o_37;
  c_104 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_85), term_o_85);
  d_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_37, (ATerm) ATinsert(ATinsert(ATempty, term_p_85), term_o_85));
  t = t_14(c_104, d_104, t);
  t = term_c_86;
  t = xtc_find_path_0_0(t);
  i_103 = t;
  t = term_i_86;
  b_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_103, term_i_86);
  t = u_14(i_103, b_104, t);
  c_103 = t;
  t = term_c_86;
  t = xtc_find_path_0_0(t);
  g_103 = t;
  t = term_i_86;
  a_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_103, term_i_86);
  t = u_14(g_103, a_104, t);
  d_103 = t;
  t = term_o_86;
  t = xtc_find_path_0_0(t);
  f_103 = t;
  t = term_i_86;
  z_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_103, term_i_86);
  t = u_14(f_103, z_103, t);
  e_103 = t;
  t = term_j_36;
  x_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_103), term_h_60), d_103), term_h_60), c_103), term_h_60);
  y_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_103), term_h_60), d_103), term_h_60), c_103), term_h_60));
  t = t_14(x_103, y_103, t);
  t = term_c_86;
  t = xtc_find_path_0_0(t);
  z_102 = t;
  t = term_p_86;
  w_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_102, term_p_86);
  t = u_14(z_102, w_103, t);
  n_102 = t;
  t = term_o_86;
  t = xtc_find_path_0_0(t);
  p_102 = t;
  t = term_s_86;
  v_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_102, term_s_86);
  t = u_14(p_102, v_103, t);
  o_102 = t;
  t = term_c_36;
  r_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_87), term_e_87), o_102), term_t_86), term_d_87), term_z_86), n_102), term_t_86);
  s_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_87), term_e_87), o_102), term_t_86), term_d_87), term_z_86), n_102), term_t_86));
  t = t_14(r_103, s_103, t);
  t = term_f_56;
  o_103 = t;
  t = term_j_87;
  p_103 = t;
  t = term_a_88;
  t = t_14(o_103, p_103, t);
  t = term_d_55;
  m_103 = t;
  t = (ATerm) ATinsert(ATempty, term_b_88);
  n_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_55, (ATerm) ATinsert(ATempty, term_b_88));
  t = t_14(m_103, n_103, t);
  t = m_102;
  return(t);
}
static ATerm x_34 (ATerm t)
{
  ATerm l_106 = NULL,m_106 = NULL,p_106 = NULL;
  l_106 = t;
  t = term_q_35;
  m_106 = t;
  t = term_z_54;
  p_106 = t;
  t = term_c_88;
  t = o_14(m_106, p_106, t);
  t = debug_1_0(y_34, t);
  t = l_106;
  return(t);
}
static ATerm y_34 (ATerm t)
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
        ATerm z_104 = NULL,a_105 = NULL,b_105 = NULL,g_105 = NULL,j_105 = NULL;
        t = term_q_35;
        g_105 = t;
        t = term_k_74;
        j_105 = t;
        t = term_g_88;
        t = o_14(g_105, j_105, t);
        t = term_h_88;
        t = xtc_find_0_0(t);
        z_104 = t;
        t = term_a_37;
        b_105 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_104, term_a_37);
        t = x_13(z_104, b_105, t);
        t = term_l_35;
        a_105 = t;
        t = SSL_exit(a_105);
        LocalPopChoice(f_88);
      }
    else
      {
        t = e_88;
      }
  }
  {
    ATerm i_88 = t;
    int j_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_105 = NULL,s_105 = NULL,t_105 = NULL;
        t = term_q_35;
        s_105 = t;
        t = term_n_74;
        t_105 = t;
        t = term_k_88;
        t = o_14(s_105, t_105, t);
        t = strc_version_0_0(t);
        t = term_l_35;
        q_105 = t;
        t = SSL_exit(q_105);
        LocalPopChoice(j_88);
      }
    else
      {
        t = i_88;
      }
  }
  {
    ATerm p_88 = t;
    int q_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_105 = NULL,d_106 = NULL,e_106 = NULL;
        z_105 = t;
        t = term_q_35;
        d_106 = t;
        t = term_z_54;
        e_106 = t;
        t = term_c_88;
        t = o_14(d_106, e_106, t);
        t = z_105;
        LocalPopChoice(q_88);
      }
    else
      {
        t = p_88;
        {
          ATerm f_106 = NULL,j_106 = NULL,k_106 = NULL;
          t = term_v_35;
          j_106 = t;
          t = (ATerm) ATinsert(ATempty, term_t_88);
          k_106 = t;
          t = SSL_printnl(j_106, k_106);
          t = term_t_38;
          f_106 = t;
          t = SSL_exit(f_106);
          t = (ATerm) ATinsert(ATempty, term_t_88);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(x_34, t);
  return(t);
}
static ATerm c_35 (ATerm t)
{
  t = if_verbose1_1_0(h_35, t);
  return(t);
}
static ATerm d_35 (ATerm t)
{
  t = xtc_temp_files_1_0(j_35, t);
  return(t);
}
static ATerm h_35 (ATerm t)
{
  ATerm w_106 = NULL,y_106 = NULL,z_106 = NULL;
  w_106 = t;
  t = term_v_35;
  y_106 = t;
  t = (ATerm) ATinsert(CheckATermList(w_106), term_u_88);
  z_106 = t;
  t = SSL_printnl(y_106, z_106);
  t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(CheckATermList(w_106), term_u_88));
  return(t);
}
static ATerm j_35 (ATerm t)
{
  ATerm v_88 = t;
  int z_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_107 = NULL,b_107 = NULL,c_107 = NULL;
      t = term_q_35;
      b_107 = t;
      t = term_z_54;
      c_107 = t;
      t = term_c_88;
      t = o_14(b_107, c_107, t);
      a_107 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_107);
      LocalPopChoice(z_88);
    }
  else
    {
      t = v_88;
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
  ATerm d_107 = NULL,f_107 = NULL,g_107 = NULL;
  t = run_time_0_0(t);
  d_107 = t;
  t = term_v_35;
  f_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_89), d_107), term_a_89);
  g_107 = t;
  t = SSL_printnl(f_107, g_107);
  t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_89), d_107), term_a_89));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm c_89 = t;
  int d_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_106 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(c_35, d_35, t);
      t = if_verbose2_1_0(k_35, t);
      t = term_l_35;
      q_106 = t;
      t = SSL_exit(q_106);
      LocalPopChoice(d_89);
    }
  else
    {
      t = c_89;
      {
        ATerm h_107 = NULL,i_107 = NULL,j_107 = NULL,m_107 = NULL;
        t = run_time_0_0(t);
        h_107 = t;
        t = term_v_35;
        j_107 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_89), h_107), term_f_89);
        m_107 = t;
        t = SSL_printnl(j_107, m_107);
        t = term_t_38;
        i_107 = t;
        t = SSL_exit(i_107);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
